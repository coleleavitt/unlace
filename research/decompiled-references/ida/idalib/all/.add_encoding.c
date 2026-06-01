// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D10
// Name:            .add_encoding
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D10 jmp     cs:off_2C79E70
//
// Resolved target: add_encoding
// Target address:  0x5A9EB0
// GOT/IAT slot:    0x2C79E70
// Slot symbol:     off_2C79E70
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .add_encoding(/* see target signature */)
{
    // Tail-call to add_encoding via GOT/IAT indirection
    return add_encoding(/* forwarded args */);
}

