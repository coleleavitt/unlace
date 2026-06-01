// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A90
// Name:            .reset_dirtree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A90 jmp     cs:off_2C7A530
//
// Resolved target: reset_dirtree
// Target address:  0x77CEE0
// GOT/IAT slot:    0x2C7A530
// Slot symbol:     off_2C7A530
// Target type:     <no type info>
// ============================================================

void .reset_dirtree(/* see target signature */)
{
    // Tail-call to reset_dirtree via GOT/IAT indirection
    return reset_dirtree(/* forwarded args */);
}

