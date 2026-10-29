// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAA10
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAA10 jmp     cs:off_2C7ACF0
//
// Resolved target: get_idati
// Target address:  0x652AB0
// GOT/IAT slot:    0x2C7ACF0
// Slot symbol:     off_2C7ACF0
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

