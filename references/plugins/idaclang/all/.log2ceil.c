// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31E0
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31E0 jmp     cs:off_290D8
//
// Resolved target: log2ceil
// Target address:  0x29488
// GOT/IAT slot:    0x290D8
// Slot symbol:     off_290D8
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

