// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66C0
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66C0 jmp     cs:off_24348
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x26128
// GOT/IAT slot:    0x24348
// Slot symbol:     off_24348
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

