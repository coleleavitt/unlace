/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AAF0
// Address: 0x0042AAF0

//----- (0042AAF0) --------------------------------------------------------
int __stdcall sub_42AAF0(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // edi
  __int128 v5; // xmm0
  int v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  _BYTE *v9; // eax
  char v11[8]; // [esp+Ch] [ebp-3Ch] BYREF
  __int128 v12; // [esp+14h] [ebp-34h]
  char v13[8]; // [esp+24h] [ebp-24h] BYREF
  __int128 v14; // [esp+2Ch] [ebp-1Ch] BYREF
  int v15; // [esp+44h] [ebp-4h]

  v13[0] = 2;
  v14 = 0;
  LODWORD(v14) = 0;
  v1 = a1;
  v15 = 0;
  switch ( *(_WORD *)(a1 + 28) )
  {
    case 3:
    case 5:
      v2 = *(_DWORD *)(a1 + 32);
      v13[0] = 2;
      LODWORD(v14) = v2;
      break;
    case 4:
      sub_423B70((int)v13);
      v13[0] = 7;
      *(_QWORD *)&v14 = 0;
      DWORD2(v14) = 0;
      sub_42C7D0((int)&v14, a1 + 16);
      break;
    case 7:
      sub_423B70((int)v13);
      v5 = *(_OWORD *)(a1 + 40);
      v13[0] = 3;
      v14 = v5;
      break;
    case 8:
      v3 = *(_DWORD *)(a1 + 40);
      v4 = *(_DWORD *)(a1 + 44);
      sub_423B70((int)v13);
      DWORD1(v14) = v4;
      v1 = a1;
      v13[0] = 9;
      LODWORD(v14) = v3;
      break;
    default:
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1438);
  }
  v11[0] = 2;
  v6 = v1 + 224;
  v12 = 0;
  sub_423670(v11, v13);
  v7 = *(_DWORD *)(v6 + 4) + 1;
  LOBYTE(v15) = 1;
  if ( v7 > *(_DWORD *)(v6 + 8) )
    *(_DWORD *)v6 = sub_453B00(v6, *(void **)v6, v7, 0x18u);
  v8 = 3 * *(_DWORD *)(v6 + 4);
  v9 = *(_BYTE **)v6;
  v9[8 * v8] = 2;
  *(_OWORD *)&v9[8 * v8 + 8] = 0;
  sub_423670(&v9[8 * v8], v11);
  ++*(_DWORD *)(v6 + 4);
  LOBYTE(v15) = 3;
  sub_423B70((int)v11);
  v15 = 4;
  sub_423B70((int)v13);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
