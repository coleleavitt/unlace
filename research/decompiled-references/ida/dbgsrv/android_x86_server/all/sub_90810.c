/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90810
// Address: 0x00090810

//----- (00090810) --------------------------------------------------------
unsigned int __cdecl sub_90810(_DWORD *a1, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _BYTE *v7; // eax
  char *v8; // eax
  char *v9; // esi
  size_t v10; // eax
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  _BYTE v13[5]; // [esp+13h] [ebp-19h] BYREF
  unsigned int v14[5]; // [esp+18h] [ebp-14h] BYREF

  v14[0] = __readgsdword(0x14u);
  v2 = pack_dd(src, (unsigned int)v13, *(_DWORD *)a2);
  sub_3A950(a1, src, v2 - src);
  v3 = pack_dd(src, (unsigned int)v13, *(unsigned __int8 *)(a2 + 4));
  sub_3A950(a1, src, v3 - src);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = v4 + 1;
  v6 = __CFADD__(v4, 1);
  if ( v4 == -1 )
  {
    v6 = 0;
    v5 = 0;
  }
  v7 = pack_dq(src, (unsigned int)v14, v5, v6);
  sub_3A950(a1, src, v7 - src);
  if ( *(_DWORD *)(a2 + 16) )
    v8 = *(char **)(a2 + 12);
  else
    v8 = byte_EF875;
  v9 = &byte_DCEE2;
  if ( v8 )
    v9 = v8;
  v10 = strlen(v9);
  sub_3A950(a1, v9, v10 + 1);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
