// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D60
// Name:            .is_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D60 jmp     cs:off_75698
//
// Resolved target: is_cvt64
// Target address:  0x75F08
// GOT/IAT slot:    0x75698
// Slot symbol:     off_75698
// Target type:     <no type info>
// ============================================================

void .is_cvt64(/* see target signature */)
{
    // Tail-call to is_cvt64 via GOT/IAT indirection
    return is_cvt64(/* forwarded args */);
}

