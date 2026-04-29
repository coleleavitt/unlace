// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3560
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3560 jmp     cs:off_20298
//
// Resolved target: __cxa_end_catch
// Target address:  0x21BC8
// GOT/IAT slot:    0x20298
// Slot symbol:     off_20298
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

