// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA570
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA570 jmp     cs:off_482B8
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm
// Target address:  0x36730
// GOT/IAT slot:    0x482B8
// Slot symbol:     off_482B8
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4findEcm(/* forwarded args */);
}

