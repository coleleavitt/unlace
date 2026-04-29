// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7C0
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7C0 jmp     cs:off_4CD3C8
//
// Resolved target: set_segm_end
// Target address:  0x4CFDB8
// GOT/IAT slot:    0x4CD3C8
// Slot symbol:     off_4CD3C8
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

