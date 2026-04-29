// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECA0
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECA0 jmp     cs:off_4E9E38
//
// Resolved target: qstrncat
// Target address:  0x4EC880
// GOT/IAT slot:    0x4E9E38
// Slot symbol:     off_4E9E38
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

