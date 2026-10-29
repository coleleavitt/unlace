_QWORD *__fastcall sub_F79960(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  _QWORD *i; // rdx
  __int64 v16; // r13
  _QWORD *v17; // rax
  __m128i v18; // xmm0
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
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 32 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        if ( *(_QWORD *)v16 != -8192 && *(_QWORD *)v16 != -4096 )
        {
          sub_F79560((__int64 *)a1, (__int64 *)v16, &v21);
          v17 = v21;
          v18 = _mm_loadu_si128((const __m128i *)(v16 + 8));
          *v21 = *(_QWORD *)v16;
          *(__m128i *)(v17 + 1) = v18;
          v17[3] = *(_QWORD *)(v16 + 24);
          ++*(_DWORD *)(a1 + 8);
        }
        v16 += 32;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[4 * v19]; j != result; result += 4 )
      *result = -4096;
  }
  return result;
}
