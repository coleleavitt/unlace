unsigned int *__fastcall sub_67AD40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // edi
  unsigned int v9; // edx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  _OWORD *v16; // rax
  unsigned int v17; // edx
  __m128i *v18; // r14
  int v19; // r9d
  __int64 v20; // rcx
  __int64 *v21; // r15
  int v22; // esi
  __int64 v23; // r9
  __m128i *v24; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // esi
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdi
  unsigned int *v33; // r14
  __int64 v34; // rax
  unsigned int *v35; // r8
  unsigned int *result; // rax
  __int64 v37; // rdx
  unsigned int *v38; // rax
  unsigned int *v39; // r13
  __int64 v40; // r15
  __int64 v41; // rax
  unsigned int *v42; // rax
  _QWORD *v43; // r14
  size_t v44; // r15
  unsigned int v45; // r8d
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rax
  _QWORD *v49; // r8
  __int64 *v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  unsigned int v62; // r13d
  unsigned int v63; // ecx
  unsigned int *v64; // rax
  __int64 v65; // rcx
  __m128i *v66; // rax
  int v67; // r10d
  __m128i *v68; // r8
  const __m128i *v69; // rax
  __m128i *v70; // r11
  __int64 v71; // rdx
  __m128i *v72; // rsi
  __m128i *v73; // rdx
  _QWORD *v74; // rax
  int v75; // r9d
  unsigned int *v76; // r10
  unsigned int *v77; // r11
  __int64 v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  char **exception; // rbx
  __int64 v83; // rdx
  int v84[2]; // [rsp+0h] [rbp-88h]
  size_t v85; // [rsp+0h] [rbp-88h]
  int v86; // [rsp+0h] [rbp-88h]
  unsigned int v87; // [rsp+0h] [rbp-88h]
  int v88; // [rsp+8h] [rbp-80h]
  size_t v89; // [rsp+8h] [rbp-80h]
  int v90; // [rsp+10h] [rbp-78h]
  int v91; // [rsp+18h] [rbp-70h]
  __int64 v92[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = sub_15D1F10(a2);
  v5 = *(__int64 **)(a1 + 112);
  v6 = v4;
  v7 = *(unsigned int *)(a1 + 120);
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v7 - 1;
  v7 *= 16;
  v10 = (__int64 *)((char *)v5 + v7);
  v11 = 16LL * (v8 & v9);
  v12 = &v5[(unsigned __int64)v11 / 8];
  if ( v11 != v7 )
  {
    for ( i = &v5[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v6 == v14 )
          goto LABEL_19;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v5; v5 += 2 )
  {
    v54 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v54 + 12) == v8 && v6 == v54 )
      {
        i = v5;
LABEL_19:
        v15 = i[1];
        goto LABEL_20;
      }
    }
    else if ( !v54 )
    {
      break;
    }
  }
