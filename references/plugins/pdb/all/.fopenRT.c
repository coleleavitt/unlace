// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC50
// Name:            .fopenRT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC50 jmp     cs:off_B3610
//
// Resolved target: fopenRT
// Target address:  0xB3DE8
// GOT/IAT slot:    0xB3610
// Slot symbol:     off_B3610
// Target type:     <no type info>
// ============================================================

void .fopenRT(/* see target signature */)
{
    // Tail-call to fopenRT via GOT/IAT indirection
    return fopenRT(/* forwarded args */);
}

