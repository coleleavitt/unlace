// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1270
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1270 jmp     cs:off_5120
//
// Resolved target: qstrncpy
// Target address:  0x52B0
// GOT/IAT slot:    0x5120
// Slot symbol:     off_5120
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

