// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46E0
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46E0 jmp     cs:off_28358
//
// Resolved target: __cxa_end_catch
// Target address:  0x29D00
// GOT/IAT slot:    0x28358
// Slot symbol:     off_28358
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

