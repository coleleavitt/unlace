// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B850
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B850 jmp     cs:off_4BFC10
//
// Resolved target: get_idati
// Target address:  0x4C3118
// GOT/IAT slot:    0x4BFC10
// Slot symbol:     off_4BFC10
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

