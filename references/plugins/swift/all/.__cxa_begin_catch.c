// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41A0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41A0 jmp     cs:off_280B8
//
// Resolved target: __cxa_begin_catch
// Target address:  0x29A50
// GOT/IAT slot:    0x280B8
// Slot symbol:     off_280B8
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

