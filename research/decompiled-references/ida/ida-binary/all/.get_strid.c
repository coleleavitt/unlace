// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113160
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113160 jmp     cs:get_strid_ptr
//
// Resolved target: get_strid
// Target address:  0x8D45F8
// GOT/IAT slot:    0x8A0550
// Slot symbol:     get_strid_ptr
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

