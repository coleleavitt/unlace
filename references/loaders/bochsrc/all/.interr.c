// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_4040
//
// Resolved target: interr
// Target address:  0x5180
// GOT/IAT slot:    0x4040
// Slot symbol:     off_4040
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

