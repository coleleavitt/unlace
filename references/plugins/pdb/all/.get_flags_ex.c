// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D160
// Name:            .get_flags_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D160 jmp     cs:off_B3098
//
// Resolved target: get_flags_ex
// Target address:  0xB3820
// GOT/IAT slot:    0xB3098
// Slot symbol:     off_B3098
// Target type:     <no type info>
// ============================================================

void .get_flags_ex(/* see target signature */)
{
    // Tail-call to get_flags_ex via GOT/IAT indirection
    return get_flags_ex(/* forwarded args */);
}

