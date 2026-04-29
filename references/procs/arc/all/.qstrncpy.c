// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x88A0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x88A0 jmp     cs:off_2A438
//
// Resolved target: qstrncpy
// Target address:  0x2BE60
// GOT/IAT slot:    0x2A438
// Slot symbol:     off_2A438
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

