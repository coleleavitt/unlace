// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA9B0
// Name:            .openR
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA9B0 jmp     cs:off_2C7ACC0
//
// Resolved target: openR
// Target address:  0x83B4F0
// GOT/IAT slot:    0x2C7ACC0
// Slot symbol:     off_2C7ACC0
// Target type:     <no type info>
// ============================================================

void .openR(/* see target signature */)
{
    // Tail-call to openR via GOT/IAT indirection
    return openR(/* forwarded args */);
}

