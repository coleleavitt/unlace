// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2330
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2330 jmp     cs:off_B180
//
// Resolved target: _ZdlPvm
// Target address:  0xB618
// GOT/IAT slot:    0xB180
// Slot symbol:     off_B180
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

