_QWORD *__fastcall Z3_solver_cube(__int64 a1, pthread_mutex_t *a2, __int64 a3, unsigned int a4)
{
  char **exception; // r12
  char **v5; // r15
  char **v6; // r15
  char **v7; // r15
  char v11; // al
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 *i; // r12
  pthread_mutex_t *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  char *v19; // rsi
  __int64 v20; // r13
  int v21; // r15d
  unsigned int v22; // r13d
  unsigned __int8 v23; // r12
  __int64 v24; // rax
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  _QWORD *v29; // r13
  pthread_mutex_t *v30; // r12
  unsigned int j; // edx
  __int64 v32; // r15
  unsigned int v33; // eax
  _QWORD *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // rdi
  bool v37; // zf
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r15
  _QWORD *v41; // r14
  __int64 v42; // rax
  pthread_mutex_t *v43; // rcx
  __int64 align; // r15
  _QWORD *v45; // rdi
  pthread_mutex_t *v46; // rdx
  _QWORD *v47; // rax
  __int64 *v48; // rdx
  __int64 *v49; // rsi
  int k; // eax
  unsigned int v51; // eax
  pthread_mutex_t *v52; // rax
  pthread_mutex_t *v53; // rsi
  unsigned __int64 v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rdi
  pthread_mutex_t *v57; // r15
  __int64 v58; // rax
  pthread_mutex_t *v59; // rcx
  __int64 v60; // rdx
  __int64 *v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 *v64; // rsi
  int m; // eax
  unsigned int v66; // eax
  pthread_mutex_t *v67; // rbx
  pthread_mutex_t *v68; // rbp
  __int64 v69; // rsi
  pthread_mutex_t *v70; // rbx
  pthread_mutex_t *v71; // rbp
  __int64 v72; // rsi
  unsigned int v74; // r8d
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rsi
  unsigned int v78; // r13d
  size_t v79; // rsi
  unsigned int *v80; // rax
  __int64 v81; // rcx
  unsigned int v82; // edx
  __int64 *p_align; // rcx
  int v84; // eax
  unsigned int v85; // r8d
  size_t v86; // rsi
  unsigned int *v87; // rax
  __int64 v88; // rsi
  unsigned int v89; // r8d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rsi
  _QWORD *v93; // rax
  _QWORD *v94; // rax
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-158h]
  pthread_mutex_t *mutexa; // [rsp+0h] [rbp-158h]
  pthread_mutex_t *mutexb; // [rsp+0h] [rbp-158h]
  pthread_mutex_t *mutexc; // [rsp+0h] [rbp-158h]
  unsigned int mutexd; // [rsp+0h] [rbp-158h]
  pthread_mutex_t *mutexe; // [rsp+0h] [rbp-158h]
  pthread_mutex_t *mutexf; // [rsp+0h] [rbp-158h]
  __int64 v103; // [rsp+10h] [rbp-148h]
  unsigned int v104; // [rsp+10h] [rbp-148h]
  unsigned int v105; // [rsp+10h] [rbp-148h]
  unsigned int v106; // [rsp+10h] [rbp-148h]
  unsigned int v107; // [rsp+10h] [rbp-148h]
  __int64 v108; // [rsp+18h] [rbp-140h]
  __int64 *v109; // [rsp+18h] [rbp-140h]
  __int64 v110; // [rsp+18h] [rbp-140h]
  char v111; // [rsp+2Fh] [rbp-129h]
  __int64 v112; // [rsp+48h] [rbp-110h]
  __int64 v113; // [rsp+70h] [rbp-E8h] BYREF
  char v114[8]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v115; // [rsp+80h] [rbp-D8h] BYREF
  pthread_mutex_t *v116; // [rsp+88h] [rbp-D0h]
  _BYTE v117[16]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v118; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD *v119; // [rsp+A8h] [rbp-B0h]
  __int64 v120[4]; // [rsp+B0h] [rbp-A8h] BYREF
  int *v121; // [rsp+D0h] [rbp-88h] BYREF
  int v122; // [rsp+D8h] [rbp-80h]
  __int128 v123; // [rsp+E0h] [rbp-78h]
  __int128 v124; // [rsp+F0h] [rbp-68h]
  __int64 v125; // [rsp+100h] [rbp-58h]
  __int16 v126; // [rsp+108h] [rbp-50h]
  __int64 v127; // [rsp+110h] [rbp-48h]

  v11 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v111 = v11;
  if ( v11 )
    sub_29E390(a1, (__int64)a2, a3, a4);
  v12 = *(_QWORD *)(a1 + 232);
  v13 = *(__int64 **)(a3 + 32);
  v116 = nullptr;
  v112 = v12;
  v115 = v12;
  if ( v13 )
  {
    for ( i = &v13[*((unsigned int *)v13 - 1)]; i != v13; *((_DWORD *)&v15[-1].__align + 9) = v18 )
    {
      while ( 1 )
      {
        v20 = *v13;
        if ( (unsigned int)*(unsigned __int16 *)(*v13 + 4) - 3 > 1 )
          break;
        sub_24EA30(a1, 0xAu, "cube contains a non-expression");
        if ( i == ++v13 )
          goto LABEL_12;
      }
      v15 = v116;
      ++*(_DWORD *)(v20 + 8);
      if ( v15 )
      {
        v16 = *((_DWORD *)&v15[-1].__align + 9);
        if ( v16 == *((_DWORD *)&v15[-1].__align + 8) )
        {
          v74 = (3 * v16 + 1) >> 1;
          v75 = 8 * v74 + 8;
          if ( 8 * v16 + 8 >= (unsigned int)v75 || v16 >= v74 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v121, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v121);
            sub_233E40((__int64)&v121);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          mutexd = (3 * v16 + 1) >> 1;
          v76 = (unsigned int *)sub_186B300(&v15[-1].__align + 4, v75);
          v77 = v76[1];
          v15 = (pthread_mutex_t *)(v76 + 2);
          v116 = (pthread_mutex_t *)(v76 + 2);
          *v76 = mutexd;
          LODWORD(v76) = v77;
          v19 = (char *)v15 + 8 * v77;
          v18 = (_DWORD)v76 + 1;
        }
        else
        {
          v17 = v16;
          v18 = v16 + 1;
          v19 = (char *)v15 + 8 * v17;
        }
      }
      else
      {
        v93 = (_QWORD *)sub_186B270(0x18u);
        v15 = (pthread_mutex_t *)(v93 + 1);
        *v93 = 2;
        v18 = 1;
        v116 = v15;
        v19 = (char *)v15;
      }
      ++v13;
      *(_QWORD *)v19 = v20;
    }
  }
