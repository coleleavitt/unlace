__int64 __fastcall sub_872240(unsigned __int64 a1, int a2, __int64 a3, char **a4)
{
  __int64 v5; // rbx
  int v6; // ecx
  __int16 *v7; // rax
  __int64 v8; // r13
  __int16 v9; // r14
  int v10; // r15d
  __int64 v11; // rax
  _BYTE *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  bool v21; // sf
  unsigned int v22; // r15d
  __int64 v23; // rdi
  char *v24; // rax
  __int64 v26; // rbx
  unsigned __int64 v27; // r13
  __int64 v28; // rdi
  int v29; // eax
  unsigned int v30; // r13d
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  _QWORD *v36; // r14
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rdi
  int v40; // eax
  char *v41; // rbx
  char v42; // r15
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  int v45; // eax
  void *v46; // r14
  int v47; // r14d
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  int i; // r14d
  _QWORD *v52; // rcx
  _QWORD *v53; // r13
  __int64 v54; // rdi
  char v55; // al
  __int64 v56; // rax
  unsigned __int64 v57; // rdi
  char v58; // al
  void *v59; // rdi
  unsigned __int64 v60; // rax
  char v61; // al
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // edx
  unsigned __int64 v65; // r14
  char v66; // al
  unsigned __int64 v67; // rbx
  bool v68; // al
  __int64 v69; // rax
  unsigned __int64 v70; // rdi
  _QWORD *v71; // rdi
  char v72; // al
  void **v73; // r13
  unsigned int v74; // ebx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // r13
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 *v88; // r13
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdi
  __int64 v94; // rax
  int v95; // [rsp+8h] [rbp-160h]
  int v96; // [rsp+8h] [rbp-160h]
  __int64 v97; // [rsp+8h] [rbp-160h]
  __int64 v98; // [rsp+8h] [rbp-160h]
  __int64 v99; // [rsp+8h] [rbp-160h]
  __int64 v100; // [rsp+18h] [rbp-150h]
  unsigned __int64 v101; // [rsp+18h] [rbp-150h]
  __int64 v102; // [rsp+18h] [rbp-150h]
  unsigned __int64 v105; // [rsp+30h] [rbp-138h]
  __int64 v106; // [rsp+30h] [rbp-138h]
  __int64 v107; // [rsp+30h] [rbp-138h]
  __int64 v108; // [rsp+30h] [rbp-138h]
  __int64 v109; // [rsp+38h] [rbp-130h]
  char *v110; // [rsp+48h] [rbp-120h] BYREF
  void *v111; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v112; // [rsp+58h] [rbp-110h]
  void *v113; // [rsp+60h] [rbp-108h] BYREF
  __int64 *v114; // [rsp+68h] [rbp-100h]
  char v115; // [rsp+70h] [rbp-F8h]
  __int64 v116; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 *v117; // [rsp+A8h] [rbp-C0h]
  __int64 v118; // [rsp+B0h] [rbp-B8h]
  unsigned int v119; // [rsp+B8h] [rbp-B0h] BYREF
  unsigned __int64 v120; // [rsp+C0h] [rbp-A8h]
  __int64 v121; // [rsp+C8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-98h]
  __int64 v123; // [rsp+D8h] [rbp-90h]
  _BYTE v124[64]; // [rsp+E0h] [rbp-88h] BYREF
  char v125; // [rsp+120h] [rbp-48h]
  char v126; // [rsp+121h] [rbp-47h]

  v5 = a1;
  v6 = *(_DWORD *)(a3 + 948);
  LOBYTE(v119) = v119 | 1;
  v123 = 0x800000000LL;
  v7 = *(__int16 **)(a3 + 24);
  v117 = nullptr;
  v118 = 0;
  v121 = 0;
  ptr = v124;
  v126 = 0;
  v8 = *((_QWORD *)v7 + 1);
  v116 = 0;
  v9 = *v7;
  v95 = v6;
  *((_QWORD *)v7 + 1) = 0;
  LODWORD(v7) = *(_DWORD *)(a3 + 40);
  v10 = *(_DWORD *)(a3 + 964);
  *(_DWORD *)(a3 + 964) = 3;
  *(_DWORD *)(a3 + 948) = (_DWORD)v7 + 1;
  if ( (*(_BYTE *)(a1 + 1) & 6) != 0 )
  {
    BYTE4(v113) &= ~1u;
    LODWORD(v113) = 0;
    if ( !(unsigned __int8)sub_85F8D0(a3, a1, (unsigned int *)&v113) )
    {
      if ( (unsigned int)v113 > 1 )
        sub_69F740((__int64)&v113);
LABEL_5:
      v11 = *(_QWORD *)(a3 + 24);
      *(_DWORD *)(a3 + 964) = v10;
      *(_WORD *)v11 = v9;
      *(_QWORD *)(v11 + 8) = v8;
      *(_DWORD *)(a3 + 948) = v95;
LABEL_6:
      v12 = ptr;
      v13 = 0;
      goto LABEL_27;
    }
    sub_824D00((__int64)&v116, *(_QWORD **)(a3 + 16), (__int64)&v113);
    if ( (unsigned int)v113 > 1 )
      sub_69F740((__int64)&v113);
  }
  else
  {
    do
    {
      v17 = sub_80F230(a1);
      if ( ((*(_WORD *)v17 + 432) & 0x1FFu) > 9 )
        break;
      v14 = (*(_WORD *)(v17 + 2) >> 3) & 0x7F;
      if ( ((*(_WORD *)(v17 + 2) >> 3) & 0x7B) != 1 && (_BYTE)v14 != 63 )
        break;
      a1 = *(_QWORD *)(v17 + 16);
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v15 = *(unsigned __int8 *)(v14 + 16);
      if ( (unsigned __int8)v15 > 0x2Bu )
        break;
      v16 = 0xFFFFF1FDFFFFF7FFLL;
      if ( _bittest64(&v16, v15) )
      {
        if ( (_BYTE)v15 != 13 || ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) != 0x1E7 )
          break;
      }
    }
    while ( (*(_BYTE *)(a1 + 1) & 6) == 0 );
    v113 = (void *)a3;
    v115 = 1;
    v114 = &v116;
    if ( !(unsigned __int8)sub_871080((__int64)&v113, v17, (__int64 *)v14, v16, v18, v19) )
      goto LABEL_5;
  }
  v20 = *(_QWORD *)(a3 + 24);
  *(_DWORD *)(a3 + 964) = v10;
  *(_WORD *)v20 = v9;
  *(_QWORD *)(v20 + 8) = v8;
  v21 = v118 < 0;
  *(_DWORD *)(a3 + 948) = v95;
  if ( v21 )
  {
    v12 = ptr;
    goto LABEL_25;
  }
  v22 = sub_8124E0(v5);
  if ( (v119 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 && a2 == 3 )
      goto LABEL_6;
    goto LABEL_42;
  }
  if ( !(_DWORD)v123 )
  {
    if ( (v125 & 2) != 0 )
    {
      if ( v116
        && (v116 & 3) == 1
        && (v116 & 0xFFFFFFFFFFFFFFFCLL) != 0
        && (*(_WORD *)(v116 & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == 0x2F
        && (a2 & 1) != 0 )
      {
        goto LABEL_67;
      }
      v23 = v116;
      v112 = 1;
      v111 = nullptr;
      if ( !v116 )
        goto LABEL_6;
LABEL_43:
      if ( (v23 & 3) == 1 )
      {
        v57 = v23 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v57 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 41
            && sub_8216C0(v57) )
          {
            v58 = sub_866550(*(_QWORD **)(a3 + 16), v116, (__int64)v117, (__int64)&v111);
            v30 = v112;
            if ( v58 )
            {
              if ( v112 <= 0x40 )
              {
                v41 = (char *)v111;
                if ( (__int64)v111 < 0 )
                  goto LABEL_6;
                goto LABEL_58;
              }
              if ( v30 - (unsigned int)sub_2587400(&v111) <= 0x40 )
              {
                v59 = v111;
                v41 = *(char **)v111;
                if ( *(__int64 *)v111 >= 0 )
                {
                  operator delete[](v111);
                  goto LABEL_58;
                }
LABEL_97:
                operator delete[](v59);
                goto LABEL_6;
              }
LABEL_96:
              v59 = v111;
              if ( !v111 )
                goto LABEL_6;
              goto LABEL_97;
            }
            if ( (v125 & 2) != 0 )
            {
LABEL_95:
              if ( v30 <= 0x40 )
                goto LABEL_6;
              goto LABEL_96;
            }
            v113 = (void *)v116;
            v31 = v116;
            v114 = v117;
            if ( !v116 )
            {
LABEL_112:
              if ( v30 <= 0x40 )
                goto LABEL_6;
              goto LABEL_96;
            }
LABEL_46:
            v32 = v31 & 3;
            if ( (v31 & 3) != 0 )
            {
              if ( v32 == 1 )
              {
                v60 = v31 & 0xFFFFFFFFFFFFFFFCLL;
                if ( !v60 || (*(_WORD *)v60 & 0x1FF) != 0x4D )
                  goto LABEL_112;
                v34 = *(_QWORD *)(v60 + 8);
              }
              else if ( v32 == 2 )
              {
                v34 = sub_69F410((__int64)&v113);
              }
              else
              {
                v34 = sub_69F420((__int64)&v113);
              }
            }
            else
            {
              v33 = v31 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 38 > 6 )
                goto LABEL_112;
              v34 = *(_QWORD *)(v33 + 48);
            }
            if ( (v34 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
              goto LABEL_95;
            v35 = 0;
            v36 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
            v37 = sub_B19120(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL), 0);
            v39 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
            if ( v37
              || (v40 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL),
                  v38 = (unsigned int)(v40 - 25),
                  (unsigned int)v38 <= 1) )
            {
              v41 = nullptr;
              v42 = 0;
              if ( !(unsigned __int8)sub_B075A0(v39, 0, v38) )
              {
                if ( v30 <= 0x40 )
                  goto LABEL_6;
                v41 = nullptr;
                v42 = 0;
LABEL_55:
                if ( v111 )
                  operator delete[](v111);
LABEL_57:
                if ( !v42 )
                  goto LABEL_6;
                goto LABEL_58;
              }
            }
            else
            {
              if ( (unsigned int)(v40 - 42) <= 1
                && ((unsigned int)*(unsigned __int8 *)(v39 + 16) - 42 <= 1 || (v39 = sub_B0D320(v39)) != 0) )
              {
                while ( (*(_BYTE *)(v39 + 18) & 0x10) != 0 )
                {
                  v39 = *(_QWORD *)(*(_QWORD *)(v39 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (unsigned int)*(unsigned __int8 *)(v39 + 16) - 42 > 1 )
                    v39 = sub_B0D320(v39);
                }
                v34 = *(_QWORD *)(v39 + 32);
              }
              v35 = v22;
              v110 = nullptr;
              v61 = sub_81FCD0(a3, v22, v34, (__int64 *)&v110, 0);
              v41 = v110;
              v42 = v61;
              if ( !(unsigned __int8)sub_B075A0(*v36, v35, v62) )
              {
LABEL_127:
                if ( v30 <= 0x40 )
                  goto LABEL_57;
                goto LABEL_55;
              }
            }
            v63 = sub_B0D910(*v36);
            if ( *(char *)(sub_B14A40(v63) + 74) < 0 )
            {
              if ( v116 )
              {
                if ( (v116 & 3) == 0 )
                {
                  v65 = v116 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_BYTE *)((v116 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 38 <= 6 )
                  {
                    if ( (unsigned __int8)sub_77B630(v65, v35, v64) )
                      v41 += sub_77CF20(v65, *(_QWORD **)(a3 + 16));
                  }
                }
              }
            }
            goto LABEL_127;
          }
        }
      }
LABEL_44:
      if ( (v125 & 2) != 0 )
        goto LABEL_6;
      v30 = 1;
      v113 = (void *)v116;
      v31 = v116;
      v114 = v117;
      if ( !v116 )
        goto LABEL_6;
      goto LABEL_46;
    }
LABEL_42:
    v23 = v116;
    v112 = 1;
    v111 = nullptr;
    if ( !v116 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( (_DWORD)v123 == 1 && (v119 & 4) != 0 || (a2 & 1) == 0 )
    goto LABEL_42;
  if ( (v125 & 2) == 0 )
    goto LABEL_33;
LABEL_67:
  v44 = *(_QWORD **)(a3 + 16);
  if ( (_DWORD)v123 != v119 >> 4 || (v119 & 8) == 0 )
    goto LABEL_33;
  v45 = (*(_BYTE *)(v44[270] + 205LL) >> 2) & 3;
  if ( ((_DWORD)v123 != 1 || (v119 & 4) == 0) && ((*(_BYTE *)(v44[270] + 205LL) >> 2) & 3) != 0 )
  {
    if ( !v120 )
    {
      if ( v45 != 3 )
        goto LABEL_73;
LABEL_33:
      v26 = v121;
      if ( (v121 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        goto LABEL_6;
      v27 = v121 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned __int8)sub_B19120(*(_QWORD *)(v121 & 0xFFFFFFFFFFFFFFF0LL), 0) )
        goto LABEL_6;
      v28 = *(_QWORD *)v27;
      v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v29 - 25) <= 1u )
        goto LABEL_6;
      if ( (unsigned int)(v29 - 42) <= 1
        && ((unsigned int)*(unsigned __int8 *)(v28 + 16) - 42 <= 1 || (v28 = sub_B0D320(v28)) != 0) )
      {
        while ( (*(_BYTE *)(v28 + 18) & 0x10) != 0 )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v28 + 16) - 42 > 1 )
            v28 = sub_B0D320(v28);
        }
        v26 = *(_QWORD *)(v28 + 32);
      }
      v113 = nullptr;
      v66 = sub_81FCD0(a3, v22, v26, (__int64 *)&v113, 0);
      v67 = (unsigned __int64)v113;
      if ( !v66 )
        goto LABEL_6;
      if ( (v119 & 8) != 0 && (unsigned int)v123 == (unsigned __int64)(v119 >> 4) )
      {
        v12 = ptr;
        v75 = *((_QWORD *)ptr + (unsigned int)v123 - 1);
        if ( v75 >= v120 )
          goto LABEL_25;
        v69 = (_QWORD)v113 * (v120 - v75);
      }
      else
      {
        v68 = sub_820300((__int64)&v119);
        v12 = ptr;
        v69 = v67 & -(__int64)!v68;
      }
      v43 = v118;
      v41 = (char *)(v118 + v69);
      goto LABEL_59;
    }
    if ( v120 != 1 || v45 != 1 )
      goto LABEL_33;
  }
