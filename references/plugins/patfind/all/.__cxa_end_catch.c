// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2310
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2310 jmp     cs:off_13170
//
// Resolved target: __cxa_end_catch
// Target address:  0x13410
// GOT/IAT slot:    0x13170
// Slot symbol:     off_13170
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

