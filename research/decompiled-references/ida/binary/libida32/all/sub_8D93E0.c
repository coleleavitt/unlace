__int64 __fastcall sub_8D93E0(__int64 *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5, int a6)
{
  int v6; // ebx
  __int64 v7; // r14
  __m128i *v8; // rbx
  __m128i *v9; // r13
  int v10; // r12d
  __m128i v11; // xmm1
  __m128i *v12; // rsi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rsi
  __m128i si128; // xmm0
  unsigned int v23; // ebp
  char *v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v33; // [rsp+8h] [rbp-90h]
  char v34[72]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-30h]

  v6 = a4 & 2;
  v35 = __readfsqword(0x28u);
  ptr = nullptr;
  v33 = 0;
  v7 = sub_711EB0((__int64 *)&ptr, a2, a3, a4 & 1, a5, a6);
  if ( v7 >= 0 && v6 )
    goto LABEL_11;
  v8 = (__m128i *)ptr;
  v9 = (__m128i *)((char *)ptr + 24 * v33);
  if ( v9 != ptr )
  {
    v10 = 50;
    if ( v7 <= 0 )
      v10 = 33;
    v11 = 0;
    do
    {
      v15 = a1[1];
      v16 = *a1;
      if ( a1[2] < (unsigned __int64)(v15 + 1) )
      {
        v17 = qvector_reserve(a1, v16, v15 + 1, 32);
        *a1 = v17;
        v16 = v17;
        v11 = 0;
        v15 = a1[1];
      }
      v8 = (__m128i *)((char *)v8 + 24);
      v12 = (__m128i *)(32 * v15 + v16);
      v12[1] = v11;
      v12->m128i_i64[1] = 0;
      v12->m128i_i64[0] = 0;
      ++a1[1];
      v13 = v12->m128i_i64[1];
      v12->m128i_i32[0] = v10;
      v14 = _mm_loadu_si128(v12 + 1);
      v12->m128i_i64[1] = v8[-2].m128i_i64[1];
      v12[1].m128i_i64[0] = v8[-1].m128i_i64[0];
      v12[1].m128i_i64[1] = v8[-1].m128i_i64[1];
      v8[-2].m128i_i64[1] = v13;
      v8[-1] = v14;
    }
    while ( v9 != v8 );
  }
  if ( v7 >= 0 )
  {
LABEL_11:
    v18 = a1[1];
    v19 = *a1;
    if ( a1[2] < (unsigned __int64)(v18 + 1) )
    {
      v30 = qvector_reserve(a1, v19, v18 + 1, 32);
      *a1 = v30;
      v19 = v30;
      v18 = a1[1];
    }
    v20 = v19 + 32 * v18;
    *(_QWORD *)v20 = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_OWORD *)(v20 + 16) = 0;
    ++a1[1];
    *(_DWORD *)v20 = 50;
    if ( v7 )
    {
      pretty_print_size(v34, 64, v7);
      sub_3573A0((char **)(v20 + 8));
    }
    else
    {
      v21 = *(_QWORD *)(v20 + 8);
      if ( *(_QWORD *)(v20 + 24) <= 0x27u )
      {
        v31 = qvector_reserve(v20 + 8, v21, 40, 1);
        *(_QWORD *)(v20 + 8) = v31;
        v21 = v31;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384B60);
      *(_QWORD *)(v20 + 16) = 40;
      *(__m128i *)v21 = si128;
      *(__m128i *)(v21 + 16) = _mm_load_si128((const __m128i *)&xmmword_2384B70);
      *(_QWORD *)(v21 + 31) = 0x656E6F6420656220LL;
      *(_BYTE *)(*(_QWORD *)(v20 + 8) + 39LL) = 0;
    }
    v23 = 0;
  }
  else
  {
    set_error_string();
    v23 = 33;
  }
  v24 = (char *)ptr;
  if ( ptr )
  {
    v25 = v33;
    if ( (_QWORD)v33 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[24 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)ptr;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v24);
  }
  return v23;
}

