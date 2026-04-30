void __fastcall sub_2F8810(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  signed __int64 v16; // rcx
  signed __int64 v17; // rax
  _BOOL8 v18; // r8
  const char *v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r12
  const __m128i *v25; // r15
  __int64 v26; // rax
  __m128i v27; // xmm7
  __m128i v28; // xmm0
  __int64 v29; // rdx
  void *v30; // rbx
  const __m128i *v31; // r12
  const __m128i *i; // rbp
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r14
  const __m128i *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rax
  size_t v41; // r8
  void *v42; // rax
  size_t v43; // r8
  void *v44; // rax
  size_t v45; // r8
  __int64 v46; // rcx
  const __m128i *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __m128i v52; // xmm1
  __int64 v53; // rdx
  __m128i v54; // xmm1
  __int64 v55; // rdx
  __m128i v56; // xmm1
  __int64 v57; // rdx
  __m128i v58; // xmm7
  __int64 v59; // rdx
  __m128i v60; // xmm7
  __m128i v61; // xmm7
  struct _Unwind_Exception *v62; // rbp
  __m128i v63; // [rsp+0h] [rbp-78h] BYREF
  size_t n; // [rsp+10h] [rbp-68h]
  __m128i *v65; // [rsp+18h] [rbp-60h]
  __m128i v66; // [rsp+20h] [rbp-58h] BYREF
  __int64 v67; // [rsp+30h] [rbp-48h]
  unsigned __int64 v68; // [rsp+38h] [rbp-40h]

  v9 = a1->m128i_i64[0];
  v10 = a1[1].m128i_i64[0];
  v68 = __readfsqword(0x28u);
  if ( v9 )
  {
    v12 = *(_QWORD *)(v9 + 8);
    v13 = v10;
    if ( v12 >= v10 )
      v13 = *(_QWORD *)(v9 + 8);
    v14 = a3 + v13;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v9 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 5);
    v16 = v14 - v15;
    if ( !a2 )
      v16 = v15 + v14 + v10 - v12;
    v17 = *(_QWORD *)(v9 + 8);
    if ( v16 >= v12 )
      v17 = v16;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
      v16 = v17;
  }
  else
  {
    v46 = 0;
    if ( v10 >= 0 )
      v46 = v10;
    v12 = 0;
    v16 = a3 + v46;
  }
  v18 = v16 <= v12;
  v19 = (const char *)&qword_60;
  v65 = &v66;
  v20 = QT::QArrayData::allocate(&v66, 96, 16, v16, v18, a6);
  v21 = v66.m128i_i64[0];
  if ( v66.m128i_i64[0] && v20 )
  {
    v22 = a1->m128i_i64[0];
    if ( a2 == 1 )
    {
      v19 = nullptr;
      v59 = (*(_QWORD *)(v66.m128i_i64[0] + 8) - a3 - a1[1].m128i_i64[0]) / 2;
      if ( v59 < 0 )
        v59 = 0;
      v20 += 96 * (a3 + v59);
      v23 = 0;
      if ( !v22 )
        goto LABEL_16;
    }
    else
    {
      if ( !v22 )
      {
        *(_DWORD *)(v66.m128i_i64[0] + 4) = 0;
        v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v20);
        if ( a3 > 0 )
          goto LABEL_19;
LABEL_35:
        v24 = a1[1].m128i_i64[0];
        if ( !v24 )
          goto LABEL_20;
        v24 += a3;
        goto LABEL_37;
      }
      v20 = a1->m128i_i64[1] + v20 - ((v22 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v23 = *(_DWORD *)(v22 + 4);
LABEL_16:
    *(_DWORD *)(v66.m128i_i64[0] + 4) = v23;
  }
  v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)v20);
  if ( a3 <= 0 )
    goto LABEL_35;
  if ( !v20 )
  {
    v62 = (struct _Unwind_Exception *)QT::qBadAlloc();
    v61 = _mm_load_si128(&v63);
    v67 = 0;
    v66 = v61;
    sub_2F8190((__int64)v65, v19);
    _Unwind_Resume(v62);
  }
LABEL_19:
  v24 = a1[1].m128i_i64[0];
  if ( !v24 )
  {
LABEL_20:
    v25 = (const __m128i *)a1->m128i_i64[1];
    v26 = 0;
LABEL_21:
    v27 = _mm_load_si128(&v63);
    v28 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v24;
    *a1 = v27;
    if ( a4 )
    {
      v29 = *(_QWORD *)(a4 + 16);
      v30 = *(void **)a4;
      *(_QWORD *)(a4 + 16) = v26;
      v31 = *(const __m128i **)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v28, (__m128i)(unsigned __int64)v25);
    }
    else
    {
      v29 = v26;
      v31 = v25;
      v30 = (void *)v28.m128i_i64[0];
    }
    goto LABEL_23;
  }
