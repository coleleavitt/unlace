// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117650
// Name:            .__vsnprintf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117650 jmp     cs:__vsnprintf_chk_ptr
//
// Resolved target: __vsnprintf_chk
// Target address:  0x8D71F0
// GOT/IAT slot:    0x8A27C8
// Slot symbol:     __vsnprintf_chk_ptr
// Target type:     <no type info>
// ============================================================

void .__vsnprintf_chk(/* see target signature */)
{
    // Tail-call to __vsnprintf_chk via GOT/IAT indirection
    return __vsnprintf_chk(/* forwarded args */);
}

