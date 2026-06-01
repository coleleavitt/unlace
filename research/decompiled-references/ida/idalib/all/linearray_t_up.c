// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x453A90
// Name:            linearray_t_up
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x453A90 jmp     linearray_t_up_0
//
// Resolved target: linearray_t_up_0
// Target address:  0x453A00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ linearray_t_up(/* see target signature */)
{
    // Tail-call to linearray_t_up_0 via direct jump indirection
    return linearray_t_up_0(/* forwarded args */);
}

