// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9980
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9980 jmp     cs:off_2C7A4A8
//
// Resolved target: qstrncat
// Target address:  0x841D40
// GOT/IAT slot:    0x2C7A4A8
// Slot symbol:     off_2C7A4A8
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

