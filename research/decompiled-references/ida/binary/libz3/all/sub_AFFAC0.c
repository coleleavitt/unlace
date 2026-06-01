__m128i *__fastcall sub_AFFAC0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __m128i *v18; // rbx
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __m128i *v21; // r14
  int v22; // esi
  __int64 v23; // r9
  __m128i *v24; // rdi
  __m128i *result; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i *v29; // rax
  int v30; // r10d
  __m128i *v31; // r8
  const __m128i *v32; // r15
  __m128i *v33; // r11
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  size_t v38; // [rsp+8h] [rbp-90h]
  unsigned int v39; // [rsp+8h] [rbp-90h]
  int v40; // [rsp+10h] [rbp-88h]
  size_t v41; // [rsp+10h] [rbp-88h]
  int v42; // [rsp+18h] [rbp-80h]
  __int64 v43[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a1 + 928);
  v8 = *(__int64 **)(a1 + 920);
  v9 = *(_DWORD *)(a3 + 12);
  v10 = v7 - 1;
  v7 *= 16;
  v11 = (__int64 *)((char *)v8 + v7);
  v12 = 16LL * (v9 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v9 && a3 == v15 )
        {
LABEL_70:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v43, "named assertion defined twice");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v43);
          sub_233E40((__int64)v43);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; v8 += 2 )
  {
    v28 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v28 + 12) == v9 && a3 == v28 )
        goto LABEL_70;
    }
    else if ( !v28 )
    {
      break;
    }
  }
LABEL_8:
  sub_E1F150(a1, a2, a3, v8, v13);
  sub_8E35C0(a1 + 880);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_8E35C0(a1 + 880);
  v16 = *(unsigned int *)(a1 + 928);
  v17 = *(_DWORD *)(a1 + 932) + *(_DWORD *)(a1 + 936);
  ++*(_DWORD *)(a3 + 8);
  if ( 3 * (int)v16 < (unsigned int)(4 * v17) )
  {
    v40 = 2 * v16;
    v38 = 16LL * (unsigned int)(2 * v16);
    v29 = (__m128i *)sub_186B270(v38);
    v20 = v38;
    v30 = v40;
    v18 = v29;
    v31 = &v29[v38 / 0x10];
    if ( v40 )
    {
      if ( (v38 & 0x10) == 0 || (*v29 = 0, ++v29, v29 != v31) )
      {
        do
        {
          *v29 = 0;
          v29 += 2;
          v29[-1] = 0;
        }
        while ( v29 != v31 );
      }
    }
    v32 = *(const __m128i **)(a1 + 920);
    v19 = v40 - 1;
    v21 = v31;
    v33 = (__m128i *)&v32[*(unsigned int *)(a1 + 928)];
    if ( v32 != v33 )
    {
      do
      {
        while ( v32->m128i_i64[0] <= 1uLL )
        {
          if ( v33 == ++v32 )
            goto LABEL_49;
        }
        v34 = 16LL * (*(_DWORD *)(v32->m128i_i64[0] + 12) & v19);
        v35 = &v18[(unsigned __int64)v34 / 0x10];
        if ( v38 == v34 )
        {
LABEL_53:
          if ( v18 == v35 )
          {
LABEL_61:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v36 = v18;
          while ( v36->m128i_i64[0] )
          {
            if ( v35 == ++v36 )
              goto LABEL_61;
          }
        }
        else
        {
          v36 = &v18[(unsigned __int64)v34 / 0x10];
          while ( v36->m128i_i64[0] )
          {
            if ( v31 == ++v36 )
              goto LABEL_53;
          }
        }
        v37 = _mm_loadu_si128(v32++);
        *v36 = v37;
      }
      while ( v33 != v32 );
LABEL_49:
      v33 = *(__m128i **)(a1 + 920);
    }
    if ( v33 )
    {
      v42 = v40;
      v41 = v38;
      v39 = v30 - 1;
      sub_186B220(v33);
      v30 = v42;
      v20 = v41;
      v19 = v39;
    }
    *(_QWORD *)(a1 + 920) = v18;
    *(_DWORD *)(a1 + 928) = v30;
    *(_DWORD *)(a1 + 936) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 920);
    v19 = v16 - 1;
    v20 = 16 * v16;
    v21 = (__m128i *)((char *)v18 + v20);
  }
  v22 = *(_DWORD *)(a3 + 12);
  v23 = 16LL * (v22 & v19);
  v24 = &v18[(unsigned __int64)v23 / 0x10];
  if ( v23 != v20 )
  {
    result = &v18[(unsigned __int64)v23 / 0x10];
    v26 = nullptr;
    while ( 1 )
    {
      v27 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v27 + 12) == v22 && a3 == v27 )
        {
          result->m128i_i64[0] = a3;
          result->m128i_i64[1] = a2;
          return result;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_59;
          v26 = (__int64 *)result;
          goto LABEL_60;
        }
        v26 = (__int64 *)result;
      }
      if ( ++result == v21 )
        goto LABEL_23;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_23:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v18->m128i_i64[0];
    if ( v18->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v22 && (__m128i *)a3 == result )
    {
      v18->m128i_i64[0] = a3;
      v18->m128i_i64[1] = a2;
      return result;
    }
LABEL_22:
    ++v18;
  }
  if ( result )
  {
    v26 = (__int64 *)v18;
    goto LABEL_22;
  }
  if ( v26 )
LABEL_59:
    --*(_DWORD *)(a1 + 936);
  else
    v26 = (__int64 *)v18;
LABEL_60:
  *v26 = a3;
  v26[1] = a2;
  ++*(_DWORD *)(a1 + 932);
  return result;
}

