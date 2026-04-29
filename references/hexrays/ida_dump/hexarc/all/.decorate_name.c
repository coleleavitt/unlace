// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29030
// Name:            .decorate_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29030 jmp     cs:off_4B9000
//
// Resolved target: decorate_name
// Target address:  0x4BB9D0
// GOT/IAT slot:    0x4B9000
// Slot symbol:     off_4B9000
// Target type:     <no type info>
// ============================================================

void .decorate_name(/* see target signature */)
{
    // Tail-call to decorate_name via GOT/IAT indirection
    return decorate_name(/* forwarded args */);
}

