// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A650
// Name:            .apply_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A650 jmp     cs:off_4C0310
//
// Resolved target: apply_tinfo
// Target address:  0x4C32D8
// GOT/IAT slot:    0x4C0310
// Slot symbol:     off_4C0310
// Target type:     <no type info>
// ============================================================

void .apply_tinfo(/* see target signature */)
{
    // Tail-call to apply_tinfo via GOT/IAT indirection
    return apply_tinfo(/* forwarded args */);
}

