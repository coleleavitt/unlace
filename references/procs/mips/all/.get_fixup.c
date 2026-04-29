// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19660
// Name:            .get_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19660 jmp     cs:off_75318
//
// Resolved target: get_fixup
// Target address:  0x75B68
// GOT/IAT slot:    0x75318
// Slot symbol:     off_75318
// Target type:     <no type info>
// ============================================================

void .get_fixup(/* see target signature */)
{
    // Tail-call to get_fixup via GOT/IAT indirection
    return get_fixup(/* forwarded args */);
}

