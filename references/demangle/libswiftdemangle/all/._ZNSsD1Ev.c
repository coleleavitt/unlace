// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA290
// Name:            ._ZNSsD1Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA290 jmp     cs:off_48148
//
// Resolved target: _ZNSsD1Ev
// Target address:  0x48490
// GOT/IAT slot:    0x48148
// Slot symbol:     off_48148
// Target type:     void(std::string *__hidden this)
// ============================================================

/* see target sig */ ._ZNSsD1Ev(/* see target signature */)
{
    // Tail-call to _ZNSsD1Ev via GOT/IAT indirection
    return _ZNSsD1Ev(/* forwarded args */);
}

