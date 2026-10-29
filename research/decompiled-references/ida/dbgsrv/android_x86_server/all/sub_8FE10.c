/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FE10
// Address: 0x0008FE10

//----- (0008FE10) --------------------------------------------------------
unsigned int __cdecl sub_8FE10(_DWORD *a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  int v6; // edx
  bool v7; // cf
  unsigned int v8; // edx
  unsigned int v9; // eax
  _BYTE *v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  char *v16; // edi
  char *v17; // esi
  size_t v18; // eax
  char *v19; // ecx
  size_t v20; // eax
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  char v23; // [esp+13h] [ebp-19h] BYREF
  _DWORD v24[5]; // [esp+18h] [ebp-14h] BYREF

  v24[0] = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a2 + 32);
  v3 = v2 + 1;
  v4 = __CFADD__(v2, 1);
  if ( v2 == -1 )
  {
    v4 = 0;
    v3 = 0;
  }
  v5 = pack_dq(src, (unsigned int)v24, v3, v4);
  sub_3A950(a1, src, v5 - src);
  v6 = *(_DWORD *)a2 - 16 * *(_DWORD *)(a2 + 32);
  v7 = __CFADD__(v6, 1);
  v8 = v6 + 1;
  v9 = v7;
  if ( *(_DWORD *)a2 - 16 * *(_DWORD *)(a2 + 32) == -1 )
  {
    v9 = 0;
    v8 = 0;
  }
  v10 = pack_dq(src, (unsigned int)v24, v8, v9);
  sub_3A950(a1, src, v10 - src);
  v11 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  v7 = __CFADD__(v11, 1);
  v12 = v11 + 1;
  v13 = v7;
  if ( *(_DWORD *)(a2 + 4) - *(_DWORD *)a2 == -1 )
  {
    v13 = 0;
    v12 = 0;
  }
  v14 = pack_dq(src, (unsigned int)v24, v12, v13);
  sub_3A950(a1, src, v14 - src);
  v15 = pack_dd(src, (unsigned int)&v23, *(unsigned __int8 *)(a2 + 37) | (16 * *(unsigned __int8 *)(a2 + 36)));
  sub_3A950(a1, src, v15 - src);
  v16 = byte_EF875;
  if ( *(_DWORD *)(a2 + 12) )
    v16 = *(char **)(a2 + 8);
  v17 = &byte_DCEE2;
  if ( !v16 )
    v16 = &byte_DCEE2;
  v18 = strlen(v16);
  sub_3A950(a1, v16, v18 + 1);
  v19 = byte_EF875;
  if ( *(_DWORD *)(a2 + 24) )
    v19 = *(char **)(a2 + 20);
  if ( v19 )
    v17 = v19;
  v20 = strlen(v17);
  sub_3A950(a1, v17, v20 + 1);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
