__int64 __fastcall sub_54EE10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int32 v5; // r15d
  __int64 v6; // r12
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  __m128i *v12; // r14
  int v13; // r10d
  int v14; // edi
  __int64 v15; // r9
  __m128i *v16; // r13
  __int64 v17; // rax
  __m128i *v18; // rsi
  __m128i *i; // rax
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // r10
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rdx
  __int64 result; // rax
  unsigned int j; // r14d
  __int64 v29; // r13
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __m128i *v42; // rax
  int v43; // edx
  __m128i *v44; // rcx
  char *v45; // r11
  char *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r8
  const __m128i *v49; // rbx
  const __m128i *v50; // r12
  __int64 v51; // rdx
  __m128i *v52; // rsi
  __m128i *v53; // rdx
  unsigned int v54; // [rsp+8h] [rbp-A0h]
  size_t v55; // [rsp+8h] [rbp-A0h]
  __int64 v56; // [rsp+18h] [rbp-90h]
  __int64 v57; // [rsp+18h] [rbp-90h]
  int v58; // [rsp+20h] [rbp-88h]
  __int64 v59[11]; // [rsp+50h] [rbp-58h] BYREF

  v5 = 0;
  v6 = a1;
  if ( !a2 )
    goto LABEL_19;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = a2;
  v12 = *(__m128i **)(a1 + 40);
  v13 = v9 - 1;
  v14 = *(_DWORD *)(a1 + 48);
  v15 = 16 * v9;
  v16 = (__m128i *)((char *)v12 + v15);
  v17 = 16LL * (v13 & v10);
  v18 = &v12[(unsigned __int64)v17 / 0x10];
  if ( v17 != v15 )
  {
    for ( i = &v12[(unsigned __int64)v17 / 0x10]; v16 != i; ++i )
    {
      v20 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v10 && v11 == v20 )
        {
LABEL_18:
          v5 = i->m128i_i32[2];
          goto LABEL_19;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_9;
      }
    }
  }
  if ( v12 != v18 )
  {
    for ( i = v12; v18 != i; ++i )
    {
      v40 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v40 + 12) == v10 && v11 == v40 )
          goto LABEL_18;
      }
      else if ( !v40 )
      {
        break;
      }
    }
  }
LABEL_9:
  v5 = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 64) = v5 + 1;
  if ( 3 * v14 < (unsigned int)(4 * (*(_DWORD *)(v6 + 52) + *(_DWORD *)(v6 + 56))) )
  {
    v56 = v11;
    v55 = 16LL * (unsigned int)(2 * v14);
    v42 = (__m128i *)sub_186B270(v55);
    v43 = 2 * v14;
    v15 = v55;
    v11 = v56;
    v12 = v42;
    v44 = &v42[v55 / 0x10];
    if ( 2 * v14 )
    {
      do
      {
        v42->m128i_i64[0] = 0;
        ++v42;
        v42[-1].m128i_i32[2] = 0;
      }
      while ( v42 != v44 );
    }
    v45 = *(char **)(v6 + 40);
    v13 = 2 * v14 - 1;
    v16 = v44;
    v46 = &v45[16 * *(unsigned int *)(v6 + 48)];
    if ( v45 != v46 )
    {
      v47 = v6;
      v48 = a4;
      v49 = *(const __m128i **)(v6 + 40);
      v50 = (const __m128i *)&v45[16 * *(unsigned int *)(v6 + 48)];
      do
      {
        if ( v49->m128i_i64[0] > 1uLL )
        {
          v51 = 16LL * (*(_DWORD *)(v49->m128i_i64[0] + 12) & (unsigned int)v13);
          v52 = &v12[(unsigned __int64)v51 / 0x10];
          if ( v55 == v51 )
          {
LABEL_60:
            if ( v12 == v52 )
            {
LABEL_74:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v53 = v12;
            while ( v53->m128i_i64[0] )
            {
              if ( v52 == ++v53 )
                goto LABEL_74;
            }
          }
          else
          {
            v53 = &v12[(unsigned __int64)v51 / 0x10];
            while ( v53->m128i_i64[0] )
            {
              if ( v44 == ++v53 )
                goto LABEL_60;
            }
          }
          *v53 = _mm_loadu_si128(v49);
        }
        ++v49;
      }
      while ( v50 != v49 );
      a4 = v48;
      v46 = *(char **)(v47 + 40);
      v11 = v56;
      v6 = v47;
      v43 = 2 * v14;
    }
    if ( v46 )
    {
      v58 = v43;
      v57 = v11;
      sub_186B220(v46);
      v43 = v58;
      v11 = v57;
      v15 = v55;
      v13 = 2 * v14 - 1;
    }
    *(_QWORD *)(v6 + 40) = v12;
    *(_DWORD *)(v6 + 48) = v43;
    *(_DWORD *)(v6 + 56) = 0;
  }
  v21 = *(_DWORD *)(v11 + 12);
  v22 = 16LL * (v21 & (unsigned int)v13);
  v23 = &v12[(unsigned __int64)v22 / 0x10];
  if ( v22 != v15 )
  {
    v24 = &v12[(unsigned __int64)v22 / 0x10];
    v25 = nullptr;
    while ( 1 )
    {
      v26 = v24->m128i_i64[0];
      if ( v24->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v26 + 12) == v21 && v11 == v26 )
        {
          v24->m128i_i64[0] = v11;
          v24->m128i_i32[2] = v5;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v25 )
            goto LABEL_71;
          v25 = v24;
          goto LABEL_72;
        }
        v25 = v24;
      }
      if ( ++v24 == v16 )
        goto LABEL_36;
    }
  }
  v25 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v23 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v39 = v12->m128i_i64[0];
    if ( v12->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v39 + 12) == v21 && v11 == v39 )
    {
      v12->m128i_i64[0] = v11;
      v12->m128i_i32[2] = v5;
      goto LABEL_19;
    }
LABEL_35:
    ++v12;
  }
  if ( v39 )
  {
    v25 = v12;
    goto LABEL_35;
  }
  if ( v25 )
LABEL_71:
    --*(_DWORD *)(v6 + 56);
  else
    v25 = v12;
LABEL_72:
  v25->m128i_i64[0] = v11;
  v25->m128i_i32[2] = v5;
  ++*(_DWORD *)(v6 + 52);
LABEL_19:
  result = *(_QWORD *)(a3 + 8);
  for ( j = 0; result; result = *(_QWORD *)(a3 + 8) )
  {
    if ( j >= *(_DWORD *)(result - 4) )
      break;
    v29 = *(_QWORD *)(result + 8LL * j);
    if ( !_bittest(&v5, j) )
      v29 = sub_15E1A70(*(_QWORD *)(v6 + 16));
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v30 = *(_QWORD **)(a4 + 8);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v35 = (3 * v31 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v59, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (3 * v31 + 1) >> 1;
        v37 = (unsigned int *)sub_186B300(v30 - 1, v36);
        v30 = v37 + 2;
        *v37 = v54;
        v38 = v37[1];
        *(_QWORD *)(a4 + 8) = v37 + 2;
        LODWORD(v37) = v38;
        v34 = &v30[v38];
        v33 = (_DWORD)v37 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v30[v32];
      }
    }
    else
    {
      v41 = (_QWORD *)sub_186B270(0x18u);
      v30 = v41 + 1;
      *v41 = 2;
      v33 = 1;
      *(_QWORD *)(a4 + 8) = v30;
      v34 = v30;
    }
    *v34 = v29;
    ++j;
    *((_DWORD *)v30 - 1) = v33;
  }
  return result;
}

