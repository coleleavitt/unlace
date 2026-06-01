unsigned __int64 __fastcall sub_853690(__int64 a1, unsigned int a2, int a3)
{
  char **exception; // rbp
  char **v4; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rax
  __m128i *v17; // rcx
  __m128i *v18; // r8
  __m128i *v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  __m128i v22; // xmm0
  __m128i *v23; // rdi
  unsigned __int64 result; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r15
  __int64 v27; // r13
  _QWORD *v28; // rax
  unsigned int v29; // r12d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // r13
  __int64 v33; // rbx
  __m128i *v34; // rcx
  __m128i *v35; // r9
  __m128i *v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // r8
  __m128i v39; // xmm0
  __m128i *v40; // rdi
  _QWORD *v41; // rax
  __int64 v42[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = *(_QWORD **)(a1 + 208);
  if ( !v8 )
  {
    v10 = a2 + 1;
    if ( a2 == -1 )
    {
      v25 = *(_QWORD **)(a1 + 216);
      result = 0x3FFFFFFFCLL;
      MEMORY[0x3FFFFFFFC] = 0;
      if ( !v25 )
        goto LABEL_42;
      v26 = 0x3FFFFFFFCLL;
      goto LABEL_37;
    }
    v9 = 0;
    v41 = (_QWORD *)sub_186B270(0x10u);
    v8 = v41 + 1;
    *v41 = 2;
    *(_QWORD *)(a1 + 208) = v41 + 1;
    goto LABEL_8;
  }
  v9 = *((unsigned int *)v8 - 1);
  if ( a2 < (unsigned int)v9 )
    goto LABEL_33;
  v10 = a2 + 1;
  if ( (unsigned int)v9 < a2 + 1 )
  {
LABEL_8:
    while ( 1 )
    {
      v14 = *((_DWORD *)v8 - 2);
      if ( v14 >= v10 )
        break;
      v11 = (3 * v14 + 1) >> 1;
      v12 = 4 * v11 + 8;
      if ( 4 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v8 - 1, v12);
      v8 = v13 + 2;
      *v13 = v11;
      *(_QWORD *)(a1 + 208) = v13 + 2;
    }
    v15 = 4 * v9;
    *((_DWORD *)v8 - 1) = v10;
    v16 = 4LL * v10;
    v17 = (__m128i *)((char *)v8 + v15);
    v18 = (__m128i *)((char *)v8 + v16);
    if ( v15 != v16 )
    {
      v19 = (__m128i *)((char *)v8 + v15);
      v20 = ((unsigned __int64)((char *)&v18[-1].m128i_u64[1] + 4 - (char *)v17) >> 2) + 1;
      if ( (unsigned __int64)((char *)&v18[-1].m128i_u64[1] + 4 - (char *)v17) <= 8 )
        goto LABEL_15;
      v21 = v20 >> 2;
      v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
      v23 = &v17[v21];
      if ( ((v21 * 16) & 0x10) == 0 || (v19 = v17 + 1, *v17 = v22, &v17[1] != v23) )
      {
        do
        {
          *v19 = v22;
          v19 += 2;
          v19[-1] = v22;
        }
        while ( v19 != v23 );
      }
      v17 = (__m128i *)((char *)v17 + 4 * (v20 & 0xFFFFFFFFFFFFFFFCLL));
      if ( (v20 & 3) != 0 )
      {
LABEL_15:
        v17->m128i_i32[0] = 3;
        if ( v18 != (__m128i *)((char *)v17->m128i_i64 + 4) )
        {
          v17->m128i_i32[1] = 3;
          if ( v18 != (__m128i *)&v17->m128i_u64[1] )
            v17->m128i_i32[2] = 3;
        }
      }
      result = a2;
      *((_DWORD *)v8 + a2) = 0;
      v25 = *(_QWORD **)(a1 + 216);
      v26 = 4LL * a2;
      if ( v25 )
        goto LABEL_34;
LABEL_19:
      v27 = 0;
      v28 = (_QWORD *)sub_186B270(0x10u);
      v25 = v28 + 1;
      *v28 = 2;
      *(_QWORD *)(a1 + 216) = v28 + 1;
      goto LABEL_23;
    }
LABEL_33:
    result = a2;
    *((_DWORD *)v8 + a2) = 0;
    v25 = *(_QWORD **)(a1 + 216);
    v26 = 4LL * a2;
    if ( v25 )
      goto LABEL_34;
    v10 = a2 + 1;
    goto LABEL_19;
  }
  result = a2;
  *((_DWORD *)v8 - 1) = v10;
  *((_DWORD *)v8 + a2) = 0;
  v25 = *(_QWORD **)(a1 + 216);
  v26 = 4LL * a2;
  if ( !v25 )
  {
    if ( a2 == -1 )
    {
LABEL_42:
      v26 = 0x3FFFFFFFCLL;
      v25 = nullptr;
      goto LABEL_35;
    }
    goto LABEL_19;
  }
LABEL_34:
  v27 = *((unsigned int *)v25 - 1);
  if ( a2 < (unsigned int)v27 )
    goto LABEL_35;
  v10 = a2 + 1;
  if ( (unsigned int)v27 >= a2 + 1 )
  {
LABEL_37:
    *((_DWORD *)v25 - 1) = v10;
    goto LABEL_35;
  }
LABEL_23:
  while ( 1 )
  {
    result = *((unsigned int *)v25 - 2);
    if ( (unsigned int)result >= v10 )
      break;
    v29 = (unsigned int)(3 * result + 1) >> 1;
    v30 = 4 * v29 + 8;
    if ( 4 * (int)result + 8 >= (unsigned int)v30 || (unsigned int)result >= v29 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v42, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v31 = (unsigned int *)sub_186B300(v25 - 1, v30);
    v25 = v31 + 2;
    *v31 = v29;
    *(_QWORD *)(a1 + 216) = v31 + 2;
  }
  *((_DWORD *)v25 - 1) = v10;
  v32 = 4 * v27;
  v33 = 4LL * v10;
  v34 = (__m128i *)((char *)v25 + v32);
  v35 = (__m128i *)((char *)v25 + v33);
  if ( v32 != v33 )
  {
    v36 = (__m128i *)((char *)v25 + v32);
    v37 = ((unsigned __int64)((char *)&v35[-1].m128i_u64[1] + 4 - (char *)v34) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v35[-1].m128i_u64[1] + 4 - (char *)v34) <= 8 )
      goto LABEL_30;
    v38 = v37 >> 2;
    v39 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
    v40 = &v34[v38];
    if ( ((v38 * 16) & 0x10) == 0 || (v36 = v34 + 1, *v34 = v39, &v34[1] != v40) )
    {
      do
      {
        *v36 = v39;
        v36 += 2;
        v36[-1] = v39;
      }
      while ( v36 != v40 );
    }
    result = v37 & 0xFFFFFFFFFFFFFFFCLL;
    v34 = (__m128i *)((char *)v34 + 4 * (v37 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v37 & 3) != 0 )
    {
LABEL_30:
      result = (unsigned __int64)v34->m128i_u64 + 4;
      v34->m128i_i32[0] = -2;
      if ( v35 != (__m128i *)((char *)v34->m128i_i64 + 4) )
      {
        result = (unsigned __int64)&v34->m128i_u64[1];
        v34->m128i_i32[1] = -2;
        if ( v35 != (__m128i *)&v34->m128i_u64[1] )
          v34->m128i_i32[2] = -2;
      }
    }
  }
LABEL_35:
  *(_DWORD *)((char *)v25 + v26) = a3;
  return result;
}

