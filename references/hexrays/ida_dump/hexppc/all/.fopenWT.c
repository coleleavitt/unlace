// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0B0
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0B0 jmp     cs:off_4DB040
//
// Resolved target: fopenWT
// Target address:  0x4DDA70
// GOT/IAT slot:    0x4DB040
// Slot symbol:     off_4DB040
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

