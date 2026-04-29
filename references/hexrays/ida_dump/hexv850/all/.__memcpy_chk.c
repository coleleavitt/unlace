// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD90
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD90 jmp     cs:off_4C0EB0
//
// Resolved target: __memcpy_chk
// Target address:  0x4C3ED8
// GOT/IAT slot:    0x4C0EB0
// Slot symbol:     off_4C0EB0
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

