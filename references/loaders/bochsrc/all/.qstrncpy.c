// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_40C8
//
// Resolved target: qstrncpy
// Target address:  0x5218
// GOT/IAT slot:    0x40C8
// Slot symbol:     off_40C8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

