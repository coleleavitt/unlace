// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114830
// Name:            .get_eah
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114830 jmp     cs:get_eah_ptr
//
// Resolved target: get_eah
// Target address:  0x8D54A8
// GOT/IAT slot:    0x8A10B8
// Slot symbol:     get_eah_ptr
// Target type:     <no type info>
// ============================================================

void .get_eah(/* see target signature */)
{
    // Tail-call to get_eah via GOT/IAT indirection
    return get_eah(/* forwarded args */);
}

