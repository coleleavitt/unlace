// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .get_idati
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_291C8
//
// Resolved target: get_idati
// Target address:  0x29580
// GOT/IAT slot:    0x291C8
// Slot symbol:     off_291C8
// Target type:     <no type info>
// ============================================================

void .get_idati(/* see target signature */)
{
    // Tail-call to get_idati via GOT/IAT indirection
    return get_idati(/* forwarded args */);
}

