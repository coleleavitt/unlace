// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E0C0
// Name:            .auto_wait_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E0C0 jmp     cs:off_4E9848
//
// Resolved target: auto_wait_range
// Target address:  0x4EC268
// GOT/IAT slot:    0x4E9848
// Slot symbol:     off_4E9848
// Target type:     <no type info>
// ============================================================

void .auto_wait_range(/* see target signature */)
{
    // Tail-call to auto_wait_range via GOT/IAT indirection
    return auto_wait_range(/* forwarded args */);
}

