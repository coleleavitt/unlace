__int64 __fastcall Z3_solver_get_consequences(__int64 a1, pthread_mutex_t *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **v5; // r15
  char **exception; // r14
  char **v7; // r14
  char v9; // r12
  __int64 v10; // r15
  __int64 *v11; // rdx
  __int64 *v12; // r12
  __int64 *v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 v18; // r15
  unsigned int v19; // eax
  unsigned int v20; // r8d
  size_t v21; // rsi
  unsigned int v22; // ebp
  unsigned int *v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // r14
  __int64 *v26; // r15
  int v27; // r14d
  unsigned int v28; // ebp
  unsigned __int8 v29; // r13
  __int64 v30; // rax
  pthread_mutex_t *v31; // r12
  int v32; // eax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  struct __pthread_internal_list *prev; // rdi
  unsigned int v37; // r14d
  int v38; // eax
  __int64 *v39; // rbp
  __int64 *v40; // rdx
  __int64 v41; // r15
  _DWORD *v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  __int64 v48; // r13
  __int64 *v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // ecx
  size_t v52; // rsi
  unsigned int *v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rsi
  int v56; // eax
  _QWORD *v57; // rsi
  unsigned int v58; // r8d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rsi
  _QWORD *v62; // rbp
  __int64 v63; // rsi
  bool v64; // zf
  __int64 *v65; // rbp
  __int64 *v66; // r13
  __int64 v67; // rsi
  __int64 *v68; // rbp
  unsigned __int64 v69; // r13
  __int64 v70; // rsi
  __int64 *v71; // rbx
  unsigned __int64 v72; // rbp
  __int64 v73; // rsi
  __int64 *v74; // rbx
  __int64 *v75; // rbp
  __int64 v76; // rsi
  _QWORD *v78; // rax
  __int64 *v79; // rbp
  unsigned __int64 v80; // r13
  __int64 *v81; // rbp
  __int64 *v82; // r13
  __int64 *v83; // rbp
  unsigned __int64 v84; // r13
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 *v89; // [rsp+8h] [rbp-130h]
  __int64 *v90; // [rsp+8h] [rbp-130h]
  __int64 v92; // [rsp+10h] [rbp-128h]
  unsigned int v93; // [rsp+10h] [rbp-128h]
  unsigned int v94; // [rsp+10h] [rbp-128h]
  char v96; // [rsp+27h] [rbp-111h]
  __int64 v97; // [rsp+50h] [rbp-E8h] BYREF
  char v98[8]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v99; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD *v100; // [rsp+68h] [rbp-D0h]
  __int64 v101; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v102; // [rsp+78h] [rbp-C0h]
  __int64 v103; // [rsp+80h] [rbp-B8h] BYREF
  __int64 *v104; // [rsp+88h] [rbp-B0h]
  __int64 v105[4]; // [rsp+90h] [rbp-A8h] BYREF
  int *v106; // [rsp+B0h] [rbp-88h] BYREF
  int v107; // [rsp+B8h] [rbp-80h]
  __int128 v108; // [rsp+C0h] [rbp-78h]
  __int128 v109; // [rsp+D0h] [rbp-68h]
  __int64 v110; // [rsp+E0h] [rbp-58h]
  __int16 v111; // [rsp+E8h] [rbp-50h]
  __int64 v112; // [rsp+F0h] [rbp-48h]

  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v96 = v9;
  if ( v9 )
    sub_29E330(a1, (__int64)a2, a3, a4, a5);
  v10 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2->__list.__next )
    sub_2A74C0(a1, (__int64)a2);
  v11 = *(__int64 **)(a3 + 32);
  v99 = v10;
  v100 = nullptr;
  v101 = v10;
  v102 = nullptr;
  v103 = v10;
  v104 = nullptr;
  if ( v11 )
  {
    v12 = &v11[*((unsigned int *)v11 - 1)];
    if ( v11 != v12 )
    {
      v13 = v11;
      v14 = nullptr;
      while ( 1 )
      {
        v18 = *v13;
        if ( (unsigned int)*(unsigned __int16 *)(*v13 + 4) - 3 <= 1 )
        {
          if ( v14 )
          {
            v62 = &v14[*((unsigned int *)v14 - 1)];
            if ( v14 >= v62 )
              goto LABEL_65;
            do
            {
              while ( 1 )
              {
                v63 = *v14;
                if ( *v14 )
                {
                  v64 = (*(_DWORD *)(v63 + 8))-- == 1;
                  if ( v64 )
                    break;
                }
                if ( ++v14 >= v62 )
                  goto LABEL_64;
              }
              sub_15D7BC0(v99, v63);
              ++v14;
            }
            while ( v14 < v62 );
LABEL_64:
            v14 = v100;
            if ( v100 )
LABEL_65:
              sub_186B220(v14 - 1);
          }
          v100 = nullptr;
          v65 = v102;
          if ( v102 )
          {
            v66 = &v102[*((unsigned int *)v102 - 1)];
            if ( v102 >= v66 )
              goto LABEL_74;
            do
            {
              while ( 1 )
              {
                v67 = *v65;
                if ( *v65 )
                {
                  v64 = (*(_DWORD *)(v67 + 8))-- == 1;
                  if ( v64 )
                    break;
                }
                if ( ++v65 >= v66 )
                  goto LABEL_73;
              }
              sub_15D7BC0(v101, v67);
              ++v65;
            }
            while ( v65 < v66 );
LABEL_73:
            v65 = v102;
            if ( v102 )
LABEL_74:
              sub_186B220(v65 - 1);
          }
          v68 = v104;
          v102 = nullptr;
          if ( v104 )
          {
            v69 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
            if ( (unsigned __int64)v104 >= v69 )
              goto LABEL_83;
            do
            {
              while ( 1 )
              {
                v70 = *v68;
                if ( *v68 )
                {
                  v64 = (*(_DWORD *)(v70 + 8))-- == 1;
                  if ( v64 )
                    break;
                }
                if ( (unsigned __int64)++v68 >= v69 )
                  goto LABEL_82;
              }
              sub_15D7BC0(v103, v70);
              ++v68;
            }
            while ( (unsigned __int64)v68 < v69 );
LABEL_82:
            v68 = v104;
            if ( v104 )
LABEL_83:
              sub_186B220(v68 - 1);
          }
          v104 = nullptr;
          sub_24EA30(a1, 0xAu, "assumption is not an expression");
          goto LABEL_85;
        }
        ++*(_DWORD *)(v18 + 8);
        if ( !v14 )
          break;
        v19 = *((_DWORD *)v14 - 1);
        if ( v19 == *((_DWORD *)v14 - 2) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 8 * v20 + 8;
          v22 = v20;
          if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v106, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v106);
            sub_233E40((__int64)&v106);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v14 - 1, v21);
          v24 = v23[1];
          v14 = v23 + 2;
          *v23 = v22;
          ++v13;
          v100 = v14;
          v14[v24] = v18;
          v23[1] = v24 + 1;
          if ( v12 == v13 )
            goto LABEL_16;
        }
        else
        {
          v15 = v19;
          v16 = v19 + 1;
          v17 = &v14[v15];
LABEL_9:
          ++v13;
          *v17 = v18;
          *((_DWORD *)v14 - 1) = v16;
          if ( v12 == v13 )
            goto LABEL_16;
        }
      }
      v44 = (_QWORD *)sub_186B270(0x18u);
      v14 = v44 + 1;
      *v44 = 2;
      v16 = 1;
      v100 = v14;
      v17 = v14;
      goto LABEL_9;
    }
  }
