// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3440
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3440 jmp     cs:off_28208
//
// Resolved target: set_name
// Target address:  0x286B8
// GOT/IAT slot:    0x28208
// Slot symbol:     off_28208
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

