// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4200
// Name:            .__cxa_begin_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4200 jmp     cs:off_4E0E8
//
// Resolved target: __cxa_begin_catch
// Target address:  0x4F6F0
// GOT/IAT slot:    0x4E0E8
// Slot symbol:     off_4E0E8
// Target type:     void *(void *)
// ============================================================

/* see target sig */ .__cxa_begin_catch(/* see target signature */)
{
    // Tail-call to __cxa_begin_catch via GOT/IAT indirection
    return __cxa_begin_catch(/* forwarded args */);
}

