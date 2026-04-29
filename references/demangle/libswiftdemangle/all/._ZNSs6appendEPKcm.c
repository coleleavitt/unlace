// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA050
// Name:            ._ZNSs6appendEPKcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA050 jmp     cs:off_48028
//
// Resolved target: _ZNSs6appendEPKcm
// Target address:  0x483C8
// GOT/IAT slot:    0x48028
// Slot symbol:     off_48028
// Target type:     _QWORD(std::string *__hidden this, const char *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZNSs6appendEPKcm(/* see target signature */)
{
    // Tail-call to _ZNSs6appendEPKcm via GOT/IAT indirection
    return _ZNSs6appendEPKcm(/* forwarded args */);
}

