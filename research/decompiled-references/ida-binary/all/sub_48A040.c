unsigned __int64 __fastcall sub_48A040(__int64 *a1, const char **a2)
{
  const char *v3; // rsi
  const char *v4; // rdx
  const char *v5; // rax
  __int64 v6; // rdi
  const char *v7; // rcx
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = nullptr;
  v4 = (const char *)a1[1];
  v16 = __readfsqword(0x28u);
  v5 = nullptr;
  v15 = 0;
  v14 = 0;
  if ( v4 )
  {
    v14 = qvector_reserve(&v14, 0, v4, 16);
    v3 = (const char *)v14;
    v9 = *a1;
    v4 = (const char *)v15;
    v10 = *a1 + 40 * a1[1];
    if ( v10 != *a1 )
    {
      do
      {
        v11 = _mm_loadl_epi64((const __m128i *)(v9 + 24));
        v12 = _mm_loadl_epi64((const __m128i *)(v9 + 32));
        if ( *((_QWORD *)&v15 + 1) < (unsigned __int64)(v4 + 1) )
        {
          v13.m128i_i64[1] = v12.m128i_i64[0];
          v13.m128i_i64[0] = v11.m128i_i64[0];
          v14 = qvector_reserve(&v14, v3, v4 + 1, 16);
          v4 = (const char *)v15;
          v3 = (const char *)v14;
          v12 = _mm_loadl_epi64((const __m128i *)&v13.m128i_u64[1]);
          v11 = _mm_loadl_epi64(&v13);
        }
        v9 += 40;
        *(__m128i *)&v3[16 * (_QWORD)v4] = _mm_unpacklo_epi64(v11, v12);
        v3 = (const char *)v14;
        v4 = (const char *)(v15 + 1);
        *(_QWORD *)&v15 = v15 + 1;
      }
      while ( v9 != v10 );
    }
    v5 = *((const char **)&v15 + 1);
  }
  v6 = (__int64)*a2;
  v7 = a2[2];
  *a2 = v3;
  a2[1] = v4;
  a2[2] = v5;
  v14 = v6;
  *((_QWORD *)&v15 + 1) = v7;
  if ( v6 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v6, v3);
  }
  return v16 - __readfsqword(0x28u);
}
