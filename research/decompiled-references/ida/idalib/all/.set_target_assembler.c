// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB3B0
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB3B0 jmp     cs:off_2C7B1C0
//
// Resolved target: set_target_assembler
// Target address:  0x39CF10
// GOT/IAT slot:    0x2C7B1C0
// Slot symbol:     off_2C7B1C0
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}

