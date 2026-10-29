// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1121D0
// Name:            .del_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1121D0 jmp     cs:del_encoding_ptr
//
// Resolved target: del_encoding
// Target address:  0x8D3BE0
// GOT/IAT slot:    0x89FD88
// Slot symbol:     del_encoding_ptr
// Target type:     <no type info>
// ============================================================

void .del_encoding(/* see target signature */)
{
    // Tail-call to del_encoding via GOT/IAT indirection
    return del_encoding(/* forwarded args */);
}

