// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A610
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A610 jmp     cs:off_4B9AF0
//
// Resolved target: qfilesize
// Target address:  0x4BC4F8
// GOT/IAT slot:    0x4B9AF0
// Slot symbol:     off_4B9AF0
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

