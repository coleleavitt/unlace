void __fastcall sub_62A680(const __m128i *a1)
{
  __m128i *v1; // rbx
  __int64 v2; // rax
  __m128i v3; // xmm2
  __int64 v4; // r12
  __int64 v5; // r14
  int v6; // r13d
  int v7; // eax
  __m128i v8; // xmm1
  void *v9; // rdi
  __int64 v10; // rbp
  __int32 v11; // eax
  __m128i v12; // xmm0
  void *v13; // rdi
  __m128i si128; // xmm3
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF
  __m128i v16[3]; // [rsp+10h] [rbp-38h] BYREF

  v1 = (__m128i *)a1;
  v2 = a1->m128i_i64[0];
  v3 = _mm_loadu_si128(a1 + 1);
  a1[1] = 0;
  v4 = a1->m128i_i64[1];
  a1->m128i_i64[1] = 0;
  v5 = v2;
  v6 = v2;
  v7 = a1[-2].m128i_i32[0];
  v16[0] = v3;
  if ( v7 > (int)v5 )
  {
    v1 = (__m128i *)&a1[-2];
    v8 = 0;
    while ( 1 )
    {
      v9 = (void *)v1[2].m128i_i64[1];
      v10 = v1->m128i_i64[1];
      v1[2].m128i_i32[0] = v7;
      v11 = v1->m128i_i32[1];
      v12 = _mm_loadu_si128(v1 + 1);
      v1->m128i_i64[1] = 0;
      v1[1] = v8;
      v1[2].m128i_i32[1] = v11;
      if ( v9 )
      {
        v1[3].m128i_i64[0] = 0;
        v15 = v12;
        qfree(v9);
        v12 = _mm_load_si128(&v15);
        v8 = 0;
      }
      v7 = v1[-2].m128i_i32[0];
      v1[2].m128i_i64[1] = v10;
      v1[3] = v12;
      if ( v7 <= v6 )
        break;
      v1 -= 2;
    }
    v13 = (void *)v1->m128i_i64[1];
    v1->m128i_i64[0] = v5;
    if ( v13 )
    {
      v1[1].m128i_i64[0] = 0;
      qfree(v13);
    }
  }
  si128 = _mm_load_si128(v16);
  v1->m128i_i64[1] = v4;
  v1[1] = si128;
}

