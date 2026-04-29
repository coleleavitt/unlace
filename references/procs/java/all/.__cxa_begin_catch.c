// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6160
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6160 jmp     cs:off_2D098
//
// Resolved target: __cxa_begin_catch
// Target address:  0x2D598
// GOT/IAT slot:    0x2D098
// Slot symbol:     off_2D098
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

