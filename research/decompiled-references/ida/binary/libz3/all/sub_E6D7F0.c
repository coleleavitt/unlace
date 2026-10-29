__int64 __fastcall sub_E6D7F0(_QWORD *a1, unsigned int a2, __int64 a3, char a4, _DWORD *a5, unsigned int *a6)
{
  __int64 v8; // rax
  _DWORD *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebp
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // al
  _QWORD *v19; // r13
  __int64 v20; // rsi
  unsigned int v21; // r14d
  __int64 v22; // rsi
  char v23; // al
  __int64 *v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // rbp
  __int64 v29; // rax
  unsigned int v30; // edx
  _QWORD *v31; // rcx
  unsigned int v32; // r12d
  __int64 v33; // rdx
  unsigned int v34; // ebp
  _QWORD *v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // r15
  __int64 v38; // rcx
  unsigned int *v39; // rcx
  __int64 v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // edx
  unsigned int v44; // r15d
  size_t v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // edx
  size_t v53; // rsi
  unsigned int v54; // r15d
  unsigned int *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r15
  unsigned int v58; // edx
  size_t v59; // rsi
  unsigned int *v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  _DWORD *v65; // rdx
  char v66; // al
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rdi
  _DWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rbp
  char v73; // al
  _DWORD *v74; // rax
  __int64 v75; // rdx
  _DWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdi
  _DWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbp
  char **exception; // rbx
  char **v90; // rbp
  char **v91; // rbp
  char **v92; // rbp
  __int64 v93; // [rsp+8h] [rbp-1D0h]
  __int64 v94; // [rsp+10h] [rbp-1C8h]
  __int64 v95; // [rsp+10h] [rbp-1C8h]
  __int64 v96; // [rsp+10h] [rbp-1C8h]
  _QWORD *v97; // [rsp+18h] [rbp-1C0h]
  unsigned int v98; // [rsp+28h] [rbp-1B0h]
  unsigned int v99; // [rsp+28h] [rbp-1B0h]
  _QWORD *v100; // [rsp+28h] [rbp-1B0h]
  _QWORD *v101; // [rsp+28h] [rbp-1B0h]
  unsigned int v102; // [rsp+28h] [rbp-1B0h]
  __int64 v103; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 *v104; // [rsp+38h] [rbp-1A0h]
  __int64 v105; // [rsp+40h] [rbp-198h]
  __int64 v106; // [rsp+48h] [rbp-190h]
  char v107; // [rsp+57h] [rbp-181h]
  __int64 v108; // [rsp+58h] [rbp-180h]
  unsigned int **v109; // [rsp+60h] [rbp-178h]
  _DWORD *v110; // [rsp+68h] [rbp-170h]
  unsigned int *v111; // [rsp+70h] [rbp-168h]
  _QWORD *v112; // [rsp+78h] [rbp-160h]
  _QWORD *v113; // [rsp+80h] [rbp-158h] BYREF
  __int64 v114; // [rsp+88h] [rbp-150h] BYREF
  __int64 v115; // [rsp+90h] [rbp-148h] BYREF
  _QWORD *v116; // [rsp+98h] [rbp-140h]
  __int64 v117; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v118; // [rsp+A8h] [rbp-130h]
  __int64 v119; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-120h]
  int v121[4]; // [rsp+C0h] [rbp-118h] BYREF
  int v122; // [rsp+DCh] [rbp-FCh]
  __int128 v123; // [rsp+E8h] [rbp-F0h]
  __int128 v124; // [rsp+F8h] [rbp-E0h]
  char *v125; // [rsp+108h] [rbp-D0h]
  __int64 v126; // [rsp+110h] [rbp-C8h]
  char v127; // [rsp+118h] [rbp-C0h] BYREF

  v8 = a1[84];
  *a5 = 0;
  v106 = a3;
  v110 = a5;
  v111 = a6;
  v107 = a4;
  *a6 = 0;
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = (_DWORD *)a1[85];
  result = a1[86];
  v11 = a1[87];
  if ( v9 )
  {
    *(v9 - 1) = 0;
    if ( result )
    {
      *(_DWORD *)(result - 4) = 0;
      if ( !v11 )
        goto LABEL_7;
    }
    else if ( !v11 )
    {
LABEL_7:
      if ( !a2 )
        return result;
      goto LABEL_12;
    }
    *(_DWORD *)(v11 - 4) = 0;
    goto LABEL_7;
  }
  if ( result )
  {
    *(_DWORD *)(result - 4) = 0;
    if ( !v11 )
      goto LABEL_120;
    goto LABEL_119;
  }
  if ( v11 )
