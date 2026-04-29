// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91F0
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91F0 jmp     cs:off_890E0
//
// Resolved target: __cxa_begin_catch
// Target address:  0x8C3E0
// GOT/IAT slot:    0x890E0
// Slot symbol:     off_890E0
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

