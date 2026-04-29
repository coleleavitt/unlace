// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17210
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17210 jmp     cs:off_4F8F0
//
// Resolved target: __cxa_end_catch
// Target address:  0x50DE0
// GOT/IAT slot:    0x4F8F0
// Slot symbol:     off_4F8F0
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

