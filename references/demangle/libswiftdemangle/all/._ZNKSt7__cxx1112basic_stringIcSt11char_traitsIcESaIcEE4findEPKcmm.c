// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0E0
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0E0 jmp     cs:off_48070
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm
// Target address:  0x36610
// GOT/IAT slot:    0x48070
// Slot symbol:     off_48070
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEPKcmm(/* forwarded args */);
}

