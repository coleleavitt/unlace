// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0C0
// Name:            ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0C0 jmp     cs:off_48060
//
// Resolved target: _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm
// Target address:  0x36780
// GOT/IAT slot:    0x48060
// Slot symbol:     off_48060
// Target type:     <no type info>
// ============================================================

void ._ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm(/* see target signature */)
{
    // Tail-call to _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm via GOT/IAT indirection
    return _ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5rfindEPKcmm(/* forwarded args */);
}

