/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91AA0
// Address: 0x00091AA0

//----- (00091AA0) --------------------------------------------------------
unsigned int __cdecl sub_91AA0(_DWORD *a1, int *a2, int a3, int *a4)
{
  unsigned int v4; // edi
  _BYTE *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  unsigned int v10; // edi
  _BYTE *v11; // eax
  void *v13; // [esp+8h] [ebp-24h]
  void *v14; // [esp+8h] [ebp-24h]
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  _BYTE v16[5]; // [esp+13h] [ebp-19h] BYREF
  unsigned int v17[5]; // [esp+18h] [ebp-14h] BYREF

  v17[0] = __readgsdword(0x14u);
  sub_91950(a1, a2, 1);
  v13 = *(void **)a3;
  v4 = *(_DWORD *)(a3 + 4);
  v5 = pack_dd(src, (unsigned int)v16, v4);
  sub_3A950(a1, src, v5 - src);
  sub_3A950(a1, v13, v4);
  v6 = *(_DWORD *)(a3 + 12);
  v7 = v6 + 1;
  v8 = __CFADD__(v6, 1);
  if ( v6 == -1 )
  {
    v8 = 0;
    v7 = 0;
  }
  v9 = pack_dq(src, (unsigned int)v17, v7, v8);
  sub_3A950(a1, src, v9 - src);
  v14 = *(void **)(a3 + 16);
  v10 = *(_DWORD *)(a3 + 20);
  v11 = pack_dd(src, (unsigned int)v16, v10);
  sub_3A950(a1, src, v11 - src);
  sub_3A950(a1, v14, v10);
  if ( a4 )
    sub_91950(a1, a4, 0);
  return __readgsdword(0x14u);
}
