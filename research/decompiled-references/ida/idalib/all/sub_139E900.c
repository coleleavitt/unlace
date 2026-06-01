_QWORD *__fastcall sub_139E900(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // r8
  _QWORD *i; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r9d
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rdx
  _QWORD *j; // rdx
  int v25; // r14d
  __int64 v26; // rbx

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (__int64 *)*a1;
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
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 4LL * v8;
    v14 = &v9[v13];
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = *a1 + 32LL * v20;
          v22 = *(_QWORD *)v21;
          if ( v17 != *(_QWORD *)v21 )
          {
            v25 = 1;
            v26 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v26 )
                  v26 = v21;
                v20 = v19 & (v25 + v20);
                v21 = *a1 + 32LL * v20;
                v22 = *(_QWORD *)v21;
                if ( v17 == *(_QWORD *)v21 )
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
          *(_QWORD *)v21 = v17;
          *(__m128i *)(v21 + 8) = _mm_loadu_si128((const __m128i *)(v16 + 1));
          *(_QWORD *)(v21 + 24) = v16[3];
          ++*((_DWORD *)a1 + 2);
        }
        v16 += 4;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( j = &result[4 * v23]; j != result; result += 4 )
      *result = -4096;
  }
  return result;
}
