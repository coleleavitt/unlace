/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D20
// Address: 0x00049D20

//----- (00049D20) --------------------------------------------------------
int __cdecl sub_49D20(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // ecx

  v1 = *(_DWORD *)(a1 + 164);
  v2 = *(_DWORD *)(a1 + 168);
  v3 = *(_DWORD *)(v1 + 4 * v2 - 4);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 168) = v2 - 1;
    v5 = *(_DWORD *)(v1 + 4 * v2 - 8);
    v6 = v2 - 2;
    if ( !v4 )
      v6 = 0;
    *(_DWORD *)(a1 + 168) = v6;
  }
  else
  {
    v5 = *(_DWORD *)(v1 - 4);
  }
  sub_499F0(a1, 171, v5);
  if ( v3 )
    sub_52090(*(_DWORD **)(a1 + 108), v3, *(_DWORD *)(a1 + 112) + -4 - v3);
  return 0;
}
