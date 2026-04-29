// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D10
// Name:            .segm_adjust_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D10 jmp     cs:off_95670
//
// Resolved target: segm_adjust_ea
// Target address:  0x960C0
// GOT/IAT slot:    0x95670
// Slot symbol:     off_95670
// Target type:     <no type info>
// ============================================================

void .segm_adjust_ea(/* see target signature */)
{
    // Tail-call to segm_adjust_ea via GOT/IAT indirection
    return segm_adjust_ea(/* forwarded args */);
}

