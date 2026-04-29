__int64 __fastcall sub_83D0(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm1
  __m128i v8; // xmm7
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  unsigned int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  unsigned int v14; // edx
  unsigned int v15; // eax
  __m128i v16; // xmm1
  unsigned int v17; // eax
  __m128i v18; // xmm0
  unsigned int v19; // eax
  unsigned __int32 v20; // eax
  __m128 v22; // xmm1
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  unsigned int v25; // eax
  __m128 v26; // xmm2
  unsigned int v27; // eax
  __m128i v28; // xmm3
  unsigned int v29; // eax
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm1
  __m128i v35; // xmm5
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  unsigned int v38; // eax
  __int64 v39; // rdi
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  unsigned int v42; // eax
  __m128i v43; // xmm6
  __m128i v44; // xmm1
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned int v68; // [rsp+0h] [rbp-78h] BYREF
  __m128i v69; // [rsp+4h] [rbp-74h] BYREF
  __m128i v70; // [rsp+14h] [rbp-64h] BYREF
  __m128i v71; // [rsp+24h] [rbp-54h] BYREF
  __m128i v72; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v73; // [rsp+44h] [rbp-34h]
  unsigned int v74; // [rsp+48h] [rbp-30h]
  unsigned int v75; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v76; // [rsp+50h] [rbp-28h]
  unsigned int v77; // [rsp+54h] [rbp-24h]
  unsigned int v78; // [rsp+58h] [rbp-20h]
  unsigned int v79; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v80; // [rsp+68h] [rbp-10h]

  v4 = *a2;
  v80 = __readfsqword(0x28u);
  if ( a4 )
  {
    LOWORD(v4) = v4 - 320;
    if ( (unsigned __int16)v4 > 0x23u || (v6 = 0x900000001LL, !_bittest64(&v6, v4)) )
    {
      lread(a1, a3, 144);
      v34 = _mm_cvtsi32_si128(*(_DWORD *)a3);
      v35 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 32)));
      v36 = _mm_or_si128(_mm_srli_epi16(v34, 8u), _mm_slli_epi16(v34, 8u));
      v37 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 4)));
      v38 = *(_DWORD *)(a3 + 8);
      *(_DWORD *)a3 = _mm_cvtsi128_si32(v36);
      v39 = *(_QWORD *)(a3 + 48);
      v40 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 20)));
      v41 = _mm_unpacklo_epi32(v37, _mm_cvtsi32_si128(_byteswap_ulong(v38)));
      v42 = *(_DWORD *)(a3 + 28);
      v43 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 24)));
      *(__m128i *)(a3 + 4) = _mm_unpacklo_epi64(
                               v41,
                               _mm_unpacklo_epi32(
                                 _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 12))),
                                 _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a3 + 16)))));
      v44 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v42)), v35);
      *(_DWORD *)(a3 + 36) = _byteswap_ulong(*(_DWORD *)(a3 + 36));
      v45 = *(_DWORD *)(a3 + 40);
      *(__m128i *)(a3 + 20) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v40, v43), v44);
      *(_DWORD *)(a3 + 40) = _byteswap_ulong(v45);
      *(_DWORD *)(a3 + 44) = _byteswap_ulong(*(_DWORD *)(a3 + 44));
      v46 = swap64(v39);
      v47 = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(a3 + 48) = v46;
      v48 = swap64(v47);
      v49 = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 56) = v48;
      v50 = swap64(v49);
      v51 = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 64) = v50;
      v52 = swap64(v51);
      v53 = *(_QWORD *)(a3 + 80);
      *(_QWORD *)(a3 + 72) = v52;
      v54 = swap64(v53);
      v55 = *(_QWORD *)(a3 + 88);
      *(_QWORD *)(a3 + 80) = v54;
      v56 = swap64(v55);
      v57 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a3 + 88) = v56;
      v58 = swap64(v57);
      v59 = *(_QWORD *)(a3 + 104);
      *(_QWORD *)(a3 + 96) = v58;
      v60 = swap64(v59);
      v61 = *(_QWORD *)(a3 + 112);
      *(_QWORD *)(a3 + 104) = v60;
      v62 = swap64(v61);
      v63 = *(_QWORD *)(a3 + 120);
      *(_QWORD *)(a3 + 112) = v62;
      v64 = swap64(v63);
      v65 = *(_QWORD *)(a3 + 128);
      *(_QWORD *)(a3 + 120) = v64;
      v66 = swap64(v65);
      v67 = *(_QWORD *)(a3 + 136);
      *(_QWORD *)(a3 + 128) = v66;
      *(_QWORD *)(a3 + 136) = swap64(v67);
      return v80 - __readfsqword(0x28u);
    }
    lread(a1, &v68, 96);
    v7 = _mm_cvtsi32_si128(v68);
    v8 = _mm_cvtsi32_si128(_byteswap_ulong(v72.m128i_u32[3]));
    v9 = _mm_or_si128(_mm_slli_epi16(v7, 8u), _mm_srli_epi16(v7, 8u));
    v10 = _mm_cvtsi32_si128(_byteswap_ulong(v69.m128i_u32[0]));
    v11 = v69.m128i_u32[3];
    *(_DWORD *)a3 = _mm_cvtsi128_si32(v9);
    v12 = _mm_cvtsi32_si128(_byteswap_ulong(v71.m128i_u32[1]));
    v13 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(_byteswap_ulong(v11))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(v70.m128i_u32[1])),
              _mm_cvtsi32_si128(_byteswap_ulong(v70.m128i_u32[3]))));
    v14 = _byteswap_ulong(v71.m128i_u32[3]);
    v15 = v72.m128i_u32[1];
    *(__m128i *)(a3 + 4) = v13;
    v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v15)), v8);
    *(_DWORD *)(a3 + 36) = _byteswap_ulong(v74);
    v17 = v76;
    *(__m128i *)(a3 + 20) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v14)), v16);
    *(_DWORD *)(a3 + 40) = _byteswap_ulong(v17);
    *(_DWORD *)(a3 + 44) = _byteswap_ulong(v78);
    *(_QWORD *)(a3 + 48) = _byteswap_ulong(v69.m128i_u32[1]);
    *(_QWORD *)(a3 + 56) = _byteswap_ulong(v69.m128i_u32[2]);
    *(_QWORD *)(a3 + 64) = _byteswap_ulong(v70.m128i_u32[0]);
    *(_QWORD *)(a3 + 72) = _byteswap_ulong(v70.m128i_u32[2]);
    *(_QWORD *)(a3 + 80) = _byteswap_ulong(v71.m128i_u32[0]);
    *(_QWORD *)(a3 + 88) = _byteswap_ulong(v71.m128i_u32[2]);
    *(_QWORD *)(a3 + 96) = _byteswap_ulong(v72.m128i_u32[0]);
    *(_QWORD *)(a3 + 104) = _byteswap_ulong(v72.m128i_u32[2]);
    v18 = _mm_unpacklo_epi32(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v73)), _mm_cvtsi32_si128(_byteswap_ulong(v75))),
            (__m128i)0LL);
    *(_QWORD *)(a3 + 128) = _byteswap_ulong(v77);
    v19 = v79;
    *(__m128i *)(a3 + 112) = v18;
    v20 = _byteswap_ulong(v19);
