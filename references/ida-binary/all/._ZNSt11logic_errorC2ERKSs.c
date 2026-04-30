// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117280
// Name:            ._ZNSt11logic_errorC2ERKSs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117280 jmp     cs:_ZNSt11logic_errorC2ERKSs_ptr
//
// Resolved target: _ZNSt11logic_errorC2ERKSs
// Target address:  0x8D6F80
// GOT/IAT slot:    0x8A25E0
// Slot symbol:     _ZNSt11logic_errorC2ERKSs_ptr
// Target type:     _QWORD(std::logic_error *__hidden this, const std::string *)
// ============================================================

/* see target sig */ ._ZNSt11logic_errorC2ERKSs(/* see target signature */)
{
    // Tail-call to _ZNSt11logic_errorC2ERKSs via GOT/IAT indirection
    return _ZNSt11logic_errorC2ERKSs(/* forwarded args */);
}

