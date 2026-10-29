unsigned __int64 __fastcall sub_8C1900(
        _QWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9,
        __int64 a10,
        unsigned __int8 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        unsigned __int64 a17)
{
  int v19; // eax
  int v20; // r15d
  unsigned __int8 v21; // r9
  int v22; // r8d
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __m128i v29; // xmm0
  int v30; // edi
  __int64 v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // edx
  char v34; // dl
  char v35; // al
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  char v39; // dl
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v43; // [rsp+1Fh] [rbp-69h]
  unsigned __int8 v44; // [rsp+1Fh] [rbp-69h]
  __m128i v45; // [rsp+20h] [rbp-68h] BYREF
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+40h] [rbp-48h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v41 = a5;
  v19 = a9;
  LOBYTE(a5) = HIDWORD(a9) != 0;
  v20 = a13 != 0;
  v21 = a11;
  LOBYTE(v19) = (_DWORD)a9 != 0;
  v22 = v19 & a5;
  v23 = a1[274];
  v24 = 8 * ((unsigned __int8)v22 + (unsigned __int64)((unsigned int)a8 + a11 + v20)) + 56;
  a1[284] += v24;
  v25 = v24 + ((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v25 && v23 )
  {
    a1[274] = v25;
    v26 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v45.m128i_i64[0] = a4;
    v46 = a3;
    v44 = v22;
    v40 = sub_8C1090((__int64)(a1 + 274), v24, 3);
    a4 = v45.m128i_i64[0];
    a3 = v46;
    v22 = v44;
    v21 = a11;
    v26 = v40;
  }
  v27 = a10;
  v28 = HIDWORD(a17);
  v29 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a16), _mm_cvtsi32_si128(HIDWORD(a16))),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a17), _mm_cvtsi32_si128(HIDWORD(a17))));
  *(_WORD *)v26 = *(_WORD *)v26 & 0xFE00 | 0x6B;
  if ( byte_4AD234C )
  {
    v49 = HIDWORD(a17);
    v48 = a4;
    v47 = a3;
    LOBYTE(v46) = v22;
    v43 = v21;
    v45 = v29;
    sub_AC4570(107);
    LODWORD(v28) = HIDWORD(a17);
    a4 = v48;
    a3 = v47;
    v29 = _mm_load_si128(&v45);
    v22 = (unsigned __int8)v46;
    v21 = v43;
    v27 = a10;
  }
  *(_QWORD *)(v26 + 24) = a4;
  *(_QWORD *)(v26 + 16) = a3;
  *(_QWORD *)(v26 + 32) = a15;
  *(_QWORD *)(v26 + 8) = a14;
  *(_DWORD *)(v26 + 4) = a8;
  *(__m128i *)(v26 + 40) = v29;
  *(_DWORD *)v26 = *(_DWORD *)v26 & 0xF80001FF
                 | (v22 << 26) & 0x7FFFE00
                 | (a12 << 24) & 0x3000000
                 | ((v20 << 23) | (a6 << 22) | (v41 << 21) | (a2 << 19) | (a11 << 20)) & 0x7FFFE00;
  if ( v21 )
    *(_QWORD *)(v26 + 56) = v27;
  if ( a13 )
  {
    LODWORD(v24) = a13;
    *(_QWORD *)(v26 + 8LL * ((*(_BYTE *)(v26 + 2) & 0x10) != 0) + 56) = a13;
  }
  v30 = 0;
  v31 = 0;
  if ( a8 )
  {
    do
    {
      v32 = *(_QWORD *)(a7 + 8 * v31);
      v33 = v30 + ((*(_BYTE *)(v26 + 2) & 0x10) != 0) + ((unsigned int)*(char *)(v26 + 2) >> 31);
      v31 = (unsigned int)++v30;
      *(_QWORD *)(v26 + 8LL * v33 + 56) = v32;
    }
    while ( a8 != v30 );
  }
  if ( (_BYTE)v22 )
  {
    LODWORD(v24) = a9;
    *(_QWORD *)(v26
              + 8LL
              * (*(_DWORD *)(v26 + 4) + ((unsigned int)*(char *)(v26 + 2) >> 31) + ((*(_BYTE *)(v26 + 2) & 0x10) != 0))
              + 56) = a9;
    v34 = *(_BYTE *)(v26 + 3) & 3;
    if ( v34 != 1 )
    {
      if ( v34 != 2 )
      {
        *(_DWORD *)(v26 + 44) = _mm_cvtsi128_si32(_mm_cvtsi32_si128(HIDWORD(a9)));
        goto LABEL_19;
      }
LABEL_15:
      v35 = *(_BYTE *)(v26 + 2);
      v36 = 0;
      if ( v35 < 0 )
        v36 = *(_QWORD *)(v26 + 8LL * ((v35 & 0x10) != 0) + 56);
      v28 = (unsigned __int64)sub_AC7B80(v36) >> 32;
    }
  }
  else
  {
    v39 = *(_BYTE *)(v26 + 3) & 3;
    if ( v39 != 1 )
    {
      if ( v39 != 2 )
        goto LABEL_19;
      goto LABEL_15;
    }
  }
  *(_DWORD *)(v26 + 44) = v28;
LABEL_19:
  v37 = sub_76CA00(v26, v24);
  *(_BYTE *)(v26 + 1) = (v37 << 6) | *(_BYTE *)(v26 + 1) & 0x3F;
  *(_BYTE *)(v26 + 2) = *(_BYTE *)(v26 + 2) & 0xF8 | (v37 >> 2) & 7;
  return v26;
}

