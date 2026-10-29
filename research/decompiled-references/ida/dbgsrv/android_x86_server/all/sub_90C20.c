/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90C20
// Address: 0x00090C20

//----- (00090C20) --------------------------------------------------------
unsigned int __cdecl sub_90C20(_DWORD *a1, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int v5; // edx
  bool v6; // cf
  unsigned int v7; // edx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  _DWORD *v11; // edi
  char *v12; // eax
  char *v13; // esi
  _BYTE *v14; // eax
  size_t v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // eax
  _BYTE *v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // eax
  _BYTE src[5]; // [esp+Eh] [ebp-1Eh] BYREF
  _BYTE v25[5]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v26[5]; // [esp+18h] [ebp-14h] BYREF

  v26[0] = __readgsdword(0x14u);
  v2 = pack_dd(src, (unsigned int)v25, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
  sub_3A950(a1, src, v2 - src);
  v3 = pack_dd(src, (unsigned int)v25, *(_DWORD *)a2);
  sub_3A950(a1, src, v3 - src);
  v4 = pack_dd(src, (unsigned int)v25, *(_DWORD *)(a2 + 4));
  sub_3A950(a1, src, v4 - src);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = __CFADD__(v5, 1);
  v7 = v5 + 1;
  v8 = v6;
  if ( *(_DWORD *)(a2 + 8) == -1 )
  {
    v8 = 0;
    v7 = 0;
  }
  v9 = pack_dq(src, (unsigned int)v26, v7, v8);
  sub_3A950(a1, src, v9 - src);
  v10 = pack_dd(src, (unsigned int)v25, *(unsigned __int8 *)(a2 + 12));
  sub_3A950(a1, src, v10 - src);
  switch ( *(_DWORD *)(a2 + 16) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      sub_905F0(a1, a2 + 20);
      return __readgsdword(0x14u);
    case 2:
    case 4:
      v11 = a1;
      v13 = src;
      v14 = pack_dd(src, (unsigned int)v25, *(_DWORD *)(a2 + 20));
      goto LABEL_18;
    case 3:
    case 9:
    case 0xA:
      v11 = a1;
      if ( *(_DWORD *)(a2 + 24) )
        v12 = *(char **)(a2 + 20);
      else
        v12 = byte_EF875;
      v13 = &byte_DCEE2;
      if ( v12 )
        v13 = v12;
      v15 = strlen(v13) + 1;
      goto LABEL_19;
    case 5:
      v16 = *(_DWORD *)(a2 + 20);
      v17 = v16 + 1;
      v18 = __CFADD__(v16, 1);
      if ( v16 == -1 )
      {
        v18 = 0;
        v17 = 0;
      }
      v11 = a1;
      v13 = src;
      v19 = pack_dq(src, (unsigned int)v26, v17, v18);
      sub_3A950(a1, src, v19 - src);
      v20 = *(_DWORD *)(a2 + 24);
      v6 = __CFADD__(v20, 1);
      v21 = v20 + 1;
      v22 = v6;
      if ( *(_DWORD *)(a2 + 24) == -1 )
      {
        v22 = 0;
        v21 = 0;
      }
      v14 = pack_dq(src, (unsigned int)v26, v21, v22);
LABEL_18:
      v15 = v14 - src;
LABEL_19:
      sub_3A950(v11, v13, v15);
      break;
    case 7:
      sub_90810(a1, a2 + 20);
      break;
    default:
      return __readgsdword(0x14u);
  }
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
