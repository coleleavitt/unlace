// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB050
// Name:            .enable_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB050 jmp     cs:off_2C7B010
//
// Resolved target: enable_auto
// Target address:  0x3A25C0
// GOT/IAT slot:    0x2C7B010
// Slot symbol:     off_2C7B010
// Target type:     <no type info>
// ============================================================

void .enable_auto(/* see target signature */)
{
    // Tail-call to enable_auto via GOT/IAT indirection
    return enable_auto(/* forwarded args */);
}

