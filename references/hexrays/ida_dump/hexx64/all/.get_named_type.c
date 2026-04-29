// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CEE0
// Name:            .get_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CEE0 jmp     cs:off_4EDF58
//
// Resolved target: get_named_type
// Target address:  0x4F22A8
// GOT/IAT slot:    0x4EDF58
// Slot symbol:     off_4EDF58
// Target type:     <no type info>
// ============================================================

void .get_named_type(/* see target signature */)
{
    // Tail-call to get_named_type via GOT/IAT indirection
    return get_named_type(/* forwarded args */);
}

