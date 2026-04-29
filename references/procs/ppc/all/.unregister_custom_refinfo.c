// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C70
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C70 jmp     cs:off_95620
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x96068
// GOT/IAT slot:    0x95620
// Slot symbol:     off_95620
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

