// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1137C0
// Name:            .rename_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1137C0 jmp     cs:rename_encoding_ptr
//
// Resolved target: rename_encoding
// Target address:  0x8D4A18
// GOT/IAT slot:    0x8A0880
// Slot symbol:     rename_encoding_ptr
// Target type:     <no type info>
// ============================================================

void .rename_encoding(/* see target signature */)
{
    // Tail-call to rename_encoding via GOT/IAT indirection
    return rename_encoding(/* forwarded args */);
}

