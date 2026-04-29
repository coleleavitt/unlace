// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3110
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3110 jmp     cs:off_29070
//
// Resolved target: __cxa_begin_catch
// Target address:  0x29420
// GOT/IAT slot:    0x29070
// Slot symbol:     off_29070
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

