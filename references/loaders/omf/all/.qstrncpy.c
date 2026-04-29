// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35E0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35E0 jmp     cs:off_142D8
//
// Resolved target: qstrncpy
// Target address:  0x148E8
// GOT/IAT slot:    0x142D8
// Slot symbol:     off_142D8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

