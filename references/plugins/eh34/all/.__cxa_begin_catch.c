// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6180
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6180 jmp     cs:off_8D0A8
//
// Resolved target: __cxa_begin_catch
// Target address:  0x8D628
// GOT/IAT slot:    0x8D0A8
// Slot symbol:     off_8D0A8
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

