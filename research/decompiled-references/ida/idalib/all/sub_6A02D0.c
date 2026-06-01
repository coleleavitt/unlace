__int64 __fastcall sub_6A02D0(__int64 *a1, __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // zf
  __m128i *v6; // rax
  __m128i *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int8 *v12; // rbp
  __int64 v14; // rax
  __m128i v15[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2->m128i_i64[0] != -1 )
  {
    if ( a2->m128i_i64[1] != -1 )
    {
      v3 = sub_6A0250(
             a1[2],
             a1[2] + 16 * a1[3],
             (__int64)a2,
             (unsigned __int8 (__fastcall *)(__int64, __int64))sub_697F40);
      v4 = a1[2];
      v5 = v3 == v4;
      v6 = (__m128i *)(v3 - 16);
      if ( v5 )
        v6 = (__m128i *)a1[2];
      v7 = (__m128i *)(v4 + 16 * a1[3]);
      if ( v6 == v7 )
        goto LABEL_14;
      v8 = a2->m128i_i64[0];
      while ( v8 >= v6->m128i_i64[1] )
      {
        if ( ++v6 == v7 )
          goto LABEL_14;
      }
      if ( v7 == v6 )
        goto LABEL_14;
      v9 = v6->m128i_i64[0];
      if ( v6->m128i_i64[0] >= v8 )
      {
        if ( v8 == v9 )
        {
          v6->m128i_i64[1] = a2->m128i_i64[1];
          return 1;
        }
LABEL_12:
        if ( v9 >= a2->m128i_i64[1] )
        {
          v7 = v6;
LABEL_14:
          sub_699EE0(((__int64)v7->m128i_i64 - v4) >> 4, a2->m128i_i64, nullptr, 0xAAu);
          v10 = a1[2];
          v11 = a1[3];
          v15[0] = _mm_loadu_si128(a2);
          v12 = &v7->m128i_i8[-v10];
          if ( a1[4] < (unsigned __int64)(v11 + 1) )
          {
            v14 = qvector_reserve(a1 + 2, v10, v11 + 1, 16);
            v11 = a1[3];
            a1[2] = v14;
            v7 = (__m128i *)&v12[v14];
          }
          memmove(&v7[1], v7, 16 * v11 - (_QWORD)v12);
          *v7 = _mm_load_si128(v15);
          ++a1[3];
          return 1;
        }
        return 0;
      }
      if ( v8 >= v6->m128i_i64[1] )
        goto LABEL_12;
    }
    return 0;
  }
  return 0;
}
