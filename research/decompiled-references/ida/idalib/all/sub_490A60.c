unsigned __int64 __fastcall sub_490A60(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // r15
  void *v9; // rcx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rax
  void *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  void *v25; // [rsp+8h] [rbp-70h]
  __m128i v26; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __m128i v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a1, a3) )
  {
    v6 = (__int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
    v7 = *v6;
    v8 = *(__int64 **)(qword_2CCB598 + 1672);
    if ( *v6 < (unsigned __int64)v6[1] )
    {
      do
      {
        v15 = sub_505D70(v8 + 203, v7);
        if ( v15 )
        {
          sub_4900E0((__int64 *)&ptr, a1, *v8, v15);
          v23 = a2[1];
          v22 = *a2;
          v16 = a2[2];
          v17 = v23 + 1;
          if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v22 + 24 * v16 )
          {
            if ( v16 < v17 )
            {
              v20 = qvector_reserve(a2, v22, v23 + 1, 24);
              *a2 = v20;
              v22 = v20;
              v23 = a2[1];
            }
            v18 = _mm_loadu_si128(&v28);
            v19 = v22 + 24 * v23;
            *(_QWORD *)v19 = ptr;
            *(__m128i *)(v19 + 8) = v18;
            ++a2[1];
          }
          else
          {
            v9 = ptr;
            v10 = _mm_loadl_epi64(&v28);
            ptr = nullptr;
            v11 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
            v28 = 0;
            v25 = v9;
            if ( v16 < v17 )
            {
              v26.m128i_i64[1] = v11.m128i_i64[0];
              v26.m128i_i64[0] = v10.m128i_i64[0];
              v21 = qvector_reserve(a2, v22, v23 + 1, 24);
              *a2 = v21;
              v22 = v21;
              v11 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
              v23 = a2[1];
              v10 = _mm_loadl_epi64(&v26);
            }
            v12 = v22 + 24 * v23;
            *(_QWORD *)v12 = v25;
            v13 = ptr;
            *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v10, v11);
            ++a2[1];
            if ( v13 )
            {
              v28.m128i_i64[0] = 0;
              qfree(v13);
            }
          }
        }
        v14 = (__int64 *)sub_505EB0(v8 + 203, v7);
        if ( !v14 )
          break;
        v7 = *v14;
      }
      while ( *v14 < (unsigned __int64)v6[1] );
    }
  }
  return v29 - __readfsqword(0x28u);
}
