// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9C50
// Name:            .free_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9C50 jmp     cs:off_2C7A610
//
// Resolved target: free_regvar
// Target address:  0x6749C0
// GOT/IAT slot:    0x2C7A610
// Slot symbol:     off_2C7A610
// Target type:     <no type info>
// ============================================================

void .free_regvar(/* see target signature */)
{
    // Tail-call to free_regvar via GOT/IAT indirection
    return free_regvar(/* forwarded args */);
}

