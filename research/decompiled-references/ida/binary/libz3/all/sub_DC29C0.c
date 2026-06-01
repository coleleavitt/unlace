__m128i *__fastcall sub_DC29C0(const __m128i **a1, const __m128i *a2)
{
  const __m128i *v4; // r13
  __int64 v5; // rax
  __m128i *result; // rax
  bool v7; // zf
  unsigned int v8; // r13d
  size_t v9; // rdi
  __int64 v10; // rax
  const __m128i *v11; // rbx
  _DWORD *v12; // r12
  __int64 v13; // rsi
  __m128i *v14; // rdx
  const __m128i *v15; // rax
  const __m128i *v16; // rsi
  __int64 v17; // rax
  const __m128i *v18; // r15
  const __m128i *v19; // rdi
  _QWORD *v20; // rax
  char **exception; // rbx
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = v4[-1].m128i_u32[3];
    if ( (_DWORD)v5 == v4[-1].m128i_i32[2] )
    {
      v8 = (unsigned int)(3 * v5 + 1) >> 1;
      v22 = v8;
      v9 = 16 * v8 + 8;
      if ( 16 * (int)v5 + 8 >= (unsigned int)v9 || (unsigned int)v5 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DBF430(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = sub_186B270(v9);
      v11 = *a1;
      v12 = (_DWORD *)v10;
      v4 = (const __m128i *)(v10 + 8);
      if ( *a1 )
      {
        v13 = v11[-1].m128i_u32[3];
        v14 = (__m128i *)(v10 + 8);
        *(_DWORD *)(v10 + 4) = v13;
        v15 = v11;
        v16 = &v11[v13];
        if ( v11 != v16 )
        {
          do
          {
            v7 = v15->m128i_i8[8] == 0;
            *v14 = _mm_loadu_si128(v15);
            v15->m128i_i32[0] = 0;
            if ( !v7 )
              v15->m128i_i8[8] = 0;
            ++v15;
            ++v14;
          }
          while ( v16 != v15 );
        }
        v17 = v11[-1].m128i_u32[3];
        v18 = &v11[v17];
        if ( (_DWORD)v17 )
        {
          do
          {
            v19 = v11++;
            sub_15D0DF0(v19);
          }
          while ( v11 != v18 );
          v11 = *a1;
        }
        sub_186B220(&v11[-1].m128i_u64[1]);
        result = (__m128i *)&v4[v12[1]];
      }
      else
      {
        *(_DWORD *)(v10 + 4) = 0;
        result = (__m128i *)(v10 + 8);
      }
      *a1 = v4;
      *v12 = v22;
    }
    else
    {
      result = (__m128i *)&v4[v5];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x28u);
    v4 = (const __m128i *)(v20 + 1);
    *v20 = 2;
    *a1 = (const __m128i *)(v20 + 1);
    result = (__m128i *)(v20 + 1);
  }
  v7 = a2->m128i_i8[8] == 0;
  *result = _mm_loadu_si128(a2);
  a2->m128i_i32[0] = 0;
  if ( !v7 )
    a2->m128i_i8[8] = 0;
  ++v4[-1].m128i_i32[3];
  return result;
}

