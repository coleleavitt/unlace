// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA720
// Name:            ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA720 jmp     cs:off_48390
//
// Resolved target: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc
// Target address:  0x357A0
// GOT/IAT slot:    0x48390
// Slot symbol:     off_48390
// Target type:     <no type info>
// ============================================================

void ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc(/* see target signature */)
{
    // Tail-call to _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc via GOT/IAT indirection
    return _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6resizeEmc(/* forwarded args */);
}

