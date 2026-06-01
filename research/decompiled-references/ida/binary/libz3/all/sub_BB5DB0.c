void __fastcall sub_BB5DB0(_QWORD *a1, int a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  char **v8; // rbp
  __int64 v9; // rdx
  char **v10; // rbp
  __int64 v11; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdi
  unsigned int v22; // ebx
  __int64 v23; // rbp
  unsigned int v24; // eax
  _QWORD *v25; // rdx
  __int64 v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // rax
  unsigned int *v29; // rbp
  __int64 v30; // rax
  unsigned int v31; // r13d
  __m128 v32; // xmm1
  __m128i v33; // xmm2
  __m128i *v34; // rax
  unsigned int v35; // r12d
  size_t v36; // rsi
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rbp
  __int64 v40; // rdx
  char *v41; // rdi
  _QWORD *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbp
  unsigned int v45; // r12d
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rbp
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  _QWORD *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbp
  unsigned int v55; // r12d
  size_t v56; // rsi
  unsigned int *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rbp
  __int64 v60; // rdx
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi
  __int64 v63; // rbp
  unsigned int v64; // r12d
  size_t v65; // rsi
  unsigned int *v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rbp
  __int64 v69; // rdx
  _QWORD *v70; // rdi
  __int64 v71; // rax
  _QWORD *v72; // rdi
  int v73; // esi
  unsigned int v74; // r12d
  unsigned int v75; // eax
  unsigned int v76; // r12d
  unsigned int v77; // eax
  unsigned int *v78; // rax
  unsigned int v79; // edi
  __int64 v80; // r12
  __int64 v81; // rsi
  __int64 v82; // r12
  char *v83; // r11
  _QWORD *v84; // r10
  char *v85; // rsi
  unsigned __int64 v86; // r10
  _QWORD *v87; // rax
  _QWORD *v88; // r12
  _QWORD *v89; // rbp
  __int64 v90; // rsi
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 *v93; // r12
  __int64 *v94; // rbp
  __int64 v95; // rsi
  __int64 v96; // rdi
  _QWORD *v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  unsigned __int64 v102; // [rsp+8h] [rbp-80h]
  __m128i v103; // [rsp+10h] [rbp-78h] BYREF
  __int64 v104; // [rsp+20h] [rbp-68h]
  unsigned int v105; // [rsp+28h] [rbp-60h]
  int v106; // [rsp+2Ch] [rbp-5Ch]
  __int64 v107[11]; // [rsp+30h] [rbp-58h] BYREF

  v13 = a1[3];
  v106 = a2;
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = (_QWORD *)a1[5];
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = a1[4];
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_10;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_10:
    v14 = (_QWORD *)a1[5];
    if ( v14 )
LABEL_11:
      *((_DWORD *)v14 - 1) = 0;
  }
  v19 = a1[12];
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  v21 = (_QWORD *)a1[11];
  v22 = *(_DWORD *)(v19 + 4LL * (unsigned int)(v20 - v106));
  if ( !v21 )
    goto LABEL_111;
  v23 = *((unsigned int *)v21 - 1);
  v24 = v23 - 1;
  if ( v22 >= (unsigned int)v23 )
    goto LABEL_28;
  v25 = (_QWORD *)a1[2];
  v26 = 4LL * v24;
  v102 = 4 * (v24 - (unsigned __int64)(v24 - v22));
  while ( 1 )
  {
    v29 = *(unsigned int **)(a1[7] + 2 * v26);
    v30 = *v29;
    if ( !*(_DWORD *)((char *)v21 + v26) )
      break;
    v31 = 2 * v30 + 1;
    v32 = _mm_loadh_ps((const double *)(a1[9] + 2 * v26));
    v104 = *(_QWORD *)(a1[10] + 2 * v26);
    v103 = (__m128i)v32;
    if ( v25 )
    {
      v105 = *((_DWORD *)v25 - 1);
      if ( v105 >= v31 )
        goto LABEL_25;
    }
    else
    {
      v87 = (_QWORD *)sub_186B270(0x38u);
      v105 = 0;
      v25 = v87 + 1;
      *v87 = 2;
      a1[2] = v87 + 1;
    }
    while ( 1 )
    {
      v79 = *((_DWORD *)v25 - 2);
      if ( v79 >= v31 )
        break;
      v74 = 3 * v79 + 1;
      v75 = v74 & 0xFFFFFFFE;
      v76 = v74 >> 1;
      v77 = 8 * (v76 + v75) + 8;
      if ( 24 * v79 + 8 >= v77 || v79 >= v76 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v107, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v107);
        sub_233E40((__int64)v107);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v78 = (unsigned int *)sub_186B300(v25 - 1, v77);
      v25 = v78 + 2;
      *v78 = v76;
      a1[2] = v78 + 2;
    }
    v80 = v105;
    v21 = (_QWORD *)a1[11];
    *((_DWORD *)v25 - 1) = v31;
    v30 = *v29;
    v81 = 24 * v80;
    v82 = 24LL * v31;
    v83 = (char *)&v25[(unsigned __int64)v81 / 8];
    v84 = &v25[(unsigned __int64)v82 / 8];
    if ( v81 != v82 )
    {
      v85 = (char *)&v25[(unsigned __int64)v81 / 8];
      v18 = ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(v84 - 3) - v83) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) == 0;
      v86 = ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)(v84 - 3) - v83) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
      if ( v18 )
        goto LABEL_76;
      do
      {
        *(_OWORD *)v85 = 0;
        v85 += 48;
        *((_OWORD *)v85 - 2) = 0;
        *((_OWORD *)v85 - 1) = 0;
      }
      while ( v85 != &v83[48 * (v86 >> 1)] );
      if ( (v86 & 1) != 0 )
      {
        v83 += 24 * (v86 & 0xFFFFFFFFFFFFFFFELL);
LABEL_76:
        *((_QWORD *)v83 + 2) = 0;
        *(_OWORD *)v83 = 0;
      }
    }
