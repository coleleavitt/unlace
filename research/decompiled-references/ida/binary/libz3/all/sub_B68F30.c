signed int *__fastcall sub_B68F30(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  char **v6; // r14
  __int64 v7; // rdx
  char **exception; // r14
  __int64 v9; // rdx
  char **v10; // r14
  __int64 v11; // rdx
  char **v12; // r14
  __int64 v13; // rdx
  char **v14; // r14
  __int64 v15; // rdx
  unsigned int v17; // r13d
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned int v21; // r11d
  signed int *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  unsigned int v26; // r11d
  int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // edx
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  signed int **v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rsi
  int v39; // edx
  __int64 *v40; // r13
  __int64 *v41; // r10
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  __int64 *v45; // r13
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdi
  char v53; // al
  _QWORD *v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 *v58; // rdx
  unsigned int v59; // r13d
  char v60; // al
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  signed int **v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rsi
  int v69; // edx
  __int64 *v70; // r12
  __int64 *v71; // r10
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // edx
  __int64 *v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rdx
  char v78; // al
  unsigned int v79; // r13d
  unsigned int v80; // esi
  unsigned int v81; // r13d
  unsigned int v82; // esi
  __int64 v83; // rcx
  __int64 *v84; // rdi
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  unsigned int v88; // esi
  __int64 v89; // rdx
  __int64 *v90; // rdi
  __int64 v91; // rcx
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  _BYTE *v95; // rcx
  char *v96; // rax
  unsigned int v97; // edi
  size_t v98; // rsi
  unsigned int *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // rdx
  unsigned int v104; // edi
  unsigned int v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // eax
  _QWORD *v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  __int64 *v112; // rcx
  _QWORD *v113; // rdx
  unsigned int v114; // eax
  __int64 v115; // rcx
  int v116; // eax
  __int64 *v117; // rcx
  unsigned int v118; // edi
  size_t v119; // rsi
  unsigned int *v120; // rax
  __int64 v121; // rcx
  char v122; // al
  unsigned int v123; // r12d
  size_t v124; // rsi
  unsigned int *v125; // rax
  __int64 v126; // rcx
  unsigned int v127; // edi
  size_t v128; // rsi
  unsigned int *v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // rdx
  _QWORD *v133; // rax
  unsigned int v134; // r13d
  unsigned int v135; // edx
  unsigned int *v136; // rax
  __int64 v137; // rdx
  _QWORD *v138; // rdx
  _QWORD *v139; // rdx
  char v140; // al
  _QWORD *v141; // rcx
  bool v142; // [rsp+8h] [rbp-108h]
  __int64 v143; // [rsp+8h] [rbp-108h]
  unsigned int v144; // [rsp+14h] [rbp-FCh]
  unsigned int v145; // [rsp+18h] [rbp-F8h]
  _QWORD *v147; // [rsp+28h] [rbp-E8h]
  unsigned int v149; // [rsp+30h] [rbp-E0h]
  unsigned int v150; // [rsp+30h] [rbp-E0h]
  unsigned int v151; // [rsp+30h] [rbp-E0h]
  unsigned int v152; // [rsp+30h] [rbp-E0h]
  unsigned int v153; // [rsp+30h] [rbp-E0h]
  unsigned int v154; // [rsp+30h] [rbp-E0h]
  unsigned int v155; // [rsp+30h] [rbp-E0h]
  char v156; // [rsp+38h] [rbp-D8h]
  unsigned int v157; // [rsp+38h] [rbp-D8h]
  unsigned int v158; // [rsp+3Ch] [rbp-D4h] BYREF
  __int64 v159[4]; // [rsp+40h] [rbp-D0h] BYREF
  unsigned int *v160; // [rsp+60h] [rbp-B0h] BYREF
  char v161; // [rsp+68h] [rbp-A8h]
  __int64 v162; // [rsp+70h] [rbp-A0h]
  int v163; // [rsp+78h] [rbp-98h]
  __int64 v164; // [rsp+80h] [rbp-90h]
  void *ptr; // [rsp+90h] [rbp-80h] BYREF
  __int64 v166; // [rsp+98h] [rbp-78h]
  _BYTE v167[112]; // [rsp+A0h] [rbp-70h] BYREF

  v17 = a2;
  v19 = a4;
  v158 = a2;
  v147 = (_QWORD *)(a1 + 7536);
  sub_AEB510((_QWORD *)(a1 + 7536), a2, a3, a5, a4);
  ptr = v167;
  v166 = 0x1000000000LL;
  if ( a5 == 2 )
  {
    sub_B66AF0((_QWORD *)a1, a2, a3);
LABEL_46:
    *(_DWORD *)(a1 + 68) += a2;
    v145 = a5 - 2;
    switch ( a2 )
    {
      case 1u:
        goto LABEL_68;
      case 2u:
        v20 = *(_QWORD *)(a1 + 104);
        if ( *(_DWORD *)(v20 + 712) )
        {
LABEL_90:
          ++*(_DWORD *)(a1 + 56);
          if ( v145 > 1 )
          {
            v142 = 0;
            v17 = 2;
            v21 = 0;
            v156 = 0;
            goto LABEL_14;
          }
          goto LABEL_127;
        }
LABEL_93:
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 112) + 473LL) )
        {
          v79 = *a3;
          v80 = a3[1];
          if ( v145 <= 1 )
          {
            v157 = a3[1];
            v107 = sub_8E7030(a1);
            v50 = *(_QWORD *)(a1 + 8872);
            v49 = *(_DWORD *)(a1 + 9468);
            v80 = v157;
            if ( v107 > 1 || v49 || (*(_DWORD *)(v50 + 16LL * (v79 >> 1) + 12) & 0x7FFFFF) != 0 )
            {
              ++*(_DWORD *)(a1 + 56);
              v20 = *(_QWORD *)(a1 + 104);
              goto LABEL_128;
            }
          }
          else
          {
            v21 = *(_DWORD *)(a1 + 9468);
            if ( v21 )
            {
              ++*(_DWORD *)(a1 + 56);
              v17 = 2;
              v21 = 0;
              v156 = 0;
              v142 = 0;
              goto LABEL_14;
            }
            if ( *(_DWORD *)(a1 + 9464)
              || (v50 = *(_QWORD *)(a1 + 8872), (*(_DWORD *)(v50 + 16LL * (v79 >> 1) + 12) & 0x7FFFFF) != 0) )
            {
              ++*(_DWORD *)(a1 + 56);
              v17 = 2;
              v156 = 0;
              v142 = 0;
              goto LABEL_14;
            }
          }
          if ( (*(_DWORD *)(v50 + 16LL * (v80 >> 1) + 12) & 0x7FFFFF) == 0 )
          {
            v81 = *a3;
            v82 = *a3;
            v151 = a3[1];
            sub_8E8C20(a1, v82);
            sub_8E8C20(a1, v151);
            v83 = *(_QWORD *)(a1 + 8856);
            v84 = (__int64 *)(v83 + 8LL * (v81 ^ 1));
            v143 = 8LL * (v81 ^ 1);
            v85 = *v84;
            if ( !*v84 || (v86 = *(unsigned int *)(v85 - 8), (unsigned __int64)*(unsigned int *)(v85 - 12) + 4 >= v86) )
            {
              sub_9676E0(v84);
              v83 = *(_QWORD *)(a1 + 8856);
              v85 = *v84;
              LODWORD(v86) = *(_DWORD *)(*v84 - 8);
            }
            v87 = (unsigned int)(v86 - 4);
            *(_DWORD *)(v85 - 8) = v87;
            *(_DWORD *)(v85 + v87) = v151;
            v88 = v151 ^ 1;
            v89 = 8LL * (v151 ^ 1);
            v90 = (__int64 *)(v83 + v89);
            v91 = *(_QWORD *)(v83 + v89);
            if ( !v91 || (v92 = *(unsigned int *)(v91 - 8), (unsigned __int64)*(unsigned int *)(v91 - 12) + 4 >= v92) )
            {
              sub_9676E0(v90);
              v89 = 8LL * v88;
              v91 = *v90;
              LODWORD(v92) = *(_DWORD *)(*v90 - 8);
            }
            v93 = (unsigned int)(v92 - 4);
            *(_DWORD *)(v91 - 8) = v93;
            *(_DWORD *)(v91 + v93) = v81;
            v94 = *(_QWORD *)(a1 + 8848);
            v95 = (_BYTE *)(v94 + v81);
            v96 = (char *)(v151 + v94);
            if ( *v95 == 0xFF )
            {
              v160 = (unsigned int *)(v143 | 1);
              v140 = *v96;
              if ( v140 == -1 )
              {
                sub_8E8670(a1, (__int64 *)&v160, v88);
              }
              else if ( !v140 )
              {
                sub_8F28B0(a1, v151, v143 | 1, 0);
              }
            }
            else if ( *v96 == -1 )
            {
              v132 = v89 | 1;
              v160 = (unsigned int *)v132;
              if ( *v95 == 0xFF )
              {
                sub_8E8670(a1, (__int64 *)&v160, v81 ^ 1);
              }
              else if ( !*v95 )
              {
                sub_8F28B0(a1, v81, v132, 0);
              }
            }
            sub_AEBF20(v147, v81, v151, a5, v19, (__int64)&ptr);
            ++*(_DWORD *)(a1 + 64);
            goto LABEL_40;
          }
          v20 = *(_QWORD *)(a1 + 104);
        }
        goto LABEL_90;
      case 0u:
