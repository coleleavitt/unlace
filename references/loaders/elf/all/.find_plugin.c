// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9460
// Name:            .find_plugin
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9460 jmp     cs:off_89218
//
// Resolved target: find_plugin
// Target address:  0x8C520
// GOT/IAT slot:    0x89218
// Slot symbol:     off_89218
// Target type:     <no type info>
// ============================================================

void .find_plugin(/* see target signature */)
{
    // Tail-call to find_plugin via GOT/IAT indirection
    return find_plugin(/* forwarded args */);
}