LABEL_73:
  v46 = (void *)v116;
  v100 = (__int64)v117;
  if ( v116 )
  {
    if ( (v116 & 3) == 1 )
    {
      v81 = v116 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v116 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_WORD *)v81 & 0x1FF) == 0x2F )
      {
        v82 = *(_QWORD *)(v81 + 24);
        if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 47 > 2 )
        {
          if ( (*(_BYTE *)(v82 + 28) & 0x7F) == 0x1E )
          {
            v87 = *(_QWORD *)(v82 + 56) + 8LL * *(unsigned int *)(v82 + 64);
            v88 = *(__int64 **)(v82 + 56);
            v98 = v87;
            while ( (__int64 *)v98 != v88 )
            {
              v89 = *(_QWORD *)(*v88 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(*v88 + 16) & 4) != 0 )
                v89 = *(_QWORD *)v89;
              if ( (*(_BYTE *)(v89 + 8) & 0x7Fu) - 56 > 3 )
                BUG();
              if ( *(char *)(v89 - 36) >= 0 )
              {
                v106 = *v88;
                if ( *(_BYTE *)(v89 + 9) >> 5 != 2 )
                {
                  v90 = sub_AB4240(v44, v89 - 64);
                  v91 = v106;
                  v92 = v90;
                  if ( *(char *)(v106 + 29) < 0 )
                  {
                    v93 = v106;
                    v107 = v90;
                    v94 = sub_77A0C0(v93);
                    v92 = v107;
                    v91 = v94;
                  }
                  if ( *(_DWORD *)(v91 + 68) <= 0xFu )
                  {
                    v109 = v92;
                    v108 = v91;
                    sub_78B660(v91);
                    v92 = v109;
                    v91 = v108;
                  }
                  if ( *(_DWORD *)(v91 + 68) >> 4 != (unsigned int)((__int64)(*(_QWORD *)(v92 + 56)
                                                                            - *(_QWORD *)(v92 + 48)) >> 3) )
                    goto LABEL_33;
                }
              }
              ++v88;
            }
          }
        }
        else
        {
          v83 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v82 + 16) & 4) != 0 )
            v83 = *(_QWORD *)v83;
          if ( (*(_BYTE *)(v83 + 8) & 0x7Fu) - 56 > 3 )
            BUG();
          if ( *(char *)(v83 - 36) >= 0 && *(_BYTE *)(v83 + 9) >> 5 != 2 )
          {
            v84 = sub_AB4240(v44, v83 - 64);
            v85 = v84;
            if ( *(char *)(v82 + 29) < 0 )
            {
              v97 = v84;
              v86 = sub_77A0C0(v82);
              v85 = v97;
              v82 = v86;
            }
            if ( *(_DWORD *)(v82 + 68) <= 0xFu )
            {
              v99 = v85;
              sub_78B660(v82);
              v85 = v99;
            }
            if ( *(_DWORD *)(v82 + 68) >> 4 != (unsigned int)((__int64)(*(_QWORD *)(v85 + 56) - *(_QWORD *)(v85 + 48)) >> 3) )
              goto LABEL_33;
          }
        }
      }
    }
  }
  v113 = v46;
  v47 = 0;
  v114 = (__int64 *)v100;
  v48 = sub_69F240((__int64 *)&v113);
  v49 = v48;
  if ( (v119 & 4) != 0 )
  {
    v50 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
    {
      v47 = 1;
      v49 = *(_QWORD *)(sub_6D9A50(v44, v48) + 32);
    }
    else
    {
      if ( *(_BYTE *)(v50 + 16) != 41 )
        v50 = sub_B0D320(v50);
      v49 = *(_QWORD *)(v50 + 32);
      v47 = 1;
    }
  }
  v96 = v123;
  if ( (_DWORD)v123 != v47 )
  {
    for ( i = v47 + 1; ; ++i )
    {
      while ( 1 )
      {
        v53 = (char *)ptr + 8 * (unsigned int)(i - 1);
        v54 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
        v55 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned __int8)(v55 - 2) <= 4u )
          break;
        if ( v55 == 14 )
        {
          if ( *(_BYTE *)(v54 + 16) != 14 )
            v54 = sub_B0D320(v54);
          if ( *v53 != 1 )
            goto LABEL_33;
          v49 = *(_QWORD *)(v54 + 32);
        }
        else
        {
          v76 = *v53 & 0xFFFFFFFFFFFFFFF8LL;
          if ( *v53 <= 7u || (*(_BYTE *)(v76 + 28) & 0x7Fu) - 47 > 2 )
            goto LABEL_33;
          v77 = *(_QWORD *)(v76 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v76 + 16) & 4) != 0 )
            v77 = *(_QWORD *)v77;
          if ( (*(_BYTE *)(v77 + 8) & 0x7Fu) - 56 > 3 )
            BUG();
          if ( *(char *)(v77 - 36) >= 0 && *(_BYTE *)(v77 + 9) >> 5 != 2 )
          {
            v101 = *v53 & 0xFFFFFFFFFFFFFFF8LL;
            v78 = sub_AB4240(v44, v77 - 64);
            v76 = v101;
            v79 = v78;
            v80 = v101;
            if ( *(char *)(v101 + 29) < 0 )
            {
              v80 = sub_77A0C0(v101);
              v76 = v101;
            }
            if ( *(_DWORD *)(v80 + 68) <= 0xFu )
            {
              v105 = v76;
              v102 = v80;
              sub_78B660(v80);
              v76 = v105;
              v80 = v102;
            }
            if ( *(_DWORD *)(v80 + 68) >> 4 != (unsigned int)((__int64)(*(_QWORD *)(v79 + 56) - *(_QWORD *)(v79 + 48)) >> 3) )
              goto LABEL_33;
          }
          v49 = *(_QWORD *)(v76 + 48);
        }
        if ( v96 == i )
          goto LABEL_104;
        ++i;
      }
      if ( v96 == i )
        goto LABEL_104;
      v56 = sub_6D9A50(v44, v49);
      v52 = *(_QWORD **)(v56 + 40);
      if ( (*(_BYTE *)(v56 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v52 + 2) > 0x40u )
          v52 = *(_QWORD **)*v52;
        else
          v52 = (_QWORD *)*v52;
      }
      if ( (_QWORD *)(*v53 + 1LL) != v52 )
        break;
      v49 = *(_QWORD *)(v56 + 32);
    }
    goto LABEL_33;
  }
