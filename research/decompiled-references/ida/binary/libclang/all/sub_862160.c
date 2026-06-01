__int64 __fastcall sub_862160(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbp
  unsigned int v4; // eax
  char v5; // al
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r13
  char v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // eax
  void *v16; // rcx
  __int64 v17; // rax
  int *v18; // rsi
  unsigned __int64 v19; // rdx
  char *v20; // r14
  __int64 v21; // r14
  int v22; // eax
  char v23; // r14
  unsigned __int64 v24; // rdx
  char *v25; // rdi
  int *v26; // rbx
  char *v27; // rbp
  int *v28; // r12
  int *v29; // rsi
  __int64 v30; // rdi
  _DWORD *v31; // rbx
  _DWORD *v32; // rbp
  int v33; // eax
  char v35; // al
  __int64 v36; // rdi
  __int64 v37; // rdx
  _BYTE *v38; // rbx
  __int64 v39; // r14
  unsigned int v40; // r12d
  __int64 v41; // r13
  _QWORD *v42; // rax
  _QWORD *v43; // rsi
  _QWORD *v44; // r14
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  _BYTE *v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rdi
  _DWORD *v50; // rbp
  _DWORD *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // r14
  unsigned int v54; // r15d
  __int64 v55; // rbx
  unsigned int v56; // r13d
  char v57; // bp
  void *v58; // rcx
  int *v59; // rbp
  __int64 v60; // rax
  unsigned __int64 v61; // rsi
  __int64 v62; // rbp
  char v63; // al
  __int64 v64; // rbp
  int v65; // eax
  char v66; // bp
  signed __int64 v67; // rbp
  __int64 v68; // rax
  int *v69; // r14
  __int64 v70; // r15
  int *v71; // r13
  int *v72; // rsi
  __int64 v73; // rdi
  int *v74; // r14
  unsigned int v75; // r14d
  __int64 v76; // r14
  char *v77; // rbx
  __int64 v78; // r13
  _QWORD *v79; // rax
  _QWORD *v80; // rsi
  _QWORD *v81; // r14
  _QWORD *v82; // rdx
  _QWORD *v83; // rax
  char *v84; // r13
  __int64 v85; // rsi
  __int64 v86; // rdi
  _DWORD *v87; // rbp
  _DWORD *v88; // rbx
  int *v89; // rbx
  char *v90; // rbp
  int *v91; // r12
  int *v92; // rsi
  __int64 v93; // rdi
  _DWORD *v94; // rbx
  _DWORD *v95; // rbp
  _QWORD *v96; // rax
  unsigned __int8 v97; // [rsp+7h] [rbp-271h]
  __int64 v98; // [rsp+8h] [rbp-270h]
  void *v99; // [rsp+18h] [rbp-260h]
  unsigned __int64 v100; // [rsp+20h] [rbp-258h]
  unsigned __int8 v101; // [rsp+20h] [rbp-258h]
  __int64 *v102; // [rsp+20h] [rbp-258h]
  unsigned int v103; // [rsp+20h] [rbp-258h]
  __int64 v104; // [rsp+40h] [rbp-238h]
  int v105; // [rsp+40h] [rbp-238h]
  __int64 *v106; // [rsp+48h] [rbp-230h]
  __int64 v107; // [rsp+50h] [rbp-228h]
  __int64 v108; // [rsp+50h] [rbp-228h]
  __int64 v109; // [rsp+58h] [rbp-220h]
  void *v110; // [rsp+60h] [rbp-218h] BYREF
  unsigned int v111; // [rsp+68h] [rbp-210h]
  char v112; // [rsp+6Ch] [rbp-20Ch]
  void *v113; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-200h]
  char v115; // [rsp+7Ch] [rbp-1FCh]
  void *v116; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v117; // [rsp+88h] [rbp-1F0h]
  char v118; // [rsp+8Ch] [rbp-1ECh]
  void *v119; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v120; // [rsp+98h] [rbp-1E0h]
  unsigned int v121; // [rsp+A0h] [rbp-1D8h]
  unsigned int v122; // [rsp+D0h] [rbp-1A8h] BYREF
  char v123; // [rsp+D4h] [rbp-1A4h]
  __int64 v124; // [rsp+D8h] [rbp-1A0h]
  unsigned int v125; // [rsp+E0h] [rbp-198h]
  unsigned int v126; // [rsp+110h] [rbp-168h] BYREF
  char v127; // [rsp+114h] [rbp-164h]
  void *v128; // [rsp+118h] [rbp-160h]
  unsigned int v129; // [rsp+120h] [rbp-158h]
  char v130; // [rsp+124h] [rbp-154h]
  void *ptr; // [rsp+150h] [rbp-128h] BYREF
  __int64 v132; // [rsp+158h] [rbp-120h]
  _BYTE v133[280]; // [rsp+160h] [rbp-118h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = sub_80FBD0(a2);
  if ( v4 == 481 )
  {
LABEL_5:
    v5 = *(_BYTE *)(a2 + 2);
    v6 = *a1;
    v122 = 0;
    v7 = *(unsigned __int8 *)(a2 + 3);
    v123 &= ~1u;
    v97 = sub_85F8D0(v6, *(_QWORD *)(a2 + 8LL * ((v5 & 8) != 0) + 8 + v7), &v122);
    if ( v97 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 56 > 1 )
        v8 = sub_B0D320(v8);
      v9 = v125;
      v98 = *(_QWORD *)(v8 + 32);
      ptr = v133;
      v132 = 0x400000000LL;
      if ( v125 > 4 )
      {
        v68 = sub_25D5F70(&ptr, v133, v125, 56, &v126);
        v69 = (int *)ptr;
        v99 = (void *)v68;
        v70 = v68;
        v71 = (int *)((char *)ptr + 56 * (unsigned int)v132);
        if ( ptr != v71 )
        {
          do
          {
            v72 = v69;
            v73 = v70;
            v69 += 14;
            v70 += 56;
            sub_69F700(v73, v72);
          }
          while ( v71 != v69 );
          v74 = (int *)ptr;
          v71 = (int *)((char *)ptr + 56 * (unsigned int)v132);
          if ( ptr != v71 )
          {
            do
            {
              v71 -= 14;
              if ( (unsigned int)*v71 > 1 )
                sub_69F740((__int64)v71);
            }
            while ( v74 != v71 );
            v71 = (int *)ptr;
          }
        }
        v75 = v126;
        if ( v71 != (int *)v133 )
          free(v71);
        HIDWORD(v132) = v75;
        ptr = v99;
        goto LABEL_10;
      }
      if ( v125 )
      {
LABEL_10:
        v10 = 7 * v9;
        v11 = 0;
        v12 = 8 * v10;
        while ( 1 )
        {
          v21 = v11 + v124;
          v117 = *(_DWORD *)(v11 + v124 + 16);
          if ( v117 > 0x40 )
            sub_2585B30(&v116);
          else
            v116 = *(void **)(v21 + 8);
          v118 = *(_BYTE *)(v21 + 20);
          v22 = sub_80FBD0(v2);
          if ( v22 == 462 )
            break;
          if ( v22 == 481 )
          {
            v13 = sub_B101F0(*(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v117 > 0x40 )
              v14 = sub_25876C0(&v116);
            else
              v14 = __popcountdi2();
            v100 = v14;
            v15 = sub_70B280(*(_QWORD *)(*v3 + 16), v98);
            v16 = (void *)v100;
            LODWORD(v120) = v15;
            if ( v15 > 0x40 )
            {
              sub_2585A50(&v119, v100, 0);
              v15 = v120;
              v16 = v119;
            }
            else
            {
              v119 = (void *)v100;
            }
            v129 = v15;
            v17 = (unsigned int)v132;
            v18 = (int *)&v126;
            v130 = v13;
            v19 = (unsigned int)v132 + 1LL;
            v127 &= ~1u;
            v20 = (char *)ptr;
            LODWORD(v120) = 0;
            v126 = 2;
            v128 = v16;
            if ( HIDWORD(v132) >= v19 )
              goto LABEL_17;
            if ( &v126 < ptr || &v126 >= (unsigned int *)((char *)ptr + 56 * (unsigned int)v132) )
            {
              v109 = -1;
              v101 = 0;
            }
            else
            {
              v109 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v126 - (_BYTE *)ptr) >> 3);
              v101 = v97;
            }
            v20 = (char *)sub_25D5F70(&ptr, v133, v19, 56, &v113);
            v25 = (char *)ptr + 56 * (unsigned int)v132;
            if ( ptr != v25 )
            {
              v104 = v11;
              v89 = (int *)((char *)ptr + 56 * (unsigned int)v132);
              v106 = v3;
              v90 = v20;
              v108 = v2;
              v91 = (int *)ptr;
              do
              {
                v92 = v91;
                v93 = (__int64)v90;
                v91 += 14;
                v90 += 56;
                sub_69F700(v93, v92);
              }
              while ( v89 != v91 );
              v11 = v104;
              v3 = v106;
              v2 = v108;
              v25 = (char *)ptr + 56 * (unsigned int)v132;
              if ( ptr != v25 )
              {
                v94 = ptr;
                v95 = (char *)ptr + 56 * (unsigned int)v132;
                do
                {
                  v95 -= 14;
                  if ( *v95 > 1u )
                    sub_69F740((__int64)v95);
                }
                while ( v94 != v95 );
LABEL_40:
                v11 = v104;
                v3 = v106;
                v25 = (char *)ptr;
              }
            }
LABEL_41:
            v33 = (int)v113;
            if ( v25 != v133 )
            {
              v105 = (int)v113;
              free(v25);
              v33 = v105;
            }
            HIDWORD(v132) = v33;
            v18 = (int *)&v126;
            ptr = v20;
            v17 = (unsigned int)v132;
            if ( v101 )
              v18 = (int *)&v20[56 * v109];
            goto LABEL_17;
          }
LABEL_22:
          if ( v117 > 0x40 && v116 )
            operator delete[](v116);
          v11 += 56;
          if ( v12 == v11 )
          {
            v38 = ptr;
            goto LABEL_54;
          }
        }
        v23 = sub_B101F0(*(_QWORD *)(v98 & 0xFFFFFFFFFFFFFFF0LL));
        sub_258F060(&v119, &v116);
        v18 = (int *)&v126;
        v130 = v23;
        v129 = v120;
        v17 = (unsigned int)v132;
        v128 = v119;
        v20 = (char *)ptr;
        v24 = (unsigned int)v132 + 1LL;
        v127 &= ~1u;
        LODWORD(v120) = 0;
        v126 = 2;
        if ( HIDWORD(v132) >= v24 )
        {
LABEL_17:
          sub_69F700((__int64)&v20[56 * v17], v18);
          LODWORD(v132) = v132 + 1;
          if ( v126 > 1 )
            sub_69F740((__int64)&v126);
          if ( (unsigned int)v120 > 0x40 && v119 )
            operator delete[](v119);
          goto LABEL_22;
        }
        if ( &v126 < ptr || &v126 >= (unsigned int *)((char *)ptr + 56 * (unsigned int)v132) )
        {
          v109 = -1;
          v101 = 0;
        }
        else
        {
          v109 = 0x6DB6DB6DB6DB6DB7LL * (((char *)&v126 - (_BYTE *)ptr) >> 3);
          v101 = v97;
        }
        v20 = (char *)sub_25D5F70(&ptr, v133, v24, 56, &v113);
        v25 = (char *)ptr + 56 * (unsigned int)v132;
        if ( ptr != v25 )
        {
          v104 = v11;
          v26 = (int *)((char *)ptr + 56 * (unsigned int)v132);
          v106 = v3;
          v27 = v20;
          v107 = v2;
          v28 = (int *)ptr;
          do
          {
            v29 = v28;
            v30 = (__int64)v27;
            v28 += 14;
            v27 += 56;
            sub_69F700(v30, v29);
          }
          while ( v26 != v28 );
          v11 = v104;
          v3 = v106;
          v2 = v107;
          v25 = (char *)ptr + 56 * (unsigned int)v132;
          if ( ptr != v25 )
          {
            v31 = ptr;
            v32 = (char *)ptr + 56 * (unsigned int)v132;
            do
            {
              v32 -= 14;
              if ( *v32 > 1u )
                sub_69F740((__int64)v32);
            }
            while ( v31 != v32 );
            goto LABEL_40;
          }
        }
        goto LABEL_41;
      }
      v38 = v133;
