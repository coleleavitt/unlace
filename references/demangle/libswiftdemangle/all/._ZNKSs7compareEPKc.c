// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA380
// Name:            ._ZNKSs7compareEPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA380 jmp     cs:off_481C0
//
// Resolved target: _ZNKSs7compareEPKc
// Target address:  0x484D0
// GOT/IAT slot:    0x481C0
// Slot symbol:     off_481C0
// Target type:     _QWORD(std::string *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNKSs7compareEPKc(/* see target signature */)
{
    // Tail-call to _ZNKSs7compareEPKc via GOT/IAT indirection
    return _ZNKSs7compareEPKc(/* forwarded args */);
}

