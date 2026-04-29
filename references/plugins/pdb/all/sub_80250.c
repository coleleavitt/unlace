unsigned __int64 __fastcall sub_80250(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rax
  unsigned __int32 v13; // eax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  __int16 v35; // dx
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  int v38; // eax
  __m128i v39; // xmm0
  unsigned int v40; // eax
  __int64 v41; // [rsp+0h] [rbp-68h] BYREF
  __m128i v42; // [rsp+8h] [rbp-60h] BYREF
  __m128i v43; // [rsp+18h] [rbp-50h] BYREF
  __m128i v44; // [rsp+28h] [rbp-40h] BYREF
  __int64 v45; // [rsp+38h] [rbp-30h]
  unsigned int v46; // [rsp+40h] [rbp-28h]
  unsigned __int64 v47; // [rsp+48h] [rbp-20h]

  v47 = __readfsqword(0x28u);
  *(_OWORD *)(a3 + 48) = 0;
  *(_OWORD *)a3 = 0;
  *(_OWORD *)(a3 + 16) = 0;
  *(_OWORD *)(a3 + 32) = 0;
  *(_OWORD *)(a3 + 60) = 0;
  v5 = *a2;
  if ( (((_WORD)v5 - 387) & 0xFFFD) == 0 )
  {
    lread(a1, &v41, 64);
    v14 = v41;
    *(__m128i *)(a3 + 16) = _mm_loadu_si128(&v42);
    v15 = _mm_loadu_si128(&v43);
    *(_QWORD *)a3 = v14;
    LODWORD(v14) = HIDWORD(v45);
    *(__m128i *)(a3 + 32) = v15;
    v16 = _mm_loadu_si128(&v44);
    *(_DWORD *)(a3 + 72) = v14;
    *(__m128i *)(a3 + 48) = v16;
    *(_QWORD *)(a3 + 64) = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v45), (__m128i)0LL).m128i_u64[0];
    return v47 - __readfsqword(0x28u);
  }
  if ( (_WORD)v5 != 21020 )
  {
    if ( (_WORD)v5 == 194 )
    {
      lread(a1, &v41, 48);
      *(_QWORD *)a3 = v41;
      if ( a4 )
      {
        *(_QWORD *)(a3 + 16) = _byteswap_ulong(v42.m128i_u32[0]);
        *(_QWORD *)(a3 + 24) = _byteswap_ulong(v42.m128i_u32[1]);
        *(_QWORD *)(a3 + 32) = _byteswap_ulong(v42.m128i_u32[2]);
        *(_QWORD *)(a3 + 40) = _byteswap_ulong(v42.m128i_u32[3]);
        v39 = _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(_byteswap_ulong(v43.m128i_u32[0])),
                _mm_cvtsi32_si128(_byteswap_ulong(v43.m128i_u32[1])));
        *(_DWORD *)(a3 + 64) = _byteswap_ulong(v43.m128i_u32[2]);
        v40 = v43.m128i_u32[3];
        *(__m128i *)(a3 + 48) = _mm_unpacklo_epi32(v39, (__m128i)0LL);
        *(_DWORD *)(a3 + 68) = _byteswap_ulong(v40);
        v13 = _byteswap_ulong(v44.m128i_u32[0]);
      }
      else
      {
        v18 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v42.m128i_u32[2]), _mm_cvtsi32_si128(v42.m128i_u32[3]));
        v19 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v42.m128i_u32[0]), _mm_cvtsi32_si128(v42.m128i_u32[1]));
        *(_QWORD *)(a3 + 64) = v43.m128i_i64[1];
        v13 = v44.m128i_i32[0];
        v20 = _mm_unpacklo_epi64(v19, v18);
        *(__m128i *)(a3 + 32) = _mm_unpackhi_epi32(v20, (__m128i)0LL);
        v21 = _mm_loadl_epi64(&v43);
        *(__m128i *)(a3 + 16) = _mm_unpacklo_epi32(v20, (__m128i)0LL);
        *(__m128i *)(a3 + 48) = _mm_unpacklo_epi32(v21, (__m128i)0LL);
      }
      goto LABEL_9;
    }
    if ( a4 )
    {
      LOWORD(v5) = v5 - 487;
      if ( (unsigned __int16)v5 <= 0x10u )
      {
        v22 = 65793;
        if ( _bittest64(&v22, v5) )
        {
          lread(a1, &v41, 72);
          v23 = v41;
          *(_BYTE *)(a3 + 8) = 0;
          v24 = v42.m128i_i64[0];
          *(_QWORD *)a3 = v23;
          v25 = swap64(v24);
          v26 = v42.m128i_i64[1];
          *(_QWORD *)(a3 + 16) = v25;
          v27 = swap64(v26);
          v28 = v43.m128i_i64[0];
          *(_QWORD *)(a3 + 24) = v27;
          v29 = swap64(v28);
          v30 = v43.m128i_i64[1];
          *(_QWORD *)(a3 + 32) = v29;
          v31 = swap64(v30);
          v32 = v44.m128i_i64[0];
          *(_QWORD *)(a3 + 40) = v31;
          v33 = swap64(v32);
          v34 = v44.m128i_i64[1];
          *(_QWORD *)(a3 + 48) = v33;
          *(_QWORD *)(a3 + 56) = swap64(v34);
          *(_DWORD *)(a3 + 64) = _byteswap_ulong(v45);
          *(_DWORD *)(a3 + 68) = _byteswap_ulong(HIDWORD(v45));
          v13 = _byteswap_ulong(v46);
          goto LABEL_9;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(v5 - 352) <= 1u )
      {
        lread(a1, &v41, 44);
        sub_7EE30(&v41, a3, 0);
        return v47 - __readfsqword(0x28u);
      }
      LOWORD(v5) = v5 - 487;
      if ( (unsigned __int16)v5 <= 0x10u )
      {
        v7 = 65793;
        if ( _bittest64(&v7, v5) )
        {
          lread(a1, &v41, 72);
          v8 = v41;
          v9 = _mm_loadu_si128(&v42);
          *(_BYTE *)(a3 + 8) = 0;
          *(_QWORD *)a3 = v8;
          v10 = v43.m128i_i64[0];
          *(__m128i *)(a3 + 16) = v9;
          si128 = _mm_load_si128((const __m128i *)&v43.m128i_u64[1]);
          *(_QWORD *)(a3 + 32) = v10;
          v12 = v44.m128i_i64[1];
          *(__m128i *)(a3 + 40) = si128;
          *(_QWORD *)(a3 + 56) = v12;
          *(_QWORD *)(a3 + 64) = v45;
          v13 = v46;
LABEL_9:
          *(_DWORD *)(a3 + 72) = v13;
          return v47 - __readfsqword(0x28u);
        }
      }
    }
    lread(a1, &v41, 40);
    sub_7EE30(&v41, a3, a4);
    return v47 - __readfsqword(0x28u);
  }
  lread(a1, &v41, 40);
  v35 = v43.m128i_i16[6];
  v36 = _mm_loadu_si128(&v42);
  *(_QWORD *)a3 = v41;
  *(__m128i *)(a3 + 32) = _mm_unpackhi_epi32(v36, (__m128i)0LL);
  v37 = _mm_loadl_epi64(&v43);
  *(__m128i *)(a3 + 16) = _mm_unpacklo_epi32(v36, (__m128i)0LL);
  *(__m128i *)(a3 + 48) = _mm_unpacklo_epi32(v37, (__m128i)0LL);
  v38 = (32 * (_BYTE)v35) & 0x20;
  *(_QWORD *)(a3 + 64) = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v43.m128i_u32[2]), (__m128i)0LL).m128i_u64[0];
  if ( (v35 & 2) != 0 )
    v38 |= 0x40u;
  *(_DWORD *)(a3 + 72) = v38;
  if ( (v35 & 0x100) != 0 )
    *(_DWORD *)(a3 + 72) |= 0x20u;
  return v47 - __readfsqword(0x28u);
}
