/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65B2C
// Address: 0x00065B2C

//----- (00065B2C) --------------------------------------------------------
int __fastcall sub_65B2C(int a1)
{
  int v2; // r0

  sub_79D80(*(_DWORD *)(a1 + 8), -1);
  sub_65A18(*(_DWORD *)a1, *(int **)(a1 + 4));
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    sub_79BD4(v2);
    sub_8121C((void *)a1);
  }
  return 0;
}
