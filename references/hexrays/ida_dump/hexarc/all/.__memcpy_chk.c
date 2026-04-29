// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD60
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD60 jmp     cs:off_4B9E98
//
// Resolved target: __memcpy_chk
// Target address:  0x4BC8C8
// GOT/IAT slot:    0x4B9E98
// Slot symbol:     off_4B9E98
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

