// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6350
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6350 jmp     cs:off_24190
//
// Resolved target: insn_add_cref
// Target address:  0x25F60
// GOT/IAT slot:    0x24190
// Slot symbol:     off_24190
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

