// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            ._ZNSt6chrono3_V212steady_clock3nowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_130F0
//
// Resolved target: _ZNSt6chrono3_V212steady_clock3nowEv
// Target address:  0x13388
// GOT/IAT slot:    0x130F0
// Slot symbol:     off_130F0
// Target type:     _QWORD(std::chrono::_V2::steady_clock *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt6chrono3_V212steady_clock3nowEv(/* see target signature */)
{
    // Tail-call to _ZNSt6chrono3_V212steady_clock3nowEv via GOT/IAT indirection
    return _ZNSt6chrono3_V212steady_clock3nowEv(/* forwarded args */);
}

