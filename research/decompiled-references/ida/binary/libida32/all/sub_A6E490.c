__int64 *__fastcall sub_A6E490(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  int v13; // r10d
  __int64 *v14; // r9
  __int64 *v15; // rcx
  __int64 *i; // rdx
  __int64 *v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 *v21; // r8
  __int64 v22; // r11
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 *j; // rdx
  int v26; // r13d
  __int64 *v27; // r14

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
  result = (__int64 *)sub_220C370(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = v12;
    v14 = &v9[3 * v8];
    v15 = &result[3 * v12];
    for ( i = result; v15 != i; i += 3 )
      *i = -4096;
    if ( v14 != v9 )
    {
      v17 = v9;
      v18 = v13 - 1;
      do
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
        {
          if ( !v13 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v20 = v18 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v21 = &result[3 * v20];
          v22 = *v21;
          if ( v19 != *v21 )
          {
            v26 = 1;
            v27 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v27 )
                  v27 = v21;
                v20 = v18 & (v26 + v20);
                v21 = &result[3 * v20];
                v22 = *v21;
                if ( v19 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v27 )
                    v21 = v27;
                  break;
                }
                ++v26;
              }
            }
          }
          v23 = _mm_loadu_si128((const __m128i *)(v17 + 1));
          ++*((_DWORD *)a1 + 2);
          *v21 = v19;
          *(__m128i *)(v21 + 1) = v23;
        }
        v17 += 3;
      }
      while ( v14 != v17 );
    }
    return (__int64 *)operator delete();
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[3 * v24]; j != result; result += 3 )
      *result = -4096;
  }
  return result;
}

