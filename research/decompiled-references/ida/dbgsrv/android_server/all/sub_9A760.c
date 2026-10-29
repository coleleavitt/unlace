/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A760
// Address: 0x000000000009A760

//----- (000000000009A760) ----------------------------------------------------
__int64 __fastcall sub_9A760(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 *a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10)
{
  __int64 v12; // x24
  pthread_mutex_t **v17; // x23
  pthread_mutex_t *v18; // x22
  int v19; // w8
  pthread_mutex_t *v20; // x0
  __int64 v21; // x8
  __int64 *p_align; // x1
  char *v23; // x0
  int v24; // w22
  __int64 v25; // x8
  char *v26; // x27
  __int64 v27; // x0
  unsigned __int64 v28; // x23
  __int64 v29; // x8
  __int64 v30; // x22
  unsigned __int64 v31; // x1
  __int64 v32; // x8
  unsigned __int64 v33; // x26
  __int64 v34; // x1
  __int64 v35; // x25
  void *align; // x0
  unsigned __int64 v37; // x8
  int v38; // w0
  int v39; // w9
  __int64 v40; // x1
  __int64 *v41; // x10
  __int64 v42; // x22
  __int64 v43; // x28
  signed int v44; // w23
  __int64 v45; // x0
  unsigned int v46; // w8
  __int64 v47; // x24
  unsigned __int64 v48; // x25
  void *v49; // x0
  const void *v50; // x1
  size_t v51; // x2
  struct __pthread_internal_list *next; // x24
  struct __pthread_internal_list **p_next; // x28
  int prev; // w8
  struct __pthread_internal_list *v55; // x25
  __int64 v56; // x24
  unsigned __int64 v57; // x2
  unsigned __int64 *v58; // x24
  unsigned __int64 v59; // t1
  __int64 v60; // x24
  struct __pthread_internal_list *v61; // x0
  __int64 *v62; // x1
  __int64 v63; // x25
  struct __pthread_internal_list *v64; // x22
  int v65; // w8
  struct __pthread_internal_list **p_prev; // x25
  int v67; // w9
  struct __pthread_internal_list *v68; // x23
  struct __pthread_internal_list *v69; // x0
  int v70; // w8
  __int64 *v71; // x1
  struct __pthread_internal_list *v72; // x22
  int v73; // w8
  struct __pthread_internal_list **v74; // x25
  int v75; // w9
  struct __pthread_internal_list *v76; // x23
  struct __pthread_internal_list *v77; // x0
  int v78; // w8
  __int64 *v79; // x1
  struct __pthread_internal_list *v80; // x23
  struct __pthread_internal_list *v81; // x8
  __int64 v82; // x8
  pthread_mutex_t *v83; // x9
  struct __pthread_internal_list *v84; // x9
  struct __pthread_internal_list *v85; // t1
  __int64 v86; // x8
  long double v87; // q0
  _QWORD *v88; // x23
  __syscall_slong_t v89; // x29
  int v90; // w28
  __syscall_slong_t v91; // x27
  int v92; // w0
  int v93; // w8
  __int64 v94; // x8
  __int64 v95; // x22
  unsigned __int64 v96; // x23
  __int64 v97; // x8
  void **v98; // x11
  __int64 v99; // x9
  int v100; // w12
  char *v101; // x9
  const void *v102; // x1
  __int64 v103; // x24
  unsigned __int64 v104; // x24
  const void *v105; // x25
  void *v106; // x0
  const char *v107; // x23
  size_t v108; // x0
  unsigned __int64 v109; // x24
  size_t v110; // x22
  void *v111; // x0
  _QWORD *v113; // [xsp+18h] [xbp-158h]
  __int64 *v114; // [xsp+28h] [xbp-148h]
  _QWORD *v115; // [xsp+30h] [xbp-140h]
  unsigned __int64 v116; // [xsp+38h] [xbp-138h]
  char *v119[3]; // [xsp+58h] [xbp-118h] BYREF
  pthread_mutex_t v120; // [xsp+70h] [xbp-100h] BYREF
  __int64 v121; // [xsp+98h] [xbp-D8h]
  _QWORD v122[2]; // [xsp+A0h] [xbp-D0h] BYREF
  char v123; // [xsp+B0h] [xbp-C0h]
  __int64 v124; // [xsp+B4h] [xbp-BCh]
  __int64 v125; // [xsp+BCh] [xbp-B4h]
  __int64 v126; // [xsp+C4h] [xbp-ACh]
  __int64 v127; // [xsp+CCh] [xbp-A4h]
  __int64 v128; // [xsp+D4h] [xbp-9Ch]
  __int64 v129; // [xsp+DCh] [xbp-94h]
  int v130; // [xsp+E4h] [xbp-8Ch]
  int v131; // [xsp+E8h] [xbp-88h] BYREF
  pthread_mutex_t ptr; // [xsp+F0h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v131 = -2;
  *(&ptr.__align + 2) = 0;
  *(_OWORD *)&ptr.__lock = 0xFFFFFFFFFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 312);
  v17 = (pthread_mutex_t **)(a1 + 312);
  if ( !v12 )
  {
    v12 = a1 + 312;
    v18 = *v17;
    if ( *v17 )
      goto LABEL_16;
    goto LABEL_12;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(v12 + 32);
      if ( v19 > (int)a3 )
        break;
      if ( v19 >= (int)a3 )
        goto LABEL_11;
      v17 = (pthread_mutex_t **)(v12 + 8);
      if ( !*(_QWORD *)(v12 + 8) )
        goto LABEL_11;
      v12 = *(_QWORD *)(v12 + 8);
    }
    if ( !*(_QWORD *)v12 )
      break;
    v17 = (pthread_mutex_t **)v12;
    v12 = *(_QWORD *)v12;
  }
  v17 = (pthread_mutex_t **)v12;
