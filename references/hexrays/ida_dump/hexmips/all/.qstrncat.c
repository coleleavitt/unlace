// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC70
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC70 jmp     cs:off_4CDE20
//
// Resolved target: qstrncat
// Target address:  0x4D0868
// GOT/IAT slot:    0x4CDE20
// Slot symbol:     off_4CDE20
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

