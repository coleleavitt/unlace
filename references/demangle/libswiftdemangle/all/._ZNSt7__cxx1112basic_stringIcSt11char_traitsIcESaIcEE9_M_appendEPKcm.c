// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA3A0
// Name:            ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA3A0 jmp     cs:off_481D0
//
// Resolved target: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm
// Target address:  0x36210
// GOT/IAT slot:    0x481D0
// Slot symbol:     off_481D0
// Target type:     <no type info>
// ============================================================

void ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm(/* see target signature */)
{
    // Tail-call to _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm via GOT/IAT indirection
    return _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_appendEPKcm(/* forwarded args */);
}

