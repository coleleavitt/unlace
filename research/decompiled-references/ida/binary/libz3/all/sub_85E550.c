_QWORD *__fastcall sub_85E550(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  __int64 v7; // rax
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r13d
  _QWORD *v19; // r12
  __int64 v20; // rax
  int v21; // r13d
  unsigned int v22; // r14d
  __int64 j; // rax
  __int64 v24; // rsi
  int v25; // eax
  __int64 *v26; // rsi
  __int64 v27; // r15
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // edx
  __m128i *v35; // r13
  int v36; // r9d
  __int64 v37; // rcx
  __int64 *v38; // r14
  int v39; // esi
  __int64 v40; // r9
  __m128i *v41; // rdi
  __m128i *v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r14
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  _QWORD *v53; // r13
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  _QWORD *v57; // rcx
  __int64 v58; // rbp
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  _QWORD *v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  unsigned int v66; // ebp
  unsigned int v67; // ecx
  unsigned int *v68; // rax
  __int64 v69; // rcx
  unsigned int v70; // r13d
  unsigned int v71; // ecx
  unsigned int *v72; // rax
  __int64 v73; // rcx
  __m128i *v74; // rax
  int v75; // r10d
  __m128i *v76; // r8
  const __m128i *v77; // r15
  __m128i *v78; // r11
  __int64 v79; // rax
  __m128i *v80; // rdx
  __m128i *v81; // rax
  _QWORD *v82; // rdx
  _QWORD *v83; // rdx
  size_t v84; // [rsp+8h] [rbp-90h]
  int v85; // [rsp+8h] [rbp-90h]
  unsigned int v86; // [rsp+10h] [rbp-88h]
  int v87; // [rsp+10h] [rbp-88h]
  size_t v88; // [rsp+10h] [rbp-88h]
  int v89; // [rsp+18h] [rbp-80h]
  __int64 v90[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a1 + 312);
  v8 = *(__int64 **)(a1 + 304);
  v9 = *(_DWORD *)(a2 + 12);
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
        if ( *(_DWORD *)(v15 + 12) == v9 && a2 == v15 )
          return (_QWORD *)i[1];
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; v8 += 2 )
  {
    v46 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v46 + 12) == v9 && a2 == v46 )
      {
        i = v8;
        return (_QWORD *)i[1];
      }
    }
    else if ( !v46 )
    {
      break;
    }
  }
LABEL_8:
  v16 = *(_QWORD *)(a2 + 24);
  if ( !v16 || (v17 = *(_QWORD *)(v16 + 8)) == 0 )
  {
    v21 = -1;
    v19 = (_QWORD *)sub_186B270(0x10u);
    v47 = *(_QWORD *)(a1 + 72);
    v19[1] = 0;
    *v19 = v47;
    goto LABEL_11;
  }
  v18 = *(_DWORD *)(v17 - 4);
  v19 = (_QWORD *)sub_186B270(0x10u);
  v20 = *(_QWORD *)(a1 + 72);
  v21 = v18 - 1;
  v19[1] = 0;
  *v19 = v20;
  if ( v21 )
  {
LABEL_11:
    v22 = 0;
    for ( j = sub_16845A0(a1 + 112, a2, 0); ; j = sub_16845A0(a1 + 112, a2, v22) )
    {
      v27 = j;
      if ( j )
        ++*(_DWORD *)(j + 8);
      v28 = (_QWORD *)v19[1];
      if ( !v28 )
        break;
      v29 = *((_DWORD *)v28 - 1);
      if ( v29 != *((_DWORD *)v28 - 2) )
      {
        v24 = v29;
        v25 = v29 + 1;
        v26 = &v28[v24];
        goto LABEL_13;
      }
      v30 = (3 * v29 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v31 || v29 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v90, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v90);
        sub_233E40((__int64)v90);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = (3 * v29 + 1) >> 1;
      ++v22;
      v32 = (unsigned int *)sub_186B300(v28 - 1, v31);
      v33 = v32[1];
      *v32 = v86;
      v19[1] = v32 + 2;
      *(_QWORD *)&v32[2 * v33 + 2] = v27;
      v32[1] = v33 + 1;
      if ( v22 == v21 )
        goto LABEL_22;
LABEL_14:
      ;
    }
    v49 = (_QWORD *)sub_186B270(0x18u);
    v28 = v49 + 1;
    *v49 = 2;
    v25 = 1;
    v19[1] = v28;
    v26 = v28;
LABEL_13:
    ++v22;
    *v26 = v27;
    *((_DWORD *)v28 - 1) = v25;
    if ( v22 == v21 )
      goto LABEL_22;
    goto LABEL_14;
  }
