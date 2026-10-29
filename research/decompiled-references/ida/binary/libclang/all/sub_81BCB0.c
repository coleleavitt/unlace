unsigned __int64 __fastcall sub_81BCB0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        unsigned __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v14; // rax
  int v15; // r13d
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  int v18; // edx
  unsigned __int64 v19; // xmm0_8
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-48h]
  __int64 v25; // [rsp+0h] [rbp-48h]
  __int16 v26; // [rsp+Ch] [rbp-3Ch]
  __int16 v27; // [rsp+Ch] [rbp-3Ch]

  v14 = a1[274];
  v15 = HIDWORD(a9) != 0;
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = (unsigned int)(8 * v15 + 48);
  a1[284] += v17;
  if ( a1[275] >= v17 + v16 && v14 )
  {
    a1[274] = v17 + v16;
  }
  else
  {
    v27 = a6;
    v25 = a5;
    v23 = sub_804090((__int64)(a1 + 274), v17, 3);
    a6 = v27;
    a5 = v25;
    v16 = v23;
  }
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x78;
  if ( byte_4AD234C )
  {
    v26 = a6;
    v24 = a5;
    sub_AC4570(120);
    a6 = v26;
    a5 = v24;
  }
  v18 = *(_DWORD *)v16;
  *(_QWORD *)(v16 + 8) = a5;
  *(_DWORD *)(v16 + 4) = a8;
  *(_QWORD *)(v16 + 16) = a2;
  *(_QWORD *)(v16 + 24) = a3;
  *(_DWORD *)v16 = v18 & 0xF80001FF | (v15 << 25) | (a4 << 19) & 0x1F80000 | (a6 << 9) & 0x600 | (a7 << 11) & 0x3800;
  if ( ((v15 << 25) & 0x2000000) != 0 )
  {
    v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(HIDWORD(a9))).m128i_u64[0];
    v20 = 32;
    if ( (*(_WORD *)v16 & 0x1FF) == 0x78 )
      v20 = 48;
    *(_QWORD *)(v16 + v20) = v19;
  }
  v21 = sub_76B3C0(v16);
  *(_BYTE *)(v16 + 1) = (v21 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v21 >> 2) & 7;
  *(_QWORD *)(v16 + 32) = a10;
  *(_QWORD *)(v16 + 40) = a11;
  return v16;
}

