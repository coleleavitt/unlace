__m128i *__fastcall sub_64E220(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __m128 v14; // xmm0
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rbx
  unsigned int v19; // r9d
  __int64 v20; // rcx
  __m128i *v21; // r13
  int v22; // esi
  __int64 v23; // r9
  __m128i *v24; // rdi
  __m128i *result; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ebp
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __m128 v33; // xmm0
  _QWORD *v34; // rax
  __m128i *v35; // rax
  int v36; // r10d
  __m128i *v37; // r8
  const __m128i *v38; // r15
  __m128i *v39; // r11
  __int64 v40; // rax
  __m128i *v41; // rdx
  __m128i *v42; // rax
  __m128i v43; // xmm0
  _QWORD *v44; // rax
  size_t v45; // [rsp+8h] [rbp-80h]
  unsigned int v46; // [rsp+8h] [rbp-80h]
  int v47; // [rsp+10h] [rbp-78h]
  size_t v48; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+18h] [rbp-70h]
  __int64 v50[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v8 = *(_QWORD **)(a1 + 2136);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v28 = (3 * v9 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v29 || v9 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v50, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v8 - 1, v29);
      v31 = v30[1];
      *v30 = v28;
      *(_QWORD *)(a1 + 2136) = v30 + 2;
      *(_QWORD *)&v30[2 * v31 + 2] = a2;
      v30[1] = v31 + 1;
      if ( a3 )
        goto LABEL_7;
LABEL_32:
      v32 = sub_186B270(0x50u);
      v33 = _mm_loadh_ps((const double *)a1);
      *(_QWORD *)v32 = qword_1C68C08;
      v15 = v32;
      *(_DWORD *)(v32 + 8) = 0;
      *(__m128 *)(v32 + 16) = v33;
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      *(_BYTE *)(v32 + 32) = sub_16256D0(a1 + 56, a2, v32 + 40);
      *(_QWORD *)v15 = &off_1C52AD8;
      v34 = (_QWORD *)sub_186B270(0xC0u);
      *v34 = 0;
      v34[3] = 0;
      v34[6] = 0;
      v34[9] = 0;
      v34[12] = 0;
      v34[15] = 0;
      v34[18] = 0;
      v34[21] = 0;
      *(_QWORD *)(v15 + 48) = v34;
      *(_QWORD *)(v15 + 56) = 8;
      *(_DWORD *)(v15 + 64) = 0;
      *(_QWORD *)(v15 + 72) = 0;
      goto LABEL_11;
    }
    v10 = v9;
    v11 = v9 + 1;
    v12 = &v8[v10];
  }
  else
  {
    v44 = (_QWORD *)sub_186B270(0x18u);
    v8 = v44 + 1;
    *v44 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 2136) = v8;
    v12 = v8;
  }
  *v12 = a2;
  *((_DWORD *)v8 - 1) = v11;
  if ( !a3 )
    goto LABEL_32;
LABEL_7:
  if ( a3 != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 325);
  }
  v13 = sub_186B270(0x50u);
  v14 = _mm_loadh_ps((const double *)a1);
  *(_QWORD *)v13 = qword_1C68C08;
  v15 = v13;
  *(_DWORD *)(v13 + 8) = 1;
  *(__m128 *)(v13 + 16) = v14;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_BYTE *)(v13 + 32) = sub_16256D0(a1 + 56, a2, v13 + 40);
  *(_QWORD *)v15 = &off_1C52AA8;
  v16 = (_QWORD *)sub_186B270(0xC0u);
  *v16 = 0;
  v16[1] = 0;
  v16[3] = 0;
  v16[4] = 0;
  v16[6] = 0;
  v16[7] = 0;
  v16[9] = 0;
  v16[10] = 0;
  v16[12] = 0;
  v16[13] = 0;
  v16[15] = 0;
  v16[16] = 0;
  v16[18] = 0;
  v16[19] = 0;
  v16[21] = 0;
  v16[22] = 0;
  *(_QWORD *)(v15 + 48) = v16;
  *(_QWORD *)(v15 + 56) = 8;
  *(_DWORD *)(v15 + 64) = 0;
  *(_QWORD *)(v15 + 72) = 0;
LABEL_11:
  v17 = *(unsigned int *)(a1 + 2272);
  if ( 3 * (int)v17 < (unsigned int)(4 * (*(_DWORD *)(a1 + 2276) + *(_DWORD *)(a1 + 2280))) )
  {
    v47 = 2 * v17;
    v45 = 16LL * (unsigned int)(2 * v17);
    v35 = (__m128i *)sub_186B270(v45);
    v20 = v45;
    v36 = v47;
    v18 = v35;
    v37 = &v35[v45 / 0x10];
    if ( v47 )
    {
      if ( (v45 & 0x10) == 0 || (*v35 = 0, ++v35, v35 != v37) )
      {
        do
        {
          *v35 = 0;
          v35 += 2;
          v35[-1] = 0;
        }
        while ( v35 != v37 );
      }
    }
    v38 = *(const __m128i **)(a1 + 2264);
    v19 = v47 - 1;
    v21 = v37;
    v39 = (__m128i *)&v38[*(unsigned int *)(a1 + 2272)];
    if ( v38 != v39 )
    {
      do
      {
        while ( v38->m128i_i64[0] <= 1uLL )
        {
          if ( v39 == ++v38 )
            goto LABEL_49;
        }
        v40 = 16LL * (*(_DWORD *)(v38->m128i_i64[0] + 12) & v19);
        v41 = &v18[(unsigned __int64)v40 / 0x10];
        if ( v45 == v40 )
        {
LABEL_53:
          if ( v18 == v41 )
          {
LABEL_61:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v42 = v18;
          while ( v42->m128i_i64[0] )
          {
            if ( v41 == ++v42 )
              goto LABEL_61;
          }
        }
        else
        {
          v42 = &v18[(unsigned __int64)v40 / 0x10];
          while ( v42->m128i_i64[0] )
          {
            if ( v37 == ++v42 )
              goto LABEL_53;
          }
        }
        v43 = _mm_loadu_si128(v38++);
        *v42 = v43;
      }
      while ( v39 != v38 );
LABEL_49:
      v39 = *(__m128i **)(a1 + 2264);
    }
    if ( v39 )
    {
      v49 = v47;
      v48 = v45;
      v46 = v36 - 1;
      sub_186B220(v39);
      v36 = v49;
      v20 = v48;
      v19 = v46;
    }
    *(_QWORD *)(a1 + 2264) = v18;
    *(_DWORD *)(a1 + 2272) = v36;
    *(_DWORD *)(a1 + 2280) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 2264);
    v19 = v17 - 1;
    v20 = 16 * v17;
    v21 = (__m128i *)((char *)v18 + v20);
  }
  v22 = *(_DWORD *)(a2 + 12);
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
        if ( *(_DWORD *)(v27 + 12) == v22 && a2 == v27 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = v15;
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
        goto LABEL_24;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_24:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v18->m128i_i64[0];
    if ( v18->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v22 && (__m128i *)a2 == result )
    {
      v18->m128i_i64[0] = a2;
      v18->m128i_i64[1] = v15;
      return result;
    }
LABEL_23:
    ++v18;
  }
  if ( result )
  {
    v26 = (__int64 *)v18;
    goto LABEL_23;
  }
  if ( v26 )
LABEL_59:
    --*(_DWORD *)(a1 + 2280);
  else
    v26 = (__int64 *)v18;
LABEL_60:
  *v26 = a2;
  v26[1] = v15;
  ++*(_DWORD *)(a1 + 2276);
  return result;
}