LABEL_8:
  v15 = sub_186B270(0x18u);
  v16 = (_OWORD *)sub_186B270(0x40u);
  v17 = *(_DWORD *)(a1 + 120);
  *(_QWORD *)(v15 + 8) = 8;
  *(_QWORD *)v15 = v16;
  *v16 = 0;
  v16[1] = 0;
  v16[2] = 0;
  v16[3] = 0;
  LODWORD(v16) = 4 * (*(_DWORD *)(a1 + 124) + *(_DWORD *)(a1 + 128));
  *(_DWORD *)(v15 + 16) = 0;
  if ( 3 * v17 < (unsigned int)v16 )
  {
    v88 = 2 * v17;
    v85 = 32LL * v17;
    v66 = (__m128i *)sub_186B270(v85);
    v20 = v85;
    v67 = v88;
    v18 = v66;
    v68 = &v66[v85 / 0x10];
    if ( v88 )
    {
      if ( (v85 & 0x10) == 0 || (*v66 = 0, ++v66, v68 != v66) )
      {
        do
        {
          *v66 = 0;
          v66 += 2;
          v66[-1] = 0;
        }
        while ( v68 != v66 );
      }
    }
    v69 = *(const __m128i **)(a1 + 112);
    v19 = v88 - 1;
    v21 = (__int64 *)v68;
    v70 = (__m128i *)&v69[*(unsigned int *)(a1 + 120)];
    if ( v69 != v70 )
    {
      do
      {
        if ( v69->m128i_i64[0] > 1uLL )
        {
          v71 = 16LL * (*(_DWORD *)(v69->m128i_i64[0] + 12) & (unsigned int)v19);
          v72 = &v18[(unsigned __int64)v71 / 0x10];
          if ( v85 == v71 )
          {
LABEL_105:
            if ( v18 == v72 )
            {
LABEL_141:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v73 = v18;
            while ( v73->m128i_i64[0] )
            {
              if ( v72 == ++v73 )
                goto LABEL_141;
            }
          }
          else
          {
            v73 = &v18[(unsigned __int64)v71 / 0x10];
            while ( v73->m128i_i64[0] )
            {
              if ( v68 == ++v73 )
                goto LABEL_105;
            }
          }
          *v73 = _mm_loadu_si128(v69);
        }
        ++v69;
      }
      while ( v70 != v69 );
      v70 = *(__m128i **)(a1 + 112);
    }
    if ( v70 )
    {
      v90 = v88;
      v89 = v85;
      v86 = v67 - 1;
      sub_186B220(v70);
      v67 = v90;
      v20 = v89;
      v19 = v86;
    }
    *(_QWORD *)(a1 + 112) = v18;
    *(_DWORD *)(a1 + 120) = v67;
    *(_DWORD *)(a1 + 128) = 0;
  }
  else
  {
    v18 = *(__m128i **)(a1 + 112);
    v19 = v17 - 1;
    v20 = 16LL * v17;
    v21 = (__int64 *)((char *)v18->m128i_i64 + v20);
  }
  v22 = *(_DWORD *)(v6 + 12);
  v23 = 16LL * (v22 & (unsigned int)v19);
  v24 = &v18[(unsigned __int64)v23 / 0x10];
  if ( v23 != v20 )
  {
    m128i_i64 = v18[(unsigned __int64)v23 / 0x10].m128i_i64;
    v26 = nullptr;
    while ( 1 )
    {
      v27 = *m128i_i64;
      if ( (unsigned __int64)*m128i_i64 > 1 )
      {
        if ( *(_DWORD *)(v27 + 12) == v22 && v6 == v27 )
        {
          *m128i_i64 = v6;
          m128i_i64[1] = v15;
          goto LABEL_85;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v26 )
            goto LABEL_135;
          v26 = m128i_i64;
          goto LABEL_136;
        }
        v26 = m128i_i64;
      }
      m128i_i64 += 2;
      if ( m128i_i64 == v21 )
        goto LABEL_72;
    }
  }
  v26 = nullptr;
  while ( 1 )
  {
LABEL_72:
    if ( v24 == v18 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v55 = v18->m128i_i64[0];
    if ( v18->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v55 + 12) == v22 && v6 == v55 )
    {
      v18->m128i_i64[0] = v6;
      v18->m128i_i64[1] = v15;
      goto LABEL_85;
    }
LABEL_71:
    ++v18;
  }
  if ( v55 )
  {
    v26 = (__int64 *)v18;
    goto LABEL_71;
  }
  if ( v26 )
LABEL_135:
    --*(_DWORD *)(a1 + 128);
  else
    v26 = (__int64 *)v18;
LABEL_136:
  *v26 = v6;
  v26[1] = v15;
  ++*(_DWORD *)(a1 + 124);
LABEL_85:
  v57 = *(_QWORD **)(a1 + 136);
  if ( v57 )
  {
    v58 = *((_DWORD *)v57 - 1);
    if ( v58 == *((_DWORD *)v57 - 2) )
    {
      v62 = (3 * v58 + 1) >> 1;
      v63 = 8 * v62 + 8;
      if ( 8 * v58 + 8 >= v63 || v58 >= v62 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107EF6(v92, "Overflow encountered when expanding vector", v83);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v92);
        sub_233E40((__int64)v92);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v64 = (unsigned int *)sub_186B300(v57 - 1, v63);
      v65 = v64[1];
      v57 = v64 + 2;
      *v64 = v62;
      *(_QWORD *)(a1 + 136) = v64 + 2;
      LODWORD(v64) = v65;
      v61 = &v57[v65];
      v60 = (_DWORD)v64 + 1;
    }
    else
    {
      v59 = v58;
      v60 = v58 + 1;
      v61 = &v57[v59];
    }
  }
  else
  {
    v81 = (_QWORD *)sub_186B270(0x18u);
    *v81 = 2;
    v60 = 1;
    v57 = v81 + 1;
    *(_QWORD *)(a1 + 136) = v57;
    v61 = v57;
  }
  *v61 = v15;
  *((_DWORD *)v57 - 1) = v60;
LABEL_20:
  v28 = *(unsigned int *)(v15 + 8);
  v29 = *(_DWORD *)(a2 + 12);
  v30 = *(unsigned int **)v15;
  v31 = v28 - 1;
  v32 = v28;
  v28 *= 8;
  v33 = (unsigned int *)(*(_QWORD *)v15 + v28);
  v34 = 8LL * (v29 & v31);
  v35 = (unsigned int *)(*(_QWORD *)v15 + v34);
  if ( v34 != v28 )
  {
    for ( result = (unsigned int *)(*(_QWORD *)v15 + v34); v33 != result; result += 2 )
    {
      v37 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v37 + 12) == v29 && v37 == a2 )
          return result;
      }
      else if ( !v37 )
      {
        goto LABEL_27;
      }
    }
  }
  if ( v30 != v35 )
  {
    for ( result = *(unsigned int **)v15; v35 != result; result += 2 )
    {
      v53 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v53 + 12) == v29 && v53 == a2 )
          return result;
      }
      else if ( !v53 )
      {
        break;
      }
    }
  }
