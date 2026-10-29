__int64 __fastcall sub_772660(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // r14
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  _DWORD *v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r14
  __int64 v25; // r14
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // r13
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rsi
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 *v43; // rdx
  char v44; // al
  __int64 *v45; // rdx
  __int64 v46; // r14
  unsigned int v47; // r8d
  __int64 *v48; // rcx
  __int64 v49; // rsi
  bool v50; // zf
  __int64 *v51; // r14
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 *v55; // r14
  __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 *v58; // rdx
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int64 *v61; // r14
  __int64 v62; // rsi
  unsigned int v63; // r8d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rdi
  int v82; // r13d
  _QWORD *v83; // rax
  int v84; // r15d
  int v85; // r14d
  __int64 v86; // rcx
  int v87; // edx
  _QWORD *v88; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // rax
  _DWORD *v91; // rax
  unsigned int v92; // edx
  unsigned int v93; // ecx
  size_t v94; // rsi
  unsigned int *v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ecx
  size_t v98; // rsi
  unsigned int *v99; // rax
  _DWORD *v100; // rdx
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  char **exception; // r15
  char **v105; // r14
  char **v106; // r14
  __int64 *v107; // [rsp+8h] [rbp-C8h]
  __int64 v108; // [rsp+10h] [rbp-C0h]
  __int64 *v109; // [rsp+18h] [rbp-B8h]
  __int64 v110; // [rsp+20h] [rbp-B0h]
  __int64 v111; // [rsp+28h] [rbp-A8h]
  __int64 v112; // [rsp+30h] [rbp-A0h]
  __int64 v113; // [rsp+30h] [rbp-A0h]
  unsigned int v114; // [rsp+30h] [rbp-A0h]
  __int64 v116; // [rsp+40h] [rbp-90h]
  __int64 v117; // [rsp+40h] [rbp-90h]
  __int64 *v118; // [rsp+40h] [rbp-90h]
  __int64 *v119; // [rsp+40h] [rbp-90h]
  unsigned int v120; // [rsp+4Ch] [rbp-84h]
  __int64 v121; // [rsp+50h] [rbp-80h]
  unsigned int v122; // [rsp+50h] [rbp-80h]
  unsigned int v123; // [rsp+50h] [rbp-80h]
  __int64 *v124; // [rsp+50h] [rbp-80h]
  unsigned __int64 v125; // [rsp+50h] [rbp-80h]
  __int64 *v126; // [rsp+50h] [rbp-80h]
  unsigned __int64 v127; // [rsp+50h] [rbp-80h]
  __int64 v128; // [rsp+50h] [rbp-80h]
  unsigned int v129; // [rsp+58h] [rbp-78h]
  __int64 v130; // [rsp+58h] [rbp-78h]
  unsigned int v131; // [rsp+58h] [rbp-78h]
  unsigned int v132; // [rsp+58h] [rbp-78h]
  __int64 v133; // [rsp+58h] [rbp-78h]
  __int64 v134[10]; // [rsp+80h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  v82 = *(_DWORD *)(a2 + 20);
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v83 = *(_QWORD **)(a1 + 160);
  if ( v83 )
    v84 = *((_DWORD *)v83 - 1);
  else
    v84 = 0;
  if ( v82 )
  {
    v85 = 0;
    while ( 1 )
    {
      if ( v83 )
      {
        v92 = *((_DWORD *)v83 - 1);
        if ( v92 == *((_DWORD *)v83 - 2) )
        {
          v93 = (3 * v92 + 1) >> 1;
          v94 = 8 * v93 + 8;
          v131 = v93;
          if ( 8 * v92 + 8 >= (unsigned int)v94 || v92 >= v93 )
          {
LABEL_131:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v134, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = (unsigned int *)sub_186B300(v83 - 1, v94);
          v83 = v95 + 2;
          v96 = v95[1];
          *v95 = v131;
          *(_QWORD *)(a1 + 160) = v95 + 2;
          LODWORD(v95) = v96;
          v88 = &v83[v96];
          v87 = (_DWORD)v95 + 1;
        }
        else
        {
          v86 = v92;
          v87 = v92 + 1;
          v88 = &v83[v86];
        }
      }
      else
      {
        v102 = (_QWORD *)sub_186B270(0x18u);
        v87 = 1;
        *v102 = 2;
        v83 = v102 + 1;
        *(_QWORD *)(a1 + 160) = v83;
        v88 = v83;
      }
      *v88 = 0;
      *((_DWORD *)v83 - 1) = v87;
      v89 = *(_QWORD **)(a1 + 528);
      if ( !v89 )
        break;
      v90 = *((unsigned int *)v89 - 1);
      if ( (_DWORD)v90 != *((_DWORD *)v89 - 2) )
      {
        v91 = (_DWORD *)v89 + v90;
        goto LABEL_104;
      }
      v97 = (unsigned int)(3 * v90 + 1) >> 1;
      v98 = 4 * v97 + 8;
      v132 = v97;
      if ( 4 * (int)v90 + 8 >= (unsigned int)v98 || (unsigned int)v90 >= v97 )
        goto LABEL_131;
      ++v85;
      v99 = (unsigned int *)sub_186B300(v89 - 1, v98);
      v100 = v99 + 2;
      *v99 = v132;
      v101 = v99[1];
      *(_QWORD *)(a1 + 528) = v100;
      v100[v101] = v84;
      ++*(v100 - 1);
      if ( v82 == v85 )
        goto LABEL_114;
LABEL_105:
      v83 = *(_QWORD **)(a1 + 160);
    }
    v103 = (_QWORD *)sub_186B270(0x10u);
    v89 = v103 + 1;
    *v103 = 2;
    *(_QWORD *)(a1 + 528) = v103 + 1;
    v91 = v103 + 1;
LABEL_104:
    ++v85;
    *v91 = v84;
    ++*((_DWORD *)v89 - 1);
    if ( v82 == v85 )
      goto LABEL_114;
    goto LABEL_105;
  }
LABEL_114:
  *(_DWORD *)(a1 + 128) += v82;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 72) + *(_DWORD *)(a2 + 76) + 1;
  do
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
    {
      v12 = *(unsigned int *)(a2 + 20);
      v109 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
      v120 = *(_DWORD *)(a2 + 72);
      v13 = 16 * v12;
      v108 = *v109;
      v129 = *(_DWORD *)(a2 + 76);
      v14 = *(_QWORD *)(a1 + 8);
      v111 = v14;
      LODWORD(v15) = v14;
      if ( v120 )
      {
        v16 = a2 + v13;
        v17 = *(_QWORD *)(v16 + 80);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = (_QWORD *)sub_186B270(0x18u);
        *v18 = 2;
        v112 = v120;
        v19 = v18 + 1;
        v20 = 1;
        v21 = a2 + 8 * (v120 + 2 * v12);
        v22 = v19;
        while ( 1 )
        {
          v16 += 8;
          *v19 = v17;
          *(v22 - 1) = v20;
          if ( v21 == v16 )
            break;
          while ( 1 )
          {
            v17 = *(_QWORD *)(v16 + 80);
            if ( v17 )
              ++*(_DWORD *)(v17 + 8);
            v23 = *(v22 - 1);
            if ( v23 == *(v22 - 2) )
              break;
            v16 += 8;
            *(_QWORD *)&v22[2 * v23] = v17;
            *(v22 - 1) = v23 + 1;
            if ( v21 == v16 )
              goto LABEL_19;
          }
          v35 = (3 * v23 + 1) >> 1;
          v36 = 8 * v35 + 8;
          if ( 8 * v23 + 8 >= (unsigned int)v36 || v23 >= v35 )
          {
            v105 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v134, "Overflow encountered when expanding vector");
            *v105 = (char *)off_1C63128;
            sub_2333C0(v105 + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(v105, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v116 = v21;
          v122 = (3 * v23 + 1) >> 1;
          v37 = (unsigned int *)sub_186B300(v22 - 2, v36);
          v22 = v37 + 2;
          v21 = v116;
          *v37 = v122;
          LODWORD(v37) = v37[1];
          v19 = &v22[2 * (unsigned int)v37];
          v20 = (_DWORD)v37 + 1;
        }
LABEL_19:
        v24 = *(_QWORD *)(a1 + 8);
        v110 = v24;
        v13 = 16LL * *(unsigned int *)(a2 + 20);
        if ( !v129 )
        {
          v31 = nullptr;
          v107 = v109 + 1;
          v42 = v120;
          goto LABEL_37;
        }
      }
      else
      {
        v22 = nullptr;
        v110 = v14;
        if ( !v129 )
        {
          v63 = 0;
          v31 = nullptr;
          goto LABEL_74;
        }
      }
      v25 = a2 + v13;
      v26 = *(_QWORD *)(a2 + v13 + 80);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v121 = v26;
      v27 = (_QWORD *)sub_186B270(0x18u);
      v28 = v27 + 1;
      v29 = v121;
      *v27 = 2;
      v30 = 0;
      v31 = v27 + 1;
      v32 = 1;
      while ( 1 )
      {
        *v28 = v29;
        ++v30;
        *((_DWORD *)v31 - 1) = v32;
        if ( (unsigned int)v30 >= v129 )
          break;
        v29 = *(_QWORD *)(v25 + 8 * v30 + 80);
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v33 = *((_DWORD *)v31 - 1);
        if ( v33 == *((_DWORD *)v31 - 2) )
        {
          v38 = (3 * v33 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v33 + 8 >= (unsigned int)v39 || v33 >= v38 )
          {
            v106 = (char **)__cxa_allocate_exception(0x28u);
            sub_76A180(v134, "Overflow encountered when expanding vector");
            *v106 = (char *)off_1C63128;
            sub_2333C0(v106 + 1, v134);
            sub_233E40((__int64)v134);
            __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v113 = v30;
          v117 = v29;
          v123 = (3 * v33 + 1) >> 1;
          v40 = (unsigned int *)sub_186B300(v31 - 1, v39);
          v41 = v40[1];
          v31 = v40 + 2;
          v29 = v117;
          v30 = v113;
          *v40 = v123;
          LODWORD(v40) = v41;
          v28 = &v31[v41];
          v32 = (_DWORD)v40 + 1;
        }
        else
        {
          v34 = v33;
          v32 = v33 + 1;
          v28 = &v31[v34];
        }
      }
      v107 = v109 + 1;
      v42 = v120;
      v112 = v120;
      if ( v120 )
      {
        v24 = *(_QWORD *)(a1 + 8);
LABEL_37:
        v43 = v109;
        v120 = 0;
        v118 = &v109[v42];
        while ( 1 )
        {
          v124 = v43;
          v44 = sub_15D3190(v24, v43[1]);
          v45 = v124;
          if ( v44 )
          {
            v46 = v124[1];
            v47 = v120 + 1;
            v48 = (__int64 *)&v22[2 * v120];
            if ( v46 )
              ++*(_DWORD *)(v46 + 8);
            v49 = *v48;
            if ( *v48 )
            {
              v50 = (*(_DWORD *)(v49 + 8))-- == 1;
              if ( v50 )
              {
                sub_15D7BC0(v111, v49);
                v45 = v124;
                v47 = v120 + 1;
                v48 = (__int64 *)&v22[2 * v120];
              }
            }
            v43 = v45 + 1;
            *v48 = v46;
            v120 = v47;
            if ( v43 == v118 )
            {
LABEL_47:
              if ( v22 )
              {
                v42 = v120;
                goto LABEL_49;
              }
LABEL_56:
              if ( v129 )
                goto LABEL_57;
              goto LABEL_66;
            }
          }
          else
          {
            v43 = v124 + 1;
            if ( v124 + 1 == v118 )
              goto LABEL_47;
          }
          v24 = *(_QWORD *)(a1 + 8);
        }
      }
      v112 = 0;
      if ( v22 )
      {
LABEL_49:
        v51 = (__int64 *)&v22[2 * v42];
        v52 = (unsigned __int64)&v22[2 * *(v22 - 1)];
        if ( (unsigned __int64)v51 < v52 )
        {
          do
          {
            while ( 1 )
            {
              v53 = *v51;
              if ( *v51 )
              {
                v50 = (*(_DWORD *)(v53 + 8))-- == 1;
                if ( v50 )
                  break;
              }
              if ( (unsigned __int64)++v51 >= v52 )
                goto LABEL_55;
            }
            v125 = v52;
            sub_15D7BC0(v111, v53);
            v52 = v125;
            ++v51;
          }
          while ( (unsigned __int64)v51 < v125 );
        }
LABEL_55:
        *(v22 - 1) = v120;
        goto LABEL_56;
      }
LABEL_57:
      v54 = v129;
      v129 = 0;
      v55 = &v107[v112];
      v126 = &v107[v112 + v54];
      do
      {
        while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v55) )
        {
          if ( ++v55 == v126 )
            goto LABEL_66;
        }
        v56 = *v55;
        v57 = v129 + 1;
        v58 = &v31[v129];
        if ( *v55 )
          ++*(_DWORD *)(v56 + 8);
        v59 = *v58;
        if ( *v58 )
        {
          v50 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v50 )
          {
            v114 = v129 + 1;
            v119 = &v31[v129];
            v133 = v56;
            sub_15D7BC0(v110, v59);
            v57 = v114;
            v58 = v119;
            v56 = v133;
          }
        }
        *v58 = v56;
        ++v55;
        v129 = v57;
      }
      while ( v55 != v126 );
LABEL_66:
      if ( v31 )
      {
        v60 = (unsigned __int64)&v31[*((unsigned int *)v31 - 1)];
        v61 = &v31[v129];
        if ( (unsigned __int64)v61 < v60 )
        {
          do
          {
            while ( 1 )
            {
              v62 = *v61;
              if ( *v61 )
              {
                v50 = (*(_DWORD *)(v62 + 8))-- == 1;
                if ( v50 )
                  break;
              }
              if ( (unsigned __int64)++v61 >= v60 )
                goto LABEL_73;
            }
            v127 = v60;
            sub_15D7BC0(v110, v62);
            v60 = v127;
            ++v61;
          }
          while ( (unsigned __int64)v61 < v127 );
        }
LABEL_73:
        v15 = *(_QWORD *)(a1 + 8);
        *((_DWORD *)v31 - 1) = v129;
        v63 = v129;
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 8);
        v63 = v129;
      }
LABEL_74:
      v64 = sub_15DBA30(v15, a2, v120, (_DWORD)v22, v63, (_DWORD)v31, v108);
      v130 = v64;
      v65 = *(_QWORD *)(a1 + 496);
      v66 = *(_QWORD *)(a1 + 504);
      if ( v64 )
      {
        ++*(_DWORD *)(v64 + 8);
        if ( v65 )
        {
          v50 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v50 )
            sub_15D7BC0(v66, v65);
        }
        *(_QWORD *)(a1 + 496) = 0;
        if ( a2 == v130 )
        {
          v78 = a1 + 480;
          goto LABEL_91;
        }
      }
      else
      {
        if ( v65 )
        {
          v50 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v50 )
            sub_15D7BC0(v66, v65);
        }
        *(_QWORD *)(a1 + 496) = 0;
      }
      v67 = *(_QWORD *)(a1 + 8);
      v68 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
      if ( v68 )
      {
        ++*(_DWORD *)(v68 + 8);
        *(_QWORD *)(a1 + 496) = v68;
        v69 = sub_15DE700(v67);
        v70 = v69;
        if ( v69 )
          ++*(_DWORD *)(v69 + 8);
        v71 = *(_QWORD *)(a1 + 496);
        if ( v71 )
        {
          v72 = *(_QWORD *)(a1 + 504);
          v50 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v50 )
          {
            v128 = v69;
            sub_15D7BC0(v72, v71);
            v70 = v128;
          }
        }
        *(_QWORD *)(a1 + 496) = v70;
        v73 = sub_15DE750(*(_QWORD *)(a1 + 8));
        v74 = v73;
        if ( !v73 )
        {
LABEL_87:
          v75 = *(_QWORD *)(a1 + 496);
          if ( v75 )
          {
            v76 = *(_QWORD *)(a1 + 504);
            v50 = (*(_DWORD *)(v75 + 8))-- == 1;
            if ( v50 )
              sub_15D7BC0(v76, v75);
          }
          v77 = a1 + 480;
          *(_QWORD *)(a1 + 496) = v74;
          v78 = a1 + 480;
          if ( !v130 )
          {
LABEL_92:
            v79 = *(_QWORD *)(a1 + 480);
            v80 = *(_QWORD *)(a1 + 488);
            if ( v79 )
            {
              v50 = (*(_DWORD *)(v79 + 8))-- == 1;
              if ( v50 )
                v77 = sub_15D7BC0(v80, v79);
            }
            v81 = *(_QWORD *)(a1 + 144);
            *(_QWORD *)(a1 + 480) = v130;
            sub_10E3C0(v81, v130, v108, v22, v31, v78, v134, v77);
          }
LABEL_91:
          v77 = v130;
          ++*(_DWORD *)(v130 + 8);
          goto LABEL_92;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 496) = 0;
        v73 = sub_15DE370(v67);
        v74 = v73;
        if ( !v73 )
          goto LABEL_87;
      }
      ++*(_DWORD *)(v73 + 8);
      goto LABEL_87;
    }
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      v11 = v9 - 1;
      if ( v10 < v9 )
        v11 = (unsigned int)v11 - v10;
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_76FC00(a1, v6, ((unsigned __int8)v7 >> 4) & 3);
  }
  while ( (_BYTE)result );
  return result;
}

