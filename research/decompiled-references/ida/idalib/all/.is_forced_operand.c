// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC240
// Name:            .is_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC240 jmp     cs:off_2C7B908
//
// Resolved target: is_forced_operand
// Target address:  0x3C57E0
// GOT/IAT slot:    0x2C7B908
// Slot symbol:     off_2C7B908
// Target type:     <no type info>
// ============================================================

void .is_forced_operand(/* see target signature */)
{
    // Tail-call to is_forced_operand via GOT/IAT indirection
    return is_forced_operand(/* forwarded args */);
}

