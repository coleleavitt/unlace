// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115420
// Name:            .auto_recreate_insn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115420 jmp     cs:auto_recreate_insn_ptr
//
// Resolved target: auto_recreate_insn
// Target address:  0x8D5C68
// GOT/IAT slot:    0x8A16B0
// Slot symbol:     auto_recreate_insn_ptr
// Target type:     <no type info>
// ============================================================

void .auto_recreate_insn(/* see target signature */)
{
    // Tail-call to auto_recreate_insn via GOT/IAT indirection
    return auto_recreate_insn(/* forwarded args */);
}

