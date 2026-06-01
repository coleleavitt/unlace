__int64 __fastcall sub_853D30(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  size_t v10; // rsi
  unsigned int *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  __m128i *v15; // rcx
  __m128i *v16; // r8
  __m128i *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  __m128i v20; // xmm0
  __m128i *v21; // rdi
  _QWORD *v22; // rbx
  __int64 result; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  _QWORD *v26; // rax
  unsigned int v27; // r13d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a1 + 208);
  if ( !v6 )
  {
    v8 = a2 + 1;
    if ( a2 == -1 )
    {
      v22 = *(_QWORD **)(a1 + 232);
      result = 0x3FFFFFFFCLL;
      MEMORY[0x3FFFFFFFC] = 2;
      if ( !v22 )
        goto LABEL_35;
      v24 = 0x3FFFFFFFCLL;
      goto LABEL_30;
    }
    v7 = 0;
    v32 = (_QWORD *)sub_186B270(0x10u);
    v6 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 208) = v32 + 1;
    goto LABEL_8;
  }
  v7 = *((unsigned int *)v6 - 1);
  if ( a2 < (unsigned int)v7 )
    goto LABEL_26;
  v8 = a2 + 1;
  if ( (unsigned int)v7 < a2 + 1 )
  {
LABEL_8:
    while ( 1 )
    {
      v12 = *((_DWORD *)v6 - 2);
      if ( v12 >= v8 )
        break;
      v9 = (3 * v12 + 1) >> 1;
      v10 = 4 * v9 + 8;
      if ( 4 * v12 + 8 >= (unsigned int)v10 || v12 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v33, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v6 - 1, v10);
      v6 = v11 + 2;
      *v11 = v9;
      *(_QWORD *)(a1 + 208) = v11 + 2;
    }
    v13 = 4 * v7;
    *((_DWORD *)v6 - 1) = v8;
    v14 = 4LL * v8;
    v15 = (__m128i *)((char *)v6 + v13);
    v16 = (__m128i *)((char *)v6 + v14);
    if ( v13 != v14 )
    {
      v17 = (__m128i *)((char *)v6 + v13);
      v18 = ((unsigned __int64)((char *)&v16[-1].m128i_u64[1] + 4 - (char *)v15) >> 2) + 1;
      if ( (unsigned __int64)((char *)&v16[-1].m128i_u64[1] + 4 - (char *)v15) <= 8 )
        goto LABEL_15;
      v19 = v18 >> 2;
      v20 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
      v21 = &v15[v19];
      if ( ((v19 * 16) & 0x10) == 0 || (v17 = v15 + 1, *v15 = v20, &v15[1] != v21) )
      {
        do
        {
          *v17 = v20;
          v17 += 2;
          v17[-1] = v20;
        }
        while ( v17 != v21 );
      }
      v15 = (__m128i *)((char *)v15 + 4 * (v18 & 0xFFFFFFFFFFFFFFFCLL));
      if ( (v18 & 3) != 0 )
      {
LABEL_15:
        v15->m128i_i32[0] = 3;
        if ( v16 != (__m128i *)((char *)v15->m128i_i64 + 4) )
        {
          v15->m128i_i32[1] = 3;
          if ( v16 != (__m128i *)&v15->m128i_u64[1] )
            v15->m128i_i32[2] = 3;
        }
      }
      v22 = *(_QWORD **)(a1 + 232);
      result = a2;
      *((_DWORD *)v6 + a2) = 2;
      v24 = 4LL * a2;
      if ( v22 )
        goto LABEL_27;
LABEL_19:
      v25 = 0;
      v26 = (_QWORD *)sub_186B270(0x10u);
      v22 = v26 + 1;
      *v26 = 2;
      *(_QWORD *)(a1 + 232) = v26 + 1;
      goto LABEL_23;
    }
LABEL_26:
    v22 = *(_QWORD **)(a1 + 232);
    result = a2;
    *((_DWORD *)v6 + a2) = 2;
    v24 = 4LL * a2;
    if ( v22 )
      goto LABEL_27;
    v8 = a2 + 1;
    goto LABEL_19;
  }
  v22 = *(_QWORD **)(a1 + 232);
  result = a2;
  *((_DWORD *)v6 - 1) = v8;
  v24 = 4LL * a2;
  *(_DWORD *)((char *)v6 + v24) = 2;
  if ( !v22 )
  {
    if ( a2 == -1 )
    {
LABEL_35:
      v24 = 0x3FFFFFFFCLL;
      v22 = nullptr;
      goto LABEL_28;
    }
    goto LABEL_19;
  }
LABEL_27:
  v25 = *((unsigned int *)v22 - 1);
  if ( a2 < (unsigned int)v25 )
    goto LABEL_28;
  v8 = a2 + 1;
  if ( (unsigned int)v25 >= a2 + 1 )
  {
LABEL_30:
    *((_DWORD *)v22 - 1) = v8;
    goto LABEL_28;
  }
LABEL_23:
  while ( 1 )
  {
    result = *((unsigned int *)v22 - 2);
    if ( (unsigned int)result >= v8 )
      break;
    v27 = (unsigned int)(3 * result + 1) >> 1;
    v28 = 4 * v27 + 8;
    if ( 4 * (int)result + 8 >= (unsigned int)v28 || (unsigned int)result >= v27 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v33, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v33);
      sub_233E40((__int64)v33);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v29 = (unsigned int *)sub_186B300(v22 - 1, v28);
    v22 = v29 + 2;
    *v29 = v27;
    *(_QWORD *)(a1 + 232) = v29 + 2;
  }
  v30 = 4 * v25;
  *((_DWORD *)v22 - 1) = v8;
  v31 = 4LL * v8;
  if ( v30 != v31 )
    result = (__int64)memset((char *)v22 + v30, 255, v31 - v30);
LABEL_28:
  *(_DWORD *)((char *)v22 + v24) = -1;
  return result;
}

