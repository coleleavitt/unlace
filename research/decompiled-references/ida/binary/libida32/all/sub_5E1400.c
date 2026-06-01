unsigned __int64 __fastcall sub_5E1400(__int64 *a1, __int64 a2, char *a3)
{
  char *v5; // rdx
  char *v6; // r14
  char *i; // rbx
  char *v8; // rax
  void *v9; // rdi
  const char *j; // r15
  size_t v11; // rax
  __int64 v12; // r14
  size_t v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  void *v18; // rbx
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  char *v21; // rax
  void *v22; // rdi
  __m128i v24; // xmm0
  char *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // [rsp+8h] [rbp-80h]
  __m128i v29; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v31; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v5 = (char *)*a1;
  if ( *a1 )
  {
    v6 = (char *)a1[1];
    if ( v6 )
    {
      for ( i = nullptr; i != v6; ++i )
      {
        v8 = &v5[24 * (_QWORD)i];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)*a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v5);
    *a1 = 0;
    a1[2] = 0;
  }
  if ( a2 )
  {
    v28 = (char *)qstrdup(a2);
    if ( v28 )
    {
      for ( j = (const char *)qstrtok(v28, a3); j; j = (const char *)qstrtok(nullptr, a3) )
      {
        if ( *j )
        {
          ptr = nullptr;
          v31 = 0;
          v11 = strlen(j);
          v12 = v11 + 1;
          v13 = v11;
          ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
          v31.m128i_i64[0] = v12;
          memmove(ptr, j, v13);
          *((_BYTE *)ptr + v13) = 0;
          v14 = (char *)a1[1];
          v15 = (char *)*a1;
          v16 = a1[2];
          v17 = (unsigned __int64)(v14 + 1);
          if ( (unsigned __int64)&ptr < *a1 || &ptr >= (void **)&v15[24 * v16] )
          {
            if ( v16 < v17 )
            {
              v26 = qvector_reserve(a1, v15, v14 + 1, 24);
              *a1 = v26;
              v15 = (char *)v26;
              v14 = (char *)a1[1];
            }
            v24 = _mm_loadu_si128(&v31);
            v25 = &v15[24 * (_QWORD)v14];
            *(_QWORD *)v25 = ptr;
            *(__m128i *)(v25 + 8) = v24;
            ++a1[1];
          }
          else
          {
            v18 = ptr;
            v19 = _mm_loadl_epi64(&v31);
            ptr = nullptr;
            v20 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
            v31 = 0;
            if ( v16 < v17 )
            {
              v29.m128i_i64[1] = v20.m128i_i64[0];
              v29.m128i_i64[0] = v19.m128i_i64[0];
              v27 = qvector_reserve(a1, v15, v14 + 1, 24);
              *a1 = v27;
              v15 = (char *)v27;
              v20 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
              v14 = (char *)a1[1];
              v19 = _mm_loadl_epi64(&v29);
            }
            v21 = &v15[24 * (_QWORD)v14];
            *(_QWORD *)v21 = v18;
            v22 = ptr;
            *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v19, v20);
            ++a1[1];
            if ( v22 )
            {
              v31.m128i_i64[0] = 0;
              qfree(v22);
            }
          }
        }
      }
      qfree(v28);
    }
  }
  return v32 - __readfsqword(0x28u);
}