LABEL_11:
  v18 = *v17;
  if ( !*v17 )
  {
LABEL_12:
    v20 = (pthread_mutex_t *)operator new(0x40u);
    *((_DWORD *)&v20->__align + 8) = a3;
    *(&v20[1].__align + 1) = 0;
    *(&v20[1].__align + 2) = 0;
    v20[1].__align = 0;
    v20->__align = 0;
    *(&v20->__align + 1) = 0;
    *(&v20->__align + 2) = v12;
    *v17 = v20;
    v18 = v20;
    v21 = **(_QWORD **)(a1 + 304);
    if ( v21 )
    {
      *(_QWORD *)(a1 + 304) = v21;
      p_align = (__int64 *)*v17;
    }
    else
    {
      p_align = &v20->__align;
    }
    sub_48ED8(*(__int64 **)(a1 + 312), p_align);
    ++*(_QWORD *)(a1 + 320);
  }
LABEL_16:
  v23 = sub_9B6D8(v18 + 1);
  v120.__list.__next = nullptr;
  v121 = 0;
  v120.__list.__prev = (struct __pthread_internal_list *)(&v120.__align + 4);
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 7 )
  {
    v24 = 11;
    goto LABEL_204;
  }
  v25 = *(_QWORD *)(a1 + 552);
  v26 = v23;
  if ( !v25 )
    LODWORD(v25) = *(_DWORD *)(a1 + 648);
  sub_93104((__int64)v23, (int)v25);
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *(_QWORD *)v26,
         0) != 1 )
  {
    v24 = 1;
    goto LABEL_204;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 456LL))(a1, v26);
  v28 = v27;
  if ( v27 == -1 )
  {
    v24 = 2;
    goto LABEL_204;
  }
  memset(&v120, 0, 24);
  v29 = *(int *)(a1 + 244);
  v30 = (a6[1] + (int)v29 - 1) & -(int)v29;
  v31 = (v27 - v29 - v30) & 0xFFFFFFFFFFFFFFF0LL;
  *((_QWORD *)v26 + 4) = v31 + v30;
  v115 = a6;
  v116 = v31;
  if ( ((unsigned __int8)relocate_relobj(a6, v31, 0) & 1) == 0 )
  {
    v35 = v116;
    v24 = 4;
    align = (void *)v120.__align;
    if ( !v120.__align )
      goto LABEL_202;
    goto LABEL_201;
  }
  sub_545E8(&v120, v26 + 32, *(int *)(a1 + 244));
  sub_545E8(&v120, (void *)*a6, a6[1]);
  v32 = *(&v120.__align + 1);
  v33 = v30 + *(int *)(a1 + 244);
  if ( *(&v120.__align + 1) >= v33 )
  {
    if ( *(&v120.__align + 1) != v33 )
    {
      LOBYTE(v122[0]) = 0;
      sub_5BBF4(&v120, v33, (char *)v122);
    }
  }
  else
  {
    v34 = v120.__align;
    if ( *(&v120.__align + 2) < v33 )
    {
      v34 = (__int64)qvector_reserve(&v120, (void *)v120.__align, v30 + *(int *)(a1 + 244), 1u);
      v32 = *(&v120.__align + 1);
      v120.__align = v34;
    }
    memset((void *)(v34 + v32), 0, v33 - v32);
    *(&v120.__align + 1) = v33;
  }
  v114 = a7;
  v35 = v116;
  v37 = v116 - *(int *)(a1 + 244);
  *((_QWORD *)v26 + 3) = v37;
  if ( v37 >= v28 )
  {
    v24 = 2;
    align = (void *)v120.__align;
    if ( !v120.__align )
      goto LABEL_202;
    goto LABEL_201;
  }
  v38 = (*(__int64 (__fastcall **)(__int64, char *, __pthread_list_t *, pthread_mutex_t *))(*(_QWORD *)a1 + 448LL))(
          a1,
          v26,
          &v120.__list,
          &v120);
  v40 = *((_QWORD *)v26 + 3) + v38;
  *((_QWORD *)v26 + 3) = v40;
  if ( v120.__owner - v38 >= 1
    && (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         v40,
         v120.__align + v38,
         v120.__owner - v38,
         0) != v39 )
  {
    v35 = v116;
    v24 = 5;
    align = (void *)v120.__align;
    if ( !v120.__align )
      goto LABEL_202;
    goto LABEL_201;
  }
  v113 = v26 + 32;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 312LL))(
    a1,
    0,
    4,
    *((_QWORD *)v26 + 4),
    0xFFFFFFFFLL);
  v41 = a5;
  if ( a5[1] )
  {
    v42 = 0;
    while ( 1 )
    {
      v43 = *v41;
      v44 = *(_DWORD *)(*v41 + 32 * v42);
      if ( v44 == *(_DWORD *)(a1 + 652) || v44 == *(_DWORD *)(a1 + 656) )
      {
        v35 = v116;
        v24 = 3;
        align = (void *)v120.__align;
        if ( !v120.__align )
          goto LABEL_202;
        goto LABEL_201;
      }
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, (unsigned int)v44);
      v46 = *(unsigned __int8 *)(v45 + 13);
      if ( v46 <= 0x12 && ((1 << v46) & 0x48038) != 0 )
        break;
      v56 = v43 + 32 * v42;
      v59 = *(_QWORD *)(v56 + 16);
      v58 = (unsigned __int64 *)(v56 + 16);
      v57 = v59;
      if ( v59 > 8 || (*(_BYTE *)(v45 + 9) & 1) != 0 )
      {
        if ( v131 >= -1 )
        {
          if ( ptr.__align )
          {
            *(&ptr.__align + 1) = 0;
            qfree((void *)ptr.__align);
            ptr.__align = 0;
            *(&ptr.__align + 2) = 0;
          }
          v131 = -2;
        }
        memset(&ptr, 0, 24);
        v131 = 0;
        v63 = *v58;
        if ( *v58 )
        {
          ptr.__align = (__int64)qvector_reserve(&ptr, nullptr, *v58, 1u);
          memset((void *)(ptr.__align + *(&ptr.__align + 1)), 0, v63 - *(&ptr.__align + 1));
          *(&ptr.__align + 1) = v63;
        }
        v49 = (void *)ptr.__align;
        v50 = *(const void **)(v43 + 32 * v42 + 8);
        v51 = *v58;
        goto LABEL_49;
      }
      if ( v131 >= -1 )
      {
        if ( ptr.__align )
        {
          *(&ptr.__align + 1) = 0;
          qfree((void *)ptr.__align);
          ptr.__align = 0;
          *(&ptr.__align + 2) = 0;
        }
        v131 = -2;
        v57 = *v58;
      }
      v60 = v43 + 32 * v42;
      __memcpy_chk(&ptr, *(_QWORD *)(v60 + 8), v57, 24);
      if ( !*(_DWORD *)(v60 + 4) )
        goto LABEL_50;
      ptr.__align += v116;
      next = v120.__list.__next;
      if ( v120.__list.__next )
      {
LABEL_51:
        p_next = &v120.__list.__next;
        while ( 1 )
        {
          while ( 1 )
          {
            prev = (int)next[2].__prev;
            if ( v44 < prev )
              break;
            if ( prev >= v44 )
              goto LABEL_59;
            p_next = &next->__next;
            if ( !next->__next )
              goto LABEL_59;
            next = next->__next;
          }
          if ( !next->__prev )
            break;
          p_next = &next->__prev;
          next = next->__prev;
        }
        p_next = &next->__prev;
LABEL_59:
        v55 = *p_next;
        if ( *p_next )
          goto LABEL_74;
        goto LABEL_70;
      }
LABEL_69:
      next = (struct __pthread_internal_list *)(&v120.__align + 4);
      p_next = &v120.__list.__next;
LABEL_70:
      v61 = (struct __pthread_internal_list *)operator new(0x48u);
      LODWORD(v61[2].__next) = -2;
      LODWORD(v61[2].__prev) = v44;
      v61[3].__next = nullptr;
      v61[4].__prev = nullptr;
      v61[3].__prev = (struct __pthread_internal_list *)-1LL;
      v61->__prev = nullptr;
      v61->__next = nullptr;
      v61[1].__prev = next;
      *p_next = v61;
      v55 = v61;
      if ( v120.__list.__prev->__prev )
      {
        v120.__list.__prev = v120.__list.__prev->__prev;
        v62 = (__int64 *)*p_next;
      }
      else
      {
        v62 = (__int64 *)v61;
      }
      sub_48ED8((__int64 *)v120.__list.__next, v62);
      ++v121;
LABEL_74:
      sub_98928((__int64)&v55[2].__next, (__int64)&v131);
      v41 = a5;
      if ( ++v42 >= (unsigned __int64)a5[1] )
        goto LABEL_85;
    }
    if ( v131 >= -1 )
    {
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
      v131 = -2;
    }
    v47 = v43 + 32 * v42;
    memset(&ptr, 0, 24);
    v131 = -1;
    v48 = *(_QWORD *)(v47 + 16);
    if ( v48 )
    {
      ptr.__align = (__int64)qvector_reserve(&ptr, nullptr, v48, 1u);
      memset((void *)(ptr.__align + *(&ptr.__align + 1)), 0, v48 - *(&ptr.__align + 1));
      *(&ptr.__align + 1) = v48;
    }
    v49 = (void *)ptr.__align;
    v50 = *(const void **)(v47 + 8);
    v51 = *(_QWORD *)(v47 + 16);
