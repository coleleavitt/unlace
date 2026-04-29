// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x5400
// Name:     set_segm_addressing
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to set_segm_addressing are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void set_segm_addressing(/* see import library declaration */);

