// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5D0
// Name:            ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5D0 jmp     cs:off_482E8
//
// Resolved target: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm
// Target address:  0x34E10
// GOT/IAT slot:    0x482E8
// Slot symbol:     off_482E8
// Target type:     <no type info>
// ============================================================

void ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm(/* see target signature */)
{
    // Tail-call to _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm via GOT/IAT indirection
    return _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEm(/* forwarded args */);
}