LABEL_27:
  v38 = *(unsigned int **)v15;
  if ( v30 != v33 )
  {
    while ( 1 )
    {
      v39 = v38;
      if ( *(_QWORD *)v38 > 1u )
        break;
      v38 += 2;
      if ( v33 == v38 )
        goto LABEL_40;
    }
    if ( v33 != v38 )
    {
      do
      {
        v40 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v84 = *(_QWORD *)a1;
        sub_15E1B70(*(_QWORD *)a1);
        v41 = sub_15E1A70(v84[0]);
        v92[0] = v41;
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        sub_6761A0((unsigned int **)(v40 + 24), v92);
        v42 = v39 + 2;
        if ( v39 + 2 == v33 )
          break;
        while ( 1 )
        {
          v39 = v42;
          if ( *(_QWORD *)v42 > 1u )
            break;
          v42 += 2;
          if ( v33 == v42 )
            goto LABEL_39;
        }
      }
      while ( v33 != v42 );
LABEL_39:
      v32 = *(unsigned int *)(v15 + 8);
    }
  }
LABEL_40:
  if ( 3 * (int)v32 < (unsigned int)(4 * (*(_DWORD *)(v15 + 12) + *(_DWORD *)(v15 + 16))) )
  {
    v44 = 8LL * (unsigned int)(2 * v32);
    v74 = (_QWORD *)sub_186B270(v44);
    v75 = 2 * v32;
    v43 = v74;
    if ( 2 * (_DWORD)v32 )
    {
      memset(v74, 0, v44);
      v75 = 2 * v32;
    }
    v76 = *(unsigned int **)v15;
    v45 = v75 - 1;
    v46 = (__int64)&v43[v44 / 8];
    v77 = (unsigned int *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 8));
    if ( *(unsigned int **)v15 != v77 )
    {
      do
      {
        if ( *(_QWORD *)v76 > 1u )
        {
          v78 = 8LL * (*(_DWORD *)(*(_QWORD *)v76 + 12LL) & v45);
          v79 = &v43[(unsigned __int64)v78 / 8];
          if ( v44 == v78 )
          {
LABEL_125:
            if ( v43 == v79 )
            {
LABEL_140:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v80 = v43;
            while ( *v80 )
            {
              if ( v79 == ++v80 )
                goto LABEL_140;
            }
          }
          else
          {
            v80 = &v43[(unsigned __int64)v78 / 8];
            while ( *v80 )
            {
              if ( (_QWORD *)v46 == ++v80 )
                goto LABEL_125;
            }
          }
          *v80 = *(_QWORD *)v76;
        }
        v76 += 2;
      }
      while ( v77 != v76 );
      v77 = *(unsigned int **)v15;
    }
    if ( v77 )
    {
      v91 = v75;
      v87 = v75 - 1;
      sub_186B220(v77);
      v75 = v91;
      v46 = (__int64)&v43[v44 / 8];
      v45 = v87;
    }
    *(_QWORD *)v15 = v43;
    *(_DWORD *)(v15 + 8) = v75;
    *(_DWORD *)(v15 + 16) = 0;
  }
  else
  {
    v43 = *(_QWORD **)v15;
    v44 = 8 * v32;
    v45 = v32 - 1;
    v46 = *(_QWORD *)v15 + 8 * v32;
  }
  v47 = *(_DWORD *)(a2 + 12);
  v48 = 8LL * (v47 & v45);
  v49 = &v43[(unsigned __int64)v48 / 8];
  if ( v48 != v44 )
  {
    v50 = &v43[(unsigned __int64)v48 / 8];
    v51 = nullptr;
    while ( 1 )
    {
      v52 = *v50;
      if ( (unsigned __int64)*v50 > 1 )
      {
        if ( *(_DWORD *)(v52 + 12) == v47 && v52 == a2 )
        {
          *v50 = a2;
          goto LABEL_51;
        }
      }
      else
      {
        if ( !v52 )
        {
          if ( v51 )
            goto LABEL_138;
          v51 = v50;
          goto LABEL_139;
        }
        v51 = v50;
      }
      if ( ++v50 == (__int64 *)v46 )
        goto LABEL_79;
    }
  }
  v51 = nullptr;
LABEL_79:
  while ( 2 )
  {
    if ( v49 == v43 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v56 = *v43;
    if ( *v43 > 1u )
    {
      if ( *(_DWORD *)(v56 + 12) == v47 && v56 == a2 )
      {
        *v43 = a2;
        goto LABEL_51;
      }
      goto LABEL_78;
    }
    if ( v56 )
    {
      v51 = v43;
LABEL_78:
      ++v43;
      continue;
    }
    break;
  }
  if ( v51 )
LABEL_138:
    --*(_DWORD *)(v15 + 16);
  else
    v51 = v43;
LABEL_139:
  *v51 = a2;
  ++*(_DWORD *)(v15 + 12);
LABEL_51:
  ++*(_DWORD *)(a2 + 8);
  v92[0] = a2;
  return sub_6761A0((unsigned int **)(a1 + 104), v92);
}

