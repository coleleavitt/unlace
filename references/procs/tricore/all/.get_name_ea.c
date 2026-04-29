// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6710
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6710 jmp     cs:off_24370
//
// Resolved target: get_name_ea
// Target address:  0x26150
// GOT/IAT slot:    0x24370
// Slot symbol:     off_24370
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

