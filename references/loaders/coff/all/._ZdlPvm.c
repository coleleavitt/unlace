// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4430
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4430 jmp     cs:off_23200
//
// Resolved target: _ZdlPvm
// Target address:  0x23620
// GOT/IAT slot:    0x23200
// Slot symbol:     off_23200
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

