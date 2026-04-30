__m128i *__fastcall sub_541310(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  __m128i *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const __m128i *v7; // r15
  __m128i *v8; // r12
  __m128i *v9; // r13
  __m128i *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  const __m128i *v22; // [rsp+10h] [rbp-48h]

  v3 = (__m128i *)operator new(0x38u);
  v7 = *(const __m128i **)(a1 + 32);
  v8 = v3 + 1;
  v3->m128i_i32[0] = 0;
  v9 = v3;
  v3[1].m128i_i32[0] = 0;
  v3[1].m128i_i64[1] = 0;
  v3[2].m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3[2].m128i_i64[1] = (__int64)v3[1].m128i_i64;
  v3[3].m128i_i64[0] = 0;
  v22 = (const __m128i *)(a1 + 16);
  if ( a2 == v7 )
  {
    v14 = v3 + 1;
    if ( a3 == a2 )
    {
      v4 = a1 + 16;
      if ( a3 == v22 )
        return v9;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  do
  {
    v10 = (__m128i *)sub_541150(&v9->m128i_i64[1], v8, (__int64)v7[2].m128i_i64, v4, v5, v6);
    v14 = v10;
    if ( v11 )
      v14 = sub_53BD60((__int64)&v9->m128i_i64[1], (__int64)v10, v11, v7 + 2, v12, v13);
    v15 = std::_Rb_tree_increment(v7);
    v7 = (const __m128i *)v15;
  }
  while ( a2 != (const __m128i *)v15 );
  if ( a3 != (const __m128i *)v15 )
  {
    do
LABEL_6:
      v7 = (const __m128i *)std::_Rb_tree_increment(v7);
    while ( a3 != v7 );
  }
  for ( ; v22 != v7; v7 = (const __m128i *)std::_Rb_tree_increment(v7) )
  {
LABEL_8:
    v16 = sub_541150(&v9->m128i_i64[1], v8, (__int64)v7[2].m128i_i64, v4, v5, v6);
    if ( v17 )
      sub_53BD60((__int64)&v9->m128i_i64[1], (__int64)v16, v17, v7 + 2, v18, v19);
  }
  if ( v8 != v14 )
    std::_Rb_tree_increment(v14);
  return v9;
}
