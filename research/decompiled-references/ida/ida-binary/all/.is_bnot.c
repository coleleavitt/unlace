// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E90
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E90 jmp     cs:is_bnot_ptr
//
// Resolved target: is_bnot
// Target address:  0x8D39E8
// GOT/IAT slot:    0x89FBE8
// Slot symbol:     is_bnot_ptr
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

