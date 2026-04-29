// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B0A0
// Name:            .auto_wait_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B0A0 jmp     cs:off_4DA838
//
// Resolved target: auto_wait_range
// Target address:  0x4DD238
// GOT/IAT slot:    0x4DA838
// Slot symbol:     off_4DA838
// Target type:     <no type info>
// ============================================================

void .auto_wait_range(/* see target signature */)
{
    // Tail-call to auto_wait_range via GOT/IAT indirection
    return auto_wait_range(/* forwarded args */);
}

