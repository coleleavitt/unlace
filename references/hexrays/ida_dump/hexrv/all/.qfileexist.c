// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE10
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE10 jmp     cs:off_4BFEF0
//
// Resolved target: qfileexist
// Target address:  0x4C3418
// GOT/IAT slot:    0x4BFEF0
// Slot symbol:     off_4BFEF0
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

