// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AE10
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AE10 jmp     cs:off_4B9EF0
//
// Resolved target: qmkdir
// Target address:  0x4BC920
// GOT/IAT slot:    0x4B9EF0
// Slot symbol:     off_4B9EF0
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

