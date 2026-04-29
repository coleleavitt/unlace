// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D7F0
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D7F0 jmp     cs:off_B33E0
//
// Resolved target: qfilesize
// Target address:  0xB3B80
// GOT/IAT slot:    0xB33E0
// Slot symbol:     off_B33E0
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