LABEL_49:
    memcpy(v49, v50, v51);
LABEL_50:
    next = v120.__list.__next;
    if ( v120.__list.__next )
      goto LABEL_51;
    goto LABEL_69;
  }
LABEL_85:
  if ( v131 >= -1 )
  {
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
    v131 = -2;
  }
  v64 = v120.__list.__next;
  ptr.__align = *((_QWORD *)v26 + 3);
  if ( !v120.__list.__next )
  {
    v64 = (struct __pthread_internal_list *)(&v120.__align + 4);
    p_prev = &v120.__list.__next;
LABEL_104:
    v69 = (struct __pthread_internal_list *)operator new(0x48u);
    v70 = *(_DWORD *)(a1 + 652);
    v69[3].__next = nullptr;
    v69[4].__prev = nullptr;
    v69->__prev = nullptr;
    v69->__next = nullptr;
    v69[1].__prev = v64;
    LODWORD(v69[2].__next) = -2;
    v69[3].__prev = (struct __pthread_internal_list *)-1LL;
    LODWORD(v69[2].__prev) = v70;
    *p_prev = v69;
    v68 = v69;
    if ( v120.__list.__prev->__prev )
    {
      v120.__list.__prev = v120.__list.__prev->__prev;
      v71 = (__int64 *)*p_prev;
    }
    else
    {
      v71 = (__int64 *)v69;
    }
    sub_48ED8((__int64 *)v120.__list.__next, v71);
    ++v121;
    goto LABEL_108;
  }
  v65 = *(_DWORD *)(a1 + 652);
  p_prev = &v120.__list.__next;
  while ( 1 )
  {
    while ( 1 )
    {
      v67 = (int)v64[2].__prev;
      if ( v65 < v67 )
        break;
      if ( v67 >= v65 )
        goto LABEL_103;
      p_prev = &v64->__next;
      if ( !v64->__next )
        goto LABEL_103;
      v64 = v64->__next;
    }
    if ( !v64->__prev )
      break;
    p_prev = &v64->__prev;
    v64 = v64->__prev;
  }
  p_prev = &v64->__prev;
