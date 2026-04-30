// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118770
// Name:            .is_uname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118770 jmp     cs:is_uname_ptr
//
// Resolved target: is_uname
// Target address:  0x8D7CA0
// GOT/IAT slot:    0x8A3058
// Slot symbol:     is_uname_ptr
// Target type:     <no type info>
// ============================================================

void .is_uname(/* see target signature */)
{
    // Tail-call to is_uname via GOT/IAT indirection
    return is_uname(/* forwarded args */);
}

