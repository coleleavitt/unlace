// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7CA2F0
// Name:            vcred_init
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7CA2F0 jmp     vcred_init_0
//
// Resolved target: vcred_init_0
// Target address:  0x7C9F20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__m128 *)
// ============================================================

/* see target sig */ vcred_init(/* see target signature */)
{
    // Tail-call to vcred_init_0 via direct jump indirection
    return vcred_init_0(/* forwarded args */);
}

