// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9600
// Name:            .free_idasgn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9600 jmp     cs:off_2C7A2E8
//
// Resolved target: free_idasgn
// Target address:  0x815710
// GOT/IAT slot:    0x2C7A2E8
// Slot symbol:     off_2C7A2E8
// Target type:     __int64 __fastcall(void *)
// ============================================================

/* see target sig */ .free_idasgn(/* see target signature */)
{
    // Tail-call to free_idasgn via GOT/IAT indirection
    return free_idasgn(/* forwarded args */);
}

