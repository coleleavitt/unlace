/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90180
// Address: 0x00090180

//----- (00090180) --------------------------------------------------------
unsigned int __cdecl sub_90180(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  _BYTE *v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _BYTE *v8; // eax
  char *v9; // eax
  char *v10; // esi
  size_t v11; // eax
  _BYTE src[10]; // [esp+Eh] [ebp-1Eh] BYREF
  _DWORD v14[5]; // [esp+18h] [ebp-14h] BYREF

  v14[0] = __readgsdword(0x14u);
  v2 = *a2 + 1;
  v3 = __CFADD__(*a2, 1);
  if ( *a2 == -1 )
  {
    v3 = 0;
    v2 = 0;
  }
  v4 = pack_dq(src, (unsigned int)v14, v2, v3);
  sub_3A950(a1, src, v4 - src);
  v5 = a2[1];
  v6 = v5 + 1;
  v7 = __CFADD__(v5, 1);
  if ( v5 == -1 )
  {
    v7 = 0;
    v6 = 0;
  }
  v8 = pack_dq(src, (unsigned int)v14, v6, v7);
  sub_3A950(a1, src, v8 - src);
  if ( a2[3] )
    v9 = (char *)a2[2];
  else
    v9 = byte_EF875;
  v10 = &byte_DCEE2;
  if ( v9 )
    v10 = v9;
  v11 = strlen(v10);
  sub_3A950(a1, v10, v11 + 1);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
