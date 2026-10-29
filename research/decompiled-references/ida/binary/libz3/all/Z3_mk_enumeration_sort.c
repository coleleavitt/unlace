__int64 __fastcall Z3_mk_enumeration_sort(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  char **exception; // r13
  _QWORD *v7; // r12
  char v10; // al
  int v11; // r13d
  __int64 v14; // r13
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // r13
  __int64 *v28; // rbp
  __int64 v29; // rsi
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 *v36; // rdx
  int *v37; // rdi
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  size_t v41; // r8
  char *v42; // r15
  _BYTE *v43; // rdi
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // edx
  size_t v48; // rsi
  __int64 v49; // rax
  char *v50; // r14
  unsigned __int64 v51; // rdi
  _BYTE *v52; // rax
  size_t v53; // rdx
  int *v54; // r11
  size_t v55; // r9
  _BYTE *v56; // r10
  void *v57; // rax
  _BYTE *v58; // rdi
  _QWORD *v59; // r15
  __int64 v60; // r12
  __int64 v61; // r14
  __int64 v62; // r14
  _QWORD *v63; // rax
  __int64 i; // r14
  __int64 j; // r14
  char **v66; // [rsp+0h] [rbp-118h]
  void *v67; // [rsp+8h] [rbp-110h]
  _QWORD *v68; // [rsp+10h] [rbp-108h]
  __int64 v69; // [rsp+18h] [rbp-100h]
  __int64 v70; // [rsp+18h] [rbp-100h]
  int v71; // [rsp+20h] [rbp-F8h]
  char v72; // [rsp+27h] [rbp-F1h]
  int v73; // [rsp+28h] [rbp-F0h]
  __int64 v74; // [rsp+28h] [rbp-F0h]
  __int64 v75; // [rsp+30h] [rbp-E8h]
  __int64 v76; // [rsp+30h] [rbp-E8h]
  int v77; // [rsp+38h] [rbp-E0h]
  size_t v78; // [rsp+38h] [rbp-E0h]
  int v79; // [rsp+40h] [rbp-D8h]
  _BYTE *v80; // [rsp+40h] [rbp-D8h]
  int v81; // [rsp+48h] [rbp-D0h]
  char *v82; // [rsp+48h] [rbp-D0h]
  __int64 v83; // [rsp+50h] [rbp-C8h]
  __int64 v84; // [rsp+58h] [rbp-C0h]
  unsigned int v85; // [rsp+60h] [rbp-B8h]
  int v86; // [rsp+64h] [rbp-B4h]
  int v87; // [rsp+68h] [rbp-B0h]
  _BYTE *v88; // [rsp+68h] [rbp-B0h]
  int v89; // [rsp+70h] [rbp-A8h]
  int v90; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v91; // [rsp+78h] [rbp-A0h] BYREF
  int v92[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v93; // [rsp+88h] [rbp-90h] BYREF
  __int64 v94; // [rsp+90h] [rbp-88h] BYREF
  __int64 *v95; // [rsp+98h] [rbp-80h]
  void *v96; // [rsp+A0h] [rbp-78h]
  void *ptr; // [rsp+A8h] [rbp-70h]
  int v98[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-60h]
  void *src; // [rsp+C0h] [rbp-58h] BYREF
  size_t n; // [rsp+C8h] [rbp-50h]
  __int64 v102; // [rsp+D0h] [rbp-48h] BYREF

  v7 = a4;
  v85 = a3;
  v73 = a5;
  v75 = a6;
  v10 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v72 = v10;
  if ( v10 )
  {
    v11 = a3;
    sub_295440(a1, a2, a3, a4);
    v84 = a6;
    v83 = a5;
    v86 = v11;
  }
  else
  {
    v84 = 0;
    v83 = 0;
    v86 = 0;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  sub_24FC40(a1);
  v14 = *(_QWORD *)(a1 + 232);
  v69 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v16 = *(_QWORD *)(a1 + 1480);
  v94 = v14;
  v17 = *(_QWORD *)(v16 + 32);
  v18 = *(unsigned int *)(v16 + 40);
  v91 = a2;
  v95 = nullptr;
  if ( a2 )
  {
    if ( (a2 & 7) == 1 )
      v19 = a2 >> 3;
    else
      LODWORD(v19) = *(_DWORD *)(a2 - 8);
  }
  else
  {
    LODWORD(v19) = -1640531495;
  }
  v20 = v18 - 1;
  v21 = 24 * v18;
  v22 = v17 + v21;
  v23 = 24LL * ((unsigned int)v19 & v20);
  v24 = v17 + v23;
  if ( v23 == v21 )
  {
LABEL_27:
    if ( v17 == v24 )
    {
LABEL_35:
      v33 = nullptr;
      if ( v85 )
      {
        v33 = nullptr;
        sub_180CE20(
          (int)&src,
          (int)v92,
          v85,
          v23,
          v19,
          v15,
          (int)&src,
          v92,
          (_DWORD)v7 + 8 * v85,
          v69,
          v71,
          v73,
          v75,
          v77,
          v79,
          v81,
          v83,
          v84,
          v85,
          v87,
          v89,
          v91,
          *v7,
          v93,
          v94,
          (int)v95,
          (int)v98,
          (char *)&dword_0 + 3,
          6255465,
          v99);
        while ( 1 )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)ptr < n )
            std::__throw_length_error("basic_string::append");
          v41 = (size_t)v96;
          v42 = (char *)ptr + n;
          if ( v96 != v98 )
            break;
          if ( (unsigned __int64)v42 <= 0xF )
          {
LABEL_45:
            if ( n )
            {
              v43 = (char *)ptr + (_QWORD)v96;
              if ( n == 1 )
                *v43 = *(_BYTE *)src;
              else
                memcpy(v43, src, n);
              v41 = (size_t)v96;
            }
            goto LABEL_49;
          }
          if ( (__int64)v42 < 0 )
LABEL_108:
            std::__throw_length_error("basic_string::_M_create");
          if ( (unsigned __int64)v42 > 0x1D )
            goto LABEL_58;
          v51 = 31;
          v50 = (_BYTE *)(&qword_18 + 6);
LABEL_60:
          v82 = (char *)ptr;
          v80 = src;
          v78 = n;
          v52 = (_BYTE *)operator new(v51);
          v53 = (size_t)v82;
          v54 = (int *)v96;
          v41 = (size_t)v52;
          v55 = v78;
          v56 = v80;
          if ( v82 )
          {
            if ( v82 == (_BYTE *)&dword_0 + 1 )
            {
              *v52 = *(_BYTE *)v96;
            }
            else
            {
              v88 = v80;
              v82 = (char *)v78;
              v80 = (_BYTE *)v53;
              v78 = (size_t)v96;
              v57 = memcpy(v52, v96, v53);
              v56 = v88;
              v55 = (size_t)v82;
              v53 = (size_t)v80;
              v54 = (int *)v78;
              v41 = (size_t)v57;
            }
          }
          if ( v56 && v55 )
          {
            v58 = (_BYTE *)(v41 + v53);
            if ( v55 == 1 )
            {
              *v58 = *v56;
            }
            else
            {
              v80 = v54;
              v78 = v41;
              memcpy(v58, v56, v55);
              v54 = (int *)v80;
              v41 = v78;
            }
          }
          if ( v54 != v98 )
          {
            v78 = v41;
            operator delete(v54, *(_QWORD *)v98 + 1LL);
            v41 = v78;
          }
          v96 = (void *)v41;
          *(_QWORD *)v98 = v50;
LABEL_49:
          ptr = v42;
          v42[v41] = 0;
          if ( src != &v102 )
            operator delete(src, v102 + 1);
          sub_180C5A0(&v93, v96);
          v44 = sub_186B270(0x20u);
          v45 = *(_QWORD *)v92;
          *(_OWORD *)(v44 + 16) = 0;
          *(_QWORD *)v44 = v45;
          *(_QWORD *)(v44 + 8) = v93;
          if ( v33 )
          {
            v46 = *((_DWORD *)v33 - 1);
            if ( v46 == *((_DWORD *)v33 - 2) )
            {
              v47 = (3 * v46 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_A64A2(v66);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v66);
                sub_233E40((__int64)v66);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v78) = (3 * v46 + 1) >> 1;
              v49 = sub_186B300(v33 - 1, v48);
              v33 = (_QWORD *)(v49 + 8);
              *(_DWORD *)v49 = v78;
              LODWORD(v49) = *(_DWORD *)(v49 + 4);
              v36 = &v33[(unsigned int)v49];
              v35 = v49 + 1;
            }
            else
            {
              v34 = v46;
              v35 = v46 + 1;
              v36 = &v33[v34];
            }
          }
          else
          {
            v63 = (_QWORD *)sub_186B270(0x18u);
            v33 = v63 + 1;
            *v63 = 2;
            v35 = 1;
            v36 = v33;
          }
          v37 = (int *)v96;
          *v36 = v44;
          *((_DWORD *)v33 - 1) = v35;
          if ( v37 != v98 )
            operator delete(v37, *(_QWORD *)v98 + 1LL);
          if ( ++v7 == v68 )
            goto LABEL_74;
          sub_180CE20(
            (int)v66,
            (int)v67,
            (int)v36,
            v38,
            v39,
            v40,
            (int)v66,
            v67,
            (int)v68,
            v69,
            v71,
            v73,
            v75,
            v78,
            (int)v80,
            (int)v82,
            v83,
            v84,
            v85,
            (int)v88,
            v90,
            v91,
            *v7,
            v93,
            v94,
            (int)v95,
            (int)v98,
            (char *)&dword_0 + 3,
            6255465,
            v99);
        }
        if ( *(_QWORD *)v98 >= (unsigned __int64)v42 )
          goto LABEL_45;
        if ( (__int64)v42 < 0 )
          goto LABEL_108;
        v50 = (char *)(2LL * *(_QWORD *)v98);
        if ( (unsigned __int64)v42 < 2LL * *(_QWORD *)v98 )
        {
          if ( (*(_QWORD *)v98 & 0x4000000000000000LL) != 0 )
LABEL_88:
            std::__throw_bad_alloc();
          v51 = (unsigned __int64)(v50 + 1);
          goto LABEL_60;
        }
LABEL_58:
        v51 = (unsigned __int64)(v42 + 1);
        if ( (__int64)(v42 + 1) < 0 )
          goto LABEL_88;
        v50 = (char *)ptr + n;
        goto LABEL_60;
      }
LABEL_74:
      src = (void *)sub_15F3050(v69, &v91, 0, 0, v85, v33);
      if ( (unsigned __int8)sub_15FA930(
                              *(_QWORD *)(a1 + 1480),
                              1,
                              (unsigned int)&src,
                              0,
                              0,
                              (unsigned int)&v94,
                              (_DWORD)v66,
                              (unsigned int)&v94,
                              (_DWORD)v68,
                              v69,
                              v71,
                              v73,
                              v75) )
      {
        v27 = *v95;
        sub_251EF0(a1, *v95);
        v59 = (_QWORD *)sub_15F6BE0(v70, v27);
        v60 = 0;
        if ( v85 )
        {
          do
          {
            v61 = *(_QWORD *)(*v59 + v60);
            sub_251EF0(a1, v61);
            *(_QWORD *)(v74 + v60) = v61;
            v62 = sub_15F0A30(v70, v61);
            sub_251EF0(a1, v62);
            *(_QWORD *)(v76 + v60) = v62;
            v60 += 8;
          }
          while ( v60 != 8LL * v85 );
        }
        if ( v72 )
        {
          sub_2BB620(v27);
          if ( v86 )
          {
            for ( i = 0; i != v86; ++i )
              sub_2BB770(*(_QWORD *)(v83 + 8 * i), 4, (unsigned int)i);
            for ( j = 0; j != v86; ++j )
              sub_2BB770(*(_QWORD *)(v84 + 8 * j), 5, (unsigned int)j);
          }
        }
        if ( !v33 )
        {
LABEL_80:
          v26 = v95;
          if ( !v95 )
            goto LABEL_23;
          goto LABEL_15;
        }
      }
      else
      {
        sub_24EA30(a1, 3, 0);
        if ( v72 )
        {
          sub_2BB620(0);
          if ( !v33 )
            goto LABEL_93;
        }
        else if ( !v33 )
        {
LABEL_14:
          v26 = v95;
          v27 = 0;
          if ( !v95 )
            return 0;
          goto LABEL_15;
        }
        v27 = 0;
      }
      sub_186B220(v33 - 1);
      goto LABEL_80;
    }
    while ( 1 )
    {
      v32 = *(_DWORD *)(v17 + 4);
      if ( v32 != 2 )
        break;
      if ( (_DWORD)v19 == *(_DWORD *)v17 )
      {
        if ( a2 == *(_QWORD *)(v17 + 8) )
          goto LABEL_13;
        v17 += 24;
        if ( v24 == v17 )
          goto LABEL_35;
      }
      else
      {
LABEL_30:
        v17 += 24;
        if ( v24 == v17 )
          goto LABEL_35;
      }
    }
    if ( !v32 )
      goto LABEL_35;
    goto LABEL_30;
  }
  v25 = v17 + v23;
  while ( 1 )
  {
    LODWORD(v23) = *(_DWORD *)(v25 + 4);
    if ( (_DWORD)v23 != 2 )
    {
      if ( !(_DWORD)v23 )
        goto LABEL_35;
      goto LABEL_9;
    }
    if ( (_DWORD)v19 == *(_DWORD *)v25 && a2 == *(_QWORD *)(v25 + 8) )
      break;
LABEL_9:
    v25 += 24;
    if ( v22 == v25 )
      goto LABEL_27;
  }
LABEL_13:
  sub_24EA30(a1, 3, "enumeration sort name is already declared");
  if ( !v72 )
    goto LABEL_14;
  sub_2BB620(0);
LABEL_93:
  v26 = v95;
  v27 = 0;
  if ( v95 )
  {
LABEL_15:
    v28 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v28 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v29 = *v26;
        if ( *v26 )
        {
          if ( (*(_DWORD *)(v29 + 8))-- == 1 )
            break;
        }
        if ( ++v26 >= v28 )
          goto LABEL_21;
      }
      sub_15D7BC0(v94, v29);
      ++v26;
    }
    while ( v26 < v28 );
LABEL_21:
    v26 = v95;
    if ( v95 )
LABEL_22:
      sub_186B220(v26 - 1);
LABEL_23:
    if ( v72 )
      goto LABEL_95;
    return v27;
  }
  v27 = 0;
LABEL_95:
  byte_1C7EBA0 = 1;
  return v27;
}

