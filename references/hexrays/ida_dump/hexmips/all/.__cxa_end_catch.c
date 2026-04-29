// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC00
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC00 jmp     cs:off_4CDDE8
//
// Resolved target: __cxa_end_catch
// Target address:  0x4D0828
// GOT/IAT slot:    0x4CDDE8
// Slot symbol:     off_4CDDE8
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

