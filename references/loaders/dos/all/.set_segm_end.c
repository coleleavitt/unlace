// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .set_segm_end
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_B0B0
//
// Resolved target: set_segm_end
// Target address:  0xB548
// GOT/IAT slot:    0xB0B0
// Slot symbol:     off_B0B0
// Target type:     <no type info>
// ============================================================

void .set_segm_end(/* see target signature */)
{
    // Tail-call to set_segm_end via GOT/IAT indirection
    return set_segm_end(/* forwarded args */);
}

