// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEB0
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEB0 jmp     cs:off_4ED740
//
// Resolved target: get_func
// Target address:  0x4F1A50
// GOT/IAT slot:    0x4ED740
// Slot symbol:     off_4ED740
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

