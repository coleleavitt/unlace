__m128i *__fastcall sub_2106F00(__int64 a1, __m128i *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rdx
  __m128i *v5; // r13
  __m128i *v6; // rbx
  __int64 v7; // rdx
  __m128i v8; // xmm1
  __int32 v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdi
  __m128 v16; // xmm0
  bool v17; // al
  __m128i *v18; // rdi
  __m128i *v19; // [rsp+8h] [rbp-80h] BYREF
  __int64 v20; // [rsp+10h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  _QWORD v22[4]; // [rsp+20h] [rbp-68h] BYREF
  __m128 v23; // [rsp+40h] [rbp-48h] BYREF
  __m128i *v24; // [rsp+50h] [rbp-38h]

  v3 = (__m128i *)operator new(0x60u);
  v4 = (__m128i *)a2->m128i_i64[0];
  v5 = v3 + 3;
  v6 = v3;
  v3[2].m128i_i64[0] = (__int64)v3[3].m128i_i64;
  if ( v4 == &a2[1] )
  {
    v3[3] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v3[2].m128i_i64[0] = (__int64)v4;
    v3[3].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v7 = a2->m128i_i64[1];
  v8 = _mm_loadu_si128(a2 + 2);
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  a2->m128i_i64[1] = 0;
  v9 = a2[3].m128i_i32[0];
  a2[1].m128i_i8[0] = 0;
  v6[2].m128i_i64[1] = v7;
  v6[4] = v8;
  v6[5].m128i_i32[0] = v9;
  v6[5].m128i_i64[1] = 0;
  v10 = sub_2106C90(a1, (__int64)v6[2].m128i_i64);
  v12 = v10;
  if ( v11 )
  {
    v13 = a1 + 8;
    v14 = 1;
    if ( !v10 && v11 != v13 )
    {
      v21 = a1 + 8;
      v22[2] = v11 + 32;
      v19 = v6 + 4;
      v22[0] = v11 + 80;
      v22[1] = v11 + 64;
      v16 = _mm_loadh_ps((const double *)&v19);
      v20 = v11;
      v23 = v16;
      v24 = v6 + 2;
      v17 = sub_2103520((__int64)&v23, (__int64)v22);
      v13 = v21;
      v11 = v20;
      v14 = v17;
    }
    std::_Rb_tree_insert_and_rebalance(v14, v6, v11, v13);
    ++*(_QWORD *)(a1 + 40);
    return v6;
  }
  else
  {
    v18 = (__m128i *)v6[2].m128i_i64[0];
    if ( v5 != v18 )
      operator delete(v18);
    operator delete(v6);
    return (__m128i *)v12;
  }
}
