// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4C3758
// Name:     calc_thunk_func_target
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to calc_thunk_func_target are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void calc_thunk_func_target(/* see import library declaration */);

