// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E0 jmp     cs:off_13058
//
// Resolved target: __cxa_begin_catch
// Target address:  0x132F0
// GOT/IAT slot:    0x13058
// Slot symbol:     off_13058
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

