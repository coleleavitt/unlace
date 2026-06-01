/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80922A0
// Address: 0x080922A0

//----- (080922A0) --------------------------------------------------------
char *__cdecl sub_80922A0(int a1, int a2)
{
  char *v2; // esi
  char *v3; // eax
  __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // ebp
  int v7; // edx
  void *v8; // eax
  int v9; // esi
  int v11; // [esp+0h] [ebp-20h]

  v2 = sub_80CF4E0((char **)a1, *(FILE **)(a2 + 148));
  if ( (int)v2 > 0 && *(_DWORD *)(a1 + 4) > 3u )
  {
    v3 = *(char **)a1;
    if ( **(_BYTE **)a1 == 0xEF && v3[1] == -69 && v3[2] == -65 )
    {
      LODWORD(v4) = sub_80CEF40(*(_DWORD *)(a2 + 148));
      if ( (int)(v2 + 2) >= v4 )
      {
        v5 = *(_DWORD *)(a1 + 4);
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            v9 = 1;
            return (char *)(v9 - 1);
          }
          v6 = 1;
          v7 = 0;
          if ( (unsigned int)(v5 - 1) > 3 )
          {
            v6 = v5 - 3;
            memmove(*(void **)a1, (const void *)(*(_DWORD *)a1 + 3), v5 - 4);
            v7 = v5 - 4;
          }
          v8 = *(void **)a1;
          if ( *(_DWORD *)(a1 + 8) < v6 )
          {
            v11 = v7;
            v8 = sub_80CF920(a1, v8, v6, 1u);
            v7 = v11;
            *(_DWORD *)a1 = v8;
          }
          *(_DWORD *)(a1 + 4) = v6;
          *((_BYTE *)v8 + v7) = 0;
          v9 = *(_DWORD *)(a1 + 4);
          if ( v9 )
            return (char *)(v9 - 1);
        }
        return nullptr;
      }
    }
  }
  return v2;
}
// 809230F: variable 'v4' is possibly undefined
