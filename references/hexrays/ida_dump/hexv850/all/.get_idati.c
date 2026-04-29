// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B860
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B860 jmp     cs:off_4C0C18
//
// Resolved target: get_idati
// Target address:  0x4C3C20
// GOT/IAT slot:    0x4C0C18
// Slot symbol:     off_4C0C18
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

