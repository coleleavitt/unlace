__int64 __fastcall sites_chooser_t__::vfunc_14(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 **v4; // r12
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(_QWORD *); // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  bool v12; // cf
  __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  size_t v21; // rbx
  char *v22; // rbp
  char v23; // al
  bool v24; // zf
  const char *v25; // rax
  __int64 v26; // r15
  unsigned __int64 v27; // r14
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rcx
  __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 *v34; // r15
  __int64 v35; // r14
  unsigned __int64 v36; // rbx
  __int64 (__fastcall *v37)(_QWORD *); // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  void *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int64 *v48; // rax
  __m128i v49; // xmm0
  __int64 *v50; // rax
  __int64 v51; // rdi
  const void *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 *v55; // rdx
  __m128i n; // [rsp+0h] [rbp-A0h] BYREF
  __m128i v57; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v58; // [rsp+20h] [rbp-80h]
  unsigned __int64 v59; // [rsp+28h] [rbp-78h] BYREF
  __int128 v60; // [rsp+30h] [rbp-70h]
  __int64 v61; // [rsp+48h] [rbp-58h] BYREF
  __m128i v62; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+60h] [rbp-40h]

  v3 = a2[1];
  v63 = __readfsqword(0x28u);
  v4 = (__int64 **)a2;
  v60 = 0;
  v59 = 0;
  if ( v3 )
  {
    a2 = nullptr;
    v59 = qvector_reserve(&v59, 0, v3, 24);
    v34 = *v4;
    v35 = (__int64)&(*v4)[(_QWORD)v4[1]];
    if ( *v4 != (__int64 *)v35 )
    {
      n.m128i_i64[1] = (__int64)sites_chooser_t__::vfunc_5;
      do
      {
        v36 = *v34;
        v37 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL);
        if ( v37 == (__int64 (__fastcall *)(_QWORD *))n.m128i_i64[1] )
          v38 = a1[43];
        else
          v38 = v37(a1);
        if ( v36 < v38 )
        {
          v61 = 0;
          v39 = 13 * v36;
          v40 = a1[42];
          v62 = 0;
          v41 = nullptr;
          v42 = v40 + 8 * v39;
          v43 = *(_QWORD *)(v42 + 8);
          if ( v43 )
          {
            v51 = *(_QWORD *)(v42 + 8);
            v57.m128i_i64[0] = v42;
            n.m128i_i64[0] = v43;
            v41 = (void *)qalloc_or_throw(v51);
            v61 = (__int64)v41;
            v52 = *(const void **)v57.m128i_i64[0];
            v62.m128i_i64[1] = n.m128i_i64[0];
            memcpy(v41, v52, n.m128i_u64[0]);
            v62.m128i_i64[0] = n.m128i_i64[0];
          }
          v44 = v60;
          a2 = (__int64 *)v59;
          v45 = v60 + 1;
          if ( (unsigned __int64)&v61 < v59 || (unsigned __int64)&v61 >= v59 + 24LL * *((_QWORD *)&v60 + 1) )
          {
            if ( *((_QWORD *)&v60 + 1) < v45 )
            {
              v59 = qvector_reserve(&v59, v59, v60 + 1, 24);
              a2 = (__int64 *)v59;
              v44 = v60;
            }
            v49 = _mm_loadu_si128(&v62);
            v50 = &a2[3 * v44];
            *v50 = (__int64)v41;
            *(__m128i *)(v50 + 1) = v49;
          }
          else
          {
            v46 = _mm_loadl_epi64(&v62);
            v47 = _mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
            v61 = 0;
            v62 = 0;
            if ( *((_QWORD *)&v60 + 1) < v45 )
            {
              v57.m128i_i64[0] = v47.m128i_i64[0];
              n.m128i_i64[0] = v46.m128i_i64[0];
              v59 = qvector_reserve(&v59, v59, v60 + 1, 24);
              a2 = (__int64 *)v59;
              v47 = _mm_loadl_epi64(&v57);
              v44 = v60;
              v46 = _mm_loadl_epi64(&n);
            }
            v48 = &a2[3 * v44];
            *v48 = (__int64)v41;
            *(__m128i *)(v48 + 1) = _mm_unpacklo_epi64(v46, v47);
          }
          *(_QWORD *)&v60 = v60 + 1;
        }
        ++v34;
      }
      while ( (__int64 *)v35 != v34 );
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v57.m128i_i64[1] = -1;
  if ( v4[1] )
    v57.m128i_i64[1] = **v4;
  v4[1] = nullptr;
  v5 = *a1;
  n.m128i_i64[1] = (__int64)sites_chooser_t__::vfunc_5;
  v6 = *(__int64 (__fastcall **)(__int64))(v5 + 40);
  if ( v6 == sites_chooser_t__::vfunc_5 )
    v7 = a1[43];
  else
    v7 = v6((__int64)a1);
  if ( v7 )
  {
    v8 = v60;
    if ( (_QWORD)v60 )
    {
      if ( (unsigned __int64)v4[2] < (unsigned __int64)v60 )
      {
        a2 = *v4;
        *v4 = (__int64 *)qvector_reserve(v4, *v4, v60, 8);
        v8 = v60;
      }
      v58 = v59 + 24 * v8;
      if ( v59 != v58 )
      {
        v57.m128i_i64[0] = v59;
        v21 = *(_QWORD *)(v59 + 8);
        if ( v21 )
          goto LABEL_44;
LABEL_30:
        v22 = nullptr;
        v23 = 1;
        if ( !a1[43] )
          goto LABEL_42;
        while ( 1 )
        {
          v24 = v23 == 0;
          v25 = &s1;
          v26 = a1[42];
          if ( v24 )
            v25 = v22;
          v27 = 0;
          n.m128i_i64[0] = (__int64)v25;
          while ( 1 )
          {
            v29 = *(_QWORD *)(v26 + 8);
            if ( !v21 )
              break;
            a2 = (__int64 *)v22;
            v28 = &s1;
            if ( v29 )
              goto LABEL_39;
LABEL_35:
            if ( !strcmp(v28, (const char *)a2) )
              goto LABEL_46;
            ++v27;
            v26 += 104;
            if ( v27 >= a1[43] )
              goto LABEL_40;
          }
          if ( v29 )
          {
LABEL_39:
            v28 = *(const char **)v26;
            a2 = (__int64 *)n.m128i_i64[0];
            goto LABEL_35;
          }
LABEL_46:
          if ( v22 )
            qfree(v22, (const char *)a2);
          a2 = *v4;
          v30 = v4[1];
          v31 = &(*v4)[(_QWORD)v30];
          if ( *v4 == v31 )
            goto LABEL_53;
          v32 = *v4;
          while ( *v32 != v27 )
          {
            if ( v31 == ++v32 )
              goto LABEL_53;
          }
          if ( v31 == v32 )
          {
LABEL_53:
            v33 = (unsigned __int64)v30 + 1;
            if ( (unsigned __int64)v4[2] < v33 )
            {
              v54 = qvector_reserve(v4, a2, v33, 8);
              v55 = v4[1];
              *v4 = (__int64 *)v54;
              v31 = (__int64 *)(v54 + 8LL * (_QWORD)v55);
            }
            *v31 = v27;
            v4[1] = (__int64 *)((char *)v4[1] + 1);
          }
          while ( 1 )
          {
LABEL_42:
            v57.m128i_i64[0] += 24;
            if ( v58 == v57.m128i_i64[0] )
              goto LABEL_8;
            v21 = *(_QWORD *)(v57.m128i_i64[0] + 8);
            if ( !v21 )
              goto LABEL_30;
LABEL_44:
            v22 = (char *)qalloc_or_throw(v21);
            a2 = *(__int64 **)v57.m128i_i64[0];
            memcpy(v22, *(const void **)v57.m128i_i64[0], v21);
            if ( a1[43] )
              break;
LABEL_40:
            if ( v22 )
              qfree(v22, (const char *)a2);
          }
          v23 = 0;
        }
      }
    }
  }
LABEL_8:
  if ( !v4[1] && v57.m128i_i64[1] != -1 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL);
    v10 = v9 == (__int64 (__fastcall *)(_QWORD *))n.m128i_i64[1] ? a1[43] : v9(a1);
    if ( v10 )
    {
      v11 = v10 - 1;
      a2 = *v4;
      v12 = v57.m128i_i64[1] < v10;
      v13 = v4[1];
      if ( v12 )
        v11 = v57.m128i_i64[1];
      v14 = (unsigned __int64)v4[2];
      v57.m128i_i64[1] = v11;
      v61 = v11;
      if ( v14 < (unsigned __int64)v13 + 1 )
      {
        v53 = qvector_reserve(v4, a2, (char *)v13 + 1, 8);
        *v4 = (__int64 *)v53;
        a2 = (__int64 *)v53;
        v13 = v4[1];
      }
      a2[(_QWORD)v13] = v57.m128i_i64[1];
      v4[1] = (__int64 *)((char *)v4[1] + 1);
    }
  }
  v15 = v59;
  if ( v59 )
  {
    v16 = v60;
    if ( (_QWORD)v60 )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + 24 * v17);
        v19 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v19, (const char *)a2);
          v15 = v59;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v15, (const char *)a2);
  }
  return 1;
}
