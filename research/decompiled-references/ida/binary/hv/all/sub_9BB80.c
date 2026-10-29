__int64 __fastcall sub_9BB80(_BYTE *a1, char **a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r12
  const char *v8; // r9
  size_t v9; // r14
  char *v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  void *v14; // r14
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  char *v17; // rax
  void *v18; // rdi
  __m128i v20; // xmm0
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  unsigned __int8 v24; // [rsp+Fh] [rbp-69h]
  __m128i v25; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v24 = a1[12] ^ 1;
  if ( v24 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 5720LL);
    v4 = *(_QWORD *)(v3 + 24);
    v5 = v3 + 8;
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v4 + 40) )
        {
          v8 = *(const char **)(v4 + 32);
          if ( a3 != (*v8 == 1) )
            goto LABEL_5;
          if ( a3 )
          {
            ptr = nullptr;
            ++v8;
            v27 = 0;
LABEL_10:
            v25.m128i_i64[1] = (__int64)v8;
            v9 = strlen(v8);
            v25.m128i_i64[0] = v9 + 1;
            ptr = sub_96080((__int64)&ptr, nullptr, v9 + 1, 1u);
            v27.m128i_i64[0] = v25.m128i_i64[0];
            memmove(ptr, (const void *)v25.m128i_i64[1], v9);
            *((_BYTE *)ptr + v9) = 0;
            goto LABEL_11;
          }
        }
        else
        {
          v8 = haystack;
          if ( a3 )
            goto LABEL_5;
        }
        ptr = nullptr;
        v27 = 0;
        if ( v8 )
          goto LABEL_10;
LABEL_11:
        v10 = a2[1];
        v11 = *a2;
        v12 = (unsigned __int64)a2[2];
        v13 = (unsigned __int64)(v10 + 1);
        if ( &ptr < (void **)*a2 || &ptr >= (void **)&v11[24 * v12] )
        {
          if ( v12 < v13 )
          {
            v22 = (char *)sub_96080((__int64)a2, v11, (unsigned __int64)(v10 + 1), 0x18u);
            *a2 = v22;
            v11 = v22;
            v10 = a2[1];
          }
          v20 = _mm_loadu_si128(&v27);
          v21 = &v11[24 * (_QWORD)v10];
          *(_QWORD *)v21 = ptr;
          *(__m128i *)(v21 + 8) = v20;
          ++a2[1];
          goto LABEL_5;
        }
        v14 = ptr;
        v15 = _mm_loadl_epi64(&v27);
        ptr = nullptr;
        v16 = _mm_loadl_epi64((const __m128i *)&v27.m128i_u64[1]);
        v27 = 0;
        if ( v12 < v13 )
        {
          v25.m128i_i64[1] = v16.m128i_i64[0];
          v25.m128i_i64[0] = v15.m128i_i64[0];
          v23 = (char *)sub_96080((__int64)a2, v11, (unsigned __int64)(v10 + 1), 0x18u);
          *a2 = v23;
          v11 = v23;
          v16 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
          v10 = a2[1];
          v15 = _mm_loadl_epi64(&v25);
        }
        v17 = &v11[24 * (_QWORD)v10];
        *(_QWORD *)v17 = v14;
        v18 = ptr;
        *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
        ++a2[1];
        if ( v18 )
        {
          v27.m128i_i64[0] = 0;
          j__free(v18);
          v4 = std::_Rb_tree_increment();
          if ( v5 == v4 )
            return v24;
        }
        else
        {
LABEL_5:
          v4 = std::_Rb_tree_increment();
          if ( v5 == v4 )
            return v24;
        }
      }
    }
  }
  return v24;
}

