// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC60
// Name:            .__dynamic_cast
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC60 jmp     cs:__dynamic_cast_ptr
//
// Resolved target: __dynamic_cast
// Target address:  0x8D9408
// GOT/IAT slot:    0x8A42D0
// Slot symbol:     __dynamic_cast_ptr
// Target type:     void *(const void *lpsrc, const struct __class_type_info *lpstype, const struct __class_type_info *lpdtype, ptrdiff_t s2d)
// ============================================================

/* see target sig */ .__dynamic_cast(/* see target signature */)
{
    // Tail-call to __dynamic_cast via GOT/IAT indirection
    return __dynamic_cast(/* forwarded args */);
}

