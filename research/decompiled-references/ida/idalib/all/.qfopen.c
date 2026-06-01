// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDE0
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDE0 jmp     cs:off_2C7BED8
//
// Resolved target: qfopen
// Target address:  0x83B340
// GOT/IAT slot:    0x2C7BED8
// Slot symbol:     off_2C7BED8
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

