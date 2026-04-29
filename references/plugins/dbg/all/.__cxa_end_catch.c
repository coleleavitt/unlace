// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3520
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3520 jmp     cs:off_13278
//
// Resolved target: __cxa_end_catch
// Target address:  0x13608
// GOT/IAT slot:    0x13278
// Slot symbol:     off_13278
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

