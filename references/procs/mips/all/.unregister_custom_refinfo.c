// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19AF0
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19AF0 jmp     cs:off_75560
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x75DC0
// GOT/IAT slot:    0x75560
// Slot symbol:     off_75560
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

