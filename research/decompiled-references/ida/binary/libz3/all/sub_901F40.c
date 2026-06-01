void __fastcall sub_901F40(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 v34; // rax
  __int64 *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rdi
  void *v50; // rdi
  void *v51; // rdi
  __int64 v52; // rdi
  void *v53; // rdi
  __int64 *v54; // rbp
  __int64 *v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  void *v58; // rdi
  unsigned int **v59; // rbp
  unsigned int **v60; // r13
  unsigned int *v61; // r12
  _QWORD *v62; // r14
  unsigned int v63; // eax
  _DWORD *v64; // rdx
  __int64 v65; // rax
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // r12
  unsigned int *v69; // r15
  unsigned int v70; // eax
  unsigned int *v71; // r15
  unsigned int v72; // eax
  __int64 *v73; // rbp
  __int64 *v74; // r12
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 *v77; // rbp
  __int64 *v78; // r12
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 *v81; // rbp
  __int64 *v82; // r12
  __int64 v83; // rsi
  __int64 v84; // rdi
  void *v85; // rdi
  void *v86; // rdi
  void *v87; // rdi
  void *v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rdi
  void *v91; // rdi
  __int64 *v92; // rbp
  __int64 v93; // rdi
  __int64 *v94; // rbp
  __int64 v95; // rax
  __int64 *v96; // r12
  __int64 v97; // rsi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rdi
  void *v102; // rdi
  void *v103; // rdi
  void *v104; // rdi
  __int64 v105; // rdi
  __int64 v106; // rdi
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rdi
  __int64 v111; // rdi
  void *v112; // rbp
  void *v113; // rdi
  void *v114; // rdi
  void *v115; // rdi
  void *v116; // rdi
  __int64 v117; // rdi
  __int64 v118; // rdi
  __int64 v119; // rsi
  __int64 v120; // rdi
  unsigned int v121; // r15d
  size_t v122; // rsi
  unsigned int *v123; // rax
  __int64 v124; // rsi
  _QWORD *v125; // rdx
  unsigned int v126; // eax
  __int64 v127; // rcx
  int v128; // eax
  unsigned int **v129; // rcx
  unsigned int v130; // eax
  _DWORD *v131; // rdx
  int v132; // eax
  __int64 v133; // rax
  unsigned int v134; // ecx
  size_t v135; // rsi
  unsigned int *v136; // rax
  unsigned int v137; // r8d
  size_t v138; // rsi
  unsigned int *v139; // rax
  _QWORD *v140; // rdx
  char **exception; // rbp
  unsigned int v142; // [rsp+4h] [rbp-64h]
  unsigned int v143; // [rsp+4h] [rbp-64h]
  __int64 v144[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = (_QWORD *)(a1 + 6512);
  *(v2 - 4) = &off_1C6F4B8;
  *v2 = &off_1C4C338;
  sub_2314C0(v2);
  *(_QWORD *)(a1 + 5888) = &off_1C6F478;
  *(_QWORD *)(a1 + 5920) = &off_1C4C2F8;
  sub_2315C0((_QWORD *)(a1 + 5920));
  v3 = *(_QWORD **)(a1 + 5848);
  *(_QWORD *)(a1 + 5720) = &off_1C58368;
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    operator delete(v4, 0x18u);
  }
  memset(*(void **)(a1 + 5832), 0, 8LL * *(_QWORD *)(a1 + 5840));
  v5 = *(void **)(a1 + 5832);
  *(_QWORD *)(a1 + 5856) = 0;
  *(_QWORD *)(a1 + 5848) = 0;
  if ( v5 != (void *)(a1 + 5880) )
    operator delete(v5, 8LL * *(_QWORD *)(a1 + 5840));
  sub_2334C0((__int64 *)(a1 + 5816));
  v6 = *(_QWORD *)(a1 + 5808);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 5800);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 5792);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  sub_2334C0((__int64 *)(a1 + 5776));
  sub_2334C0((__int64 *)(a1 + 5760));
  v9 = *(_QWORD *)(a1 + 5712);
  *(_QWORD *)(a1 + 5392) = &off_1C6F438;
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 5696);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 5704);
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  sub_15BA200(a1 + 5632);
  sub_157EB20(a1 + 5552);
  v13 = *(void **)(a1 + 5512);
  if ( v13 )
    sub_186B220(v13);
  v14 = *(_QWORD *)(a1 + 5488);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 5496);
    v12 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v15, v14);
  }
  v16 = *(_QWORD *)(a1 + 5360);
  *(_QWORD *)(a1 + 4800) = &off_1C6F3B8;
  *(_QWORD *)(a1 + 4832) = &off_1C4C100;
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 5344);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 5352);
    v12 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v18, v17);
  }
  v19 = *(_QWORD *)(a1 + 5328);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 5336);
    v12 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v20, v19);
  }
  v21 = *(_QWORD *)(a1 + 5312);
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 5320);
    v12 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v22, v21);
  }
  *(_QWORD *)(a1 + 5160) = &qword_1C637E8;
  sub_15841B0(a1 + 5160);
  *(_QWORD *)(a1 + 5000) = &qword_1C637E8;
  sub_15841B0(a1 + 5000);
  v23 = *(_QWORD *)(a1 + 4992);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  sub_15841B0(a1 + 4832);
  v24 = *(_QWORD *)(a1 + 4784);
  *(_QWORD *)(a1 + 4224) = &off_1C6F3F8;
  *(_QWORD *)(a1 + 4256) = &off_1C55A80;
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 4768);
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 4776);
    v12 = (*(_DWORD *)(v25 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v26, v25);
  }
  v27 = *(_QWORD *)(a1 + 4752);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 4760);
    v12 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v28, v27);
  }
  v29 = *(_QWORD *)(a1 + 4736);
  if ( v29 )
  {
    v30 = *(_QWORD *)(a1 + 4744);
    v12 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v30, v29);
  }
  *(_QWORD *)(a1 + 4584) = &qword_1C637E8;
  sub_15841B0(a1 + 4584);
  *(_QWORD *)(a1 + 4424) = &qword_1C637E8;
  sub_15841B0(a1 + 4424);
  v31 = *(_QWORD *)(a1 + 4416);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  sub_15841B0(a1 + 4256);
  *(_QWORD *)(a1 + 4184) = &off_1C6F378;
  sub_13ACE60(a1 + 4216);
  *(_QWORD *)(a1 + 4144) = &off_1C6F4F8;
  sub_E66770(a1 + 4176);
  v32 = *(_QWORD *)(a1 + 4136);
  *(_QWORD *)(a1 + 3536) = &off_1C6F338;
  *(_QWORD *)(a1 + 3568) = &off_1C4C1E8;
  *(_QWORD *)(a1 + 4104) = &off_1C4C1A8;
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(__int64 **)(a1 + 4128);
  if ( v33 )
  {
    v34 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v34 )
    {
      v35 = &v33[3 * v34];
      do
      {
        v37 = v33[1];
        v38 = *v33;
        if ( v37 )
        {
          v12 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v12 )
          {
            sub_15D7BC0(v38, v37);
            v38 = *v33;
          }
        }
        v36 = v33[2];
        if ( v36 )
        {
          v12 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v38, v36);
        }
        v33 += 3;
      }
      while ( v33 != v35 );
      v33 = *(__int64 **)(a1 + 4128);
    }
    sub_186B220(v33 - 1);
  }
  sub_2316C0((_QWORD *)(a1 + 3568));
  *(_QWORD *)(a1 + 2400) = &off_1C6F2F8;
  *(_QWORD *)(a1 + 2432) = &off_1C52718;
  sub_5F15C0(a1 + 2968);
  sub_5F02C0((_QWORD *)(a1 + 2432));
  v39 = *(_QWORD *)(a1 + 2392);
  *(_QWORD *)(a1 + 2248) = &off_1C6F2B8;
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  sub_1680D50(a1 + 2296);
  v40 = *(_QWORD *)(a1 + 2288);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  v41 = *(_QWORD *)(a1 + 2208);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  *(_QWORD *)(a1 + 1528) = &off_1C55A60;
  *(_QWORD *)(a1 + 2064) = off_1C61CA8;
  sub_1535030(a1 + 2064);
  v42 = *(_QWORD *)(a1 + 2056);
  *(_QWORD *)(a1 + 1528) = &off_1C55A40;
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  v43 = *(_QWORD *)(a1 + 2040);
  if ( v43 )
  {
    v44 = *(_QWORD *)(a1 + 2048);
    v12 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v44, v43);
  }
  v45 = *(_QWORD *)(a1 + 2024);
  if ( v45 )
  {
    v46 = *(_QWORD *)(a1 + 2032);
    v12 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v46, v45);
  }
  v47 = *(_QWORD *)(a1 + 2008);
  if ( v47 )
  {
    v48 = *(_QWORD *)(a1 + 2016);
    v12 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v48, v47);
  }
  *(_QWORD *)(a1 + 1856) = &qword_1C637E8;
  sub_15841B0(a1 + 1856);
  *(_QWORD *)(a1 + 1696) = &qword_1C637E8;
  sub_15841B0(a1 + 1696);
  v49 = *(_QWORD *)(a1 + 1688);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  sub_15841B0(a1 + 1528);
  v50 = *(void **)(a1 + 1520);
  if ( v50 )
    sub_186B220(v50);
  sub_1600000(a1 + 1488);
  v51 = *(void **)(a1 + 1496);
  if ( v51 )
    sub_186B220(v51);
  v52 = *(_QWORD *)(a1 + 1480);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(void **)(a1 + 1456);
  if ( v53 )
    sub_186B220(v53);
  v54 = *(__int64 **)(a1 + 1448);
  if ( v54 )
  {
    v55 = &v54[*((unsigned int *)v54 - 1)];
    if ( v54 >= v55 )
      goto LABEL_96;
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v57 = *(_QWORD *)(a1 + 1440);
          v12 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v54 >= v55 )
          goto LABEL_95;
      }
      sub_15D7BC0(v57, v56);
      ++v54;
    }
    while ( v54 < v55 );
