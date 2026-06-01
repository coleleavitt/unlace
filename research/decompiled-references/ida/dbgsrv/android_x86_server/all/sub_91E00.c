/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91E00
// Address: 0x00091E00

//----- (00091E00) --------------------------------------------------------
unsigned int __cdecl sub_91E00(_DWORD *a1, unsigned int *a2)
{
  _BYTE *v2; // eax
  char *v3; // eax
  char *v4; // esi
  size_t v5; // eax
  _BYTE src[5]; // [esp+3h] [ebp-19h] BYREF
  unsigned int v8[5]; // [esp+8h] [ebp-14h] BYREF

  v8[0] = __readgsdword(0x14u);
  v2 = pack_dd(src, (unsigned int)v8, a2[1]);
  sub_3A950(a1, src, v2 - src);
  if ( a2[3] )
    v3 = (char *)a2[2];
  else
    v3 = byte_EF875;
  v4 = &byte_DCEE2;
  if ( v3 )
    v4 = v3;
  v5 = strlen(v4);
  sub_3A950(a1, v4, v5 + 1);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
