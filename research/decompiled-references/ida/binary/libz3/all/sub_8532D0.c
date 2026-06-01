__int64 __fastcall sub_8532D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  char **v5; // rbp
  _QWORD *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // r14d
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
  _QWORD *v24; // r15
  __int64 v25; // r13
  unsigned int v26; // eax
  _QWORD *v27; // r13
  _QWORD *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // ebx
  size_t v32; // rdi
  unsigned int *v33; // rax
  __int64 v34; // rdi
  unsigned int *v35; // r14
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rax
  unsigned int v46; // [rsp+1Ch] [rbp-6Ch]
  __int64 v47[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_QWORD **)(a1 + 208);
  if ( !v8 )
  {
    v10 = a2 + 1;
    if ( a2 == -1 )
    {
      v24 = *(_QWORD **)(a1 + 224);
      v25 = 0xFFFFFFFFLL;
      MEMORY[0x3FFFFFFFC] = 1;
      if ( !v24 )
        goto LABEL_42;
      goto LABEL_44;
    }
    v9 = 0;
    v43 = (_QWORD *)sub_186B270(0x10u);
    v8 = v43 + 1;
    *v43 = 2;
    *(_QWORD *)(a1 + 208) = v43 + 1;
    goto LABEL_8;
  }
  v9 = *((unsigned int *)v8 - 1);
  if ( a2 < (unsigned int)v9 )
    goto LABEL_20;
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
        sub_24ABB0(v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
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
      v24 = *(_QWORD **)(a1 + 224);
      v25 = a2;
      *((_DWORD *)v8 + a2) = 1;
      if ( v24 )
        goto LABEL_21;
LABEL_19:
      v46 = 0;
      v29 = (_QWORD *)sub_186B270(0x28u);
      v24 = v29 + 1;
      *v29 = 2;
      *(_QWORD *)(a1 + 224) = v29 + 1;
      goto LABEL_26;
    }
LABEL_20:
    v24 = *(_QWORD **)(a1 + 224);
    v25 = a2;
    *((_DWORD *)v8 + a2) = 1;
    if ( v24 )
      goto LABEL_21;
    v10 = a2 + 1;
    goto LABEL_19;
  }
  v24 = *(_QWORD **)(a1 + 224);
  v25 = a2;
  *((_DWORD *)v8 - 1) = v10;
  *((_DWORD *)v8 + a2) = 1;
  if ( !v24 )
  {
    if ( a2 == -1 )
    {
LABEL_42:
      v24 = nullptr;
      v25 = 0xFFFFFFFFLL;
      goto LABEL_22;
    }
    goto LABEL_19;
  }
LABEL_21:
  v26 = *((_DWORD *)v24 - 1);
  v46 = v26;
  if ( a2 < v26 )
    goto LABEL_22;
  v10 = a2 + 1;
  if ( v26 >= a2 + 1 )
  {
LABEL_44:
    *((_DWORD *)v24 - 1) = v10;
    goto LABEL_22;
  }
LABEL_26:
  while ( 1 )
  {
    v30 = *((_DWORD *)v24 - 2);
    if ( v30 >= v10 )
      break;
    while ( 1 )
    {
      v31 = (3 * v30 + 1) >> 1;
      v32 = 16 * v31 + 8;
      if ( 16 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v47, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B270(v32);
      v34 = *(_QWORD *)(a1 + 224);
      v35 = v33;
      v24 = v33 + 2;
      if ( !v34 )
        break;
      v36 = *(unsigned int *)(v34 - 4);
      v37 = 0;
      v33[1] = v36;
      v38 = 16 * v36;
      if ( v38 )
      {
        do
        {
          *(__m128i *)&v33[v37 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v34 + v37));
          v37 += 16LL;
        }
        while ( v38 != v37 );
      }
      sub_186B220((void *)(v34 - 8));
      *v35 = v31;
      v30 = *((_DWORD *)v24 - 2);
      *(_QWORD *)(a1 + 224) = v24;
      if ( v30 >= v10 )
        goto LABEL_33;
    }
    v33[1] = 0;
    *(_QWORD *)(a1 + 224) = v24;
    *v33 = v31;
  }
LABEL_33:
  *((_DWORD *)v24 - 1) = v10;
  v39 = 16LL * v10;
  v40 = 16LL * v46;
  if ( v40 != v39 )
  {
    v41 = 0;
    do
    {
      v42 = v41++;
      *(_OWORD *)&v24[2 * v42 + (unsigned __int64)v40 / 8] = 0;
    }
    while ( v41 < ((unsigned __int64)(v39 - 16 - v40) >> 4) + 1 );
  }
LABEL_22:
  v27 = &v24[2 * v25];
  *v27 = a3;
  v27[1] = a4;
  return a4;
}

