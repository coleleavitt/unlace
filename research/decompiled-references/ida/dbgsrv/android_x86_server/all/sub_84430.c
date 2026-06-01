/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84430
// Address: 0x00084430

//----- (00084430) --------------------------------------------------------
unsigned int __cdecl sub_84430(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edi
  char *v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // eax
  char *v8; // edi
  size_t v9; // eax
  void *v10; // esi
  unsigned int v11; // edi
  _BYTE *v12; // eax
  int v13; // eax
  _DWORD *v15; // [esp+4h] [ebp-38h]
  int v16; // [esp+10h] [ebp-2Ch] BYREF
  int v17; // [esp+14h] [ebp-28h]
  int v18; // [esp+18h] [ebp-24h]
  _BYTE src[5]; // [esp+1Eh] [ebp-1Eh] BYREF
  char v20; // [esp+23h] [ebp-19h] BYREF
  unsigned int v21[5]; // [esp+28h] [ebp-14h] BYREF

  v21[0] = __readgsdword(0x14u);
  if ( 28 * *(_DWORD *)(a2 + 4) )
  {
    v2 = *(_DWORD **)a2;
    while ( 1 )
    {
      v3 = *v2;
      v4 = byte_EF875;
      if ( v2[2] )
        v4 = (char *)v2[1];
      v15 = v2;
      sub_96B40((int)&v16, 57);
      v5 = v3 + 1;
      v6 = __CFADD__(v3, 1);
      if ( v3 == -1 )
      {
        v5 = 0;
        v6 = 0;
      }
      v7 = pack_dq(src, (unsigned int)v21, v5, v6);
      sub_3A950(&v16, src, v7 - src);
      v8 = &byte_DCEE2;
      if ( v4 )
        v8 = v4;
      v9 = strlen(v8);
      sub_3A950(&v16, v8, v9 + 1);
      v10 = (void *)v15[4];
      v11 = v15[5];
      v12 = pack_dd(src, (unsigned int)&v20, v11);
      sub_3A950(&v16, src, v12 - src);
      sub_3A950(&v16, v10, v11);
      v13 = sub_8FC90(a1 + 100, (int)&v16, -1, 0);
      if ( v13 < 0 )
        break;
      if ( v13 )
        (*(void (__cdecl **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 244) + 284))(*(_DWORD *)(a1 + 244), v15);
      if ( v16 )
      {
        v17 = 0;
        qfree((void *)v16);
        v16 = 0;
        v18 = 0;
      }
      v2 = v15 + 7;
      if ( v15 + 7 == (_DWORD *)(*(_DWORD *)a2 + 28 * *(_DWORD *)(a2 + 4)) )
        return __readgsdword(0x14u);
    }
    if ( v16 )
    {
      v17 = 0;
      qfree((void *)v16);
      v16 = 0;
      v18 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