LABEL_5:
    *(_QWORD *)(a3 + 136) = v20;
    return v80 - __readfsqword(0x28u);
  }
  if ( (v4 & 0xFFDF) == 0x142 )
  {
    lread(a1, &v68, 96);
    v22 = (__m128)_mm_loadu_si128(&v69);
    v23 = (__m128)_mm_loadu_si128(&v70);
    v24 = (__m128)_mm_loadu_si128(&v71);
    *(_DWORD *)a3 = v68;
    v25 = v74;
    v26 = (__m128)_mm_loadu_si128(&v72);
    *(__m128 *)(a3 + 4) = _mm_shuffle_ps(v22, v23, 220);
    *(_DWORD *)(a3 + 36) = v25;
    v27 = v76;
    v28 = (__m128i)_mm_shuffle_ps(v22, v23, 137);
    *(__m128 *)(a3 + 20) = _mm_shuffle_ps(v24, v26, 221);
    *(_DWORD *)(a3 + 40) = v27;
    v29 = v78;
    *(__m128i *)(a3 + 64) = _mm_unpackhi_epi32(v28, (__m128i)0LL);
    v30 = (__m128i)_mm_shuffle_ps(v24, v26, 136);
    *(_DWORD *)(a3 + 44) = v29;
    v31 = v73;
    *(__m128i *)(a3 + 48) = _mm_unpacklo_epi32(v28, (__m128i)0LL);
    *(_QWORD *)(a3 + 112) = v31;
    v32 = v75;
    *(__m128i *)(a3 + 80) = _mm_unpacklo_epi32(v30, (__m128i)0LL);
    *(_QWORD *)(a3 + 120) = v32;
    v33 = v77;
    *(__m128i *)(a3 + 96) = _mm_unpackhi_epi32(v30, (__m128i)0LL);
    *(_QWORD *)(a3 + 128) = v33;
    v20 = v79;
    goto LABEL_5;
  }
  return lread(a1, a3, 144);
}
