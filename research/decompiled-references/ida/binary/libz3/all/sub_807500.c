__int64 __fastcall sub_807500(const __m128i *a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  __int32 v4; // r12d
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm1
  unsigned int *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  unsigned int v22; // ebp
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v27; // r12d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __m128i v32; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1[22].m128i_i64[1];
  v4 = a1[26].m128i_i32[0];
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 == v5 )
    return 0;
  v6 = a1[7].m128i_i64[0];
  v7 = sub_180C100(v6 + 2144, 24);
  v8 = *(_QWORD **)(v6 + 2128);
  v9 = v7;
  *(_QWORD *)v7 = &off_1C4C070;
  *(_QWORD *)(v7 + 8) = a1 + 26;
  *(_DWORD *)(v7 + 16) = v4;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    if ( v10 == *((_DWORD *)v8 - 2) )
    {
      v27 = (3 * v10 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v28 || v10 >= v27 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32.m128i_i64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v32);
        sub_233E40((__int64)&v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v8 - 1, v28);
      v30 = v29[1];
      v8 = v29 + 2;
      *(_QWORD *)(v6 + 2128) = v29 + 2;
      *v29 = v27;
      LODWORD(v29) = v30;
      v13 = &v8[v30];
      v12 = (_DWORD)v29 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v8[v11];
    }
  }
  else
  {
    v31 = (_QWORD *)sub_186B270(0x18u);
    v8 = v31 + 1;
    *v31 = 2;
    v12 = 1;
    *(_QWORD *)(v6 + 2128) = v8;
    v13 = v8;
  }
  *v13 = v9;
  *((_DWORD *)v8 - 1) = v12;
  v14 = a1[22].m128i_i64[1];
  if ( v14 )
  {
    v15 = a1[26].m128i_u32[0];
    do
    {
      if ( (unsigned int)v15 >= *(_DWORD *)(v14 - 4) )
        break;
      v16 = _mm_loadl_epi64(a1 + 8);
      v17 = *(unsigned int **)(v14 + 8 * v15);
      v18 = a1[17].m128i_i64[1];
      if ( v18 && (v19 = *v17, (unsigned int)v19 < *(_DWORD *)(v18 - 4)) )
      {
        v20 = *(_QWORD *)(v18 + 8 * v19);
        v32 = _mm_unpacklo_epi64((__m128i)v20, v16);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
      }
      else
      {
        v32 = _mm_unpacklo_epi64((__m128i)0LL, v16);
      }
      sub_14B9B80(a1[7].m128i_i64[0] + 2192, &v32);
      v21 = sub_7E4F30((__int64)a1, v17);
      v22 = sub_7E58C0((__int64)a1, v32.m128i_i64[0]);
      sub_7F15F0(a1[7].m128i_i64[0] + 160, v22);
      sub_7E5800((__int64)a1, v21, v22);
      v23 = v32.m128i_i64[0];
      if ( v32.m128i_i64[0] )
      {
        v24 = v32.m128i_i64[1];
        if ( (*(_DWORD *)(v32.m128i_i64[0] + 8))-- == 1 )
          sub_15D7BC0(v24, v23);
      }
      v14 = a1[22].m128i_i64[1];
      v15 = (unsigned int)(a1[26].m128i_i32[0] + 1);
      a1[26].m128i_i32[0] = v15;
    }
    while ( v14 );
  }
  return 1;
}

