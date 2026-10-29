unsigned __int64 __fastcall sub_81BF20(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int16 a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  int v9; // r15d
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  int v18; // edx
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  unsigned __int8 v24; // al
  __int64 v26; // rax
  __int64 v27; // [rsp+10h] [rbp-48h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int16 v29; // [rsp+18h] [rbp-40h]
  __int16 v30; // [rsp+18h] [rbp-40h]
  int v31; // [rsp+1Ch] [rbp-3Ch]

  v14 = a8;
  LOBYTE(v9) = HIDWORD(a9) != 0;
  v15 = 8LL * (unsigned __int8)v9 + 24;
  v16 = a1[274];
  a1[284] += v15;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v15 + v17 && v16 )
  {
    a1[274] = v15 + v17;
  }
  else
  {
    v30 = a5;
    v28 = a4;
    v26 = sub_804090((__int64)(a1 + 274), v15, 3);
    v14 = a8;
    a5 = v30;
    a4 = v28;
    v17 = v26;
  }
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 4;
  if ( byte_4AD234C )
  {
    v31 = v14;
    v29 = a5;
    v27 = a4;
    sub_AC4570(4);
    v14 = v31;
    a5 = v29;
    a4 = v27;
  }
  v18 = *(_DWORD *)v17;
  v19 = (a5 << 9) & 0x600;
  v20 = (a3 << 19) & 0xF80000;
  v21 = (unsigned int)(v14 << 24);
  *(_QWORD *)(v17 + 8) = a4;
  *(_DWORD *)(v17 + 4) = a7;
  v22 = v9 << 25;
  v23 = v18 & 0xFC0001FF;
  *(_QWORD *)(v17 + 16) = a2;
  *(_DWORD *)v17 = v23 | v22 & 0x3FFFE00 | v21 & 0x3FFFE00 | v20 & 0x3FFFE00 | v19 & 0x3FFFE00 | (a6 << 11) & 0x3800;
  if ( v23 & 0x2000000 | v22 & 0x2000000 | v21 & 0x2000000 | v20 & 0x2000000 | (unsigned int)v19 & 0x2000000 )
    *(_QWORD *)(v17 + 24) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(HIDWORD(a9))).m128i_u64[0];
  v24 = sub_76ACF0(v17, (__int64)a1, v23, v21, v19, a6);
  *(_BYTE *)(v17 + 1) = (v24 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v24 >> 2) & 7;
  return v17;
}