LABEL_36:
        if ( v19 )
        {
          if ( (*(_BYTE *)(v19 + 8) & 2) == 0 )
          {
            v108 = *(_QWORD **)(a1 + 8600);
            if ( v108 )
            {
              v109 = *((_DWORD *)v108 - 1);
              if ( v109 == *((_DWORD *)v108 - 2) )
              {
                v127 = (3 * v109 + 1) >> 1;
                v128 = 8 * v127 + 8;
                if ( 8 * v109 + 8 >= (unsigned int)v128 || v109 >= v127 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_14E142((__int64 *)&v160, "Overflow encountered when expanding vector", v9);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v160);
                  sub_233E40((__int64)&v160);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v129 = (unsigned int *)sub_186B300(v108 - 1, v128);
                v130 = v129[1];
                v108 = v129 + 2;
                *v129 = v127;
                *(_QWORD *)(a1 + 8600) = v129 + 2;
                LODWORD(v129) = v130;
                v112 = &v108[v130];
                v111 = (_DWORD)v129 + 1;
              }
              else
              {
                v110 = v109;
                v111 = v109 + 1;
                v112 = &v108[v110];
              }
            }
            else
            {
              v138 = (_QWORD *)sub_186B270(0x18u);
              *v138 = 2;
              v111 = 1;
              v108 = v138 + 1;
              *(_QWORD *)(a1 + 8600) = v108;
              v112 = v108;
            }
            *v112 = v19;
            *((_DWORD *)v108 - 1) = v111;
          }
          v160 = (unsigned int *)(v19 | 3);
        }
        else
        {
          v160 = (unsigned int *)(&dword_0 + 2);
        }
        sub_8E8670(a1, (__int64 *)&v160, -2);
