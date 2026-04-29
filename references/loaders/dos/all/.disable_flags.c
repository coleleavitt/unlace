// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23B0
// Name:            .disable_flags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23B0 jmp     cs:off_B1C0
//
// Resolved target: disable_flags
// Target address:  0xB658
// GOT/IAT slot:    0xB1C0
// Slot symbol:     off_B1C0
// Target type:     <no type info>
// ============================================================

void .disable_flags(/* see target signature */)
{
    // Tail-call to disable_flags via GOT/IAT indirection
    return disable_flags(/* forwarded args */);
}

