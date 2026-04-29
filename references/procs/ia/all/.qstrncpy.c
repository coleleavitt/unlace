// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73B0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73B0 jmp     cs:off_261C0
//
// Resolved target: qstrncpy
// Target address:  0x26490
// GOT/IAT slot:    0x261C0
// Slot symbol:     off_261C0
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

