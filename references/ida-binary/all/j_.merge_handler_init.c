// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FEBB0
// Name:            j_.merge_handler_init
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FEBB0 jmp     _merge_handler_init
//
// Resolved target: .merge_handler_init
// Target address:  0x114820
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.merge_handler_init(/* see target signature */)
{
    // Tail-call to .merge_handler_init via direct jump indirection
    return .merge_handler_init(/* forwarded args */);
}

