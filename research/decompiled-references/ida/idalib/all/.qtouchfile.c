// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89A0
// Name:            .qtouchfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89A0 jmp     cs:off_2C79CB8
//
// Resolved target: qtouchfile
// Target address:  0x83EE50
// GOT/IAT slot:    0x2C79CB8
// Slot symbol:     off_2C79CB8
// Target type:     <no type info>
// ============================================================

void .qtouchfile(/* see target signature */)
{
    // Tail-call to qtouchfile via GOT/IAT indirection
    return qtouchfile(/* forwarded args */);
}

