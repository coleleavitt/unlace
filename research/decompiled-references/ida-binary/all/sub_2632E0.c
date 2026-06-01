__int64 __fastcall mr_chooser_t__::vfunc_10(
        const char *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdi
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  size_t v14; // r12
  size_t v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rdi
  const char *v25; // rsi
  size_t v27; // r12
  size_t v28; // r12
  void *v29; // r14
  __m128i v30; // xmm0
  size_t v31; // r13
  __int64 v32; // rcx
  __int64 *v33; // r12
  void *v34; // r15
  __int64 v35; // r10
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __m128i v40; // xmm0
  void *v41; // r14
  void *v42; // rdi
  void *v43; // r14
  void *v44; // rdi
  __int64 v45; // rax
  char v46; // [rsp+0h] [rbp-160h]
  unsigned __int16 v48; // [rsp+10h] [rbp-150h]
  __int64 v49; // [rsp+18h] [rbp-148h]
  __m128i v50; // [rsp+20h] [rbp-140h] BYREF
  __int16 v51; // [rsp+3Ch] [rbp-124h] BYREF
  __int16 v52; // [rsp+3Eh] [rbp-122h] BYREF
  void *v53; // [rsp+40h] [rbp-120h] BYREF
  __int128 v54; // [rsp+48h] [rbp-118h]
  void *v55; // [rsp+60h] [rbp-100h] BYREF
  __int128 v56; // [rsp+68h] [rbp-F8h]
  __m128i v57; // [rsp+80h] [rbp-E0h] BYREF
  void *src; // [rsp+90h] [rbp-D0h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-C8h]
  void *dest; // [rsp+A8h] [rbp-B8h] BYREF
  size_t v61[2]; // [rsp+B0h] [rbp-B0h]
  __int64 v62; // [rsp+C0h] [rbp-A0h] BYREF
  unsigned __int16 v63; // [rsp+C8h] [rbp-98h]
  __m128i v64; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v65; // [rsp+110h] [rbp-50h]
  unsigned __int16 v66; // [rsp+118h] [rbp-48h]
  unsigned __int64 v67; // [rsp+128h] [rbp-38h]

  v11 = *((_QWORD *)a1 + 23);
  v67 = __readfsqword(0x28u);
  v57 = 0;
  src = nullptr;
  dest = nullptr;
  v62 = 0;
  v63 = 0;
  v50.m128i_i64[1] = (__int64)&v57;
  *(_OWORD *)n = 0;
  *(_OWORD *)v61 = 0;
  sub_231B10(v11, (__int64)&v57);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 24) + 8LL) )
  {
    n[0] = 0;
    v57 = (__m128i)-1LL;
    v61[0] = 0;
    v53 = nullptr;
    v54 = 0;
  }
  else
  {
    v14 = n[0];
    v53 = nullptr;
    v54 = 0;
    if ( n[0] )
    {
      v53 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v54 + 1) = v14;
      memcpy(v53, src, v14);
      *(_QWORD *)&v54 = v14;
    }
  }
  v15 = v61[0];
  v16.m128i_i64[0] = 0;
  v55 = nullptr;
  v56 = 0;
  if ( v61[0] )
  {
    v55 = (void *)qalloc_or_throw(v61[0]);
    *((_QWORD *)&v56 + 1) = v15;
    memcpy(v55, dest, v15);
    *(_QWORD *)&v56 = v15;
  }
  v52 = 7;
  v51 = (unsigned __int8)v63;
  v50.m128i_i64[0] = (__int64)&v55;
  while ( 1 )
  {
    v24 = &s1;
    if ( *((_QWORD *)a1 + 30) )
      v24 = *((const char **)a1 + 29);
    v25 = (const char *)&v52;
    if ( (int)sub_1697D0(
                (int)v24,
                v50.m128i_i64[1],
                (__int64)&v57.m128i_i64[1],
                (__int64)&v62,
                (__int64)&v53,
                v50.m128i_i64[0],
                (__m128)0LL,
                a4,
                a5,
                a6,
                v12,
                v13,
                a9,
                a10,
                (char)&v51) <= 0 )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 24) + 48LL) = 0;
      goto LABEL_13;
    }
    v17 = v57.m128i_i64[0];
    if ( (unsigned __int8)sub_2324A0((__int64)a1, v57.m128i_u64[0], v57.m128i_u64[1], v62, 0, 0) )
      break;
    sub_169630(
      (int)"AUTOHIDE NONE\nIllegal memory region boundaries",
      v17,
      v18,
      v19,
      v20,
      v21,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v22,
      v23,
      a9,
      a10,
      v46);
  }
  v27 = v54;
  if ( (unsigned __int64)v54 > 1 )
  {
    v43 = v53;
    v44 = src;
    if ( n[1] < (unsigned __int64)v54 )
    {
      src = (void *)qvector_reserve(&src, src, v54, 1);
      v44 = src;
    }
    n[0] = v27;
    memmove(v44, v43, v27 - 1);
    *((char *)src + v27 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  v28 = v56;
  if ( (unsigned __int64)v56 > 1 )
  {
    v41 = v55;
    v42 = dest;
    if ( v61[1] < (unsigned __int64)v56 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v56, 1);
      v42 = dest;
    }
    v61[0] = v28;
    memmove(v42, v41, v28 - 1);
    *((char *)dest + v28 - 1) = 0;
  }
  else
  {
    v61[0] = 0;
  }
  v29 = nullptr;
  v30 = _mm_load_si128(&v57);
  v31 = n[0];
  LOBYTE(v63) = v51;
  v32 = v52 & 2;
  v33 = *((__int64 **)a1 + 24);
  v64 = v30;
  HIBYTE(v63) = ((v52 & 4) != 0) | v32 | (4 * v52) & 4;
  if ( n[0] )
  {
    v29 = (void *)qalloc_or_throw(n[0]);
    memcpy(v29, src, v31);
  }
  v34 = nullptr;
  v50.m128i_i64[0] = v61[0];
  if ( v61[0] )
  {
    v34 = (void *)qalloc_or_throw(v61[0]);
    memcpy(v34, dest, v50.m128i_u64[0]);
  }
  v35 = v62;
  v36 = v63;
  v37 = v33[1];
  v38 = *v33;
  v65 = v62;
  v66 = v63;
  if ( v33[2] < (unsigned __int64)(v37 + 1) )
  {
    v48 = v63;
    v49 = v62;
    v45 = qvector_reserve(v33, v38, v37 + 1, 80);
    *v33 = v45;
    v38 = v45;
    v36 = v48;
    v37 = v33[1];
    v35 = v49;
  }
  v39 = v38 + 80 * v37;
  v25 = a1;
  *(__m128i *)v39 = _mm_load_si128(&v64);
  *(_QWORD *)(v39 + 16) = v29;
  *(__m128i *)(v39 + 24) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
  v40 = _mm_loadl_epi64(&v50);
  *(_QWORD *)(v39 + 40) = v34;
  v16 = _mm_unpacklo_epi64(v40, v40);
  *(_QWORD *)(v39 + 64) = v35;
  *(_WORD *)(v39 + 72) = v36;
  *(__m128i *)(v39 + 48) = v16;
  ++v33[1];
  sub_2630B0((__int64)v33, (__int64)a1, 1, v32, v20, v36);
LABEL_13:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    *(double *)v16.m128i_i64 = qfree(v55, v25);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    *(double *)v16.m128i_i64 = qfree(v53, v25, *(double *)v16.m128i_i64);
  }
  if ( dest )
  {
    v61[0] = 0;
    *(double *)v16.m128i_i64 = qfree(dest, v25, *(double *)v16.m128i_i64);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v25, *(double *)v16.m128i_i64);
  }
  return a2;
}
