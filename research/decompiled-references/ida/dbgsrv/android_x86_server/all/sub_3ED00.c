/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ED00
// Address: 0x0003ED00

//----- (0003ED00) --------------------------------------------------------
unsigned int __cdecl sub_3ED00(int a1, char **a2, __int64 a3)
{
  int v3; // edx
  unsigned int v4; // eax
  __int64 v5; // kr18_8
  __int64 v6; // kr08_8
  char v7; // al
  int v8; // eax
  __int64 v9; // kr10_8
  char v10; // al
  char v11; // al
  char v12; // al
  unsigned int v13; // eax
  int v14; // eax
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax
  char v19; // al
  unsigned __int64 v20; // kr00_8
  char v21; // al
  char v22; // al
  unsigned int v23; // eax
  char *v24; // eax
  unsigned int v26; // [esp+0h] [ebp-4Ch]
  unsigned int v27; // [esp+4h] [ebp-48h]
  unsigned int v28; // [esp+8h] [ebp-44h]
  unsigned int v29; // [esp+24h] [ebp-28h]
  unsigned int v30; // [esp+28h] [ebp-24h]
  unsigned int v31; // [esp+2Ch] [ebp-20h]
  __int64 v32; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v33; // [esp+38h] [ebp-14h]

  v33 = __readgsdword(0x14u);
  if ( !unpack_xleb128((int *)&v32, 64, 1, (char **)a1, *(_DWORD *)(a1 + 4)) )
    *(_BYTE *)(a1 + 12) = 0;
  v29 = HIDWORD(v32);
  v30 = v32;
  sub_42990(a2, a3);
  if ( *(_BYTE *)(a1 + 12) )
  {
    v3 = a1;
    v4 = 0;
    v27 = 0;
    v26 = 0;
    v5 = 0;
    while ( 1 )
    {
      v28 = v4;
      if ( !unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4)) )
        *(_BYTE *)(a1 + 12) = 0;
      v6 = v32;
      v7 = unpack_xleb128((int *)&v32, 64, 1, (char **)a1, *(_DWORD *)(a1 + 4));
      v3 = a1;
      if ( !v7 )
        *(_BYTE *)(a1 + 12) = 0;
      v8 = v32;
      *(_DWORD *)(a1 + 8) = v32;
      v9 = 0;
      if ( (v8 & 2) != 0 )
      {
        v10 = unpack_xleb128((int *)&v32, 64, 1, (char **)a1, *(_DWORD *)(a1 + 4));
        v3 = a1;
        if ( !v10 )
          *(_BYTE *)(a1 + 12) = 0;
        v9 = v32;
        v8 = *(_DWORD *)(a1 + 8);
      }
      if ( (v8 & 1) != 0 )
      {
        v11 = unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4));
        v3 = a1;
        if ( !v11 )
          *(_BYTE *)(a1 + 12) = 0;
        v5 = v32;
        v8 = *(_DWORD *)(a1 + 8);
      }
      if ( (v8 & 0xC) == 0xC )
      {
        v12 = unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4));
        v3 = a1;
        if ( !v12 )
          *(_BYTE *)(a1 + 12) = 0;
        v13 = (v32 + __PAIR64__(v26, v27)) >> 32;
        v27 += v32;
        v26 = v13;
      }
      else
      {
        v14 = v8 << 28 >> 31;
        v26 &= v14;
        v27 &= v14;
      }
      if ( v6 >= 1 )
        break;
LABEL_39:
      v4 = v28;
      if ( !*(_BYTE *)(v3 + 12) )
        return __readgsdword(0x14u);
    }
    v15 = 24 * v28 + 16;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v31 = v16;
      v18 = *(_DWORD *)(v3 + 8);
      if ( (v18 & 2) == 0 )
      {
        v19 = unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4));
        v3 = a1;
        if ( !v19 )
          *(_BYTE *)(a1 + 12) = 0;
        v18 = *(_DWORD *)(a1 + 8);
        v9 = v32;
      }
      v20 = v9 + __PAIR64__(v29, v30);
      v29 = (v9 + __PAIR64__(v29, v30)) >> 32;
      v30 = v20;
      if ( (v18 & 1) == 0 )
      {
        v21 = unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4));
        v3 = a1;
        if ( !v21 )
          *(_BYTE *)(a1 + 12) = 0;
        v18 = *(_DWORD *)(a1 + 8);
        v5 = v32;
      }
      if ( (v18 & 0xC) == 8 )
      {
        v22 = unpack_xleb128((int *)&v32, 64, 1, (char **)v3, *(_DWORD *)(v3 + 4));
        v3 = a1;
        if ( !v22 )
          *(_BYTE *)(a1 + 12) = 0;
        v23 = (v32 + __PAIR64__(v26, v27)) >> 32;
        v27 += v32;
        v26 = v23;
      }
      if ( !*(_BYTE *)(v3 + 12) )
        break;
      if ( a3 == v28 )
        return __readgsdword(0x14u);
      ++v28;
      v24 = *a2;
      *(_DWORD *)&v24[v15 - 12] = v29;
      *(_DWORD *)&v24[v15 - 16] = v20;
      *(_QWORD *)&v24[v15 - 8] = v5;
      *(_DWORD *)&v24[v15 + 4] = v26;
      *(_DWORD *)&v24[v15] = v27;
      v17 = (__PAIR64__(v17, v31) + 1) >> 32;
      v16 = v31 + 1;
      v15 += 24;
      if ( __SPAIR64__(v17, v31 + 1) >= v6 )
        goto LABEL_39;
    }
    sub_42990(a2, v28);
  }
  return __readgsdword(0x14u);
}
