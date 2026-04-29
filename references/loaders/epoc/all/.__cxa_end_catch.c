// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3430
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3430 jmp     cs:off_13200
//
// Resolved target: __cxa_end_catch
// Target address:  0x13900
// GOT/IAT slot:    0x13200
// Slot symbol:     off_13200
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

