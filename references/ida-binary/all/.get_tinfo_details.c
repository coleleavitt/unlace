// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1154C0
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1154C0 jmp     cs:get_tinfo_details_ptr
//
// Resolved target: get_tinfo_details
// Target address:  0x8D5CD0
// GOT/IAT slot:    0x8A1700
// Slot symbol:     get_tinfo_details_ptr
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