LABEL_37:
  v36 = 6 * v24;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v25 = (const __m128i *)a1->m128i_i64[1];
    v37 = &v25[v36];
    if ( v37 == v25 )
    {
      v26 = a1[1].m128i_i64[0];
      v24 = 0;
    }
    else
    {
      v24 = 0;
      if ( v25 < v37 )
      {
        do
        {
          v39 = v25->m128i_i64[0];
          *(_QWORD *)(v20 + 8) = 0;
          *(_OWORD *)(v20 + 16) = 0;
          *(_QWORD *)v20 = v39;
          if ( v25[1].m128i_i64[0] )
          {
            n = v25[1].m128i_u64[0];
            v40 = (void *)qalloc_or_throw(n);
            v41 = n;
            *(_QWORD *)(v20 + 8) = v40;
            *(_QWORD *)(v20 + 24) = v41;
            v19 = (const char *)v25->m128i_i64[1];
            memcpy(v40, v19, v41);
            *(_QWORD *)(v20 + 16) = n;
          }
          *(_QWORD *)(v20 + 32) = 0;
          *(_OWORD *)(v20 + 40) = 0;
          if ( v25[2].m128i_i64[1] )
          {
            n = v25[2].m128i_u64[1];
            v44 = (void *)qalloc_or_throw(n);
            v45 = n;
            *(_QWORD *)(v20 + 32) = v44;
            *(_QWORD *)(v20 + 48) = v45;
            v19 = (const char *)v25[2].m128i_i64[0];
            memcpy(v44, v19, v45);
            *(_QWORD *)(v20 + 40) = n;
          }
          *(_QWORD *)(v20 + 56) = 0;
          *(_OWORD *)(v20 + 64) = 0;
          if ( v25[4].m128i_i64[0] )
          {
            n = v25[4].m128i_u64[0];
            v42 = (void *)qalloc_or_throw(n);
            v43 = n;
            *(_QWORD *)(v20 + 56) = v42;
            *(_QWORD *)(v20 + 72) = v43;
            v19 = (const char *)v25[3].m128i_i64[1];
            memcpy(v42, v19, v43);
            *(_QWORD *)(v20 + 64) = n;
          }
          v38 = v25[5].m128i_i64[0];
          v25 += 6;
          ++v24;
          v20 += 96LL;
          *(_QWORD *)(v20 - 16) = v38;
          *(_DWORD *)(v20 - 8) = v25[-1].m128i_i32[2];
          *(_DWORD *)(v20 - 4) = v25[-1].m128i_i32[3];
        }
        while ( v25 < v37 );
        v25 = (const __m128i *)a1->m128i_i64[1];
      }
      v26 = a1[1].m128i_i64[0];
    }
    goto LABEL_21;
  }
  v31 = (const __m128i *)a1->m128i_i64[1];
  if ( v36 * 16 && (v47 = &v31[v36], v31 < v47) )
  {
    v48 = 1;
    do
    {
      v49 = v31->m128i_i64[0];
      v31 += 6;
      v50 = v48;
      v20 += 96LL;
      ++v48;
      *(_QWORD *)(v20 - 96) = v49;
      v51 = v31[-6].m128i_i64[1];
      v31[-6].m128i_i64[1] = 0;
      v52 = _mm_loadu_si128(v31 - 5);
      *(_QWORD *)(v20 - 88) = v51;
      *(__m128i *)(v20 - 80) = v52;
      v53 = v31[-4].m128i_i64[0];
      v54 = _mm_loadu_si128((const __m128i *)((char *)v31 - 56));
      v31[-5] = 0;
      *(_QWORD *)(v20 - 64) = v53;
      *(__m128i *)(v20 - 56) = v54;
      v55 = v31[-3].m128i_i64[1];
      v56 = _mm_loadu_si128(v31 - 2);
      v31[-4].m128i_i64[0] = 0;
      *(const __m128i *)((char *)&v31[-4] + 8) = 0;
      *(_QWORD *)(v20 - 40) = v55;
      *(__m128i *)(v20 - 32) = v56;
      v57 = v31[-1].m128i_i64[0];
      v31[-3].m128i_i64[1] = 0;
      v31[-2] = 0;
      *(_QWORD *)(v20 - 16) = v57;
      *(_DWORD *)(v20 - 8) = v31[-1].m128i_i32[2];
      *(_DWORD *)(v20 - 4) = v31[-1].m128i_i32[3];
    }
    while ( v31 < v47 );
    v58 = _mm_load_si128(&v63);
    v31 = (const __m128i *)a1->m128i_i64[1];
    v29 = a1[1].m128i_i64[0];
    v30 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = v50;
    *a1 = v58;
  }
  else
  {
    v60 = _mm_load_si128(&v63);
    v30 = (void *)a1->m128i_i64[0];
    v29 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v60;
  }
LABEL_23:
  if ( v30 && !_InterlockedSub((volatile signed __int32 *)v30, 1u) )
  {
    for ( i = &v31[6 * v29]; i != v31; v31 += 6 )
    {
      v33 = v31[3].m128i_i64[1];
      if ( v33 )
      {
        v31[4].m128i_i64[0] = 0;
        qfree(v33, v19);
      }
      v34 = v31[2].m128i_i64[0];
      if ( v34 )
      {
        v31[2].m128i_i64[1] = 0;
        qfree(v34, v19);
      }
      v35 = v31->m128i_i64[1];
      if ( v35 )
      {
        v31[1].m128i_i64[0] = 0;
        qfree(v35, v19);
      }
    }
    free(v30);
  }
}
