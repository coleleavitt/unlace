void __fastcall sub_BA8300(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // r14d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rbx
  __m128i *v14; // rdi
  __int64 v15; // rbx
  __m128i *v16; // rax
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __m128i *v20; // rcx
  _QWORD *v21; // rax
  char **exception; // rbx
  char *v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2;
  v6 = (_QWORD *)*a1;
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    if ( (unsigned int)v7 >= a2 )
    {
      *((_DWORD *)v6 - 1) = a2;
      return;
    }
  }
  else
  {
    if ( !a2 )
      return;
    v7 = 0;
    v21 = (_QWORD *)sub_186B270(0x18u);
    v6 = v21 + 1;
    *v21 = 2;
    *a1 = v21 + 1;
  }
  while ( 1 )
  {
    v11 = *((_DWORD *)v6 - 2);
    if ( v11 >= (unsigned int)v5 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = 8 * v8 + 8;
    if ( 8 * v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v23);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v23);
      sub_233E40((__int64)v23);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v6 - 1, v9);
    v6 = v10 + 2;
    *v10 = v8;
    *a1 = v10 + 2;
  }
  *((_DWORD *)v6 - 1) = v5;
  v12 = 8 * v7;
  v13 = 8 * v5;
  v14 = (__m128i *)&v6[(unsigned __int64)v12 / 8];
  if ( v12 != v13 )
  {
    v15 = v13 - v12;
    v16 = v14;
    v17 = ((unsigned __int64)(v15 - 8) >> 3) + 1;
    if ( v15 == 8 )
    {
LABEL_15:
      v14->m128i_i64[0] = a3;
      return;
    }
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3);
    v19 = v17 >> 1;
    v20 = &v14[v19];
    if ( ((v19 * 16) & 0x10) == 0 || (v16 = v14 + 1, *v14 = v18, &v14[1] != v20) )
    {
      do
      {
        *v16 = v18;
        v16 += 2;
        v16[-1] = v18;
      }
      while ( v16 != v20 );
    }
    if ( (v17 & 1) != 0 )
    {
      v14 = (__m128i *)((char *)v14 + 8 * (v17 & 0xFFFFFFFFFFFFFFFELL));
      goto LABEL_15;
    }
  }
}

