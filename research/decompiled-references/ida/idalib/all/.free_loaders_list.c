// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8710
// Name:            .free_loaders_list
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8710 jmp     cs:off_2C79B70
//
// Resolved target: free_loaders_list
// Target address:  0x641E70
// GOT/IAT slot:    0x2C79B70
// Slot symbol:     off_2C79B70
// Target type:     __int64 __fastcall(void *)
// ============================================================

/* see target sig */ .free_loaders_list(/* see target signature */)
{
    // Tail-call to free_loaders_list via GOT/IAT indirection
    return free_loaders_list(/* forwarded args */);
}

