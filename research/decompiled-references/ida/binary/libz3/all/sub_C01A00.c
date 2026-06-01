__int64 __fastcall sub_C01A00(__int64 a1, unsigned int a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  char **v7; // r12
  char **exception; // r12
  char **v9; // r12
  char **v10; // r12
  __int64 v12; // r13
  _QWORD *v14; // rbx
  __int64 v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  _QWORD *v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // r9d
  unsigned int v25; // ebx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rcx
  unsigned int *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r12
  __int64 *v35; // rbp
  __int64 *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 *v39; // rbp
  __int64 *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 *v45; // r13
  __int64 v46; // rsi
  _DWORD *v47; // rbp
  unsigned int v48; // r14d
  __int64 v49; // r15
  unsigned int v50; // eax
  __int64 v51; // rdi
  int v52; // eax
  _QWORD *v53; // rdi
  __int64 v54; // rsi
  _DWORD *v55; // r14
  unsigned int v56; // r15d
  __int64 v57; // rbx
  unsigned int v58; // eax
  __int64 v59; // rdi
  int v60; // eax
  _QWORD *v61; // rdi
  _DWORD *v62; // rbx
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rsi
  _DWORD *v70; // rbp
  unsigned int v71; // r13d
  __int64 v72; // r14
  unsigned int v73; // eax
  __int64 v74; // rdi
  int v75; // eax
  _QWORD *v76; // rdi
  __int64 v77; // rsi
  _DWORD *v78; // r13
  unsigned int v79; // r14d
  __int64 v80; // r8
  unsigned int v81; // eax
  __int64 v82; // rdi
  int v83; // eax
  _QWORD *v84; // rdi
  _DWORD *v85; // r12
  unsigned int v86; // r9d
  size_t v87; // rsi
  unsigned int *v88; // rax
  __int64 v89; // rsi
  unsigned int v90; // r8d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rsi
  unsigned int v94; // ebx
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rsi
  unsigned int v98; // r9d
  size_t v99; // rsi
  unsigned int *v100; // rax
  __int64 v101; // rsi
  _QWORD *v102; // rax
  _QWORD *v103; // rdi
  _QWORD *v104; // rdi
  _QWORD *v105; // rdi
  __int64 v106; // [rsp+8h] [rbp-E0h]
  __int64 v107; // [rsp+8h] [rbp-E0h]
  _DWORD *v108; // [rsp+10h] [rbp-D8h]
  unsigned int *v109; // [rsp+10h] [rbp-D8h]
  __int64 v110; // [rsp+10h] [rbp-D8h]
  int v111; // [rsp+10h] [rbp-D8h]
  int v112; // [rsp+10h] [rbp-D8h]
  __int64 v113; // [rsp+18h] [rbp-D0h]
  __int64 v114; // [rsp+18h] [rbp-D0h]
  __int64 v115; // [rsp+18h] [rbp-D0h]
  __int64 v116; // [rsp+18h] [rbp-D0h]
  __int64 v117; // [rsp+18h] [rbp-D0h]
  __int64 v118; // [rsp+18h] [rbp-D0h]
  __int64 v119; // [rsp+18h] [rbp-D0h]
  __int64 v120; // [rsp+18h] [rbp-D0h]
  __int64 v121; // [rsp+20h] [rbp-C8h]
  unsigned int v122; // [rsp+20h] [rbp-C8h]
  unsigned int v123; // [rsp+20h] [rbp-C8h]
  __int64 v124; // [rsp+20h] [rbp-C8h]
  unsigned int v125; // [rsp+2Ch] [rbp-BCh]
  char v126; // [rsp+3Eh] [rbp-AAh] BYREF
  __int64 v127; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v129[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v130[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v131; // [rsp+80h] [rbp-68h] BYREF
  _DWORD *v132; // [rsp+88h] [rbp-60h]
  __int64 v133; // [rsp+90h] [rbp-58h] BYREF
  _DWORD *v134; // [rsp+98h] [rbp-50h]
  int v135; // [rsp+A0h] [rbp-48h]
  __int64 v136; // [rsp+A8h] [rbp-40h]

  v12 = a1 + 4072;
  v14 = *(_QWORD **)(a1 + 4080);
  v15 = *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL * a2);
  if ( v14 )
  {
    v16 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v16 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v17 = *v14;
        if ( *v14 )
        {
          v18 = *(_QWORD *)(a1 + 4072);
          v19 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v14 >= v16 )
          goto LABEL_8;
      }
      sub_15D7BC0(v18, v17);
      ++v14;
    }
    while ( v14 < v16 );
LABEL_8:
    v14 = *(_QWORD **)(a1 + 4080);
    if ( v14 )
LABEL_9:
      *((_DWORD *)v14 - 1) = 0;
  }
  v20 = *(_QWORD **)(a1 + 4096);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *(_QWORD *)(a1 + 4088);
          v19 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v19 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_17;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_17:
    v20 = *(_QWORD **)(a1 + 4096);
    if ( v20 )
