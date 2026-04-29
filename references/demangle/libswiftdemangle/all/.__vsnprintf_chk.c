// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA230
// Name:            .__vsnprintf_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA230 jmp     cs:off_48118
//
// Resolved target: __vsnprintf_chk
// Target address:  0x48480
// GOT/IAT slot:    0x48118
// Slot symbol:     off_48118
// Target type:     <no type info>
// ============================================================

void .__vsnprintf_chk(/* see target signature */)
{
    // Tail-call to __vsnprintf_chk via GOT/IAT indirection
    return __vsnprintf_chk(/* forwarded args */);
}

