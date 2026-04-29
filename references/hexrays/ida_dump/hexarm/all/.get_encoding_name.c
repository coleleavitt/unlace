// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB30
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB30 jmp     cs:off_4E9D80
//
// Resolved target: get_encoding_name
// Target address:  0x4EC7C0
// GOT/IAT slot:    0x4E9D80
// Slot symbol:     off_4E9D80
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

