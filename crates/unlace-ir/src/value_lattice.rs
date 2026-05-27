//! Shared scalar value/range lattice.
//!
//! This is the common fact domain for constant propagation, range reasoning,
//! and simple condition simplification.

#[derive(Copy, Clone, Debug, PartialEq, Eq, Hash)]
pub enum ValueLattice {
    Unknown,
    Undef,
    Constant(u64),
    Range { min: u64, max: u64 },
    Overdefined,
}

impl ValueLattice {
    pub fn join(self, other: Self) -> Self {
        use ValueLattice::*;
        match (self, other) {
            (Overdefined, _) | (_, Overdefined) => Overdefined,
            (Unknown, x) | (x, Unknown) => x,
            (Undef, x) | (x, Undef) => x,
            (Constant(a), Constant(b)) if a == b => Constant(a),
            (Constant(a), Constant(b)) => ordered_range(a, b),
            (Constant(c), Range { min, max }) | (Range { min, max }, Constant(c)) => Range {
                min: min.min(c),
                max: max.max(c),
            },
            (Range { min: a0, max: a1 }, Range { min: b0, max: b1 }) => Range {
                min: a0.min(b0),
                max: a1.max(b1),
            },
        }
    }

    pub fn meet(self, other: Self) -> Self {
        use ValueLattice::*;
        match (self, other) {
            (Unknown, _) | (_, Unknown) => Unknown,
            (Overdefined, x) | (x, Overdefined) => x,
            (Undef, x) | (x, Undef) => x,
            (Constant(a), Constant(b)) if a == b => Constant(a),
            (Constant(_), Constant(_)) => Unknown,
            (Constant(c), Range { min, max }) | (Range { min, max }, Constant(c)) => {
                if (min..=max).contains(&c) {
                    Constant(c)
                } else {
                    Unknown
                }
            }
            (Range { min: a0, max: a1 }, Range { min: b0, max: b1 }) => {
                let min = a0.max(b0);
                let max = a1.min(b1);
                if min > max {
                    Unknown
                } else if min == max {
                    Constant(min)
                } else {
                    Range { min, max }
                }
            }
        }
    }

    pub fn contains(self, value: u64) -> bool {
        match self {
            Self::Unknown | Self::Overdefined | Self::Undef => false,
            Self::Constant(c) => c == value,
            Self::Range { min, max } => (min..=max).contains(&value),
        }
    }

    pub fn as_constant(self) -> Option<u64> {
        match self {
            Self::Constant(c) => Some(c),
            _ => None,
        }
    }
}

fn ordered_range(a: u64, b: u64) -> ValueLattice {
    ValueLattice::Range {
        min: a.min(b),
        max: a.max(b),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn join_widens_conflicting_constants_to_range() {
        assert_eq!(
            ValueLattice::Constant(2).join(ValueLattice::Constant(5)),
            ValueLattice::Range { min: 2, max: 5 }
        );
    }

    #[test]
    fn meet_intersects_ranges() {
        assert_eq!(
            ValueLattice::Range { min: 0, max: 10 }.meet(ValueLattice::Range { min: 4, max: 12 }),
            ValueLattice::Range { min: 4, max: 10 }
        );
    }

    #[test]
    fn contains_checks_precise_facts() {
        assert!(ValueLattice::Range { min: 4, max: 8 }.contains(6));
        assert!(!ValueLattice::Constant(4).contains(5));
        assert_eq!(ValueLattice::Constant(9).as_constant(), Some(9));
    }
}
