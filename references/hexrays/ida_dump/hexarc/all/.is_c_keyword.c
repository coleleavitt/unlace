// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x292C0
// Name:            .is_c_keyword
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x292C0 jmp     cs:off_4B9148
//
// Resolved target: is_c_keyword
// Target address:  0x4BBB18
// GOT/IAT slot:    0x4B9148
// Slot symbol:     off_4B9148
// Target type:     <no type info>
// ============================================================

void .is_c_keyword(/* see target signature */)
{
    // Tail-call to is_c_keyword via GOT/IAT indirection
    return is_c_keyword(/* forwarded args */);
}

