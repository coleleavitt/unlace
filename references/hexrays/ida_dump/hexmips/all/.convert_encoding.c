// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC50
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC50 jmp     cs:off_4CD610
//
// Resolved target: convert_encoding
// Target address:  0x4D0028
// GOT/IAT slot:    0x4CD610
// Slot symbol:     off_4CD610
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

