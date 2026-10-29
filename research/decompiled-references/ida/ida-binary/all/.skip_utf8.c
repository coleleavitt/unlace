// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114A60
// Name:            .skip_utf8
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114A60 jmp     cs:skip_utf8_ptr
//
// Resolved target: skip_utf8
// Target address:  0x8D5640
// GOT/IAT slot:    0x8A11D0
// Slot symbol:     skip_utf8_ptr
// Target type:     <no type info>
// ============================================================

void .skip_utf8(/* see target signature */)
{
    // Tail-call to skip_utf8 via GOT/IAT indirection
    return skip_utf8(/* forwarded args */);
}

