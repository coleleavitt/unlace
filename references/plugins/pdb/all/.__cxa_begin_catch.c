// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D1D0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D1D0 jmp     cs:off_B30D0
//
// Resolved target: __cxa_begin_catch
// Target address:  0xB3858
// GOT/IAT slot:    0xB30D0
// Slot symbol:     off_B30D0
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

