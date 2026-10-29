void __fastcall sub_22B04D0(void ***a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  __m128i *v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  void **v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __m128i *v12; // rax
  const __m128i *v13; // rdx
  unsigned __int64 v14; // r15
  __m128i *v15; // rdi
  const __m128i *v16; // rsi
  __m128i *v17; // r15
  __int8 *v18; // rsi
  signed __int64 v19; // r12
  __m128i *v20; // rax
  __m128i *v21; // rax
  __int8 *v22; // r15
  signed __int64 v23; // r12
  __int64 v24; // rcx
  void **v25; // r14
  void **v26; // rbx
  __m128i *v27; // rax
  void **v28; // r14
  const __m128i *v29; // rdx
  __m128i *v30; // rax
  const __m128i *v31; // rsi
  void *src; // [rsp+8h] [rbp-50h] BYREF
  __m128i *v33; // [rsp+10h] [rbp-48h]
  unsigned __int64 v34; // [rsp+18h] [rbp-40h]

  v3 = 32 * a3;
  v4 = a2 + 32 * a3;
  if ( a2 == v4 )
    return;
  v5 = (__m128i *)a1[1];
  v6 = a2;
  v7 = v3 >> 5;
  if ( v3 >> 5 <= (unsigned __int64)(((char *)a1[2] - (char *)v5) >> 5) )
  {
    while ( 1 )
    {
      v21 = v5 + 1;
      v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
      v22 = *(__int8 **)v6;
      v23 = *(_QWORD *)(v6 + 8);
      if ( v23 + *(_QWORD *)v6 && !v22 )
LABEL_60:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v23 > 0xF )
        break;
      if ( v23 == 1 )
      {
        v5[1].m128i_i8[0] = *v22;
      }
      else if ( v23 )
      {
        goto LABEL_41;
      }
LABEL_23:
      v6 += 32;
      v5->m128i_i64[1] = v23;
      v5 += 2;
      v21->m128i_i8[v23] = 0;
      if ( v4 == v6 )
      {
        a1[1] = (void **)((char *)a1[1] + v3);
        return;
      }
    }
    if ( v23 < 0 )
LABEL_61:
      std::__throw_length_error("basic_string::_M_create");
    src = (void *)v3;
    v21 = (__m128i *)operator new(v23 + 1);
    v5[1].m128i_i64[0] = v23;
    v3 = (__int64)src;
    v5->m128i_i64[0] = (__int64)v21;
LABEL_41:
    src = (void *)v3;
    memcpy(v21, v22, v23);
    v21 = (__m128i *)v5->m128i_i64[0];
    v3 = (__int64)src;
    goto LABEL_23;
  }
  v9 = *a1;
  v10 = ((char *)v5 - (char *)*a1) >> 5;
  if ( v7 > 0x7FFFFFFFFFFFFFFLL - v10 )
    std::__throw_length_error("vector::_M_range_insert");
  if ( v7 < v10 )
    v7 = ((char *)v5 - (char *)v9) >> 5;
  v11 = v10 + v7;
  v34 = v10 + v7;
  if ( __CFADD__(v10, v7) || v11 > 0x7FFFFFFFFFFFFFFLL )
  {
    v34 = -32;
  }
  else
  {
    v33 = nullptr;
    if ( !v11 )
      goto LABEL_9;
    v34 *= 32LL;
  }
  v27 = (__m128i *)operator new(v34);
  v9 = *a1;
  v33 = v27;
