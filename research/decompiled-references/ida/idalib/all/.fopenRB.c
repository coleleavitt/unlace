// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA500
// Name:            .fopenRB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA500 jmp     cs:off_2C7AA68
//
// Resolved target: fopenRB
// Target address:  0x83B400
// GOT/IAT slot:    0x2C7AA68
// Slot symbol:     off_2C7AA68
// Target type:     <no type info>
// ============================================================

void .fopenRB(/* see target signature */)
{
    // Tail-call to fopenRB via GOT/IAT indirection
    return fopenRB(/* forwarded args */);
}

