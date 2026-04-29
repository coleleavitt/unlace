// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130
// Name:            .disable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130 jmp     cs:off_5080
//
// Resolved target: disable_flags
// Target address:  0x5198
// GOT/IAT slot:    0x5080
// Slot symbol:     off_5080
// Target type:     <no type info>
// ============================================================

void .disable_flags(/* see target signature */)
{
    // Tail-call to disable_flags via GOT/IAT indirection
    return disable_flags(/* forwarded args */);
}

