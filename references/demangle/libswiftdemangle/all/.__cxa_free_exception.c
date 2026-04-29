// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4F0
// Name:            .__cxa_free_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4F0 jmp     cs:off_48278
//
// Resolved target: __cxa_free_exception
// Target address:  0x48548
// GOT/IAT slot:    0x48278
// Slot symbol:     off_48278
// Target type:     void(void *)
// ============================================================

/* see target sig */ .__cxa_free_exception(/* see target signature */)
{
    // Tail-call to __cxa_free_exception via GOT/IAT indirection
    return __cxa_free_exception(/* forwarded args */);
}

