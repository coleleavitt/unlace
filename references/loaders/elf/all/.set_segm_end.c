// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92A0
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92A0 jmp     cs:off_89138
//
// Resolved target: set_segm_end
// Target address:  0x8C438
// GOT/IAT slot:    0x89138
// Slot symbol:     off_89138
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

