/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86B50
// Address: 0x00086B50

//----- (00086B50) --------------------------------------------------------
int __cdecl sub_86B50(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi
  int v7; // ecx
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  unsigned int v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  int v15; // ecx
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  char *v19; // eax
  const char *v20; // esi
  size_t v21; // eax
  char *v23; // [esp-Ch] [ebp-48h]
  int v24; // [esp+Ch] [ebp-30h]
  int v25; // [esp+10h] [ebp-2Ch]
  int v26; // [esp+14h] [ebp-28h]
  int v27; // [esp+18h] [ebp-24h]
  _BYTE src[3]; // [esp+1Eh] [ebp-1Eh] BYREF
  _BYTE v29[7]; // [esp+21h] [ebp-1Bh] BYREF
  _DWORD v30[5]; // [esp+28h] [ebp-14h] BYREF

  v6 = (_DWORD *)a2;
  v30[0] = __readgsdword(0x14u);
  v7 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_BYTE **)a2;
  }
  else
  {
    v8 = qvector_reserve(a2, *(void **)a2, v7 + 1, 1u);
    *(_DWORD *)a2 = v8;
    v7 = *(_DWORD *)(a2 + 4);
  }
  v8[v7] = 1;
  ++*(_DWORD *)(a2 + 4);
  v9 = pack_dd(src, (unsigned int)&v29[2], *(unsigned __int8 *)(a4 + 92));
  sub_3A950((_DWORD *)a2, src, v9 - src);
  v10 = pack_dd(src, (unsigned int)&v29[2], *(unsigned __int8 *)(a4 + 93));
  sub_3A950((_DWORD *)a2, src, v10 - src);
  v11 = sub_7AFE0(a5);
  v12 = pack_dq(src, (unsigned int)v30, v11, 0);
  sub_3A950((_DWORD *)a2, src, v12 - src);
  v13 = pack_dd(src, (unsigned int)&v29[2], *(_DWORD *)(a5 + 12));
  sub_3A950((_DWORD *)a2, src, v13 - src);
  v14 = pack_dd(src, (unsigned int)&v29[2], a6[1]);
  sub_3A950((_DWORD *)a2, src, v14 - src);
  v25 = a6[1];
  if ( v25 > 0 )
  {
    v15 = 0;
    do
    {
      v27 = v15;
      v26 = *(_DWORD *)(*a6 + 4 * v15);
      v24 = *(_DWORD *)(a4 + 52);
      v16 = pack_dq(src, (unsigned int)v30, *(_DWORD *)(v24 + 100 * v26), *(_DWORD *)(v24 + 100 * v26 + 4));
      sub_3A950(v6, src, v16 - src);
      v17 = pack_dq(src, (unsigned int)v30, *(_DWORD *)(v24 + 100 * v26 + 8), 0);
      sub_3A950(v6, src, v17 - src);
      v18 = pack_dw(src, (unsigned int)v29, v26);
      sub_3A950(v6, src, v18 - src);
      if ( *(_DWORD *)(v24 + 100 * v26 + 16) )
        v19 = *(char **)(v24 + 100 * v26 + 12);
      else
        v19 = byte_EF875;
      v20 = &byte_DCEE2;
      if ( v19 )
        v20 = v19;
      v21 = strlen(v20);
      v23 = (char *)v20;
      v6 = (_DWORD *)a2;
      sub_3A950((_DWORD *)a2, v23, v21 + 1);
      v15 = v27 + 1;
    }
    while ( v25 != v27 + 1 );
  }
  return 0;
}
// DCEE2: using guessed type char byte_DCEE2;
