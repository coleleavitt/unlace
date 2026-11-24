//! Retry exact switch-guard intersections after the candidate domain narrows.

use crate::context::VarnodeId;
use crate::funcdata::Funcdata;
use crate::jumptable::GuardRecord;
use crate::rangeutil::CircleRange;

#[doc(hidden)]

pub fn intersect(fd: &Funcdata, guards: &[GuardRecord], vn: VarnodeId, range: &mut CircleRange) {
    let mut bits_preserved = 0;
    let base_vn = GuardRecord::quasi_copy(fd, vn, &mut bits_preserved);
    let trace = std::env::var_os("UNLACE_JT_TRACE").is_some();
    for guard in guards {
        let m = guard.value_match(fd, vn, base_vn, bits_preserved);
        if m != 0 {
            let r = range.intersect(guard.get_range());
            if trace {
                eprintln!(
                    "JT     match {:?} guard={:?} ret={} now={:?}",
                    vn,
                    guard.get_range(),
                    r,
                    range
                );
            }
        } else if trace {
            eprintln!("JT     nomatch {:?} guard={:?}", vn, guard.get_range());
        }
    }
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.switchguardrange_intersect = Some(intersect);
}