LABEL_25:
    v33 = _mm_load_si128(&v103);
    v34 = (__m128i *)&v25[3 * v30];
    v34[1].m128i_i64[0] = v104;
    *v34 = v33;
    v28 = v26 - 4;
    if ( v102 == v26 )
      goto LABEL_26;
LABEL_21:
    v26 = v28;
  }
  if ( v25 && (unsigned int)v30 < *((_DWORD *)v25 - 1) )
  {
    v27 = &v25[3 * v30];
    v27[2] = 0;
    *(_OWORD *)v27 = 0;
  }
  v28 = v26 - 4;
  if ( v102 != v26 )
    goto LABEL_21;
LABEL_26:
  if ( !v21 )
  {
LABEL_111:
    if ( v22 )
    {
      v23 = 0;
      v100 = (_QWORD *)sub_186B270(0x10u);
      v21 = v100 + 1;
      *v100 = 2;
      a1[11] = v100 + 1;
      goto LABEL_33;
    }
    v94 = (__int64 *)a1[7];
    if ( v94 )
    {
      v98 = *((unsigned int *)v94 - 1);
      if ( (_DWORD)v98 )
      {
        v93 = &v94[v98];
        if ( v94 < v93 )
          goto LABEL_92;
        v42 = (_QWORD *)a1[7];
        goto LABEL_106;
      }
      v52 = (_QWORD *)a1[9];
      if ( v52 )
        goto LABEL_47;
    }
    else
    {
      v52 = (_QWORD *)a1[9];
      if ( v52 )
      {
        v53 = *((unsigned int *)v52 - 1);
        if ( (_DWORD)v53 )
          goto LABEL_80;
        goto LABEL_107;
      }
    }
    goto LABEL_99;
  }
  v23 = *((unsigned int *)v21 - 1);
LABEL_28:
  if ( (unsigned int)v23 >= v22 )
  {
    *((_DWORD *)v21 - 1) = v22;
    goto LABEL_36;
  }
