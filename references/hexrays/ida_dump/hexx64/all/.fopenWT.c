// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D210
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D210 jmp     cs:off_4EE0F0
//
// Resolved target: fopenWT
// Target address:  0x4F2440
// GOT/IAT slot:    0x4EE0F0
// Slot symbol:     off_4EE0F0
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

