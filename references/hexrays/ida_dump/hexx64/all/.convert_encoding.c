// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCA0
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCA0 jmp     cs:off_4ED638
//
// Resolved target: convert_encoding
// Target address:  0x4F1948
// GOT/IAT slot:    0x4ED638
// Slot symbol:     off_4ED638
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

