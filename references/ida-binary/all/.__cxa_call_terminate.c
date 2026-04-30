// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A80
// Name:            .__cxa_call_terminate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A80 jmp     cs:__cxa_call_terminate_ptr
//
// Resolved target: __cxa_call_terminate
// Target address:  0x8D4BD8
// GOT/IAT slot:    0x8A09E0
// Slot symbol:     __cxa_call_terminate_ptr
// Target type:     void __noreturn(_Unwind_Exception *)
// ============================================================

/* see target sig */ .__cxa_call_terminate(/* see target signature */)
{
    // Tail-call to __cxa_call_terminate via GOT/IAT indirection
    return __cxa_call_terminate(/* forwarded args */);
}

