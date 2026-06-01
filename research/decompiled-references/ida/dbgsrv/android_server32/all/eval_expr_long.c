/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_expr_long
// Address: 0x0003F390

//----- (0003F390) --------------------------------------------------------
int __fastcall eval_expr_long(_DWORD *a1, int a2, const char *a3, int a4)
{
  int v5; // r5
  unsigned __int8 v7[8]; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]
  int v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]

  v7[0] = 2;
  v5 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  if ( eval_expr((int)v7, a2, a3, a4) )
  {
    idcv_long((int)v7);
    *a1 = v8;
    v5 = 1;
  }
  free_idcv(v7);
  return v5;
}
