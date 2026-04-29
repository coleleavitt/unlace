// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5290
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5290 jmp     cs:off_1A130
//
// Resolved target: get_func
// Target address:  0x1A4B8
// GOT/IAT slot:    0x1A130
// Slot symbol:     off_1A130
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

