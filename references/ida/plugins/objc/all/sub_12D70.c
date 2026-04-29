__int64 __fastcall sub_12D70(__int64 *a1)
{
  const char *i; // rax
  void *v2; // rbx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  unsigned __int64 v5; // rax
  void *v6; // rdi
  const char *v7; // rbx
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // r14
  unsigned __int64 v11; // rdi
  __m128i v12; // xmm0
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  const void **v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // ebx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  void *v24; // r12
  void *v25; // rdi
  __int64 *v26; // r15
  size_t v27; // rdx
  const void *v28; // rsi
  const void *v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v33; // [rsp+8h] [rbp-B8h] BYREF
  void *src; // [rsp+28h] [rbp-98h]
  __int128 v35; // [rsp+30h] [rbp-90h]
  unsigned __int64 v36; // [rsp+48h] [rbp-78h]
  __int128 v37; // [rsp+50h] [rbp-70h]
  void *v38; // [rsp+68h] [rbp-58h] BYREF
  __m128i v39; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v35 = 0;
  src = 0;
  if ( get_segm_name() > 0 )
  {
    v37 = 0;
    v36 = 0;
    for ( i = (const char *)qstrtok(); ; i = (const char *)qstrtok() )
    {
      v7 = i;
      if ( !i )
        break;
      v38 = 0;
      v39 = 0;
      v8 = strlen(i);
      v9 = v8 + 1;
      v10 = v8;
      v38 = (void *)qvector_reserve();
      v39.m128i_i64[0] = v9;
      memmove(v38, v7, v10);
      *((_BYTE *)v38 + v10) = 0;
      v23 = v37;
      v22 = v36;
      v11 = v37 + 1;
      if ( (unsigned __int64)&v38 < v36 || (unsigned __int64)&v38 >= v36 + 24LL * *((_QWORD *)&v37 + 1) )
      {
        if ( *((_QWORD *)&v37 + 1) < v11 )
        {
          v36 = qvector_reserve();
          v22 = v36;
          v23 = v37;
        }
        v12 = _mm_loadu_si128(&v39);
        v13 = v22 + 24 * v23;
        *(_QWORD *)v13 = v38;
        *(__m128i *)(v13 + 8) = v12;
        *(_QWORD *)&v37 = v37 + 1;
      }
      else
      {
        v2 = v38;
        v3 = _mm_loadl_epi64(&v39);
        v38 = 0;
        v4 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
        v39 = 0;
        if ( *((_QWORD *)&v37 + 1) < v11 )
        {
          v33.m128i_i64[1] = v4.m128i_i64[0];
          v33.m128i_i64[0] = v3.m128i_i64[0];
          v36 = qvector_reserve();
          v22 = v36;
          v4 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
          v23 = v37;
          v3 = _mm_loadl_epi64(&v33);
        }
        v5 = v22 + 24 * v23;
        *(_QWORD *)v5 = v2;
        v6 = v38;
        *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v3, v4);
        *(_QWORD *)&v37 = v37 + 1;
        if ( v6 )
        {
          v39.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
    v14 = v37;
    if ( (_QWORD)v37 )
    {
      v15 = v36;
      v16 = (const void **)(v36 + 8 * (3 * v37 - 3));
      if ( a1 == (__int64 *)v16 )
        goto LABEL_18;
      v17 = (unsigned __int64)v16[1];
      if ( v17 <= 1 )
      {
        a1[1] = 0;
LABEL_18:
        if ( !v15 )
        {
LABEL_26:
          v20 = 1;
          goto LABEL_27;
        }
LABEL_19:
        v18 = 0;
        do
        {
          v19 = (_QWORD *)(v15 + 24 * v18);
          if ( *v19 )
          {
            v19[1] = 0;
            qfree();
            v15 = v36;
          }
          ++v18;
        }
        while ( v18 != v14 );
LABEL_23:
        *(_QWORD *)&v37 = 0;
        qfree();
        goto LABEL_26;
      }
      v29 = *v16;
      v25 = (void *)*a1;
      if ( a1[2] < v17 )
      {
        v31 = qvector_reserve();
        *a1 = v31;
        v25 = (void *)v31;
      }
      v26 = a1;
      v27 = v17 - 1;
      v28 = v29;
      a1[1] = v17;
    }
    else
    {
      v17 = v35;
      if ( (unsigned __int64)v35 <= 1 )
      {
        a1[1] = 0;
        if ( !v36 )
          goto LABEL_26;
        goto LABEL_23;
      }
      v24 = src;
      v25 = (void *)*a1;
      if ( a1[2] < (unsigned __int64)v35 )
      {
        v30 = qvector_reserve();
        *a1 = v30;
        v25 = (void *)v30;
      }
      v26 = a1;
      v27 = v17 - 1;
      v28 = v24;
      a1[1] = v17;
    }
    memmove(v25, v28, v27);
    *(_BYTE *)(*v26 + v17 - 1) = 0;
    v15 = v36;
    if ( !v36 )
      goto LABEL_26;
    v14 = v37;
    if ( !(_QWORD)v37 )
      goto LABEL_23;
    goto LABEL_19;
  }
  v20 = 0;
LABEL_27:
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  return v20;
}
