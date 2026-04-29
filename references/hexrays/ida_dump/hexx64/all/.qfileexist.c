// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF40
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF40 jmp     cs:off_4EDF88
//
// Resolved target: qfileexist
// Target address:  0x4F22D8
// GOT/IAT slot:    0x4EDF88
// Slot symbol:     off_4EDF88
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

