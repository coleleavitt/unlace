/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr_long
// Address: 0x0000000000067AB0

//----- (0000000000067AB0) ----------------------------------------------------
__int64 __fastcall eval_expr_long(_QWORD *a1, __int64 a2, const char *a3, __int64 a4)
{
  unsigned int v5; // w19
  __int64 v7; // [xsp+8h] [xbp-48h] BYREF
  __int64 v8; // [xsp+10h] [xbp-40h]
  __int64 v9; // [xsp+18h] [xbp-38h]
  __int64 v10; // [xsp+20h] [xbp-30h]
  __int64 v11; // [xsp+28h] [xbp-28h]
  int8x16x2_t v12; // 0:q0.32

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  LOBYTE(v7) = 2;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  if ( (eval_expr(&v7, a2, a3, a4) & 1) != 0 )
  {
    idcv_long((__int64)&v7, v12);
    *a1 = v8;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  free_idcv(&v7);
  return v5;
}
// 67AEC: variable 'v12' is possibly undefined
