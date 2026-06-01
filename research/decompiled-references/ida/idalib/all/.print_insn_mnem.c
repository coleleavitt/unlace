// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA5D0
// Name:            .print_insn_mnem
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA5D0 jmp     cs:off_2C7AAD0
//
// Resolved target: print_insn_mnem
// Target address:  0x5751D0
// GOT/IAT slot:    0x2C7AAD0
// Slot symbol:     off_2C7AAD0
// Target type:     <no type info>
// ============================================================

void .print_insn_mnem(/* see target signature */)
{
    // Tail-call to print_insn_mnem via GOT/IAT indirection
    return print_insn_mnem(/* forwarded args */);
}

