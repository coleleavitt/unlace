// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29220
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29220 jmp     cs:off_4B90F8
//
// Resolved target: get_strlit_contents
// Target address:  0x4BBAC8
// GOT/IAT slot:    0x4B90F8
// Slot symbol:     off_4B90F8
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

