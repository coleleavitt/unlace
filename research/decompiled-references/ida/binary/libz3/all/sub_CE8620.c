__int64 __fastcall sub_CE8620(__int64 a1, __int64 **a2, __int64 a3)
{
  char **v3; // r12
  __int64 v4; // rdx
  char **v5; // r12
  __int64 v6; // rdx
  char **v7; // r12
  __int64 v8; // rdx
  char **exception; // r12
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdx
  char i; // al
  unsigned int v16; // r13d
  _OWORD *v17; // rax
  _OWORD *v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // r13
  unsigned int *v21; // rbx
  unsigned int v22; // eax
  bool v23; // cc
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r14
  _DWORD *v28; // r8
  _DWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // ecx
  unsigned int *v32; // rsi
  __int64 v33; // rdx
  unsigned int v34; // r9d
  size_t v35; // rsi
  unsigned int *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // r14
  _DWORD *v42; // r8
  _DWORD *v43; // rax
  _QWORD *v44; // rax
  unsigned int j; // ecx
  unsigned int *v46; // rsi
  __int64 v47; // rdx
  unsigned int v48; // r9d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // r15
  int v52; // r14d
  unsigned int *v53; // rdx
  unsigned int *v54; // rax
  __int64 *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rdi
  bool v60; // zf
  __int64 *v61; // r15
  unsigned int v62; // edx
  unsigned int v63; // r12d
  __int64 v64; // r14
  __int64 v65; // rcx
  __int64 *v66; // rbx
  unsigned __int64 v67; // r12
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // rbx
  unsigned __int64 v71; // r12
  __int64 v72; // rsi
  __int64 v73; // rdi
  char *v74; // rbx
  char *v75; // r12
  __int64 v76; // rdi
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // r14
  _DWORD *v82; // r8
  _DWORD *v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // ecx
  unsigned int *v86; // rsi
  __int64 v87; // rdx
  unsigned int v88; // r9d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r14
  __int64 v94; // r14
  _DWORD *v95; // r8
  _DWORD *v96; // rax
  _QWORD *v97; // rax
  unsigned int v98; // ecx
  unsigned int *v99; // rsi
  __int64 v100; // rdx
  unsigned int v101; // r9d
  size_t v102; // rsi
  unsigned int *v103; // rax
  __int64 v104; // rax
  int v105; // ecx
  __int64 *v106; // rax
  __int64 v107; // r12
  _QWORD *v108; // rdi
  __int64 v109; // rax
  __int64 k; // rax
  _DWORD *v112; // [rsp+20h] [rbp-160h]
  _DWORD *v113; // [rsp+20h] [rbp-160h]
  _DWORD *v114; // [rsp+20h] [rbp-160h]
  _DWORD *v115; // [rsp+20h] [rbp-160h]
  unsigned int v116; // [rsp+2Ch] [rbp-154h]
  unsigned int v117; // [rsp+2Ch] [rbp-154h]
  unsigned int v118; // [rsp+2Ch] [rbp-154h]
  unsigned int v119; // [rsp+2Ch] [rbp-154h]
  _DWORD *v120; // [rsp+30h] [rbp-150h]
  unsigned int v121; // [rsp+30h] [rbp-150h]
  _DWORD *v122; // [rsp+30h] [rbp-150h]
  unsigned int v123; // [rsp+30h] [rbp-150h]
  _DWORD *v124; // [rsp+30h] [rbp-150h]
  unsigned int v125; // [rsp+30h] [rbp-150h]
  _DWORD *v126; // [rsp+30h] [rbp-150h]
  unsigned int v127; // [rsp+30h] [rbp-150h]
  __int64 v128; // [rsp+30h] [rbp-150h]
  __int64 v129; // [rsp+30h] [rbp-150h]
  __int64 v130; // [rsp+30h] [rbp-150h]
  __int64 v131; // [rsp+30h] [rbp-150h]
  __int64 v132; // [rsp+38h] [rbp-148h]
  int v133; // [rsp+50h] [rbp-130h]
  __int64 *v134; // [rsp+50h] [rbp-130h]
  int v135; // [rsp+58h] [rbp-128h]
  unsigned int v136; // [rsp+5Ch] [rbp-124h]
  _QWORD *v137; // [rsp+68h] [rbp-118h]
  char v138[8]; // [rsp+78h] [rbp-108h] BYREF
  char v139[8]; // [rsp+80h] [rbp-100h] BYREF
  char v140[8]; // [rsp+88h] [rbp-F8h] BYREF
  char v141[8]; // [rsp+90h] [rbp-F0h] BYREF
  char v142[8]; // [rsp+98h] [rbp-E8h] BYREF
  _QWORD *v143; // [rsp+A0h] [rbp-E0h] BYREF
  unsigned int v144; // [rsp+A8h] [rbp-D8h]
  __int64 v145; // [rsp+ACh] [rbp-D4h]
  __int64 v146; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v147; // [rsp+C8h] [rbp-B8h]
  __int64 v148; // [rsp+E0h] [rbp-A0h] BYREF
  void *ptr; // [rsp+E8h] [rbp-98h]
  __int64 v150; // [rsp+F0h] [rbp-90h]
  int v151; // [rsp+F8h] [rbp-88h]
  void *v152; // [rsp+100h] [rbp-80h]
  __int64 v153; // [rsp+108h] [rbp-78h]
  int v154; // [rsp+110h] [rbp-70h]
  __int128 v155; // [rsp+118h] [rbp-68h]
  __int64 v156; // [rsp+128h] [rbp-58h]
  __int64 *v157; // [rsp+130h] [rbp-50h]
  __int64 v158; // [rsp+138h] [rbp-48h]
  __int64 *v159; // [rsp+140h] [rbp-40h]

  sub_EE4940(v138, "special_relations", *a2);
  sub_CE67C0(a1);
  v12 = sub_186B270(0xC0u);
  v13 = *a2;
  v137 = (_QWORD *)v12;
  *(_OWORD *)v12 = 0;
  *(_OWORD *)(v12 + 24) = 0;
  *(_OWORD *)(v12 + 48) = 0;
  *(_OWORD *)(v12 + 72) = 0;
  *(_OWORD *)(v12 + 96) = 0;
  *(_OWORD *)(v12 + 120) = 0;
  *(_OWORD *)(v12 + 144) = 0;
  *(_OWORD *)(v12 + 168) = 0;
  v14 = v13[9];
  *(_DWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  *(_DWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 88) = 0;
  *(_DWORD *)(v12 + 112) = 0;
  *(_DWORD *)(v12 + 136) = 0;
  *(_DWORD *)(v12 + 160) = 0;
  *(_DWORD *)(v12 + 184) = 0;
  v145 = 0;
  if ( v14 )
  {
    for ( i = *(_BYTE *)(v14 + 3) >> 6; !i; i = *(_BYTE *)(v14 + 3) >> 6 )
      v14 = *(_QWORD *)(v14 + 16);
    if ( i == 1 )
    {
      v135 = *(_DWORD *)(v14 + 4) + 1;
    }
    else if ( i == 2 )
    {
      v135 = *(_DWORD *)(v14 + 4) - 1;
    }
    else
    {
      v135 = *(_DWORD *)(v14 + 4);
    }
    v136 = 8;
    if ( v135 )
    {
      v16 = 0;
      while ( 1 )
      {
        v143 = v137;
        v144 = v136;
        sub_CE6510(a1, v13, v16++, (__int64 *)&v143);
        v137 = v143;
        v136 = v144;
        if ( v16 == v135 )
          break;
        v13 = *a2;
      }
    }
  }
  else
  {
    v135 = 0;
    v136 = 8;
  }
  v132 = *(_QWORD *)(a1 + 16);
  v148 = v132;
  v17 = (_OWORD *)sub_186B270(0x80u);
  ptr = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  v150 = 8;
  v151 = 0;
  v18 = (_OWORD *)sub_186B270(0x80u);
  v152 = v18;
  *v18 = 0;
  v18[1] = 0;
  v19 = v137;
  v18[2] = 0;
  v18[3] = 0;
  v18[4] = 0;
  v18[5] = 0;
  v18[6] = 0;
  v18[7] = 0;
  v153 = 8;
  v20 = &v137[3 * v136];
  v154 = 0;
  v156 = v132;
  v157 = nullptr;
  v158 = v132;
  v159 = nullptr;
  v155 = 0;
  if ( v20 == v137 )
  {
LABEL_143:
    v21 = nullptr;
  }
  else
  {
    while ( *v19 <= 1u )
    {
      v19 += 3;
      if ( v20 == v19 )
        goto LABEL_143;
    }
    v21 = nullptr;
    if ( v20 != v19 )
    {
      v133 = -1;
      v22 = *((_DWORD *)v19 + 4);
      v23 = v22 <= 0x1F;
      if ( v22 == 31 )
        goto LABEL_38;
LABEL_16:
      if ( !v23 )
      {
        if ( v22 != 39 )
          goto LABEL_32;
        v78 = *v19;
        LOBYTE(v147) = 1;
        v146 = v78;
        v79 = *(_QWORD *)(v78 + 40);
        v80 = v78 + 48;
        if ( v133 == -1 )
        {
          v129 = *(_QWORD *)(v78 + 40);
          sub_180C5A0(v142, "specrels");
          v133 = sub_15D1320(v132 + 560, v142);
          v79 = v129;
        }
        v81 = sub_15D2D10(v132, v133, 0, 1, (unsigned int)&v146, 2, v80, v79);
        sub_15D0DF0(&v146);
        sub_CE9B00(&v148, *v19, v81);
        v82 = (_DWORD *)v19[1];
        v83 = v82;
        if ( !v82 || !*(v82 - 1) )
          goto LABEL_32;
        if ( !v21 )
        {
          v124 = (_DWORD *)v19[1];
          v84 = (_QWORD *)sub_186B270(0x10u);
          v21 = (unsigned int *)(v84 + 1);
          *v84 = 2;
          v82 = v124;
          v85 = 0;
          v83 = (_DWORD *)v19[1];
          v86 = v21;
          while ( 1 )
          {
            ++v85;
            *v86 = *v82;
            ++*(v21 - 1);
            if ( !v83 || v85 >= *(v83 - 1) )
              goto LABEL_32;
            v82 = &v83[v85];
LABEL_116:
            v87 = *(v21 - 1);
            v86 = &v21[v87];
            if ( (_DWORD)v87 == *(v21 - 2) )
            {
              v88 = (unsigned int)(3 * v87 + 1) >> 1;
              v89 = 4 * v88 + 8;
              if ( 4 * (int)v87 + 8 >= (unsigned int)v89 || (unsigned int)v87 >= v88 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_1643DA(&v146, "Overflow encountered when expanding vector", v10);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v146);
                sub_233E40((__int64)&v146);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v114 = v82;
              v118 = v85;
              v125 = (unsigned int)(3 * v87 + 1) >> 1;
              v90 = (unsigned int *)sub_186B300(v21 - 2, v89);
              v21 = v90 + 2;
              v85 = v118;
              v82 = v114;
              *v90 = v125;
              v86 = &v90[v90[1] + 2];
              v83 = (_DWORD *)v19[1];
            }
          }
        }
        v85 = 0;
        goto LABEL_116;
      }
      if ( v22 == 7 )
      {
        v91 = *v19;
        LOBYTE(v147) = 1;
        v146 = v91;
        v92 = *(_QWORD *)(v91 + 40);
        v93 = v91 + 48;
        if ( v133 == -1 )
        {
          v131 = *(_QWORD *)(v91 + 40);
          sub_180C5A0(v139, "specrels");
          v133 = sub_15D1320(v132 + 560, v139);
          v92 = v131;
        }
        v94 = sub_15D2D10(v132, v133, 1, 1, (unsigned int)&v146, 2, v93, v92);
        sub_15D0DF0(&v146);
        sub_CE9B00(&v148, *v19, v94);
        v95 = (_DWORD *)v19[1];
        v96 = v95;
        if ( !v95 || !*(v95 - 1) )
          goto LABEL_32;
        if ( !v21 )
        {
          v126 = (_DWORD *)v19[1];
          v97 = (_QWORD *)sub_186B270(0x10u);
          v21 = (unsigned int *)(v97 + 1);
          *v97 = 2;
          v95 = v126;
          v98 = 0;
          v96 = (_DWORD *)v19[1];
          v99 = v21;
          while ( 1 )
          {
            ++v98;
            *v99 = *v95;
            ++*(v21 - 1);
            if ( !v96 || v98 >= *(v96 - 1) )
              goto LABEL_32;
            v95 = &v96[v98];
LABEL_129:
            v100 = *(v21 - 1);
            v99 = &v21[v100];
            if ( (_DWORD)v100 == *(v21 - 2) )
            {
              v101 = (unsigned int)(3 * v100 + 1) >> 1;
              v102 = 4 * v101 + 8;
              if ( 4 * (int)v100 + 8 >= (unsigned int)v102 || (unsigned int)v100 >= v101 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_1643DA(&v146, "Overflow encountered when expanding vector", v4);
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v146);
                sub_233E40((__int64)&v146);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v115 = v95;
              v119 = v98;
              v127 = (unsigned int)(3 * v100 + 1) >> 1;
              v103 = (unsigned int *)sub_186B300(v21 - 2, v102);
              v21 = v103 + 2;
              v98 = v119;
              v95 = v115;
              *v103 = v127;
              v99 = &v103[v103[1] + 2];
              v96 = (_DWORD *)v19[1];
            }
          }
        }
        v98 = 0;
        goto LABEL_129;
      }
      if ( v22 != 23 )
        goto LABEL_32;
      v24 = *v19;
      LOBYTE(v147) = 1;
      v146 = v24;
      v25 = *(_QWORD *)(v24 + 40);
      v26 = v24 + 48;
      if ( v133 == -1 )
      {
        v128 = *(_QWORD *)(v24 + 40);
        sub_180C5A0(v140, "specrels");
        v133 = sub_15D1320(v132 + 560, v140);
        v25 = v128;
      }
      v27 = sub_15D2D10(v132, v133, 3, 1, (unsigned int)&v146, 2, v26, v25);
      sub_15D0DF0(&v146);
      sub_CE9B00(&v148, *v19, v27);
      v28 = (_DWORD *)v19[1];
      v29 = v28;
      if ( !v28 || !*(v28 - 1) )
        goto LABEL_32;
      if ( v21 )
      {
        v31 = 0;
        goto LABEL_28;
      }
      v120 = (_DWORD *)v19[1];
      v30 = (_QWORD *)sub_186B270(0x10u);
      v21 = (unsigned int *)(v30 + 1);
      *v30 = 2;
      v28 = v120;
      v31 = 0;
      v29 = (_DWORD *)v19[1];
      v32 = v21;
      while ( 1 )
      {
        ++v31;
        *v32 = *v28;
        ++*(v21 - 1);
        if ( !v29 || v31 >= *(v29 - 1) )
          break;
        v28 = &v29[v31];
LABEL_28:
        v33 = *(v21 - 1);
        v32 = &v21[v33];
        if ( (_DWORD)v33 == *(v21 - 2) )
        {
          v34 = (unsigned int)(3 * v33 + 1) >> 1;
          v35 = 4 * v34 + 8;
          if ( 4 * (int)v33 + 8 >= (unsigned int)v35 || (unsigned int)v33 >= v34 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_1643DA(&v146, "Overflow encountered when expanding vector", v6);
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v146);
            sub_233E40((__int64)&v146);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v112 = v28;
          v116 = v31;
          v121 = (unsigned int)(3 * v33 + 1) >> 1;
          v36 = (unsigned int *)sub_186B300(v21 - 2, v35);
          v21 = v36 + 2;
          v31 = v116;
          v28 = v112;
          *v36 = v121;
          v32 = &v36[v36[1] + 2];
          v29 = (_DWORD *)v19[1];
        }
      }
LABEL_32:
      while ( 1 )
      {
        v37 = v19 + 3;
        if ( v20 == v19 + 3 )
          break;
        while ( 1 )
        {
          v19 = v37;
          if ( *v37 > 1u )
            break;
          v37 += 3;
          if ( v20 == v37 )
            goto LABEL_51;
        }
        if ( v20 == v37 )
          break;
        v22 = *((_DWORD *)v37 + 4);
        v23 = v22 <= 0x1F;
        if ( v22 != 31 )
          goto LABEL_16;
LABEL_38:
        v38 = *v19;
        LOBYTE(v147) = 1;
        v146 = v38;
        v39 = *(_QWORD *)(v38 + 40);
        v40 = v38 + 48;
        if ( v133 == -1 )
        {
          v130 = *(_QWORD *)(v38 + 40);
          sub_180C5A0(v141, "specrels");
          v133 = sub_15D1320(v132 + 560, v141);
          v39 = v130;
        }
        v41 = sub_15D2D10(v132, v133, 2, 1, (unsigned int)&v146, 2, v40, v39);
        sub_15D0DF0(&v146);
        sub_CE9B00(&v148, *v19, v41);
        v42 = (_DWORD *)v19[1];
        v43 = v42;
        if ( v42 && *(v42 - 1) )
        {
          if ( !v21 )
          {
            v122 = (_DWORD *)v19[1];
            v44 = (_QWORD *)sub_186B270(0x10u);
            v21 = (unsigned int *)(v44 + 1);
            *v44 = 2;
            v42 = v122;
            j = 0;
            v43 = (_DWORD *)v19[1];
            v46 = v21;
            goto LABEL_44;
          }
          for ( j = 0; ; v42 = &v43[j] )
          {
            v47 = *(v21 - 1);
            v46 = &v21[v47];
            if ( (_DWORD)v47 == *(v21 - 2) )
            {
              v48 = (unsigned int)(3 * v47 + 1) >> 1;
              v49 = 4 * v48 + 8;
              if ( 4 * (int)v47 + 8 >= (unsigned int)v49 || (unsigned int)v47 >= v48 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_1643DA(&v146, "Overflow encountered when expanding vector", v8);
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, &v146);
                sub_233E40((__int64)&v146);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v113 = v42;
              v117 = j;
              v123 = (unsigned int)(3 * v47 + 1) >> 1;
              v50 = (unsigned int *)sub_186B300(v21 - 2, v49);
              v21 = v50 + 2;
              j = v117;
              v42 = v113;
              *v50 = v123;
              v46 = &v50[v50[1] + 2];
              v43 = (_DWORD *)v19[1];
            }
LABEL_44:
            ++j;
            *v46 = *v42;
            ++*(v21 - 1);
            if ( !v43 || j >= *(v43 - 1) )
              break;
          }
        }
      }
    }
  }
LABEL_51:
  if ( HIDWORD(v150) )
  {
    v51 = 0;
    if ( !v135 )
      goto LABEL_66;
    while ( 1 )
    {
      v52 = v51;
      if ( v21 )
      {
        while ( 1 )
        {
          v53 = &v21[*(v21 - 1)];
          if ( v53 == v21 )
            break;
          v54 = v21;
          while ( *v54 != v52 )
          {
            if ( v53 == ++v54 )
              goto LABEL_60;
          }
          sub_EDBFA0((int)*a2);
          if ( v135 == ++v51 )
            goto LABEL_66;
          v52 = v51;
        }
      }
LABEL_60:
      v55 = *a2;
      v56 = **a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
      {
        v57 = *(_QWORD *)(v56 + 864);
        goto LABEL_62;
      }
      v104 = v55[9];
      v105 = 18;
      while ( 1 )
      {
        if ( !--v105 )
        {
          v134 = *a2;
          sub_233F80((__int64 *)(v56 + 616), (_DWORD *)v55 + 18);
          v106 = (__int64 *)(*(_QWORD *)(v134[9] + 16) + 8 * v51);
          goto LABEL_140;
        }
        if ( *(char *)(v104 + 3) >= 0 )
          break;
        if ( *(_BYTE *)(v104 + 3) >> 6 != 2 )
        {
          v106 = (__int64 *)(*(_QWORD *)(v104 + 16) + 8 * v51);
          goto LABEL_140;
        }
LABEL_142:
        v104 = *(_QWORD *)(v104 + 16);
      }
      if ( *(_DWORD *)(v104 + 4) != v52 )
        goto LABEL_142;
      v106 = (__int64 *)(v104 + 8);
LABEL_140:
      v57 = *v106;
LABEL_62:
      sub_157AC00(&v146, &v148, v57);
      sub_EDBFA0((int)*a2);
      v58 = v146;
      if ( v146 )
      {
        v59 = v147;
        v60 = (*(_DWORD *)(v146 + 8))-- == 1;
        if ( v60 )
          sub_15D7BC0(v59, v58);
      }
      if ( v135 == ++v51 )
      {
LABEL_66:
        sub_ED9A60(*a2);
        break;
      }
    }
  }
  *((_DWORD *)*a2 + 30) = (*((_DWORD *)*a2 + 30) + 1) & 0x3FFFFFF | (*a2)[15] & 0xFC000000;
  v61 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v61 + 8);
  v62 = *(_DWORD *)(a3 + 8);
  v63 = *(_DWORD *)(a3 + 12);
  if ( v62 >= v63 )
  {
    v107 = 2 * v63;
    v64 = sub_186B270(8 * v107);
    v62 = *(_DWORD *)(a3 + 8);
    v108 = *(_QWORD **)a3;
    if ( v62 )
    {
      if ( v62 - 1 <= 2 || (_QWORD *)v64 == v108 + 1 )
      {
        for ( k = 0; k != v62; ++k )
          *(_QWORD *)(v64 + k * 8) = v108[k];
      }
      else
      {
        v109 = 0;
        do
        {
          *(__m128i *)(v64 + v109 * 8) = _mm_loadu_si128((const __m128i *)&v108[v109]);
          v109 += 2;
        }
        while ( v109 != 2LL * (v62 >> 1) );
        if ( (v62 & 1) != 0 )
          *(_QWORD *)(v64 + 8LL * (v62 & 0xFFFFFFFE)) = v108[v62 & 0xFFFFFFFE];
      }
    }
    if ( v108 != (_QWORD *)(a3 + 16) && v108 )
    {
      sub_186B220(v108);
      v62 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v64;
    v65 = a3;
    *(_DWORD *)(a3 + 12) = v107;
  }
  else
  {
    v64 = *(_QWORD *)a3;
    v65 = a3;
  }
  *(_QWORD *)(v64 + 8LL * v62) = v61;
  *(_DWORD *)(v65 + 8) = v62 + 1;
  if ( v21 )
    sub_186B220(v21 - 2);
  v66 = v159;
  if ( v159 )
  {
    v67 = (unsigned __int64)&v159[*((unsigned int *)v159 - 1)];
    if ( (unsigned __int64)v159 >= v67 )
      goto LABEL_81;
    do
    {
      while ( 1 )
      {
        v68 = *v66;
        if ( *v66 )
        {
          v69 = v158;
          v60 = (*(_DWORD *)(v68 + 8))-- == 1;
          if ( v60 )
            break;
        }
        if ( (unsigned __int64)++v66 >= v67 )
          goto LABEL_80;
      }
      sub_15D7BC0(v69, v68);
      ++v66;
    }
    while ( (unsigned __int64)v66 < v67 );
LABEL_80:
    v66 = v159;
    if ( v159 )
LABEL_81:
      sub_186B220(v66 - 1);
  }
  v70 = v157;
  if ( v157 )
  {
    v71 = (unsigned __int64)&v157[*((unsigned int *)v157 - 1)];
    if ( (unsigned __int64)v157 >= v71 )
      goto LABEL_90;
    do
    {
      while ( 1 )
      {
        v72 = *v70;
        if ( *v70 )
        {
          v73 = v156;
          v60 = (*(_DWORD *)(v72 + 8))-- == 1;
          if ( v60 )
            break;
        }
        if ( (unsigned __int64)++v70 >= v71 )
          goto LABEL_89;
      }
      sub_15D7BC0(v73, v72);
      ++v70;
    }
    while ( (unsigned __int64)v70 < v71 );
LABEL_89:
    v70 = v157;
    if ( v157 )
LABEL_90:
      sub_186B220(v70 - 1);
  }
  if ( *((_QWORD *)&v155 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v155 + 1) - 8LL));
  if ( (_QWORD)v155 )
    sub_186B220((void *)(v155 - 8));
  if ( v152 )
    sub_186B220(v152);
  if ( ptr )
    sub_186B220(ptr);
  if ( v137 )
  {
    if ( v136 )
    {
      v74 = (char *)v137;
      v75 = (char *)&v137[3 * v136];
      do
      {
        while ( 1 )
        {
          v76 = *((_QWORD *)v74 + 1);
          if ( !v76 )
            break;
          v74 += 24;
          sub_186B220((void *)(v76 - 8));
          if ( v74 == v75 )
            goto LABEL_104;
        }
        v74 += 24;
      }
      while ( v74 != v75 );
    }
LABEL_104:
    sub_186B220(v137);
  }
  return sub_EE4A00(v138);
}