LABEL_40:
        v22 = nullptr;
        goto LABEL_41;
    }
    ++*(_DWORD *)(a1 + 56);
    if ( v145 > 1 )
      goto LABEL_13;
    v145 = 0;
LABEL_51:
    v49 = *(_DWORD *)(a1 + 9468);
    v50 = *(_QWORD *)(a1 + 8872);
    v20 = *(_QWORD *)(a1 + 104);
    goto LABEL_52;
  }
  if ( a5 <= 2 )
  {
    if ( a5 )
      sub_B64FC0(a1, a2, a3);
    if ( *(_BYTE *)(a1 + 10320) )
      sub_B66AF0((_QWORD *)a1, a2, a3);
    if ( (unsigned __int8)sub_B64640(a1, &v158, (char *)a3, (char **)&ptr) )
    {
      if ( (_DWORD)v166 )
      {
        sub_B72610(&v160, a1, v19, (unsigned int)v166, ptr);
        v19 = sub_180C100(a1 + 8400, 40);
        v52 = v162;
        v53 = v161 & 3 | *(_BYTE *)(v19 + 8) & 0xFC;
        *(_QWORD *)(v19 + 16) = v162;
        *(_BYTE *)(v19 + 8) = v53;
        *(_QWORD *)v19 = &off_1C57678;
        *(_DWORD *)(v19 + 24) = v163;
        *(_QWORD *)(v19 + 32) = v164;
        if ( (v53 & 2) == 0 && v52 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52) )
        {
          v54 = *(_QWORD **)(a1 + 8600);
          if ( v54 )
          {
            v55 = *((_DWORD *)v54 - 1);
            if ( v55 == *((_DWORD *)v54 - 2) )
            {
              v134 = (3 * v55 + 1) >> 1;
              v135 = 8 * v134 + 8;
              if ( 8 * v55 + 8 >= v135 || v55 >= v134 )
              {
                v14 = (char **)__cxa_allocate_exception(0x28u);
                sub_14E142(v159, "Overflow encountered when expanding vector", v15);
                *v14 = (char *)off_1C63128;
                sub_2333C0(v14 + 1, v159);
                sub_233E40((__int64)v159);
                __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v136 = (unsigned int *)sub_186B300(v54 - 1, v135);
              v137 = v136[1];
              v54 = v136 + 2;
              *v136 = v134;
              *(_QWORD *)(a1 + 8600) = v136 + 2;
              LODWORD(v136) = v137;
              v58 = &v54[v137];
              v57 = (_DWORD)v136 + 1;
            }
            else
            {
              v56 = v55;
              v57 = v55 + 1;
              v58 = &v54[v56];
            }
          }
          else
          {
            v141 = (_QWORD *)sub_186B270(0x18u);
            *v141 = 2;
            v57 = 1;
            v54 = v141 + 1;
            *(_QWORD *)(a1 + 8600) = v54;
            v58 = v54;
          }
          *v58 = v19;
          *((_DWORD *)v54 - 1) = v57;
        }
        sub_B71F80(&v160);
      }
      v17 = v158;
      *(_DWORD *)(a1 + 68) += v158;
      v145 = a5 - 2;
      if ( v17 != 1 )
      {
        if ( v17 != 2 )
        {
          if ( v17 )
          {
            ++*(_DWORD *)(a1 + 56);
LABEL_13:
            v142 = 0;
            v20 = *(_QWORD *)(a1 + 104);
            v21 = 0;
            v156 = 0;
            goto LABEL_14;
          }
          goto LABEL_36;
        }
        v20 = *(_QWORD *)(a1 + 104);
        if ( *(_DWORD *)(v20 + 712) )
        {
          ++*(_DWORD *)(a1 + 56);
          v21 = 0;
          v156 = 0;
          v142 = 0;
          goto LABEL_14;
        }
        goto LABEL_93;
      }
LABEL_68:
      v59 = *a3;
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 8) & 2) == 0 )
        {
          v113 = *(_QWORD **)(a1 + 8600);
          if ( v113 )
          {
            v114 = *((_DWORD *)v113 - 1);
            if ( v114 == *((_DWORD *)v113 - 2) )
            {
              v123 = (3 * v114 + 1) >> 1;
              v124 = 8 * v123 + 8;
              if ( 8 * v114 + 8 >= (unsigned int)v124 || v114 >= v123 )
              {
                v12 = (char **)__cxa_allocate_exception(0x28u);
                sub_14E142((__int64 *)&v160, "Overflow encountered when expanding vector", v13);
                *v12 = (char *)off_1C63128;
                sub_2333C0(v12 + 1, &v160);
                sub_233E40((__int64)&v160);
                __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v125 = (unsigned int *)sub_186B300(v113 - 1, v124);
              v126 = v125[1];
              v113 = v125 + 2;
              *v125 = v123;
              *(_QWORD *)(a1 + 8600) = v125 + 2;
              LODWORD(v125) = v126;
              v117 = &v113[v126];
              v116 = (_DWORD)v125 + 1;
            }
            else
            {
              v115 = v114;
              v116 = v114 + 1;
              v117 = &v113[v115];
            }
          }
          else
          {
            v139 = (_QWORD *)sub_186B270(0x18u);
            *v139 = 2;
            v116 = 1;
            v113 = v139 + 1;
            *(_QWORD *)(a1 + 8600) = v113;
            v117 = v113;
          }
          *v117 = v19;
          *((_DWORD *)v113 - 1) = v116;
        }
        v160 = (unsigned int *)(v19 | 3);
      }
      else
      {
        v160 = (unsigned int *)(&dword_0 + 2);
      }
      v60 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v59);
      if ( v60 == -1 )
      {
        sub_8E8670(a1, (__int64 *)&v160, v59 ^ 1);
      }
      else if ( !v60 )
      {
        sub_8F28B0(a1, v59, (__int64)v160, 0);
      }
      sub_8E8C20(a1, v59);
      goto LABEL_40;
    }
