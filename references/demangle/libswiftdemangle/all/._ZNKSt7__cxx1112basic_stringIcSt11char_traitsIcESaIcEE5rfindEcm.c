// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA540
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA540 jmp     cs:off_482A0
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEcm
// Target address:  0x36840
// GOT/IAT slot:    0x482A0
// Slot symbol:     off_482A0
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEcm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEcm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEcm(/* forwarded args */);
}

