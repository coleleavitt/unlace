// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x293F0
// Name:            .__udivti3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x293F0 jmp     cs:off_4B91E0
//
// Resolved target: __udivti3
// Target address:  0x4BBBB0
// GOT/IAT slot:    0x4B91E0
// Slot symbol:     off_4B91E0
// Target type:     <no type info>
// ============================================================

void .__udivti3(/* see target signature */)
{
    // Tail-call to __udivti3 via GOT/IAT indirection
    return __udivti3(/* forwarded args */);
}

