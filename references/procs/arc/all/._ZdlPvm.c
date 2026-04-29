// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8510
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8510 jmp     cs:off_2A270
//
// Resolved target: _ZdlPvm
// Target address:  0x2BC80
// GOT/IAT slot:    0x2A270
// Slot symbol:     off_2A270
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

