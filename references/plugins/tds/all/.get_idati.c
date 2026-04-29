// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_A148
//
// Resolved target: get_idati
// Target address:  0xA380
// GOT/IAT slot:    0xA148
// Slot symbol:     off_A148
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

