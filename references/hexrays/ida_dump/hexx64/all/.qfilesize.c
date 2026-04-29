// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C700
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C700 jmp     cs:off_4EDB68
//
// Resolved target: qfilesize
// Target address:  0x4F1E98
// GOT/IAT slot:    0x4EDB68
// Slot symbol:     off_4EDB68
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

