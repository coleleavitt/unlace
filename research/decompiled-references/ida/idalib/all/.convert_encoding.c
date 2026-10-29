// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F80
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F80 jmp     cs:off_2C7A7A8
//
// Resolved target: convert_encoding
// Target address:  0x82C5D0
// GOT/IAT slot:    0x2C7A7A8
// Slot symbol:     off_2C7A7A8
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

