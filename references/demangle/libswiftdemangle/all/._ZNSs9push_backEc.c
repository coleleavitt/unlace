// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5F0
// Name:            ._ZNSs9push_backEc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5F0 jmp     cs:off_482F8
//
// Resolved target: _ZNSs9push_backEc
// Target address:  0x485B8
// GOT/IAT slot:    0x482F8
// Slot symbol:     off_482F8
// Target type:     _QWORD(std::string *__hidden this, char)
// ============================================================

/* see target sig */ ._ZNSs9push_backEc(/* see target signature */)
{
    // Tail-call to _ZNSs9push_backEc via GOT/IAT indirection
    return _ZNSs9push_backEc(/* forwarded args */);
}

