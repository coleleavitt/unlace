// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA400
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA400 jmp     cs:off_48200
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm
// Target address:  0x36880
// GOT/IAT slot:    0x48200
// Slot symbol:     off_48200
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13find_first_ofEPKcmm(/* forwarded args */);
}

