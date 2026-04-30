// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1132E0
// Name:            .get_tid_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1132E0 jmp     cs:get_tid_name_ptr
//
// Resolved target: get_tid_name
// Target address:  0x8D4708
// GOT/IAT slot:    0x8A0610
// Slot symbol:     get_tid_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_tid_name(/* see target signature */)
{
    // Tail-call to get_tid_name via GOT/IAT indirection
    return get_tid_name(/* forwarded args */);
}

