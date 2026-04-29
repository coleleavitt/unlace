// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x204E0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x204E0 jmp     cs:off_95258
//
// Resolved target: qstrlwr
// Target address:  0x95C90
// GOT/IAT slot:    0x95258
// Slot symbol:     off_95258
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

