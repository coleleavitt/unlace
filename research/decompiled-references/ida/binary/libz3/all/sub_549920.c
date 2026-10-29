__int64 __fastcall sub_549920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r12
  char **v5; // r14
  char **v6; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r12
  unsigned int v14; // ebx
  char *v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rax
  char *v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 *v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 *v28; // rax
  int v30; // edi
  __int64 *v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 *j; // rax
  __int64 v38; // rdx
  void *v39; // r15
  __int64 (__fastcall *v40)(); // rax
  __int64 (__fastcall *v41)(); // rax
  char v42; // al
  __int64 (__fastcall *v43)(); // rax
  __int64 v45; // rax
  void (__fastcall ***v46)(_QWORD); // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rsi
  unsigned int i; // ecx
  __int64 v55; // r12
  __int64 v56; // rax
  unsigned int v57; // edx
  unsigned int v58; // r9d
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rdi
  _QWORD *v62; // rdx
  unsigned int v63; // r8d
  __int64 v64; // rcx
  _QWORD *v65; // rdi
  int v66; // eax
  unsigned int v67; // r8d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rdx
  unsigned int v72; // ecx
  _QWORD *v73; // rdi
  int v74; // eax
  _QWORD *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // r12
  _QWORD *v81; // rax
  unsigned int v82; // edx
  __int64 v83; // rcx
  int v84; // edx
  __int64 *v85; // rcx
  void (__fastcall ***v86)(_QWORD); // r12
  __int64 *v87; // rbx
  unsigned __int64 v88; // r15
  __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned int v92; // r15d
  unsigned int v93; // ecx
  unsigned int *v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // [rsp+8h] [rbp-C8h]
  unsigned int v100; // [rsp+8h] [rbp-C8h]
  __int64 v101; // [rsp+8h] [rbp-C8h]
  unsigned int v102; // [rsp+10h] [rbp-C0h]
  unsigned int v103; // [rsp+14h] [rbp-BCh]
  unsigned int v104; // [rsp+14h] [rbp-BCh]
  unsigned int v105; // [rsp+14h] [rbp-BCh]
  unsigned int v106; // [rsp+14h] [rbp-BCh]
  __int64 v107; // [rsp+18h] [rbp-B8h]
  __int64 *ptr; // [rsp+28h] [rbp-A8h]
  __int64 v111; // [rsp+38h] [rbp-98h]
  _BYTE *v112; // [rsp+40h] [rbp-90h]
  size_t n; // [rsp+48h] [rbp-88h]
  _QWORD *v114; // [rsp+60h] [rbp-70h] BYREF
  char v115[8]; // [rsp+68h] [rbp-68h] BYREF
  __int64 v116; // [rsp+70h] [rbp-60h] BYREF
  _QWORD *v117; // [rsp+78h] [rbp-58h]
  __int64 v118[10]; // [rsp+80h] [rbp-50h] BYREF

  if ( !*(_QWORD *)(a1 + 88) )
  {
    v75 = (_QWORD *)sub_186B270(0x18u);
    v114 = v75 + 1;
    v75[1] = *(_QWORD *)(a1 + 80);
    *v75 = 0x100000002LL;
    v76 = sub_4C6F80(a2, (__int64 *)&v114, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL));
    v77 = *(_QWORD *)(a1 + 24);
    v117 = nullptr;
    v78 = *(_QWORD *)(a1 + 40);
    v116 = v77;
    sub_180C5A0(v115, "fact");
    v79 = sub_1625860(v78, v115, 0, 0);
    v80 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    v81 = v117;
    if ( v117 )
    {
      v82 = *((_DWORD *)v117 - 1);
      if ( v82 == *((_DWORD *)v117 - 2) )
      {
        v92 = (3 * v82 + 1) >> 1;
        v93 = 8 * v92 + 8;
        if ( 8 * v82 + 8 >= v93 || v82 >= v92 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v118, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v118);
          sub_233E40((__int64)v118);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v94 = (unsigned int *)sub_186B300(v117 - 1, v93);
        v81 = v94 + 2;
        v95 = v94[1];
        *v94 = v92;
        v117 = v81;
        LODWORD(v94) = v95;
        v85 = &v81[v95];
        v84 = (_DWORD)v94 + 1;
      }
      else
      {
        v83 = v82;
        v84 = v82 + 1;
        v85 = &v117[v83];
      }
    }
    else
    {
      v98 = (_QWORD *)sub_186B270(0x18u);
      *v98 = 2;
      v81 = v98 + 1;
      v84 = 1;
      v117 = v81;
      v85 = v81;
    }
    *v85 = v80;
    *((_DWORD *)v81 - 1) = v84;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v76 + 40LL))(v76, &v116);
    v86 = *(void (__fastcall ****)(_QWORD))(a1 + 88);
    if ( v86 && (void (__fastcall ***)(_QWORD))v76 != v86 )
    {
      (**v86)(*(_QWORD *)(a1 + 88));
      sub_186B220(v86);
    }
    *(_QWORD *)(a1 + 88) = v76;
    v87 = v117;
    if ( v117 )
    {
      if ( v117 >= &v117[*((unsigned int *)v117 - 1)] )
        goto LABEL_108;
      v88 = (unsigned __int64)&v117[*((unsigned int *)v117 - 1)];
      do
      {
        while ( 1 )
        {
          v89 = *v87;
          if ( *v87 )
          {
            v90 = v116;
            if ( (*(_DWORD *)(v89 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v87 >= v88 )
            goto LABEL_107;
        }
        sub_15D7BC0(v90, v89);
        ++v87;
      }
      while ( (unsigned __int64)v87 < v88 );
LABEL_107:
      v87 = v117;
      if ( v117 )
LABEL_108:
        sub_186B220(v87 - 1);
    }
    if ( v114 )
      sub_186B220(v114 - 1);
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(unsigned int *)(v9 + 2296);
  v11 = (__int64 *)sub_186B270(8 * v10);
  v12 = 8 * v10;
  ptr = v11;
  if ( (_DWORD)v10 )
  {
    memset(v11, 0, 8 * v10);
    v12 = 8 * v10;
  }
  v13 = *(__int64 **)(v9 + 2288);
  v14 = v10 - 1;
  v15 = (char *)&ptr[(unsigned __int64)v12 / 8];
  v16 = &v13[(unsigned __int64)v12 / 8];
  if ( v13 != &v13[(unsigned __int64)v12 / 8] )
  {
    do
    {
      while ( (unsigned __int64)*v13 <= 1 )
      {
        if ( v16 == ++v13 )
          goto LABEL_13;
      }
      v17 = 8LL * (*(_DWORD *)(*v13 + 12) & v14);
      v18 = (char *)&ptr[(unsigned __int64)v17 / 8];
      if ( v12 == v17 )
      {
LABEL_29:
        if ( ptr == (__int64 *)v18 )
        {
LABEL_63:
          sub_1872CE0("");
          sub_1873130(114, 181);
        }
        v19 = ptr;
        while ( *v19 )
        {
          if ( v18 == (char *)++v19 )
            goto LABEL_63;
        }
      }
      else
      {
        v19 = &ptr[(unsigned __int64)v17 / 8];
        while ( *v19 )
        {
          if ( &ptr[(unsigned __int64)v12 / 8] == ++v19 )
            goto LABEL_29;
        }
      }
      v20 = *v13++;
      *v19 = v20;
    }
    while ( v16 != v13 );
LABEL_13:
    v15 = (char *)&ptr[(unsigned __int64)v12 / 8];
  }
  v21 = (__int64 *)v15;
  v22 = ptr;
  if ( ptr != v21 )
  {
    while ( 1 )
    {
      v23 = v22;
      if ( (unsigned __int64)*v22 > 1 )
        break;
      if ( v21 == ++v22 )
        return sub_186B220(ptr);
    }
    n = (size_t)v21;
    if ( v22 != v21 )
    {
      v24 = *v22;
      do
      {
        v25 = sub_5480C0(a1, v24);
        if ( sub_4C3050(a2, v24) )
        {
LABEL_21:
          sub_63F9D0(a4, a3, v24, v25);
          v26 = sub_4C7190(a2, v24);
          v27 = sub_4C7190(a2, v25);
          v111 = v27;
          if ( *(_BYTE *)(a1 + 48) )
          {
            sub_549830(a1, a2, v26, v27);
          }
          else
          {
            v39 = (void *)sub_4C4750(a2, v26, *(_QWORD *)(a1 + 88), 0, 0, 0, 1);
            v107 = *(_QWORD *)(a1 + 88);
            v40 = *(__int64 (__fastcall **)())(*(_QWORD *)v39 + 16LL);
            if ( v40 == sub_54C370 )
            {
              v112 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v26 + 8) + 40LL))(
                                *(_QWORD *)(v26 + 8),
                                (__int64)v39 + 8);
              v41 = *(__int64 (__fastcall **)())(*(_QWORD *)v26 + 24LL);
              if ( v41 == sub_54A3A0 )
                v42 = *(_BYTE *)(v26 + 28);
              else
                v42 = ((__int64 (__fastcall *)(__int64))v41)(v26);
              if ( !v42 )
              {
                v43 = *(__int64 (__fastcall **)())(*(_QWORD *)v107 + 24LL);
                if ( !(v43 == sub_54A3A0 ? *(_BYTE *)(v107 + 28) : ((__int64 (__fastcall *)(__int64))v43)(v107)) )
                {
                  v48 = *(_QWORD *)(v26 + 40);
                  v49 = 0;
                  v112[28] = 0;
                  if ( v48 )
                  {
                    while ( v49 < *(_DWORD *)(v48 - 4) )
                    {
                      while ( 1 )
                      {
                        v50 = *(_QWORD *)(v48 + 8LL * v49);
                        if ( v50 )
                          ++*(_DWORD *)(v50 + 8);
                        v51 = *((_QWORD *)v112 + 5);
                        if ( !v51 )
                        {
                          v101 = v50;
                          v106 = v49;
                          v97 = (_QWORD *)sub_186B270(0x18u);
                          *v97 = 2;
                          v62 = v97 + 1;
                          v63 = v106;
                          v64 = v101;
                          *((_QWORD *)v112 + 5) = v97 + 1;
                          v65 = v97 + 1;
                          v48 = *(_QWORD *)(v26 + 40);
                          v66 = 1;
                          goto LABEL_83;
                        }
                        v52 = *(_DWORD *)(v51 - 4);
                        if ( v52 == *(_DWORD *)(v51 - 8) )
                          break;
                        ++v49;
                        *(_QWORD *)(v51 + 8LL * v52) = v50;
                        *(_DWORD *)(v51 - 4) = v52 + 1;
                        if ( v49 >= *(_DWORD *)(v48 - 4) )
                          goto LABEL_71;
                      }
                      v58 = (3 * v52 + 1) >> 1;
                      v59 = 8 * v58 + 8;
                      if ( 8 * v52 + 8 >= (unsigned int)v59 || v52 >= v58 )
                      {
                        v5 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v118, "Overflow encountered when expanding vector");
                        *v5 = (char *)off_1C63128;
                        sub_2333C0(v5 + 1, v118);
                        sub_233E40((__int64)v118);
                        __cxa_throw(
                          v5,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v102 = (3 * v52 + 1) >> 1;
                      v99 = v50;
                      v103 = v49;
                      v60 = (unsigned int *)sub_186B300((void *)(v51 - 8), v59);
                      v61 = v60[1];
                      v62 = v60 + 2;
                      v63 = v103;
                      *((_QWORD *)v112 + 5) = v60 + 2;
                      v64 = v99;
                      *v60 = v102;
                      v48 = *(_QWORD *)(v26 + 40);
                      LODWORD(v60) = v61;
                      v65 = &v62[v61];
                      v66 = (_DWORD)v60 + 1;
LABEL_83:
                      *v65 = v64;
                      *((_DWORD *)v62 - 1) = v66;
                      if ( !v48 )
                        break;
                      v49 = v63 + 1;
                    }
                  }
LABEL_71:
                  v53 = *(_QWORD *)(v107 + 40);
                  if ( v53 )
                  {
                    for ( i = 0; i < *(_DWORD *)(v53 - 4); i = v72 + 1 )
                    {
                      while ( 1 )
                      {
                        v55 = *(_QWORD *)(v53 + 8LL * i);
                        if ( v55 )
                          ++*(_DWORD *)(v55 + 8);
                        v56 = *((_QWORD *)v112 + 5);
                        if ( !v56 )
                        {
                          v105 = i;
                          v96 = (_QWORD *)sub_186B270(0x18u);
                          *v96 = 2;
                          v72 = v105;
                          v71 = v96 + 1;
                          v73 = v96 + 1;
                          *((_QWORD *)v112 + 5) = v96 + 1;
                          v53 = *(_QWORD *)(v107 + 40);
                          v74 = 1;
                          goto LABEL_88;
                        }
                        v57 = *(_DWORD *)(v56 - 4);
                        if ( v57 == *(_DWORD *)(v56 - 8) )
                          break;
                        ++i;
                        *(_QWORD *)(v56 + 8LL * v57) = v55;
                        *(_DWORD *)(v56 - 4) = v57 + 1;
                        if ( i >= *(_DWORD *)(v53 - 4) )
                          goto LABEL_49;
                      }
                      v67 = (3 * v57 + 1) >> 1;
                      v68 = 8 * v67 + 8;
                      if ( 8 * v57 + 8 >= (unsigned int)v68 || v57 >= v67 )
                      {
                        v6 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v118, "Overflow encountered when expanding vector");
                        *v6 = (char *)off_1C63128;
                        sub_2333C0(v6 + 1, v118);
                        sub_233E40((__int64)v118);
                        __cxa_throw(
                          v6,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v100 = (3 * v57 + 1) >> 1;
                      v104 = i;
                      v69 = (unsigned int *)sub_186B300((void *)(v56 - 8), v68);
                      v70 = v69[1];
                      v71 = v69 + 2;
                      *((_QWORD *)v112 + 5) = v69 + 2;
                      v72 = v104;
                      *v69 = v100;
                      v53 = *(_QWORD *)(v107 + 40);
                      LODWORD(v69) = v70;
                      v73 = &v71[v70];
                      v74 = (_DWORD)v69 + 1;
LABEL_88:
                      *v73 = v55;
                      *((_DWORD *)v71 - 1) = v74;
                      if ( !v53 )
                        break;
                    }
                  }
                }
              }
LABEL_49:
              v45 = sub_4C4940(a2, v111, (__int64)v112, 0);
            }
            else
            {
              v112 = (_BYTE *)((__int64 (__fastcall *)(void *, __int64, _QWORD))v40)(v39, v26, *(_QWORD *)(a1 + 88));
              v45 = sub_4C4940(a2, v111, (__int64)v112, 0);
            }
            v46 = (void (__fastcall ***)(_QWORD))v45;
            (*(void (__fastcall **)(__int64, __int64, _BYTE *, _QWORD))(*(_QWORD *)v45 + 16LL))(v45, v111, v112, 0);
            (**v46)(v46);
            sub_186B220(v46);
            if ( v112 )
              sub_4D63B0(v112);
            (**(void (__fastcall ***)(void *))v39)(v39);
            sub_186B220(v39);
          }
        }
        else
        {
          v30 = *(_DWORD *)(v24 + 12);
          v31 = *(__int64 **)(a3 + 32);
          v32 = *(unsigned int *)(a3 + 40);
          v33 = v32 - 1;
          v32 *= 16;
          v34 = (__int64 *)((char *)v31 + v32);
          v35 = 16LL * (v30 & v33);
          v36 = &v31[(unsigned __int64)v35 / 8];
          if ( v35 != v32 )
          {
            for ( j = &v31[(unsigned __int64)v35 / 8]; v34 != j; j += 2 )
            {
              v38 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *(_DWORD *)(v38 + 12) == v30 && v38 == v24 )
                  goto LABEL_21;
              }
              else if ( !v38 )
              {
                goto LABEL_23;
              }
            }
          }
          for ( ; v36 != v31; v31 += 2 )
          {
            v47 = *v31;
            if ( (unsigned __int64)*v31 > 1 )
            {
              if ( *(_DWORD *)(v47 + 12) == v30 && v47 == v24 )
                goto LABEL_21;
            }
            else if ( !v47 )
            {
              break;
            }
          }
        }
LABEL_23:
        v28 = v23 + 1;
        if ( v23 + 1 == (__int64 *)n )
          break;
        while ( 1 )
        {
          v24 = *v28;
          v23 = v28;
          if ( (unsigned __int64)*v28 > 1 )
            break;
          if ( (__int64 *)n == ++v28 )
            return sub_186B220(ptr);
        }
      }
      while ( v28 != (__int64 *)n );
    }
  }
  return sub_186B220(ptr);
}

