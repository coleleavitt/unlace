void __fastcall sub_8AC200(const __m128i **a1, unsigned int a2, const __m128i *a3)
{
  const __m128i *v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r12d
  size_t v9; // rdi
  unsigned int *v10; // r13
  const __m128i *v11; // r14
  __int64 v12; // rcx
  const __m128i *v13; // rax
  __m128i *v14; // rdx
  const __m128i *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  const __m128i *v18; // rbx
  const __m128i *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i *v22; // rax
  __m128i *v23; // rbp
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  const __m128i *v27; // r12
  const __m128i *v28; // rbx
  const __m128i *v29; // rdi
  char **exception; // rbx
  __int64 v31; // rdx
  unsigned int v34; // [rsp+Ch] [rbp-5Ch]
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v5 = v4[-1].m128i_u32[3];
    v34 = v5;
    if ( (unsigned int)v5 >= a2 )
    {
      v25 = 16 * v5;
      v26 = 16LL * a2;
      v27 = &v4[(unsigned __int64)v25 / 0x10];
      v28 = &v4[(unsigned __int64)v26 / 0x10];
      if ( v26 != v25 )
      {
        do
        {
          v29 = v28++;
          sub_15D0DF0(v29);
        }
        while ( v27 != v28 );
        v4 = *a1;
      }
      v4[-1].m128i_i32[3] = a2;
      return;
    }
  }
  else
  {
    v34 = 0;
    if ( !a2 )
      return;
    v24 = (_QWORD *)sub_186B270(0x28u);
    *v24 = 2;
    v4 = (const __m128i *)(v24 + 1);
    *a1 = (const __m128i *)(v24 + 1);
  }
  while ( 1 )
  {
    v6 = v4[-1].m128i_u32[2];
    v7 = a2;
    if ( v6 >= a2 )
      break;
    while ( 1 )
    {
      v8 = (3 * v6 + 1) >> 1;
      v9 = 16 * v8 + 8;
      if ( 16 * v6 + 8 >= (unsigned int)v9 || v6 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v35, "Overflow encountered when expanding vector", v31);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B270(v9);
      v4 = (const __m128i *)(v10 + 2);
      v11 = *a1;
      if ( !*a1 )
        break;
      v12 = v11[-1].m128i_u32[3];
      v13 = *a1;
      v14 = (__m128i *)(v10 + 2);
      v10[1] = v12;
      v15 = &v11[v12];
      if ( v11 != v15 )
      {
        do
        {
          v16 = v13->m128i_i8[8] == 0;
          *v14 = _mm_loadu_si128(v13);
          v13->m128i_i32[0] = 0;
          if ( !v16 )
            v13->m128i_i8[8] = 0;
          ++v13;
          ++v14;
        }
        while ( v15 != v13 );
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
      *v10 = v8;
      v7 = a2;
      *a1 = v4;
      v6 = *v10;
      if ( *v10 >= a2 )
        goto LABEL_15;
    }
    v10[1] = 0;
    *a1 = v4;
    *v10 = v8;
  }
LABEL_15:
  v4[-1].m128i_i32[3] = v7;
  v20 = 16LL * v7;
  v21 = 16LL * v34;
  v22 = (__m128i *)&v4[(unsigned __int64)v21 / 0x10];
  v23 = (__m128i *)&v4[(unsigned __int64)v20 / 0x10];
  if ( v21 != v20 )
  {
    v16 = a3->m128i_i8[8] == 0;
    *v22 = _mm_loadu_si128(a3);
    if ( v16 )
      goto LABEL_19;
    ++v22;
    a3->m128i_i32[0] = 0;
    for ( a3->m128i_i8[8] = 0; v23 != v22; a3->m128i_i32[0] = 0 )
    {
      *v22 = _mm_loadu_si128(a3);
LABEL_19:
      ++v22;
    }
  }
}