LABEL_33:
  while ( 1 )
  {
    v38 = *((_DWORD *)v21 - 2);
    if ( v38 >= v22 )
      break;
    v35 = (3 * v38 + 1) >> 1;
    v36 = 4 * v35 + 8;
    if ( 4 * v38 + 8 >= (unsigned int)v36 || v38 >= v35 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v107, "Overflow encountered when expanding vector", v5);
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v107);
      sub_233E40((__int64)v107);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = (unsigned int *)sub_186B300(v21 - 1, v36);
    v21 = v37 + 2;
    *v37 = v35;
    a1[11] = v37 + 2;
  }
  v39 = 4 * v23;
  *((_DWORD *)v21 - 1) = v22;
  v40 = 4LL * v22;
  v41 = (char *)v21 + v39;
  if ( v39 != v40 )
    memset(v41, 0, v40 - v39);
LABEL_36:
  v42 = (_QWORD *)a1[7];
  if ( v42 )
  {
    v43 = *((unsigned int *)v42 - 1);
    if ( v22 >= (unsigned int)v43 )
      goto LABEL_38;
    v93 = &v42[v43];
    v94 = &v42[v22];
    if ( v94 >= v93 )
    {
LABEL_106:
      *((_DWORD *)v42 - 1) = v22;
      goto LABEL_46;
    }
    do
    {
LABEL_92:
      while ( 1 )
      {
        v95 = *v94;
        if ( *v94 )
        {
          v96 = a1[6];
          v18 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v94 >= v93 )
          goto LABEL_95;
      }
      sub_15D7BC0(v96, v95);
      ++v94;
    }
    while ( v94 < v93 );
LABEL_95:
    v42 = (_QWORD *)a1[7];
    if ( v42 )
    {
LABEL_38:
      v44 = *((unsigned int *)v42 - 1);
      if ( (unsigned int)v44 >= v22 )
        goto LABEL_106;
      goto LABEL_43;
    }
  }
  if ( !v22 )
  {
    v89 = (_QWORD *)a1[9];
    if ( v89 )
    {
      v101 = *((unsigned int *)v89 - 1);
      if ( (_DWORD)v101 )
      {
        v88 = &v89[v101];
        if ( v89 < v88 )
          goto LABEL_83;
        v62 = (_QWORD *)a1[10];
        *((_DWORD *)v89 - 1) = 0;
        if ( !v62 )
          goto LABEL_64;
        goto LABEL_56;
      }
    }
    goto LABEL_99;
  }
  v44 = 0;
  v97 = (_QWORD *)sub_186B270(0x18u);
  v42 = v97 + 1;
  *v97 = 2;
  a1[7] = v97 + 1;
LABEL_43:
  while ( 1 )
  {
    v48 = *((_DWORD *)v42 - 2);
    if ( v48 >= v22 )
      break;
    v45 = (3 * v48 + 1) >> 1;
    v46 = 8 * v45 + 8;
    if ( 8 * v48 + 8 >= (unsigned int)v46 || v48 >= v45 )
    {
      v10 = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v107, "Overflow encountered when expanding vector", v11);
      *v10 = (char *)off_1C63128;
      sub_2333C0(v10 + 1, v107);
      sub_233E40((__int64)v107);
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v47 = (unsigned int *)sub_186B300(v42 - 1, v46);
    v42 = v47 + 2;
    *v47 = v45;
    a1[7] = v47 + 2;
  }
  v49 = 8 * v44;
  *((_DWORD *)v42 - 1) = v22;
  v50 = &v42[(unsigned __int64)v49 / 8];
  v51 = 8LL * v22;
  if ( v49 != v51 )
    memset(v50, 0, v51 - v49);
LABEL_46:
  v52 = (_QWORD *)a1[9];
  if ( !v52 )
  {
LABEL_87:
    if ( v22 )
    {
      v54 = 0;
      v92 = (_QWORD *)sub_186B270(0x18u);
      *v92 = 2;
      v52 = v92 + 1;
      a1[9] = v92 + 1;
      goto LABEL_53;
    }
LABEL_99:
    v62 = (_QWORD *)a1[10];
    if ( !v62 )
      goto LABEL_64;
LABEL_100:
    v71 = a1[12];
    *((_DWORD *)v62 - 1) = v22;
    v72 = a1 + 12;
    if ( v71 )
      goto LABEL_65;
    goto LABEL_101;
  }
