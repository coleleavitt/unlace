// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x453690
// Name:            linearray_t_copy_from
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x453690 jmp     linearray_t_copy_from_0
//
// Resolved target: linearray_t_copy_from_0
// Target address:  0x453480
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ linearray_t_copy_from(/* see target signature */)
{
    // Tail-call to linearray_t_copy_from_0 via direct jump indirection
    return linearray_t_copy_from_0(/* forwarded args */);
}

