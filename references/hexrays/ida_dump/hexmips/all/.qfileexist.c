// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE20
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE20 jmp     cs:off_4CDEF8
//
// Resolved target: qfileexist
// Target address:  0x4D0948
// GOT/IAT slot:    0x4CDEF8
// Slot symbol:     off_4CDEF8
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

