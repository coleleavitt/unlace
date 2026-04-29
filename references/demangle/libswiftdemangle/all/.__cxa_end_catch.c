// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5A0
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5A0 jmp     cs:off_482D0
//
// Resolved target: __cxa_end_catch
// Target address:  0x48580
// GOT/IAT slot:    0x482D0
// Slot symbol:     off_482D0
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

