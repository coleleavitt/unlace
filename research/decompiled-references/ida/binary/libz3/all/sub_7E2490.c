__int64 __fastcall sub_7E2490(_QWORD *a1, unsigned __int32 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **v6; // r12
  char **exception; // r12
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r15
  __int32 v13; // r13d
  const __m128i *v15; // rbx
  __int64 v16; // rax
  __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  const __m128i *v21; // r13
  unsigned int *v22; // r14
  unsigned __int64 v24; // rdx
  const __m128i *v25; // rax
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rsi
  unsigned int v30; // edx
  size_t v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // r13d
  size_t v34; // rsi
  unsigned int *v35; // rax
  _QWORD *v36; // rax
  unsigned int v37; // [rsp+8h] [rbp-70h]
  const __m128i *v38; // [rsp+18h] [rbp-60h] BYREF
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a2 >> 1;
  v10 = *(_QWORD *)(a1[10] + 2328LL);
  if ( v10 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v8);
  }
  sub_7E1020(v39, (__int64)a1, v10, a4, a5, a6);
  v11 = v39[0];
  v12 = v39[1];
  v13 = sub_7E58C0(a1, v39[0]);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
      sub_15D7BC0(v12, v11);
  }
  sub_7E1590(&v38, a1);
  v15 = v38;
  if ( v38 )
  {
    v16 = v38[-1].m128i_u32[3];
    if ( (_DWORD)v16 == v38[-1].m128i_i32[2] )
    {
      v30 = (unsigned int)(3 * v16 + 1) >> 1;
      v31 = 4 * v30 + 8;
      if ( 4 * (int)v16 + 8 >= (unsigned int)v31 || (unsigned int)v16 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v39, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v39);
        sub_233E40((__int64)v39);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v37 = (unsigned int)(3 * v16 + 1) >> 1;
      v32 = (unsigned int *)sub_186B300(&v38[-1].m128i_u64[1], v31);
      v15 = (const __m128i *)(v32 + 2);
      *v32 = v37;
      v17 = (__m128i *)&v32[v32[1] + 2];
    }
    else
    {
      v17 = (__m128i *)((char *)v38 + 4 * v16);
    }
  }
  else
  {
    v36 = (_QWORD *)sub_186B270(0x10u);
    *v36 = 2;
    v17 = (__m128i *)(v36 + 1);
    v15 = v17;
  }
  v17->m128i_i32[0] = v13;
  v18 = (unsigned int)(v15[-1].m128i_i32[3] + 1);
  v15[-1].m128i_i32[3] = v18;
  v19 = v18;
  v20 = 4 * v18;
  v21 = (const __m128i *)((char *)v15 + v20);
  if ( (a2 & 1) != 0 )
  {
    if ( v15 != v21 )
    {
      v22 = (unsigned int *)v15;
      do
        sub_7E5400(a1, a2, *v22++, 0);
      while ( v21 != (const __m128i *)v22 );
    }
    return sub_186B220(&v15[-1].m128i_u64[1]);
  }
  if ( v20 )
  {
    v24 = v20 - 4;
    v25 = v15;
    v26 = (v24 >> 2) + 1;
    if ( v24 > 8 )
    {
      v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      do
      {
        v28 = _mm_loadu_si128(v25++);
        v25[-1] = _mm_xor_si128(v28, v27);
      }
      while ( v25 != &v15[v26 >> 2] );
      if ( (v26 & 3) == 0 )
      {
LABEL_24:
        v19 = v15[-1].m128i_u32[3];
        goto LABEL_25;
      }
      v25 = (const __m128i *)((char *)v15 + 4 * (v26 & 0xFFFFFFFFFFFFFFFCLL));
    }
    v25->m128i_i32[0] ^= 1u;
    if ( v21 != (const __m128i *)((char *)v25->m128i_i64 + 4) )
    {
      v25->m128i_i32[1] ^= 1u;
      if ( v21 != (const __m128i *)&v25->m128i_u64[1] )
        v25->m128i_i32[2] ^= 1u;
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( (_DWORD)v19 == v15[-1].m128i_i32[2] )
  {
    v33 = (unsigned int)(3 * v19 + 1) >> 1;
    v34 = 4 * v33 + 8;
    if ( 4 * (int)v19 + 8 >= (unsigned int)v34 || (unsigned int)v19 >= v33 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v39, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v39);
      sub_233E40((__int64)v39);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v35 = (unsigned int *)sub_186B300(&v15[-1].m128i_u64[1], v34);
    *v35 = v33;
    v15 = (const __m128i *)(v35 + 2);
    v19 = v35[1];
  }
  v15->m128i_i32[v19] = a2;
  v29 = (unsigned int)(v15[-1].m128i_i32[3] + 1);
  v15[-1].m128i_i32[3] = v29;
  sub_7E56B0(a1, v29, v15, 0, 0);
  return sub_186B220(&v15[-1].m128i_u64[1]);
}

