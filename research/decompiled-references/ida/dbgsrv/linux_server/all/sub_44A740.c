/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A740
// Address: 0x000000000044A740

//----- (000000000044A740) ----------------------------------------------------
__int64 __fastcall sub_44A740(_QWORD *a1, char *a2, char a3)
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
  void **v14; // rax
  void *v15; // rdi
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __m128i v21; // xmm0
  void **v22; // rax
  void **v23; // rax
  unsigned int v24; // ebx
  void **v26; // rax
  void **v27; // rsi
  __int64 v28; // rax
  pthread_mutex_t *v29; // [rsp+8h] [rbp-90h]
  char *s; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  const char *v33; // [rsp+38h] [rbp-60h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v35; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v29 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
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
            j__free(v9);
            v5 = (char *)a1[3];
          }
        }
      }
      a1[4] = 0;
      j__free(v5);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  if ( a2 )
  {
    s = sub_481490(a2);
    if ( !s )
    {
      v24 = 0;
      goto LABEL_26;
    }
    v10 = sub_482120(s, ":", &v33);
    v31 = (__int64)(a1 + 3);
    while ( v10 )
    {
      if ( *v10 )
      {
        ptr = nullptr;
        v35 = 0;
        v16 = strlen(v10);
        v17 = v16 + 1;
        v18 = v16;
        ptr = sub_481540((__int64)&ptr, nullptr, v16 + 1, 1u);
        v35.m128i_i64[0] = v17;
        memmove(ptr, v10, v18);
        *((_BYTE *)ptr + v18) = 0;
        v28 = a1[4];
        v27 = (void **)a1[3];
        v19 = a1[5];
        v20 = v28 + 1;
        if ( &ptr < v27 || &ptr >= &v27[3 * v19] )
        {
          if ( v19 < v20 )
          {
            v23 = (void **)sub_481540(v31, v27, v28 + 1, 0x18u);
            a1[3] = v23;
            v27 = v23;
            v28 = a1[4];
          }
          v21 = _mm_loadu_si128(&v35);
          v22 = &v27[3 * v28];
          *v22 = ptr;
          *(__m128i *)(v22 + 1) = v21;
          ++a1[4];
        }
        else
        {
          v11 = ptr;
          v12 = _mm_loadl_epi64(&v35);
          ptr = nullptr;
          v13 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
          v35 = 0;
          if ( v19 < v20 )
          {
            v32.m128i_i64[1] = v13.m128i_i64[0];
            v32.m128i_i64[0] = v12.m128i_i64[0];
            v26 = (void **)sub_481540(v31, v27, v28 + 1, 0x18u);
            a1[3] = v26;
            v27 = v26;
            v13 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
            v28 = a1[4];
            v12 = _mm_loadl_epi64(&v32);
          }
          v14 = &v27[3 * v28];
          *v14 = v11;
          v15 = ptr;
          *(__m128i *)(v14 + 1) = _mm_unpacklo_epi64(v12, v13);
          ++a1[4];
          if ( v15 )
          {
            v35.m128i_i64[0] = 0;
            j__free(v15);
          }
        }
      }
      v10 = sub_482120(nullptr, ":", &v33);
    }
    j__free(s);
  }
  v24 = 1;
LABEL_26:
  sub_482F10(v29);
  return v24;
}
