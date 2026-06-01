/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66504
// Address: 0x00066504

//----- (00066504) --------------------------------------------------------
bool __fastcall sub_66504(_DWORD *a1, int a2, int a3)
{
  int v5; // r4
  unsigned int v6; // r7
  int v7; // r0
  int *v8; // r0
  int *v9; // r4
  _DWORD *v10; // r0
  int v11; // r2
  _DWORD *v12; // r1
  int v13; // r2

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 5 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    if ( v6 == -1 )
    {
      v7 = 8;
      if ( *(_DWORD *)(a2 + 20) != -1 )
        v7 = 20;
      v6 = *(_DWORD *)(a2 + v7);
    }
    v8 = sub_663C4((int)a1, *(_DWORD *)(a2 + 4), v6);
    if ( v8 )
    {
      v9 = v8;
      sub_64B30((int)a1, "%a: bptcnd yielded false\n");
      *(_BYTE *)(a2 + 12) = 1;
      v10 = (_DWORD *)a1[46];
      v11 = a1[47];
      v12 = &v10[v11];
      if ( 4 * v11 )
      {
        v13 = 4 * v11;
        while ( v6 != *v10 )
        {
          v13 -= 4;
          ++v10;
          if ( !v13 )
            return sub_65F7C(a1, v9, (_DWORD *)a2, a3);
        }
      }
      if ( v10 != v12 )
      {
        if ( !under_debugger )
          interr(617);
        __debugbreak();
      }
      return sub_65F7C(a1, v9, (_DWORD *)a2, a3);
    }
  }
  return v5;
}
// E0550: using guessed type char under_debugger;
