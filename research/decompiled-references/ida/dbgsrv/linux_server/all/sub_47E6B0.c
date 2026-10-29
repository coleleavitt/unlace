/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E6B0
// Address: 0x000000000047E6B0

//----- (000000000047E6B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_47E6B0(char **a1, char *a2)
{
  const char *i; // rbx
  void *v4; // rbx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  char *v7; // rax
  void *v8; // rdi
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  char *v15; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rsi
  char *v20; // rax
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  const char *v22; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a2 )
    {
      for ( i = sub_482120(a2, ":", &v22); i; i = sub_482120(nullptr, ":", &v22) )
      {
        if ( *i )
        {
          ptr = nullptr;
          v24 = 0;
          v9 = strlen(i);
          v10 = v9 + 1;
          v11 = v9;
          ptr = sub_481540((__int64)&ptr, nullptr, v9 + 1, 1u);
          v24.m128i_i64[0] = v10;
          memmove(ptr, i, v11);
          *((_BYTE *)ptr + v11) = 0;
          v20 = a1[1];
          v19 = *a1;
          v12 = (unsigned __int64)a1[2];
          v13 = (unsigned __int64)(v20 + 1);
          if ( &ptr < (void **)*a1 || &ptr >= (void **)&v19[24 * v12] )
          {
            if ( v12 < v13 )
            {
              v17 = (char *)sub_481540((__int64)a1, v19, (unsigned __int64)(v20 + 1), 0x18u);
              *a1 = v17;
              v19 = v17;
              v20 = a1[1];
            }
            v14 = _mm_loadu_si128(&v24);
            v15 = &v19[24 * (_QWORD)v20];
            *(_QWORD *)v15 = ptr;
            *(__m128i *)(v15 + 8) = v14;
            ++a1[1];
          }
          else
          {
            v4 = ptr;
            v5 = _mm_loadl_epi64(&v24);
            ptr = nullptr;
            v6 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
            v24 = 0;
            if ( v12 < v13 )
            {
              v21.m128i_i64[1] = v6.m128i_i64[0];
              v21.m128i_i64[0] = v5.m128i_i64[0];
              v18 = (char *)sub_481540((__int64)a1, v19, (unsigned __int64)(v20 + 1), 0x18u);
              *a1 = v18;
              v19 = v18;
              v20 = a1[1];
              v6 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
              v5 = _mm_loadl_epi64(&v21);
            }
            v7 = &v19[24 * (_QWORD)v20];
            *(_QWORD *)v7 = v4;
            v8 = ptr;
            *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v5, v6);
            ++a1[1];
            if ( v8 )
            {
              v24.m128i_i64[0] = 0;
              j__free(v8);
            }
          }
        }
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}
