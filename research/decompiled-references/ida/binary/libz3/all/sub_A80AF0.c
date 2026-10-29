__int64 __fastcall sub_A80AF0(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  size_t v8; // rsi
  unsigned int *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  __m128i *v13; // rcx
  __m128i *v14; // r8
  __m128i *v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // r9
  __m128i v18; // xmm0
  __m128i *v19; // rdi
  _QWORD *v20; // rbx
  __int64 result; // rax
  __int64 v22; // r14
  __int64 v23; // r15
  _QWORD *v24; // rax
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // r15
  __int64 v29; // rdx
  _QWORD *v30; // rax
  char **exception; // rbp
  char *v32[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 144);
  if ( !v4 )
  {
    v6 = a2 + 1;
    if ( a2 == -1 )
    {
      v20 = *(_QWORD **)(a1 + 168);
      result = 0x3FFFFFFFCLL;
      MEMORY[0x3FFFFFFFC] = 2;
      if ( !v20 )
        goto LABEL_35;
      v22 = 0x3FFFFFFFCLL;
      goto LABEL_30;
    }
    v5 = 0;
    v30 = (_QWORD *)sub_186B270(0x10u);
    v4 = v30 + 1;
    *v30 = 2;
    *(_QWORD *)(a1 + 144) = v30 + 1;
LABEL_8:
    while ( 1 )
    {
      v10 = *((_DWORD *)v4 - 2);
      if ( v10 >= v6 )
        break;
      v7 = (3 * v10 + 1) >> 1;
      v8 = 4 * v7 + 8;
      if ( 4 * v10 + 8 >= (unsigned int)v8 || v10 >= v7 )
      {
LABEL_39:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v32);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v9 = (unsigned int *)sub_186B300(v4 - 1, v8);
      v4 = v9 + 2;
      *v9 = v7;
      *(_QWORD *)(a1 + 144) = v9 + 2;
    }
    v11 = 4 * v5;
    *((_DWORD *)v4 - 1) = v6;
    v12 = 4LL * v6;
    v13 = (__m128i *)((char *)v4 + v11);
    v14 = (__m128i *)((char *)v4 + v12);
    if ( v11 != v12 )
    {
      v15 = (__m128i *)((char *)v4 + v11);
      v16 = ((unsigned __int64)((char *)&v14[-1].m128i_u64[1] + 4 - (char *)v13) >> 2) + 1;
      if ( (unsigned __int64)((char *)&v14[-1].m128i_u64[1] + 4 - (char *)v13) <= 8 )
        goto LABEL_15;
      v17 = v16 >> 2;
      v18 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
      v19 = &v13[v17];
      if ( ((v17 * 16) & 0x10) == 0 || (v15 = v13 + 1, *v13 = v18, &v13[1] != v19) )
      {
        do
        {
          *v15 = v18;
          v15 += 2;
          v15[-1] = v18;
        }
        while ( v15 != v19 );
      }
      v13 = (__m128i *)((char *)v13 + 4 * (v16 & 0xFFFFFFFFFFFFFFFCLL));
      if ( (v16 & 3) != 0 )
      {
LABEL_15:
        v13->m128i_i32[0] = 3;
        if ( v14 != (__m128i *)((char *)v13->m128i_i64 + 4) )
        {
          v13->m128i_i32[1] = 3;
          if ( v14 != (__m128i *)&v13->m128i_u64[1] )
            v13->m128i_i32[2] = 3;
        }
      }
      v20 = *(_QWORD **)(a1 + 168);
      result = a2;
      *((_DWORD *)v4 + a2) = 2;
      v22 = 4LL * a2;
      if ( !v20 )
        goto LABEL_19;
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  v5 = *((unsigned int *)v4 - 1);
  if ( a2 >= (unsigned int)v5 )
  {
    v6 = a2 + 1;
    if ( (unsigned int)v5 >= a2 + 1 )
    {
      v20 = *(_QWORD **)(a1 + 168);
      result = a2;
      *((_DWORD *)v4 - 1) = v6;
      v22 = 4LL * a2;
      *(_DWORD *)((char *)v4 + v22) = 2;
      if ( !v20 )
      {
        if ( a2 == -1 )
        {
LABEL_35:
          v22 = 0x3FFFFFFFCLL;
          v20 = nullptr;
          goto LABEL_28;
        }
LABEL_19:
        v23 = 0;
        v24 = (_QWORD *)sub_186B270(0x10u);
        v20 = v24 + 1;
        *v24 = 2;
        *(_QWORD *)(a1 + 168) = v24 + 1;
        goto LABEL_23;
      }
      goto LABEL_27;
    }
    goto LABEL_8;
  }
LABEL_26:
  v20 = *(_QWORD **)(a1 + 168);
  result = a2;
  *((_DWORD *)v4 + a2) = 2;
  v22 = 4LL * a2;
  if ( !v20 )
  {
    v6 = a2 + 1;
    goto LABEL_19;
  }
LABEL_27:
  v23 = *((unsigned int *)v20 - 1);
  if ( a2 < (unsigned int)v23 )
    goto LABEL_28;
  v6 = a2 + 1;
  if ( (unsigned int)v23 >= a2 + 1 )
  {
LABEL_30:
    *((_DWORD *)v20 - 1) = v6;
    goto LABEL_28;
  }
LABEL_23:
  while ( 1 )
  {
    result = *((unsigned int *)v20 - 2);
    if ( (unsigned int)result >= v6 )
      break;
    v25 = (unsigned int)(3 * result + 1) >> 1;
    v26 = 4 * v25 + 8;
    if ( 4 * (int)result + 8 >= (unsigned int)v26 || (unsigned int)result >= v25 )
      goto LABEL_39;
    v27 = (unsigned int *)sub_186B300(v20 - 1, v26);
    v20 = v27 + 2;
    *v27 = v25;
    *(_QWORD *)(a1 + 168) = v27 + 2;
  }
  v28 = 4 * v23;
  *((_DWORD *)v20 - 1) = v6;
  v29 = 4LL * v6;
  if ( v28 != v29 )
    result = (__int64)memset((char *)v20 + v28, 255, v29 - v28);
LABEL_28:
  *(_DWORD *)((char *)v20 + v22) = -1;
  return result;
}

