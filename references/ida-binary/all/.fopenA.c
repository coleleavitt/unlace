// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B580
// Name:            .fopenA
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B580 jmp     cs:fopenA_ptr
//
// Resolved target: fopenA
// Target address:  0x8D99B8
// GOT/IAT slot:    0x8A4760
// Slot symbol:     fopenA_ptr
// Target type:     <no type info>
// ============================================================

void .fopenA(/* see target signature */)
{
    // Tail-call to fopenA via GOT/IAT indirection
    return fopenA(/* forwarded args */);
}

