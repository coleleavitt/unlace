// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA60
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA60 jmp     cs:off_4ED518
//
// Resolved target: log2ceil
// Target address:  0x4F1818
// GOT/IAT slot:    0x4ED518
// Slot symbol:     off_4ED518
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

