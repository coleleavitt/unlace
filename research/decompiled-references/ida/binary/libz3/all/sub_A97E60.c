void __fastcall sub_A97E60(_QWORD *a1, unsigned int a2)
{
  unsigned int v4; // eax
  _QWORD *v5; // rdx
  unsigned int v6; // r13d
  __int64 v7; // r14
  _QWORD *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 *v15; // rcx
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  __m128i *v23; // rcx
  __m128i *v24; // r8
  __m128i *v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // r9
  __m128i v28; // xmm0
  __m128i *v29; // rdi
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r15
  __int64 v36; // rdx
  _QWORD *v37; // rax
  char **exception; // rbx
  char v39; // [rsp+0h] [rbp-98h]
  _QWORD *v40; // [rsp+0h] [rbp-98h]
  unsigned int v41; // [rsp+1Ch] [rbp-7Ch]
  __int64 v42; // [rsp+20h] [rbp-78h] BYREF
  __int64 v43; // [rsp+28h] [rbp-70h] BYREF
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  char *v46[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v47[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = sub_1016000(a1[63]);
  v5 = (_QWORD *)a1[18];
  v6 = v4;
  if ( v5 )
  {
    v7 = *((unsigned int *)v5 - 1);
    if ( v4 < (unsigned int)v7 )
      goto LABEL_3;
    v16 = v4 + 1;
    if ( (unsigned int)v7 >= v4 + 1 )
    {
      v8 = (_QWORD *)a1[21];
      *((_DWORD *)v5 - 1) = v16;
      v9 = 4LL * v4;
      *(_DWORD *)((char *)v5 + v9) = 2;
      if ( v8 )
        goto LABEL_4;
      if ( v4 == -1 )
      {
LABEL_39:
        v9 = 0x3FFFFFFFCLL;
        v8 = nullptr;
        goto LABEL_5;
      }
LABEL_26:
      v10 = 0;
      v30 = (_QWORD *)sub_186B270(0x10u);
      v8 = v30 + 1;
      *v30 = 2;
      a1[21] = v30 + 1;
      goto LABEL_30;
    }
  }
  else
  {
    v16 = v4 + 1;
    if ( v4 == -1 )
    {
      v8 = (_QWORD *)a1[21];
      MEMORY[0x3FFFFFFFC] = 2;
      if ( v8 )
      {
        v9 = 0x3FFFFFFFCLL;
LABEL_34:
        *((_DWORD *)v8 - 1) = v16;
        goto LABEL_5;
      }
      goto LABEL_39;
    }
    v7 = 0;
    v37 = (_QWORD *)sub_186B270(0x10u);
    v5 = v37 + 1;
    *v37 = 2;
    a1[18] = v37 + 1;
  }
  while ( 1 )
  {
    v20 = *((_DWORD *)v5 - 2);
    if ( v20 >= v16 )
      break;
    v17 = (3 * v20 + 1) >> 1;
    v18 = 4 * v17 + 8;
    if ( 4 * v20 + 8 >= (unsigned int)v18 || v20 >= v17 )
    {
LABEL_48:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_137C7A(v46);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v46);
      sub_233E40((__int64)v46);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v19 = (unsigned int *)sub_186B300(v5 - 1, v18);
    v5 = v19 + 2;
    *v19 = v17;
    a1[18] = v19 + 2;
  }
  v21 = 4 * v7;
  *((_DWORD *)v5 - 1) = v16;
  v22 = 4LL * v16;
  v23 = (__m128i *)((char *)v5 + v21);
  v24 = (__m128i *)((char *)v5 + v22);
  if ( v21 != v22 )
  {
    v25 = (__m128i *)((char *)v5 + v21);
    v26 = ((unsigned __int64)((char *)&v24[-1].m128i_u64[1] + 4 - (char *)v23) >> 2) + 1;
    if ( (unsigned __int64)((char *)&v24[-1].m128i_u64[1] + 4 - (char *)v23) <= 8 )
      goto LABEL_22;
    v27 = v26 >> 2;
    v28 = _mm_shuffle_epi32(_mm_cvtsi32_si128(3u), 0);
    v29 = &v23[v27];
    if ( ((v27 * 16) & 0x10) == 0 || (v25 = v23 + 1, *v23 = v28, &v23[1] != v29) )
    {
      do
      {
        *v25 = v28;
        v25 += 2;
        v25[-1] = v28;
      }
      while ( v25 != v29 );
    }
    v23 = (__m128i *)((char *)v23 + 4 * (v26 & 0xFFFFFFFFFFFFFFFCLL));
    if ( (v26 & 3) != 0 )
    {
LABEL_22:
      v23->m128i_i32[0] = 3;
      if ( v24 != (__m128i *)((char *)v23->m128i_i64 + 4) )
      {
        v23->m128i_i32[1] = 3;
        if ( v24 != (__m128i *)&v23->m128i_u64[1] )
          v23->m128i_i32[2] = 3;
      }
    }
    v8 = (_QWORD *)a1[21];
    *((_DWORD *)v5 + v6) = 2;
    v9 = 4LL * v6;
    if ( v8 )
      goto LABEL_4;
    goto LABEL_26;
  }
LABEL_3:
  v8 = (_QWORD *)a1[21];
  *((_DWORD *)v5 + v6) = 2;
  v9 = 4LL * v6;
  if ( !v8 )
  {
    v16 = v6 + 1;
    goto LABEL_26;
  }
LABEL_4:
  v10 = *((unsigned int *)v8 - 1);
  if ( v6 < (unsigned int)v10 )
    goto LABEL_5;
  v16 = v6 + 1;
  if ( (unsigned int)v10 >= v6 + 1 )
    goto LABEL_34;
LABEL_30:
  while ( 1 )
  {
    v34 = *((_DWORD *)v8 - 2);
    if ( v34 >= v16 )
      break;
    v31 = (3 * v34 + 1) >> 1;
    v32 = 4 * v31 + 8;
    if ( 4 * v34 + 8 >= (unsigned int)v32 || v34 >= v31 )
      goto LABEL_48;
    v33 = (unsigned int *)sub_186B300(v8 - 1, v32);
    v8 = v33 + 2;
    *v33 = v31;
    a1[21] = v33 + 2;
  }
  v35 = 4 * v10;
  *((_DWORD *)v8 - 1) = v16;
  v36 = 4LL * v16;
  if ( v35 != v36 )
  {
    v40 = v8;
    memset((char *)v8 + v35, 255, v36 - v35);
    v8 = v40;
  }
LABEL_5:
  *(_DWORD *)((char *)v8 + v9) = -1;
  if ( v41 != -1 )
  {
    v46[0] = nullptr;
    v46[1] = nullptr;
    v47[0] = 1;
    v47[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v47);
    v11 = a1[63];
    BYTE4(v47[0]) &= ~1u;
    LODWORD(v47[0]) = 1;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v12 = sub_FF9E10(v11, a2);
    v13 = sub_FF9E10(a1[63], v41);
    v14 = *(_QWORD *)(*a1 + 32LL);
    v15 = *(__int64 **)(v14 + 8LL * v12);
    if ( v15[1] != *(_QWORD *)(*(_QWORD *)(v14 + 8LL * v13) + 8LL) )
    {
      v39 = sub_A72E00(*v15);
      if ( v39 == (unsigned __int8)sub_A72E00(**(_QWORD **)(*(_QWORD *)(*a1 + 32LL) + 8LL * v13))
        && (unsigned __int8)sub_A7E890(a1, a2, &v42, (__int64)v46, 1)
        && (unsigned __int8)sub_A7E890(a1, a2, &v43, (__int64)v46, 0)
        && (unsigned __int8)sub_A7E890(a1, v41, &v44, (__int64)v46, 1)
        && (unsigned __int8)sub_A7E890(a1, v41, &v45, (__int64)v46, 0) )
      {
        sub_A7AF60(a1);
        sub_A74EB0(a1, v42, a1 + 106);
        sub_A74EB0(a1, v43, a1 + 106);
        sub_A74EB0(a1, v44, a1 + 106);
        sub_A74EB0(a1, v45, a1 + 106);
        ++*((_DWORD *)a1 + 114);
        sub_A97610(a1, v12, v13);
      }
    }
    sub_25A130((char *)v46);
  }
  *((_BYTE *)a1 + 769) = 1;
}

