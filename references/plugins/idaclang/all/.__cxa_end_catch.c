// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3470
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3470 jmp     cs:off_29220
//
// Resolved target: __cxa_end_catch
// Target address:  0x295E0
// GOT/IAT slot:    0x29220
// Slot symbol:     off_29220
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