LABEL_103:
  v68 = *p_prev;
  if ( !*p_prev )
    goto LABEL_104;
LABEL_108:
  sub_98928((__int64)&v68[2].__next, (__int64)&v131);
  v72 = v120.__list.__next;
  ptr.__align = a2;
  if ( !v120.__list.__next )
  {
    v72 = (struct __pthread_internal_list *)(&v120.__align + 4);
    v74 = &v120.__list.__next;
LABEL_119:
    v77 = (struct __pthread_internal_list *)operator new(0x48u);
    v78 = *(_DWORD *)(a1 + 656);
    v77[3].__next = nullptr;
    v77[4].__prev = nullptr;
    v77->__prev = nullptr;
    v77->__next = nullptr;
    v77[1].__prev = v72;
    LODWORD(v77[2].__next) = -2;
    v77[3].__prev = (struct __pthread_internal_list *)-1LL;
    LODWORD(v77[2].__prev) = v78;
    *v74 = v77;
    v76 = v77;
    if ( v120.__list.__prev->__prev )
    {
      v120.__list.__prev = v120.__list.__prev->__prev;
      v79 = (__int64 *)*v74;
    }
    else
    {
      v79 = (__int64 *)v77;
    }
    sub_48ED8((__int64 *)v120.__list.__next, v79);
    ++v121;
    goto LABEL_123;
  }
  v73 = *(_DWORD *)(a1 + 656);
  v74 = &v120.__list.__next;
  while ( 1 )
  {
    while ( 1 )
    {
      v75 = (int)v72[2].__prev;
      if ( v73 < v75 )
        break;
      if ( v75 >= v73 )
        goto LABEL_118;
      v74 = &v72->__next;
      if ( !v72->__next )
        goto LABEL_118;
      v72 = v72->__next;
    }
    if ( !v72->__prev )
      break;
    v74 = &v72->__prev;
    v72 = v72->__prev;
  }
  v74 = &v72->__prev;
