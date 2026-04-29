// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA40
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA40 jmp     cs:off_4E9508
//
// Resolved target: log2ceil
// Target address:  0x4EBF10
// GOT/IAT slot:    0x4E9508
// Slot symbol:     off_4E9508
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

