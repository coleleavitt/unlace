// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114130
// Name:            .ltype_info_t__fill
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114130 jmp     cs:ltype_info_t__fill_ptr
//
// Resolved target: ltype_info_t__fill
// Target address:  0x8D5018
// GOT/IAT slot:    0x8A0D38
// Slot symbol:     ltype_info_t__fill_ptr
// Target type:     _QWORD(float, int, __int64, __int64)
// ============================================================

/* see target sig */ .ltype_info_t__fill(/* see target signature */)
{
    // Tail-call to ltype_info_t__fill via GOT/IAT indirection
    return ltype_info_t__fill(/* forwarded args */);
}

