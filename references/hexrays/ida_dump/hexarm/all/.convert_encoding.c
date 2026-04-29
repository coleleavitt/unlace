// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC70
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC70 jmp     cs:off_4E9620
//
// Resolved target: convert_encoding
// Target address:  0x4EC038
// GOT/IAT slot:    0x4E9620
// Slot symbol:     off_4E9620
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

