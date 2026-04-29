// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29200
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29200 jmp     cs:off_4B90E8
//
// Resolved target: qtmpnam
// Target address:  0x4BBAB8
// GOT/IAT slot:    0x4B90E8
// Slot symbol:     off_4B90E8
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

