// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD0
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD0 jmp     cs:off_4B9D50
//
// Resolved target: get_encoding_name
// Target address:  0x4BC770
// GOT/IAT slot:    0x4B9D50
// Slot symbol:     off_4B9D50
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

