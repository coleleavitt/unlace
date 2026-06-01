__int64 __fastcall sub_E6CC00(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  char *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  char *v8; // rsi
  __int64 v9; // rdx
  char *v10; // r8
  char *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rbx
  int v20; // r9d
  __int64 v21; // rcx
  __int64 *v22; // r14
  int v23; // esi
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r14d
  unsigned int *v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // r10d
  __m128i *v38; // rdx
  __m128i *v39; // rax
  const __m128i *v40; // r15
  __m128i *v41; // r11
  __int64 v42; // rdx
  __m128i *v43; // rsi
  __m128i *v44; // rdx
  _QWORD *v45; // rax
  char **exception; // rbp
  size_t v47; // [rsp+8h] [rbp-80h]
  int v48; // [rsp+8h] [rbp-80h]
  int v49; // [rsp+10h] [rbp-78h]
  size_t v50; // [rsp+10h] [rbp-78h]
  int v51; // [rsp+18h] [rbp-70h]
  unsigned int v52; // [rsp+20h] [rbp-68h]
  __int64 v53[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 592);
  v5 = *(char **)(a1 + 584);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = &v5[v4];
  v9 = 16LL * (v6 & v7);
  v10 = &v5[v9];
  if ( v9 != v4 )
  {
    for ( i = &v5[v9]; v8 != i; i += 16 )
    {
      v12 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return *((unsigned int *)i + 2);
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; v5 += 16 )
  {
    v30 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 > 1u )
    {
      if ( *(_DWORD *)(v30 + 12) == v6 && a2 == v30 )
      {
        i = v5;
        return *((unsigned int *)i + 2);
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 568);
  if ( v13 )
  {
    v52 = *(_DWORD *)(v13 - 4);
    v14 = v52;
  }
  else
  {
    v52 = 0;
    v14 = 0;
  }
  ++*(_DWORD *)(a2 + 8);
  v53[0] = a2;
  sub_E67160((unsigned int **)(a1 + 568), v53);
  v15 = *(_QWORD *)(a1 + 576);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 == *(_DWORD *)(v15 - 8) )
    {
      v32 = (unsigned int)(3 * v16 + 1) >> 1;
      if ( (int)v16 + 8 >= v32 + 8 || (unsigned int)v16 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0(v53, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300((void *)(v15 - 8), v32 + 8);
      v34 = v33 + 2;
      *v33 = v32;
      v35 = v33[1];
      *(_QWORD *)(a1 + 576) = v34;
      v17 = (char *)v34 + v35;
    }
    else
    {
      v17 = (_BYTE *)(v16 + v15);
    }
  }
  else
  {
    v45 = (_QWORD *)sub_186B270(0xAu);
    *v45 = 2;
    v17 = v45 + 1;
    *(_QWORD *)(a1 + 576) = v17;
  }
  *v17 = 0;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 576) - 4LL);
  v18 = *(_DWORD *)(a1 + 592);
  if ( 3 * v18 < 4 * (*(_DWORD *)(a1 + 596) + *(_DWORD *)(a1 + 600)) )
  {
    v49 = 2 * v18;
    v47 = 32LL * v18;
    v36 = sub_186B270(v47);
    v21 = v47;
    v37 = v49;
    v19 = v36;
    v38 = (__m128i *)v36;
    v39 = (__m128i *)(v36 + v47);
    if ( v49 )
    {
      do
      {
        v38->m128i_i64[0] = 0;
        ++v38;
        v38[-1].m128i_i32[2] = 0;
      }
      while ( v38 != v39 );
    }
    v40 = *(const __m128i **)(a1 + 584);
    v20 = v49 - 1;
    v22 = (__int64 *)v39;
    v41 = (__m128i *)&v40[*(unsigned int *)(a1 + 592)];
    if ( v40 != v41 )
    {
      do
      {
        if ( v40->m128i_i64[0] > 1uLL )
        {
          v42 = 16LL * (*(_DWORD *)(v40->m128i_i64[0] + 12) & (unsigned int)v20);
          v43 = (__m128i *)(v19 + v42);
          if ( v47 == v42 )
          {
LABEL_56:
            if ( (__m128i *)v19 == v43 )
            {
LABEL_68:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v44 = (__m128i *)v19;
            while ( v44->m128i_i64[0] )
            {
              if ( v43 == ++v44 )
                goto LABEL_68;
            }
          }
          else
          {
            v44 = (__m128i *)(v19 + v42);
            while ( v44->m128i_i64[0] )
            {
              if ( v39 == ++v44 )
                goto LABEL_56;
            }
          }
          *v44 = _mm_loadu_si128(v40);
        }
        ++v40;
      }
      while ( v41 != v40 );
      v41 = *(__m128i **)(a1 + 584);
    }
    if ( v41 )
    {
      v51 = v49;
      v50 = v47;
      v48 = v37 - 1;
      sub_186B220(v41);
      v37 = v51;
      v21 = v50;
      v20 = v48;
    }
    *(_QWORD *)(a1 + 584) = v19;
    *(_DWORD *)(a1 + 592) = v37;
    *(_DWORD *)(a1 + 600) = 0;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 584);
    v20 = v18 - 1;
    v21 = 16LL * v18;
    v22 = (__int64 *)(v19 + v21);
  }
  v23 = *(_DWORD *)(a2 + 12);
  v24 = 16LL * (v23 & (unsigned int)v20);
  v25 = v19 + v24;
  if ( v24 != v21 )
  {
    v26 = v19 + v24;
    v27 = 0;
    while ( 1 )
    {
      v28 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 > 1u )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a2 == v28 )
        {
          *(_QWORD *)v26 = a2;
          *(_DWORD *)(v26 + 8) = v52;
          return v14;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_66;
          v27 = v26;
          goto LABEL_67;
        }
        v27 = v26;
      }
      v26 += 16;
      if ( (__int64 *)v26 == v22 )
        goto LABEL_37;
    }
  }
  v27 = 0;
  while ( 1 )
  {
LABEL_37:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 <= 1u )
      break;
    if ( *(_DWORD *)(v31 + 12) == v23 && a2 == v31 )
    {
      *(_QWORD *)v19 = a2;
      *(_DWORD *)(v19 + 8) = v52;
      return v14;
    }
LABEL_36:
    v19 += 16;
  }
  if ( v31 )
  {
    v27 = v19;
    goto LABEL_36;
  }
  if ( v27 )
LABEL_66:
    --*(_DWORD *)(a1 + 600);
  else
    v27 = v19;
LABEL_67:
  *(_QWORD *)v27 = a2;
  *(_DWORD *)(v27 + 8) = v52;
  ++*(_DWORD *)(a1 + 596);
  return v14;
}

