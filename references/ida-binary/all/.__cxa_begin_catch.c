// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1115E0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1115E0 jmp     cs:__cxa_begin_catch_ptr
//
// Resolved target: __cxa_begin_catch
// Target address:  0x8D3458
// GOT/IAT slot:    0x89F790
// Slot symbol:     __cxa_begin_catch_ptr
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

