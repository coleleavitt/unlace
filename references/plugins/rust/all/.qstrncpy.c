// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23B0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23B0 jmp     cs:off_A1C0
//
// Resolved target: qstrncpy
// Target address:  0xB4A8
// GOT/IAT slot:    0xA1C0
// Slot symbol:     off_A1C0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