LABEL_57:
    if ( v19 && (*(_BYTE *)(v19 + 8) & 2) == 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 24LL))(v19, *(_QWORD *)(a1 + 104));
      (**(void (__fastcall ***)(__int64))v19)(v19);
      sub_186B220((void *)v19);
    }
    goto LABEL_40;
  }
  if ( a5 != 3 )
    goto LABEL_46;
  sub_B66AF0((_QWORD *)a1, a2, a3);
  if ( !(unsigned __int8)sub_B649F0(a1, &v158, (__int64)a3) )
    goto LABEL_57;
  v17 = v158;
  *(_DWORD *)(a1 + 68) += v158;
  if ( v17 == 1 )
    goto LABEL_68;
  if ( v17 != 2 )
  {
    if ( !v17 )
      goto LABEL_36;
    ++*(_DWORD *)(a1 + 56);
    v145 = 1;
    goto LABEL_51;
  }
  v20 = *(_QWORD *)(a1 + 104);
  if ( !*(_DWORD *)(v20 + 712) )
  {
    v145 = 1;
    goto LABEL_93;
  }
  ++*(_DWORD *)(a1 + 56);
  v145 = 1;
LABEL_127:
  v50 = *(_QWORD *)(a1 + 8872);
  v49 = *(_DWORD *)(a1 + 9468);
