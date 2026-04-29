// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10200
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10200 jmp     cs:off_2E0E8
//
// Resolved target: _ZdlPvm
// Target address:  0x36D60
// GOT/IAT slot:    0x2E0E8
// Slot symbol:     off_2E0E8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