LABEL_104:
  if ( !v116
    || (v116 & 3) != 1
    || (v70 = v116 & 0xFFFFFFFFFFFFFFFCLL, (v116 & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 41
    || !sub_8216C0(v70) )
  {
    if ( a2 == 1 )
      goto LABEL_6;
    goto LABEL_33;
  }
  v71 = *(_QWORD **)(a3 + 16);
  v113 = nullptr;
  LODWORD(v114) = 1;
  v72 = sub_866550(v71, v116, (__int64)v117, (__int64)&v113);
  v73 = (void **)v113;
  v74 = (unsigned int)v114;
  if ( !v72 )
  {
    if ( a2 != 1 )
    {
      if ( (unsigned int)v114 > 0x40 && v113 )
        operator delete[](v113);
      goto LABEL_33;
    }
    goto LABEL_176;
  }
  if ( sub_8318F0((__int64)&v113, 0x7FFFFFFFFFFFFFFFuLL) )
  {
LABEL_176:
    if ( v74 <= 0x40 )
      goto LABEL_6;
    v59 = v73;
    if ( !v73 )
      goto LABEL_6;
    goto LABEL_97;
  }
  if ( v74 > 0x40 )
  {
    v41 = (char *)*v73;
    if ( v73 )
    {
      operator delete[](v73);
      v43 = v118;
      v12 = ptr;
      goto LABEL_59;
    }
LABEL_58:
    v43 = v118;
    v12 = ptr;
    goto LABEL_59;
  }
  v43 = v118;
  v12 = ptr;
  v41 = (char *)v73;
LABEL_59:
  if ( (__int64)v41 > v43 )
  {
    v24 = &v41[-v43];
    goto LABEL_26;
  }
LABEL_25:
  v24 = nullptr;
LABEL_26:
  v13 = 1;
  *a4 = v24;
LABEL_27:
  if ( v12 != v124 )
    free(v12);
  return v13;
}

