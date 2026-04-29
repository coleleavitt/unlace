// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3100
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3100 jmp     cs:off_13068
//
// Resolved target: __cxa_begin_catch
// Target address:  0x13750
// GOT/IAT slot:    0x13068
// Slot symbol:     off_13068
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

