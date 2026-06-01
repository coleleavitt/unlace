__int64 __fastcall sub_CE9B00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __m128i *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 *v10; // rbp
  int v11; // esi
  __int64 v12; // r9
  __m128i *v13; // rdi
  __m128i *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // rcx
  __int64 result; // rax
  unsigned int v26; // ebx
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  size_t v31; // rsi
  unsigned int *v32; // rax
  __m128i *v33; // rax
  int v34; // r10d
  __m128i *v35; // r8
  const __m128i *v36; // r15
  __m128i *v37; // r11
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  __m128i v41; // xmm0
  _QWORD *v42; // rax
  char **exception; // rbp
  __int64 v44; // rdx
  size_t v45; // [rsp+8h] [rbp-80h]
  unsigned int v46; // [rsp+8h] [rbp-80h]
  int v47; // [rsp+10h] [rbp-78h]
  size_t v48; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+18h] [rbp-70h]
  __int64 v50[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 16);
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(a1 + 20) + *(_DWORD *)(a1 + 24))) )
  {
    v47 = 2 * v6;
    v45 = 16LL * (unsigned int)(2 * v6);
    v33 = (__m128i *)sub_186B270(v45);
    v9 = v45;
    v34 = v47;
    v7 = v33;
    v35 = &v33[v45 / 0x10];
    if ( v47 )
    {
      if ( (v45 & 0x10) == 0 || (*v33 = 0, ++v33, v35 != v33) )
      {
        do
        {
          *v33 = 0;
          v33 += 2;
          v33[-1] = 0;
        }
        while ( v35 != v33 );
      }
    }
    v36 = *(const __m128i **)(a1 + 8);
    v8 = v47 - 1;
    v10 = (__int64 *)v35;
    v37 = (__m128i *)&v36[*(unsigned int *)(a1 + 16)];
    if ( v36 != v37 )
    {
      do
      {
        while ( v36->m128i_i64[0] <= 1uLL )
        {
          if ( v37 == ++v36 )
            goto LABEL_45;
        }
        v38 = 16LL * (*(_DWORD *)(v36->m128i_i64[0] + 12) & v8);
        v39 = &v7[(unsigned __int64)v38 / 0x10];
        if ( v45 == v38 )
        {
LABEL_49:
          if ( v7 == v39 )
          {
LABEL_59:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v40 = v7;
          while ( v40->m128i_i64[0] )
          {
            if ( v39 == ++v40 )
              goto LABEL_59;
          }
        }
        else
        {
          v40 = &v7[(unsigned __int64)v38 / 0x10];
          while ( v40->m128i_i64[0] )
          {
            if ( v35 == ++v40 )
              goto LABEL_49;
          }
        }
        v41 = _mm_loadu_si128(v36++);
        *v40 = v41;
      }
      while ( v37 != v36 );
LABEL_45:
      v37 = *(__m128i **)(a1 + 8);
    }
    if ( v37 )
    {
      v49 = v47;
      v48 = v45;
      v46 = v34 - 1;
      sub_186B220(v37);
      v34 = v49;
      v9 = v48;
      v8 = v46;
    }
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = v34;
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v7 = *(__m128i **)(a1 + 8);
    v8 = v6 - 1;
    v9 = 16 * v6;
    v10 = (__int64 *)((char *)v7->m128i_i64 + v9);
  }
  v11 = *(_DWORD *)(a2 + 12);
  v12 = 16LL * (v11 & v8);
  v13 = &v7[(unsigned __int64)v12 / 0x10];
  if ( v12 != v9 )
  {
    v14 = &v7[(unsigned __int64)v12 / 0x10];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = v14->m128i_i64[0];
      if ( v14->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a2 == v16 )
        {
          v14->m128i_i64[0] = a2;
          v14->m128i_i64[1] = a3;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_55;
          v15 = (__int64 *)v14;
          goto LABEL_56;
        }
        v15 = (__int64 *)v14;
      }
      if ( ++v14 == (__m128i *)v10 )
        goto LABEL_14;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v13 == v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v17 = v7->m128i_i64[0];
    if ( v7->m128i_i64[0] <= 1uLL )
    {
      if ( v17 )
      {
        v15 = (__int64 *)v7;
        goto LABEL_13;
      }
      if ( v15 )
LABEL_55:
        --*(_DWORD *)(a1 + 24);
      else
        v15 = (__int64 *)v7;
LABEL_56:
      v18 = *(_DWORD **)(a1 + 96);
      *v15 = a2;
      v15[1] = a3;
      ++*(_DWORD *)(a1 + 20);
      ++*(_DWORD *)(a2 + 8);
      if ( !v18 )
        goto LABEL_57;
LABEL_20:
      v19 = *(v18 - 1);
      v20 = *(v18 - 2);
      if ( v19 == v20 )
      {
        v26 = (3 * v20 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v27 || v20 >= v26 )
          goto LABEL_66;
        v28 = (unsigned int *)sub_186B300(v18 - 2, v27);
        v29 = v28[1];
        v18 = v28 + 2;
        *v28 = v26;
        *(_QWORD *)(a1 + 96) = v28 + 2;
        LODWORD(v28) = v29;
        v23 = (__int64 *)&v18[2 * v29];
        v20 = v26;
        v22 = (_DWORD)v28 + 1;
      }
      else
      {
        v21 = v19;
        v22 = v19 + 1;
        v23 = (__int64 *)&v18[2 * v21];
      }
      *v23 = a2;
      *(v18 - 1) = v22;
      if ( !a3 )
      {
LABEL_24:
        if ( v22 != v20 )
          goto LABEL_25;
        v30 = (3 * v22 + 1) >> 1;
        v31 = 8 * v30 + 8;
        if ( 8 * v22 + 8 < (unsigned int)v31 && v22 < v30 )
        {
          v32 = (unsigned int *)sub_186B300(v18 - 2, v31);
          v18 = v32 + 2;
          *v32 = v30;
          v22 = v32[1];
          *(_QWORD *)(a1 + 96) = v18;
          goto LABEL_25;
        }
LABEL_66:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_1643DA(v50, "Overflow encountered when expanding vector", v44);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_23:
      ++*(_DWORD *)(a3 + 8);
      v22 = *(v18 - 1);
      v20 = *(v18 - 2);
      goto LABEL_24;
    }
    if ( *(_DWORD *)(v17 + 12) == v11 && a2 == v17 )
      break;
LABEL_13:
    ++v7;
  }
  v7->m128i_i64[0] = a2;
  v7->m128i_i64[1] = a3;
LABEL_19:
  v18 = *(_DWORD **)(a1 + 96);
  ++*(_DWORD *)(a2 + 8);
  if ( v18 )
    goto LABEL_20;
LABEL_57:
  v42 = (_QWORD *)sub_186B270(0x18u);
  v18 = v42 + 1;
  v42[1] = a2;
  *v42 = 0x100000002LL;
  v22 = 1;
  *(_QWORD *)(a1 + 96) = v18;
  if ( a3 )
    goto LABEL_23;
LABEL_25:
  v24 = v22;
  result = v22 + 1;
  *(_QWORD *)&v18[2 * v24] = a3;
  *(v18 - 1) = result;
  return result;
}

