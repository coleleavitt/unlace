/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90360
// Address: 0x00090360

//----- (00090360) --------------------------------------------------------
unsigned int __cdecl sub_90360(_DWORD *a1, int *a2)
{
  unsigned int v2; // edi
  _BYTE *v3; // eax
  int v4; // edi
  int v5; // esi
  _BYTE *v6; // eax
  int v7; // eax
  bool v8; // zf
  char *v9; // esi
  size_t v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-20h]
  _BYTE src[5]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v14[5]; // [esp+18h] [ebp-14h] BYREF

  v14[0] = __readgsdword(0x14u);
  v2 = a2[1];
  v3 = pack_dd(src, (unsigned int)v14, v2);
  sub_3A950(a1, src, v3 - src);
  v12 = v2;
  if ( v2 )
  {
    v4 = 8;
    do
    {
      v5 = *a2;
      v6 = pack_dd(src, (unsigned int)v14, *(_DWORD *)(*a2 + v4 - 8));
      sub_3A950(a1, src, v6 - src);
      v7 = v5;
      v8 = *(_DWORD *)(v5 + v4) == 0;
      v9 = byte_EF875;
      if ( !v8 )
        v9 = *(char **)(v7 + v4 - 4);
      if ( !v9 )
        v9 = &byte_DCEE2;
      v10 = strlen(v9);
      sub_3A950(a1, v9, v10 + 1);
      v4 += 16;
      --v12;
    }
    while ( v12 );
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
