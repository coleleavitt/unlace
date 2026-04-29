// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170 jmp     cs:off_40A0
//
// Resolved target: qstrncpy
// Target address:  0x45C0
// GOT/IAT slot:    0x40A0
// Slot symbol:     off_40A0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

