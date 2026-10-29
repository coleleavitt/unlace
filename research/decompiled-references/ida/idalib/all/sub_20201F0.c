__int64 *__fastcall sub_20201F0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r10d
  __int64 *v15; // r9
  __int64 *v16; // rcx
  __int64 *i; // rdx
  __int64 *v18; // rdx
  int v19; // r12d
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 *v22; // r8
  __int64 v23; // r11
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 *j; // rdx
  int v27; // r14d
  __int64 *v28; // r15

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
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
  result = (__int64 *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 24 * v8;
    v14 = v12;
    v15 = &v9[3 * v8];
    v16 = &result[3 * v12];
    for ( i = result; v16 != i; i += 3 )
      *i = -1;
    if ( v15 != v9 )
    {
      v18 = v9;
      v19 = v14 - 1;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( (unsigned __int64)(*v18 + 2) > 1 )
            break;
          v18 += 3;
          if ( v15 == v18 )
            return (__int64 *)operator delete(v9, v13, 8);
        }
        if ( !v14 )
        {
          *(_QWORD *)&dword_0 = 0;
          BUG();
        }
        v21 = v19 & (((0xBF58476D1CE4E5B9LL * v20) >> 31) ^ (484763065 * v20));
        v22 = &result[3 * v21];
        v23 = *v22;
        if ( v20 != *v22 )
        {
          v27 = 1;
          v28 = nullptr;
          if ( v23 != -1 )
          {
            while ( 1 )
            {
              if ( !v28 && v23 == -2 )
                v28 = v22;
              v21 = v19 & (v27 + v21);
              v22 = &result[3 * v21];
              v23 = *v22;
              if ( v20 == *v22 )
                break;
              if ( v23 == -1 )
              {
                if ( v28 )
                  v22 = v28;
                break;
              }
              ++v27;
            }
          }
        }
        *v22 = v20;
        v24 = _mm_loadu_si128((const __m128i *)(v18 + 1));
        v18 += 3;
        ++*((_DWORD *)a1 + 2);
        *(__m128i *)(v22 + 1) = v24;
      }
      while ( v15 != v18 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v25 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[3 * v25]; j != result; result += 3 )
      *result = -1;
  }
  return result;
}
