// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F0F0
// Name:            .fopenWT
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F0F0 jmp     cs:off_4EA060
//
// Resolved target: fopenWT
// Target address:  0x4ECAB0
// GOT/IAT slot:    0x4EA060
// Slot symbol:     off_4EA060
// Target type:     <no type info>
// ============================================================

void .fopenWT(/* see target signature */)
{
    // Tail-call to fopenWT via GOT/IAT indirection
    return fopenWT(/* forwarded args */);
}