LABEL_22:
  v34 = *(_DWORD *)(a1 + 312);
  if ( 3 * v34 < 4 * (*(_DWORD *)(a1 + 316) + *(_DWORD *)(a1 + 320)) )
  {
    v87 = 2 * v34;
    v84 = 32LL * v34;
    v74 = (__m128i *)sub_186B270(v84);
    v37 = v84;
    v75 = v87;
    v35 = v74;
    v76 = &v74[v84 / 0x10];
    if ( v87 )
    {
      if ( (v84 & 0x10) == 0 || (*v74 = 0, ++v74, v74 != v76) )
      {
        do
        {
          *v74 = 0;
          v74 += 2;
          v74[-1] = 0;
        }
        while ( v74 != v76 );
      }
    }
    v77 = *(const __m128i **)(a1 + 304);
    v36 = v87 - 1;
    v38 = (__int64 *)v76;
    v78 = (__m128i *)&v77[*(unsigned int *)(a1 + 312)];
    if ( v77 != v78 )
    {
      do
      {
        if ( v77->m128i_i64[0] > 1uLL )
        {
          v79 = 16LL * (*(_DWORD *)(v77->m128i_i64[0] + 12) & (unsigned int)v36);
          v80 = &v35[(unsigned __int64)v79 / 0x10];
          if ( v84 == v79 )
          {
LABEL_79:
            if ( v35 == v80 )
            {
LABEL_91:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v81 = v35;
            while ( v81->m128i_i64[0] )
            {
              if ( v80 == ++v81 )
                goto LABEL_91;
            }
          }
          else
          {
            v81 = &v35[(unsigned __int64)v79 / 0x10];
            while ( v81->m128i_i64[0] )
            {
              if ( v76 == ++v81 )
                goto LABEL_79;
            }
          }
          *v81 = _mm_loadu_si128(v77);
        }
        ++v77;
      }
      while ( v78 != v77 );
      v78 = *(__m128i **)(a1 + 304);
    }
    if ( v78 )
    {
      v89 = v87;
      v88 = v84;
      v85 = v75 - 1;
      sub_186B220(v78);
      v75 = v89;
      v37 = v88;
      v36 = v85;
    }
    *(_QWORD *)(a1 + 304) = v35;
    *(_DWORD *)(a1 + 312) = v75;
    *(_DWORD *)(a1 + 320) = 0;
  }
  else
  {
    v35 = *(__m128i **)(a1 + 304);
    v36 = v34 - 1;
    v37 = 16LL * v34;
    v38 = (__int64 *)((char *)v35->m128i_i64 + v37);
  }
  v39 = *(_DWORD *)(a2 + 12);
  v40 = 16LL * (v39 & (unsigned int)v36);
  v41 = &v35[(unsigned __int64)v40 / 0x10];
  if ( v40 != v37 )
  {
    v42 = &v35[(unsigned __int64)v40 / 0x10];
    v43 = nullptr;
    while ( 1 )
    {
      v44 = v42->m128i_i64[0];
      if ( v42->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v44 + 12) == v39 && a2 == v44 )
        {
          v42->m128i_i64[0] = a2;
          v42->m128i_i64[1] = (__int64)v19;
          goto LABEL_53;
        }
      }
      else
      {
        if ( !v44 )
        {
          if ( v43 )
            goto LABEL_89;
          v43 = (__int64 *)v42;
          goto LABEL_90;
        }
        v43 = (__int64 *)v42;
      }
      if ( ++v42 == (__m128i *)v38 )
        goto LABEL_47;
    }
  }
  v43 = nullptr;
  while ( 1 )
  {
LABEL_47:
    if ( v41 == v35 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v48 = v35->m128i_i64[0];
    if ( v35->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v48 + 12) == v39 && a2 == v48 )
    {
      v35->m128i_i64[0] = a2;
      v35->m128i_i64[1] = (__int64)v19;
      goto LABEL_53;
    }
LABEL_46:
    ++v35;
  }
  if ( v48 )
  {
    v43 = (__int64 *)v35;
    goto LABEL_46;
  }
  if ( v43 )
