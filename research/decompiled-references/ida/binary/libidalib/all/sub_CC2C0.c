unsigned __int64 __fastcall sub_CC2C0(__int64 *a1, int a2)
{
  int v2; // ebp
  __m128i v3; // xmm6
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __m128i v7; // xmm0
  __m128i v8; // xmm7
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __m128i v11; // xmm0
  void *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 i; // r12
  _QWORD *v21; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r15
  __m128i *v28; // rbx
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  void (__fastcall **v36)(__int64, _QWORD); // rax
  __int64 *v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // r10
  __int64 v41; // r12
  _QWORD *v42; // r14
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // rcx
  size_t v48; // rdx
  void *v49; // rax
  size_t v50; // rdx
  const void **v51; // rcx
  const void **v52; // rcx
  size_t v53; // rbx
  __int64 v54; // [rsp+8h] [rbp-150h]
  __m128i v55; // [rsp+10h] [rbp-148h] BYREF
  size_t n; // [rsp+20h] [rbp-138h]
  const void **v57; // [rsp+28h] [rbp-130h]
  int v58; // [rsp+30h] [rbp-128h]
  int v59; // [rsp+34h] [rbp-124h]
  __int64 *v60; // [rsp+38h] [rbp-120h]
  void *v61; // [rsp+40h] [rbp-118h]
  __int64 v62; // [rsp+48h] [rbp-110h] BYREF
  __m128i v63; // [rsp+50h] [rbp-108h] BYREF
  __int64 (__fastcall ***v64)(); // [rsp+60h] [rbp-F8h]
  unsigned __int64 v65; // [rsp+68h] [rbp-F0h]
  __int64 (__fastcall **v66)(); // [rsp+70h] [rbp-E8h] BYREF
  __m128i v67; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-D0h]
  unsigned int v69; // [rsp+8Ch] [rbp-CCh]
  void *src; // [rsp+90h] [rbp-C8h]
  __int128 v71; // [rsp+98h] [rbp-C0h]
  __int64 v72; // [rsp+A8h] [rbp-B0h]
  __int128 v73; // [rsp+B0h] [rbp-A8h]
  __int64 (__fastcall **v74)(); // [rsp+C0h] [rbp-98h]
  __m128i v75; // [rsp+C8h] [rbp-90h]
  unsigned __int64 v76; // [rsp+D8h] [rbp-80h]
  unsigned __int64 v77; // [rsp+118h] [rbp-40h]

  v2 = 1;
  v60 = a1;
  v59 = a2;
  v77 = __readfsqword(0x28u);
  v58 = 32;
  v64 = &v66;
  do
  {
    if ( (v2 & v59) == 0 )
      goto LABEL_24;
    v66 = &off_230758;
    v68 = 0;
    v69 = v2;
    src = nullptr;
    v72 = 0;
    v67 = 0;
    v71 = 0;
    v73 = 0;
    sub_C7FD0((__int64)v64, v2, (__int64)&off_245158);
    if ( !v68 )
      goto LABEL_10;
    v3 = _mm_loadu_si128(&v67);
    v74 = &off_230758;
    v61 = nullptr;
    v63 = v3;
    v62 = v71;
    v75 = v3;
    v65 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v69)).m128i_u64[0];
    v76 = v65;
    if ( (_QWORD)v71 )
    {
      v53 = 4 * v71;
      v61 = (void *)qalloc_or_throw();
      memcpy(v61, src, v53);
    }
    v55 = (__m128i)(unsigned __int64)v73;
    if ( !(_QWORD)v73 )
      goto LABEL_7;
    v55.m128i_i64[1] = qalloc_or_throw();
    v39 = v55.m128i_i64[1];
    v54 = 0;
    while ( 2 )
    {
      v40 = (_QWORD *)(v72 + v39 - v55.m128i_i64[1]);
      *(_OWORD *)(v39 + 8) = 0;
      *(_QWORD *)v39 = 0;
      v41 = v40[1];
      v42 = v40;
      if ( !v41 )
        goto LABEL_31;
      v43 = qalloc_or_throw();
      *(_QWORD *)v39 = v43;
      v44 = v43;
      v45 = 0;
      *(_QWORD *)(v39 + 16) = v41;
      while ( 1 )
      {
        v46 = 32 * v45 + v44;
        v47 = *v42 + 32 * v45;
        *(_QWORD *)v46 = 0;
        *(_OWORD *)(v46 + 8) = 0;
        v48 = *(_QWORD *)(v47 + 8);
        if ( v48 )
          break;
        ++v45;
        *(_DWORD *)(v46 + 24) = *(_DWORD *)(v47 + 24);
        if ( v41 == v45 )
          goto LABEL_38;
LABEL_35:
        v44 = *(_QWORD *)v39;
      }
      v57 = (const void **)v47;
      n = v48;
      v49 = (void *)qalloc_or_throw();
      v50 = n;
      v51 = v57;
      *(_QWORD *)v46 = v49;
      ++v45;
      *(_QWORD *)(v46 + 16) = v50;
      memcpy(v49, *v51, v50);
      v52 = v57;
      *(_QWORD *)(v46 + 8) = n;
      *(_DWORD *)(v46 + 24) = *((_DWORD *)v52 + 6);
      if ( v41 != v45 )
        goto LABEL_35;
LABEL_38:
      *(_QWORD *)(v39 + 8) = v41;
LABEL_31:
      ++v54;
      v39 += 24;
      if ( v55.m128i_i64[0] != v54 )
        continue;
      break;
    }
