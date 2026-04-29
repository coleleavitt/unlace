// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBF0
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBF0 jmp     cs:off_4DADE0
//
// Resolved target: __cxa_end_catch
// Target address:  0x4DD800
// GOT/IAT slot:    0x4DADE0
// Slot symbol:     off_4DADE0
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

