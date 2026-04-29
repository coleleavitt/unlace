// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C120
// Name:            .auto_wait_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C120 jmp     cs:off_4ED878
//
// Resolved target: auto_wait_range
// Target address:  0x4F1B90
// GOT/IAT slot:    0x4ED878
// Slot symbol:     off_4ED878
// Target type:     <no type info>
// ============================================================

void .auto_wait_range(/* see target signature */)
{
    // Tail-call to auto_wait_range via GOT/IAT indirection
    return auto_wait_range(/* forwarded args */);
}