LABEL_128:
  v17 = 2;
LABEL_52:
  v51 = 0;
  v21 = 0;
  do
  {
    if ( v21 < (*(_DWORD *)(v50 + 16LL * (a3[v51] >> 1) + 12) & 0x7FFFFFu) )
      v21 = *(_DWORD *)(v50 + 16LL * (a3[v51] >> 1) + 12) & 0x7FFFFF;
    ++v51;
  }
  while ( (unsigned int)v51 < v17 );
  v142 = v49 < v21;
  v156 = v49 < v21;
LABEL_14:
  v144 = v21;
  v22 = (signed int *)sub_AA3C00(v20, v17, a3, a5, v19, a6, v156, *(_QWORD *)(a1 + 8840));
  sub_AECC60((__int64)v147, (__int64)v22, (__int64)&ptr, v23, v24, v25);
  if ( v145 > 1 )
  {
    v61 = *(_QWORD **)(a1 + 8888);
    if ( v61 )
    {
      v62 = *((_DWORD *)v61 - 1);
      if ( v62 == *((_DWORD *)v61 - 2) )
      {
        v118 = (3 * v62 + 1) >> 1;
        v119 = 8 * v118 + 8;
        if ( 8 * v62 + 8 >= (unsigned int)v119 || v62 >= v118 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142((__int64 *)&v160, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, &v160);
          sub_233E40((__int64)&v160);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v120 = (unsigned int *)sub_186B300(v61 - 1, v119);
        v121 = v120[1];
        v61 = v120 + 2;
        *v120 = v118;
        *(_QWORD *)(a1 + 8888) = v120 + 2;
        LODWORD(v120) = v121;
        v65 = (signed int **)&v61[v121];
        v64 = (_DWORD)v120 + 1;
      }
      else
      {
        v63 = v62;
        v64 = v62 + 1;
        v65 = (signed int **)&v61[v63];
      }
    }
    else
    {
      v133 = (_QWORD *)sub_186B270(0x18u);
      v61 = v133 + 1;
      *v133 = 2;
      v64 = 1;
      *(_QWORD *)(a1 + 8888) = v61;
      v65 = (signed int **)v61;
    }
    *v65 = v22;
    v66 = *(_QWORD *)(a1 + 8856);
    *((_DWORD *)v61 - 1) = v64;
    v67 = *(_QWORD *)(v66 + 8LL * (v22[2] ^ 1u));
    if ( !v67
      || (v68 = *(unsigned int *)(v67 - 12),
          v69 = *(_DWORD *)(v67 - 12),
          v68 + 8 >= (unsigned __int64)*(unsigned int *)(v67 - 8)) )
    {
      v70 = (__int64 *)(v66 + 8LL * (v22[2] ^ 1u));
      sub_9676E0(v70);
      v67 = *v70;
      v66 = *(_QWORD *)(a1 + 8856);
      v68 = *(unsigned int *)(*v70 - 12);
      v69 = *(_DWORD *)(*v70 - 12);
    }
    *(_QWORD *)(v67 + v68) = v22;
    *(_DWORD *)(v67 - 12) = v69 + 8;
    v71 = (__int64 *)(v66 + 8LL * (v22[3] ^ 1u));
    v72 = *v71;
    if ( !*v71
      || (v73 = *(unsigned int *)(v72 - 12),
          v74 = *(_DWORD *)(v72 - 12),
          v73 + 8 >= (unsigned __int64)*(unsigned int *)(v72 - 8)) )
    {
      v75 = v71;
      sub_9676E0(v71);
      v72 = *v75;
      v73 = *(unsigned int *)(*v75 - 12);
      v74 = *(_DWORD *)(*v75 - 12);
    }
    *(_QWORD *)(v72 + v73) = v22;
    v76 = *(_QWORD *)(a1 + 8848);
    *(_DWORD *)(v72 - 12) = v74 + 8;
    v77 = (unsigned int)v22[2];
    if ( *(_BYTE *)(v76 + v77) == 0xFF )
    {
      v160 = (unsigned int *)v22;
      sub_8E8670(a1, (__int64 *)&v160, -2);
    }
    else if ( *(_BYTE *)(v76 + (unsigned int)v22[3]) == 0xFF )
    {
      v160 = (unsigned int *)v22;
      v78 = *(_BYTE *)(v76 + v77);
      if ( v78 == -1 )
      {
        sub_8E8670(a1, (__int64 *)&v160, v77 ^ 1);
      }
      else if ( !v78 )
      {
        sub_8F28B0(a1, v22[2], (__int64)v22, 0);
      }
    }
    goto LABEL_30;
  }
  v26 = v144;
  v22[(v22[1] & 0xFFFFFF) + 2] = 1;
  if ( a5 != 2 )
  {
    v27 = sub_B64E20(a1, v22, 0);
    v28 = v22[2];
    v22[2] = v22[v27 + 2];
    v22[v27 + 2] = v28;
    v29 = sub_B64E20(a1, v22, 1);
    v30 = v22[3];
    v26 = v144;
    v22[3] = v22[v29 + 2];
    v22[v29 + 2] = v30;
    goto LABEL_17;
  }
  v101 = (unsigned int)*v22;
  v102 = 0xFFFFFFFFLL;
  if ( (int)v101 > 1 )
  {
    v103 = 1;
    v104 = -1;
    v102 = 0xFFFFFFFFLL;
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)v22[v103 + 2]) == 0xFF )
      {
        v105 = *(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)v22[v103 + 2] >> 1) + 8) & 0xFFFFFF;
        if ( (_DWORD)v102 == -1 )
        {
LABEL_119:
          v102 = (unsigned int)v103;
          v104 = v105;
          goto LABEL_116;
        }
      }
      else
      {
        v105 = *(_DWORD *)(a1 + 9464);
        if ( (_DWORD)v102 == -1 )
          goto LABEL_119;
      }
      if ( v104 < v105 )
        goto LABEL_119;
