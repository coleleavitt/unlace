// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA80
// Name:            .openM
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA80 jmp     cs:off_2C7C528
//
// Resolved target: openM
// Target address:  0x83B550
// GOT/IAT slot:    0x2C7C528
// Slot symbol:     off_2C7C528
// Target type:     <no type info>
// ============================================================

void .openM(/* see target signature */)
{
    // Tail-call to openM via GOT/IAT indirection
    return openM(/* forwarded args */);
}

