// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3040
// Name:            .auto_is_ok
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3040 jmp     cs:off_1A008
//
// Resolved target: auto_is_ok
// Target address:  0x1A2C0
// GOT/IAT slot:    0x1A008
// Slot symbol:     off_1A008
// Target type:     <no type info>
// ============================================================

void .auto_is_ok(/* see target signature */)
{
    // Tail-call to auto_is_ok via GOT/IAT indirection
    return auto_is_ok(/* forwarded args */);
}

