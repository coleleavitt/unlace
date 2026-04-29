// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C930
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C930 jmp     cs:off_4EDC80
//
// Resolved target: get_idati
// Target address:  0x4F1FB8
// GOT/IAT slot:    0x4EDC80
// Slot symbol:     off_4EDC80
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