LABEL_47:
  v53 = *((unsigned int *)v52 - 1);
  if ( v22 >= (unsigned int)v53 )
    goto LABEL_48;
LABEL_80:
  v88 = &v52[v53];
  v89 = &v52[v22];
  if ( v89 < v88 )
  {
    do
    {
LABEL_83:
      while ( 1 )
      {
        v90 = *v89;
        if ( *v89 )
        {
          v91 = a1[8];
          v18 = (*(_DWORD *)(v90 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v89 >= v88 )
          goto LABEL_86;
      }
      sub_15D7BC0(v91, v90);
      ++v89;
    }
    while ( v89 < v88 );
LABEL_86:
    v52 = (_QWORD *)a1[9];
    if ( v52 )
    {
LABEL_48:
      v54 = *((unsigned int *)v52 - 1);
      if ( (unsigned int)v54 >= v22 )
        goto LABEL_107;
LABEL_53:
      while ( 1 )
      {
        v58 = *((_DWORD *)v52 - 2);
        if ( v58 >= v22 )
          break;
        v55 = (3 * v58 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v58 + 8 >= (unsigned int)v56 || v58 >= v55 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v107, "Overflow encountered when expanding vector", v9);
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v107);
          sub_233E40((__int64)v107);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v52 - 1, v56);
        v52 = v57 + 2;
        *v57 = v55;
        a1[9] = v57 + 2;
      }
      v59 = 8 * v54;
      *((_DWORD *)v52 - 1) = v22;
      v60 = 8LL * v22;
      v61 = &v52[(unsigned __int64)v59 / 8];
      if ( v59 == v60 )
      {
        v62 = (_QWORD *)a1[10];
        if ( !v62 )
        {
LABEL_109:
          v63 = 0;
          v99 = (_QWORD *)sub_186B270(0x18u);
          v62 = v99 + 1;
          *v99 = 2;
          a1[10] = v99 + 1;
          goto LABEL_61;
        }
      }
      else
      {
        memset(v61, 0, v60 - v59);
        v62 = (_QWORD *)a1[10];
        if ( !v62 )
          goto LABEL_108;
      }
LABEL_56:
      v63 = *((unsigned int *)v62 - 1);
      if ( (unsigned int)v63 >= v22 )
        goto LABEL_100;
LABEL_61:
      while ( 1 )
      {
        v67 = *((_DWORD *)v62 - 2);
        if ( v67 >= v22 )
          break;
        v64 = (3 * v67 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v67 + 8 >= (unsigned int)v65 || v67 >= v64 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(v107, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v107);
          sub_233E40((__int64)v107);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = (unsigned int *)sub_186B300(v62 - 1, v65);
        v62 = v66 + 2;
        *v66 = v64;
        a1[10] = v66 + 2;
      }
      v68 = 8 * v63;
      *((_DWORD *)v62 - 1) = v22;
      v69 = 8LL * v22;
      v70 = &v62[(unsigned __int64)v68 / 8];
      if ( v68 != v69 )
        memset(v70, 0, v69 - v68);
      goto LABEL_64;
    }
    goto LABEL_87;
  }
LABEL_107:
  *((_DWORD *)v52 - 1) = v22;
  v62 = (_QWORD *)a1[10];
  if ( v62 )
    goto LABEL_56;
LABEL_108:
  if ( v22 )
    goto LABEL_109;
LABEL_64:
  v71 = a1[12];
  v72 = a1 + 12;
  if ( !v71 )
  {
LABEL_101:
    v73 = 0;
    goto LABEL_66;
  }
LABEL_65:
  v73 = *(_DWORD *)(v71 - 4);
LABEL_66:
  sub_83BF90(v72, v73 - v106);
}

