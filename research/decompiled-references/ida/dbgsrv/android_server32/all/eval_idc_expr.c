/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_expr
// Address: 0x0003F334

//----- (0003F334) --------------------------------------------------------
int __fastcall eval_idc_expr(int a1, int a2, const char *a3, int a4)
{
  _DWORD v9[2]; // [sp+Ch] [bp-Ch] BYREF

  if ( a1 )
  {
    free_idcv((unsigned __int8 *)a1);
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)a1 = 2;
  }
  v9[1] = a2;
  v9[0] = &off_D9BC0;
  return eval_idc_snippet(a1, a3, a4, (int)v9);
}
// D9BC0: using guessed type _UNKNOWN *off_D9BC0;
