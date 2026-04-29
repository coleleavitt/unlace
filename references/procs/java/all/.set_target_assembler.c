// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64A0
// Name:            .set_target_assembler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64A0 jmp     cs:off_2D238
//
// Resolved target: set_target_assembler
// Target address:  0x2D738
// GOT/IAT slot:    0x2D238
// Slot symbol:     off_2D238
// Target type:     <no type info>
// ============================================================

void .set_target_assembler(/* see target signature */)
{
    // Tail-call to set_target_assembler via GOT/IAT indirection
    return set_target_assembler(/* forwarded args */);
}

