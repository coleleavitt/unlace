// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA20
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA20 jmp     cs:off_4DA4F8
//
// Resolved target: log2ceil
// Target address:  0x4DCEE0
// GOT/IAT slot:    0x4DA4F8
// Slot symbol:     off_4DA4F8
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