LABEL_89:
    --*(_DWORD *)(a1 + 320);
  else
    v43 = (__int64 *)v35;
LABEL_90:
  *v43 = a2;
  v43[1] = (__int64)v19;
  ++*(_DWORD *)(a1 + 316);
LABEL_53:
  v50 = *(_QWORD *)(a1 + 80);
  v51 = (_QWORD *)sub_180C100(v50 + 2144, 24);
  v52 = *(_QWORD **)(v50 + 2128);
  v53 = v51;
  *v51 = off_1C554C8;
  v51[1] = a1 + 304;
  v51[2] = a2;
  if ( v52 )
  {
    v54 = *((_DWORD *)v52 - 1);
    if ( v54 == *((_DWORD *)v52 - 2) )
    {
      v66 = (3 * v54 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v54 + 8 >= v67 || v54 >= v66 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v90, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v90);
        sub_233E40((__int64)v90);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v68 = (unsigned int *)sub_186B300(v52 - 1, v67);
      v69 = v68[1];
      v52 = v68 + 2;
      *(_QWORD *)(v50 + 2128) = v68 + 2;
      *v68 = v66;
      LODWORD(v68) = v69;
      v57 = &v52[v69];
      v56 = (_DWORD)v68 + 1;
    }
    else
    {
      v55 = v54;
      v56 = v54 + 1;
      v57 = &v52[v55];
    }
  }
  else
  {
    v83 = (_QWORD *)sub_186B270(0x18u);
    *v83 = 2;
    v56 = 1;
    v52 = v83 + 1;
    *(_QWORD *)(v50 + 2128) = v52;
    v57 = v52;
  }
  v58 = *(_QWORD *)(a1 + 80);
  *v57 = v53;
  *((_DWORD *)v52 - 1) = v56;
  v59 = (_QWORD *)sub_180C100(v58 + 2144, 16);
  v60 = *(_QWORD **)(v58 + 2128);
  v61 = v59;
  *v59 = off_1C554F0;
  v59[1] = v19;
  if ( v60 )
  {
    v62 = *((_DWORD *)v60 - 1);
    if ( v62 == *((_DWORD *)v60 - 2) )
    {
      v70 = (3 * v62 + 1) >> 1;
      v71 = 8 * v70 + 8;
      if ( 8 * v62 + 8 >= v71 || v62 >= v70 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v90, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v90);
        sub_233E40((__int64)v90);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v72 = (unsigned int *)sub_186B300(v60 - 1, v71);
      v73 = v72[1];
      v60 = v72 + 2;
      *(_QWORD *)(v58 + 2128) = v72 + 2;
      *v72 = v70;
      LODWORD(v72) = v73;
      v65 = &v60[v73];
      v64 = (_DWORD)v72 + 1;
    }
    else
    {
      v63 = v62;
      v64 = v62 + 1;
      v65 = &v60[v63];
    }
  }
  else
  {
    v82 = (_QWORD *)sub_186B270(0x18u);
    *v82 = 2;
    v64 = 1;
    v60 = v82 + 1;
    *(_QWORD *)(v58 + 2128) = v60;
    v65 = v60;
  }
  *v65 = v61;
  *((_DWORD *)v60 - 1) = v64;
  return v19;
}

