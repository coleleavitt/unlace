// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5610
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5610 jmp     cs:off_152F0
//
// Resolved target: qstrncat
// Target address:  0x16398
// GOT/IAT slot:    0x152F0
// Slot symbol:     off_152F0
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