LABEL_12:
  v21 = sub_1859960(&a2[1], "timeout", *(unsigned int *)(a1 + 100));
  v22 = sub_1859960(&a2[1], "rlimit", *(unsigned int *)(a1 + 96));
  v23 = sub_1859610(&a2[1], "ctrl_c", 1);
  v24 = *(_QWORD *)(a1 + 232);
  v122 = 0;
  v127 = v24;
  v121 = &off_1C4C9C8;
  v125 = 0;
  v126 = 0;
  mutex = a2 + 2;
  v123 = 0;
  v124 = 0;
  if ( &_pthread_key_create )
  {
    v25 = pthread_mutex_lock(a2 + 2);
    if ( v25 )
      std::__throw_system_error(v25);
  }
  a2[3].__align = (__int64)&v121;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  sub_24FD10(&v113, a1, (__int64)&v121);
  sub_18086F0(v117, &v121, v23);
  sub_18561B0((unsigned int)v114, v21, (unsigned int)&v121, v26, v27, v28);
  v108 = *(_QWORD *)(a1 + 232);
  sub_1829790(v108, v22);
  ((void (__fastcall *)(__int64 *, struct __pthread_internal_list *, __int64 *, _QWORD))a2->__list.__next->__prev[18].__prev)(
    &v118,
    a2->__list.__next,
    &v115,
    a4);
  v29 = v119;
  v30 = nullptr;
  if ( v119 )
  {
    for ( j = 0; j < *((_DWORD *)v29 - 1); j = v82 + 1 )
    {
      while ( 1 )
      {
        v32 = v29[j];
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        if ( !v30 )
        {
          v107 = j;
          v94 = (_QWORD *)sub_186B270(0x18u);
          v30 = (pthread_mutex_t *)(v94 + 1);
          *v94 = 2;
          v29 = v119;
          v84 = 1;
          v82 = v107;
          p_align = &v30->__align;
          goto LABEL_98;
        }
        v33 = *((_DWORD *)&v30[-1].__align + 9);
        if ( v33 == *((_DWORD *)&v30[-1].__align + 8) )
          break;
        ++j;
        *(_QWORD *)&v30->__size[8 * v33] = v32;
        *((_DWORD *)&v30[-1].__align + 9) = v33 + 1;
        if ( j >= *((_DWORD *)v29 - 1) )
          goto LABEL_24;
      }
      v78 = (3 * v33 + 1) >> 1;
      v79 = 8 * v78 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v79 || v33 >= v78 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v120, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v120);
        sub_233E40((__int64)v120);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v104 = j;
      v80 = (unsigned int *)sub_186B300(&v30[-1].__align + 4, v79);
      v81 = v80[1];
      v30 = (pthread_mutex_t *)(v80 + 2);
      v82 = v104;
      *v80 = v78;
      v29 = v119;
      LODWORD(v80) = v81;
      p_align = (__int64 *)&v30->__size[8 * v81];
      v84 = (_DWORD)v80 + 1;
LABEL_98:
      *p_align = v32;
      *((_DWORD *)&v30[-1].__align + 9) = v84;
      if ( !v29 )
        goto LABEL_32;
    }
