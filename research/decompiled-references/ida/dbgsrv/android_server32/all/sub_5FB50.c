/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB50
// Address: 0x0005FB50

//----- (0005FB50) --------------------------------------------------------
int __fastcall sub_5FB50(int a1, int *a2, const char **a3, int a4)
{
  int v4; // r4
  int v5; // r0

  v4 = *(_DWORD *)(a1 + 208);
  v5 = v4 - 100;
  if ( !v4 )
    v5 = 0;
  return sub_5F530(v5, a2, a3, a4);
}
