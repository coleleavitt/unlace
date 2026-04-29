// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAF0
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAF0 jmp     cs:off_4BFD60
//
// Resolved target: get_encoding_name
// Target address:  0x4C3278
// GOT/IAT slot:    0x4BFD60
// Slot symbol:     off_4BFD60
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

