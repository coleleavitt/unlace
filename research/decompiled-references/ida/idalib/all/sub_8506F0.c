__int64 __fastcall sub_8506F0(_BYTE *a1, const char *a2, unsigned __int64 a3, const char *a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r12
  char *v8; // rbx
  char v9; // bp
  const char *v10; // r9
  size_t v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  void *v14; // r14
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  char *v17; // rax
  void *v18; // rdi
  __m128i v20; // xmm0
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // [rsp+Fh] [rbp-69h]
  __m128i v25; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v24 = a1[12] ^ 1;
  if ( v24 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 5720LL);
    v6 = *(_QWORD *)(v5 + 24);
    v7 = v5 + 8;
    if ( v7 != v6 )
    {
      v8 = (char *)a2;
      v9 = a3;
      while ( 1 )
      {
        if ( *(_QWORD *)(v6 + 40) )
        {
          v10 = *(const char **)(v6 + 32);
          if ( v9 != (*v10 == 1) )
            goto LABEL_5;
          if ( v9 )
          {
            ptr = nullptr;
            ++v10;
            v27 = 0;
LABEL_10:
            v25.m128i_i64[1] = (__int64)v10;
            v11 = strlen(v10);
            v25.m128i_i64[0] = v11 + 1;
            ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
            v27.m128i_i64[0] = v25.m128i_i64[0];
            memmove(ptr, (const void *)v25.m128i_i64[1], v11);
            *((_BYTE *)ptr + v11) = 0;
            goto LABEL_11;
          }
        }
        else
        {
          v10 = haystack;
          if ( v9 )
            goto LABEL_5;
        }
        ptr = nullptr;
        v27 = 0;
        if ( v10 )
          goto LABEL_10;
LABEL_11:
        v12 = *((_QWORD *)v8 + 1);
        a2 = *(const char **)v8;
        a3 = *((_QWORD *)v8 + 2);
        v13 = v12 + 1;
        if ( (unsigned __int64)&ptr < *(_QWORD *)v8 || (a4 = &a2[24 * a3], &ptr >= (void **)a4) )
        {
          if ( a3 < v13 )
          {
            v22 = qvector_reserve(v8, a2, v12 + 1, 24);
            *(_QWORD *)v8 = v22;
            a2 = (const char *)v22;
            v12 = *((_QWORD *)v8 + 1);
          }
          a3 = (unsigned __int64)ptr;
          v20 = _mm_loadu_si128(&v27);
          v21 = (char *)&a2[24 * v12];
          *(_QWORD *)v21 = ptr;
          *(__m128i *)(v21 + 8) = v20;
          ++*((_QWORD *)v8 + 1);
          goto LABEL_5;
        }
        v14 = ptr;
        v15 = _mm_loadl_epi64(&v27);
        ptr = nullptr;
        v16 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
        v27 = 0;
        if ( a3 < v13 )
        {
          v25.m128i_i64[1] = v16.m128i_i64[0];
          v25.m128i_i64[0] = v15.m128i_i64[0];
          v23 = qvector_reserve(v8, a2, v12 + 1, 24);
          *(_QWORD *)v8 = v23;
          a2 = (const char *)v23;
          v16 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
          v12 = *((_QWORD *)v8 + 1);
          v15 = _mm_loadl_epi64(&v25);
        }
        v17 = (char *)&a2[24 * v12];
        *(_QWORD *)v17 = v14;
        v18 = ptr;
        *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
        ++*((_QWORD *)v8 + 1);
        if ( v18 )
        {
          v27.m128i_i64[0] = 0;
          qfree(v18);
          v6 = std::_Rb_tree_increment(v6, a2);
          if ( v7 == v6 )
            return v24;
        }
        else
        {
LABEL_5:
          v6 = std::_Rb_tree_increment(v6, a2, a3, a4, a5, v10);
          if ( v7 == v6 )
            return v24;
        }
      }
    }
  }
  return v24;
}
