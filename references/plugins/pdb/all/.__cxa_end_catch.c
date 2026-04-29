// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA10
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA10 jmp     cs:off_B34F0
//
// Resolved target: __cxa_end_catch
// Target address:  0xB3CA8
// GOT/IAT slot:    0xB34F0
// Slot symbol:     off_B34F0
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

