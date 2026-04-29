// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97D0
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97D0 jmp     cs:off_2E3D0
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x2EA50
// GOT/IAT slot:    0x2E3D0
// Slot symbol:     off_2E3D0
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

