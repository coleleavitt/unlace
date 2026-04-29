// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CEA0
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CEA0 jmp     cs:off_4EDF38
//
// Resolved target: __memcpy_chk
// Target address:  0x4F2288
// GOT/IAT slot:    0x4EDF38
// Slot symbol:     off_4EDF38
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

