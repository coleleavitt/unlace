// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95B0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95B0 jmp     cs:off_892C0
//
// Resolved target: _ZdlPvm
// Target address:  0x8C5C8
// GOT/IAT slot:    0x892C0
// Slot symbol:     off_892C0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

