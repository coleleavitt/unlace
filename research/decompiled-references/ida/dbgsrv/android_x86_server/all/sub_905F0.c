/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_905F0
// Address: 0x000905F0

//----- (000905F0) --------------------------------------------------------
unsigned int __cdecl sub_905F0(_DWORD *a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  size_t v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _BYTE *v8; // eax
  int v9; // edx
  bool v10; // cf
  unsigned int v11; // edx
  unsigned int v12; // eax
  _BYTE *v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  _BYTE *v17; // eax
  _BYTE src[10]; // [esp+Eh] [ebp-1Eh] BYREF
  _DWORD v20[5]; // [esp+18h] [ebp-14h] BYREF

  v20[0] = __readgsdword(0x14u);
  if ( *(_DWORD *)(a2 + 4) )
    v2 = *(char **)a2;
  else
    v2 = byte_EF875;
  v3 = &byte_DCEE2;
  if ( v2 )
    v3 = v2;
  v4 = strlen(v3);
  sub_3A950(a1, v3, v4 + 1);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = v5 + 1;
  v7 = __CFADD__(v5, 1);
  if ( v5 == -1 )
  {
    v7 = 0;
    v6 = 0;
  }
  v8 = pack_dq(src, (unsigned int)v20, v6, v7);
  sub_3A950(a1, src, v8 - src);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = __CFADD__(v9, 1);
  v11 = v9 + 1;
  v12 = v10;
  if ( *(_DWORD *)(a2 + 16) == -1 )
  {
    v12 = 0;
    v11 = 0;
  }
  v13 = pack_dq(src, (unsigned int)v20, v11, v12);
  sub_3A950(a1, src, v13 - src);
  v14 = *(_DWORD *)(a2 + 20);
  v10 = __CFADD__(v14, 1);
  v15 = v14 + 1;
  v16 = v10;
  if ( *(_DWORD *)(a2 + 20) == -1 )
  {
    v16 = 0;
    v15 = 0;
  }
  v17 = pack_dq(src, (unsigned int)v20, v15, v16);
  sub_3A950(a1, src, v17 - src);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
