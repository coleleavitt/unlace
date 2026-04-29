// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4080
// Name:            ._ZNSt6chrono3_V212system_clock3nowEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4080 jmp     cs:off_4E028
//
// Resolved target: _ZNSt6chrono3_V212system_clock3nowEv
// Target address:  0x4F628
// GOT/IAT slot:    0x4E028
// Slot symbol:     off_4E028
// Target type:     _QWORD(std::chrono::_V2::system_clock *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt6chrono3_V212system_clock3nowEv(/* see target signature */)
{
    // Tail-call to _ZNSt6chrono3_V212system_clock3nowEv via GOT/IAT indirection
    return _ZNSt6chrono3_V212system_clock3nowEv(/* forwarded args */);
}

