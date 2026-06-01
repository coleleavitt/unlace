// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x866AE0
// Name:            j_.free
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x866AE0 jmp     _free
//
// Resolved target: .free
// Target address:  0x2AAD00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ j_.free(/* see target signature */)
{
    // Tail-call to .free via direct jump indirection
    return .free(/* forwarded args */);
}