LABEL_18:
      *((_DWORD *)v20 - 1) = 0;
  }
  v126 = 0;
  v127 = 0;
  if ( !(unsigned __int8)sub_BC92C0(a1, v15, v12, &v127, &v126, a7) )
    return 0;
  v106 = a1 + 4088;
  v25 = sub_BC92C0(a1, v15 + 16, a1 + 4088, &v127, &v126, v24);
  if ( !(_BYTE)v25 )
    return 0;
  v29 = v127;
  v30 = *(unsigned int **)(v15 + 40);
  if ( v127 )
  {
    if ( v30 && (unsigned int *)v127 != v30 )
    {
      v108 = (_DWORD *)v127;
      v31 = sub_180C100(*(_QWORD *)(a1 + 120), 24);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v108, (__m128i)(unsigned __int64)v30);
      *v108 = (*v108 + 1) & 0x3FFFFFFF | *v108 & 0xC0000000;
      v29 = v31;
      *v30 = (*v30 + 1) & 0x3FFFFFFF | *v30 & 0xC0000000;
      *(_QWORD *)v31 = 0;
      *(__m128 *)(v31 + 8) = a3;
    }
  }
  else
  {
    v29 = (__int64)v30;
  }
  v32 = *(_QWORD *)(a1 + 16);
  v33 = qword_1C7EDB0;
  if ( *(_QWORD *)(v32 + 8984) == qword_1C7EDB0 && !*(_BYTE *)(v32 + 2416) )
  {
    v109 = (unsigned int *)v29;
    if ( (unsigned __int8)sub_BCCCF0(a1, v12, v106, v29, *(double *)a3.m128_u64) )
      return v25;
    v32 = *(_QWORD *)(a1 + 16);
    v33 = qword_1C7EDB0;
    v29 = (__int64)v109;
    if ( *(_QWORD *)(v32 + 8984) == qword_1C7EDB0 && !*(_BYTE *)(v32 + 2416) )
    {
      if ( (unsigned __int8)sub_BBA990(a1, v12, v106, v109) )
        return v25;
      v32 = *(_QWORD *)(a1 + 16);
      v33 = qword_1C7EDB0;
      v29 = (__int64)v109;
    }
  }
  *(_QWORD *)(a1 + 4224) = v29;
  v25 = 0;
  ptr = nullptr;
  v129[0] = v12;
  v129[1] = a1 + 4088;
  if ( *(_QWORD *)(v32 + 8984) == v33 )
  {
    if ( *(_BYTE *)(v32 + 2416) )
    {
LABEL_30:
      v34 = (__int64 *)ptr;
      v25 = 0;
      goto LABEL_31;
    }
    v110 = v29;
    v43 = sub_14655D0((int)a1 + 3424, (unsigned int)v129, (unsigned int)&ptr, v29, v27, v28);
    v44 = v110;
    v25 = v43;
    if ( (_BYTE)v43 )
    {
      v45 = (__int64 *)ptr;
      if ( !ptr )
        return v25;
      v46 = *((_QWORD *)ptr + 1);
      v47 = nullptr;
      v107 = a1 + 240;
      v111 = *(_DWORD *)(a1 + 564);
      *(_DWORD *)(a1 + 564) = v111 + 1;
      v131 = *v45;
      if ( v46 )
      {
        v48 = 0;
        do
        {
          if ( v48 >= *(_DWORD *)(v46 - 4) )
            break;
          v49 = *(_QWORD *)(v46 + 8LL * v48);
          if ( v49 )
            ++*(_DWORD *)(v49 + 8);
          if ( v47 )
          {
            v50 = *(v47 - 1);
            if ( v50 == *(v47 - 2) )
            {
              v94 = (3 * v50 + 1) >> 1;
              v95 = 8 * v94 + 8;
              if ( 8 * v50 + 8 >= (unsigned int)v95 || v50 >= v94 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v115 = v44;
              v96 = (unsigned int *)sub_186B300(v47 - 2, v95);
              v97 = v96[1];
              v47 = v96 + 2;
              v44 = v115;
              *v96 = v94;
              LODWORD(v96) = v97;
              v53 = &v47[2 * v97];
              v46 = v45[1];
              v52 = (_DWORD)v96 + 1;
            }
            else
            {
              v51 = v50;
              v52 = v50 + 1;
              v53 = &v47[2 * v51];
            }
          }
          else
          {
            v119 = v44;
            v104 = (_QWORD *)sub_186B270(0x18u);
            *v104 = 2;
            v46 = v45[1];
            v52 = 1;
            v53 = v104 + 1;
            v44 = v119;
            v47 = v53;
          }
          *v53 = v49;
          ++v48;
          *(v47 - 1) = v52;
        }
        while ( v46 );
      }
      v54 = v45[3];
      v55 = nullptr;
      v133 = v45[2];
      if ( v54 )
      {
        v56 = 0;
        do
        {
          if ( v56 >= *(_DWORD *)(v54 - 4) )
            break;
          v57 = *(_QWORD *)(v54 + 8LL * v56);
          if ( v57 )
            ++*(_DWORD *)(v57 + 8);
          if ( v55 )
          {
            v58 = *(v55 - 1);
            if ( v58 == *(v55 - 2) )
            {
              v98 = (3 * v58 + 1) >> 1;
              v99 = 8 * v98 + 8;
              if ( 8 * v58 + 8 >= (unsigned int)v99 || v58 >= v98 )
              {
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v130, "Overflow encountered when expanding vector");
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, v130);
                sub_233E40((__int64)v130);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v123 = (3 * v58 + 1) >> 1;
              v116 = v44;
              v100 = (unsigned int *)sub_186B300(v55 - 2, v99);
              v101 = v100[1];
              v55 = v100 + 2;
              v44 = v116;
              *v100 = v123;
              LODWORD(v100) = v101;
              v61 = &v55[2 * v101];
              v54 = v45[3];
              v60 = (_DWORD)v100 + 1;
            }
            else
            {
              v59 = v58;
              v60 = v58 + 1;
              v61 = &v55[2 * v59];
            }
          }
          else
          {
            v120 = v44;
            v105 = (_QWORD *)sub_186B270(0x18u);
            *v105 = 2;
            v54 = v45[3];
            v60 = 1;
            v61 = v105 + 1;
            v44 = v120;
            v55 = v61;
          }
          *v61 = v57;
          ++v56;
          *(v55 - 1) = v60;
        }
        while ( v54 );
      }
      v132 = v47;
      v136 = v44;
      v135 = v111;
      v134 = v55;
      sub_C04220(v107, a2, &v131);
      v62 = v134;
      sub_2334C0(&v133);
      v134 = v62;
      v25 = 0;
      sub_2334C0(&v131);
      v34 = (__int64 *)ptr;
      goto LABEL_31;
    }
    v63 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v63 + 8984) == qword_1C7EDB0 )
    {
      if ( *(_BYTE *)(v63 + 2416) )
        goto LABEL_30;
      v64 = sub_BFF090(a1, v12, v106, v110);
      if ( (_BYTE)v64 )
      {
        v34 = (__int64 *)ptr;
        v25 = v64;
LABEL_31:
        if ( v34 )
        {
          v35 = (__int64 *)v34[3];
          if ( v35 )
          {
            v36 = &v35[*((unsigned int *)v35 - 1)];
            if ( v35 >= v36 )
              goto LABEL_40;
            do
            {
              while ( 1 )
              {
                v37 = *v35;
                if ( *v35 )
                {
                  v38 = v34[2];
                  v19 = (*(_DWORD *)(v37 + 8))-- == 1;
                  if ( v19 )
                    break;
                }
                if ( ++v35 >= v36 )
                  goto LABEL_39;
              }
              sub_15D7BC0(v38, v37);
              ++v35;
            }
            while ( v35 < v36 );
LABEL_39:
            v35 = (__int64 *)v34[3];
            if ( v35 )
LABEL_40:
              sub_186B220(v35 - 1);
          }
          v39 = (__int64 *)v34[1];
          if ( v39 )
          {
            v40 = &v39[*((unsigned int *)v39 - 1)];
            if ( v39 >= v40 )
              goto LABEL_49;
            do
            {
              while ( 1 )
              {
                v41 = *v39;
                if ( *v39 )
                {
                  v42 = *v34;
                  v19 = (*(_DWORD *)(v41 + 8))-- == 1;
                  if ( v19 )
                    break;
                }
                if ( ++v39 >= v40 )
                  goto LABEL_48;
              }
              sub_15D7BC0(v42, v41);
              ++v39;
            }
            while ( v39 < v40 );
LABEL_48:
            v39 = (__int64 *)v34[1];
            if ( v39 )
LABEL_49:
              sub_186B220(v39 - 1);
          }
          sub_186B220(v34);
        }
        return v25;
      }
      v65 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v65 + 8984) == qword_1C7EDB0 )
      {
        if ( *(_BYTE *)(v65 + 2416) )
          goto LABEL_30;
        v66 = sub_BFF090(a1, v106, v12, v110);
        v67 = v110;
        v25 = v66;
        if ( !(_BYTE)v66 )
        {
          v68 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(v68 + 8984) == qword_1C7EDB0 )
          {
            v25 = *(unsigned __int8 *)(v68 + 2416);
            if ( (_BYTE)v25 || !v126 )
              goto LABEL_30;
            v69 = *(_QWORD *)(a1 + 4080);
            v70 = nullptr;
            v112 = *(_DWORD *)(a1 + 564);
            *(_DWORD *)(a1 + 564) = v112 + 1;
            v131 = *(_QWORD *)(a1 + 4072);
            if ( v69 )
            {
              v71 = 0;
              do
              {
                if ( v71 >= *(_DWORD *)(v69 - 4) )
                  break;
                v72 = *(_QWORD *)(v69 + 8LL * v71);
                if ( v72 )
                  ++*(_DWORD *)(v72 + 8);
                if ( v70 )
                {
                  v73 = *(v70 - 1);
                  if ( v73 == *(v70 - 2) )
                  {
                    v90 = (3 * v73 + 1) >> 1;
                    v91 = 8 * v90 + 8;
                    if ( 8 * v73 + 8 >= (unsigned int)v91 || v73 >= v90 )
                    {
                      v9 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v130, "Overflow encountered when expanding vector");
                      *v9 = (char *)off_1C63128;
                      sub_2333C0(v9 + 1, v130);
                      sub_233E40((__int64)v130);
                      __cxa_throw(
                        v9,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v122 = (3 * v73 + 1) >> 1;
                    v114 = v67;
                    v92 = (unsigned int *)sub_186B300(v70 - 2, v91);
                    v93 = v92[1];
                    v70 = v92 + 2;
                    v67 = v114;
                    *v92 = v122;
                    LODWORD(v92) = v93;
                    v76 = &v70[2 * v93];
                    v69 = *(_QWORD *)(a1 + 4080);
                    v75 = (_DWORD)v92 + 1;
                  }
                  else
                  {
                    v74 = v73;
                    v75 = v73 + 1;
                    v76 = &v70[2 * v74];
                  }
                }
                else
                {
                  v118 = v67;
                  v103 = (_QWORD *)sub_186B270(0x18u);
                  *v103 = 2;
                  v67 = v118;
                  v75 = 1;
                  v76 = v103 + 1;
                  v69 = *(_QWORD *)(a1 + 4080);
                  v70 = v76;
                }
                *v76 = v72;
                ++v71;
                *(v70 - 1) = v75;
              }
              while ( v69 );
            }
            v77 = *(_QWORD *)(a1 + 4096);
            v78 = nullptr;
            v133 = *(_QWORD *)(a1 + 4088);
            if ( v77 )
            {
              v79 = 0;
              do
              {
                if ( v79 >= *(_DWORD *)(v77 - 4) )
                  break;
                v80 = *(_QWORD *)(v77 + 8LL * v79);
                if ( v80 )
                  ++*(_DWORD *)(v80 + 8);
                if ( v78 )
                {
                  v81 = *(v78 - 1);
                  if ( v81 == *(v78 - 2) )
                  {
                    v86 = (3 * v81 + 1) >> 1;
                    v87 = 8 * v86 + 8;
                    if ( 8 * v81 + 8 >= (unsigned int)v87 || v81 >= v86 )
                    {
                      v7 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v130, "Overflow encountered when expanding vector");
                      *v7 = (char *)off_1C63128;
                      sub_2333C0(v7 + 1, v130);
                      sub_233E40((__int64)v130);
                      __cxa_throw(
                        v7,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v125 = (3 * v81 + 1) >> 1;
                    v121 = v80;
                    v113 = v67;
                    v88 = (unsigned int *)sub_186B300(v78 - 2, v87);
                    v89 = v88[1];
                    v78 = v88 + 2;
                    v67 = v113;
                    v80 = v121;
                    *v88 = v125;
                    LODWORD(v88) = v89;
                    v84 = &v78[2 * v89];
                    v77 = *(_QWORD *)(a1 + 4096);
                    v83 = (_DWORD)v88 + 1;
                  }
                  else
                  {
                    v82 = v81;
                    v83 = v81 + 1;
                    v84 = &v78[2 * v82];
                  }
                }
                else
                {
                  v124 = v80;
                  v117 = v67;
                  v102 = (_QWORD *)sub_186B270(0x18u);
                  v67 = v117;
                  v80 = v124;
                  *v102 = 2;
                  v84 = v102 + 1;
                  v77 = *(_QWORD *)(a1 + 4096);
                  v83 = 1;
                  v78 = v84;
                }
                *v84 = v80;
                ++v79;
                *(v78 - 1) = v83;
              }
              while ( v77 );
            }
            v132 = v70;
            v136 = v67;
            v135 = v112;
            v134 = v78;
            sub_C04220(a1 + 240, a2, &v131);
            v85 = v134;
            sub_2334C0(&v133);
            v134 = v85;
            sub_2334C0(&v131);
          }
        }
      }
    }
    v34 = (__int64 *)ptr;
    goto LABEL_31;
  }
  return v25;
}

