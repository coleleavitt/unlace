// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7CA770
// Name:            vcred_write
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7CA770 jmp     vcred_write_0
//
// Resolved target: vcred_write_0
// Target address:  0x7CA300
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64 *)
// ============================================================

/* see target sig */ vcred_write(/* see target signature */)
{
    // Tail-call to vcred_write_0 via direct jump indirection
    return vcred_write_0(/* forwarded args */);
}

