// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56D0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56D0 jmp     cs:off_15350
//
// Resolved target: qstrncpy
// Target address:  0x163F8
// GOT/IAT slot:    0x15350
// Slot symbol:     off_15350
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

