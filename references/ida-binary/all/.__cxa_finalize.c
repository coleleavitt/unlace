// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117470
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117470 jmp     cs:__cxa_finalize_ptr
//
// Resolved target: __cxa_finalize
// Target address:  0x8D70C8
// GOT/IAT slot:    0x8A26D8
// Slot symbol:     __cxa_finalize_ptr
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

