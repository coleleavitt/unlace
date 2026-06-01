// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD3C0
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD3C0 jmp     cs:off_2C7C1C8
//
// Resolved target: qstrdup
// Target address:  0x83FD50
// GOT/IAT slot:    0x2C7C1C8
// Slot symbol:     off_2C7C1C8
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