LABEL_119:
    *(_DWORD *)(v11 - 4) = 0;
LABEL_120:
  if ( a2 )
  {
    v86 = (_QWORD *)sub_186B270(0x10u);
    v9 = v86 + 1;
    *v86 = 2;
    a1[85] = v86 + 1;
LABEL_12:
    while ( 1 )
    {
      v15 = *(v9 - 2);
      if ( v15 >= a2 )
        break;
      v12 = (3 * v15 + 1) >> 1;
      v13 = 4 * v12 + 8;
      if ( 4 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_E65BE0((__int64 *)v121, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v121);
        sub_233E40((__int64)v121);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 2, v13);
      v9 = v14 + 2;
      *v14 = v12;
      a1[85] = v14 + 2;
    }
    *(v9 - 1) = a2;
    v108 = a2;
    memset(v9, 255, 4LL * a2);
    v93 = 0;
    v109 = (unsigned int **)&v113;
    v104 = &v117;
    do
    {
      sub_EE4F40(*a1);
      v16 = *a1;
      v117 = 0;
      v118 = v16;
      v17 = *(_QWORD *)(v106 + 8 * v93);
      if ( v107
        || !*(_WORD *)(v17 + 4)
        && (v65 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) != nullptr
        && !*v65
        && v65[1] == 8
        && *(_DWORD *)(v17 + 24) == 1 )
      {
        v113 = nullptr;
        v115 = v16;
        v116 = nullptr;
        v18 = sub_E6D530((__int64)a1, v17, v109, (__int64)&v115);
        v19 = v113;
        v103 = v115;
        v97 = v116;
        if ( !v18 )
          goto LABEL_87;
        if ( !v113 )
        {
LABEL_103:
          v20 = v117;
          if ( !v117 )
          {
            v115 = v103;
            v116 = v97;
            sub_2334C0(&v115);
            goto LABEL_79;
          }
          v67 = v118;
          v19 = nullptr;
          goto LABEL_75;
        }
      }
      else
      {
        v113 = nullptr;
        v115 = v16;
        v116 = nullptr;
        v66 = sub_E6D530((__int64)a1, v17, v109, (__int64)&v115);
        v19 = v113;
        v103 = v115;
        v97 = v116;
        if ( !v66 )
        {
LABEL_87:
          v20 = v117;
          if ( v117 )
            goto LABEL_74;
          goto LABEL_77;
        }
        if ( !v113 )
          goto LABEL_103;
        if ( *((_DWORD *)v113 - 1) != 1 || !(unsigned __int8)sub_15D2CB0(*a1, *v113) )
        {
          v20 = v117;
          if ( !v117 )
            goto LABEL_109;
LABEL_74:
          v67 = v118;
LABEL_75:
          v27 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v67, v20);
LABEL_77:
          v115 = v103;
          v116 = v97;
          sub_2334C0(&v115);
          if ( v19 )
            goto LABEL_78;
          goto LABEL_79;
        }
        v82 = *a1;
        v119 = 0;
        v120 = v82;
        *(_QWORD *)v121 = v82;
        v125 = &v127;
        v114 = 0;
        v121[2] = 256;
        LOWORD(v121[3]) = 0;
        v122 = 0;
        v126 = 0x1000000000LL;
        v123 = 0;
        v124 = 0;
        sub_14DC230(v121, &v114);
        if ( (unsigned int)sub_14DEE90((unsigned int)v121, *v97, (unsigned int)&v119, v83, v84, v85) == 5 )
        {
          v87 = sub_15E1A70(v121[0]);
          v88 = v87;
          if ( v87 )
            ++*(_DWORD *)(v87 + 8);
          sub_E65BC0(v119, v120);
          v119 = v88;
        }
        sub_39A7A0((__int64)v121);
        sub_18572D0(&v114);
        *(__m128 *)v121 = _mm_loadh_ps((const double *)&v103);
        sub_E65C70((__int64 **)v121, v119);
        sub_E65BC0(v119, v120);
      }
      v20 = v117;
      v21 = 0;
      v105 = 4 * v93;
      while ( v21 < *((_DWORD *)v19 - 1) )
      {
        v94 = v19[v21];
        v24 = &v97[v21];
        v25 = *v24;
        if ( *v24 )
          ++*(_DWORD *)(v25 + 8);
        if ( v20 )
        {
          v26 = v118;
          v27 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v26, v20);
        }
        v117 = v25;
        sub_14B9B80(a1 + 108, v104);
        v28 = v117;
        if ( v117 != *v24 )
        {
          if ( v117 )
            ++*(_DWORD *)(v117 + 8);
          v29 = a1[81];
          if ( !v29 || (v30 = *(_DWORD *)(v29 - 4), v30 == *(_DWORD *)(v29 - 8)) )
          {
            sub_23A6F0((unsigned int **)a1 + 81);
            v29 = a1[81];
            v30 = *(_DWORD *)(v29 - 4);
          }
          *(_QWORD *)(v29 + 8LL * v30) = v28;
          *(_DWORD *)(v29 - 4) = v30 + 1;
        }
        v31 = (_QWORD *)a1[84];
        v32 = *(_DWORD *)(v94 + 16);
        if ( !v31 )
        {
          v34 = v32 + 1;
          if ( v32 == -1 )
          {
            v35 = (_QWORD *)a1[87];
            goto LABEL_91;
          }
          v80 = (_QWORD *)sub_186B270(0x18u);
          v31 = v80 + 1;
          *v80 = 2;
          v33 = 0;
          a1[84] = v80 + 1;
LABEL_49:
          while ( 1 )
          {
            v47 = *((_DWORD *)v31 - 2);
            if ( v47 >= v34 )
              break;
            v44 = (3 * v47 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v47 + 8 >= (unsigned int)v45 || v47 >= v44 )
            {
              v90 = (char **)__cxa_allocate_exception(0x28u);
              sub_E65BE0((__int64 *)v121, "Overflow encountered when expanding vector");
              *v90 = (char *)off_1C63128;
              sub_2333C0(v90 + 1, v121);
              sub_233E40((__int64)v121);
              __cxa_throw(v90, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v99 = v33;
            v46 = (unsigned int *)sub_186B300(v31 - 1, v45);
            v31 = v46 + 2;
            *v46 = v44;
            v33 = v99;
            a1[84] = v46 + 2;
          }
          v48 = 8 * v33;
          *((_DWORD *)v31 - 1) = v34;
          v49 = 8LL * v34;
          if ( v48 != v49 )
          {
            v100 = v31;
            memset(&v31[(unsigned __int64)v48 / 8], 0, v49 - v48);
            v35 = (_QWORD *)a1[87];
            v31 = v100;
            if ( !v35 )
            {
LABEL_52:
              v50 = (_QWORD *)sub_186B270(0x18u);
              v35 = v50 + 1;
              v98 = 0;
              a1[87] = v50 + 1;
              *v50 = 2;
              v51 = *(_DWORD *)v50;
              if ( v51 < v34 )
                goto LABEL_53;
              goto LABEL_57;
            }
LABEL_37:
            v98 = *((_DWORD *)v35 - 1);
            if ( v98 < v34 )
            {
              while ( 1 )
              {
                v51 = *((_DWORD *)v35 - 2);
                if ( v51 >= v34 )
                  break;
LABEL_53:
                v52 = (3 * v51 + 1) >> 1;
                v53 = 8 * v52 + 8;
                v54 = v52;
                if ( 8 * v51 + 8 >= (unsigned int)v53 || v51 >= v52 )
                {
                  v92 = (char **)__cxa_allocate_exception(0x28u);
                  sub_E65BE0((__int64 *)v121, "Overflow encountered when expanding vector");
                  *v92 = (char *)off_1C63128;
                  sub_2333C0(v92 + 1, v121);
                  sub_233E40((__int64)v121);
                  __cxa_throw(v92, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v55 = (unsigned int *)sub_186B300(v35 - 1, v53);
                v35 = v55 + 2;
                *v55 = v54;
                a1[87] = v55 + 2;
              }
LABEL_57:
              *((_DWORD *)v35 - 1) = v34;
              v56 = 8LL * v34;
              v31 = (_QWORD *)a1[84];
              v57 = 8LL * v98;
              if ( v57 != v56 )
              {
                v112 = (_QWORD *)a1[84];
                v101 = v35;
                memset(&v35[(unsigned __int64)v57 / 8], 0, v56 - v57);
                v31 = v112;
                v35 = v101;
              }
            }
            v36 = v32;
            v37 = (_QWORD *)a1[86];
            v31[v32] = v117;
            v38 = v105;
            v35[v32] = v94;
            *(_DWORD *)(a1[85] + v38) = v32;
            if ( v37 )
            {
              LODWORD(v112) = *((_DWORD *)v37 - 1);
              if ( (unsigned int)v112 >= v34 )
                goto LABEL_40;
            }
            else
            {
              if ( !v34 )
                goto LABEL_40;
              v81 = (_QWORD *)sub_186B270(0x10u);
              v37 = v81 + 1;
              v36 = v32;
              LODWORD(v112) = 0;
              a1[86] = v81 + 1;
              *v81 = 2;
            }
            while ( 1 )
            {
              v61 = *((_DWORD *)v37 - 2);
              if ( v61 >= v34 )
                break;
              v58 = (3 * v61 + 1) >> 1;
              v59 = 4 * v58 + 8;
              if ( 4 * v61 + 8 >= (unsigned int)v59 || v61 >= v58 )
              {
                v91 = (char **)__cxa_allocate_exception(0x28u);
                sub_E65BE0((__int64 *)v121, "Overflow encountered when expanding vector");
                *v91 = (char *)off_1C63128;
                sub_2333C0(v91 + 1, v121);
                sub_233E40((__int64)v121);
                __cxa_throw(v91, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v102 = (3 * v61 + 1) >> 1;
              v95 = v36;
              v60 = (unsigned int *)sub_186B300(v37 - 1, v59);
              v37 = v60 + 2;
              v36 = v95;
              a1[86] = v60 + 2;
              *v60 = v102;
            }
            v62 = (unsigned int)v112;
            *((_DWORD *)v37 - 1) = v34;
            v63 = 4LL * v34;
            v64 = 4 * v62;
            if ( v64 != v63 )
            {
              v96 = v36;
              memset((char *)v37 + v64, 255, v63 - v64);
              v36 = v96;
            }
            goto LABEL_40;
          }
LABEL_83:
          v35 = (_QWORD *)a1[87];
          if ( !v35 )
            goto LABEL_52;
          goto LABEL_37;
        }
        v33 = *((unsigned int *)v31 - 1);
        if ( v32 >= (unsigned int)v33 )
        {
          v34 = v32 + 1;
          if ( (unsigned int)v33 < v32 + 1 )
            goto LABEL_49;
          v35 = (_QWORD *)a1[87];
          if ( v35 )
            goto LABEL_37;
          if ( v32 != -1 )
            goto LABEL_52;
LABEL_91:
          v36 = v32;
          v71 = v105;
          v37 = (_QWORD *)a1[86];
          v31[v32] = v117;
          v35[v32] = v94;
          *(_DWORD *)(a1[85] + v71) = v32;
LABEL_40:
          v39 = v111;
          v40 = v117;
          *((_DWORD *)v37 + v36) = v93;
          ++*v110;
          v41 = *v39;
          if ( *v39 < v32 )
            v41 = v32;
          *v39 = v41;
          v42 = a1[81];
          if ( v42 )
            goto LABEL_43;
LABEL_86:
          sub_23A6F0((unsigned int **)a1 + 81);
          v42 = a1[81];
          v43 = *(_DWORD *)(v42 - 4);
          goto LABEL_44;
        }
        v22 = v31[v32];
        if ( !v22 )
        {
          v34 = v32 + 1;
          if ( (unsigned int)v33 < v32 + 1 )
            goto LABEL_49;
          goto LABEL_83;
        }
        v23 = sub_15D26C0(*a1, v22);
        v20 = v117;
        if ( v23 )
          goto LABEL_20;
        v72 = *(_QWORD *)(a1[84] + 8LL * v32);
        v73 = sub_15D26C0(*a1, v117);
        v20 = v117;
        if ( v73 )
        {
          v68 = a1[85];
          v69 = v105;
          v70 = (_DWORD *)(a1[86] + 4LL * v32);
          *(_DWORD *)(v68 + 4LL * (unsigned int)*v70) = -1;
          *(_DWORD *)(v68 + v69) = v32;
          *v70 = v93;
          *(_QWORD *)(a1[84] + 8LL * v32) = v20;
          v42 = a1[81];
          v40 = v117;
          if ( !v42 )
            goto LABEL_86;
LABEL_43:
          v43 = *(_DWORD *)(v42 - 4);
          if ( v43 == *(_DWORD *)(v42 - 8) )
            goto LABEL_86;
LABEL_44:
          *(_QWORD *)(v42 + 8LL * v43) = v40;
          *(_DWORD *)(v42 - 4) = v43 + 1;
LABEL_45:
          v117 = 0;
          v20 = 0;
          goto LABEL_20;
        }
        if ( !*(_WORD *)(v117 + 4) )
        {
          if ( (*(_BYTE *)(v117 + 30) & 1) != 0 && (*(_WORD *)(v72 + 4) || (*(_BYTE *)(v72 + 30) & 1) == 0) )
          {
            v77 = a1[85];
            v78 = v105;
            v79 = (_DWORD *)(a1[86] + 4LL * v32);
            *(_DWORD *)(v77 + 4LL * (unsigned int)*v79) = -1;
            *(_DWORD *)(v77 + v78) = v32;
            *v79 = v93;
            *(_QWORD *)(a1[84] + 8LL * v32) = v20;
            v119 = v117;
            sub_E6C0E0((unsigned int **)a1 + 81, &v119);
            goto LABEL_45;
          }
          if ( !*(_DWORD *)(v117 + 24) )
          {
            v74 = *(_DWORD **)(*(_QWORD *)(v117 + 16) + 24LL);
            if ( !v74 || *v74 == -1 )
            {
              v75 = a1[85];
              v76 = (_DWORD *)(a1[86] + 4LL * v32);
              *(_DWORD *)(v75 + 4LL * (unsigned int)*v76) = -1;
              *(_DWORD *)(v75 + v105) = v32;
              *v76 = v93;
              *(_QWORD *)(a1[84] + 8LL * v32) = v20;
              *(_QWORD *)v121 = v117;
              sub_E6C0E0((unsigned int **)a1 + 81, v121);
              goto LABEL_45;
            }
          }
        }
LABEL_20:
        ++v21;
      }
      if ( v20 )
        goto LABEL_74;
      v115 = v103;
      v116 = v97;
LABEL_109:
      sub_2334C0(&v115);
LABEL_78:
      sub_186B220(v19 - 1);
LABEL_79:
      result = ++v93;
    }
    while ( v108 != v93 );
  }
  return result;
}

