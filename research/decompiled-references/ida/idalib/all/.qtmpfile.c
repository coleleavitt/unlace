// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B70
// Name:            .qtmpfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B70 jmp     cs:off_2C795A0
//
// Resolved target: qtmpfile
// Target address:  0x83EFE0
// GOT/IAT slot:    0x2C795A0
// Slot symbol:     off_2C795A0
// Target type:     <no type info>
// ============================================================

void .qtmpfile(/* see target signature */)
{
    // Tail-call to qtmpfile via GOT/IAT indirection
    return qtmpfile(/* forwarded args */);
}

