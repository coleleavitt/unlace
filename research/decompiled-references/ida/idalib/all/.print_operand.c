// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84D0
// Name:            .print_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84D0 jmp     cs:off_2C79A50
//
// Resolved target: print_operand
// Target address:  0x574630
// GOT/IAT slot:    0x2C79A50
// Slot symbol:     off_2C79A50
// Target type:     <no type info>
// ============================================================

void .print_operand(/* see target signature */)
{
    // Tail-call to print_operand via GOT/IAT indirection
    return print_operand(/* forwarded args */);
}

