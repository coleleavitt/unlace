// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E890
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E890 jmp     cs:off_4E9C30
//
// Resolved target: get_idati
// Target address:  0x4EC660
// GOT/IAT slot:    0x4E9C30
// Slot symbol:     off_4E9C30
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

