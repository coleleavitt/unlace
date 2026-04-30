// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AEF0
// Name:            .log2floor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AEF0 jmp     cs:log2floor_ptr
//
// Resolved target: log2floor
// Target address:  0x8D9590
// GOT/IAT slot:    0x8A4418
// Slot symbol:     log2floor_ptr
// Target type:     <no type info>
// ============================================================

void .log2floor(/* see target signature */)
{
    // Tail-call to log2floor via GOT/IAT indirection
    return log2floor(/* forwarded args */);
}

