// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FC6F0
// Name:            sub_2FC6F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FC6F0 jmp     sub_2FC350
//
// Resolved target: sub_2FC350
// Target address:  0x2FC350
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int()
// ============================================================

/* see target sig */ sub_2FC6F0(/* see target signature */)
{
    // Tail-call to sub_2FC350 via direct jump indirection
    return sub_2FC350(/* forwarded args */);
}

