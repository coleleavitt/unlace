// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4510
// Name:            .get_aflags
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4510 jmp     cs:off_28270
//
// Resolved target: get_aflags
// Target address:  0x29C08
// GOT/IAT slot:    0x28270
// Slot symbol:     off_28270
// Target type:     <no type info>
// ============================================================

void .get_aflags(/* see target signature */)
{
    // Tail-call to get_aflags via GOT/IAT indirection
    return get_aflags(/* forwarded args */);
}

