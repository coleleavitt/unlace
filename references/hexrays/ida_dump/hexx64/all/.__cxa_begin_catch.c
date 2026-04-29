// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5E0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5E0 jmp     cs:off_4ED2D8
//
// Resolved target: __cxa_begin_catch
// Target address:  0x4F15D0
// GOT/IAT slot:    0x4ED2D8
// Slot symbol:     off_4ED2D8
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

