// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2258600
// Name:            j_._ZdlPv_32
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2258600 jmp     __ZdlPv
//
// Resolved target: ._ZdlPv
// Target address:  0x2A8720
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void(void *)
// ============================================================

/* see target sig */ j_._ZdlPv_32(/* see target signature */)
{
    // Tail-call to ._ZdlPv via direct jump indirection
    return ._ZdlPv(/* forwarded args */);
}

