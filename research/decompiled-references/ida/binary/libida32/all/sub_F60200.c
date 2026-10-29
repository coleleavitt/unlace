_QWORD *__fastcall sub_F60200(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r15
  _QWORD *i; // rdx
  __int64 *v15; // r13
  __int64 *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *j; // rdx
  _QWORD *v20; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_220C370((unsigned __int64)v10 << 6, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = (__int64 *)(v9 + (v8 << 6));
    for ( i = &result[8 * v12]; i != result; result += 8 )
      *result = -1;
    if ( v13 != (__int64 *)v9 )
    {
      v15 = (__int64 *)v9;
      do
      {
        while ( *v15 == -2 || *v15 == -1 )
        {
          v15 += 8;
          if ( v13 == v15 )
            return (_QWORD *)operator delete();
        }
        v16 = v15;
        v15 += 8;
        sub_F5A9C0((__int64 *)a1, v16, &v20);
        v17 = v20;
        *v20 = *(v15 - 8);
        *(__m128i *)(v17 + 1) = _mm_loadu_si128((const __m128i *)(v15 - 7));
        *(__m128i *)(v17 + 3) = _mm_loadu_si128((const __m128i *)(v15 - 5));
        *(__m128i *)(v17 + 5) = _mm_loadu_si128((const __m128i *)(v15 - 3));
        v17[7] = *(v15 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v13 != v15 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[8 * v18]; j != result; result += 8 )
      *result = -1;
  }
  return result;
}

