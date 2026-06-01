// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA4D0
// Name:            .qtmpdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA4D0 jmp     cs:off_2C7AA50
//
// Resolved target: qtmpdir
// Target address:  0x83E0C0
// GOT/IAT slot:    0x2C7AA50
// Slot symbol:     off_2C7AA50
// Target type:     <no type info>
// ============================================================

void .qtmpdir(/* see target signature */)
{
    // Tail-call to qtmpdir via GOT/IAT indirection
    return qtmpdir(/* forwarded args */);
}

