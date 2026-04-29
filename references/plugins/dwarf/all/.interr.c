// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA280
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA280 jmp     cs:off_CA128
//
// Resolved target: interr
// Target address:  0xD0A58
// GOT/IAT slot:    0xCA128
// Slot symbol:     off_CA128
// Target type:     <no type info>
// ============================================================

void .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

