// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117D20
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117D20 jmp     cs:set_target_assembler_ptr
//
// Resolved target: set_target_assembler
// Target address:  0x8D7630
// GOT/IAT slot:    0x8A2B30
// Slot symbol:     set_target_assembler_ptr
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}

