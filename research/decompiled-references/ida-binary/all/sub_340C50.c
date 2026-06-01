_QWORD *__fastcall sub_340C50(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *i; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  a1[15] = 0;
  result = (_QWORD *)get_first_seg(a1, a2);
  if ( result )
  {
    for ( i = result; ; i = v8 )
    {
      v4 = a1[15];
      v5 = a1[14];
      if ( a1[16] < (unsigned __int64)(v4 + 1) )
      {
        v14 = qvector_reserve(a1 + 14, v5, v4 + 1, 32);
        a1[14] = v14;
        v5 = v14;
        v4 = a1[15];
      }
      v6 = 32 * v4 + v5;
      *(_OWORD *)v6 = -1;
      *(_BYTE *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 16) = -1;
      ++a1[15];
      *(_QWORD *)v6 = *i;
      v7 = i[1];
      *(_BYTE *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 8) = v7;
      result = (_QWORD *)get_next_seg(*i);
      v8 = result;
      if ( !result )
        break;
      v9 = *result;
      v10 = i[1];
      if ( *result != v10 || byte_8CEDF8 )
      {
        v11 = a1[15];
        v12 = a1[14];
        if ( a1[16] < (unsigned __int64)(v11 + 1) )
        {
          v15 = qvector_reserve(a1 + 14, v12, v11 + 1, 32);
          a1[14] = v15;
          v12 = v15;
          v11 = a1[15];
        }
        v13 = 32 * v11 + v12;
        *(_BYTE *)(v13 + 24) = 0;
        *(_OWORD *)v13 = -1;
        *(_QWORD *)(v13 + 16) = -1;
        ++a1[15];
        *(_BYTE *)(v13 + 24) = 1;
        *(__m128i *)v13 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v9);
      }
    }
  }
  return result;
}
