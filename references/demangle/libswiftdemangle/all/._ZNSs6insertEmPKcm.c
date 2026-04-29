// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA340
// Name:            ._ZNSs6insertEmPKcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA340 jmp     cs:off_481A0
//
// Resolved target: _ZNSs6insertEmPKcm
// Target address:  0x484C0
// GOT/IAT slot:    0x481A0
// Slot symbol:     off_481A0
// Target type:     _QWORD(std::string *__hidden this, unsigned __int64, const char *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZNSs6insertEmPKcm(/* see target signature */)
{
    // Tail-call to _ZNSs6insertEmPKcm via GOT/IAT indirection
    return _ZNSs6insertEmPKcm(/* forwarded args */);
}

