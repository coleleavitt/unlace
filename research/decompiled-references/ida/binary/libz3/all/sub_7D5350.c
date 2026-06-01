__int64 __fastcall sub_7D5350(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int16 v19; // dx
  __int64 v20; // r14
  unsigned int v21; // eax
  __m128i *v22; // r12
  unsigned int v23; // r8d
  size_t v24; // r13
  __m128i *v25; // r15
  int v26; // esi
  __int64 v27; // r8
  __m128i *v28; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r15
  __int64 v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  _QWORD *v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdi
  bool v47; // zf
  unsigned int v48; // ebx
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // rcx
  __m128i *v52; // rax
  int v53; // r10d
  __m128i *v54; // r9
  const __m128i *v55; // rcx
  __m128i *v56; // r11
  __int64 v57; // rax
  __m128i *v58; // rdx
  __m128i *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rdx
  int v62; // [rsp+0h] [rbp-A8h]
  __m128i v63; // [rsp+30h] [rbp-78h] BYREF
  __int64 v64; // [rsp+40h] [rbp-68h] BYREF
  __int64 v65; // [rsp+48h] [rbp-60h]
  __int64 v66[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = a2;
  v5 = *(unsigned int *)(a1 + 3096);
  v6 = *(__int64 **)(a1 + 3088);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v5 - 1;
  v9 = v5;
  v5 *= 16;
  v10 = (__int64 *)((char *)v6 + v5);
  v11 = 16LL * (v7 & v8);
  v12 = &v6[(unsigned __int64)v11 / 8];
  if ( v11 != v5 )
  {
    for ( i = &v6[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && v4 == v14 )
          return i[1];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v6; v6 += 2 )
  {
    v33 = *v6;
    if ( (unsigned __int64)*v6 > 1 )
    {
      if ( *(_DWORD *)(v33 + 12) == v7 && v4 == v33 )
      {
        i = v6;
        return i[1];
      }
    }
    else if ( !v33 )
    {
      break;
    }
  }
LABEL_8:
  v15 = *(_QWORD *)(a1 + 72);
  v16 = *(_QWORD *)(v4 + 24);
  v64 = 0;
  v17 = *(_DWORD *)(v4 + 8);
  v65 = v15;
  v18 = v17 + 1;
  v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v15);
  v19 = *(_WORD *)(v16 + 4);
  *(_DWORD *)(v4 + 8) = v18;
  if ( !v19 )
  {
    if ( (*(_BYTE *)(v16 + 30) & 2) != 0 )
      goto LABEL_10;
LABEL_37:
    v20 = v4;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 80) + 887LL) )
      goto LABEL_57;
    if ( !(unsigned __int8)sub_1537200(v15) )
      goto LABEL_53;
    goto LABEL_39;
  }
  if ( v19 != 2 )
    goto LABEL_37;
LABEL_10:
  if ( *(_WORD *)(v4 + 4) != 2 || (v60 = *(unsigned int *)(v4 + 16), (_DWORD)v60) )
  {
    if ( !v18 )
    {
      sub_15D7BC0(v15, v4);
      v18 = *(_DWORD *)(v4 + 8);
      LODWORD(v9) = *(_DWORD *)(a1 + 3096);
    }
    v63.m128i_i64[0] = v4;
    v20 = v4;
    goto LABEL_14;
  }
  sub_13AC880(v66, v15, v60, v16, v12, v9);
  sub_13AD310(v66, v4, &v63, &v64);
  sub_13AC9F0(v66);
LABEL_39:
  v20 = v63.m128i_i64[0];
  LODWORD(v9) = *(_DWORD *)(a1 + 3096);
  if ( !v63.m128i_i64[0] )
    goto LABEL_15;
  v18 = *(_DWORD *)(v63.m128i_i64[0] + 8);
LABEL_14:
  *(_DWORD *)(v20 + 8) = v18 + 1;
