__m128i *__fastcall sub_665470(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // r15
  __m128i *v11; // rbx
  unsigned int v12; // r8d
  size_t v13; // r15
  __m128i *v14; // rbp
  int v15; // esi
  __int64 v16; // rax
  __m128i *v17; // rdi
  __m128i *result; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // ebx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __m128i *v25; // rax
  int v26; // r9d
  __m128i *v27; // rcx
  const __m128i *v28; // r14
  __m128i *v29; // r10
  __int64 v30; // rax
  __m128i *v31; // rdx
  __m128i *v32; // rax
  __m128i v33; // xmm0
  _QWORD *v34; // rax
  int v35; // [rsp+8h] [rbp-80h]
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v21 = (3 * v6 + 1) >> 1;
      v22 = 8 * v21 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v22 || v6 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v36, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v5 - 1, v22);
      v24 = v23[1];
      v5 = v23 + 2;
      *v23 = v21;
      *(_QWORD *)(a1 + 16) = v23 + 2;
      LODWORD(v23) = v24;
      v9 = &v5[v24];
      v8 = (_DWORD)v23 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v5 = v34 + 1;
    *v34 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 16) = v5;
    v9 = v5;
  }
  *v9 = a2;
  *((_DWORD *)v5 - 1) = v8;
  v10 = *(unsigned int *)(a1 + 56);
  if ( 3 * (int)v10 < (unsigned int)(4 * (*(_DWORD *)(a1 + 60) + *(_DWORD *)(a1 + 64))) )
  {
    v35 = 2 * v10;
    v13 = 16LL * (unsigned int)(2 * v10);
    v25 = (__m128i *)sub_186B270(v13);
    v26 = v35;
    v11 = v25;
    v27 = &v25[v13 / 0x10];
    if ( v35 )
    {
      if ( (v13 & 0x10) == 0 || (*v25 = 0, ++v25, v27 != v25) )
      {
        do
        {
          *v25 = 0;
          v25 += 2;
          v25[-1] = 0;
        }
        while ( v27 != v25 );
      }
    }
    v28 = *(const __m128i **)(a1 + 48);
    v12 = v35 - 1;
    v14 = v27;
    v29 = (__m128i *)&v28[*(unsigned int *)(a1 + 56)];
    if ( v28 != v29 )
    {
      do
      {
        while ( v28->m128i_i64[0] <= 1uLL )
        {
          if ( v29 == ++v28 )
            goto LABEL_40;
        }
        v30 = 16LL * (*(_DWORD *)(v28->m128i_i64[0] + 12) & v12);
        v31 = &v11[(unsigned __int64)v30 / 0x10];
        if ( v13 == v30 )
        {
LABEL_44:
          if ( v11 == v31 )
          {
LABEL_52:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v32 = v11;
          while ( v32->m128i_i64[0] )
          {
            if ( v31 == ++v32 )
              goto LABEL_52;
          }
        }
        else
        {
          v32 = &v11[(unsigned __int64)v30 / 0x10];
          while ( v32->m128i_i64[0] )
          {
            if ( v27 == ++v32 )
              goto LABEL_44;
          }
        }
        v33 = _mm_loadu_si128(v28++);
        *v32 = v33;
      }
      while ( v29 != v28 );
LABEL_40:
      v29 = *(__m128i **)(a1 + 48);
    }
    if ( v29 )
    {
      sub_186B220(v29);
      v26 = v35;
      v12 = v35 - 1;
    }
    *(_QWORD *)(a1 + 48) = v11;
    *(_DWORD *)(a1 + 56) = v26;
    *(_DWORD *)(a1 + 64) = 0;
  }
  else
  {
    v11 = *(__m128i **)(a1 + 48);
    v12 = v10 - 1;
    v13 = 16 * v10;
    v14 = &v11[v13 / 0x10];
  }
  v15 = *(_DWORD *)(a2 + 12);
  v16 = 16LL * (v15 & v12);
  v17 = &v11[(unsigned __int64)v16 / 0x10];
  if ( v16 != v13 )
  {
    result = &v11[(unsigned __int64)v16 / 0x10];
    v19 = nullptr;
    while ( 1 )
    {
      v20 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v15 && a2 == v20 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = 0;
          return result;
        }
      }
      else
      {
        if ( !v20 )
        {
          if ( v19 )
            goto LABEL_50;
          v19 = (__int64 *)result;
          goto LABEL_51;
        }
        v19 = (__int64 *)result;
      }
      if ( ++result == v14 )
        goto LABEL_19;
    }
  }
  v19 = nullptr;
  while ( 1 )
  {
LABEL_19:
    if ( v17 == v11 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v11->m128i_i64[0];
    if ( v11->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v15 && (__m128i *)a2 == result )
    {
      v11->m128i_i64[0] = a2;
      v11->m128i_i64[1] = 0;
      return result;
    }
LABEL_18:
    ++v11;
  }
  if ( result )
  {
    v19 = (__int64 *)v11;
    goto LABEL_18;
  }
  if ( v19 )
LABEL_50:
    --*(_DWORD *)(a1 + 64);
  else
    v19 = (__int64 *)v11;
LABEL_51:
  *v19 = a2;
  v19[1] = 0;
  ++*(_DWORD *)(a1 + 60);
  return result;
}

