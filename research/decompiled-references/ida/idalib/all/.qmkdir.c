// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A82A0
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A82A0 jmp     cs:off_2C79938
//
// Resolved target: qmkdir
// Target address:  0x83EAB0
// GOT/IAT slot:    0x2C79938
// Slot symbol:     off_2C79938
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

