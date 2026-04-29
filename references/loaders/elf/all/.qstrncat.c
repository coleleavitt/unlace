// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98C0
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98C0 jmp     cs:off_89448
//
// Resolved target: qstrncat
// Target address:  0x8C770
// GOT/IAT slot:    0x89448
// Slot symbol:     off_89448
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

