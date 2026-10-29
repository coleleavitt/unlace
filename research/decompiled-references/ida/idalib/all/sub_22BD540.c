_DWORD *__fastcall sub_22BD540(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // eax
  _DWORD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __m128i *v9; // r13
  _DWORD *i; // rdx
  __m128i *v11; // rbx
  __m128i *v12; // rax
  __int32 v13; // edx
  _DWORD *j; // rdx
  __m128i *v15; // [rsp+8h] [rbp-40h] BYREF

  v2 = (unsigned int)(a2 - 1);
  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v5 < 0x40 )
    v5 = 64;
  *(_DWORD *)(a1 + 16) = v5;
  result = (_DWORD *)sub_22300B0(20LL * v5, 4);
  *(_QWORD *)a1 = result;
  if ( v4 )
  {
    v7 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v8 = 20 * v3;
    v9 = (__m128i *)(v4 + 20 * v3);
    for ( i = &result[5 * v7]; i != result; *(result - 2) = 0 )
    {
      *result = 0x7FFFFFFF;
      result += 5;
      *((_QWORD *)result - 2) = 0;
    }
    if ( v9 != (__m128i *)v4 )
    {
      v11 = (__m128i *)v4;
      do
      {
        if ( v11->m128i_i32[0] < 2147483646
          || (v11->m128i_i32[1] & 0x7FFFFFFF) != 0
          || (v11->m128i_i32[2] & 0x7FFFFFFF) != 0
          || (v11->m128i_i32[3] & 0x7FFFFFFF) != 0 )
        {
          sub_22BD350((__int64 *)a1, v11->m128i_i8, (int **)&v15);
          v12 = v15;
          v13 = v11[1].m128i_i32[0];
          *v15 = _mm_loadu_si128(v11);
          v12[1].m128i_i32[0] = v13;
          ++*(_DWORD *)(a1 + 8);
        }
        v11 = (__m128i *)((char *)v11 + 20);
      }
      while ( v9 != v11 );
    }
    return (_DWORD *)operator delete(v4, v8, 4);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[5 * *(unsigned int *)(a1 + 16)]; j != result; *(result - 2) = 0 )
    {
      *result = 0x7FFFFFFF;
      result += 5;
      *((_QWORD *)result - 2) = 0;
    }
  }
  return result;
}
