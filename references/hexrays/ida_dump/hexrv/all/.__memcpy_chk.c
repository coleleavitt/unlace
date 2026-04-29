// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD80
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD80 jmp     cs:off_4BFEA8
//
// Resolved target: __memcpy_chk
// Target address:  0x4C33D0
// GOT/IAT slot:    0x4BFEA8
// Slot symbol:     off_4BFEA8
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

