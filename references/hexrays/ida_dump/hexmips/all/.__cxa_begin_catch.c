// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5D0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5D0 jmp     cs:off_4CD2D0
//
// Resolved target: __cxa_begin_catch
// Target address:  0x4CFCC0
// GOT/IAT slot:    0x4CD2D0
// Slot symbol:     off_4CD2D0
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

