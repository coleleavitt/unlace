// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1198D0
// Name:            ._ZNSs6insertEmPKcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1198D0 jmp     cs:_ZNSs6insertEmPKcm_ptr
//
// Resolved target: _ZNSs6insertEmPKcm
// Target address:  0x8D8798
// GOT/IAT slot:    0x8A3908
// Slot symbol:     _ZNSs6insertEmPKcm_ptr
// Target type:     _QWORD(std::string *__hidden this, unsigned __int64, const char *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZNSs6insertEmPKcm(/* see target signature */)
{
    // Tail-call to _ZNSs6insertEmPKcm via GOT/IAT indirection
    return _ZNSs6insertEmPKcm(/* forwarded args */);
}

