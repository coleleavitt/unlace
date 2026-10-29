__int64 __fastcall sub_5CB220(_QWORD *a1, __int64 a2, __int64 *a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **v6; // rbx
  char **v7; // r14
  char **exception; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // rdi
  int v22; // eax
  unsigned __int64 *v23; // rdi
  _QWORD *v24; // rdx
  bool v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  bool *v29; // rsi
  unsigned __int64 v30; // r13
  __int64 *v31; // rsi
  unsigned int v32; // eax
  unsigned int v33; // r8d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdi
  unsigned int v37; // r9d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rsi
  unsigned int v41; // r8d
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  char v45; // r15
  __int64 v46; // rdi
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 *v54; // r15
  __int64 v55; // rsi
  __int64 v56; // rax
  char v57; // al
  __int64 v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rdi
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // r12
  _QWORD *v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  unsigned int v69; // ecx
  __int64 v70; // rax
  int v71; // ecx
  unsigned __int64 *v72; // rax
  unsigned int v73; // r8d
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned int v76; // r8d
  size_t v77; // rsi
  _DWORD *v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  __int64 *v81; // r15
  __int64 *v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rdi
  __int64 v85; // rax
  unsigned int v86; // r15d
  __int64 v87; // rcx
  __int64 *v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rsi
  int v91; // eax
  __int64 *v92; // rsi
  _BYTE *v93; // r8
  unsigned int v94; // eax
  __int64 v95; // rdx
  int v96; // eax
  _BYTE *v97; // rdx
  __int64 v98; // rcx
  int v99; // edx
  __int64 v100; // r12
  __int64 v101; // rsi
  __int64 v102; // rax
  unsigned int v103; // r8d
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 v106; // rsi
  unsigned int v107; // edx
  size_t v108; // rsi
  __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rax
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rbx
  _QWORD *v118; // rdx
  _QWORD *v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rsi
  __int64 v122; // [rsp+0h] [rbp-D0h]
  __int64 v123; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v124; // [rsp+10h] [rbp-C0h]
  unsigned __int64 v125; // [rsp+18h] [rbp-B8h]
  __int64 *v126; // [rsp+20h] [rbp-B0h]
  __int64 v127; // [rsp+28h] [rbp-A8h]
  __int64 v128; // [rsp+30h] [rbp-A0h]
  int v129; // [rsp+38h] [rbp-98h]
  unsigned int v130; // [rsp+3Ch] [rbp-94h]
  unsigned int v131; // [rsp+3Ch] [rbp-94h]
  unsigned int v132; // [rsp+40h] [rbp-90h]
  unsigned int v133; // [rsp+40h] [rbp-90h]
  __int64 v134; // [rsp+40h] [rbp-90h]
  unsigned int v135; // [rsp+48h] [rbp-88h]
  __int64 *v136; // [rsp+48h] [rbp-88h]
  int v137; // [rsp+48h] [rbp-88h]
  int v138; // [rsp+48h] [rbp-88h]
  unsigned __int64 v139; // [rsp+48h] [rbp-88h]
  int v140; // [rsp+48h] [rbp-88h]
  int v141; // [rsp+48h] [rbp-88h]
  int v142; // [rsp+50h] [rbp-80h]
  __int64 v143; // [rsp+58h] [rbp-78h]
  __int64 v144; // [rsp+60h] [rbp-70h] BYREF
  __int64 v145; // [rsp+68h] [rbp-68h]
  __int64 v146; // [rsp+70h] [rbp-60h] BYREF
  __int64 v147; // [rsp+78h] [rbp-58h]
  __int64 v148; // [rsp+80h] [rbp-50h] BYREF
  __int64 v149; // [rsp+88h] [rbp-48h]

  v10 = a2;
  v126 = a3;
  v122 = a1[4] + 656LL;
  if ( a2 )
    sub_62A000(a1[4] + 656LL, a2);
  HIBYTE(v129) = sub_62FDE0(v122);
  if ( !HIBYTE(v129) )
  {
    while ( 1 )
    {
      v127 = v10;
      v135 = *(_DWORD *)(v10 + 68);
      v130 = *(_DWORD *)(v10 + 56);
      if ( v135 == v130 )
      {
        v120 = *v126;
        if ( v10 != *v126 )
        {
          if ( v120 )
            sub_62A410(v126[1], v120);
          *v126 = v10;
          sub_62A000(v126[1], v10);
        }
        HIBYTE(v129) = 1;
        goto LABEL_144;
      }
      v123 = a1[3];
      v11 = *(_QWORD *)(v10 + 40);
      v128 = v11;
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      v12 = (__int64 *)a1[45];
      v13 = v12;
      if ( v12 )
      {
        v14 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
        if ( (unsigned __int64)v12 >= v14 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v15 = *v13;
            if ( *v13 )
            {
              v16 = a1[44];
              v17 = (*(_DWORD *)(v15 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( (unsigned __int64)++v13 >= v14 )
              goto LABEL_14;
          }
          sub_15D7BC0(v16, v15);
          ++v13;
        }
        while ( (unsigned __int64)v13 < v14 );
LABEL_14:
        v12 = (__int64 *)a1[45];
        if ( v12 )
LABEL_15:
          *((_DWORD *)v12 - 1) = 0;
      }
      v18 = a1[50];
      if ( v18 )
        *(_DWORD *)(v18 - 4) = 0;
      if ( v135 )
      {
        v19 = v10;
        v20 = v10 + 8LL * v135;
        while ( 1 )
        {
          v30 = *(_QWORD *)(v19 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v19 + 80) > 7u )
            ++*(_DWORD *)(v30 + 8);
          v31 = v12;
          if ( v12 )
          {
            v32 = *((_DWORD *)v12 - 1);
            if ( v32 == *((_DWORD *)v12 - 2) )
            {
              v33 = (3 * v32 + 1) >> 1;
              v34 = 8 * v33 + 8;
              if ( 8 * v32 + 8 >= (unsigned int)v34 || v32 >= v33 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v148, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v148);
                sub_233E40((__int64)&v148);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v132 = (3 * v32 + 1) >> 1;
              v35 = (unsigned int *)sub_186B300(v12 - 1, v34);
              v36 = v35[1];
              v31 = (__int64 *)(v35 + 2);
              a1[45] = v35 + 2;
              *v35 = v132;
              LODWORD(v35) = v36;
              v23 = (unsigned __int64 *)&v31[v36];
              v22 = (_DWORD)v35 + 1;
            }
            else
            {
              v21 = v32;
              v22 = v32 + 1;
              v23 = (unsigned __int64 *)&v31[v21];
            }
          }
          else
          {
            v62 = (_QWORD *)sub_186B270(0x18u);
            v31 = v62 + 1;
            a1[45] = v62 + 1;
            v23 = v62 + 1;
            *v62 = 2;
            v22 = 1;
          }
          *v23 = v30;
          v24 = (_QWORD *)a1[50];
          *((_DWORD *)v31 - 1) = v22;
          v25 = (*(_QWORD *)(v19 + 80) & 7LL) == 1;
          if ( !v24 )
            break;
          v26 = *((_DWORD *)v24 - 1);
          if ( v26 != *((_DWORD *)v24 - 2) )
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = (bool *)v24 + v27;
            goto LABEL_24;
          }
          v37 = (3 * v26 + 1) >> 1;
          v38 = v37 + 8;
          if ( v26 + 8 >= (unsigned int)v38 || v26 >= v37 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v148, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v148);
            sub_233E40((__int64)&v148);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v133 = (3 * v26 + 1) >> 1;
          v39 = (unsigned int *)sub_186B300(v24 - 1, v38);
          v40 = v39[1];
          v19 += 8;
          a1[50] = v39 + 2;
          *v39 = v133;
          *((_BYTE *)v39 + v40 + 8) = v25;
          v39[1] = v40 + 1;
          if ( v19 == v20 )
            goto LABEL_36;
LABEL_25:
          v12 = (__int64 *)a1[45];
        }
        v61 = (_QWORD *)sub_186B270(0xAu);
        v24 = v61 + 1;
        a1[50] = v61 + 1;
        v29 = (bool *)(v61 + 1);
        *v61 = 2;
        v28 = 1;
LABEL_24:
        v19 += 8;
        *v29 = v25;
        *((_DWORD *)v24 - 1) = v28;
        if ( v19 == v20 )
          goto LABEL_36;
        goto LABEL_25;
      }
LABEL_36:
      v134 = a1[3];
      v41 = v135 + 1;
      if ( v135 + 1 == v130 )
      {
        v43 = *(_QWORD *)(v10 + 8LL * v135 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v10 + 8LL * v135 + 80) > 7u )
        {
          v42 = *(_QWORD *)(v10 + 8LL * v135 + 80) & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v42 + 8);
        }
        v44 = v134;
        v45 = 0;
      }
      else
      {
        v63 = (_QWORD *)a1[47];
        if ( !v63 )
          goto LABEL_130;
        v64 = &v63[*((unsigned int *)v63 - 1)];
        if ( v63 >= v64 )
          goto LABEL_74;
        do
        {
          while ( 1 )
          {
            v65 = *v63;
            if ( *v63 )
            {
              v66 = a1[46];
              v17 = (*(_DWORD *)(v65 + 8))-- == 1;
              if ( v17 )
                break;
            }
            if ( ++v63 >= v64 )
              goto LABEL_73;
          }
          LODWORD(v124) = v41;
          v125 = (unsigned __int64)v64;
          sub_15D7BC0(v66, v65);
          v64 = (_QWORD *)v125;
          ++v63;
          v41 = v124;
        }
        while ( (unsigned __int64)v63 < v125 );
LABEL_73:
        v63 = (_QWORD *)a1[47];
        if ( v63 )
        {
LABEL_74:
          *((_DWORD *)v63 - 1) = 0;
          if ( v135 < v130 )
          {
            v67 = *(_QWORD *)(v10 + 8LL * v135 + 80);
            if ( v67 <= 7 )
            {
              v68 = 0;
            }
            else
            {
              v68 = v67 & 0xFFFFFFFFFFFFFFF8LL;
              ++*(_DWORD *)(v68 + 8);
            }
LABEL_77:
            v69 = *((_DWORD *)v63 - 1);
            if ( v69 == *((_DWORD *)v63 - 2) )
              goto LABEL_82;
LABEL_78:
            v70 = v69;
            v71 = v69 + 1;
            v72 = &v63[v70];
            v73 = v135 + 1;
            goto LABEL_79;
          }
          v110 = a1[3];
        }
        else
        {
LABEL_130:
          if ( v135 >= v130 )
          {
            v110 = a1[3];
          }
          else
          {
            v112 = *(_QWORD *)(v10 + 8LL * v135 + 80);
            if ( v112 <= 7 )
            {
              v113 = 0;
            }
            else
            {
              v113 = v112 & 0xFFFFFFFFFFFFFFF8LL;
              ++*(_DWORD *)(v113 + 8);
            }
            LODWORD(v125) = v41;
            v139 = v113;
            v114 = (_QWORD *)sub_186B270(0x18u);
            v63 = v114 + 1;
            *v114 = 2;
            v68 = v139;
            v71 = 1;
            a1[47] = v114 + 1;
            v73 = v125;
            v72 = v114 + 1;
LABEL_79:
            while ( 1 )
            {
              *v72 = v68;
              *((_DWORD *)v63 - 1) = v71;
              v135 = v73;
              if ( v73 >= v130 )
                break;
              v74 = *(_QWORD *)(v10 + 8LL * v73 + 80);
              v68 = 0;
              if ( v74 <= 7 )
                goto LABEL_77;
              v75 = v74 & 0xFFFFFFFFFFFFFFF8LL;
              ++*(_DWORD *)(v75 + 8);
              v68 = v75;
              v69 = *((_DWORD *)v63 - 1);
              if ( v69 != *((_DWORD *)v63 - 2) )
                goto LABEL_78;
LABEL_82:
              v76 = (3 * v69 + 1) >> 1;
              v77 = 8 * v76 + 8;
              if ( 8 * v69 + 8 >= (unsigned int)v77 || v69 >= v76 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v148, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v148);
                sub_233E40((__int64)&v148);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v124 = v68;
              LODWORD(v125) = (3 * v69 + 1) >> 1;
              v78 = (_DWORD *)sub_186B300(v63 - 1, v77);
              v63 = v78 + 2;
              a1[47] = v78 + 2;
              *v78 = v125;
              v79 = (unsigned int)v78[1];
              v73 = v135 + 1;
              v68 = v124;
              v80 = v79;
              v72 = &v63[v79];
              v71 = v80 + 1;
            }
            v110 = a1[3];
          }
        }
        v111 = sub_15E1AF0(v110);
        v43 = v111;
        if ( v111 )
          ++*(_DWORD *)(v111 + 8);
        v44 = a1[3];
        v45 = 1;
      }
      v46 = a1[5];
      v145 = v44;
      v144 = 0;
      v148 = 0;
      v149 = v44;
      sub_14B9BF0(v46, v43, &v148);
      v136 = &v144;
      sub_5D40E0(a1[52], v148, &v144, a1[52] + 496LL);
      sub_14B9BF0(a1[5], v144, &v144);
      v50 = v148;
      if ( v148 )
      {
        v51 = v149;
        v17 = (*(_DWORD *)(v148 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v51, v50);
      }
      v52 = v144;
      if ( *(_QWORD *)(a1[3] + 864LL) == v144 )
      {
LABEL_137:
        if ( v52 && (v115 = v145, v17 = *(_DWORD *)(v52 + 8) == 1, --*(_DWORD *)(v52 + 8), v17) )
        {
          sub_15D7BC0(v115, v52);
          if ( !v43 )
            goto LABEL_141;
        }
        else if ( !v43 )
        {
          goto LABEL_141;
        }
        v140 = *(_DWORD *)(v43 + 8);
        *(_DWORD *)(v43 + 8) = v140 - 1;
        if ( v140 == 1 )
        {
          sub_15D7BC0(v134, v43);
          v116 = v128;
          if ( v128 )
          {
LABEL_142:
            v141 = *(_DWORD *)(v116 + 8);
            *(_DWORD *)(v116 + 8) = v141 - 1;
            if ( v141 == 1 )
              sub_15D7BC0(v123, v116);
          }
LABEL_144:
          sub_62A410(v122, v127);
          return HIBYTE(v129);
        }
LABEL_141:
        v116 = v128;
        if ( v128 )
          goto LABEL_142;
        goto LABEL_144;
      }
      if ( (unsigned __int8)v45 | (v144 != v43) )
        break;
      v53 = *v126;
      if ( *v126 != v10 )
      {
        if ( v53 )
          sub_62A410(v126[1], v53);
        v54 = v126;
        *v126 = v10;
        sub_62A000(v126[1], v10);
LABEL_49:
        v55 = *v54;
        goto LABEL_50;
      }
      LODWORD(v55) = v10;
LABEL_50:
      v56 = a1[4];
      v146 = 0;
      v147 = v56 + 656;
      v57 = sub_5C99E0(
              (_DWORD)a1,
              v55,
              (unsigned int)&v146,
              v47,
              v48,
              v49,
              v122,
              v123,
              v124,
              v125,
              (__int64)v126,
              v10,
              v128,
              v129,
              v134,
              (_DWORD)v136,
              v142,
              v143,
              v144);
      v10 = v146;
      v58 = v147;
      if ( !v57 )
      {
        if ( v146 )
          sub_62A410(v147, v146);
        HIBYTE(v129) = 1;
        v52 = v144;
        goto LABEL_137;
      }
      if ( v146 == v127 )
        goto LABEL_54;
      sub_62A410(v122, v127);
      if ( v10 )
      {
        sub_62A000(v122, v10);
LABEL_54:
        sub_62A410(v58, v10);
      }
      v59 = v144;
      if ( v144 )
      {
        v60 = v145;
        v17 = (*(_DWORD *)(v144 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v60, v59);
      }
      if ( v43 )
      {
        v137 = *(_DWORD *)(v43 + 8);
        *(_DWORD *)(v43 + 8) = v137 - 1;
        if ( v137 == 1 )
          sub_15D7BC0(v134, v43);
      }
      if ( v128 )
      {
        v138 = *(_DWORD *)(v128 + 8);
        *(_DWORD *)(v128 + 8) = v138 - 1;
        if ( v138 == 1 )
          sub_15D7BC0(v123, v128);
      }
    }
    v81 = (__int64 *)a1[49];
    if ( v81 )
    {
      v82 = &v81[*((unsigned int *)v81 - 1)];
      if ( v81 >= v82 )
        goto LABEL_93;
      do
      {
        while ( 1 )
        {
          v83 = *v81;
          if ( *v81 )
          {
            v84 = a1[48];
            v17 = (*(_DWORD *)(v83 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v81 >= v82 )
            goto LABEL_92;
        }
        v136 = v82;
        sub_15D7BC0(v84, v83);
        v82 = v136;
        ++v81;
      }
      while ( v81 < v136 );
LABEL_92:
      v81 = (__int64 *)a1[49];
      v52 = v144;
      if ( v81 )
LABEL_93:
        *((_DWORD *)v81 - 1) = 0;
    }
    sub_15EEF60(v52);
    v85 = a1[49];
    v86 = 0;
    if ( !v85 )
    {
LABEL_129:
      v93 = (_BYTE *)a1[50];
LABEL_104:
      v98 = a1[45];
      if ( v98 )
        v99 = *(_DWORD *)(v98 - 4);
      else
        v99 = 0;
      v100 = sub_62C680(*((_DWORD *)a1 + 8) + 656, v128, v99, v98, (_DWORD)v93, (int)v10 + 72, 1);
      if ( v100 )
        sub_62A000(v126[1], v100);
      if ( *v126 )
        sub_62A410(v126[1], *v126);
      v54 = v126;
      v101 = a1[4];
      *v126 = v100;
      sub_629AF0(v100, v101);
      goto LABEL_49;
    }
    while ( 1 )
    {
      if ( v86 >= *(_DWORD *)(v85 - 4) )
        goto LABEL_129;
      v87 = *(_QWORD *)(v85 + 8LL * v86);
      if ( *(_WORD *)(v87 + 4) )
      {
        v102 = sub_15E1B70(a1[3]);
        v87 = v102;
        if ( v102 )
          ++*(_DWORD *)(v102 + 8);
        v88 = (__int64 *)a1[45];
        if ( !v88 )
        {
LABEL_146:
          v136 = (__int64 *)v87;
          v118 = (_QWORD *)sub_186B270(0x18u);
          *v118 = 2;
          v87 = (__int64)v136;
          v91 = 1;
          v88 = v118 + 1;
          a1[45] = v88;
          v92 = v88;
          goto LABEL_100;
        }
        v89 = *((_DWORD *)v88 - 1);
        if ( v89 == *((_DWORD *)v88 - 2) )
        {
          v103 = (3 * v89 + 1) >> 1;
          v104 = 8 * v103 + 8;
          if ( 8 * v89 + 8 >= (unsigned int)v104 || v89 >= v103 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v148, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v148);
            sub_233E40((__int64)&v148);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_117;
        }
      }
      else
      {
        v88 = (__int64 *)a1[45];
        ++*(_DWORD *)(v87 + 8);
        if ( !v88 )
          goto LABEL_146;
        v89 = *((_DWORD *)v88 - 1);
        if ( v89 == *((_DWORD *)v88 - 2) )
        {
          v103 = (3 * v89 + 1) >> 1;
          v104 = 8 * v103 + 8;
          if ( 8 * v89 + 8 >= (unsigned int)v104 || v89 >= v103 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v148, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v148);
            sub_233E40((__int64)&v148);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_117:
          v131 = v103;
          v136 = (__int64 *)v87;
          v105 = (unsigned int *)sub_186B300(v88 - 1, v104);
          v106 = v105[1];
          v88 = (__int64 *)(v105 + 2);
          a1[45] = v105 + 2;
          v87 = (__int64)v136;
          *v105 = v131;
          LODWORD(v105) = v106;
          v92 = &v88[v106];
          v91 = (_DWORD)v105 + 1;
          goto LABEL_100;
        }
      }
      v90 = v89;
      v91 = v89 + 1;
      v92 = &v88[v90];
LABEL_100:
      v93 = (_BYTE *)a1[50];
      *v92 = v87;
      *((_DWORD *)v88 - 1) = v91;
      if ( v93 )
      {
        v94 = *((_DWORD *)v93 - 1);
        if ( v94 == *((_DWORD *)v93 - 2) )
        {
          v107 = (3 * v94 + 1) >> 1;
          v108 = v107 + 8;
          if ( v94 + 8 >= (unsigned int)v108 || v94 >= v107 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v148, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v148);
            sub_233E40((__int64)&v148);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v136) = (3 * v94 + 1) >> 1;
          v109 = sub_186B300(v93 - 8, v108);
          v93 = (_BYTE *)(v109 + 8);
          a1[50] = v109 + 8;
          *(_DWORD *)v109 = (_DWORD)v136;
          LODWORD(v109) = *(_DWORD *)(v109 + 4);
          v97 = &v93[(unsigned int)v109];
          v96 = v109 + 1;
        }
        else
        {
          v95 = v94;
          v96 = v94 + 1;
          v97 = &v93[v95];
        }
      }
      else
      {
        v119 = (_QWORD *)sub_186B270(0xAu);
        v93 = v119 + 1;
        *v119 = 2;
        v96 = 1;
        a1[50] = v93;
        v97 = v93;
      }
      *v97 = 0;
      ++v86;
      *((_DWORD *)v93 - 1) = v96;
      v85 = a1[49];
      if ( !v85 )
        goto LABEL_104;
    }
  }
  v121 = *v126;
  v127 = *v126;
  if ( v10 == *v126 )
  {
    if ( !v127 )
      return HIBYTE(v129);
    goto LABEL_144;
  }
  if ( v121 )
    sub_62A410(v126[1], v121);
  *v126 = v10;
  if ( v10 )
  {
    sub_62A000(v126[1], v10);
    sub_62A410(v122, v10);
  }
  return HIBYTE(v129);
}

