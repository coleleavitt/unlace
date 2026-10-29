__int64 __fastcall sub_88E740(__int64 a1, const __m128i *a2)
{
  char **exception; // rbx
  char **v3; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __m128i *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 result; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // r12d
  size_t v19; // rdi
  __int64 v20; // rax
  const __m128i *v21; // rdi
  _DWORD *v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // rdx
  const __m128i *v25; // rsi
  const __m128i *i; // rax
  __m128i v27; // xmm0
  unsigned int v28; // ebx
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34[4]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v35; // [rsp+30h] [rbp-58h] BYREF
  __m128i v36; // [rsp+40h] [rbp-48h] BYREF
  __int64 v37; // [rsp+50h] [rbp-38h]

  sub_829830(a1, a2->m128i_u32[1]);
  sub_829830(a1, a2->m128i_u32[2]);
  v35 = _mm_loadu_si128(a2);
  v5 = *(_QWORD **)(a1 + 240);
  v36 = _mm_loadu_si128(a2 + 1);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v18 = (unsigned int)(3 * v6 + 1) >> 1;
      v19 = 40 * v18 + 8;
      if ( 40 * (int)v6 + 8 >= (unsigned int)v19 || (unsigned int)v6 >= v18 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v34, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = sub_186B270(v19);
      v21 = *(const __m128i **)(a1 + 240);
      v22 = (_DWORD *)v20;
      v5 = (_QWORD *)(v20 + 8);
      if ( v21 )
      {
        v23 = v21[-1].m128i_u32[3];
        v24 = v5;
        v22[1] = v23;
        v25 = (const __m128i *)((char *)v21 + 40 * v23);
        for ( i = v21; v25 != i; *(v24 - 1) = i[-1].m128i_i64[1] )
        {
          v27 = _mm_loadu_si128(i);
          i = (const __m128i *)((char *)i + 40);
          v24 += 5;
          *(__m128i *)(v24 - 5) = v27;
          *(__m128i *)(v24 - 3) = _mm_loadu_si128((const __m128i *)((char *)i - 24));
        }
        sub_186B220(&v21[-1].m128i_u64[1]);
        v7 = (__m128i *)&v5[5 * (unsigned int)v22[1]];
      }
      else
      {
        *(_DWORD *)(v20 + 4) = 0;
        v7 = (__m128i *)(v20 + 8);
      }
      *(_QWORD *)(a1 + 240) = v5;
      *v22 = v18;
    }
    else
    {
      v7 = (__m128i *)&v5[5 * v6];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x58u);
    v5 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 240) = v32 + 1;
    v7 = (__m128i *)(v32 + 1);
  }
  v8 = _mm_load_si128(&v35);
  LOBYTE(v37) = 0;
  v9 = a1 + 240;
  v10 = *(_QWORD *)(v9 - 160);
  *v7 = v8;
  v7[1] = _mm_load_si128(&v36);
  v7[2].m128i_i64[0] = v37;
  ++*((_DWORD *)v5 - 1);
  v11 = (_QWORD *)sub_180C100(v10 + 2144, 16);
  v12 = *(_QWORD **)(v10 + 2128);
  v13 = v11;
  *v11 = off_1C55980;
  v11[1] = v9;
  if ( v12 )
  {
    v14 = *((_DWORD *)v12 - 1);
    if ( v14 == *((_DWORD *)v12 - 2) )
    {
      v28 = (3 * v14 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v29 || v14 >= v28 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35.m128i_i64, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v35);
        sub_233E40((__int64)&v35);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v12 - 1, v29);
      v31 = v30[1];
      v12 = v30 + 2;
      *(_QWORD *)(v10 + 2128) = v30 + 2;
      *v30 = v28;
      LODWORD(v30) = v31;
      v17 = &v12[v31];
      result = (unsigned int)((_DWORD)v30 + 1);
    }
    else
    {
      v15 = v14;
      result = v14 + 1;
      v17 = &v12[v15];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v12 = v33 + 1;
    *v33 = 2;
    result = 1;
    *(_QWORD *)(v10 + 2128) = v12;
    v17 = v12;
  }
  *v17 = v13;
  *((_DWORD *)v12 - 1) = result;
  return result;
}

