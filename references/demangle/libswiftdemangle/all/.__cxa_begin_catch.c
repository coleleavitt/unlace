// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5E0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5E0 jmp     cs:off_482F0
//
// Resolved target: __cxa_begin_catch
// Target address:  0x485B0
// GOT/IAT slot:    0x482F0
// Slot symbol:     off_482F0
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

