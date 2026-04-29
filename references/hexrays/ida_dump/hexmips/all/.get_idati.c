// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B860
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B860 jmp     cs:off_4CDC18
//
// Resolved target: get_idati
// Target address:  0x4D0648
// GOT/IAT slot:    0x4CDC18
// Slot symbol:     off_4CDC18
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