LABEL_24:
    v34 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v34 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        v35 = *v29;
        if ( *v29 )
        {
          v36 = v118;
          v37 = (*(_DWORD *)(v35 + 8))-- == 1;
          if ( v37 )
            break;
        }
        if ( ++v29 >= v34 )
          goto LABEL_30;
      }
      sub_15D7BC0(v36, v35);
      ++v29;
    }
    while ( v29 < v34 );
LABEL_30:
    v29 = v119;
    if ( v119 )
LABEL_31:
      sub_186B220(v29 - 1);
  }
LABEL_32:
  sub_1829100(v108);
  sub_1856400(v114);
  sub_1808900(v117);
  if ( &_pthread_key_create )
  {
    v38 = pthread_mutex_lock(mutex);
    if ( v38 )
      std::__throw_system_error(v38);
  }
  a2[3].__align = 0;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  v39 = sub_186B270(0x28u);
  v40 = *(_QWORD *)(a1 + 232);
  v41 = (_QWORD *)v39;
  sub_2518F0(v39, a1);
  v41[3] = v40;
  *v41 = &off_1C4CA20;
  v41[4] = 0;
  sub_24FBE0(a1, (__int64)v41);
  if ( v30 )
  {
    v42 = *((unsigned int *)&v30[-1].__align + 9);
    v43 = (pthread_mutex_t *)((char *)v30 + 8 * v42);
    if ( v43 != v30 )
    {
      align = v30->__align;
      v45 = (_QWORD *)v41[4];
      v46 = v30;
      if ( v30->__align )
        ++*(_DWORD *)(align + 8);
      if ( v45 )
        goto LABEL_45;
      mutexa = (pthread_mutex_t *)((char *)v30 + 8 * v42);
      v47 = (_QWORD *)sub_186B270(0x18u);
      v45 = v47 + 1;
      v43 = mutexa;
      v48 = &v30->__align;
      *v47 = 2;
      v41[4] = v47 + 1;
      v49 = v47 + 1;
      for ( k = 1; ; k = (_DWORD)v87 + 1 )
      {
        v46 = (pthread_mutex_t *)(v48 + 1);
        *v49 = align;
        *((_DWORD *)v45 - 1) = k;
        if ( v43 == v46 )
          break;
        while ( 1 )
        {
          align = v46->__align;
          if ( v46->__align )
            ++*(_DWORD *)(align + 8);
LABEL_45:
          v51 = *((_DWORD *)v45 - 1);
          if ( v51 == *((_DWORD *)v45 - 2) )
            break;
          v46 = (pthread_mutex_t *)((char *)v46 + 8);
          v45[v51] = align;
          *((_DWORD *)v45 - 1) = v51 + 1;
          if ( v43 == v46 )
            goto LABEL_47;
        }
        v85 = (3 * v51 + 1) >> 1;
        v86 = 8 * v85 + 8;
        if ( 8 * v51 + 8 >= (unsigned int)v86 || v51 >= v85 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v120, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v120);
          sub_233E40((__int64)v120);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        mutexe = v43;
        v109 = &v46->__align;
        v105 = (3 * v51 + 1) >> 1;
        v87 = (unsigned int *)sub_186B300(v45 - 1, v86);
        v88 = v87[1];
        v45 = v87 + 2;
        v43 = mutexe;
        v48 = v109;
        v41[4] = v87 + 2;
        *v87 = v105;
        LODWORD(v87) = v88;
        v49 = &v45[v88];
      }
    }
  }
LABEL_47:
  v52 = *(pthread_mutex_t **)(a3 + 32);
  v53 = v52;
  if ( v52 )
  {
    v54 = (unsigned __int64)v52 + 8 * *((unsigned int *)&v52[-1].__align + 9);
    if ( (unsigned __int64)v52 >= v54 )
      goto LABEL_55;
    do
    {
      while ( 1 )
      {
        v55 = v52->__align;
        if ( v52->__align )
        {
          v56 = *(_QWORD *)(a3 + 24);
          v37 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v37 )
            break;
        }
        v52 = (pthread_mutex_t *)((char *)v52 + 8);
        if ( (unsigned __int64)v52 >= v54 )
          goto LABEL_54;
      }
      mutexb = v52;
      sub_15D7BC0(v56, v55);
      v52 = (pthread_mutex_t *)(&mutexb->__align + 1);
    }
    while ( (unsigned __int64)(&mutexb->__align + 1) < v54 );
