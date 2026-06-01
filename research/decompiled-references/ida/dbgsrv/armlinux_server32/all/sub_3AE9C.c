/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AE9C
// Address: 0x0003AE9C

//----- (0003AE9C) --------------------------------------------------------
int __fastcall sub_3AE9C(int a1)
{
  __int64 v2; // kr00_8
  int v3; // r5
  int v4; // r2
  int v5; // r6

  v2 = *(_QWORD *)(a1 + 168);
  v3 = *(_DWORD *)(v2 + 4 * (HIDWORD(v2) + 0x3FFFFFFF));
  v4 = v3;
  if ( HIDWORD(v2) )
  {
    *(_DWORD *)(a1 + 172) = HIDWORD(v2) - 1;
    v4 = *(_DWORD *)(v2 + 4 * (HIDWORD(v2) + 1073741822));
    if ( HIDWORD(v2) != 1 )
      *(_DWORD *)(a1 + 172) = HIDWORD(v2) - 2;
  }
  v5 = sub_3ADE0(a1, 171, v4);
  if ( v5 )
    return -1;
  if ( v3 )
    sub_3E73C(*(int **)(a1 + 112), v3, *(_DWORD *)(a1 + 116) - 4 - v3);
  return v5;
}
