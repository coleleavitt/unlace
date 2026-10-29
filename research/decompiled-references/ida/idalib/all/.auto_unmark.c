// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA490
// Name:            .auto_unmark
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA490 jmp     cs:off_2C7AA30
//
// Resolved target: auto_unmark
// Target address:  0x3A4210
// GOT/IAT slot:    0x2C7AA30
// Slot symbol:     off_2C7AA30
// Target type:     <no type info>
// ============================================================

void .auto_unmark(/* see target signature */)
{
    // Tail-call to auto_unmark via GOT/IAT indirection
    return auto_unmark(/* forwarded args */);
}

