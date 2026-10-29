__int64 __fastcall users_chooser_t__::vfunc_14(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 **v4; // r12
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(_QWORD *); // rax
  unsigned __int64 v10; // rax
  void *v11; // rdx
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
  __int64 v26; // r13
  unsigned __int64 v27; // r15
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 *v31; // rcx
  __int64 *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 *v34; // r15
  __int64 v35; // rbp
  unsigned __int64 v36; // rbx
  __int64 (__fastcall *v37)(_QWORD *); // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rcx
  size_t v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rdi
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int64 *v48; // rax
  __m128i v49; // xmm0
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rdx
  __m128i v55; // [rsp+0h] [rbp-A0h] BYREF
  unsigned __int64 *v56; // [rsp+10h] [rbp-90h]
  __m128i v57; // [rsp+18h] [rbp-88h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-78h] BYREF
  __int128 v59; // [rsp+30h] [rbp-70h]
  void *v60; // [rsp+48h] [rbp-58h] BYREF
  __m128i v61; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-40h]

  v3 = a2[1];
  v62 = __readfsqword(0x28u);
  v4 = (__int64 **)a2;
  v59 = 0;
  v58 = 0;
  if ( v3 )
  {
    a2 = nullptr;
    v56 = &v58;
    v58 = qvector_reserve(&v58, 0, v3, 24);
    v34 = *v4;
    v35 = (__int64)&(*v4)[(_QWORD)v4[1]];
    if ( *v4 != (__int64 *)v35 )
    {
      v55.m128i_i64[1] = (__int64)users_chooser_t__::vfunc_5;
      do
      {
        v36 = *v34;
        v37 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL);
        if ( v37 == (__int64 (__fastcall *)(_QWORD *))v55.m128i_i64[1] )
          v38 = a1[43];
        else
          v38 = v37(a1);
        if ( v36 < v38 )
        {
          v39 = a1[42];
          v60 = nullptr;
          v61 = 0;
          v40 = 17 * v36;
          v41 = 0;
          v42 = v39 + 8 * v40;
          v43 = *(_QWORD *)(v42 + 8);
          if ( v43 )
          {
            v51 = *(_QWORD *)(v42 + 8);
            v55.m128i_i64[0] = v39 + 8 * v40;
            v60 = (void *)qalloc_or_throw(v51);
            v61.m128i_i64[1] = v43;
            v41 = (__int64)v60;
            memcpy(v60, *(const void **)v55.m128i_i64[0], v43);
            v61.m128i_i64[0] = v43;
          }
          v44 = v59;
          a2 = (__int64 *)v58;
          v45 = v59 + 1;
          if ( (unsigned __int64)&v60 < v58 || (unsigned __int64)&v60 >= v58 + 24LL * *((_QWORD *)&v59 + 1) )
          {
            if ( *((_QWORD *)&v59 + 1) < v45 )
            {
              v58 = qvector_reserve(v56, v58, v59 + 1, 24);
              a2 = (__int64 *)v58;
              v44 = v59;
            }
            v49 = _mm_loadu_si128(&v61);
            v50 = &a2[3 * v44];
            *v50 = v41;
            *(__m128i *)(v50 + 1) = v49;
          }
          else
          {
            v46 = _mm_loadl_epi64(&v61);
            v47 = _mm_loadl_epi64((const __m128i *)&v61.m128i_u64[1]);
            v60 = nullptr;
            v61 = 0;
            if ( *((_QWORD *)&v59 + 1) < v45 )
            {
              v57.m128i_i64[0] = v47.m128i_i64[0];
              v55.m128i_i64[0] = v46.m128i_i64[0];
              v58 = qvector_reserve(v56, v58, v59 + 1, 24);
              a2 = (__int64 *)v58;
              v47 = _mm_loadl_epi64(&v57);
              v44 = v59;
              v46 = _mm_loadl_epi64(&v55);
            }
            v48 = &a2[3 * v44];
            *v48 = v41;
            *(__m128i *)(v48 + 1) = _mm_unpacklo_epi64(v46, v47);
          }
          *(_QWORD *)&v59 = v59 + 1;
        }
        ++v34;
      }
      while ( (__int64 *)v35 != v34 );
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  v57.m128i_i64[0] = -1;
  if ( v4[1] )
    v57.m128i_i64[0] = **v4;
  v4[1] = nullptr;
  v5 = *a1;
  v55.m128i_i64[1] = (__int64)users_chooser_t__::vfunc_5;
  v6 = *(__int64 (__fastcall **)(__int64))(v5 + 40);
  if ( v6 == users_chooser_t__::vfunc_5 )
    v7 = a1[43];
  else
    v7 = v6((__int64)a1);
  if ( v7 )
  {
    v8 = v59;
    if ( (_QWORD)v59 )
    {
      if ( (unsigned __int64)v4[2] < (unsigned __int64)v59 )
      {
        a2 = *v4;
        *v4 = (__int64 *)qvector_reserve(v4, *v4, v59, 8);
        v8 = v59;
      }
      v57.m128i_i64[1] = v58 + 24 * v8;
      if ( v58 != v57.m128i_i64[1] )
      {
        v56 = (unsigned __int64 *)v58;
        v21 = *(_QWORD *)(v58 + 8);
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
          v55.m128i_i64[0] = (__int64)v25;
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
            v26 += 136;
            if ( v27 >= a1[43] )
              goto LABEL_40;
          }
          if ( v29 )
          {
LABEL_39:
            v28 = *(const char **)v26;
            a2 = (__int64 *)v55.m128i_i64[0];
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
              v53 = qvector_reserve(v4, a2, v33, 8);
              v54 = v4[1];
              *v4 = (__int64 *)v53;
              v31 = (__int64 *)(v53 + 8LL * (_QWORD)v54);
            }
            *v31 = v27;
            v4[1] = (__int64 *)((char *)v4[1] + 1);
          }
          while ( 1 )
          {
LABEL_42:
            v56 += 3;
            if ( (unsigned __int64 *)v57.m128i_i64[1] == v56 )
              goto LABEL_8;
            v21 = v56[1];
            if ( !v21 )
              goto LABEL_30;
LABEL_44:
            v22 = (char *)qalloc_or_throw(v21);
            a2 = (__int64 *)*v56;
            memcpy(v22, (const void *)*v56, v21);
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
  if ( !v4[1] && v57.m128i_i64[0] != -1 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL);
    v10 = v9 == (__int64 (__fastcall *)(_QWORD *))v55.m128i_i64[1] ? a1[43] : v9(a1);
    if ( v10 )
    {
      v11 = (void *)(v10 - 1);
      a2 = *v4;
      v12 = v57.m128i_i64[0] < v10;
      v13 = v4[1];
      if ( v12 )
        v11 = (void *)v57.m128i_i64[0];
      v14 = (unsigned __int64)v4[2];
      v57.m128i_i64[0] = (__int64)v11;
      v60 = v11;
      if ( v14 < (unsigned __int64)v13 + 1 )
      {
        v52 = qvector_reserve(v4, a2, (char *)v13 + 1, 8);
        *v4 = (__int64 *)v52;
        a2 = (__int64 *)v52;
        v13 = v4[1];
      }
      a2[(_QWORD)v13] = v57.m128i_i64[0];
      v4[1] = (__int64 *)((char *)v4[1] + 1);
    }
  }
  v15 = v58;
  if ( v58 )
  {
    v16 = v59;
    if ( (_QWORD)v59 )
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
          v15 = v58;
        }
        ++v17;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v15, (const char *)a2);
  }
  return 1;
}
