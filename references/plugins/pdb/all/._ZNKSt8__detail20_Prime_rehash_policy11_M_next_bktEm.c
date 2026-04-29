// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D430
// Name:            ._ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D430 jmp     cs:off_B3200
//
// Resolved target: _ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm
// Target address:  0xB39A0
// GOT/IAT slot:    0xB3200
// Slot symbol:     off_B3200
// Target type:     _QWORD(std::__detail::_Prime_rehash_policy *__hidden this, unsigned __int64)
// ============================================================

/* see target sig */ ._ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm(/* see target signature */)
{
    // Tail-call to _ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm via GOT/IAT indirection
    return _ZNKSt8__detail20_Prime_rehash_policy11_M_next_bktEm(/* forwarded args */);
}

