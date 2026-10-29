__int64 __fastcall sub_E20700(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __m128i *v8; // rbx
  unsigned int v9; // r10d
  __int64 v10; // rcx
  __m128i *v11; // r12
  int v12; // esi
  __int64 v13; // r10
  __m128i *v14; // rdi
  __m128i *v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  unsigned int v25; // ebx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  __m128i *v29; // rax
  int v30; // r9d
  __m128i *v31; // r8
  const __m128i *v32; // r15
  __m128i *v33; // r11
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  _QWORD *v38; // rax
  size_t v39; // [rsp+8h] [rbp-90h]
  unsigned int v40; // [rsp+8h] [rbp-90h]
  int v41; // [rsp+10h] [rbp-88h]
  size_t v42; // [rsp+10h] [rbp-88h]
  int v43; // [rsp+18h] [rbp-80h]
  __int64 v44[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 24);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  v7 = *(unsigned int *)(v4 + 56);
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(v4 + 60) + *(_DWORD *)(v4 + 64))) )
  {
    v41 = 2 * v7;
    v39 = 16LL * (unsigned int)(2 * v7);
    v29 = (__m128i *)sub_186B270(v39);
    v10 = v39;
    v30 = v41;
    v8 = v29;
    v31 = &v29[v39 / 0x10];
    if ( v41 )
    {
      do
      {
        v29->m128i_i64[0] = 0;
        ++v29;
        v29[-1].m128i_i32[2] = 0;
      }
      while ( v29 != v31 );
    }
    v32 = *(const __m128i **)(v4 + 48);
    v9 = v41 - 1;
    v11 = v31;
    v33 = (__m128i *)&v32[*(unsigned int *)(v4 + 56)];
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i64[0] <= 1uLL )
        {
          if ( v33 == ++v32 )
            goto LABEL_39;
        }
        v34 = 16LL * (*(_DWORD *)(v32->m128i_i64[0] + 12) & v9);
        v35 = &v8[(unsigned __int64)v34 / 0x10];
        if ( v39 == v34 )
        {
LABEL_43:
          if ( v8 == v35 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v8;
          while ( v36->m128i_i64[0] )
          {
            if ( v35 == ++v36 )
              goto LABEL_52;
          }
        }
        else
        {
          v36 = &v8[(unsigned __int64)v34 / 0x10];
          while ( v36->m128i_i64[0] )
          {
            if ( v31 == ++v36 )
              goto LABEL_43;
          }
        }
        v37 = _mm_loadu_si128(v32++);
        *v36 = v37;
      }
      while ( v33 != v32 );
LABEL_39:
      v33 = *(__m128i **)(v4 + 48);
    }
    if ( v33 )
    {
      v43 = v41;
      v42 = v39;
      v40 = v30 - 1;
      sub_186B220(v33);
      v30 = v43;
      v10 = v42;
      v9 = v40;
    }
    *(_QWORD *)(v4 + 48) = v8;
    *(_DWORD *)(v4 + 56) = v30;
    *(_DWORD *)(v4 + 64) = 0;
  }
  else
  {
    v8 = *(__m128i **)(v4 + 48);
    v9 = v7 - 1;
    v10 = 16 * v7;
    v11 = (__m128i *)((char *)v8 + v10);
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 16LL * (v12 & v9);
  v14 = &v8[(unsigned __int64)v13 / 0x10];
  if ( v13 != v10 )
  {
    v15 = &v8[(unsigned __int64)v13 / 0x10];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = v15->m128i_i64[0];
      if ( v15->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && a2 == v17 )
        {
          v15->m128i_i64[0] = a2;
          v15->m128i_i32[2] = v6;
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_49;
          v16 = v15;
          goto LABEL_50;
        }
        v16 = v15;
      }
      if ( ++v15 == v11 )
        goto LABEL_16;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_16:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v18 = v8->m128i_i64[0];
    if ( v8->m128i_i64[0] <= 1uLL )
    {
      if ( v18 )
      {
        v16 = v8;
        goto LABEL_15;
      }
      if ( v16 )
LABEL_49:
        --*(_DWORD *)(v4 + 64);
      else
        v16 = v8;
LABEL_50:
      v19 = *(__int64 **)(v4 + 24);
      v16->m128i_i64[0] = a2;
      v16->m128i_i32[2] = v6;
      ++*(_DWORD *)(v4 + 60);
      ++*(_DWORD *)(a2 + 8);
      if ( v19 )
        goto LABEL_22;
LABEL_51:
      v38 = (_QWORD *)sub_186B270(0x18u);
      v19 = v38 + 1;
      *v38 = 2;
      v22 = 1;
      *(_QWORD *)(v4 + 24) = v19;
      v23 = v19;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(v18 + 12) == v12 && a2 == v18 )
      break;
LABEL_15:
    ++v8;
  }
  v8->m128i_i64[0] = a2;
  v8->m128i_i32[2] = v6;
LABEL_21:
  v19 = *(__int64 **)(v4 + 24);
  ++*(_DWORD *)(a2 + 8);
  if ( !v19 )
    goto LABEL_51;
LABEL_22:
  v20 = *((_DWORD *)v19 - 1);
  if ( v20 == *((_DWORD *)v19 - 2) )
  {
    v25 = (3 * v20 + 1) >> 1;
    v26 = 8 * v25 + 8;
    if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v44, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v44);
      sub_233E40((__int64)v44);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v27 = (unsigned int *)sub_186B300(v19 - 1, v26);
    v28 = v27[1];
    v19 = (__int64 *)(v27 + 2);
    *(_QWORD *)(v4 + 24) = v27 + 2;
    *v27 = v25;
    LODWORD(v27) = v28;
    v23 = &v19[v28];
    v22 = (_DWORD)v27 + 1;
  }
  else
  {
    v21 = v20;
    v22 = v20 + 1;
    v23 = &v19[v21];
  }
LABEL_24:
  *v23 = a2;
  *((_DWORD *)v19 - 1) = v22;
  return v6;
}

