// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A660
// Name:            .__cxa_finalize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A660 jmp     cs:off_4CD318
//
// Resolved target: __cxa_finalize
// Target address:  0x4CFD08
// GOT/IAT slot:    0x4CD318
// Slot symbol:     off_4CD318
// Target type:     int(void *)
// ============================================================

/* see target sig */ .__cxa_finalize(/* see target signature */)
{
    // Tail-call to __cxa_finalize via GOT/IAT indirection
    return __cxa_finalize(/* forwarded args */);
}

