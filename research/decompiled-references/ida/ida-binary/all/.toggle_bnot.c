// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117880
// Name:            .toggle_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117880 jmp     cs:toggle_bnot_ptr
//
// Resolved target: toggle_bnot
// Target address:  0x8D7358
// GOT/IAT slot:    0x8A28E0
// Slot symbol:     toggle_bnot_ptr
// Target type:     <no type info>
// ============================================================

void .toggle_bnot(/* see target signature */)
{
    // Tail-call to toggle_bnot via GOT/IAT indirection
    return toggle_bnot(/* forwarded args */);
}