LABEL_16:
  v25 = *(__int64 **)(a4 + 32);
  if ( !v25 || (v26 = &v25[*((unsigned int *)v25 - 1)], v25 == v26) )
  {
LABEL_18:
    v27 = sub_1859960(&a2[1], "timeout", *(unsigned int *)(a1 + 100));
    v28 = sub_1859960(&a2[1], "rlimit", *(unsigned int *)(a1 + 96));
    v29 = sub_1859610(&a2[1], "ctrl_c", 1);
    v30 = *(_QWORD *)(a1 + 232);
    v106 = &off_1C4C9C8;
    v112 = v30;
    v107 = 0;
    v110 = 0;
    v31 = a2 + 2;
    v111 = 0;
    v108 = 0;
    v109 = 0;
    if ( &_pthread_key_create )
    {
      v32 = pthread_mutex_lock(a2 + 2);
      if ( v32 )
        std::__throw_system_error(v32);
    }
    a2[3].__align = (__int64)&v106;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v31);
    sub_24FD10(&v97, a1, (__int64)&v106);
    sub_18086F0(v105, &v106, v29);
    sub_18561B0((unsigned int)v98, v27, (unsigned int)&v106, v33, v34, v35);
    v92 = *(_QWORD *)(a1 + 232);
    sub_1829790(v92, v28);
    prev = a2[1].__list.__prev;
    if ( prev )
      sub_2A7930((_DWORD)prev);
    v37 = ((__int64 (__fastcall *)(struct __pthread_internal_list *, __int64 *, __int64 *, __int64 *))a2->__list.__next->__prev[16].__next)(
            a2->__list.__next,
            &v99,
            &v103,
            &v101);
    sub_1829100(v92);
    sub_1856400(v98);
    sub_1808900(v105);
    if ( &_pthread_key_create )
    {
      v38 = pthread_mutex_lock(v31);
      if ( v38 )
        std::__throw_system_error(v38);
    }
    a2[3].__align = 0;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v31);
    if ( !v37 )
      sub_E38C90(a2->__list.__next, &v106, "899");
    v39 = v102;
    if ( !v102 )
      goto LABEL_36;
    v40 = &v102[*((unsigned int *)v102 - 1)];
    if ( v40 == v102 )
      goto LABEL_36;
    v41 = *v102;
    v42 = *(_DWORD **)(a5 + 32);
    if ( *v102 )
      ++*(_DWORD *)(v41 + 8);
    if ( v42 )
      goto LABEL_49;
    v89 = v40;
    v43 = sub_186B270(0x18u);
    v42 = (_DWORD *)(v43 + 8);
    *(_QWORD *)v43 = 2;
    ++v39;
    v40 = v89;
    *(_QWORD *)(a5 + 32) = v43 + 8;
    *(_QWORD *)(v43 + 8) = v41;
    *(_DWORD *)(v43 + 4) = 1;
    if ( v89 == v39 )
    {
LABEL_36:
      sub_24E910(&v97);
      v106 = &off_1C4C9C8;
      if ( (_BYTE)v111 )
        sub_18296D0(v112);
      if ( HIBYTE(v111) )
        sub_1829760(v112);
      goto LABEL_86;
    }
    while ( 1 )
    {
      v41 = *v39;
      if ( *v39 )
      {
        ++*(_DWORD *)(v41 + 8);
        v54 = *(v42 - 1);
        if ( v54 == *(v42 - 2) )
        {
LABEL_54:
          v58 = (3 * v54 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v54 + 8 >= (unsigned int)v59 || v54 >= v58 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v105, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v105);
            sub_233E40((__int64)v105);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (3 * v54 + 1) >> 1;
          v90 = v40;
          v60 = (unsigned int *)sub_186B300(v42 - 2, v59);
          v61 = v60[1];
          v42 = v60 + 2;
          *v60 = v94;
          LODWORD(v60) = v61;
          v57 = &v42[2 * v61];
          *(_QWORD *)(a5 + 32) = v42;
          v56 = (_DWORD)v60 + 1;
          v40 = v90;
          goto LABEL_51;
        }
      }
      else
      {
LABEL_49:
        v54 = *(v42 - 1);
        if ( v54 == *(v42 - 2) )
          goto LABEL_54;
      }
      v55 = v54;
      v56 = v54 + 1;
      v57 = &v42[2 * v55];
LABEL_51:
      ++v39;
      *v57 = v41;
      *(v42 - 1) = v56;
      if ( v40 == v39 )
        goto LABEL_36;
    }
  }
  while ( 1 )
  {
    v48 = *v25;
    if ( (unsigned int)*(unsigned __int16 *)(*v25 + 4) - 3 <= 1 )
      break;
    v49 = v104;
    ++*(_DWORD *)(v48 + 8);
    if ( v49 )
    {
      v50 = *((_DWORD *)v49 - 1);
      if ( v50 == *((_DWORD *)v49 - 2) )
      {
        v51 = (3 * v50 + 1) >> 1;
        v52 = 8 * v51 + 8;
        if ( 8 * v50 + 8 >= (unsigned int)v52 || v50 >= v51 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v106, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v106);
          sub_233E40((__int64)&v106);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (3 * v50 + 1) >> 1;
        v53 = (unsigned int *)sub_186B300(v49 - 1, v52);
        v49 = (__int64 *)(v53 + 2);
        v104 = (__int64 *)(v53 + 2);
        *v53 = v93;
        LODWORD(v53) = v53[1];
        v47 = &v49[(unsigned int)v53];
        v46 = (_DWORD)v53 + 1;
      }
      else
      {
        v45 = v50;
        v46 = v50 + 1;
        v47 = &v49[v45];
      }
    }
    else
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      v49 = v78 + 1;
      *v78 = 2;
      v46 = 1;
      v104 = v49;
      v47 = v49;
    }
    ++v25;
    *v47 = v48;
    *((_DWORD *)v49 - 1) = v46;
    if ( v26 == v25 )
      goto LABEL_18;
  }
  v79 = v100;
  if ( !v100 )
    goto LABEL_111;
  v80 = (unsigned __int64)&v100[*((unsigned int *)v100 - 1)];
  if ( (unsigned __int64)v100 >= v80 )
    goto LABEL_110;
  do
  {
    while ( 1 )
    {
      v85 = *v79;
      if ( !*v79 )
        goto LABEL_119;
      v64 = (*(_DWORD *)(v85 + 8))-- == 1;
      if ( !v64 )
        break;
      sub_15D7BC0(v99, v85);
LABEL_119:
      if ( (unsigned __int64)++v79 >= v80 )
        goto LABEL_123;
    }
    ++v79;
  }
  while ( (unsigned __int64)v79 < v80 );
