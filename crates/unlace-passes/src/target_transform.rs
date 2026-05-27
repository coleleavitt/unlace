//! Target transform quality/cost model.

use unlace_ir::DataLayout;

#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum TransformBenefit {
    Negative,
    Neutral,
    Positive,
}

#[derive(Copy, Clone, Debug)]
pub struct TargetTransformInfo {
    pub layout: DataLayout,
}

impl TargetTransformInfo {
    pub fn new(layout: DataLayout) -> Self {
        Self { layout }
    }

    pub fn prefer_pointer_indexing(&self, scale: u64) -> TransformBenefit {
        if scale == u64::from(self.layout.pointer_size) {
            TransformBenefit::Positive
        } else if scale == 1 {
            TransformBenefit::Neutral
        } else {
            TransformBenefit::Negative
        }
    }
}

#[cfg(test)]
mod tests {
    use unlace_ir::{ArchId, DataLayout};

    use super::*;

    #[test]
    fn pointer_sized_scale_is_preferred() {
        let tti = TargetTransformInfo::new(DataLayout::for_arch(ArchId::X86_64));
        assert_eq!(tti.prefer_pointer_indexing(8), TransformBenefit::Positive);
    }
}
