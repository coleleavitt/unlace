/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ABF4
// Address: 0x0003ABF4

//----- (0003ABF4) --------------------------------------------------------
int __fastcall sub_3ABF4(int a1)
{
  int v1; // r4
  int v2; // r2

  v1 = *(_DWORD *)(a1 + 172);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 168) + 4 * (v1 - 1));
  if ( v1 )
    *(_DWORD *)(a1 + 172) = v1 - 1;
  sub_3AB40(a1, 172, v2);
  return 0;
}
