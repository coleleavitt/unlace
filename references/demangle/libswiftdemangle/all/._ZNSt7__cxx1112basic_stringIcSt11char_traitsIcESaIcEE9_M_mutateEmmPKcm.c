// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA690
// Name:            ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA690 jmp     cs:off_48348
//
// Resolved target: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm
// Target address:  0x348D0
// GOT/IAT slot:    0x48348
// Slot symbol:     off_48348
// Target type:     <no type info>
// ============================================================

void ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(/* see target signature */)
{
    // Tail-call to _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm via GOT/IAT indirection
    return _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_mutateEmmPKcm(/* forwarded args */);
}

