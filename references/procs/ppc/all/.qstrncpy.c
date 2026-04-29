// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E90
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E90 jmp     cs:off_95730
//
// Resolved target: qstrncpy
// Target address:  0x96180
// GOT/IAT slot:    0x95730
// Slot symbol:     off_95730
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

