// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3550
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3550 jmp     cs:off_13290
//
// Resolved target: __memcpy_chk
// Target address:  0x13628
// GOT/IAT slot:    0x13290
// Slot symbol:     off_13290
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

