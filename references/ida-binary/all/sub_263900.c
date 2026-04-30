__int64 __fastcall mr_chooser_t__::vfunc_12(
        const char *a1,
        unsigned __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rax
  __int64 v12; // r12
  size_t v13; // r13
  size_t v14; // r13
  __int16 v15; // dx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char *v28; // rdi
  const char *v29; // rsi
  unsigned __int64 v30; // r12
  size_t v32; // r12
  size_t v33; // r12
  __int64 v34; // rcx
  _QWORD *v35; // r12
  void *v36; // rax
  __int64 v37; // r13
  size_t v38; // r14
  size_t v39; // r14
  void *v40; // r14
  void *v41; // rdi
  void *v42; // r14
  void *v43; // rdi
  void *v44; // r8
  void *v45; // rax
  void *v46; // r8
  void *v47; // rax
  __int64 v48; // [rsp+0h] [rbp-130h]
  void *v49; // [rsp+30h] [rbp-100h]
  void *v50; // [rsp+30h] [rbp-100h]
  __int16 v52; // [rsp+44h] [rbp-ECh] BYREF
  __int16 v53; // [rsp+46h] [rbp-EAh] BYREF
  __m128i v54; // [rsp+48h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+58h] [rbp-D8h] BYREF
  void *v56; // [rsp+60h] [rbp-D0h] BYREF
  __int128 v57; // [rsp+68h] [rbp-C8h]
  void *v58; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v59; // [rsp+88h] [rbp-A8h]
  __m128i v60; // [rsp+A0h] [rbp-90h] BYREF
  void *dest; // [rsp+B0h] [rbp-80h] BYREF
  size_t v62[2]; // [rsp+B8h] [rbp-78h]
  void *src; // [rsp+C8h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+D0h] [rbp-60h]
  __int64 v65; // [rsp+E0h] [rbp-50h]
  __int16 v66; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  v10 = *((_QWORD **)a1 + 24);
  if ( a2 >= v10[1] )
    return -1;
  v48 = 80 * a2;
  v12 = *v10 + 80 * a2;
  if ( !v12 )
    return -1;
  dest = nullptr;
  v60 = _mm_loadu_si128((const __m128i *)v12);
  *(_OWORD *)v62 = 0;
  v13 = *(_QWORD *)(v12 + 24);
  if ( v13 )
  {
    v36 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 24));
    v62[1] = v13;
    dest = v36;
    memcpy(v36, *(const void **)(v12 + 16), v13);
    v62[0] = v13;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v14 = *(_QWORD *)(v12 + 48);
  if ( v14 )
  {
    src = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 48));
    n[1] = v14;
    memcpy(src, *(const void **)(v12 + 40), v14);
    n[0] = v14;
  }
  v15 = *(_WORD *)(v12 + 72);
  v16 = *(_QWORD *)(v12 + 64);
  v56 = nullptr;
  v57 = 0;
  v66 = v15;
  v65 = v16;
  v54 = v60;
  v55 = v16;
  if ( v62[0] )
  {
    v56 = (void *)qalloc_or_throw(v62[0]);
    *((_QWORD *)&v57 + 1) = v62[0];
    memcpy(v56, dest, v62[0]);
    *(_QWORD *)&v57 = v62[0];
  }
  v17.m128i_i64[0] = 0;
  v58 = nullptr;
  v59 = 0;
  if ( n[0] )
  {
    v58 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v59 + 1) = n[0];
    memcpy(v58, src, n[0]);
    *(_QWORD *)&v59 = n[0];
  }
  v52 = (unsigned __int8)v66;
  v53 = (HIBYTE(v66) >> 2) & 1 | HIBYTE(v66) & 2 | (4 * HIBYTE(v66)) & 4;
  while ( 1 )
  {
    v28 = &s1;
    if ( *((_QWORD *)a1 + 33) )
      v28 = *((const char **)a1 + 32);
    v29 = (const char *)&v53;
    if ( (int)sub_1697D0(
                (int)v28,
                (__int64)&v54,
                (__int64)&v54.m128i_i64[1],
                (__int64)&v55,
                (__int64)&v56,
                (__int64)&v58,
                (__m128)0LL,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                a10,
                (char)&v52) <= 0 )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 24) + 48LL) = 0;
      goto LABEL_18;
    }
    v18 = v55;
    v19 = v54.m128i_i64[1];
    v20 = v54.m128i_i64[0];
    v21 = v54.m128i_i64[0];
    if ( (unsigned __int8)sub_2324A0((__int64)a1, v54.m128i_u64[0], v54.m128i_u64[1], v55, 1u, a2) )
      break;
    sub_169630(
      (int)"AUTOHIDE NONE\nIllegal memory region boundaries",
      v21,
      v22,
      v23,
      v24,
      v25,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v26,
      v27,
      a9,
      a10,
      v48);
  }
  v65 = v18;
  v32 = v57;
  v60.m128i_i64[0] = v20;
  v60.m128i_i64[1] = v19;
  if ( (unsigned __int64)v57 > 1 )
  {
    v42 = v56;
    v43 = dest;
    if ( v62[1] < (unsigned __int64)v57 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v57, 1);
      v43 = dest;
    }
    v62[0] = v32;
    memmove(v43, v42, v32 - 1);
    *((char *)dest + v32 - 1) = 0;
  }
  else
  {
    v62[0] = 0;
  }
  v33 = v59;
  if ( (unsigned __int64)v59 > 1 )
  {
    v40 = v58;
    v41 = src;
    if ( n[1] < (unsigned __int64)v59 )
    {
      src = (void *)qvector_reserve(&src, src, v59, 1);
      v41 = src;
    }
    n[0] = v33;
    memmove(v41, v40, v33 - 1);
    *((char *)src + v33 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
  v34 = v53 & 2;
  HIBYTE(v66) = ((v53 & 4) != 0) | v34 | (4 * v53) & 4;
  LOBYTE(v66) = v52;
  v35 = *((_QWORD **)a1 + 24);
  if ( a2 < v35[1] )
  {
    v17 = _mm_load_si128(&v60);
    v37 = *v35 + v48;
    *(__m128i *)v37 = v17;
    if ( (void **)(v37 + 16) != &dest )
    {
      v38 = v62[0];
      if ( v62[0] > 1 )
      {
        v44 = dest;
        v45 = *(void **)(v37 + 16);
        if ( *(_QWORD *)(v37 + 32) < v62[0] )
        {
          v49 = dest;
          v45 = (void *)qvector_reserve(v37 + 16, *(_QWORD *)(v37 + 16), v62[0], 1);
          *(_QWORD *)(v37 + 16) = v45;
          v44 = v49;
        }
        *(_QWORD *)(v37 + 24) = v38;
        memmove(v45, v44, v38 - 1);
        *(_BYTE *)(*(_QWORD *)(v37 + 16) + v38 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v37 + 24) = 0;
      }
    }
    if ( (void **)(v37 + 40) != &src )
    {
      v39 = n[0];
      if ( n[0] > 1 )
      {
        v46 = src;
        v47 = *(void **)(v37 + 40);
        if ( *(_QWORD *)(v37 + 56) < n[0] )
        {
          v50 = src;
          v47 = (void *)qvector_reserve(v37 + 40, *(_QWORD *)(v37 + 40), n[0], 1);
          *(_QWORD *)(v37 + 40) = v47;
          v46 = v50;
        }
        *(_QWORD *)(v37 + 48) = v39;
        memmove(v47, v46, v39 - 1);
        *(_BYTE *)(*(_QWORD *)(v37 + 40) + v39 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v37 + 48) = 0;
      }
    }
    *(_QWORD *)(v37 + 64) = v65;
    *(_WORD *)(v37 + 72) = v66;
  }
  v29 = a1;
  sub_2630B0((__int64)v35, (__int64)a1, 1, v34, v24, v25);
LABEL_18:
  v30 = a2;
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    *(double *)v17.m128i_i64 = qfree(v58, v29);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    *(double *)v17.m128i_i64 = qfree(v56, v29, *(double *)v17.m128i_i64);
  }
  if ( src )
  {
    n[0] = 0;
    *(double *)v17.m128i_i64 = qfree(src, v29, *(double *)v17.m128i_i64);
  }
  if ( dest )
  {
    v62[0] = 0;
    qfree(dest, v29, *(double *)v17.m128i_i64);
  }
  return v30;
}
