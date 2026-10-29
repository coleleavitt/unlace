/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex_file
// Address: 0x00000000000ACF20

//----- (00000000000ACF20) ----------------------------------------------------
void __fastcall vshow_hex_file(_DWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, _OWORD *a5, int8x16x2_t a6)
{
  void *v11; // x24
  __int128 v12; // q0
  _OWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v14; // [xsp+28h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 + a2 > qlsize((__int64)a1, a2, a6) )
    sub_3B1DC("show_hex_file: read past end");
  v11 = (void *)operator new[](a3);
  qlseek((__int64)a1, a2, 0);
  lread(a1, v11, a3);
  v12 = a5[1];
  v13[0] = *a5;
  v13[1] = v12;
  vshow_hex((unsigned __int8 *)v11, a3, a4, v13);
  operator delete[](v11);
}
