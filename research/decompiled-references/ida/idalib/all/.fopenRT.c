// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD2C0
// Name:            .fopenRT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD2C0 jmp     cs:off_2C7C148
//
// Resolved target: fopenRT
// Target address:  0x83B460
// GOT/IAT slot:    0x2C7C148
// Slot symbol:     off_2C7C148
// Target type:     <no type info>
// ============================================================

void .fopenRT(/* see target signature */)
{
    // Tail-call to fopenRT via GOT/IAT indirection
    return fopenRT(/* forwarded args */);
}

