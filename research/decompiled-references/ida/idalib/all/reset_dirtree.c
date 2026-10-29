// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77CEE0
// Name:            reset_dirtree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x77CEE0 jmp     reset_dirtree_0
//
// Resolved target: reset_dirtree_0
// Target address:  0x77CA80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ reset_dirtree(/* see target signature */)
{
    // Tail-call to reset_dirtree_0 via direct jump indirection
    return reset_dirtree_0(/* forwarded args */);
}

