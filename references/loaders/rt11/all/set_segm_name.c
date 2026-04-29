// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x5180
// Name:     set_segm_name
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_segm_name are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_segm_name(/* see import library declaration */);

