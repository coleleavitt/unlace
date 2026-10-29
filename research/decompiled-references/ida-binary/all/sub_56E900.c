void __fastcall sub_56E900(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v4; // r13
  const __m128i *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  void **v9; // rax
  _QWORD *v10; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    if ( a3 >= a2 )
      __assert_fail("v2 < v1", "lib/src/./stack.c", 0x2A6u, "ts_stack_renumber_version");
    v3 = *(_DWORD *)(a1 + 8);
    if ( a2 >= v3 )
      __assert_fail("(uint32_t)v1 < self->heads.size", "lib/src/./stack.c", 0x2A7u, "ts_stack_renumber_version");
    v4 = 48LL * a2;
    v5 = (const __m128i *)(*(_QWORD *)a1 + v4);
    v6 = 48LL * a3 + *(_QWORD *)a1;
    v7 = *(_QWORD *)(v6 + 8);
    if ( v7 && !v5->m128i_i64[1] )
    {
      v5->m128i_i64[1] = v7;
      *(_QWORD *)(v6 + 8) = 0;
    }
    if ( *(_QWORD *)v6 )
    {
      v8 = *(_QWORD *)(a1 + 72);
      if ( *(_QWORD *)(v6 + 24) )
        sub_56C9A0(*(_QWORD *)(a1 + 72), *(volatile signed __int32 **)(v6 + 24));
      if ( *(_QWORD *)(v6 + 32) )
        sub_56C9A0(v8, *(volatile signed __int32 **)(v6 + 32));
      v9 = *(void ***)(v6 + 8);
      if ( v9 )
      {
        if ( *v9 )
        {
          v10 = *(_QWORD **)(v6 + 8);
          off_8C52A0(*v9);
          *v10 = 0;
          v10[1] = 0;
          v9 = *(void ***)(v6 + 8);
        }
        off_8C52A0(v9);
      }
      sub_56CDC0(*(__m128i **)v6, a1 + 48, v8);
      v3 = *(_DWORD *)(a1 + 8);
      *(__m128i *)v6 = _mm_loadu_si128(v5);
      *(__m128i *)(v6 + 16) = _mm_loadu_si128(v5 + 1);
      *(__m128i *)(v6 + 32) = _mm_loadu_si128(v5 + 2);
      if ( a2 >= v3 )
        sub_55D280();
    }
    else
    {
      *(__m128i *)v6 = _mm_loadu_si128(v5);
      *(__m128i *)(v6 + 16) = _mm_loadu_si128(v5 + 1);
      *(__m128i *)(v6 + 32) = _mm_loadu_si128(v5 + 2);
    }
    memmove((void *)(v4 + *(_QWORD *)a1), (const void *)(*(_QWORD *)a1 + 48LL * (a2 + 1)), 48LL * (v3 - a2 - 1));
    --*(_DWORD *)(a1 + 8);
  }
}
