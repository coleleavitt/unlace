// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114940
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114940 jmp     cs:get_path_ptr
//
// Resolved target: get_path
// Target address:  0x8D5580
// GOT/IAT slot:    0x8A1140
// Slot symbol:     get_path_ptr
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

