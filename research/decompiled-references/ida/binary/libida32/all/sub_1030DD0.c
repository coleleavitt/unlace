__m128i *__fastcall sub_1030DD0(__m128i *a1, __m128i *a2, _QWORD *a3)
{
  __m128i *v5; // rbx
  __m128i *v6; // r13
  size_t v7; // rsi
  size_t v8; // r8
  _BYTE *v9; // rax
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _BYTE *v16; // rdi

  v5 = a2;
  v6 = a2 + 1;
  v7 = a2->m128i_u64[1];
  v8 = a3[1];
  v9 = (_BYTE *)v5->m128i_i64[0];
  v10 = v7 + v8;
  if ( v6 == (__m128i *)v5->m128i_i64[0] )
    v11 = 15;
  else
    v11 = v5[1].m128i_u64[0];
  v12 = (_BYTE *)*a3;
  if ( v10 <= v11 )
  {
    if ( v8 )
    {
      v16 = &v9[v7];
      if ( v8 == 1 )
        *v16 = *v12;
      else
        memcpy(v16, v12, v8);
      v9 = (_BYTE *)v5->m128i_i64[0];
    }
  }
  else
  {
    if ( v12 == (_BYTE *)(a3 + 2) )
      v13 = 15;
    else
      v13 = a3[2];
    if ( v10 <= v13 )
    {
      v5 = (__m128i *)sub_978080(a3, 0, 0, v5->m128i_i64[0], v7);
      v6 = v5 + 1;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      v14 = v5->m128i_i64[0];
      if ( (__m128i *)v5->m128i_i64[0] != &v5[1] )
        goto LABEL_9;
LABEL_16:
      a1[1] = _mm_loadu_si128(v5 + 1);
      goto LABEL_10;
    }
    sub_974DF0((__int64)v5, v7, 0, v12, v8);
    v9 = (_BYTE *)v5->m128i_i64[0];
  }
  v5->m128i_i64[1] = v10;
  v9[v10] = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  v14 = v5->m128i_i64[0];
  if ( (__m128i *)v5->m128i_i64[0] == v6 )
    goto LABEL_16;
LABEL_9:
  a1->m128i_i64[0] = v14;
  a1[1].m128i_i64[0] = v5[1].m128i_i64[0];
LABEL_10:
  a1->m128i_i64[1] = v5->m128i_i64[1];
  v5->m128i_i64[0] = (__int64)v6;
  v5->m128i_i64[1] = 0;
  v5[1].m128i_i8[0] = 0;
  return a1;
}

