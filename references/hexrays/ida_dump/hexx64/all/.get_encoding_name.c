// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CBF0
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CBF0 jmp     cs:off_4EDDE0
//
// Resolved target: get_encoding_name
// Target address:  0x4F2120
// GOT/IAT slot:    0x4EDDE0
// Slot symbol:     off_4EDDE0
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

