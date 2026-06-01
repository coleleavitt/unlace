/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_364A0
// Address: 0x000364A0

//----- (000364A0) --------------------------------------------------------
char __cdecl sub_364A0(int a1, int a2)
{
  int v2; // ecx
  unsigned int *v3; // edi
  unsigned int *v4; // esi
  int v5; // ecx
  int *v6; // edi
  int *v7; // esi
  void *v9; // [esp+18h] [ebp-24h] BYREF
  int v10; // [esp+1Ch] [ebp-20h]
  int v11; // [esp+20h] [ebp-1Ch]
  unsigned int v12; // [esp+28h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_41CE0((int *)(a2 + 4), 0);
    qfree(*(void **)(a2 + 4));
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  if ( *(_BYTE *)(a1 + 176) )
  {
    v2 = *(_DWORD *)(a1 + 60);
    if ( (v2 & 0x3FFFFFF) != 0 )
    {
      v3 = *(unsigned int **)(a1 + 56);
      v4 = v3;
      do
      {
        if ( v4[1] == 7 )
        {
          v9 = nullptr;
          v10 = 0;
          v11 = 0;
          sub_366F0(a1 + 40, (int)&v9, v4);
          sub_36A50((_DWORD *)a2, (int *)&v9);
          if ( v9 )
          {
            v10 = 0;
            qfree(v9);
            v9 = nullptr;
            v11 = 0;
          }
          v3 = *(unsigned int **)(a1 + 56);
          v2 = *(_DWORD *)(a1 + 60);
        }
        v4 += 16;
      }
      while ( v4 != &v3[16 * v2] );
    }
  }
  if ( *(_BYTE *)(a1 + 36) )
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( 56 * v5 )
    {
      v6 = *(int **)(a1 + 16);
      v7 = v6;
      do
      {
        if ( *v7 == 4 )
        {
          v9 = nullptr;
          v10 = 0;
          v11 = 0;
          sub_36C90(a1, (int)&v9, v7);
          sub_36A50((_DWORD *)a2, (int *)&v9);
          if ( v9 )
          {
            v10 = 0;
            qfree(v9);
            v9 = nullptr;
            v11 = 0;
          }
          v6 = *(int **)(a1 + 16);
          v5 = *(_DWORD *)(a1 + 20);
        }
        v7 += 14;
      }
      while ( v7 != &v6[14 * v5] );
    }
  }
  *(_BYTE *)(a2 + 16) = 1;
  return 1;
}
