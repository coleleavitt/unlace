/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91370
// Address: 0x00091370

//----- (00091370) --------------------------------------------------------
unsigned int __cdecl sub_91370(_DWORD *a1, int *a2)
{
  signed int v2; // edi
  _BYTE *v3; // eax
  int v4; // esi
  int v5; // edx
  bool v6; // cf
  unsigned int v7; // edx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  _BYTE *v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  int v20; // [esp+4h] [ebp-28h]
  signed int v21; // [esp+8h] [ebp-24h]
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  _BYTE v23[5]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v24[5]; // [esp+18h] [ebp-14h] BYREF

  v24[0] = __readgsdword(0x14u);
  v2 = a2[1];
  v3 = pack_dd(src, (unsigned int)v23, v2);
  sub_3A950(a1, src, v3 - src);
  if ( v2 > 0 )
  {
    v4 = 12;
    do
    {
      v21 = v2;
      v20 = *a2;
      v5 = *(_DWORD *)(*a2 + v4 - 12);
      v6 = __CFADD__(v5, 1);
      v7 = v5 + 1;
      v8 = v6;
      if ( *(_DWORD *)(*a2 + v4 - 12) == -1 )
      {
        v8 = 0;
        v7 = 0;
      }
      v9 = pack_dq(src, (unsigned int)v24, v7, v8);
      sub_3A950(a1, src, v9 - src);
      v10 = *(_DWORD *)(v20 + v4 - 8);
      v6 = __CFADD__(v10, 1);
      v11 = v10 + 1;
      v12 = v6;
      if ( *(_DWORD *)(v20 + v4 - 8) == -1 )
      {
        v12 = 0;
        v11 = 0;
      }
      v13 = pack_dq(src, (unsigned int)v24, v11, v12);
      sub_3A950(a1, src, v13 - src);
      v14 = *(_DWORD *)(v20 + v4 - 4);
      v6 = __CFADD__(v14, 1);
      v15 = v14 + 1;
      v16 = v6;
      if ( *(_DWORD *)(v20 + v4 - 4) == -1 )
      {
        v16 = 0;
        v15 = 0;
      }
      v17 = pack_dq(src, (unsigned int)v24, v15, v16);
      sub_3A950(a1, src, v17 - src);
      v18 = pack_dd(src, (unsigned int)v23, *(unsigned __int8 *)(v20 + v4));
      sub_3A950(a1, src, v18 - src);
      v4 += 16;
      --v2;
    }
    while ( v21 != 1 );
  }
  return __readgsdword(0x14u);
}