LABEL_123:
  if ( v100 )
LABEL_110:
    sub_186B220(v100 - 1);
LABEL_111:
  v100 = nullptr;
  v81 = v102;
  if ( !v102 )
    goto LABEL_114;
  v82 = &v102[*((unsigned int *)v102 - 1)];
  if ( v102 >= v82 )
    goto LABEL_113;
  while ( 2 )
  {
    while ( 2 )
    {
      v86 = *v81;
      if ( !*v81 )
      {
LABEL_126:
        if ( ++v81 >= v82 )
          goto LABEL_130;
        continue;
      }
      break;
    }
    v64 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v64 )
    {
      sub_15D7BC0(v101, v86);
      goto LABEL_126;
    }
    if ( ++v81 < v82 )
      continue;
    break;
  }
LABEL_130:
  if ( v102 )
LABEL_113:
    sub_186B220(v102 - 1);
LABEL_114:
  v83 = v104;
  v102 = nullptr;
  if ( !v104 )
    goto LABEL_117;
  v84 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
  if ( (unsigned __int64)v104 >= v84 )
    goto LABEL_116;
  while ( 2 )
  {
    while ( 2 )
    {
      v87 = *v83;
      if ( !*v83 )
      {
LABEL_133:
        if ( (unsigned __int64)++v83 >= v84 )
          goto LABEL_137;
        continue;
      }
      break;
    }
    v64 = (*(_DWORD *)(v87 + 8))-- == 1;
    if ( v64 )
    {
      sub_15D7BC0(v103, v87);
      goto LABEL_133;
    }
    if ( (unsigned __int64)++v83 < v84 )
      continue;
    break;
  }
