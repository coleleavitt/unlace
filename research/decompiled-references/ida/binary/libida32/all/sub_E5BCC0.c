__int64 *__fastcall sub_E5BCC0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  int v13; // r9d
  __int64 *v14; // r8
  __int64 *i; // rdx
  __int64 *v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 *j; // rdx
  int v24; // r13d
  __int64 v25; // r14

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
    for ( i = &result[3 * v12]; i != result; result += 3 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      v17 = v13 - 1;
      do
      {
        v18 = *v16;
        if ( *v16 != -8192 && v18 != -4096 )
        {
          if ( !v13 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v17 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
          v20 = (__int64)&(*a1)[3 * v19];
          v21 = *(_QWORD *)v20;
          if ( v18 != *(_QWORD *)v20 )
          {
            v24 = 1;
            v25 = 0;
            if ( v21 != -4096 )
            {
              while ( 1 )
              {
                if ( v21 == -8192 && !v25 )
                  v25 = v20;
                v19 = v17 & (v24 + v19);
                v20 = (__int64)&(*a1)[3 * v19];
                v21 = *(_QWORD *)v20;
                if ( v18 == *(_QWORD *)v20 )
                  break;
                if ( v21 == -4096 )
                {
                  if ( v25 )
                    v20 = v25;
                  break;
                }
                ++v24;
              }
            }
          }
          *(_QWORD *)v20 = v18;
          *(__m128i *)(v20 + 8) = _mm_loadu_si128((const __m128i *)(v16 + 1));
          ++*((_DWORD *)a1 + 2);
        }
        v16 += 3;
      }
      while ( v14 != v16 );
    }
    return (__int64 *)operator delete();
  }
  else
  {
    v22 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[3 * v22]; j != result; result += 3 )
      *result = -4096;
  }
  return result;
}

