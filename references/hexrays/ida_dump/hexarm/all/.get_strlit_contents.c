// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D220
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D220 jmp     cs:off_4E90F8
//
// Resolved target: get_strlit_contents
// Target address:  0x4EBAE8
// GOT/IAT slot:    0x4E90F8
// Slot symbol:     off_4E90F8
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

