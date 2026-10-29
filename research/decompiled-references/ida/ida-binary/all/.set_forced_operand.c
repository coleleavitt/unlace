// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118050
// Name:            .set_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118050 jmp     cs:set_forced_operand_ptr
//
// Resolved target: set_forced_operand
// Target address:  0x8D7850
// GOT/IAT slot:    0x8A2CC8
// Slot symbol:     set_forced_operand_ptr
// Target type:     <no type info>
// ============================================================

void .set_forced_operand(/* see target signature */)
{
    // Tail-call to set_forced_operand via GOT/IAT indirection
    return set_forced_operand(/* forwarded args */);
}