LABEL_54:
    v53 = *(pthread_mutex_t **)(a3 + 32);
    if ( v53 )
LABEL_55:
      *((_DWORD *)&v53[-1].__align + 9) = 0;
  }
  v57 = v116;
  if ( v116 )
  {
    v58 = *((unsigned int *)&v116[-1].__align + 9);
    v59 = (pthread_mutex_t *)((char *)v116 + 8 * v58);
    if ( v59 != v116 )
    {
      v60 = v116->__align;
      v61 = &v53->__align;
      if ( v116->__align )
        ++*(_DWORD *)(v60 + 8);
      if ( v53 )
        goto LABEL_65;
      v103 = v60;
      mutexc = (pthread_mutex_t *)((char *)v57 + 8 * v58);
      v62 = (_QWORD *)sub_186B270(0x18u);
      v61 = v62 + 1;
      v59 = mutexc;
      v63 = v103;
      *v62 = 2;
      *(_QWORD *)(a3 + 32) = v62 + 1;
      v64 = v62 + 1;
      for ( m = 1; ; m = (_DWORD)v91 + 1 )
      {
        v57 = (pthread_mutex_t *)((char *)v57 + 8);
        *v64 = v63;
        *((_DWORD *)v61 - 1) = m;
        if ( v59 == v57 )
          break;
        while ( 1 )
        {
          v60 = v57->__align;
          if ( v57->__align )
            ++*(_DWORD *)(v60 + 8);
LABEL_65:
          v66 = *((_DWORD *)v61 - 1);
          if ( v66 == *((_DWORD *)v61 - 2) )
            break;
          v57 = (pthread_mutex_t *)((char *)v57 + 8);
          v61[v66] = v60;
          *((_DWORD *)v61 - 1) = v66 + 1;
          if ( v59 == v57 )
            goto LABEL_67;
        }
        v89 = (3 * v66 + 1) >> 1;
        v90 = 8 * v89 + 8;
        if ( 8 * v66 + 8 >= (unsigned int)v90 || v66 >= v89 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v120, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v120);
          sub_233E40((__int64)v120);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        mutexf = v59;
        v110 = v60;
        v106 = (3 * v66 + 1) >> 1;
        v91 = (unsigned int *)sub_186B300(v61 - 1, v90);
        v92 = v91[1];
        v61 = (__int64 *)(v91 + 2);
        v59 = mutexf;
        v63 = v110;
        *(_QWORD *)(a3 + 32) = v91 + 2;
        *v91 = v106;
        LODWORD(v91) = v92;
        v64 = &v61[v92];
      }
    }
  }
LABEL_67:
  if ( v111 )
    sub_2BB620(v41);
  sub_24E910(&v113);
  v121 = &off_1C4C9C8;
  if ( (_BYTE)v126 )
    sub_18296D0(v127);
  if ( HIBYTE(v126) )
    sub_1829760(v127);
  v67 = v116;
  if ( v116 )
  {
    v68 = (pthread_mutex_t *)((char *)v116 + 8 * *((unsigned int *)&v116[-1].__align + 9));
    if ( v116 >= v68 )
      goto LABEL_80;
    do
    {
      while ( 1 )
      {
        v69 = v67->__align;
        if ( v67->__align )
        {
          v37 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v37 )
            break;
        }
        v67 = (pthread_mutex_t *)((char *)v67 + 8);
        if ( v67 >= v68 )
          goto LABEL_79;
      }
      sub_15D7BC0(v115, v69);
      v67 = (pthread_mutex_t *)((char *)v67 + 8);
    }
    while ( v67 < v68 );
LABEL_79:
    v67 = v116;
    if ( v116 )
LABEL_80:
      sub_186B220(&v67[-1].__align + 4);
  }
  if ( v30 )
  {
    v70 = v30;
    v71 = (pthread_mutex_t *)((char *)v30 + 8 * *((unsigned int *)&v30[-1].__align + 9));
    if ( v30 < v71 )
    {
      do
      {
        while ( 1 )
        {
          v72 = v70->__align;
          if ( v70->__align )
          {
            v37 = (*(_DWORD *)(v72 + 8))-- == 1;
            if ( v37 )
              break;
          }
          v70 = (pthread_mutex_t *)((char *)v70 + 8);
          if ( v70 >= v71 )
            goto LABEL_88;
        }
        v70 = (pthread_mutex_t *)((char *)v70 + 8);
        sub_15D7BC0(v112, v72);
      }
      while ( v70 < v71 );
    }
LABEL_88:
    sub_186B220(&v30[-1].__align + 4);
  }
  if ( v111 )
    byte_1C7EBA0 = 1;
  return v41;
}

