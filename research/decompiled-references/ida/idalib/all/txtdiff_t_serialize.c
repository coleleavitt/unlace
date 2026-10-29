// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4014D0
// Name:            txtdiff_t_serialize
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x4014D0 jmp     txtdiff_t_serialize_0
//
// Resolved target: txtdiff_t_serialize_0
// Target address:  0x401340
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64 *)
// ============================================================

/* see target sig */ txtdiff_t_serialize(/* see target signature */)
{
    // Tail-call to txtdiff_t_serialize_0 via direct jump indirection
    return txtdiff_t_serialize_0(/* forwarded args */);
}

