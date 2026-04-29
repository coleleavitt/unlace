// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA710
// Name:            ._ZNSt12out_of_rangeC1EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA710 jmp     cs:off_48388
//
// Resolved target: _ZNSt12out_of_rangeC1EPKc
// Target address:  0x332C0
// GOT/IAT slot:    0x48388
// Slot symbol:     off_48388
// Target type:     __int64 __fastcall(std::out_of_range *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt12out_of_rangeC1EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt12out_of_rangeC1EPKc via GOT/IAT indirection
    return _ZNSt12out_of_rangeC1EPKc(/* forwarded args */);
}

