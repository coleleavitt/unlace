// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B060
// Name:            .create_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B060 jmp     cs:create_insn_ptr
//
// Resolved target: create_insn
// Target address:  0x8D9660
// GOT/IAT slot:    0x8A44D0
// Slot symbol:     create_insn_ptr
// Target type:     <no type info>
// ============================================================

void .create_insn(/* see target signature */)
{
    // Tail-call to create_insn via GOT/IAT indirection
    return create_insn(/* forwarded args */);
}

