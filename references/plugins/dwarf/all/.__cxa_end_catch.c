// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB20
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB20 jmp     cs:off_CA578
//
// Resolved target: __cxa_end_catch
// Target address:  0xD0EC8
// GOT/IAT slot:    0xCA578
// Slot symbol:     off_CA578
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

