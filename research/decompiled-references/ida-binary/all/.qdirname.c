// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115170
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115170 jmp     cs:qdirname_ptr
//
// Resolved target: qdirname
// Target address:  0x8D5AA0
// GOT/IAT slot:    0x8A1558
// Slot symbol:     qdirname_ptr
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

