/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AE40
// Address: 0x0008AE40

//----- (0008AE40) --------------------------------------------------------
bool __cdecl sub_8AE40(int a1, int a2, int a3)
{
  bool result; // al
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // edx

  result = 1;
  if ( a3 && (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    v4 = *(_DWORD **)(a1 + 164);
    if ( !v4 )
      return 0;
    v5 = *(_DWORD *)(a2 + 4);
    v6 = (_DWORD *)(a1 + 164);
    do
    {
      if ( v4[4] >= v5 )
        v6 = v4;
      v4 = (_DWORD *)v4[v4[4] < v5];
    }
    while ( v4 );
    return v6 != (_DWORD *)(a1 + 164)
        && v5 >= v6[4]
        && (v7 = v6[6]) != 0
        && *(_DWORD *)(v6[5] + 24 * v7 - 8) == *(_DWORD *)(a2 + 8);
  }
  return result;
}
