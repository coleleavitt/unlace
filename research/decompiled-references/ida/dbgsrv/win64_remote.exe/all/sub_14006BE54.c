/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006BE54
// Address: 0x000000014006BE54

//----- (000000014006BE54) ----------------------------------------------------
_OWORD *__fastcall sub_14006BE54(_OWORD *a1, __int64 a2, int a3)
{
  __int128 v5; // xmm6
  int v7; // esi
  int v8; // r15d
  int v9; // r10d
  _BYTE *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // r11
  int v21; // eax
  int v22; // eax
  __int128 v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+30h] [rbp-48h]
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&v24 = a2;
  *(_QWORD *)&v25 = a2;
  DWORD2(v24) = 0;
  v5 = v24;
  v26 = v24;
  v7 = 0;
  sub_14006C0F4(a2, (__int64)&v26);
  v8 = *(_DWORD *)a2;
  v9 = 0;
  if ( *(_DWORD *)a2 )
  {
    v10 = *(_BYTE **)(a2 + 8);
    do
    {
      v11 = *(_QWORD *)(a2 + 24);
      if ( a3 >= (int)v11 && a3 <= SHIDWORD(v11) )
      {
        v7 = v9;
        DWORD2(v24) = 0;
        v5 = v24;
      }
      v12 = *v10 & 0xF;
      ++v9;
      v13 = *((char *)qword_1400AE700 + v12);
      LOBYTE(v12) = *((_BYTE *)&qword_1400AE700[2] + v12);
      v14 = *(_DWORD *)&v10[-v13 - 4];
      *(_QWORD *)(a2 + 8) = &v10[-v13];
      *(_DWORD *)(a2 + 24) = v14 >> v12;
      v15 = v10[-v13] & 0xF;
      v16 = *((char *)qword_1400AE700 + v15);
      v17 = &v10[-v16 - v13];
      v18 = *((_DWORD *)v17 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v15);
      *(_QWORD *)(a2 + 8) = v17;
      *(_DWORD *)(a2 + 28) = v18;
      v19 = *v17 & 0xF;
      v20 = &v10[-*((char *)qword_1400AE700 + v19) - v16 - v13];
      v21 = *(v20 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v19);
      *(_QWORD *)(a2 + 8) = v20;
      *(_DWORD *)(a2 + 32) = v21;
      v22 = *v20;
      v10 = v20 + 1;
      *(_QWORD *)(a2 + 8) = v10;
      *(_DWORD *)(a2 + 36) = v22;
    }
    while ( v9 != v8 );
  }
  v26 = v5;
  DWORD2(v25) = v7 + 1;
  sub_14006C0F4(a2, (__int64)&v26);
  *a1 = v5;
  a1[1] = v25;
  return a1;
}
// 14006BEDA: conditional instruction was optimized away because edi.4==0
// 14006BE8F: variable 'v24' is possibly undefined
// 14006BFC1: variable 'v25' is possibly undefined
// 1400AE700: using guessed type __int64 qword_1400AE700[4];
