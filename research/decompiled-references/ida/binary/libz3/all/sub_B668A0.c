__int64 __fastcall sub_B668A0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned int *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // ebx
  _QWORD *v11; // rdx
  __int64 v12; // rbp
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rbx
  __m128i *v20; // rcx
  __m128i *v21; // r9
  __m128i *v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  __m128i v25; // xmm0
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v33; // rax
  __int64 v34[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = 0x7FFFFFFF8LL;
  v5 = *(_QWORD *)(a1 + 8560);
  ++*(_DWORD *)(a1 + 44);
  if ( v5 )
    v3 = 8LL * (unsigned int)(*(_DWORD *)(v5 - 4) - 1);
  v6 = *(unsigned int **)(v5 + v3);
  v7 = *(_QWORD *)(a1 + 8952);
  v8 = *v6;
  v9 = *(unsigned int *)(*(_QWORD *)(a1 + 8832) + 4 * v8);
  v10 = *v6;
  *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v9) = 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v9);
  if ( *((_WORD *)v6 + 2) == 2 )
  {
    sub_953870(*(_QWORD *)(a1 + 7472), v6);
    v11 = *(_QWORD **)(a1 + 8832);
    if ( v11 )
    {
LABEL_5:
      v12 = *((unsigned int *)v11 - 1);
      if ( v10 < (unsigned int)v12 )
        goto LABEL_21;
      v13 = v10 + 1;
      if ( (unsigned int)v12 >= v13 )
      {
        *((_DWORD *)v11 - 1) = v13;
        goto LABEL_21;
      }
      goto LABEL_11;
    }
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 8832);
    if ( v11 )
      goto LABEL_5;
  }
  v13 = v10 + 1;
  if ( !v13 )
    goto LABEL_21;
  v12 = 0;
  v33 = (_QWORD *)sub_186B270(0x10u);
  v11 = v33 + 1;
  *v33 = 2;
  *(_QWORD *)(a1 + 8832) = v33 + 1;
LABEL_11:
  while ( 1 )
  {
    v17 = *((_DWORD *)v11 - 2);
    if ( v17 >= v13 )
      break;
    v14 = (3 * v17 + 1) >> 1;
    v15 = 4 * v14 + 8;
    if ( 4 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_14E142(v34, "Overflow encountered when expanding vector", v2);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v34);
      sub_233E40((__int64)v34);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
    v11 = v16 + 2;
    *v16 = v14;
    *(_QWORD *)(a1 + 8832) = v16 + 2;
  }
  *((_DWORD *)v11 - 1) = v13;
  v18 = 4 * v12;
  v19 = 4LL * v13;
  v20 = (__m128i *)((char *)v11 + v18);
  v21 = (__m128i *)((char *)v11 + v19);
  if ( v18 != v19 )
  {
    v22 = (__m128i *)((char *)v11 + v18);
    v23 = ((unsigned __int64)((char *)&v21[-1].m128i_u64[1] + 4 - (char *)v20) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v21[-1].m128i_u64[1] + 4 - (char *)v20) <= 8 )
      goto LABEL_18;
    v24 = v23 >> 2;
    v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), 0);
    v26 = &v20[v24];
    if ( ((v24 * 16) & 0x10) == 0 || (v22 = v20 + 1, *v20 = v25, v26 != &v20[1]) )
    {
      do
      {
        *v22 = v25;
        v22 += 2;
        v22[-1] = v25;
      }
      while ( v26 != v22 );
    }
    v20 = (__m128i *)((char *)v20 + 4 * (v23 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v23 & 3) != 0 )
    {
LABEL_18:
      v20->m128i_i32[0] = 0x7FFFFFFF;
      if ( v21 != (__m128i *)((char *)v20->m128i_i64 + 4) )
      {
        v20->m128i_i32[1] = 0x7FFFFFFF;
        if ( v21 != (__m128i *)&v20->m128i_u64[1] )
          v20->m128i_i32[2] = 0x7FFFFFFF;
      }
    }
  }
LABEL_21:
  *((_DWORD *)v11 + v8) = 0x7FFFFFFF;
  v27 = *(_QWORD *)(a1 + 8560);
  result = *(unsigned int *)(v27 - 4);
  v29 = (unsigned int)(result - 1);
  v30 = *(_QWORD *)(v27 + 8 * v29);
  *(_DWORD *)(v27 - 4) = v29;
  if ( v30 )
  {
    v31 = *(_QWORD *)(a1 + 8552);
    if ( (*(_DWORD *)(v30 + 8))-- == 1 )
      return sub_15D7BC0(v31, v30);
  }
  return result;
}

