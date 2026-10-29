_QWORD *__fastcall sub_691C60(__int64 a1, unsigned __int64 **a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // rbp
  __int64 v9; // rdx
  _QWORD *result; // rax
  __int64 i; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( *a2 && (v4 = *(*a2 - 1)) != 0 )
  {
    v5 = (3 * v4 + 1) >> 1;
    v6 = (unsigned __int64 *)sub_17E9C90(v3, 8 * v5 + 8);
    v7 = *a2;
    *v6 = v5;
    v8 = v6 + 1;
    if ( v4 - 1 <= 2 || v7 == v6 )
    {
      for ( i = 0; i != v4; ++i )
        v6[i + 1] = v7[i];
    }
    else
    {
      v9 = 0;
      do
      {
        *(__m128i *)&v6[v9 + 1] = _mm_loadu_si128((const __m128i *)&v7[v9]);
        v9 += 2;
      }
      while ( 2 * (v4 >> 1) != v9 );
      if ( (v4 & 1) != 0 )
        v8[v4 & 0xFFFFFFFFFFFFFFFELL] = v7[v4 & 0xFFFFFFFFFFFFFFFELL];
    }
    result = (_QWORD *)sub_17E9C40(*(_QWORD *)(a1 + 8), 8 * *(v7 - 1) + 8, v7 - 1);
    *a2 = v8;
  }
  else
  {
    result = (_QWORD *)sub_17E9C90(v3, 24);
    *result = 2;
    *a2 = result + 1;
  }
  return result;
}

