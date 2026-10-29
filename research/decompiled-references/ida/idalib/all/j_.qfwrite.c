// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x58FF60
// Name:            j_.qfwrite
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x58FF60 jmp     _qfwrite
//
// Resolved target: .qfwrite
// Target address:  0x2A9A20
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(FILE *s, void *ptr)
// ============================================================

/* see target sig */ j_.qfwrite(/* see target signature */)
{
    // Tail-call to .qfwrite via direct jump indirection
    return .qfwrite(/* forwarded args */);
}

