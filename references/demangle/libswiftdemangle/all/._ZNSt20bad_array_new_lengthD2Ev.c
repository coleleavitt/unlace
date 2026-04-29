// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA330
// Name:            ._ZNSt20bad_array_new_lengthD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA330 jmp     cs:off_48198
//
// Resolved target: _ZNSt20bad_array_new_lengthD2Ev
// Target address:  0x32EA0
// GOT/IAT slot:    0x48198
// Slot symbol:     off_48198
// Target type:     void __fastcall(std::bad_array_new_length *__hidden this)
// ============================================================

/* see target sig */ ._ZNSt20bad_array_new_lengthD2Ev(/* see target signature */)
{
    // Tail-call to _ZNSt20bad_array_new_lengthD2Ev via GOT/IAT indirection
    return _ZNSt20bad_array_new_lengthD2Ev(/* forwarded args */);
}

