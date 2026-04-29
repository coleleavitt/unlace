// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE50
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE50 jmp     cs:off_4E9F10
//
// Resolved target: qfileexist
// Target address:  0x4EC960
// GOT/IAT slot:    0x4E9F10
// Slot symbol:     off_4E9F10
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

