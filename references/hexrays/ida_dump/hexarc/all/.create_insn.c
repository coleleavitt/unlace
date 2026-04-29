// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29600
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29600 jmp     cs:off_4B92E8
//
// Resolved target: create_insn
// Target address:  0x4BBCB8
// GOT/IAT slot:    0x4B92E8
// Slot symbol:     off_4B92E8
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

