// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A090
// Name:            .auto_wait_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A090 jmp     cs:off_4B9830
//
// Resolved target: auto_wait_range
// Target address:  0x4BC230
// GOT/IAT slot:    0x4B9830
// Slot symbol:     off_4B9830
// Target type:     <no type info>
// ============================================================

void .auto_wait_range(/* see target signature */)
{
    // Tail-call to auto_wait_range via GOT/IAT indirection
    return auto_wait_range(/* forwarded args */);
}

