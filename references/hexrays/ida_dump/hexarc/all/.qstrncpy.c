// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF70
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF70 jmp     cs:off_4B9FA0
//
// Resolved target: qstrncpy
// Target address:  0x4BC9D0
// GOT/IAT slot:    0x4B9FA0
// Slot symbol:     off_4B9FA0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

