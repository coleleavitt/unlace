// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB2C0
// Name:            .dirtree_rename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB2C0 jmp     cs:off_2C7B148
//
// Resolved target: dirtree_rename
// Target address:  0x77A1B0
// GOT/IAT slot:    0x2C7B148
// Slot symbol:     off_2C7B148
// Target type:     __int64 __fastcall(int, int, int)
// ============================================================

/* see target sig */ .dirtree_rename(/* see target signature */)
{
    // Tail-call to dirtree_rename via GOT/IAT indirection
    return dirtree_rename(/* forwarded args */);
}

