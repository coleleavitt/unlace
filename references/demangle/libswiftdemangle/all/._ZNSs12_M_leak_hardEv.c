// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6D0
// Name:            ._ZNSs12_M_leak_hardEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6D0 jmp     cs:off_48368
//
// Resolved target: _ZNSs12_M_leak_hardEv
// Target address:  0x48600
// GOT/IAT slot:    0x48368
// Slot symbol:     off_48368
// Target type:     _QWORD(std::string *__hidden this)
// ============================================================

/* see target sig */ ._ZNSs12_M_leak_hardEv(/* see target signature */)
{
    // Tail-call to _ZNSs12_M_leak_hardEv via GOT/IAT indirection
    return _ZNSs12_M_leak_hardEv(/* forwarded args */);
}

