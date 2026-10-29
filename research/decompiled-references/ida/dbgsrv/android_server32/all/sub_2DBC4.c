/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DBC4
// Address: 0x0002DBC4

//----- (0002DBC4) --------------------------------------------------------
int __fastcall sub_2DBC4(int a1, int a2)
{
  int v4; // r2
  unsigned int *v5; // r3
  unsigned int *v6; // r7
  int v7; // r2
  int *v8; // r3
  int *v9; // r6
  void *v11; // [sp+10h] [bp-10h] BYREF
  int v12; // [sp+14h] [bp-Ch]
  int v13; // [sp+18h] [bp-8h]

  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_36040((int *)(a2 + 4), 0);
    qfree(*(void **)(a2 + 4));
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  if ( *(_BYTE *)(a1 + 176) )
  {
    v4 = *(_DWORD *)(a1 + 60);
    if ( v4 << 6 )
    {
      v5 = *(unsigned int **)(a1 + 56);
      v6 = v5;
      do
      {
        if ( v6[1] == 7 )
        {
          v12 = 0;
          v11 = nullptr;
          v13 = 0;
          sub_2DCFC(a1 + 40, (int)&v11, v6);
          sub_2DF74((_DWORD *)a2, (int *)&v11);
          if ( v11 )
          {
            v12 = 0;
            qfree(v11);
            v13 = 0;
            v11 = nullptr;
          }
          v5 = *(unsigned int **)(a1 + 56);
          v4 = *(_DWORD *)(a1 + 60);
        }
        v6 += 16;
      }
      while ( v6 != &v5[16 * v4] );
    }
  }
  if ( *(_BYTE *)(a1 + 36) )
  {
    v7 = *(_DWORD *)(a1 + 20);
    if ( 56 * v7 )
    {
      v8 = *(int **)(a1 + 16);
      v9 = v8;
      do
      {
        if ( *v9 == 4 )
        {
          v12 = 0;
          v11 = nullptr;
          v13 = 0;
          sub_2E0B0(a1, (int)&v11, v9);
          sub_2DF74((_DWORD *)a2, (int *)&v11);
          if ( v11 )
          {
            v12 = 0;
            qfree(v11);
            v13 = 0;
            v11 = nullptr;
          }
          v8 = *(int **)(a1 + 16);
          v7 = *(_DWORD *)(a1 + 20);
        }
        v9 += 14;
      }
      while ( v9 != &v8[14 * v7] );
    }
  }
  *(_BYTE *)(a2 + 16) = 1;
  return 1;
}
