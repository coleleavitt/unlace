// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9890
// Name:            .__cxa_end_catch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9890 jmp     cs:off_89430
//
// Resolved target: __cxa_end_catch
// Target address:  0x8C750
// GOT/IAT slot:    0x89430
// Slot symbol:     off_89430
// Target type:     void()
// ============================================================

/* see target sig */ .__cxa_end_catch(/* see target signature */)
{
    // Tail-call to __cxa_end_catch via GOT/IAT indirection
    return __cxa_end_catch(/* forwarded args */);
}

