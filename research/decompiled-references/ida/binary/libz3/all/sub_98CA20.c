__int64 __fastcall sub_98CA20(__m128i **a1, const __m128i *a2)
{
  char **exception; // rbx
  __m128i *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  __m128i *v8; // rdx
  unsigned int v9; // ebp
  size_t v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rdi
  _DWORD *v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = v4[-1].m128i_u32[3];
    if ( v5 == v4[-1].m128i_i32[2] )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 16 * v9 + 8;
      if ( 16 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = *a1;
      v13 = (_DWORD *)v11;
      v4 = (__m128i *)(v11 + 8);
      if ( *a1 )
      {
        v14 = v12[-1].m128i_u32[3];
        *(_DWORD *)(v11 + 4) = v14;
        v15 = 0;
        v16 = 16 * v14;
        if ( v16 )
        {
          do
          {
            *(__m128i *)&v13[v15 / 4 + 2] = _mm_loadu_si128(&v12[v15 / 0x10]);
            v15 += 16LL;
          }
          while ( v16 != v15 );
        }
        sub_186B220(&v12[-1].m128i_u64[1]);
        v8 = &v4[v13[1]];
        result = (unsigned int)(v13[1] + 1);
      }
      else
      {
        *(_DWORD *)(v11 + 4) = 0;
        v8 = (__m128i *)(v11 + 8);
        result = 1;
      }
      *a1 = v4;
      *v13 = v9;
    }
    else
    {
      v6 = v5;
      result = v5 + 1;
      v8 = &v4[v6];
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x28u);
    v4 = (__m128i *)(v17 + 1);
    *v17 = 2;
    result = 1;
    *a1 = v4;
    v8 = v4;
  }
  *v8 = _mm_loadu_si128(a2);
  v4[-1].m128i_i32[3] = result;
  return result;
}

