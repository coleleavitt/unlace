unsigned __int64 __fastcall sub_80B2C0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int16 a6,
        unsigned int a7,
        unsigned __int64 a8,
        unsigned int a9,
        int a10)
{
  __int64 v14; // r9
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  int v17; // r11d
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // xmm0_8
  int v22; // edx
  bool v23; // al
  unsigned __int8 v24; // dl
  int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  unsigned __int64 v34; // [rsp+10h] [rbp-58h]
  unsigned __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  unsigned int v37; // [rsp+28h] [rbp-40h]
  int v38; // [rsp+2Ch] [rbp-3Ch]

  v14 = a4;
  v15 = a4;
  v16 = a9;
  v17 = a10;
  if ( a9 < v15 )
    v16 = a4;
  v18 = a1[274];
  v19 = 8 * ((HIDWORD(a8) != 0) + v16 + 1) + 24LL;
  a1[284] += v19;
  v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v19 + v20 && v18 )
  {
    a1[274] = v19 + v20;
  }
  else
  {
    LODWORD(v36) = a10;
    v35 = a5;
    v34 = a2;
    v33 = v14;
    v37 = v16;
    v31 = sub_804090((__int64)(a1 + 274), v19, 3);
    v17 = a10;
    a5 = v35;
    a2 = v34;
    v14 = v33;
    v20 = v31;
    v16 = v37;
  }
  v21 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v16), _mm_cvtsi32_si128(a7)).m128i_u64[0];
  *(_WORD *)v20 = *(_WORD *)v20 & 0xFE00 | 0x5A;
  if ( byte_4AD234C )
  {
    v38 = v17;
    v36 = a5;
    v35 = a2;
    v32 = v14;
    v37 = v16;
    v34 = v21;
    sub_AC4570(90);
    LOBYTE(v17) = v38;
    v16 = v37;
    a5 = v36;
    a2 = v35;
    v14 = v32;
  }
  v22 = *(_DWORD *)v20;
  *(_QWORD *)(v20 + 8) = a5;
  *(_QWORD *)(v20 + 24) = a2;
  *(_QWORD *)(v20 + 16) = v21;
  *(_DWORD *)v20 = v22 & 0xE001FF | ((unsigned __int8)v17 << 20) & 0xFF1FFE00 | (a6 << 9) & 0x600 | 0x18000000;
  if ( a4 )
  {
    v23 = 0;
    v24 = 24;
    v25 = 0;
    v26 = 0;
    do
    {
      *(_QWORD *)(v20 + 8LL * v23 + 8 + 8 * v26 + v24) = *(_QWORD *)(a3 + 8 * v26);
      v24 = *(_BYTE *)(v20 + 3);
      v26 = (unsigned int)++v25;
      v23 = (*(_BYTE *)(v20 + 2) & 8) != 0;
    }
    while ( a4 != v25 );
    v16 = *(_DWORD *)(v20 + 16);
    v14 = v23;
    v27 = v24;
  }
  else
  {
    v27 = 24;
    v24 = 24;
    v23 = 0;
  }
  if ( (_DWORD)a4 != v16 )
  {
    do
    {
      v28 = v15++;
      *(_QWORD *)(v20 + 8 * v28 + 8LL * v23 + 8 + v24) = 0;
      v24 = *(_BYTE *)(v20 + 3);
      v23 = (*(_BYTE *)(v20 + 2) & 8) != 0;
    }
    while ( *(_DWORD *)(v20 + 16) != v15 );
    v14 = v23;
    v27 = v24;
  }
  v29 = *(_DWORD *)v20 & 0xFF983FFF
      | ((HIDWORD(a8) != 0) << 21)
      | ((sub_76C380(v20, (_DWORD **)(v20 + v27 + 8), v14) & 0x1F) << 14);
  *(_DWORD *)v20 = v29;
  if ( (v29 & 0x200000) != 0 )
    *(_QWORD *)(v20
              + 8 * (*(_DWORD *)(v20 + 16) + (unsigned int)((v29 & 0x80000) != 0) + 1)
              + *(unsigned __int8 *)(v20 + 3)) = _mm_unpacklo_epi32(
                                                   _mm_cvtsi32_si128(a8),
                                                   _mm_cvtsi32_si128(HIDWORD(a8))).m128i_u64[0];
  return v20;
}

