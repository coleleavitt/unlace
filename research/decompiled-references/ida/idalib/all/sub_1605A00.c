_QWORD *__fastcall sub_1605A00(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r10d
  __int64 *v15; // r9
  _QWORD *v16; // rcx
  _QWORD *i; // rdx
  __int64 *v18; // rdx
  int j; // ebx
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 *v22; // r8
  __int64 v23; // r11
  __m128i v24; // xmm0
  __int64 v25; // rdx
  _QWORD *k; // rdx
  int v27; // r13d
  __int64 *v28; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
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
  result = (_QWORD *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v13 = 24 * v8;
    v14 = v12;
    v15 = &v9[3 * v8];
    v16 = &result[3 * v12];
    for ( i = result; v16 != i; i += 3 )
      *i = -4096;
    v18 = v9;
    for ( j = v14 - 1; v15 != v18; v18 += 3 )
    {
      v20 = *v18;
      if ( *v18 != -8192 && v20 != -4096 )
      {
        if ( !v14 )
        {
          *(_QWORD *)&dword_0 = *v18;
          BUG();
        }
        v21 = j & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
        v22 = &result[3 * v21];
        v23 = *v22;
        if ( v20 != *v22 )
        {
          v27 = 1;
          v28 = nullptr;
          if ( v23 != -4096 )
          {
            while ( 1 )
            {
              if ( v23 == -8192 && !v28 )
                v28 = v22;
              v21 = j & (v27 + v21);
              v22 = &result[3 * v21];
              v23 = *v22;
              if ( v20 == *v22 )
                break;
              if ( v23 == -4096 )
              {
                if ( v28 )
                  v22 = v28;
                break;
              }
              ++v27;
            }
          }
        }
        *v22 = *v18;
        v24 = _mm_loadu_si128((const __m128i *)(v18 + 1));
        ++*((_DWORD *)a1 + 2);
        *(__m128i *)(v22 + 1) = v24;
      }
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v25 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( k = &result[3 * v25]; k != result; result += 3 )
      *result = -4096;
  }
  return result;
}
