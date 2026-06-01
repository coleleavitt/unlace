__int64 *__fastcall sub_E7FA00(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r9d
  __int64 *v15; // r8
  __int64 *i; // rdx
  __int64 *v17; // rdx
  int v18; // ebx
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 *j; // rdx
  int v25; // r13d
  __int64 v26; // r14

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
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -4096;
    if ( v15 != v9 )
    {
      v17 = v9;
      v18 = v14 - 1;
      do
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
        {
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v20 = v18 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v21 = (__int64)&(*a1)[3 * v20];
          v22 = *(_QWORD *)v21;
          if ( v19 != *(_QWORD *)v21 )
          {
            v25 = 1;
            v26 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v26 )
                  v26 = v21;
                v20 = v18 & (v25 + v20);
                v21 = (__int64)&(*a1)[3 * v20];
                v22 = *(_QWORD *)v21;
                if ( v19 == *(_QWORD *)v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v26 )
                    v21 = v26;
                  break;
                }
                ++v25;
              }
            }
          }
          *(_QWORD *)v21 = v19;
          *(__m128i *)(v21 + 8) = _mm_loadu_si128((const __m128i *)(v17 + 1));
          ++*((_DWORD *)a1 + 2);
        }
        v17 += 3;
      }
      while ( v15 != v17 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[3 * v23]; j != result; result += 3 )
      *result = -4096;
  }
  return result;
}
