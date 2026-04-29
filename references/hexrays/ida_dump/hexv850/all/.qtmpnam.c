// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A200
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A200 jmp     cs:off_4C00E8
//
// Resolved target: qtmpnam
// Target address:  0x4C30B0
// GOT/IAT slot:    0x4C00E8
// Slot symbol:     off_4C00E8
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

