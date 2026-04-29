// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7F0
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7F0 jmp     cs:off_4ED3E0
//
// Resolved target: set_segm_end
// Target address:  0x4F16D8
// GOT/IAT slot:    0x4ED3E0
// Slot symbol:     off_4ED3E0
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

