// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB90
// Name:            .qfileexist
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB90 jmp     cs:off_2C7BDB0
//
// Resolved target: qfileexist
// Target address:  0x83EC60
// GOT/IAT slot:    0x2C7BDB0
// Slot symbol:     off_2C7BDB0
// Target type:     <no type info>
// ============================================================

void .qfileexist(/* see target signature */)
{
    // Tail-call to qfileexist via GOT/IAT indirection
    return qfileexist(/* forwarded args */);
}

