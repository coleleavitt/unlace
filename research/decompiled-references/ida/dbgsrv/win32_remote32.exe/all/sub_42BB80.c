/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BB80
// Address: 0x0042BB80

//----- (0042BB80) --------------------------------------------------------
int __stdcall sub_42BB80(int a1)
{
  int v1; // edx
  void ***v2; // esi
  int v3; // edi

  v1 = *(_DWORD *)(a1 + 188);
  v2 = *(void ****)(*(_DWORD *)(a1 + 184) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 188) = v1 - 1;
  v3 = sub_42D890(a1, v2, 0, 0);
  if ( v2 )
    sub_42C5A0(v2, 1);
  return sub_45CC20(v3);
}
