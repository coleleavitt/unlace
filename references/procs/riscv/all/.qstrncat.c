// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8D0
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8D0 jmp     cs:off_35450
//
// Resolved target: qstrncat
// Target address:  0x35AB8
// GOT/IAT slot:    0x35450
// Slot symbol:     off_35450
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

