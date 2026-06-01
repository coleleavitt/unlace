// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117A00
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117A00 jmp     cs:is_cvt64_ptr
//
// Resolved target: is_cvt64
// Target address:  0x8D7438
// GOT/IAT slot:    0x8A29A0
// Slot symbol:     is_cvt64_ptr
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