LABEL_118:
  v76 = *v74;
  if ( !*v74 )
    goto LABEL_119;
LABEL_123:
  sub_98928((__int64)&v76[2].__next, (__int64)&v131);
  v80 = v120.__list.__prev;
  v35 = v116;
  if ( (__int64 *)v120.__list.__prev != &v120.__align + 4 )
  {
    do
    {
      while ( 1 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, struct __pthread_internal_list **, _QWORD))(*(_QWORD *)a1 + 232LL))(
               a1,
               a3,
               LODWORD(v80[2].__prev),
               &v80[2].__next,
               0) != 1 )
        {
          v24 = 6;
          align = (void *)v120.__align;
          if ( !v120.__align )
            goto LABEL_202;
LABEL_201:
          *(&v120.__align + 1) = 0;
          qfree(align);
          v120.__align = 0;
          *(&v120.__align + 2) = 0;
          goto LABEL_202;
        }
        v26[40] = 1;
        v81 = v80->__next;
        if ( !v81 )
          break;
        do
        {
          v80 = v81;
          v81 = v81->__prev;
        }
        while ( v81 );
LABEL_130:
        if ( v80 == (struct __pthread_internal_list *)(&v120.__align + 4) )
          goto LABEL_133;
      }
      v82 = (__int64)&v80[1];
      v83 = (pthread_mutex_t *)v80[1].__prev;
      if ( (struct __pthread_internal_list *)v83->__align != v80 )
      {
        do
        {
          v84 = *(struct __pthread_internal_list **)v82;
          v85 = *(struct __pthread_internal_list **)(*(_QWORD *)v82 + 16LL);
          v82 = *(_QWORD *)v82 + 16LL;
          v80 = v85;
        }
        while ( v85->__prev != v84 );
        goto LABEL_130;
      }
      v80 = v80[1].__prev;
    }
    while ( v83 != (pthread_mutex_t *)(&v120.__align + 4) );
  }
