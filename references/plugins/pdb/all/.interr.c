// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D230
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D230 jmp     cs:off_B3100
//
// Resolved target: interr
// Target address:  0xB3888
// GOT/IAT slot:    0xB3100
// Slot symbol:     off_B3100
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

