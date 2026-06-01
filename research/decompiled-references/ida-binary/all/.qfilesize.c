// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113F80
// Name:            .qfilesize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113F80 jmp     cs:qfilesize_ptr
//
// Resolved target: qfilesize
// Target address:  0x8D4F20
// GOT/IAT slot:    0x8A0C60
// Slot symbol:     qfilesize_ptr
// Target type:     <no type info>
// ============================================================

void .qfilesize(/* see target signature */)
{
    // Tail-call to qfilesize via GOT/IAT indirection
    return qfilesize(/* forwarded args */);
}