LABEL_15:
  v21 = 4 * (*(_DWORD *)(a1 + 3100) + *(_DWORD *)(a1 + 3104));
  ++*(_DWORD *)(v4 + 8);
  if ( 3 * (int)v9 < v21 )
  {
    v62 = 2 * v9;
    v24 = 16LL * (unsigned int)(2 * v9);
    v52 = (__m128i *)sub_186B270(v24);
    v53 = v62;
    v22 = v52;
    v54 = &v52[v24 / 0x10];
    if ( v62 )
    {
      if ( (v24 & 0x10) == 0 || (*v52 = 0, ++v52, v52 != v54) )
      {
        do
        {
          *v52 = 0;
          v52 += 2;
          v52[-1] = 0;
        }
        while ( v52 != v54 );
      }
    }
    v55 = *(const __m128i **)(a1 + 3088);
    v23 = v62 - 1;
    v25 = v54;
    v56 = (__m128i *)&v55[*(unsigned int *)(a1 + 3096)];
    if ( v55 != v56 )
    {
      do
      {
        if ( v55->m128i_i64[0] > 1uLL )
        {
          v57 = 16LL * (*(_DWORD *)(v55->m128i_i64[0] + 12) & v23);
          v58 = &v22[(unsigned __int64)v57 / 0x10];
          if ( v24 == v57 )
          {
LABEL_75:
            if ( v22 == v58 )
            {
LABEL_90:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v59 = v22;
            while ( v59->m128i_i64[0] )
            {
              if ( v58 == ++v59 )
                goto LABEL_90;
            }
          }
          else
          {
            v59 = &v22[(unsigned __int64)v57 / 0x10];
            while ( v59->m128i_i64[0] )
            {
              if ( v54 == ++v59 )
                goto LABEL_75;
            }
          }
          *v59 = _mm_loadu_si128(v55);
        }
        ++v55;
      }
      while ( v56 != v55 );
      v56 = *(__m128i **)(a1 + 3088);
    }
    if ( v56 )
    {
      sub_186B220(v56);
      v53 = v62;
      v23 = v62 - 1;
    }
    *(_QWORD *)(a1 + 3088) = v22;
    *(_DWORD *)(a1 + 3096) = v53;
    *(_DWORD *)(a1 + 3104) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 3088);
    v23 = v9 - 1;
    v24 = 16LL * (unsigned int)v9;
    v25 = &v22[v24 / 0x10];
  }
  v26 = *(_DWORD *)(v4 + 12);
  v27 = 16LL * (v26 & v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    m128i_i64 = v22[(unsigned __int64)v27 / 0x10].m128i_i64;
    v30 = nullptr;
    while ( 1 )
    {
      v31 = *m128i_i64;
      if ( (unsigned __int64)*m128i_i64 > 1 )
      {
        if ( *(_DWORD *)(v31 + 12) == v26 && v4 == v31 )
        {
          *m128i_i64 = v4;
          m128i_i64[1] = v20;
          goto LABEL_49;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_85;
          v30 = m128i_i64;
          goto LABEL_86;
        }
        v30 = m128i_i64;
      }
      m128i_i64 += 2;
      if ( m128i_i64 == (__int64 *)v25 )
        goto LABEL_44;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_44:
    if ( v28 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v34 + 12) == v26 && v4 == v34 )
    {
      v22->m128i_i64[0] = v4;
      v22->m128i_i64[1] = v20;
      goto LABEL_49;
    }
LABEL_43:
    ++v22;
  }
  if ( v34 )
  {
    v30 = (__int64 *)v22;
    goto LABEL_43;
  }
  if ( v30 )
LABEL_85:
    --*(_DWORD *)(a1 + 3104);
  else
    v30 = (__int64 *)v22;
LABEL_86:
  *v30 = v4;
  v30[1] = v20;
  ++*(_DWORD *)(a1 + 3100);
LABEL_49:
  v35 = *(_QWORD *)(a1 + 80);
  v36 = *(_QWORD *)(a1 + 72);
  v37 = a1 + 3088;
  v38 = (_QWORD *)sub_180C100(v35 + 2144, 40);
  v39 = *(_QWORD **)(v35 + 2128);
  v40 = v38;
  *v38 = off_1C54980;
  v38[1] = v36;
  v38[2] = v37;
  v38[3] = v4;
  v38[4] = v20;
  if ( v39 )
  {
    v41 = *((_DWORD *)v39 - 1);
    if ( v41 == *((_DWORD *)v39 - 2) )
    {
      v48 = (3 * v41 + 1) >> 1;
      v49 = 8 * v48 + 8;
      if ( 8 * v41 + 8 >= v49 || v41 >= v48 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = (unsigned int *)sub_186B300(v39 - 1, v49);
      v51 = v50[1];
      v39 = v50 + 2;
      *(_QWORD *)(v35 + 2128) = v50 + 2;
      *v50 = v48;
      LODWORD(v50) = v51;
      v44 = &v39[v51];
      v43 = (_DWORD)v50 + 1;
    }
    else
    {
      v42 = v41;
      v43 = v41 + 1;
      v44 = &v39[v42];
    }
  }
  else
  {
    v61 = (_QWORD *)sub_186B270(0x18u);
    *v61 = 2;
    v43 = 1;
    v39 = v61 + 1;
    *(_QWORD *)(v35 + 2128) = v39;
    v44 = v39;
  }
  *v44 = v40;
  *((_DWORD *)v39 - 1) = v43;
LABEL_53:
  v45 = v64;
  v46 = v65;
  if ( v64 )
  {
    v47 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v47 )
      sub_15D7BC0(v46, v45);
  }
  v15 = v63.m128i_i64[1];
  v4 = v63.m128i_i64[0];
  if ( v63.m128i_i64[0] )
  {
LABEL_57:
    v47 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v47 )
      sub_15D7BC0(v15, v4);
  }
  return v20;
}

