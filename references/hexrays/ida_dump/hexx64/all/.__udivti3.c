// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B400
// Name:            .__udivti3
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B400 jmp     cs:off_4ED1E8
//
// Resolved target: __udivti3
// Target address:  0x4F14E0
// GOT/IAT slot:    0x4ED1E8
// Slot symbol:     off_4ED1E8
// Target type:     <no type info>
// ============================================================

void .__udivti3(/* see target signature */)
{
    // Tail-call to __udivti3 via GOT/IAT indirection
    return __udivti3(/* forwarded args */);
}

