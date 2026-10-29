void __fastcall sub_223AE20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _BYTE *a9,
        __int64 a10,
        _BYTE *a11,
        __int64 a12,
        _QWORD *a13,
        __int64 a14,
        const __m128i *a15,
        __int64 a16)
{
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  _QWORD *v21; // rsi
  const __m128i *v22; // r14
  __int64 v23; // rax
  __m128i *v24; // rbp
  __int64 v25; // rdx
  __m128i v26; // xmm3
  _BYTE *v27; // r15
  signed __int64 v28; // r12
  _BYTE *v29; // rax
  __m128i v30; // xmm2
  unsigned int v31; // r13d
  __int64 v32; // rbx
  __int64 v33; // rbp
  unsigned __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdi
  const __m128i *v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+8h] [rbp-60h]

  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  sub_2237890((_QWORD *)(a1 + 16), a4, (__int64)&a4[a5]);
  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_DWORD *)(a1 + 52) = a7;
  *(_DWORD *)(a1 + 56) = a8;
  *(_DWORD *)(a1 + 48) = a6;
  sub_2237890((_QWORD *)(a1 + 64), a9, (__int64)&a9[a10]);
  *(_QWORD *)(a1 + 96) = a1 + 112;
  sub_2237890((_QWORD *)(a1 + 96), a11, (__int64)&a11[a12]);
  v16 = a13;
  *(_OWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( (8 * a14) >> 3 )
  {
    if ( (unsigned __int64)((8 * a14) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v17 = (_QWORD *)operator new(8 * a14);
    v16 = a13;
  }
  else
  {
    v17 = nullptr;
  }
  *(_QWORD *)(a1 + 128) = v17;
  *(_QWORD *)(a1 + 144) = &v17[a14];
  if ( a13 != &a13[a14] )
  {
    v18 = ((unsigned __int64)(8 * a14 - 8) >> 3) + 1;
    if ( 8 * a14 == 8 )
    {
      v21 = v17;
    }
    else
    {
      v19 = 0;
      do
      {
        *(__m128i *)&v17[v19] = _mm_loadu_si128((const __m128i *)&a13[v19]);
        v19 += 2;
      }
      while ( v19 != 2 * (v18 >> 1) );
      v20 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v16 = &a13[v20];
      v21 = &v17[v20];
      if ( (v18 & 0xFFFFFFFFFFFFFFFELL) == v18 )
        goto LABEL_10;
    }
    *v21 = *v16;
LABEL_10:
    v17 += v18;
  }
  *(_QWORD *)(a1 + 136) = v17;
  v22 = a15;
  *(_QWORD *)(a1 + 160) = 0x400000000LL;
  v23 = a1 + 168;
  *(_QWORD *)(a1 + 152) = a1 + 168;
  v24 = (__m128i *)(a1 + 168);
  v37 = &a15[3 * a16];
  LODWORD(v25) = 0;
  if ( 0xAAAAAAAAAAAAAAABLL * ((48 * a16) >> 4) > 4 )
  {
    sub_201A7F0(a1 + 152, 0xAAAAAAAAAAAAAAABLL * ((48 * a16) >> 4));
    v25 = *(unsigned int *)(a1 + 160);
    v23 = *(_QWORD *)(a1 + 152);
    v24 = (__m128i *)(v23 + 48 * v25);
  }
  if ( a15 != v37 )
  {
    v26 = _mm_loadu_si128(a15);
    v24[1].m128i_i64[0] = (__int64)v24[2].m128i_i64;
    *v24 = v26;
    v27 = (_BYTE *)a15[1].m128i_i64[0];
    v28 = a15[1].m128i_i64[1];
    if ( &v27[v28] )
      goto LABEL_20;
    while ( (unsigned __int64)v28 <= 0xF )
    {
      v29 = (_BYTE *)v24[1].m128i_i64[0];
      if ( v28 == 1 )
      {
        *v29 = *v27;
        v29 = (_BYTE *)v24[1].m128i_i64[0];
        goto LABEL_18;
      }
      if ( v28 )
        goto LABEL_26;
LABEL_18:
      v24[1].m128i_i64[1] = v28;
      v22 += 3;
      v24 += 3;
      v29[v28] = 0;
      if ( v37 == v22 )
      {
        v23 = *(_QWORD *)(a1 + 152);
        LODWORD(v25) = *(_DWORD *)(a1 + 160);
        goto LABEL_28;
      }
      v30 = _mm_loadu_si128(v22);
      v24[1].m128i_i64[0] = (__int64)v24[2].m128i_i64;
      *v24 = v30;
      v27 = (_BYTE *)v22[1].m128i_i64[0];
      v28 = v22[1].m128i_i64[1];
      if ( &v27[v28] )
      {
LABEL_20:
        if ( !v27 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
    }
    if ( v28 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v29 = (_BYTE *)operator new(v28 + 1);
    v24[2].m128i_i64[0] = v28;
    v24[1].m128i_i64[0] = (__int64)v29;
LABEL_26:
    memcpy(v29, v27, v28);
    v29 = (_BYTE *)v24[1].m128i_i64[0];
    goto LABEL_18;
  }
LABEL_28:
  v31 = v25 - 1431655765 * ((48 * a16) >> 4);
  *(_DWORD *)(a1 + 160) = v31;
  v32 = 48LL * v31;
  v33 = v23 + v32;
  if ( v23 + v32 != v23 )
  {
    v38 = v23;
    _BitScanReverse64(&v34, 0xAAAAAAAAAAAAAAABLL * (v32 >> 4));
    sub_2238710(v23, (__m128i *)(v23 + v32), (__m128i *)(2LL * (int)(63 - (v34 ^ 0x3F))));
    if ( (unsigned __int64)v32 <= 0x300 )
    {
      sub_2237C50(v38, v33);
    }
    else
    {
      v35 = v38 + 768;
      sub_2237C50(v38, v38 + 768);
      if ( v33 != v38 + 768 )
      {
        do
        {
          v36 = v35;
          v35 += 48;
          sub_2237950(v36);
        }
        while ( v33 != v35 );
      }
    }
  }
}
