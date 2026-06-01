__int64 __fastcall sub_AB5C30(_QWORD *a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  size_t v12; // rsi
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rbx
  __m128i *v18; // rsi
  __int64 v19; // rbx
  __m128i *v20; // rax
  unsigned __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // r8
  __m128i v24; // xmm0
  __m128i *v25; // rdi
  __int64 result; // rax
  _QWORD *v27; // rax
  __m128i v28[6]; // [rsp+8h] [rbp-60h] BYREF

  v8 = (_QWORD *)*a1;
  v28[0].m128i_i64[0] = a4;
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( a2 < (unsigned int)v9 )
      goto LABEL_17;
    v10 = a2 + 1;
    if ( (unsigned int)v9 >= a2 + 1 )
    {
      *((_DWORD *)v8 - 1) = v10;
      goto LABEL_17;
    }
  }
  else
  {
    v10 = a2 + 1;
    if ( a2 == -1 )
      goto LABEL_17;
    v9 = 0;
    v27 = (_QWORD *)sub_186B270(0x18u);
    v8 = v27 + 1;
    *v27 = 2;
    *a1 = v27 + 1;
  }
  while ( 1 )
  {
    v15 = *((_DWORD *)v8 - 2);
    if ( v15 >= v10 )
      break;
    v11 = (3 * v15 + 1) >> 1;
    v12 = 8 * v11 + 8;
    v13 = v11;
    if ( 8 * v15 + 8 >= (unsigned int)v12 || v15 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_139F3A(&v28[0].m128i_i64[1], "Overflow encountered when expanding vector", v5);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v28[0].m128i_i64[1]);
      sub_233E40((__int64)&v28[0].m128i_i64[1]);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v14 = (unsigned int *)sub_186B300(v8 - 1, v12);
    v8 = v14 + 2;
    *v14 = v13;
    *a1 = v14 + 2;
  }
  *((_DWORD *)v8 - 1) = v10;
  v16 = 8 * v9;
  v17 = 8LL * v10;
  v18 = (__m128i *)&v8[(unsigned __int64)v16 / 8];
  if ( v16 != v17 )
  {
    v19 = v17 - v16;
    v20 = (__m128i *)&v8[(unsigned __int64)v16 / 8];
    v21 = ((unsigned __int64)(v19 - 8) >> 3) + 1;
    if ( v19 == 8 )
    {
LABEL_16:
      v18->m128i_i64[0] = v28[0].m128i_i64[0];
      goto LABEL_17;
    }
    v22 = _mm_loadl_epi64(v28);
    v23 = v21 >> 1;
    v24 = _mm_unpacklo_epi64(v22, v22);
    v25 = &v18[v23];
    if ( ((v23 * 16) & 0x10) == 0 || (v20 = v18 + 1, *v18 = v24, v25 != &v18[1]) )
    {
      do
      {
        *v20 = v24;
        v20 += 2;
        v20[-1] = v24;
      }
      while ( v25 != v20 );
    }
    if ( (v21 & 1) != 0 )
    {
      v18 = (__m128i *)((char *)v18 + 8 * (v21 & 0xFFFFFFFFFFFFFFFELL));
      goto LABEL_16;
    }
  }
LABEL_17:
  result = *a3;
  v8[a2] = *a3;
  return result;
}

