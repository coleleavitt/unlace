// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3600
// Name:            .get_mangled_name_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3600 jmp     cs:off_132E8
//
// Resolved target: get_mangled_name_type
// Target address:  0x13690
// GOT/IAT slot:    0x132E8
// Slot symbol:     off_132E8
// Target type:     <no type info>
// ============================================================

void .get_mangled_name_type(/* see target signature */)
{
    // Tail-call to get_mangled_name_type via GOT/IAT indirection
    return get_mangled_name_type(/* forwarded args */);
}

