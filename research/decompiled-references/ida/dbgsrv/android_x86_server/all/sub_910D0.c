/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_910D0
// Address: 0x000910D0

//----- (000910D0) --------------------------------------------------------
unsigned int __cdecl sub_910D0(_DWORD *a1, int a2, int a3)
{
  int v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  char *v8; // esi
  size_t v9; // eax
  const char *v10; // esi
  size_t v11; // eax
  char *v13; // [esp-Ch] [ebp-38h]
  int v14; // [esp+Ch] [ebp-20h]
  _BYTE src[5]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v16[5]; // [esp+18h] [ebp-14h] BYREF

  v3 = a3;
  v16[0] = __readgsdword(0x14u);
  if ( a3 > 0 )
  {
    v4 = a1;
    v5 = (_DWORD *)(a2 + 24);
    do
    {
      v14 = v3;
      v6 = pack_dd(src, (unsigned int)v16, *(v5 - 6));
      sub_3A950(v4, src, v6 - src);
      v7 = pack_dd(src, (unsigned int)v16, *(v5 - 5));
      sub_3A950(v4, src, v7 - src);
      v8 = byte_EF875;
      if ( *(v5 - 3) )
        v8 = (char *)*(v5 - 4);
      if ( !v8 )
        v8 = &byte_DCEE2;
      v9 = strlen(v8);
      sub_3A950(a1, v8, v9 + 1);
      v10 = byte_EF875;
      if ( *v5 )
        v10 = (const char *)*(v5 - 1);
      if ( !v10 )
        v10 = &byte_DCEE2;
      v11 = strlen(v10);
      v13 = (char *)v10;
      v4 = a1;
      sub_3A950(a1, v13, v11 + 1);
      v5 += 8;
      v3 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
