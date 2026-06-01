// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115AE0
// Name:            .convert_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115AE0 jmp     cs:convert_encoding_ptr
//
// Resolved target: convert_encoding
// Target address:  0x8D6088
// GOT/IAT slot:    0x8A1A10
// Slot symbol:     convert_encoding_ptr
// Target type:     <no type info>
// ============================================================

void .convert_encoding(/* see target signature */)
{
    // Tail-call to convert_encoding via GOT/IAT indirection
    return convert_encoding(/* forwarded args */);
}

