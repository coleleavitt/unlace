// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A380
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A380 jmp     cs:qfileexist_ptr
//
// Resolved target: qfileexist
// Target address:  0x8D8E38
// GOT/IAT slot:    0x8A3E60
// Slot symbol:     qfileexist_ptr
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

