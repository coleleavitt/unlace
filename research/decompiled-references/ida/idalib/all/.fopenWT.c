// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9DB0
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9DB0 jmp     cs:off_2C7A6C0
//
// Resolved target: fopenWT
// Target address:  0x83B490
// GOT/IAT slot:    0x2C7A6C0
// Slot symbol:     off_2C7A6C0
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

