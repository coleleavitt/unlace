/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_206B4
// Address: 0x000206B4

//----- (000206B4) --------------------------------------------------------
int __fastcall sub_206B4(int a1, int a2, int a3)
{
  unsigned int v4; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int v8; // r2
  unsigned int v9; // r6
  int result; // r0
  _BYTE *v11; // [sp+4h] [bp-54h]
  void **v12; // [sp+Ch] [bp-4Ch]
  _BYTE *v13; // [sp+10h] [bp-48h]
  _DWORD v16[3]; // [sp+28h] [bp-30h] BYREF
  char v17; // [sp+34h] [bp-24h]
  int v18; // [sp+38h] [bp-20h]
  int v19; // [sp+3Ch] [bp-1Ch]
  int v20; // [sp+40h] [bp-18h]
  int v21; // [sp+44h] [bp-14h]
  int v22; // [sp+48h] [bp-10h]
  int v23; // [sp+4Ch] [bp-Ch]
  int v24; // [sp+50h] [bp-8h]

  v11 = (_BYTE *)(a1 + 1022);
  if ( *(_BYTE *)(a1 + 1022) && !*(_BYTE *)(a1 + 977) )
  {
    if ( !under_debugger )
      interr(30059);
    __debugbreak();
  }
  v13 = (_BYTE *)(a1 + 1020);
  v12 = (void **)(a1 + 56);
  do
  {
    while ( !*(_DWORD *)(a1 + 76) )
    {
      v5 = 0;
      v17 = 0;
      v16[1] = 0;
      v16[0] = -1;
      v16[2] = -1;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      if ( !sub_1FDB0((_DWORD *)a1, (int)v16, a3) )
      {
        free_debug_event(v16);
        return 0;
      }
      if ( (v18 & 0xFFFFFFF) != 0 )
      {
        v6 = *(_DWORD *)(a1 + 60);
        v7 = *(_DWORD *)(a1 + 64);
        v8 = 93 * ((v7 - v6) >> 2) - 1;
        if ( v7 == v6 )
          v8 = v7 - v6;
        v9 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
        if ( v8 == v9 )
        {
          sub_25954(v12);
          v9 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
          v6 = *(_DWORD *)(a1 + 60);
          v7 = *(_DWORD *)(a1 + 64);
        }
        if ( v7 != v6 )
          v5 = *(_DWORD *)(v6 + 4 * (v9 / 0x5D)) + 44 * (v9 % 0x5D);
        *(_DWORD *)v5 = -1;
        *(_DWORD *)&byte_4[v5] = 0;
        *(_DWORD *)&byte_8[v5] = -1;
        byte_9[v5 + 3] = 0;
        *(_DWORD *)((char *)&word_10 + v5) = 0;
        copy_debug_event(v5, (int)v16);
        ++*(_DWORD *)(a1 + 76);
        *v13 = 0;
      }
      free_debug_event(v16);
    }
    copy_debug_event(
      a2,
      *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * (*(_DWORD *)(a1 + 72) / 0x5Du)) + 44 * (*(_DWORD *)(a1 + 72) % 0x5Du));
    free_debug_event((_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * (*(_DWORD *)(a1 + 72) / 0x5Du))
                              + 44 * (*(_DWORD *)(a1 + 72) % 0x5Du)));
    --*(_DWORD *)(a1 + 76);
    v4 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v4;
    if ( v4 >= 0xBA )
    {
      operator delete(**(void ***)(a1 + 60));
      *(_DWORD *)(a1 + 60) += 4;
      *(_DWORD *)(a1 + 72) -= 93;
    }
  }
  while ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 0 );
  result = 1;
  *v11 = 1;
  if ( !*(_DWORD *)(a1 + 188) )
    *(_BYTE *)(a1 + 1021) = 0;
  if ( *(_DWORD *)(a1 + 76) )
    return 2;
  return result;
}
// 10: using guessed type __int16 word_10;
// E0550: using guessed type char under_debugger;
