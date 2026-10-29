// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1148C0
// Name:            .dummy_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1148C0 jmp     cs:dummy_name_ea_ptr
//
// Resolved target: dummy_name_ea
// Target address:  0x8D5530
// GOT/IAT slot:    0x8A1100
// Slot symbol:     dummy_name_ea_ptr
// Target type:     <no type info>
// ============================================================

void .dummy_name_ea(/* see target signature */)
{
    // Tail-call to dummy_name_ea via GOT/IAT indirection
    return dummy_name_ea(/* forwarded args */);
}

