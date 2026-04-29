// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA180
// Name:            ._ZNSs7reserveEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA180 jmp     cs:off_480C0
//
// Resolved target: _ZNSs7reserveEm
// Target address:  0x48420
// GOT/IAT slot:    0x480C0
// Slot symbol:     off_480C0
// Target type:     _QWORD(std::string *__hidden this, unsigned __int64)
// ============================================================

/* see target sig */ ._ZNSs7reserveEm(/* see target signature */)
{
    // Tail-call to _ZNSs7reserveEm via GOT/IAT indirection
    return _ZNSs7reserveEm(/* forwarded args */);
}

