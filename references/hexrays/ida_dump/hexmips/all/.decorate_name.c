// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A030
// Name:            .decorate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A030 jmp     cs:off_4CD000
//
// Resolved target: decorate_name
// Target address:  0x4CF9F0
// GOT/IAT slot:    0x4CD000
// Slot symbol:     off_4CD000
// Target type:     <no type info>
// ============================================================

void .decorate_name(/* see target signature */)
{
    // Tail-call to decorate_name via GOT/IAT indirection
    return decorate_name(/* forwarded args */);
}

