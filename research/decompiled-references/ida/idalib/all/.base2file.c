// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9340
// Name:            .base2file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9340 jmp     cs:off_2C7A188
//
// Resolved target: base2file
// Target address:  0x642A70
// GOT/IAT slot:    0x2C7A188
// Slot symbol:     off_2C7A188
// Target type:     <no type info>
// ============================================================

void .base2file(/* see target signature */)
{
    // Tail-call to base2file via GOT/IAT indirection
    return base2file(/* forwarded args */);
}

