unsigned __int64 __fastcall sub_433820(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _QWORD *v5; // r12
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  const char *v13; // rax
  __int64 v14; // rax
  void *v15; // rbx
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r14
  __m128i v19; // xmm0
  void *v20; // rdi
  char *v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rax
  void *v25; // rdi
  void *v27; // rax
  __int64 *v28; // r12
  __int64 *v29; // r14
  __int64 v30; // rdx
  char *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // rbp
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  size_t v37; // rax
  char *v38; // rbp
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+18h] [rbp-90h]
  void **p_ptr; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+28h] [rbp-80h]
  void *v44; // [rsp+30h] [rbp-78h] BYREF
  __int128 v45; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __m128i v47; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v43 = a2;
  v40.m128i_i64[0] = a3;
  v41 = a4;
  v48 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1672LL) + 609LL) )
    return v48 - __readfsqword(0x28u);
  v4 = a1[8];
  v44 = nullptr;
  v45 = 0;
  if ( v4 )
  {
    v27 = (void *)qvector_reserve(&v44, 0, v4, 24);
    v5 = (_QWORD *)a1[7];
    v4 = v45;
    v44 = v27;
    v6 = (__int64 *)v27;
    if ( !v5 )
    {
LABEL_23:
      ptr = nullptr;
      v28 = &v6[3 * v4];
      v47 = 0;
      if ( v28 == v6 )
      {
        p_ptr = &ptr;
      }
      else
      {
        v29 = v6;
        v30 = 0;
        v31 = nullptr;
        p_ptr = &ptr;
        while ( 1 )
        {
          v32 = 8 * v29[1];
          v33 = v32 >> 3;
          if ( v32 >> 3 )
          {
            v34 = 8 * v30;
            v35 = *v29;
            v36 = v33 + v30;
            v37 = 0;
            if ( v47.m128i_i64[1] < v36 )
            {
              ptr = (void *)qvector_reserve(p_ptr, v31, v36, 8);
              v31 = (char *)ptr;
              v37 = 8 * v47.m128i_i64[0] - v34;
            }
            v38 = &v31[v34];
            memmove(&v38[v32], v38, v37);
            v39 = 0;
            if ( v32 )
            {
              do
              {
                *(_QWORD *)&v38[v39] = *(_QWORD *)(v35 + v39);
                v39 += 8;
              }
              while ( v32 != v39 );
            }
            v47.m128i_i64[0] += v33;
          }
          v29 += 3;
          if ( v28 == v29 )
            break;
          v31 = (char *)ptr;
          v30 = v47.m128i_i64[0];
        }
      }
      goto LABEL_9;
    }
    do
    {
LABEL_6:
      if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v4 + 1) )
      {
        v44 = (void *)qvector_reserve(&v44, v6, v4 + 1, 24);
        v4 = v45;
        v6 = (__int64 *)v44;
      }
      v7 = 3 * v4;
      v8 = v41;
      v9 = v40.m128i_i64[0];
      v10 = (char *)&v6[v7];
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      v11 = v5[2];
      *(_QWORD *)&v45 = v45 + 1;
      sub_440EA0(v11, v10, v9, v8);
      v5 = (_QWORD *)*v5;
      v6 = (__int64 *)v44;
      v4 = v45;
    }
    while ( v5 );
    goto LABEL_23;
  }
  v5 = (_QWORD *)a1[7];
  v6 = nullptr;
  if ( v5 )
    goto LABEL_6;
  v47 = 0;
  ptr = nullptr;
  p_ptr = &ptr;
LABEL_9:
  v12 = *(_QWORD *)(v40.m128i_i64[0] + 8);
  v13 = haystack;
  if ( v12 )
  {
    v13 = *(const char **)v40.m128i_i64[0];
    --v12;
  }
  sub_43BE20(p_ptr, v12, v13, *(int *)(v41 + 8));
  v14 = v43;
  v15 = ptr;
  ptr = nullptr;
  v16 = _mm_loadu_si128(&v47);
  v47 = 0;
  v17 = *(void **)v43;
  if ( *(_QWORD *)v43 )
  {
    v18 = v43;
    v40 = v16;
    *(_QWORD *)(v43 + 8) = 0;
    qfree(v17);
    v19 = _mm_load_si128(&v40);
    v20 = ptr;
    *(_QWORD *)v18 = v15;
    *(__m128i *)(v18 + 8) = v19;
    if ( v20 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  else
  {
    *(_QWORD *)v43 = v15;
    *(__m128i *)(v14 + 8) = v16;
  }
  v21 = (char *)v44;
  if ( v44 )
  {
    v22 = v45;
    if ( (_QWORD)v45 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[24 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = (char *)v44;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v21);
  }
  return v48 - __readfsqword(0x28u);
}
