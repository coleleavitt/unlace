// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A86F0
// Name:            .get_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A86F0 jmp     cs:off_2C79B60
//
// Resolved target: get_forced_operand
// Target address:  0x3C5170
// GOT/IAT slot:    0x2C79B60
// Slot symbol:     off_2C79B60
// Target type:     <no type info>
// ============================================================

void .get_forced_operand(/* see target signature */)
{
    // Tail-call to get_forced_operand via GOT/IAT indirection
    return get_forced_operand(/* forwarded args */);
}

