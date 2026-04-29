// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_8028
//
// Resolved target: qtmpnam
// Target address:  0x81E8
// GOT/IAT slot:    0x8028
// Slot symbol:     off_8028
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

