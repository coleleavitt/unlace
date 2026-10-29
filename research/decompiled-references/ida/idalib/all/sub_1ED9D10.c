_DWORD *__fastcall sub_1ED9D10(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rsi
  int v15; // r8d
  __int64 v16; // rdi
  _DWORD *v17; // rcx
  __int64 v18; // rdx
  int i; // ebx
  int v20; // r9d
  unsigned int v21; // r11d
  int *v22; // rcx
  int v23; // r10d
  int v24; // r9d
  __m128i v25; // xmm0
  __int64 v26; // r9
  _DWORD *j; // rdx
  int v28; // r13d
  int *v29; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = *a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = (_DWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = result;
    a1[1] = 0;
    v14 = 32LL * v8;
    v15 = v12;
    v16 = v9 + v14;
    v17 = &result[8 * v12];
    if ( result != v17 )
    {
      do
      {
        *v13 = 0;
        v13 += 8;
      }
      while ( v17 != v13 );
    }
    v18 = v9;
    for ( i = v15 - 1; v16 != v18; *((_QWORD *)v22 + 3) = v26 )
    {
      while ( 1 )
      {
        v20 = *(_DWORD *)v18;
        if ( (unsigned int)(*(_DWORD *)v18 + 1) > 1 )
          break;
        v18 += 32;
        if ( v16 == v18 )
          return (_DWORD *)operator delete(v9, v14, 8);
      }
      if ( !v15 )
      {
        dword_0 = *(_DWORD *)v18;
        BUG();
      }
      v21 = i & v20;
      v22 = &result[8 * (i & v20)];
      v23 = *v22;
      if ( v20 != *v22 )
      {
        v28 = 1;
        v29 = nullptr;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( !v29 && v23 == -1 )
              v29 = v22;
            v21 = i & (v28 + v21);
            v22 = &result[8 * v21];
            v23 = *v22;
            if ( v20 == *v22 )
              break;
            if ( !v23 )
            {
              if ( v29 )
                v22 = v29;
              break;
            }
            ++v28;
          }
        }
      }
      v24 = *(_DWORD *)v18;
      v25 = _mm_loadu_si128((const __m128i *)(v18 + 8));
      v18 += 32;
      *v22 = v24;
      *(__m128i *)(v22 + 2) = v25;
      v26 = *(_QWORD *)(v18 - 8);
      ++*((_DWORD *)a1 + 2);
    }
    return (_DWORD *)operator delete(v9, v14, 8);
  }
  else
  {
    a1[1] = 0;
    for ( j = &result[8 * *((unsigned int *)a1 + 4)]; j != result; result += 8 )
      *result = 0;
  }
  return result;
}
