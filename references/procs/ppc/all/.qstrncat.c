// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D30
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D30 jmp     cs:off_95680
//
// Resolved target: qstrncat
// Target address:  0x960D0
// GOT/IAT slot:    0x95680
// Slot symbol:     off_95680
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

