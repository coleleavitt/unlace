/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62A88
// Address: 0x00062A88

//----- (00062A88) --------------------------------------------------------
int __fastcall sub_62A88(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r1
  _BYTE *v8; // r0
  _BYTE *v9; // r0
  _BYTE *v10; // r0
  unsigned int v11; // r0
  _BYTE *v12; // r0
  _BYTE *v13; // r0
  _BYTE *v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r4
  unsigned int *v18; // r6
  _BYTE *v19; // r0
  _BYTE *v20; // r0
  _BYTE *v21; // r0
  const char *v22; // r4
  size_t v23; // r0
  int v26; // [sp+20h] [bp-20h]
  int v27; // [sp+24h] [bp-1Ch]
  int v28; // [sp+28h] [bp-18h]
  int v29; // [sp+2Ch] [bp-14h]
  _BYTE v30[3]; // [sp+30h] [bp-10h] BYREF
  char v31; // [sp+33h] [bp-Dh] BYREF
  _BYTE v32[5]; // [sp+35h] [bp-Bh] BYREF
  _BYTE v33[2]; // [sp+3Ah] [bp-6h] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_BYTE **)a2;
  }
  else
  {
    v8 = qvector_reserve(a2, *(void **)a2, v7 + 1, 1u);
    *(_DWORD *)a2 = v8;
    v7 = *(_DWORD *)(a2 + 4);
  }
  v8[v7] = 1;
  ++*(_DWORD *)(a2 + 4);
  v9 = pack_dd(v30, (unsigned int)v32, *(unsigned __int8 *)(a4 + 96));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v30, v9 - v30);
  v10 = pack_dd(v30, (unsigned int)v32, *(unsigned __int8 *)(a4 + 97));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v30, v10 - v30);
  v11 = sub_5A0D0(a5);
  v12 = pack_dq(v30, (unsigned int)v33, v11, 0);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v30, v12 - v30);
  v13 = pack_dd(v30, (unsigned int)v32, *(_DWORD *)(a5 + 12));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v30, v13 - v30);
  v14 = pack_dd(v30, (unsigned int)v32, a6[1]);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a2, v30, v14 - v30);
  v15 = a6[1];
  if ( v15 >= 1 )
  {
    v16 = 0;
    v29 = a2;
    do
    {
      v28 = v15;
      v27 = v16;
      v17 = *(_DWORD *)(*a6 + v16);
      v26 = *(_DWORD *)(a4 + 52);
      v18 = (unsigned int *)(v26 + 104 * v17);
      v19 = pack_dq(v30, (unsigned int)v33, *v18, v18[1]);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v29, v30, v19 - v30);
      v20 = pack_dq(v30, (unsigned int)v33, v18[2], 0);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v29, v30, v20 - v30);
      v21 = pack_dw(v30, (unsigned int)&v31, (unsigned __int16)v17);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v29, v30, v21 - v30);
      if ( v18[4] )
        v22 = *(const char **)(v26 + 104 * v17 + 12);
      else
        v22 = &byte_B3CBE;
      if ( !v22 )
        v22 = &byte_A0742;
      v23 = strlen(v22);
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(v29, v22, v23 + 1);
      v16 = v27 + 4;
      v15 = v28 - 1;
    }
    while ( v28 != 1 );
  }
  return 0;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
