// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1187F0
// Name:            .log2ceil
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1187F0 jmp     cs:log2ceil_ptr
//
// Resolved target: log2ceil
// Target address:  0x8D7CE8
// GOT/IAT slot:    0x8A3098
// Slot symbol:     log2ceil_ptr
// Target type:     <no type info>
// ============================================================

void .log2ceil(/* see target signature */)
{
    // Tail-call to log2ceil via GOT/IAT indirection
    return log2ceil(/* forwarded args */);
}

