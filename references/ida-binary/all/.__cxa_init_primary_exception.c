// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118580
// Name:            .__cxa_init_primary_exception
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118580 jmp     cs:__cxa_init_primary_exception_ptr
//
// Resolved target: __cxa_init_primary_exception
// Target address:  0x8D7B78
// GOT/IAT slot:    0x8A2F60
// Slot symbol:     __cxa_init_primary_exception_ptr
// Target type:     <no type info>
// ============================================================

void .__cxa_init_primary_exception(/* see target signature */)
{
    // Tail-call to __cxa_init_primary_exception via GOT/IAT indirection
    return __cxa_init_primary_exception(/* forwarded args */);
}