LABEL_95:
    v54 = *(__int64 **)(a1 + 1448);
    if ( v54 )
LABEL_96:
      sub_186B220(v54 - 1);
  }
  v58 = *(void **)(a1 + 1416);
  if ( v58 )
    sub_186B220(v58);
  v59 = *(unsigned int ***)(a1 + 1408);
  if ( v59 )
  {
    v60 = &v59[*((unsigned int *)v59 - 1)];
    if ( v59 >= v60 )
      goto LABEL_116;
    do
    {
      v61 = *v59;
      if ( *v59 )
      {
        v62 = *(_QWORD **)(a1 + 1400);
        v63 = (*v61 + 0x3FFFFFFF) & 0x3FFFFFFF | *v61 & 0xC0000000;
        *v61 = v63;
        if ( (v63 & 0x3FFFFFFF) == 0 )
        {
          v64 = (_DWORD *)v62[83];
          if ( v64 )
          {
            v65 = (unsigned int)*(v64 - 1);
            if ( (_DWORD)v65 != *(v64 - 2) )
            {
              v66 = v65 + 1;
              *(_QWORD *)&v64[2 * v65] = v61;
              *(v64 - 1) = v65 + 1;
              goto LABEL_108;
            }
            v121 = (unsigned int)(3 * v65 + 1) >> 1;
            v122 = 8 * v121 + 8;
            if ( 8 * (int)v65 + 8 < (unsigned int)v122 && (unsigned int)v65 < v121 )
            {
              v123 = (unsigned int *)sub_186B300(v64 - 2, v122);
              v124 = v123[1];
              v64 = v123 + 2;
              v62[83] = v123 + 2;
              v66 = v124 + 1;
              *v123 = v121;
              *(_QWORD *)&v123[2 * v124 + 2] = v61;
              v123[1] = v124 + 1;
              goto LABEL_108;
            }
LABEL_232:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v144, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v144);
            sub_233E40((__int64)v144);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v133 = sub_186B270(0x18u);
          v66 = 1;
          v64 = (_DWORD *)(v133 + 8);
          *(_QWORD *)v133 = 2;
          v62[83] = v133 + 8;
          *(_QWORD *)(v133 + 8) = v61;
          *(_DWORD *)(v133 + 4) = 1;
LABEL_108:
          while ( v66 )
          {
            v67 = (unsigned int)(v66 - 1);
            v68 = *(_QWORD *)&v64[2 * v67];
            *(v64 - 1) = v67;
            if ( *(char *)(v68 + 3) < 0 )
            {
              v119 = *(_QWORD *)(v68 + 8);
              if ( v119 )
              {
                v120 = v62[81];
                v12 = (*(_DWORD *)(v119 + 8))-- == 1;
                if ( v12 )
                  sub_15D7BC0(v120, v119);
              }
              sub_17E9C40(v62[82], 16, v68);
            }
            else
            {
              v69 = *(unsigned int **)(v68 + 8);
              v70 = (*v69 + 0x3FFFFFFF) & 0x3FFFFFFF | *v69 & 0xC0000000;
              *v69 = v70;
              if ( (v70 & 0x3FFFFFFF) == 0 )
              {
                v130 = *(v64 - 2);
                if ( v130 == v66 - 1 )
                {
                  v137 = (3 * v130 + 1) >> 1;
                  v138 = 8 * v137 + 8;
                  if ( 8 * v66 >= (unsigned int)v138 )
                    goto LABEL_232;
                  v143 = (3 * v130 + 1) >> 1;
                  if ( v130 >= v137 )
                    goto LABEL_232;
                  v139 = (unsigned int *)sub_186B300(v64 - 2, v138);
                  v131 = v139 + 2;
                  v62[83] = v139 + 2;
                  *v139 = v143;
                }
                else
                {
                  v131 = (_DWORD *)v62[83];
                }
                v132 = *(v131 - 1);
                *(_QWORD *)&v131[2 * v132] = v69;
                *(v131 - 1) = v132 + 1;
              }
              v71 = *(unsigned int **)(v68 + 16);
              v72 = (*v71 + 0x3FFFFFFF) & 0x3FFFFFFF | *v71 & 0xC0000000;
              *v71 = v72;
              if ( (v72 & 0x3FFFFFFF) == 0 )
              {
                v125 = (_QWORD *)v62[83];
                if ( v125 )
                {
                  v126 = *((_DWORD *)v125 - 1);
                  if ( v126 == *((_DWORD *)v125 - 2) )
                  {
                    v134 = (3 * v126 + 1) >> 1;
                    v135 = 8 * v134 + 8;
                    if ( 8 * v126 + 8 >= (unsigned int)v135 )
                      goto LABEL_232;
                    v142 = (3 * v126 + 1) >> 1;
                    if ( v126 >= v134 )
                      goto LABEL_232;
                    v136 = (unsigned int *)sub_186B300(v125 - 1, v135);
                    v125 = v136 + 2;
                    v62[83] = v136 + 2;
                    *v136 = v142;
                    LODWORD(v136) = v136[1];
                    v129 = (unsigned int **)&v125[(unsigned int)v136];
                    v128 = (_DWORD)v136 + 1;
                  }
                  else
                  {
                    v127 = v126;
                    v128 = v126 + 1;
                    v129 = (unsigned int **)&v125[v127];
                  }
                }
                else
                {
                  v140 = (_QWORD *)sub_186B270(0x18u);
                  *v140 = 2;
                  v128 = 1;
                  v125 = v140 + 1;
                  v62[83] = v125;
                  v129 = (unsigned int **)v125;
                }
                *v129 = v71;
                *((_DWORD *)v125 - 1) = v128;
              }
              sub_17E9C40(v62[82], 24, v68);
            }
            v64 = (_DWORD *)v62[83];
            if ( !v64 )
              break;
            v66 = *(v64 - 1);
          }
        }
      }
      ++v59;
    }
    while ( v59 < v60 );
    v59 = *(unsigned int ***)(a1 + 1408);
    if ( v59 )
LABEL_116:
      sub_186B220(v59 - 1);
  }
  v73 = *(__int64 **)(a1 + 1392);
  if ( v73 )
  {
    v74 = &v73[*((unsigned int *)v73 - 1)];
    if ( v73 >= v74 )
      goto LABEL_125;
    do
    {
      while ( 1 )
      {
        v75 = *v73;
        if ( *v73 )
        {
          v76 = *(_QWORD *)(a1 + 1384);
          v12 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v73 >= v74 )
          goto LABEL_124;
      }
      sub_15D7BC0(v76, v75);
      ++v73;
    }
    while ( v73 < v74 );
LABEL_124:
    v73 = *(__int64 **)(a1 + 1392);
    if ( v73 )
LABEL_125:
      sub_186B220(v73 - 1);
  }
  v77 = *(__int64 **)(a1 + 1376);
  if ( v77 )
  {
    v78 = &v77[*((unsigned int *)v77 - 1)];
    if ( v77 >= v78 )
      goto LABEL_134;
    do
    {
      while ( 1 )
      {
        v79 = *v77;
        if ( *v77 )
        {
          v80 = *(_QWORD *)(a1 + 1368);
          v12 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v77 >= v78 )
          goto LABEL_133;
      }
      sub_15D7BC0(v80, v79);
      ++v77;
    }
    while ( v77 < v78 );
LABEL_133:
    v77 = *(__int64 **)(a1 + 1376);
    if ( v77 )
LABEL_134:
      sub_186B220(v77 - 1);
  }
  v81 = *(__int64 **)(a1 + 1360);
  if ( v81 )
  {
    v82 = &v81[*((unsigned int *)v81 - 1)];
    if ( v81 >= v82 )
      goto LABEL_143;
    do
    {
      while ( 1 )
      {
        v83 = *v81;
        if ( *v81 )
        {
          v84 = *(_QWORD *)(a1 + 1352);
          v12 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v81 >= v82 )
          goto LABEL_142;
      }
      sub_15D7BC0(v84, v83);
      ++v81;
    }
    while ( v81 < v82 );
LABEL_142:
    v81 = *(__int64 **)(a1 + 1360);
    if ( v81 )
LABEL_143:
      sub_186B220(v81 - 1);
  }
  v85 = *(void **)(a1 + 1328);
  if ( v85 )
    sub_186B220(v85);
  v86 = *(void **)(a1 + 1304);
  if ( v86 )
    sub_186B220(v86);
  v87 = *(void **)(a1 + 1280);
  if ( v87 )
    sub_186B220(v87);
  sub_157EB20(a1 + 1200);
  v88 = *(void **)(a1 + 1160);
  if ( v88 )
    sub_186B220(v88);
  v89 = *(_QWORD *)(a1 + 1136);
  if ( v89 )
  {
    v90 = *(_QWORD *)(a1 + 1144);
    v12 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v90, v89);
  }
  v91 = *(void **)(a1 + 1056);
  if ( v91 )
    sub_186B220(v91);
  v92 = *(__int64 **)(a1 + 1032);
  if ( v92 )
  {
    sub_2334C0(v92 + 11);
    v93 = v92[10];
    if ( v93 )
      sub_186B220((void *)(v93 - 8));
    sub_186B220(v92);
  }
  v94 = *(__int64 **)(a1 + 936);
  if ( v94 )
  {
    v95 = *((unsigned int *)v94 - 1);
    if ( (_DWORD)v95 )
    {
      v96 = &v94[3 * v95];
      do
      {
        v98 = v94[1];
        v99 = *v94;
        if ( v98 )
        {
          v12 = (*(_DWORD *)(v98 + 8))-- == 1;
          if ( v12 )
          {
            sub_15D7BC0(v99, v98);
            v99 = *v94;
          }
        }
        v97 = v94[2];
        if ( v97 )
        {
          v12 = (*(_DWORD *)(v97 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v99, v97);
        }
        v94 += 3;
      }
      while ( v94 != v96 );
      v94 = *(__int64 **)(a1 + 936);
    }
    sub_186B220(v94 - 1);
  }
  v100 = *(_QWORD *)(a1 + 928);
  if ( v100 )
    sub_186B220((void *)(v100 - 8));
  v101 = *(_QWORD *)(a1 + 896);
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  v102 = *(void **)(a1 + 864);
  if ( v102 )
    sub_186B220(v102);
  v103 = *(void **)(a1 + 840);
  if ( v103 )
    sub_186B220(v103);
  v104 = *(void **)(a1 + 816);
  if ( v104 )
    sub_186B220(v104);
  v105 = *(_QWORD *)(a1 + 800);
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  v106 = *(_QWORD *)(a1 + 792);
  if ( v106 )
    sub_186B220((void *)(v106 - 8));
  v107 = *(_QWORD *)(a1 + 776);
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  v108 = *(_QWORD *)(a1 + 768);
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v109 = *(_QWORD *)(a1 + 760);
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  v110 = *(_QWORD *)(a1 + 752);
  if ( v110 )
    sub_186B220((void *)(v110 - 8));
  v111 = *(_QWORD *)(a1 + 744);
  if ( v111 )
    sub_186B220((void *)(v111 - 8));
  v112 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 672);
  sub_182CBA0(v112, a1 + 688);
  v113 = *(void **)(a1 + 536);
  *(_QWORD *)(a1 + 488) = &off_1C62200;
  if ( v113 )
    sub_186B220(v113);
  v114 = *(void **)(a1 + 512);
  if ( v114 )
    sub_186B220(v114);
  v115 = *(void **)(a1 + 480);
  *(_QWORD *)(a1 + 432) = &off_1C62200;
  if ( v115 )
    sub_186B220(v115);
  v116 = *(void **)(a1 + 456);
  if ( v116 )
    sub_186B220(v116);
  sub_2334C0((__int64 *)(a1 + 360));
  v117 = *(_QWORD *)(a1 + 352);
  if ( v117 )
    sub_186B220((void *)(v117 - 8));
  sub_13A2BD0(a1 + 128);
  v118 = *(_QWORD *)(a1 + 120);
  if ( v118 )
    sub_186B220((void *)(v118 - 8));
  sub_2334C0((__int64 *)(a1 + 104));
  sub_1695230(a1 + 40);
  sub_14B63F0(a1 + 24);
  sub_18572D0((void *)(a1 + 16));
}

