// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD960
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD960 jmp     cs:off_2C7C498
//
// Resolved target: get_encoding_name
// Target address:  0x5A9B30
// GOT/IAT slot:    0x2C7C498
// Slot symbol:     off_2C7C498
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

