// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA6E0
// Name:            ._ZNSs4swapERSs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA6E0 jmp     cs:off_48370
//
// Resolved target: _ZNSs4swapERSs
// Target address:  0x48608
// GOT/IAT slot:    0x48370
// Slot symbol:     off_48370
// Target type:     _QWORD(std::string *__hidden this, std::string *)
// ============================================================

/* see target sig */ ._ZNSs4swapERSs(/* see target signature */)
{
    // Tail-call to _ZNSs4swapERSs via GOT/IAT indirection
    return _ZNSs4swapERSs(/* forwarded args */);
}

