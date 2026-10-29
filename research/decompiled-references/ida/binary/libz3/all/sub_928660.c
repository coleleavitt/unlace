const __m128i *__fastcall sub_928660(_QWORD *a1)
{
  const __m128i *result; // rax
  _DWORD *v2; // r8
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  size_t v5; // rsi
  unsigned int *v6; // rax
  unsigned int v7; // eax
  const __m128i *v8; // r8
  _QWORD *v9; // rsi
  const __m128i *v10; // r9
  __m128i *v11; // rdi
  unsigned int i; // ecx
  __int64 j; // rax
  _DWORD *v14; // rdx
  __int32 v15; // edx
  __m128i v16; // xmm2
  int v17; // esi
  __int64 v18; // rdx
  _QWORD *v19; // rax
  char **exception; // rbx
  __int64 v21[7]; // [rsp-38h] [rbp-38h] BYREF

  result = (const __m128i *)a1[4];
  v2 = (_DWORD *)a1[35];
  if ( result )
  {
    v3 = result[-1].m128i_u32[3];
    if ( v2 )
    {
      *(v2 - 1) = 0;
      if ( !v3 )
      {
        *(v2 - 1) = 0;
        return result;
      }
    }
    else
    {
      if ( !v3 )
        return result;
      v19 = (_QWORD *)sub_186B270(0x10u);
      v2 = v19 + 1;
      *v19 = 2;
      a1[35] = v19 + 1;
    }
    while ( 1 )
    {
      v7 = *(v2 - 2);
      if ( v7 >= v3 )
        break;
      v4 = (3 * v7 + 1) >> 1;
      v5 = 4 * v4 + 8;
      if ( 4 * v7 + 8 >= (unsigned int)v5 || v7 >= v4 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v21, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v6 = (unsigned int *)sub_186B300(v2 - 2, v5);
      v2 = v6 + 2;
      *v6 = v4;
      a1[35] = v6 + 2;
    }
    *(v2 - 1) = v3;
    result = (const __m128i *)memset(v2, 0, 4LL * v3);
    v8 = result;
    if ( (int)v3 > 0 )
    {
      v9 = (_QWORD *)a1[24];
      v10 = result;
      v11 = (__m128i *)result;
      for ( i = 0; ; ++i )
      {
        for ( j = 0; j != v3; ++j )
        {
          if ( i != (_DWORD)j )
          {
            v14 = (_DWORD *)(*v9 + 16 * j);
            if ( *v14 != -1 )
            {
              v15 = v14[1];
              if ( v15 < v11->m128i_i32[0] )
                v11->m128i_i32[0] = v15;
            }
          }
        }
        result = (const __m128i *)(i + 1);
        ++v9;
        v11 = (__m128i *)((char *)v11 + 4);
        if ( v3 == (_DWORD)result )
          break;
      }
      if ( i <= 2 )
      {
        v17 = 0;
LABEL_22:
        v18 = v17;
        v8->m128i_i32[v18] = -v8->m128i_i32[v18];
        if ( (int)i > v17 )
        {
          v8->m128i_i32[v18 + 1] = -v8->m128i_i32[v18 + 1];
          if ( v17 + 2 < (int)result )
            v8->m128i_i32[v18 + 2] = -v8->m128i_i32[v18 + 2];
        }
        return result;
      }
      do
      {
        v16 = _mm_loadu_si128(v10++);
        v10[-1] = _mm_sub_epi32((__m128i)0LL, v16);
      }
      while ( v10 != &v8[v3 >> 2] );
      v17 = v3 & 0x7FFFFFFC;
      if ( (v3 & 3) != 0 )
        goto LABEL_22;
    }
  }
  else if ( v2 )
  {
    *(v2 - 1) = 0;
  }
  return result;
}

