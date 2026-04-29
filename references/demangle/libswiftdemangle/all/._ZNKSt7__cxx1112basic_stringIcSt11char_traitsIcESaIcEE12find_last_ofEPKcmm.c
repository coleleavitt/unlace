// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA250
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA250 jmp     cs:off_48128
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm
// Target address:  0x36950
// GOT/IAT slot:    0x48128
// Slot symbol:     off_48128
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12find_last_ofEPKcmm(/* forwarded args */);
}

