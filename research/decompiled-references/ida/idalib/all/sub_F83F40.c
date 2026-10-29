_QWORD *__fastcall sub_F83F40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r15
  _QWORD *i; // rdx
  __int64 *v16; // r13
  __int64 *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *j; // rdx
  _QWORD *v21; // [rsp+8h] [rbp-40h] BYREF

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
  result = (_QWORD *)sub_22300B0((unsigned __int64)v10 << 6, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = v8 << 6;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = (__int64 *)(v9 + v13);
    for ( i = &result[8 * v12]; i != result; result += 8 )
      *result = -1;
    if ( v14 != (__int64 *)v9 )
    {
      v16 = (__int64 *)v9;
      do
      {
        while ( *v16 == -2 || *v16 == -1 )
        {
          v16 += 8;
          if ( v14 == v16 )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
        v17 = v16;
        v16 += 8;
        sub_F7E700((__int64 *)a1, v17, &v21);
        v18 = v21;
        *v21 = *(v16 - 8);
        *(__m128i *)(v18 + 1) = _mm_loadu_si128((const __m128i *)(v16 - 7));
        *(__m128i *)(v18 + 3) = _mm_loadu_si128((const __m128i *)(v16 - 5));
        *(__m128i *)(v18 + 5) = _mm_loadu_si128((const __m128i *)(v16 - 3));
        v18[7] = *(v16 - 1);
        ++*(_DWORD *)(a1 + 8);
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[8 * v19]; j != result; result += 8 )
      *result = -1;
  }
  return result;
}
