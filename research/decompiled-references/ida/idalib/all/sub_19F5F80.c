void __fastcall sub_19F5F80(__m128i *a1, __m128i *a2)
{
  __m128i *v2; // rbx
  __m128i *v5; // rax
  unsigned __int8 v6; // di
  bool v7; // zf
  unsigned __int32 v8; // esi
  unsigned __int32 v9; // r9d
  unsigned __int32 v10; // ecx
  unsigned __int32 v11; // edi
  unsigned __int32 v12; // r8d
  unsigned __int32 v13; // edx
  __m128i *v14; // rsi
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __m128i v22; // xmm3
  __int32 v23; // eax
  __m128i v24; // [rsp+0h] [rbp-38h] BYREF
  __m128i v25; // [rsp+10h] [rbp-28h]

  if ( a1 != a2 )
  {
    v2 = a1 + 2;
    if ( a2 != &a1[2] )
    {
      do
      {
        v5 = v2;
        v6 = a1->m128i_u8[8];
        v7 = v2->m128i_i8[8] == v6;
        if ( (unsigned int)v2->m128i_i8[8] < v6
          || (v8 = v2->m128i_i32[0],
              v9 = v2->m128i_u32[1],
              v10 = v2->m128i_u32[3],
              v11 = a1->m128i_i32[0],
              v12 = a1->m128i_u32[1],
              v13 = a1->m128i_u32[3],
              v7)
          && (v10 < v13
           || v10 == v13
           && (v11 > v8
            || v11 == v8 && (v9 < v12 || v9 == v12 && v2[1].m128i_i32[0] < (unsigned __int32)a1[1].m128i_i32[0]))) )
        {
          v15 = _mm_loadu_si128(v2);
          v16 = _mm_loadu_si128(v2 + 1);
          v14 = v2 + 2;
          v17 = v2[1].m128i_i64[1];
          v18 = (char *)v2 - (char *)a1;
          v24 = v15;
          v25 = v16;
          v19 = v18 >> 5;
          if ( v18 > 0 )
          {
            do
            {
              v5 -= 2;
              v20 = _mm_loadu_si128(v5);
              v5[3].m128i_i32[0] = v5[1].m128i_i32[0];
              v21 = v5[1].m128i_i64[1];
              v5[2] = v20;
              v5[3].m128i_i64[1] = v21;
              --v19;
            }
            while ( v19 );
          }
          v22 = _mm_load_si128(&v24);
          v23 = v25.m128i_i32[0];
          a1[1].m128i_i64[1] = v17;
          *a1 = v22;
          a1[1].m128i_i32[0] = v23;
        }
        else
        {
          sub_19F5ED0(v2);
          v14 = v2 + 2;
        }
        v2 = v14;
      }
      while ( a2 != v14 );
    }
  }
}
