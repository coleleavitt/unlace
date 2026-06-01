__int64 __fastcall sub_3B1450(__int64 a1, __int64 *a2, __int64 a3)
{
  char *v4; // rdi
  char *v5; // r14
  __int64 v6; // r13
  char *i; // r12
  char *v8; // rbp
  void *v9; // rdi
  void *v10; // rdi
  int v11; // eax
  int v12; // r13d
  void *v13; // r14
  __m128i v14; // xmm1
  __m128i v15; // xmm3
  unsigned __int64 v16; // r8
  void *v17; // r15
  __m128i v18; // xmm0
  __m128i v19; // xmm2
  char *v20; // rax
  void *v21; // rdi
  bool v22; // cf
  unsigned int v23; // r15d
  unsigned int v24; // r14d
  const char *v25; // rax
  char *v26; // rbp
  size_t v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  char *v30; // rax
  void *v31; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  void *v34; // rbp
  __int64 v35; // r8
  size_t v36; // rax
  size_t v37; // r15
  unsigned int v38; // ebx
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rsi
  char *v43; // rax
  void *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  char v49; // [rsp+7h] [rbp-E1h]
  __m128i v50; // [rsp+8h] [rbp-E0h] BYREF
  __m128i v51; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v52; // [rsp+28h] [rbp-C0h]
  __int64 v53; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v54; // [rsp+40h] [rbp-A8h] BYREF
  void *v55; // [rsp+50h] [rbp-98h] BYREF
  __int128 v56; // [rsp+58h] [rbp-90h]
  unsigned __int64 v57; // [rsp+70h] [rbp-78h] BYREF
  void *v58; // [rsp+78h] [rbp-70h] BYREF
  __m128i v59; // [rsp+80h] [rbp-68h] BYREF
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __m128i v61; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+A8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( a3 )
    netnode_check(&v53, a3, 0, 0);
  else
    v53 = sub_3B0A80(a1);
  v56 = 0;
  v55 = nullptr;
  if ( netnode_qgetblob(v53, &v55, 1, 0, 69) <= 0 )
  {
    v38 = 0;
  }
  else
  {
    v4 = (char *)*a2;
    if ( *a2 )
    {
      v5 = (char *)a2[1];
      if ( v5 )
      {
        v6 = 0;
        for ( i = nullptr; i != v5; ++i )
        {
          v8 = &v4[v6];
          v9 = *(void **)&v4[v6 + 32];
          if ( v9 )
          {
            *((_QWORD *)v8 + 5) = 0;
            qfree(v9);
          }
          v10 = *((void **)v8 + 1);
          if ( v10 )
          {
            *((_QWORD *)v8 + 2) = 0;
            qfree(v10);
          }
          v4 = (char *)*a2;
          v6 += 56;
        }
      }
      a2[1] = 0;
      qfree(v4);
      *a2 = 0;
      a2[2] = 0;
    }
    v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, (__m128i)(unsigned __int64)((unsigned __int64)v55 + v56));
    v11 = unpack_dd(&v54);
    v49 = 0;
    if ( v11 < 0 )
    {
      v49 = 1;
      v11 &= ~0x80000000;
    }
    v12 = v11 - 1;
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          v23 = unpack_dd(&v54);
          v24 = unpack_dd(&v54);
          v25 = (const char *)unpack_ds(&v54, v54.m128i_i64[1], 0);
          v57 = __PAIR64__(v24, v23);
          v26 = (char *)v25;
          v58 = nullptr;
          v59 = 0;
          if ( v25 )
          {
            v27 = strlen(v25);
            v50.m128i_i64[0] = v27 + 1;
            v58 = (void *)qvector_reserve(&v58, 0, v27 + 1, 1);
            v59.m128i_i64[0] = v50.m128i_i64[0];
            memmove(v58, v26, v27);
            *((_BYTE *)v58 + v27) = 0;
          }
          v61 = 0;
          ptr = nullptr;
          ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
          v61.m128i_i64[0] = 1;
          *(_BYTE *)ptr = 0;
          v43 = (char *)a2[1];
          v42 = (char *)*a2;
          v28 = a2[2];
          v29 = (unsigned __int64)(v43 + 1);
          if ( (unsigned __int64)&v57 < *a2 || &v57 >= (unsigned __int64 *)&v42[56 * v28] )
          {
            if ( v28 < v29 )
            {
              v40 = qvector_reserve(a2, v42, v43 + 1, 56);
              *a2 = v40;
              v42 = (char *)v40;
              v43 = (char *)a2[1];
            }
            v30 = &v42[56 * (_QWORD)v43];
            *(_QWORD *)v30 = v57;
            v31 = v58;
            v32 = _mm_load_si128(&v59);
            v58 = nullptr;
            *((_QWORD *)v30 + 1) = v31;
            *((__m128i *)v30 + 1) = v32;
            v33 = _mm_loadu_si128(&v61);
            v59 = 0;
            *((_QWORD *)v30 + 4) = ptr;
            *(__m128i *)(v30 + 40) = v33;
            ++a2[1];
          }
          else
          {
            v13 = v58;
            v14 = _mm_loadl_epi64(&v59);
            v58 = nullptr;
            v15 = _mm_loadl_epi64((const __m128i *)&v59.m128i_u64[1]);
            v16 = v57;
            v59 = 0;
            v17 = ptr;
            v18 = _mm_loadl_epi64(&v61);
            ptr = nullptr;
            v19 = _mm_loadl_epi64((const __m128i *)&v61.m128i_u64[1]);
            v61 = 0;
            if ( v28 < v29 )
            {
              v52 = v57;
              v51.m128i_i64[1] = v19.m128i_i64[0];
              v51.m128i_i64[0] = v18.m128i_i64[0];
              v50.m128i_i64[1] = v15.m128i_i64[0];
              v50.m128i_i64[0] = v14.m128i_i64[0];
              v41 = qvector_reserve(a2, v42, v43 + 1, 56);
              *a2 = v41;
              v42 = (char *)v41;
              v16 = v52;
              v43 = (char *)a2[1];
              v19 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
              v18 = _mm_loadl_epi64(&v51);
              v15 = _mm_loadl_epi64((const __m128i *)&v50.m128i_u64[1]);
              v14 = _mm_loadl_epi64(&v50);
            }
            v20 = &v42[56 * (_QWORD)v43];
            *(_QWORD *)v20 = v16;
            *((_QWORD *)v20 + 1) = v13;
            *((_QWORD *)v20 + 4) = v17;
            *((__m128i *)v20 + 1) = _mm_unpacklo_epi64(v14, v15);
            v21 = ptr;
            *(__m128i *)(v20 + 40) = _mm_unpacklo_epi64(v18, v19);
            ++a2[1];
            if ( v21 )
            {
              v61.m128i_i64[0] = 0;
              qfree(v21);
            }
          }
          if ( v58 )
          {
            v59.m128i_i64[0] = 0;
            qfree(v58);
          }
          qfree(v26);
          if ( v49 )
            break;
          v22 = v12-- == 0;
          if ( v22 )
            goto LABEL_36;
        }
        v34 = (void *)unpack_ds(&v54, v54.m128i_i64[1], 0);
        v35 = *a2 + 56 * a2[1] - 56;
        if ( v34
          && (v50.m128i_i64[0] = *a2 + 56 * a2[1] - 56,
              v36 = strlen((const char *)v34),
              v35 = v50.m128i_i64[0],
              (v37 = v36) != 0) )
        {
          v44 = *(void **)(v50.m128i_i64[0] + 32);
          v45 = v36 + 1;
          if ( *(_QWORD *)(v50.m128i_i64[0] + 48) < v36 + 1 )
          {
            v46 = *(_QWORD *)(v50.m128i_i64[0] + 32);
            v50.m128i_i64[1] = v50.m128i_i64[0];
            v47 = v50.m128i_i64[0] + 32;
            v50.m128i_i64[0] = v36 + 1;
            v48 = qvector_reserve(v47, v46, v45, 1);
            v35 = v50.m128i_i64[1];
            v45 = v50.m128i_i64[0];
            v44 = (void *)v48;
            *(_QWORD *)(v50.m128i_i64[1] + 32) = v48;
          }
          *(_QWORD *)(v35 + 40) = v45;
          v50.m128i_i64[0] = v35;
          memmove(v44, v34, v37);
          *(_BYTE *)(*(_QWORD *)(v50.m128i_i64[0] + 32) + v37) = 0;
        }
        else
        {
          *(_QWORD *)(v35 + 40) = 0;
        }
        qfree(v34);
        v22 = v12-- == 0;
      }
      while ( !v22 );
    }
LABEL_36:
    v38 = 1;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  return v38;
}
