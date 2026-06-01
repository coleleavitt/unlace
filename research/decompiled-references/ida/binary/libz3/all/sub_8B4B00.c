__int64 __fastcall sub_8B4B00(__int64 *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // r12d
  size_t v4; // rdi
  __int64 result; // rax
  const __m128i *v6; // rbx
  _DWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rcx
  __m128i *v10; // rdx
  const __m128i *v11; // rax
  const __m128i *v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  const __m128i *v15; // r15
  const __m128i *v16; // rdi
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19; // rdx
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( *a1 )
  {
    v2 = *(_DWORD *)(*a1 - 8);
    v3 = (3 * v2 + 1) >> 1;
    v4 = 16 * v3 + 8;
    if ( 16 * v2 + 8 >= (unsigned int)v4 || v2 >= v3 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_12D192(v20, "Overflow encountered when expanding vector", v19);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v20);
      sub_233E40((__int64)v20);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    result = sub_186B270(v4);
    v6 = (const __m128i *)*a1;
    v7 = (_DWORD *)result;
    v8 = result + 8;
    if ( *a1 )
    {
      v9 = v6[-1].m128i_u32[3];
      v10 = (__m128i *)(result + 8);
      *(_DWORD *)(result + 4) = v9;
      v11 = v6;
      v12 = &v6[v9];
      if ( v6 != v12 )
      {
        do
        {
          v13 = v11->m128i_i8[8] == 0;
          *v10 = _mm_loadu_si128(v11);
          v11->m128i_i32[0] = 0;
          if ( !v13 )
            v11->m128i_i8[8] = 0;
          ++v11;
          ++v10;
        }
        while ( v12 != v11 );
      }
      v14 = v6[-1].m128i_u32[3];
      v15 = &v6[v14];
      if ( (_DWORD)v14 )
      {
        do
        {
          v16 = v6++;
          sub_15D0DF0(v16);
        }
        while ( v15 != v6 );
        v6 = (const __m128i *)*a1;
      }
      result = sub_186B220(&v6[-1].m128i_u64[1]);
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
    }
    *a1 = v8;
    *v7 = v3;
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x28u);
    *v17 = 2;
    result = (__int64)(v17 + 1);
    *a1 = result;
  }
  return result;
}

