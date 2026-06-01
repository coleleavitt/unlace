void __fastcall sub_8C3430(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned int v7; // r14d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rbx
  __m128i *v13; // rcx
  __m128i *v14; // rdx
  __m128i *v15; // rax
  unsigned __int64 v16; // rsi
  __m128i v17; // xmm0
  __int64 v18; // r8
  __m128i *v19; // rdi
  _QWORD *v20; // rax
  char **exception; // rbx
  __int64 v22; // rdx
  __int64 v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a2;
  v5 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (unsigned int)v6 >= a2 )
    {
      *((_DWORD *)v5 - 1) = a2;
      return;
    }
  }
  else
  {
    if ( !a2 )
      return;
    v6 = 0;
    v20 = (_QWORD *)sub_186B270(0x10u);
    v5 = v20 + 1;
    *v20 = 2;
    *a1 = v20 + 1;
  }
  while ( 1 )
  {
    v10 = *((_DWORD *)v5 - 2);
    if ( v10 >= (unsigned int)v4 )
      break;
    v7 = (3 * v10 + 1) >> 1;
    v8 = 4 * v7 + 8;
    if ( 4 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_12D192(v23, "Overflow encountered when expanding vector", v22);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v23);
      sub_233E40((__int64)v23);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v9 = (unsigned int *)sub_186B300(v5 - 1, v8);
    v5 = v9 + 2;
    *v9 = v7;
    *a1 = v9 + 2;
  }
  *((_DWORD *)v5 - 1) = v4;
  v11 = 4 * v6;
  v12 = 4 * v4;
  v13 = (__m128i *)((char *)v5 + v11);
  v14 = (__m128i *)((char *)v5 + v12);
  if ( v11 != v12 )
  {
    v15 = v13;
    v16 = ((unsigned __int64)((char *)&v14[-1].m128i_u64[1] + 4 - (char *)v13) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v14[-1].m128i_u64[1] + 4 - (char *)v13) <= 8 )
      goto LABEL_15;
    v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
    v18 = v16 >> 2;
    v19 = &v13[v18];
    if ( ((v18 * 16) & 0x10) == 0 || (v15 = v13 + 1, *v13 = v17, &v13[1] != v19) )
    {
      do
      {
        *v15 = v17;
        v15 += 2;
        v15[-1] = v17;
      }
      while ( v15 != v19 );
    }
    if ( (v16 & 3) != 0 )
    {
      v13 = (__m128i *)((char *)v13 + 4 * (v16 & 0xFFFFFFFFFFFFFFFCLL));
LABEL_15:
      v13->m128i_i32[0] = a3;
      if ( v14 != (__m128i *)((char *)v13->m128i_i64 + 4) )
      {
        v13->m128i_i32[1] = a3;
        if ( v14 != (__m128i *)&v13->m128i_u64[1] )
          v13->m128i_i32[2] = a3;
      }
    }
  }
}

