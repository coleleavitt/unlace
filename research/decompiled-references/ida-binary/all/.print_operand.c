// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113010
// Name:            .print_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113010 jmp     cs:print_operand_ptr
//
// Resolved target: print_operand
// Target address:  0x8D4528
// GOT/IAT slot:    0x8A04A8
// Slot symbol:     print_operand_ptr
// Target type:     <no type info>
// ============================================================

void .print_operand(/* see target signature */)
{
    // Tail-call to print_operand via GOT/IAT indirection
    return print_operand(/* forwarded args */);
}

