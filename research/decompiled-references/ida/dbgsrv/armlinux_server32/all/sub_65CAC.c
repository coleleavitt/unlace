/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CAC
// Address: 0x00065CAC

//----- (00065CAC) --------------------------------------------------------
int __fastcall sub_65CAC(int a1)
{
  int v2; // r0

  sub_79EE8(*(_DWORD *)(a1 + 8), -1);
  sub_65B98(*(_DWORD *)a1, *(int **)(a1 + 4));
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    sub_79D3C(v2);
    sub_808A0((void *)a1);
  }
  return 0;
}