LABEL_54:
      v39 = (unsigned int)v132;
      v127 &= ~1u;
      v128 = nullptr;
      v40 = v132;
      v129 = 0;
      v126 = 8;
      v41 = 56LL * (unsigned int)v132;
      v42 = (_QWORD *)operator new[](v41 + 8);
      *v42 = v39;
      v43 = v42 + 1;
      if ( v39 )
      {
        v44 = v42 + 1;
        v45 = &v42[(unsigned __int64)v41 / 8 + 1];
        v46 = v43;
        do
        {
          *((_BYTE *)v46 + 4) &= ~1u;
          v46 += 7;
          *((_DWORD *)v46 - 14) = 0;
        }
        while ( v46 != v45 );
        v128 = v43;
        v47 = &v38[v41];
        v129 = v40;
        do
        {
          v48 = (__int64)v38;
          v49 = (__int64)v44;
          v38 += 56;
          v44 += 7;
          sub_6A63E0(v49, v48);
        }
        while ( v38 != v47 );
      }
      else
      {
        v128 = v42 + 1;
        v129 = 0;
      }
      sub_6A63E0(v3[1], (__int64)&v126);
      if ( v126 > 1 )
        sub_69F740((__int64)&v126);
      v50 = ptr;
      v51 = (char *)ptr + 56 * (unsigned int)v132;
      if ( ptr != v51 )
      {
        do
        {
          v51 -= 14;
          if ( *v51 > 1u )
            sub_69F740((__int64)v51);
        }
        while ( v50 != v51 );
        v51 = ptr;
      }
      if ( v51 != (_DWORD *)v133 )
        free(v51);
    }
    if ( v122 > 1 )
      sub_69F740((__int64)&v122);
    return v97;
  }
  if ( v4 > 0x1E1 )
  {
    if ( v4 != 489 )
      return 0;
  }
  else if ( v4 != 461 )
  {
    if ( v4 == 462 )
      goto LABEL_5;
    return 0;
  }
  v35 = *(_BYTE *)(a2 + 2);
  v36 = *a1;
  LODWORD(v119) = 0;
  v37 = *(unsigned __int8 *)(a2 + 3);
  BYTE4(v119) &= ~1u;
  v123 &= ~1u;
  v122 = 0;
  if ( !(unsigned __int8)sub_85F8D0(v36, *(_QWORD *)(a2 + 8LL * ((v35 & 8) != 0) + 8 + v37), (unsigned int *)&v119)
    || (v97 = sub_85F8D0(
                *v3,
                *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8),
                &v122)) == 0 )
  {
    v97 = 0;
    goto LABEL_50;
  }
  v52 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v52 + 16) - 56 > 1 )
    v52 = sub_B0D320(v52);
  v53 = *(_QWORD *)(v52 + 32);
  v54 = v121;
  ptr = v133;
  v132 = 0x400000000LL;
  if ( v121 > 4 )
  {
    sub_848380((__int64)&ptr, v121);
  }
  else if ( !v121 )
  {
    v127 &= ~1u;
    v128 = nullptr;
    v129 = 0;
    v126 = 8;
    v96 = (_QWORD *)operator new[](8u);
    *v96 = 0;
    v80 = v96 + 1;
    goto LABEL_160;
  }
  v102 = v3;
  v55 = 0;
  v56 = 0;
  do
  {
    v62 = v55 + v120;
    v111 = *(_DWORD *)(v55 + v120 + 16);
    if ( v111 > 0x40 )
      sub_2585B30(&v110);
    else
      v110 = *(void **)(v62 + 8);
    v63 = *(_BYTE *)(v62 + 20);
    v64 = v55 + v124;
    v112 = v63;
    v114 = *(_DWORD *)(v55 + v124 + 16);
    if ( v114 > 0x40 )
      sub_2585B30(&v113);
    else
      v113 = *(void **)(v64 + 8);
    v115 = *(_BYTE *)(v64 + 20);
    v65 = sub_80FBD0(v2);
    if ( v65 == 461 )
    {
      v66 = sub_B101F0(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v112 )
        sub_258B480(&v116, &v113, &v113);
      else
        sub_258B290(&v116, &v110, &v113);
      v130 = v66;
      v127 &= ~1u;
      v58 = ptr;
      v129 = v117;
      v59 = (int *)&v126;
      v60 = (unsigned int)v132;
      v128 = v116;
      v117 = 0;
      v126 = 2;
      v61 = (unsigned int)v132 + 1LL;
      if ( HIDWORD(v132) >= v61 )
        goto LABEL_80;
      if ( &v126 < ptr || &v126 >= (unsigned int *)((char *)ptr + 56 * (unsigned int)v132) )
      {
LABEL_152:
        sub_848380((__int64)&ptr, v61);
        v58 = ptr;
        v60 = (unsigned int)v132;
        goto LABEL_80;
      }
      v67 = (char *)&v126 - (_BYTE *)ptr;
      goto LABEL_103;
    }
    if ( v65 != 489 )
      goto LABEL_85;
    v57 = sub_B101F0(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v112 )
      sub_258B820(&v116, &v113, &v113);
    else
      sub_258B620(&v116, &v110, &v113);
    v130 = v57;
    v127 &= ~1u;
    v58 = ptr;
    v129 = v117;
    v59 = (int *)&v126;
    v60 = (unsigned int)v132;
    v128 = v116;
    v117 = 0;
    v126 = 2;
    v61 = (unsigned int)v132 + 1LL;
    if ( HIDWORD(v132) < v61 )
    {
      if ( &v126 < ptr || &v126 >= (unsigned int *)((char *)ptr + 56 * (unsigned int)v132) )
        goto LABEL_152;
      v67 = (char *)&v126 - (_BYTE *)ptr;
LABEL_103:
      sub_848380((__int64)&ptr, v61);
      v58 = ptr;
      v60 = (unsigned int)v132;
      v59 = (int *)((char *)ptr + v67);
    }
LABEL_80:
    sub_69F700((__int64)v58 + 56 * v60, v59);
    LODWORD(v132) = v132 + 1;
    if ( v126 > 1 )
      sub_69F740((__int64)&v126);
    if ( v117 > 0x40 && v116 )
      operator delete[](v116);
LABEL_85:
    if ( v114 > 0x40 && v113 )
      operator delete[](v113);
    if ( v111 > 0x40 && v110 )
      operator delete[](v110);
    ++v56;
    v55 += 56;
  }
  while ( v56 < v54 );
  v76 = (unsigned int)v132;
  v3 = v102;
  v128 = nullptr;
  v127 &= ~1u;
  v77 = (char *)ptr;
  v103 = v132;
  v129 = 0;
  v126 = 8;
  v78 = 56LL * (unsigned int)v132;
  v79 = (_QWORD *)operator new[](v78 + 8);
  *v79 = v76;
  v80 = v79 + 1;
  if ( !v76 )
  {
LABEL_160:
    v128 = v80;
    v129 = 0;
    goto LABEL_128;
  }
  v81 = v79 + 1;
  v82 = &v79[(unsigned __int64)v78 / 8 + 1];
  v83 = v79 + 1;
  do
  {
    *((_BYTE *)v83 + 4) &= ~1u;
    v83 += 7;
    *((_DWORD *)v83 - 14) = 0;
  }
  while ( v83 != v82 );
  v128 = v80;
  v84 = &v77[v78];
  v129 = v103;
  do
  {
    v85 = (__int64)v77;
    v86 = (__int64)v81;
    v77 += 56;
    v81 += 7;
    sub_6A63E0(v86, v85);
  }
  while ( v77 != v84 );
LABEL_128:
  sub_6A63E0(v3[1], (__int64)&v126);
  if ( v126 > 1 )
    sub_69F740((__int64)&v126);
  v87 = ptr;
  v88 = (char *)ptr + 56 * (unsigned int)v132;
  if ( ptr != v88 )
  {
    do
    {
      v88 -= 14;
      if ( *v88 > 1u )
        sub_69F740((__int64)v88);
    }
    while ( v87 != v88 );
    v88 = ptr;
  }
  if ( v88 != (_DWORD *)v133 )
    free(v88);
LABEL_50:
  if ( v122 > 1 )
  {
    sub_69F740((__int64)&v122);
    if ( (unsigned int)v119 > 1 )
LABEL_52:
      sub_69F740((__int64)&v119);
  }
  else if ( (unsigned int)v119 > 1 )
  {
    goto LABEL_52;
  }
  return v97;
}

