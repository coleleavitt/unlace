/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CE50
// Address: 0x0008CE50

//----- (0008CE50) --------------------------------------------------------
bool __cdecl sub_8CE50(int a1, int a2, char a3)
{
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  _DWORD *i; // edx
  int *v11; // [esp+8h] [ebp-14h]

  v3 = a2;
  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) != 5 )
    return 0;
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == -1 )
  {
    v5 = 20;
    if ( *(_DWORD *)(a2 + 20) == -1 )
      v5 = 8;
    v4 = *(_DWORD *)(a2 + v5);
    v3 = a2;
  }
  v6 = sub_8CC50(a1, *(_DWORD *)(v3 + 4), v4);
  if ( !v6 )
    return 0;
  v11 = (int *)v6;
  sub_8A3F0(a1, "%a: bptcnd yielded false\n", v4);
  *(_BYTE *)(a2 + 12) = 1;
  v7 = *(_DWORD *)(a1 + 188);
  v8 = 4 * v7;
  i = *(_DWORD **)(a1 + 184);
  if ( 4 * v7 )
  {
    for ( i = *(_DWORD **)(a1 + 184); v4 != *i; ++i )
    {
      v8 -= 4;
      if ( !v8 )
        return sub_8C5E0(a1, v11, (_DWORD *)a2, a3);
    }
  }
  if ( i != (_DWORD *)(*(_DWORD *)(a1 + 184) + 4 * v7) )
  {
    if ( !(_BYTE)under_debugger )
      interr(617);
    BUG();
  }
  return sub_8C5E0(a1, v11, (_DWORD *)a2, a3);
}
// 13E34C: using guessed type int under_debugger;
