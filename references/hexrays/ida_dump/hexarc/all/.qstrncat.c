// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC40
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC40 jmp     cs:off_4B9E08
//
// Resolved target: qstrncat
// Target address:  0x4BC830
// GOT/IAT slot:    0x4B9E08
// Slot symbol:     off_4B9E08
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

