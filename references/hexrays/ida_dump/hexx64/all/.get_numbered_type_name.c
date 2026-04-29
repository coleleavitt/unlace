// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFA0
// Name:            .get_numbered_type_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFA0 jmp     cs:off_4ED7B8
//
// Resolved target: get_numbered_type_name
// Target address:  0x4F1AC8
// GOT/IAT slot:    0x4ED7B8
// Slot symbol:     off_4ED7B8
// Target type:     <no type info>
// ============================================================

void .get_numbered_type_name(/* see target signature */)
{
    // Tail-call to get_numbered_type_name via GOT/IAT indirection
    return get_numbered_type_name(/* forwarded args */);
}

