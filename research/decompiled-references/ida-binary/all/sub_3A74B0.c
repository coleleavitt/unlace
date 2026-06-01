__int64 __fastcall sub_3A74B0(
        __int64 *a1,
        const char **a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v11; // ebp
  __m128 v15; // xmm0
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  unsigned __int64 v20; // r14
  const char *v21; // rsi
  const char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rdi
  void *v30; // r8
  void *v31; // rdi
  const void *v32; // r8
  void *v33; // rdi
  __int64 v34; // rax
  char v35; // [rsp+0h] [rbp-128h]
  const void *v36; // [rsp+8h] [rbp-120h]
  void *v37; // [rsp+8h] [rbp-120h]
  __m128i si128; // [rsp+10h] [rbp-118h] BYREF
  void *src; // [rsp+20h] [rbp-108h] BYREF
  __int128 v40; // [rsp+28h] [rbp-100h]
  __int64 v41; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-E8h]
  __int64 v43; // [rsp+50h] [rbp-D8h]
  __int128 v44; // [rsp+58h] [rbp-D0h]
  __int64 v45; // [rsp+68h] [rbp-C0h]
  __int128 v46; // [rsp+70h] [rbp-B8h]
  __int64 v47; // [rsp+80h] [rbp-A8h]
  __m128 v48; // [rsp+88h] [rbp-A0h]
  _OWORD v49[2]; // [rsp+A0h] [rbp-88h] BYREF
  __m128i v50[2]; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v51; // [rsp+E8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  LOBYTE(v11) = a2 == nullptr || a1 == nullptr;
  if ( (_BYTE)v11 )
  {
    return 0;
  }
  else
  {
    src = nullptr;
    v49[0] = _mm_load_si128((const __m128i *)&xmmword_5DD520);
    v41 = 0;
    v49[1] = _mm_load_si128((const __m128i *)&xmmword_5DD530);
    v43 = 0;
    v50[0] = _mm_load_si128((const __m128i *)&xmmword_5DD540);
    v45 = 0;
    *(__m128i *)((char *)v50 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DD550);
    v47 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC720);
    v40 = 0;
    v42 = 0;
    v44 = 0;
    v46 = 0;
    v15 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD510);
    v48 = v15;
    copy_tinfo_t(&si128.m128i_u64[1], a2, a3);
    v20 = a1[1];
    if ( v20 > 1 )
    {
      v32 = (const void *)*a1;
      v33 = src;
      if ( *((_QWORD *)&v40 + 1) < v20 )
      {
        v36 = (const void *)*a1;
        src = (void *)qvector_reserve(&src, src, a1[1], 1);
        v32 = v36;
        v33 = src;
      }
      *(_QWORD *)&v40 = v20;
      memmove(v33, v32, v20 - 1);
      *((char *)src + v20 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v40 = 0;
    }
    v21 = *a2;
    v48.m128_i32[0] &= ~2u;
    v48.m128_i32[3] |= 0x200Au;
    if ( ((unsigned __int64)v21 <= 0xFF || !(unsigned int)get_tinfo_pdata(&v41, v21, 5)) && v41 )
    {
      *(_QWORD *)&v42 = 0;
      *(double *)v15.m128_u64 = qfree(v41, v21);
      v41 = 0;
      *((_QWORD *)&v42 + 1) = 0;
    }
    v22 = (const char *)sub_3A50F0;
    if ( (unsigned int)sub_1697D0(
                         (int)v49,
                         (__int64)sub_3A50F0,
                         (__int64)&si128,
                         (__int64)&si128,
                         v16,
                         v17,
                         v15,
                         a5,
                         a6,
                         a7,
                         v18,
                         v19,
                         a10,
                         a11,
                         v35) )
    {
      v24 = v40;
      if ( (unsigned __int64)v40 > 1 )
      {
        v30 = src;
        v31 = (void *)*a1;
        if ( a1[2] < (unsigned __int64)v40 )
        {
          v37 = src;
          v34 = qvector_reserve(a1, *a1, v40, 1);
          *a1 = v34;
          v30 = v37;
          v31 = (void *)v34;
        }
        a1[1] = v24;
        memmove(v31, v30, v24 - 1);
        *(_BYTE *)(*a1 + v24 - 1) = 0;
      }
      else
      {
        a1[1] = 0;
      }
      v22 = &si128.m128i_i8[8];
      copy_tinfo_t(a2, &si128.m128i_u64[1], v23);
      if ( !(_QWORD)v46 )
        LOBYTE(v11) = (unsigned int)verify_tinfo(si128.m128i_i64[1]) == 0;
    }
    v25 = v45;
    if ( v45 )
    {
      v26 = v46;
      if ( (_QWORD)v46 )
      {
        v27 = 0;
        do
        {
          v28 = (__int64 *)(v25 + 24 * v27);
          v29 = *v28;
          if ( *v28 )
          {
            v28[1] = 0;
            qfree(v29, v22);
            v25 = v45;
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v46 = 0;
      *(double *)v15.m128_u64 = qfree(v25, v22);
    }
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      *(double *)v15.m128_u64 = qfree(v43, v22, *(double *)v15.m128_u64);
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      *(double *)v15.m128_u64 = qfree(v41, v22, *(double *)v15.m128_u64);
    }
    if ( src )
    {
      *(_QWORD *)&v40 = 0;
      qfree(src, v22, *(double *)v15.m128_u64);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
  }
  return v11;
}
