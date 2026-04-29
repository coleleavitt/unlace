// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6780
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6780 jmp     cs:off_2F3A8
//
// Resolved target: get_idati
// Target address:  0x2FA20
// GOT/IAT slot:    0x2F3A8
// Slot symbol:     off_2F3A8
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

