// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x277BD0
// Name:            j_.switch_dbctx
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x277BD0 jmp     _switch_dbctx
//
// Resolved target: .switch_dbctx
// Target address:  0x115190
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ j_.switch_dbctx(/* see target signature */)
{
    // Tail-call to .switch_dbctx via direct jump indirection
    return .switch_dbctx(/* forwarded args */);
}

