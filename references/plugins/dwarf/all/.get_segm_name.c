// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAAE0
// Name:            .get_segm_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAAE0 jmp     cs:off_CA558
//
// Resolved target: get_segm_name
// Target address:  0xD0EA8
// GOT/IAT slot:    0xCA558
// Slot symbol:     off_CA558
// Target type:     <no type info>
// ============================================================

void .get_segm_name(/* see target signature */)
{
    // Tail-call to get_segm_name via GOT/IAT indirection
    return get_segm_name(/* forwarded args */);
}

