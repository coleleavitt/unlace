// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3B0
// Name:            ._ZNSbIwSt11char_traitsIwESaIwEE12_M_leak_hardEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3B0 jmp     cs:off_481D8
//
// Resolved target: _ZNSbIwSt11char_traitsIwESaIwEE12_M_leak_hardEv
// Target address:  0x484E0
// GOT/IAT slot:    0x481D8
// Slot symbol:     off_481D8
// Target type:     <no type info>
// ============================================================

void ._ZNSbIwSt11char_traitsIwESaIwEE12_M_leak_hardEv(/* see target signature */)
{
    // Tail-call to _ZNSbIwSt11char_traitsIwESaIwEE12_M_leak_hardEv via GOT/IAT indirection
    return _ZNSbIwSt11char_traitsIwESaIwEE12_M_leak_hardEv(/* forwarded args */);
}

