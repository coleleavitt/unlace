// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16150
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16150 jmp     cs:off_4F090
//
// Resolved target: __cxa_begin_catch
// Target address:  0x4FEC8
// GOT/IAT slot:    0x4F090
// Slot symbol:     off_4F090
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

