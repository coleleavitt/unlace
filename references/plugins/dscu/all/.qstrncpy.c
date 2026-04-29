// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4450
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4450 jmp     cs:off_1F210
//
// Resolved target: qstrncpy
// Target address:  0x1F4E0
// GOT/IAT slot:    0x1F210
// Slot symbol:     off_1F210
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

