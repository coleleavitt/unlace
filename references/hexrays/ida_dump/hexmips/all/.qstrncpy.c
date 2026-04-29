// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFA0
// Name:            .qstrncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFA0 jmp     cs:off_4CDFB8
//
// Resolved target: qstrncpy
// Target address:  0x4D0A08
// GOT/IAT slot:    0x4CDFB8
// Slot symbol:     off_4CDFB8
// Target type:     <no type info>
// ============================================================

void .qstrncpy(/* see target signature */)
{
    // Tail-call to qstrncpy via GOT/IAT indirection
    return qstrncpy(/* forwarded args */);
}

