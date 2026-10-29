__int64 __fastcall sub_63A20(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // ebx
  __int64 v5; // r14
  __m128i *v6; // rbx
  __m128i *v7; // r13
  int v8; // r12d
  __m128i v9; // xmm1
  __m128i *v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rsi
  __m128i si128; // xmm0
  unsigned int v21; // ebp
  char *v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  void *ptr; // [rsp+0h] [rbp-98h] BYREF
  __int128 v31; // [rsp+8h] [rbp-90h]
  char v32[72]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-30h]

  v4 = a4 & 2;
  v33 = __readfsqword(0x28u);
  ptr = nullptr;
  v31 = 0;
  v5 = sub_7EC10(&ptr, a2, a3, a4 & 1);
  if ( v5 >= 0 && v4 )
    goto LABEL_11;
  v6 = (__m128i *)ptr;
  v7 = (__m128i *)((char *)ptr + 24 * v31);
  if ( v7 != ptr )
  {
    v8 = 50;
    if ( v5 <= 0 )
      v8 = 33;
    v9 = 0;
    do
    {
      v13 = a1[1];
      v14 = *a1;
      if ( a1[2] < (unsigned __int64)(v13 + 1) )
      {
        v15 = sub_96080(a1, v14, v13 + 1, 32);
        *a1 = v15;
        v14 = v15;
        v9 = 0;
        v13 = a1[1];
      }
      v6 = (__m128i *)((char *)v6 + 24);
      v10 = (__m128i *)(32 * v13 + v14);
      v10[1] = v9;
      v10->m128i_i64[1] = 0;
      v10->m128i_i64[0] = 0;
      ++a1[1];
      v11 = v10->m128i_i64[1];
      v10->m128i_i32[0] = v8;
      v12 = _mm_loadu_si128(v10 + 1);
      v10->m128i_i64[1] = v6[-2].m128i_i64[1];
      v10[1].m128i_i64[0] = v6[-1].m128i_i64[0];
      v10[1].m128i_i64[1] = v6[-1].m128i_i64[1];
      v6[-2].m128i_i64[1] = v11;
      v6[-1] = v12;
    }
    while ( v7 != v6 );
  }
  if ( v5 >= 0 )
  {
LABEL_11:
    v16 = a1[1];
    v17 = *a1;
    if ( a1[2] < (unsigned __int64)(v16 + 1) )
    {
      v28 = sub_96080(a1, v17, v16 + 1, 32);
      *a1 = v28;
      v17 = v28;
      v16 = a1[1];
    }
    v18 = v17 + 32 * v16;
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 8) = 0;
    *(_OWORD *)(v18 + 16) = 0;
    ++a1[1];
    *(_DWORD *)v18 = 50;
    if ( v5 )
    {
      sub_93D20(v32, 64);
      sub_17D80((char **)(v18 + 8));
    }
    else
    {
      v19 = *(_QWORD *)(v18 + 8);
      if ( *(_QWORD *)(v18 + 24) <= 0x27u )
      {
        v29 = sub_96080(v18 + 8, v19, 40, 1);
        *(_QWORD *)(v18 + 8) = v29;
        v19 = v29;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1302E0);
      *(_QWORD *)(v18 + 16) = 40;
      *(__m128i *)v19 = si128;
      *(__m128i *)(v19 + 16) = _mm_load_si128((const __m128i *)&xmmword_1302F0);
      *(_QWORD *)(v19 + 31) = 0x656E6F6420656220LL;
      *(_BYTE *)(*(_QWORD *)(v18 + 8) + 39LL) = 0;
    }
    v21 = 0;
  }
  else
  {
    sub_8F890(0, "Failed to collect garbage");
    v21 = 33;
  }
  v22 = (char *)ptr;
  if ( ptr )
  {
    v23 = v31;
    if ( (_QWORD)v31 )
    {
      v24 = 0;
      do
      {
        v25 = &v22[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          j__free(v26);
          v22 = (char *)ptr;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v31 = 0;
    j__free(v22);
  }
  return v21;
}

