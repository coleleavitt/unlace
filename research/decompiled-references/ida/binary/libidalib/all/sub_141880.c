__m128i *__fastcall sub_141880(const __m128i *a1, __int64 a2, _QWORD *a3)
{
  __m128i *v4; // r13
  __int64 v6; // rax
  __int32 v7; // eax
  __int64 v8; // rdi
  const __m128i *v9; // rbp
  __m128i *v10; // r14
  __m128i *v11; // rbx
  __int64 v12; // rax
  __int32 v13; // eax
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 j; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 i; // rax
  __int64 v21; // rax

  v4 = (__m128i *)a3[1];
  if ( v4 )
  {
    v6 = v4->m128i_i64[1];
    a3[1] = v6;
    if ( v6 )
    {
      if ( v4 == *(__m128i **)(v6 + 24) )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v19 = *(_QWORD *)(a3[1] + 16LL);
        if ( v19 )
        {
          a3[1] = v19;
          for ( i = *(_QWORD *)(v19 + 24); i; i = *(_QWORD *)(i + 24) )
          {
            a3[1] = i;
            v19 = i;
          }
          v21 = *(_QWORD *)(v19 + 16);
          if ( v21 )
            a3[1] = v21;
        }
      }
      else
      {
        *(_QWORD *)(v6 + 16) = 0;
      }
    }
    else
    {
      *a3 = 0;
    }
    v4[2] = _mm_loadu_si128(a1 + 2);
  }
  else
  {
    v4 = (__m128i *)operator new(0x30u);
    v4[2] = _mm_loadu_si128(a1 + 2);
  }
  v7 = a1->m128i_i32[0];
  v4[1].m128i_i64[0] = 0;
  v4[1].m128i_i64[1] = 0;
  v4->m128i_i32[0] = v7;
  v4->m128i_i64[1] = a2;
  v8 = a1[1].m128i_i64[1];
  if ( v8 )
    v4[1].m128i_i64[1] = sub_141880(v8, v4, a3);
  v9 = (const __m128i *)a1[1].m128i_i64[0];
  v10 = v4;
  if ( v9 )
  {
    v11 = (__m128i *)a3[1];
    if ( !v11 )
      goto LABEL_18;
LABEL_10:
    v12 = v11->m128i_i64[1];
    a3[1] = v12;
    if ( v12 )
    {
      if ( v11 == *(__m128i **)(v12 + 24) )
      {
        *(_QWORD *)(v12 + 24) = 0;
        v16 = *(_QWORD *)(a3[1] + 16LL);
        if ( v16 )
        {
          a3[1] = v16;
          for ( j = *(_QWORD *)(v16 + 24); j; j = *(_QWORD *)(j + 24) )
          {
            a3[1] = j;
            v16 = j;
          }
          v18 = *(_QWORD *)(v16 + 16);
          if ( v18 )
            a3[1] = v18;
        }
      }
      else
      {
        *(_QWORD *)(v12 + 16) = 0;
      }
    }
    else
    {
      *a3 = 0;
    }
    for ( v11[2] = _mm_loadu_si128(v9 + 2); ; v11[2] = _mm_loadu_si128(v9 + 2) )
    {
      v13 = v9->m128i_i32[0];
      v11[1].m128i_i64[0] = 0;
      v11[1].m128i_i64[1] = 0;
      v11->m128i_i32[0] = v13;
      v10[1].m128i_i64[0] = (__int64)v11;
      v11->m128i_i64[1] = (__int64)v10;
      v14 = v9[1].m128i_i64[1];
      if ( v14 )
        v11[1].m128i_i64[1] = sub_141880(v14, v11, a3);
      v9 = (const __m128i *)v9[1].m128i_i64[0];
      if ( !v9 )
        break;
      v10 = v11;
      v11 = (__m128i *)a3[1];
      if ( v11 )
        goto LABEL_10;
LABEL_18:
      v11 = (__m128i *)operator new(0x30u);
    }
  }
  return v4;
}

