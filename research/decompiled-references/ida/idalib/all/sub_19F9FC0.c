_WORD *__fastcall sub_19F9FC0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  size_t v7; // rax
  size_t v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int *v10; // rax
  size_t v11; // r15
  char *v12; // rsi
  size_t v13; // rbx
  __int64 v14; // rdi
  _WORD *v15; // r15
  size_t v17; // rax
  size_t v18; // rbp
  void *v19; // rsi
  __int64 v20; // rdi
  int v21; // ebp
  _QWORD *v22; // rsi
  size_t v23; // rdi
  size_t v24; // r15
  size_t v25; // r15
  void *v26; // rax
  __int64 v27; // rdi
  size_t v28; // rdx
  char *v29; // rdi
  unsigned __int64 v30; // [rsp+8h] [rbp-110h]
  unsigned int *v31; // [rsp+8h] [rbp-110h]
  void *v32; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  char v35; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v36[8]; // [rsp+50h] [rbp-C8h] BYREF
  __int16 v37; // [rsp+70h] [rbp-A8h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __m128i si128; // [rsp+88h] [rbp-90h]
  _BYTE v40[128]; // [rsp+98h] [rbp-80h] BYREF

  v5 = *(_QWORD *)(a1 + 248);
  v6 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v6 = 0;
  v7 = j__strlen("__cblayout_");
  v8 = v7;
  ptr = v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  if ( v7 > 0x40 )
  {
    sub_2236E10(&ptr, v40, v7, 1);
    v29 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    v9 = 64;
    if ( !v7 )
      goto LABEL_5;
    v29 = v40;
  }
  memcpy(v29, "__cblayout_", v8);
  v8 += si128.m128i_i64[0];
  v9 = si128.m128i_u64[1];
LABEL_5:
  si128.m128i_i64[0] = v8;
  if ( v6 )
  {
    v10 = *(unsigned int **)(v6 + 16);
    v11 = *v10;
    if ( v9 < v11 + v8 )
    {
      v31 = v10;
      sub_2236E10(&ptr, v40, v11 + v8, 1);
      v8 = si128.m128i_i64[0];
      v10 = v31;
      v12 = (char *)ptr;
      if ( !v11 )
      {
LABEL_9:
        v13 = v11 + v8;
        v14 = *(_QWORD *)(v5 + 17504);
        si128.m128i_i64[0] = v13;
        v15 = (_WORD *)sub_6F3470(v14, v12, v13);
        *v15 = *v15 & 0xFE00 | 5;
        if ( !a3 )
          goto LABEL_10;
        goto LABEL_18;
      }
    }
    else
    {
      v12 = (char *)ptr;
      if ( !*v10 )
        goto LABEL_9;
    }
    memcpy(&v12[v8], v10 + 4, v11);
    v12 = (char *)ptr;
    v8 = si128.m128i_i64[0];
    goto LABEL_9;
  }
  v30 = v9;
  v17 = j__strlen("anon");
  v18 = v17;
  if ( v30 < v17 + v8 )
  {
    sub_2236E10(&ptr, v40, v17 + v8, 1);
    v8 = si128.m128i_i64[0];
  }
  v19 = ptr;
  if ( v18 )
  {
    memcpy((char *)ptr + v8, "anon", v18);
    v8 = si128.m128i_i64[0];
    v19 = ptr;
  }
  v13 = v18 + v8;
  v20 = *(_QWORD *)(v5 + 17504);
  si128.m128i_i64[0] = v13;
  v15 = (_WORD *)sub_6F3470(v20, v19, v13);
  *v15 = *v15 & 0xFE00 | 5;
LABEL_18:
  v21 = 0;
LABEL_19:
  v22 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
    goto LABEL_21;
LABEL_20:
  v22 = (_QWORD *)*v22;
LABEL_21:
  while ( sub_19F5210((__int64)v15, (unsigned __int64)v22) )
  {
    si128.m128i_i64[0] = v13;
    if ( !++v21 )
      goto LABEL_19;
    v23 = v13;
    v24 = j__strlen("_");
    if ( v24 + v13 > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v40, v24 + v13, 1);
      v23 = si128.m128i_i64[0];
    }
    if ( v24 )
    {
      memcpy((char *)ptr + v23, "_", v24);
      v23 = si128.m128i_i64[0];
    }
    v36[0] = v21;
    si128.m128i_i64[0] = v24 + v23;
    v37 = 265;
    sub_2253560(&src, v36);
    v25 = n;
    v26 = src;
    v27 = si128.m128i_i64[0];
    if ( n + si128.m128i_i64[0] > si128.m128i_i64[1] )
    {
      v32 = src;
      sub_2236E10(&ptr, v40, n + si128.m128i_i64[0], 1);
      v27 = si128.m128i_i64[0];
      v26 = v32;
    }
    if ( v25 )
    {
      memcpy((char *)ptr + v27, v26, v25);
      v27 = si128.m128i_i64[0];
    }
    v28 = v25 + v27;
    si128.m128i_i64[0] = v25 + v27;
    if ( src != &v35 )
    {
      operator delete(src);
      v28 = si128.m128i_i64[0];
    }
    v15 = (_WORD *)sub_6F3470(*(_QWORD *)(v5 + 17504), ptr, v28);
    *v15 = *v15 & 0xFE00 | 5;
    v22 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      goto LABEL_20;
  }
LABEL_10:
  if ( ptr != v40 )
    free(ptr);
  return v15;
}
