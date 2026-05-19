//! `ida_segment` — segment / section access.

use unlace_session::Session;

use crate::coverage;

/// A segment descriptor analogous to IDA's `segment_t`.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Segment {
    pub start_ea: u64,
    pub end_ea: u64,
    pub name: String,
    pub readable: bool,
    pub writable: bool,
    pub executable: bool,
}

/// `ida_segment.getseg(ea)` — return the segment containing ea.
pub fn getseg(session: &Session, ea: u64) -> Option<Segment> {
    coverage::mark_implemented("ida_segment.getseg");
    session.with_binary(|img| {
        img.sections
            .iter()
            .find(|s| ea >= s.vaddr && ea < s.vaddr + s.size as u64)
            .map(|s| Segment {
                start_ea: s.vaddr,
                end_ea: s.vaddr + s.size as u64,
                name: s.name.clone(),
                readable: s.flags.contains(unlace_loader::SectionFlags::READ),
                writable: s.flags.contains(unlace_loader::SectionFlags::WRITE),
                executable: s.flags.contains(unlace_loader::SectionFlags::EXEC),
            })
    })?
}

/// `ida_segment.get_segm_name(seg)` — segment name.
pub fn get_segm_name(seg: &Segment) -> String {
    coverage::mark_implemented("ida_segment.get_segm_name");
    seg.name.clone()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_segment_descriptor_constructible() {
        let seg = Segment {
            start_ea: 0x400000,
            end_ea: 0x401000,
            name: ".text".into(),
            readable: true,
            writable: false,
            executable: true,
        };
        assert_eq!(get_segm_name(&seg), ".text");
    }

    #[test]
    fn test_getseg_empty_session() {
        let s = Session::new();
        assert!(getseg(&s, 0x400000).is_none());
    }
}
