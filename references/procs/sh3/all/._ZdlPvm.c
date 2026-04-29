// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5400
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5400 jmp     cs:off_151E8
//
// Resolved target: _ZdlPvm
// Target address:  0x16278
// GOT/IAT slot:    0x151E8
// Slot symbol:     off_151E8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

