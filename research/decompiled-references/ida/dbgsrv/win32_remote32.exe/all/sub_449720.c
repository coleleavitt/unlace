/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449720
// Address: 0x00449720

//----- (00449720) --------------------------------------------------------
int __cdecl sub_449720(int a1, _DWORD *a2)
{
  signed int v2; // esi
  _BYTE *v3; // eax
  int result; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  _BYTE *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  _BYTE *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  signed int v16; // [esp+Ch] [ebp-34h]
  _BYTE v17[5]; // [esp+10h] [ebp-30h] BYREF
  _BYTE v18[3]; // [esp+15h] [ebp-2Bh] BYREF
  _BYTE v19[10]; // [esp+18h] [ebp-28h] BYREF
  _BYTE v20[2]; // [esp+22h] [ebp-1Eh] BYREF
  _BYTE v21[10]; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v22[2]; // [esp+2Eh] [ebp-12h] BYREF
  _BYTE v23[10]; // [esp+30h] [ebp-10h] BYREF
  _BYTE v24[2]; // [esp+3Ah] [ebp-6h] BYREF

  v2 = a2[1];
  v16 = v2;
  v3 = sub_4540B0(v17, (unsigned int)v18, v2);
  result = sub_401600(a1, (unsigned int)v17, v3 - v17);
  if ( v2 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = 0;
      v7 = v5 + *a2;
      if ( *(_DWORD *)v7 == -1 )
        v6 = -1;
      v8 = sub_454140(v19, (unsigned int)v20, *(_DWORD *)v7 + 1, (__PAIR64__(v6, *(_DWORD *)v7) + 1) >> 32);
      sub_401600(a1, (unsigned int)v19, v8 - v19);
      v9 = *(_DWORD *)(v7 + 4);
      v10 = 0;
      if ( v9 == -1 )
        v10 = -1;
      v11 = sub_454140(v21, (unsigned int)v22, v9 + 1, (__PAIR64__(v10, v9) + 1) >> 32);
      sub_401600(a1, (unsigned int)v21, v11 - v21);
      v12 = *(_DWORD *)(v7 + 8);
      v13 = 0;
      if ( v12 == -1 )
        v13 = -1;
      v14 = sub_454140(v23, (unsigned int)v24, v12 + 1, (__PAIR64__(v13, v12) + 1) >> 32);
      sub_401600(a1, (unsigned int)v23, v14 - v23);
      v15 = sub_4540B0(v17, (unsigned int)v18, *(unsigned __int8 *)(v7 + 12));
      result = sub_401600(a1, (unsigned int)v17, v15 - v17);
      v5 += 16;
      --v16;
    }
    while ( v16 );
  }
  return result;
}