LABEL_116:
      ++v103;
    }
    while ( v103 != v101 );
  }
  v106 = v22[3];
  v22[3] = v22[v102 + 2];
  v22[v102 + 2] = v106;
LABEL_17:
  v31 = *(_QWORD **)(a1 + 8896);
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v97 = (3 * v32 + 1) >> 1;
      v98 = 8 * v97 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v98 || v32 >= v97 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_14E142((__int64 *)&v160, "Overflow encountered when expanding vector", v11);
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, &v160);
        sub_233E40((__int64)&v160);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v152 = v26;
      v99 = (unsigned int *)sub_186B300(v31 - 1, v98);
      v100 = v99[1];
      v31 = v99 + 2;
      *v99 = v97;
      *(_QWORD *)(a1 + 8896) = v99 + 2;
      v26 = v152;
      LODWORD(v99) = v100;
      v35 = (signed int **)&v31[v100];
      v34 = (_DWORD)v99 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = (signed int **)&v31[v33];
    }
  }
  else
  {
    v155 = v26;
    v131 = (_QWORD *)sub_186B270(0x18u);
    v31 = v131 + 1;
    *v131 = 2;
    v26 = v155;
    v34 = 1;
    *(_QWORD *)(a1 + 8896) = v31;
    v35 = (signed int **)v31;
  }
  *v35 = v22;
  v36 = *(_QWORD *)(a1 + 8856);
  *((_DWORD *)v31 - 1) = v34;
  v37 = *(_QWORD *)(v36 + 8LL * (v22[2] ^ 1u));
  if ( !v37
    || (v38 = *(unsigned int *)(v37 - 12),
        v39 = *(_DWORD *)(v37 - 12),
        v38 + 8 >= (unsigned __int64)*(unsigned int *)(v37 - 8)) )
  {
    v149 = v26;
    v40 = (__int64 *)(v36 + 8LL * (v22[2] ^ 1u));
    sub_9676E0(v40);
    v37 = *v40;
    v36 = *(_QWORD *)(a1 + 8856);
    v26 = v149;
    v38 = *(unsigned int *)(*v40 - 12);
    v39 = *(_DWORD *)(*v40 - 12);
  }
  *(_QWORD *)(v37 + v38) = v22;
  *(_DWORD *)(v37 - 12) = v39 + 8;
  v41 = (__int64 *)(v36 + 8LL * (v22[3] ^ 1u));
  v42 = *v41;
  if ( !*v41
    || (v43 = *(unsigned int *)(v42 - 12),
        v44 = *(_DWORD *)(v42 - 12),
        v43 + 8 >= (unsigned __int64)*(unsigned int *)(v42 - 8)) )
  {
    v150 = v26;
    v45 = v41;
    sub_9676E0(v41);
    v42 = *v45;
    v26 = v150;
    v43 = *(unsigned int *)(*v45 - 12);
    v44 = *(_DWORD *)(*v45 - 12);
  }
  *(_QWORD *)(v42 + v43) = v22;
  v46 = *(_QWORD *)(a1 + 8848);
  *(_DWORD *)(v42 - 12) = v44 + 8;
  v47 = (unsigned int)v22[2];
  if ( *(_BYTE *)(v46 + v47) != 0xFF )
  {
    if ( *(_BYTE *)(v46 + (unsigned int)v22[3]) != 0xFF )
      goto LABEL_28;
    v160 = (unsigned int *)v22;
    v122 = *(_BYTE *)(v46 + v47);
    if ( v122 == -1 )
    {
      v154 = v26;
      sub_8E8670(a1, (__int64 *)&v160, v47 ^ 1);
    }
    else
    {
      if ( v122 )
        goto LABEL_151;
      v154 = v26;
      sub_8F28B0(a1, v22[2], (__int64)v22, 0);
    }
    v26 = v154;
LABEL_151:
    if ( a5 != 3 )
      goto LABEL_28;
    goto LABEL_145;
  }
  v153 = v26;
  v160 = (unsigned int *)v22;
  sub_8E8670(a1, (__int64 *)&v160, -2);
  v26 = v153;
  if ( a5 != 3 )
    goto LABEL_28;
LABEL_145:
  if ( *(_DWORD *)(a1 + 9468) < *(_DWORD *)(a1 + 9464) )
  {
    v26 = *(_DWORD *)(a1 + 9464);
    goto LABEL_29;
  }
LABEL_28:
  if ( v142 )
LABEL_29:
    sub_B664E0(a1, (__int64)v22, v26, v156);
LABEL_30:
  sub_8E8B50(a1, (unsigned int *)v22);
LABEL_41:
  if ( ptr != v167 && ptr )
    sub_186B220(ptr);
  return v22;
}

