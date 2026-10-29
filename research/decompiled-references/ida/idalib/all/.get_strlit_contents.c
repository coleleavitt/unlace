// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE50
// Name:            .get_strlit_contents
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE50 jmp     cs:off_2C7B710
//
// Resolved target: get_strlit_contents
// Target address:  0x35BD80
// GOT/IAT slot:    0x2C7B710
// Slot symbol:     off_2C7B710
// Target type:     <no type info>
// ============================================================

void .get_strlit_contents(/* see target signature */)
{
    // Tail-call to get_strlit_contents via GOT/IAT indirection
    return get_strlit_contents(/* forwarded args */);
}

