// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D60
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D60 jmp     cs:off_4B9698
//
// Resolved target: get_ea_name
// Target address:  0x4BC090
// GOT/IAT slot:    0x4B9698
// Slot symbol:     off_4B9698
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

