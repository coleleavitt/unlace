// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D830
// Name:            .qrealloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D830 jmp     cs:off_B3400
//
// Resolved target: qrealloc
// Target address:  0xB3BA0
// GOT/IAT slot:    0xB3400
// Slot symbol:     off_B3400
// Target type:     <no type info>
// ============================================================

void .qrealloc(/* see target signature */)
{
    // Tail-call to qrealloc via GOT/IAT indirection
    return qrealloc(/* forwarded args */);
}

