// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA500
// Name:            ._ZNSs6assignERKSs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA500 jmp     cs:off_48280
//
// Resolved target: _ZNSs6assignERKSs
// Target address:  0x48550
// GOT/IAT slot:    0x48280
// Slot symbol:     off_48280
// Target type:     _QWORD(std::string *__hidden this, const std::string *)
// ============================================================

/* see target sig */ ._ZNSs6assignERKSs(/* see target signature */)
{
    // Tail-call to _ZNSs6assignERKSs via GOT/IAT indirection
    return _ZNSs6assignERKSs(/* forwarded args */);
}

