_QWORD *__fastcall sub_F57900(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  int v14; // r9d
  __int64 *v15; // r8
  _QWORD *v16; // rcx
  __int64 *v17; // rdx
  int v18; // r11d
  __int64 v19; // rcx
  unsigned int v20; // r10d
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *i; // rdx
  int v27; // r13d
  _QWORD *v28; // r14

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
  result = (_QWORD *)sub_220C370(32LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = result;
    a1[1] = 0;
    v14 = v12;
    v15 = &v9[4 * v8];
    v16 = &result[4 * v12];
    if ( result != v16 )
    {
      do
      {
        *v13 = -4096;
        v13 += 4;
      }
      while ( v16 != v13 );
    }
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
          v21 = &result[4 * v20];
          v22 = *v21;
          if ( v19 != *v21 )
          {
            v27 = 1;
            v28 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v28 )
                  v28 = v21;
                v20 = v18 & (v27 + v20);
                v21 = &result[4 * v20];
                v22 = *v21;
                if ( v19 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v28 )
                    v21 = v28;
                  break;
                }
                ++v27;
              }
            }
          }
          v23 = _mm_loadu_si128((const __m128i *)(v17 + 1));
          *v21 = v19;
          *(__m128i *)(v21 + 1) = v23;
          v24 = v17[3];
          ++*((_DWORD *)a1 + 2);
          v21[3] = v24;
        }
        v17 += 4;
      }
      while ( v15 != v17 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v25 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( i = &result[4 * v25]; i != result; result += 4 )
      *result = -4096;
  }
  return result;
}

