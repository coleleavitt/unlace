// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7AB0
// Name:            .fopenM
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7AB0 jmp     cs:off_2C79540
//
// Resolved target: fopenM
// Target address:  0x83B430
// GOT/IAT slot:    0x2C79540
// Slot symbol:     off_2C79540
// Target type:     <no type info>
// ============================================================

void .fopenM(/* see target signature */)
{
    // Tail-call to fopenM via GOT/IAT indirection
    return fopenM(/* forwarded args */);
}

