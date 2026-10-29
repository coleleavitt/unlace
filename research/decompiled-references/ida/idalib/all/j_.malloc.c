// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x866AD0
// Name:            j_.malloc
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x866AD0 jmp     _malloc
//
// Resolved target: .malloc
// Target address:  0x2ACDB0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ j_.malloc(/* see target signature */)
{
    // Tail-call to .malloc via direct jump indirection
    return .malloc(/* forwarded args */);
}

