/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449950
// Address: 0x00449950

//----- (00449950) --------------------------------------------------------
unsigned int __cdecl sub_449950(int a1, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int result; // eax
  unsigned int v11; // ecx
  int v12; // eax
  _BYTE *v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  _BYTE *v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  _BYTE *v23; // eax
  _BYTE *v24; // eax
  _BYTE *v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  _BYTE *v28; // eax
  int v29; // eax
  _BYTE v30[5]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v31[5]; // [esp+Dh] [ebp-Bh] BYREF
  _BYTE v32[2]; // [esp+12h] [ebp-6h] BYREF

  v2 = sub_4540B0(v30, (unsigned int)v31, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
  sub_401600(a1, (unsigned int)v30, v2 - v30);
  v3 = sub_4540B0(v30, (unsigned int)v31, *(_DWORD *)a2);
  sub_401600(a1, (unsigned int)v30, v3 - v30);
  v4 = sub_4540B0(v30, (unsigned int)v31, *(_DWORD *)(a2 + 4));
  sub_401600(a1, (unsigned int)v30, v4 - v30);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  if ( v5 == -1 )
    v6 = -1;
  v7 = sub_454140(v30, (unsigned int)v32, v5 + 1, (__PAIR64__(v6, v5) + 1) >> 32);
  sub_401600(a1, (unsigned int)v30, v7 - v30);
  v8 = sub_4540B0(v30, (unsigned int)v31, *(unsigned __int8 *)(a2 + 12));
  sub_401600(a1, (unsigned int)v30, v8 - v30);
  v9 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
  result = v9 - 1;
  switch ( v9 )
  {
    case 1:
    case 8:
    case 11:
      if ( v9 != 1 && v9 != 11 && v9 != 8 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3295);
      }
      sub_406150(a1, a2 + 20);
      v11 = *(_DWORD *)(a2 + 32);
      v12 = 0;
      if ( v11 == -1 )
        v12 = -1;
      v13 = sub_454140(v30, (unsigned int)v32, v11 + 1, (__PAIR64__(v12, v11) + 1) >> 32);
      sub_401600(a1, (unsigned int)v30, v13 - v30);
      v14 = *(_DWORD *)(a2 + 36);
      v15 = 0;
      if ( v14 == -1 )
        v15 = -1;
      v16 = sub_454140(v30, (unsigned int)v32, v14 + 1, (__PAIR64__(v15, v14) + 1) >> 32);
      sub_401600(a1, (unsigned int)v30, v16 - v30);
      v17 = *(_DWORD *)(a2 + 40);
      goto LABEL_12;
    case 2:
    case 4:
      if ( v9 != 2 && v9 != 4 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3296);
      }
      v20 = sub_4540B0(v30, (unsigned int)v31, *(_DWORD *)(a2 + 20));
      return sub_401600(a1, (unsigned int)v30, v20 - v30);
    case 3:
    case 9:
    case 10:
      if ( v9 != 3 && v9 != 9 && v9 != 10 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(3297);
      }
      v29 = a2 + 20;
      goto LABEL_28;
    case 5:
      v21 = *(_DWORD *)(a2 + 20);
      v22 = 0;
      if ( v21 == -1 )
        v22 = -1;
      v23 = sub_454140(v30, (unsigned int)v32, v21 + 1, (__PAIR64__(v22, v21) + 1) >> 32);
      sub_401600(a1, (unsigned int)v30, v23 - v30);
      v17 = *(_DWORD *)(a2 + 24);
LABEL_12:
      v18 = 0;
      if ( v17 == -1 )
        v18 = -1;
      v19 = sub_454140(v30, (unsigned int)v32, v17 + 1, (__PAIR64__(v18, v17) + 1) >> 32);
      return sub_401600(a1, (unsigned int)v30, v19 - v30);
    case 7:
      v24 = sub_4540B0(v30, (unsigned int)v31, *(_DWORD *)(a2 + 20));
      sub_401600(a1, (unsigned int)v30, v24 - v30);
      v25 = sub_4540B0(v30, (unsigned int)v31, *(unsigned __int8 *)(a2 + 24));
      sub_401600(a1, (unsigned int)v30, v25 - v30);
      v26 = *(_DWORD *)(a2 + 28);
      v27 = 0;
      if ( v26 == -1 )
        v27 = -1;
      v28 = sub_454140(v30, (unsigned int)v32, v26 + 1, (__PAIR64__(v27, v26) + 1) >> 32);
      sub_401600(a1, (unsigned int)v30, v28 - v30);
      v29 = a2 + 32;
LABEL_28:
      result = sub_406150(a1, v29);
      break;
    default:
      return result;
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
