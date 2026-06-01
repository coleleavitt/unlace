// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4015D0
// Name:            strdiff_t_serialize
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4015D0 jmp     strdiff_t_serialize_0
//
// Resolved target: strdiff_t_serialize_0
// Target address:  0x4014E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64 *)
// ============================================================

/* see target sig */ strdiff_t_serialize(/* see target signature */)
{
    // Tail-call to strdiff_t_serialize_0 via direct jump indirection
    return strdiff_t_serialize_0(/* forwarded args */);
}

