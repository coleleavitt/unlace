// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AB0
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AB0 jmp     cs:off_2C7A540
//
// Resolved target: qdirname
// Target address:  0x83DD70
// GOT/IAT slot:    0x2C7A540
// Slot symbol:     off_2C7A540
// Target type:     __int64 __fastcall(void *dest)
// ============================================================

/* see target sig */ .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

