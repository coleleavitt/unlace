// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29C50
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29C50 jmp     cs:off_4B9610
//
// Resolved target: convert_encoding
// Target address:  0x4BC008
// GOT/IAT slot:    0x4B9610
// Slot symbol:     off_4B9610
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