LABEL_137:
  if ( v104 )
LABEL_116:
    sub_186B220(v104 - 1);
LABEL_117:
  v104 = nullptr;
  sub_24EA30(a1, 0xAu, "variable is not an expression");
LABEL_85:
  v37 = 0;
LABEL_86:
  v71 = v104;
  if ( v104 )
  {
    v72 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
    if ( (unsigned __int64)v104 >= v72 )
      goto LABEL_94;
    do
    {
      while ( 1 )
      {
        v73 = *v71;
        if ( *v71 )
        {
          v64 = (*(_DWORD *)(v73 + 8))-- == 1;
          if ( v64 )
            break;
        }
        if ( (unsigned __int64)++v71 >= v72 )
          goto LABEL_93;
      }
      sub_15D7BC0(v103, v73);
      ++v71;
    }
    while ( (unsigned __int64)v71 < v72 );
LABEL_93:
    v71 = v104;
    if ( v104 )
LABEL_94:
      sub_186B220(v71 - 1);
  }
  v74 = v102;
  if ( v102 )
  {
    v75 = &v102[*((unsigned int *)v102 - 1)];
    if ( v102 >= v75 )
      goto LABEL_103;
    do
    {
      while ( 1 )
      {
        v76 = *v74;
        if ( *v74 )
        {
          v64 = (*(_DWORD *)(v76 + 8))-- == 1;
          if ( v64 )
            break;
        }
        if ( ++v74 >= v75 )
          goto LABEL_102;
      }
      sub_15D7BC0(v101, v76);
      ++v74;
    }
    while ( v74 < v75 );
LABEL_102:
    v74 = v102;
    if ( v102 )
LABEL_103:
      sub_186B220(v74 - 1);
  }
  sub_2334C0(&v99);
  if ( v96 )
    byte_1C7EBA0 = 1;
  return v37;
}

