// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65A0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65A0 jmp     cs:off_8D2B8
//
// Resolved target: get_idati
// Target address:  0x8D860
// GOT/IAT slot:    0x8D2B8
// Slot symbol:     off_8D2B8
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

