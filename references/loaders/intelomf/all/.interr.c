// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_5030
//
// Resolved target: interr
// Target address:  0x5278
// GOT/IAT slot:    0x5030
// Slot symbol:     off_5030
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