LABEL_7:
    v4 = v60[1];
    v5 = v60[2];
    if ( v5 < v4 + 1 )
    {
      v23 = v60;
      v6 = qvector_reserve();
      v24 = v23[1];
      v25 = v23[2];
      v23[2] = v5;
      v26 = *v23;
      v27 = v24 - 1;
      if ( v24 - 1 >= 0 )
      {
        v28 = (__m128i *)v6;
        do
        {
          v29 = _mm_loadu_si128((const __m128i *)(v26 + 8));
          v30 = v26;
          v28->m128i_i64[0] = (__int64)&off_230758;
          v31 = *(_QWORD *)(v26 + 24);
          v28 += 5;
          v26 += 80;
          *(__m128i *)((char *)v28 - 72) = v29;
          v28[-4].m128i_i64[1] = v31;
          v32 = *(_QWORD *)(v26 - 48);
          v33 = _mm_loadu_si128((const __m128i *)(v26 - 40));
          *(_QWORD *)(v26 - 48) = 0;
          v28[-3].m128i_i64[0] = v32;
          *(__m128i *)((char *)v28 - 40) = v33;
          v34 = *(_QWORD *)(v26 - 24);
          v35 = _mm_loadu_si128((const __m128i *)(v26 - 16));
          *(_OWORD *)(v26 - 40) = 0;
          v28[-2].m128i_i64[1] = v34;
          v28[-1] = v35;
          v36 = *(void (__fastcall ***)(__int64, _QWORD))(v26 - 80);
          *(_QWORD *)(v26 - 24) = 0;
          *(_OWORD *)(v26 - 16) = 0;
          (*v36)(v30, 0);
        }
        while ( v27-- != 0 );
      }
      qfree();
      v38 = v60;
      *v60 = v6;
      v38[2] = v25;
      v4 = v38[1];
    }
    else
    {
      v6 = *v60;
    }
    v7 = _mm_loadl_epi64((const __m128i *)&v62);
    v8 = _mm_load_si128(&v63);
    v9 = v6 + 80 * v4;
    *(_QWORD *)v9 = &off_230758;
    v10 = v65;
    *(__m128i *)(v9 + 40) = _mm_unpacklo_epi64(v7, v7);
    v11 = _mm_loadl_epi64(&v55);
    *(_QWORD *)(v9 + 24) = v10;
    v12 = v61;
    *(__m128i *)(v9 + 8) = v8;
    *(_QWORD *)(v9 + 32) = v12;
    v13 = v55.m128i_i64[1];
    *(__m128i *)(v9 + 64) = _mm_unpacklo_epi64(v11, v11);
    *(_QWORD *)(v9 + 56) = v13;
    ++v60[1];
LABEL_10:
    v14 = v72;
    v66 = &off_230758;
    if ( v72 )
    {
      v15 = v73;
      if ( (_QWORD)v73 )
      {
        v16 = 0;
        do
        {
          v17 = (__int64 *)(v14 + 24 * v16);
          v18 = *v17;
          if ( *v17 )
          {
            v19 = v17[1];
            if ( v19 )
            {
              for ( i = 0; i != v19; ++i )
              {
                v21 = (_QWORD *)(v18 + 32 * i);
                if ( *v21 )
                {
                  v21[1] = 0;
                  qfree();
                  v18 = *v17;
                }
              }
            }
            v17[1] = 0;
            qfree();
            v14 = v72;
          }
          ++v16;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    if ( src )
    {
      *(_QWORD *)&v71 = 0;
      qfree();
    }
LABEL_24:
    v2 *= 2;
    --v58;
  }
  while ( v58 );
  return v77 - __readfsqword(0x28u);
}

