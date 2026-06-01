/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20810
// Address: 0x00020810

//----- (00020810) --------------------------------------------------------
char __cdecl sub_20810(_DWORD *a1, int a2, char *s2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  int v5; // edi
  _DWORD *v6; // esi
  unsigned int v7; // ecx
  _DWORD *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  const char *v11; // eax
  int v12; // eax
  _DWORD *v14; // [esp+14h] [ebp-38h]
  unsigned int v15; // [esp+1Ch] [ebp-30h]
  unsigned int v16; // [esp+20h] [ebp-2Ch]
  int v17; // [esp+24h] [ebp-28h]
  int v18; // [esp+28h] [ebp-24h] BYREF
  unsigned __int64 v19; // [esp+30h] [ebp-1Ch]
  unsigned int v20; // [esp+38h] [ebp-14h]

  v20 = __readgsdword(0x14u);
  v3 = a1[18];
  v4 = v3 / 0x5D;
  v5 = a1[15];
  v17 = a1[16];
  if ( v17 == v5 )
    v6 = nullptr;
  else
    v6 = (_DWORD *)(*(_DWORD *)(v5 + 4 * (v3 / 0x5D)) + 44 * (v3 % 0x5D));
  v7 = a1[19] + v3;
  v16 = v7 / 0x5D;
  v15 = 44 * (v7 % 0x5D);
  v8 = (_DWORD *)(v5 + 4 * v4);
LABEL_5:
  v14 = v8;
  while ( 1 )
  {
    if ( v17 == v5 )
    {
      if ( !v6 )
        return 0;
    }
    else if ( (_DWORD *)(v15 + *(_DWORD *)(v5 + 4 * v16)) == v6 )
    {
      return 0;
    }
    v9 = v6[4] & 0xFFFFFFF;
    if ( v9 == a2 )
    {
      if ( v9 > 0xB || (v10 = 2306, !_bittest(&v10, v9)) )
      {
        if ( !(_BYTE)under_debugger )
          interr(3295);
        BUG();
      }
      v11 = v6[6] ? (const char *)v6[5] : byte_EF875;
      v12 = strcmp(v11, s2);
      v8 = v14;
      if ( !v12 )
        break;
    }
    v6 += 11;
    if ( (unsigned __int8 *)((char *)v6 - *v8) == &stru_FF0.st_info )
    {
      v6 = (_DWORD *)v8[1];
      ++v8;
      goto LABEL_5;
    }
  }
  v19 = __PAIR64__((unsigned int)v6, (unsigned int)v14);
  sub_209A0(&v18, (int)(a1 + 14), v14, v6);
  return 1;
}
// FF0: using guessed type Elf32_Sym;
// 13E34C: using guessed type int under_debugger;