LABEL_9:
  if ( v5 == (__m128i *)v9 )
  {
    v17 = v33;
    goto LABEL_16;
  }
  v12 = v33;
  v13 = (const __m128i *)(v9 + 2);
  v14 = ((unsigned __int64)((char *)&v5[-2] - (char *)v9) >> 5) + 1;
  v15 = &v33[2 * v14];
  do
  {
    while ( 1 )
    {
      v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
      v16 = (const __m128i *)v13[-1].m128i_i64[0];
      if ( v16 == v13 )
        break;
      v12->m128i_i64[0] = (__int64)v16;
      v12 += 2;
      v12[-1].m128i_i64[0] = v13->m128i_i64[0];
      v12[-2].m128i_i64[1] = v13[-1].m128i_i64[1];
      v13[-1].m128i_i64[0] = (__int64)v13;
      v13 += 2;
      v13[-3].m128i_i64[1] = 0;
      v13[-2].m128i_i8[0] = 0;
      if ( v12 == v15 )
        goto LABEL_13;
    }
    v12 += 2;
    v12[-1] = _mm_loadu_si128(v13);
    v12[-2].m128i_i64[1] = v13[-1].m128i_i64[1];
    v13[-1].m128i_i64[0] = (__int64)v13;
    v13 += 2;
    v13[-3].m128i_i64[1] = 0;
    v13[-2].m128i_i8[0] = 0;
  }
  while ( v15 != v12 );
LABEL_13:
  v17 = &v33[2 * v14];
  do
  {
LABEL_16:
    v18 = *(__int8 **)v6;
    v19 = *(_QWORD *)(v6 + 8);
    v20 = v17 + 1;
    v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
    if ( &v18[v19] && !v18 )
      goto LABEL_60;
    if ( (unsigned __int64)v19 > 0xF )
    {
      src = v18;
      if ( v19 < 0 )
        goto LABEL_61;
      v20 = (__m128i *)operator new(v19 + 1);
      v17[1].m128i_i64[0] = v19;
      v18 = (__int8 *)src;
      v17->m128i_i64[0] = (__int64)v20;
LABEL_47:
      memcpy(v20, v18, v19);
      v20 = (__m128i *)v17->m128i_i64[0];
      goto LABEL_15;
    }
    if ( v19 == 1 )
    {
      v17[1].m128i_i8[0] = *v18;
      goto LABEL_15;
    }
    if ( v19 )
      goto LABEL_47;
LABEL_15:
    v6 += 32;
    v17->m128i_i64[1] = v19;
    v17 += 2;
    v20->m128i_i8[v19] = 0;
  }
  while ( v4 != v6 );
  v25 = a1[1];
  if ( v5 != (__m128i *)v25 )
  {
    v28 = v25 - 4;
    v29 = v5 + 1;
    v30 = v17;
    do
    {
      v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
      v31 = (const __m128i *)v29[-1].m128i_i64[0];
      if ( v29 == v31 )
      {
        v30[1] = _mm_loadu_si128(v29);
      }
      else
      {
        v30->m128i_i64[0] = (__int64)v31;
        v30[1].m128i_i64[0] = v29->m128i_i64[0];
      }
      v30 += 2;
      v30[-2].m128i_i64[1] = v29[-1].m128i_i64[1];
      v29[-1].m128i_i64[0] = (__int64)v29;
      v29 += 2;
      v29[-3].m128i_i64[1] = 0;
      v29[-2].m128i_i8[0] = 0;
    }
    while ( v30 != &v17[2 * ((unsigned __int64)((char *)v28 - (char *)v5) >> 5) + 2] );
    v24 = 32 * (((unsigned __int64)((char *)v28 - (char *)v5) >> 5) + 1);
    v25 = a1[1];
    v17 = (__m128i *)((char *)v17 + v24);
  }
  v26 = *a1;
  if ( v25 != *a1 )
  {
    do
    {
      while ( *v26 != v26 + 2 )
      {
        operator delete(*v26);
        v26 += 4;
        if ( v25 == v26 )
          goto LABEL_34;
      }
      v26 += 4;
    }
    while ( v25 != v26 );
LABEL_34:
    v26 = *a1;
  }
  if ( v26 )
    operator delete(v26);
  src = v17;
  a1[2] = (void **)((char *)v33->m128i_i64 + v34);
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&src);
}
