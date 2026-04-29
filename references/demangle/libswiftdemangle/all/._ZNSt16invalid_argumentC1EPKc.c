// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA200
// Name:            ._ZNSt16invalid_argumentC1EPKc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA200 jmp     cs:off_48100
//
// Resolved target: _ZNSt16invalid_argumentC1EPKc
// Target address:  0x33280
// GOT/IAT slot:    0x48100
// Slot symbol:     off_48100
// Target type:     __int64 __fastcall(std::invalid_argument *__hidden this, const char *)
// ============================================================

/* see target sig */ ._ZNSt16invalid_argumentC1EPKc(/* see target signature */)
{
    // Tail-call to _ZNSt16invalid_argumentC1EPKc via GOT/IAT indirection
    return _ZNSt16invalid_argumentC1EPKc(/* forwarded args */);
}

