// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA170
// Name:            ._ZdlPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA170 jmp     cs:off_480B8
//
// Resolved target: _ZdlPv
// Target address:  0x48418
// GOT/IAT slot:    0x480B8
// Slot symbol:     off_480B8
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdlPv(/* see target signature */)
{
    // Tail-call to _ZdlPv via GOT/IAT indirection
    return _ZdlPv(/* forwarded args */);
}

