/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23A30
// Address: 0x00023A30

//----- (00023A30) --------------------------------------------------------
int __cdecl sub_23A30(int a1, int a2, int a3)
{
  unsigned int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edx
  unsigned int v7; // ecx
  int v8; // eax
  _DWORD v10[3]; // [esp+18h] [ebp-44h] BYREF
  char v11; // [esp+24h] [ebp-38h]
  int v12; // [esp+28h] [ebp-34h]
  int v13; // [esp+2Ch] [ebp-30h]
  int v14; // [esp+30h] [ebp-2Ch]
  int v15; // [esp+34h] [ebp-28h]
  int v16; // [esp+38h] [ebp-24h]
  int v17; // [esp+3Ch] [ebp-20h]
  int v18; // [esp+40h] [ebp-1Ch]
  unsigned int v19; // [esp+48h] [ebp-14h]

  v19 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 678) && !*(_BYTE *)(a1 + 633) )
  {
    if ( !(_BYTE)under_debugger )
      interr(30059);
    BUG();
  }
  do
  {
    while ( !*(_DWORD *)(a1 + 76) )
    {
      v10[0] = -1;
      v10[1] = 0;
      v10[2] = -1;
      v11 = 0;
      v13 = 0;
      v12 = 0;
      v15 = 0;
      v14 = 0;
      v17 = 0;
      v16 = 0;
      v18 = 0;
      if ( !sub_22E10(a1, (int)v10, a3) )
      {
        free_debug_event(v10);
        return 0;
      }
      if ( (v12 & 0xFFFFFFF) != 0 )
      {
        v4 = *(_DWORD *)(a1 + 60);
        v5 = *(_DWORD *)(a1 + 64);
        v6 = 93 * ((v5 - v4) >> 2) - 1;
        if ( v5 == v4 )
          v6 = *(_DWORD *)(a1 + 64) - v4;
        v7 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
        if ( v6 == v7 )
        {
          sub_2C600((_DWORD *)(a1 + 56));
          v4 = *(_DWORD *)(a1 + 60);
          v5 = *(_DWORD *)(a1 + 64);
          v7 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
        }
        if ( v5 == v4 )
          v8 = 0;
        else
          v8 = *(_DWORD *)(v4 + 4 * (v7 / 0x5D)) + 44 * (v7 % 0x5D);
        *(_DWORD *)v8 = -1;
        *(_DWORD *)(v8 + 4) = 0;
        *(_DWORD *)(v8 + 8) = -1;
        *(_BYTE *)(v8 + 12) = 0;
        *(_DWORD *)(v8 + 16) = 0;
        copy_debug_event(v8, v10);
        ++*(_DWORD *)(a1 + 76);
        *(_BYTE *)(a1 + 676) = 0;
      }
      free_debug_event(v10);
    }
    copy_debug_event(
      a2,
      (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * (*(_DWORD *)(a1 + 72) / 0x5Du))
               + 44 * (*(_DWORD *)(a1 + 72) % 0x5Du)));
    free_debug_event((_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * (*(_DWORD *)(a1 + 72) / 0x5Du))
                              + 44 * (*(_DWORD *)(a1 + 72) % 0x5Du)));
    --*(_DWORD *)(a1 + 76);
    v3 = *(_DWORD *)(a1 + 72) + 1;
    *(_DWORD *)(a1 + 72) = v3;
    if ( v3 >= 0xBA )
    {
      operator delete(**(void ***)(a1 + 60));
      *(_DWORD *)(a1 + 60) += 4;
      *(_DWORD *)(a1 + 72) -= 93;
    }
  }
  while ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 0 );
  *(_BYTE *)(a1 + 678) = 1;
  if ( !*(_DWORD *)(a1 + 188) )
    *(_BYTE *)(a1 + 677) = 0;
  return ((*(unsigned int *)(a1 + 76) | 0x200000000uLL) - 1) >> 32;
}
// 13E34C: using guessed type int under_debugger;
