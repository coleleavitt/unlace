// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3540
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3540 jmp     cs:off_14288
//
// Resolved target: __cxa_end_catch
// Target address:  0x14890
// GOT/IAT slot:    0x14288
// Slot symbol:     off_14288
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

