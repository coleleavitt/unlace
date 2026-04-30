// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119EC0
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119EC0 jmp     cs:__cxa_end_catch_ptr
//
// Resolved target: __cxa_end_catch
// Target address:  0x8D8B38
// GOT/IAT slot:    0x8A3C00
// Slot symbol:     __cxa_end_catch_ptr
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

