/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46190
// Address: 0x00046190

//----- (00046190) --------------------------------------------------------
int __cdecl sub_46190(int a1, int a2)
{
  unsigned int v2; // eax
  FILE *v3; // eax
  int v4; // edx
  _BYTE *v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // esi
  size_t v9; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+18h] [ebp-24h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-20h]
  unsigned int v12; // [esp+20h] [ebp-1Ch]
  unsigned int v13; // [esp+28h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 4);
  if ( dword_13BD2C > v2 && (v3 = *(FILE **)(dword_13BD28 + 4 * v2)) != nullptr )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( qgetline(&v10, v3) >= 0 )
    {
      v4 = __strlen_chk("\n", 2);
      v5 = (_BYTE *)v10;
      v6 = v11 - 1;
      if ( !v11 )
        v6 = 0;
      v9 = v4;
      v7 = v6 + v4 + 1;
      if ( v12 < v7 )
      {
        v5 = qvector_reserve((int)&v10, (void *)v10, v6 + v4 + 1, 1u);
        v10 = (int)v5;
      }
      v11 = v7;
      v5[v6 + v9] = 0;
      memmove((void *)(v10 + v6), "\n", v9);
      *(_BYTE *)a2 = 7;
      *(_DWORD *)(a2 + 4) = v10;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 12) = v12;
      v10 = 0;
      v11 = 0;
      goto LABEL_12;
    }
    *(_DWORD *)(a2 + 4) = -1;
    if ( v10 )
    {
      v11 = 0;
      qfree((void *)v10);
      v10 = 0;
LABEL_12:
      v12 = 0;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = -1;
  }
  return 0;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
