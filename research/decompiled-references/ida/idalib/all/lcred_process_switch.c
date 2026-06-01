// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7C8710
// Name:            lcred_process_switch
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7C8710 jmp     lcred_process_switch_0
//
// Resolved target: lcred_process_switch_0
// Target address:  0x7C8430
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, _BYTE *)
// ============================================================

/* see target sig */ lcred_process_switch(/* see target signature */)
{
    // Tail-call to lcred_process_switch_0 via direct jump indirection
    return lcred_process_switch_0(/* forwarded args */);
}

