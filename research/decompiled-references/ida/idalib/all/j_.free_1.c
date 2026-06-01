// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2230180
// Name:            j_.free_1
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2230180 jmp     _free
//
// Resolved target: .free
// Target address:  0x2AAD00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ j_.free_1(/* see target signature */)
{
    // Tail-call to .free via direct jump indirection
    return .free(/* forwarded args */);
}

