// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4539F0
// Name:            linearray_t_down
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4539F0 jmp     linearray_t_down_0
//
// Resolved target: linearray_t_down_0
// Target address:  0x453850
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ linearray_t_down(/* see target signature */)
{
    // Tail-call to linearray_t_down_0 via direct jump indirection
    return linearray_t_down_0(/* forwarded args */);
}

