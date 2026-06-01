/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x000000010002D0D8

//----- (000000010002D0D8) ----------------------------------------------------
__int64 __fastcall eval_idc_expr(unsigned __int8 *a1, __int64 a2, const char *a3, char **a4)
{
  unsigned __int8 *v7; // x22
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( a1 )
  {
    v7 = a1;
    free_idcv(a1);
    a1 = v7;
    *v7 = 2;
    *((_QWORD *)v7 + 1) = 0;
  }
  v9[0] = &off_10009E498;
  v9[1] = a2;
  return eval_idc_snippet(a1, a3, a4, (__int64)v9);
}
// 10009E498: using guessed type __int64 (__fastcall *off_10009E498)();
