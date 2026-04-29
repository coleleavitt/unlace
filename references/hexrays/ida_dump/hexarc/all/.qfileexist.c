// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADF0
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADF0 jmp     cs:off_4B9EE0
//
// Resolved target: qfileexist
// Target address:  0x4BC910
// GOT/IAT slot:    0x4B9EE0
// Slot symbol:     off_4B9EE0
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

