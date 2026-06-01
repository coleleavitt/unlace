// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB5B0
// Name:            .set_forced_operand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB5B0 jmp     cs:off_2C7B2C0
//
// Resolved target: set_forced_operand
// Target address:  0x59A000
// GOT/IAT slot:    0x2C7B2C0
// Slot symbol:     off_2C7B2C0
// Target type:     <no type info>
// ============================================================

void .set_forced_operand(/* see target signature */)
{
    // Tail-call to set_forced_operand via GOT/IAT indirection
    return set_forced_operand(/* forwarded args */);
}

