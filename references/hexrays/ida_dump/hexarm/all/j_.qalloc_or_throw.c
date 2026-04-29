// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32A7A0
// Name:            j_.qalloc_or_throw
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x32A7A0 jmp     _qalloc_or_throw
//
// Resolved target: .qalloc_or_throw
// Target address:  0x2D1B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.qalloc_or_throw(/* see target signature */)
{
    // Tail-call to .qalloc_or_throw via direct jump indirection
    return .qalloc_or_throw(/* forwarded args */);
}

