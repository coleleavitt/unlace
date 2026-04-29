// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1080
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1080 jmp     cs:off_4028
//
// Resolved target: qdirname
// Target address:  0x5168
// GOT/IAT slot:    0x4028
// Slot symbol:     off_4028
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

