// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8740
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8740 jmp     cs:off_2A388
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x2BDA8
// GOT/IAT slot:    0x2A388
// Slot symbol:     off_2A388
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