LABEL_133:
  if ( (a10 & 1) != 0 )
  {
    v24 = 0;
    align = (void *)v120.__align;
    if ( !v120.__align )
      goto LABEL_202;
    goto LABEL_201;
  }
  v86 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 184) = 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(v86 + 168))(a1, a1 + 168) == 1 )
  {
    v122[1] = -1;
    *(_QWORD *)&v87 = 0xFFFFFFFFLL;
    if ( a9 )
      v88 = a9;
    else
      v88 = v122;
    v122[0] = 0xFFFFFFFFLL;
    v123 = 0;
    v129 = 0;
    v128 = 0;
    v127 = 0;
    v126 = 0;
    v125 = 0;
    v124 = 0;
    v130 = 0;
    if ( (a10 & 4) != 0 )
    {
      v91 = HIWORD(a10);
      if ( (_DWORD)v91 )
        v89 = get_nsec_stamp() + 1000000 * v91;
      else
        v89 = 0;
      v90 = 1;
    }
    else
    {
      v89 = 0;
      v90 = 0;
      LODWORD(v91) = 40;
    }
    v24 = 0;
    while ( 1 )
    {
      do
      {
        if ( v90 )
        {
          if ( v90 == 2 )
          {
            if ( (int)v91 < 1 || (v91 = (v89 - get_nsec_stamp()) / 1000000, (int)v91 <= 0) )
            {
              v24 = 12;
              if ( (*(int (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)a1 + 152LL))(a1, 0, v87) < 1 )
                goto LABEL_199;
            }
          }
          v90 = 2;
        }
        v92 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, long double))(*(_QWORD *)a1 + 136LL))(
                a1,
                v88,
                (unsigned int)v91,
                v87);
      }
      while ( !v92 );
      if ( v92 == -1 )
      {
        v24 = 8;
        goto LABEL_199;
      }
      v93 = *((_DWORD *)v88 + 5) & 0xFFFFFFF;
      if ( v93 == 4 )
      {
        if ( *((_DWORD *)v88 + 1) == a3 )
        {
LABEL_168:
          sub_93734(a1, (unsigned int *)v88, 8u);
          v35 = -1;
          goto LABEL_200;
        }
      }
      else if ( v93 == 2 )
      {
        goto LABEL_168;
      }
      if ( v24 == 12 )
      {
        sub_93734(a1, (unsigned int *)v88, 0xAu);
        set_debug_event_code((__int64)v88, 0);
        set_debug_event_code(a1 + 168, 0);
        v24 = 12;
        goto LABEL_199;
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, a3, v88, *v113)
          & 1) != 0 )
        break;
      if ( (*((_DWORD *)v88 + 5) & 0xFFFFFFF) == 7 )
      {
        if ( (a10 & 2) == 0 && v88 + 5 != (_QWORD *)a8 )
        {
          v104 = v88[6];
          if ( v104 < 2 )
          {
            *(_QWORD *)(a8 + 8) = 0;
          }
          else
          {
            v105 = (const void *)v88[5];
            if ( *(_QWORD *)(a8 + 16) >= v104 )
            {
              v106 = *(void **)a8;
            }
            else
            {
              v106 = qvector_reserve((pthread_mutex_t *)a8, *(void **)a8, v88[6], 1u);
              *(_QWORD *)a8 = v106;
            }
            *(_QWORD *)(a8 + 8) = v104;
            memmove(v106, v105, v104 - 1);
            *(_BYTE *)(*(_QWORD *)a8 + v104 - 1) = 0;
          }
        }
        set_debug_event_code(a1 + 168, 0);
        *(_BYTE *)(a1 + 184) = 1;
        v24 = 10;
        goto LABEL_199;
      }
      if ( (unsigned int)sub_93734(a1, (unsigned int *)v88, 0xAu) )
      {
        v24 = 7;
        goto LABEL_199;
      }
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 168LL))(a1, v88);
      set_debug_event_code((__int64)v88, 0);
    }
    set_debug_event_code(a1 + 168, 0);
    if ( a4 < 1
      || v115[1] >= (unsigned __int64)a4
      && (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
           a1,
           v116,
           *v115,
           a4,
           0) == a4 )
    {
      if ( v114 && v114[1] )
      {
        memset(v119, 0, sizeof(v119));
        v94 = *(_QWORD *)(a1 + 552);
        if ( !v94 )
          LODWORD(v94) = *(_DWORD *)(a1 + 648);
        sub_93104((__int64)v119, (int)v94);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
               a1,
               a3,
               0xFFFFFFFFLL,
               v119[0],
               0) < 1 )
        {
          v24 = 1;
        }
        else
        {
          if ( v114[1] )
          {
            v95 = 0;
            v96 = 0;
            do
            {
              v97 = *v114;
              v98 = (void **)(*v114 + v95);
              v99 = *(int *)v98;
              v100 = *(_DWORD *)&v119[0][32 * v99];
              v101 = &v119[0][32 * v99];
              if ( v100 < -1 )
                v102 = v101 + 8;
              else
                v102 = *((const void **)v101 + 1);
              v103 = v97 + v95;
              memcpy(v98[1], v102, *(_QWORD *)(v97 + v95 + 16));
              *(_DWORD *)(v103 + 4) = 0;
              ++v96;
              v95 += 32;
            }
            while ( v96 < v114[1] );
          }
          v24 = 0;
        }
        sub_931CC(v119);
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 5;
    }
