// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            .enable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_A198
//
// Resolved target: enable_flags
// Target address:  0xA460
// GOT/IAT slot:    0xA198
// Slot symbol:     off_A198
// Target type:     <no type info>
// ============================================================

void .enable_flags(/* see target signature */)
{
    // Tail-call to enable_flags via GOT/IAT indirection
    return enable_flags(/* forwarded args */);
}

