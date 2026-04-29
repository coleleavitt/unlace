// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD80
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD80 jmp     cs:off_4EDEA8
//
// Resolved target: qstrncat
// Target address:  0x4F21F0
// GOT/IAT slot:    0x4EDEA8
// Slot symbol:     off_4EDEA8
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

