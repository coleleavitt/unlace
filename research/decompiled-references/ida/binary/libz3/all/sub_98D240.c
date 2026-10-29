__m128i *__fastcall sub_98D240(__int64 *a1, const __m128i *a2)
{
  char **exception; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i *result; // rax
  bool v8; // zf
  unsigned int v9; // ebp
  size_t v10; // rdi
  __int64 v11; // rax
  const __m128i *v12; // rdx
  _DWORD *v13; // r14
  __int64 v14; // rsi
  __m128i *v15; // rcx
  const __m128i *i; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 == *(_DWORD *)(v5 - 8) )
    {
      v9 = (unsigned int)(3 * v6 + 1) >> 1;
      v10 = 16 * v9 + 8;
      if ( 16 * (int)v6 + 8 >= (unsigned int)v10 || (unsigned int)v6 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = (const __m128i *)*a1;
      v13 = (_DWORD *)v11;
      v5 = v11 + 8;
      if ( *a1 )
      {
        v14 = v12[-1].m128i_u32[3];
        v15 = (__m128i *)(v11 + 8);
        *(_DWORD *)(v11 + 4) = v14;
        for ( i = &v12[v14]; v12 != i; ++v15 )
        {
          v8 = v12->m128i_i8[8] == 0;
          *v15 = _mm_loadu_si128(v12);
          v12->m128i_i32[0] = 0;
          if ( !v8 )
            v12->m128i_i8[8] = 0;
          ++v12;
        }
      }
      else
      {
        *(_DWORD *)(v11 + 4) = 0;
      }
      sub_4EB210(a1);
      v17 = (unsigned int)v13[1];
      *a1 = v5;
      *v13 = v9;
      result = (__m128i *)(v5 + 16 * v17);
    }
    else
    {
      result = (__m128i *)(v5 + 16 * v6);
    }
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x28u);
    v5 = (__int64)(v18 + 1);
    *v18 = 2;
    *a1 = (__int64)(v18 + 1);
    result = (__m128i *)(v18 + 1);
  }
  v8 = a2->m128i_i8[8] == 0;
  *result = _mm_loadu_si128(a2);
  a2->m128i_i32[0] = 0;
  if ( !v8 )
    a2->m128i_i8[8] = 0;
  ++*(_DWORD *)(v5 - 4);
  return result;
}

