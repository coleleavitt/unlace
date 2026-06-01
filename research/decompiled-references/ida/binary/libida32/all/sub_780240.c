__int64 __fastcall sub_780240(_QWORD *a1, __int64 a2, char a3)
{
  char *v5; // rdx
  __int64 v6; // r13
  __int64 i; // rbp
  char *v8; // rax
  void *v9; // rdi
  const char *v10; // r15
  void *v11; // rbp
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  void *v29; // [rsp+8h] [rbp-90h]
  char *s; // [rsp+10h] [rbp-88h]
  _QWORD *v31; // [rsp+18h] [rbp-80h]
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v34; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v29 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  if ( !a3 )
  {
    v5 = (char *)a1[3];
    if ( v5 )
    {
      v6 = a1[4];
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = &v5[24 * i];
          v9 = *(void **)v8;
          if ( *(_QWORD *)v8 )
          {
            *((_QWORD *)v8 + 1) = 0;
            qfree(v9);
            v5 = (char *)a1[3];
          }
        }
      }
      a1[4] = 0;
      qfree(v5);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  if ( a2 )
  {
    s = (char *)qstrdup(a2);
    if ( !s )
    {
      v24 = 0;
      goto LABEL_26;
    }
    v10 = (const char *)qstrtok(s, ":");
    v31 = a1 + 3;
    while ( v10 )
    {
      if ( *v10 )
      {
        ptr = nullptr;
        v34 = 0;
        v16 = strlen(v10);
        v17 = v16 + 1;
        v18 = v16;
        ptr = (void *)qvector_reserve(&ptr, 0, v16 + 1, 1);
        v34.m128i_i64[0] = v17;
        memmove(ptr, v10, v18);
        *((_BYTE *)ptr + v18) = 0;
        v28 = a1[4];
        v27 = a1[3];
        v19 = a1[5];
        v20 = v28 + 1;
        if ( (unsigned __int64)&ptr < v27 || (unsigned __int64)&ptr >= v27 + 24 * v19 )
        {
          if ( v19 < v20 )
          {
            v23 = qvector_reserve(v31, v27, v28 + 1, 24);
            a1[3] = v23;
            v27 = v23;
            v28 = a1[4];
          }
          v21 = _mm_loadu_si128(&v34);
          v22 = v27 + 24 * v28;
          *(_QWORD *)v22 = ptr;
          *(__m128i *)(v22 + 8) = v21;
          ++a1[4];
        }
        else
        {
          v11 = ptr;
          v12 = _mm_loadl_epi64(&v34);
          ptr = nullptr;
          v13 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
          v34 = 0;
          if ( v19 < v20 )
          {
            v32.m128i_i64[1] = v13.m128i_i64[0];
            v32.m128i_i64[0] = v12.m128i_i64[0];
            v26 = qvector_reserve(v31, v27, v28 + 1, 24);
            a1[3] = v26;
            v27 = v26;
            v13 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
            v28 = a1[4];
            v12 = _mm_loadl_epi64(&v32);
          }
          v14 = v27 + 24 * v28;
          *(_QWORD *)v14 = v11;
          v15 = ptr;
          *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
          ++a1[4];
          if ( v15 )
          {
            v34.m128i_i64[0] = 0;
            qfree(v15);
          }
        }
      }
      v10 = (const char *)qstrtok(nullptr, ":");
    }
    qfree(s);
  }
  v24 = 1;
LABEL_26:
  qmutex_unlock(v29);
  return v24;
}

