// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA270
// Name:            ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA270 jmp     cs:off_48138
//
// Resolved target: _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEv
// Target address:  0x34EC0
// GOT/IAT slot:    0x48138
// Slot symbol:     off_48138
// Target type:     <no type info>
// ============================================================

void ._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEv(/* see target signature */)
{
    // Tail-call to _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEv via GOT/IAT indirection
    return _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7reserveEv(/* forwarded args */);
}