LABEL_199:
    v35 = v116;
LABEL_200:
    free_debug_event((__int64)v122);
    align = (void *)v120.__align;
    if ( v120.__align )
      goto LABEL_201;
  }
  else
  {
    v35 = v116;
    v24 = 9;
    align = (void *)v120.__align;
    if ( v120.__align )
      goto LABEL_201;
  }
LABEL_202:
  if ( v24 )
  {
    if ( v24 == 10 )
    {
LABEL_210:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a3);
      v35 = -1;
      goto LABEL_211;
    }
LABEL_204:
    v107 = off_15E4B0[v24];
    v108 = strlen(v107);
    if ( v108 )
    {
      v109 = v108 + 1;
      v110 = v108;
      if ( *(_QWORD *)(a8 + 16) >= v108 + 1 )
      {
        v111 = *(void **)a8;
      }
      else
      {
        v111 = qvector_reserve((pthread_mutex_t *)a8, *(void **)a8, v109, 1u);
        *(_QWORD *)a8 = v111;
      }
      *(_QWORD *)(a8 + 8) = v109;
      memmove(v111, v107, v110);
      *(_BYTE *)(*(_QWORD *)a8 + v110) = 0;
    }
    else
    {
      *(_QWORD *)(a8 + 8) = 0;
    }
    goto LABEL_210;
  }
LABEL_211:
  sub_9D55C((__int64)&v120.__list, (int *)v120.__list.__next);
  if ( v131 >= -1 )
  {
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
    v131 = -2;
  }
  return v35;
}
// 9ACA8: conditional instruction was optimized away because %var_E0.8==0
// 9B2E0: conditional instruction was optimized away because w22.4==0
// 9AA6C: variable 'v39' is possibly undefined
// 9B1A4: variable 'v87' is possibly undefined
// 37290: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// 15E4B0: using guessed type char *off_15E4B0[13];
