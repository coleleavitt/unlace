// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EDC0
// Name:            .__memcpy_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EDC0 jmp     cs:off_4E9EC8
//
// Resolved target: __memcpy_chk
// Target address:  0x4EC918
// GOT/IAT slot:    0x4E9EC8
// Slot symbol:     off_4E9EC8
// Target type:     <no type info>
// ============================================================

void .__memcpy_chk(/* see target signature */)
{
    // Tail-call to __memcpy_chk via GOT/IAT indirection
    return __memcpy_chk(/* forwarded args */);
}

