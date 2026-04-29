// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCB0
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCB0 jmp     cs:off_4ED640
//
// Resolved target: __cxa_free_exception
// Target address:  0x4F1950
// GOT/IAT slot:    0x4ED640
// Slot symbol:     off_4ED640
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

