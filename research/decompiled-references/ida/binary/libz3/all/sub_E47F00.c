__int64 __fastcall sub_E47F00(__int64 a1, int a2, _QWORD *a3)
{
  char **v3; // r14
  char **v4; // r15
  char **v5; // r15
  char **v6; // r15
  char **exception; // r14
  __int64 v10; // r13
  void (__fastcall ***v11)(void *); // r14
  bool v12; // zf
  __int64 *v13; // rdi
  __int64 v14; // rax
  void (*v15)(void); // rdx
  void (*v16)(); // rdx
  void (*v17)(); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edi
  _QWORD *v22; // r14
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned int *v28; // rax
  void *v29; // rdi
  __int64 v30; // rsi
  unsigned int *v31; // r13
  __int64 v32; // rdi
  void **v33; // rsi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  __int64 v38; // r8
  __int64 v39; // r12
  void (__fastcall ***v40)(void *, void **, __int64, __int64, __int64); // rdi
  void *v41; // rax
  __int64 v42; // r15
  _DWORD *v43; // r12
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  void (*v48)(void); // rax
  unsigned int v49; // ebx
  unsigned int *v50; // r15
  _QWORD *v51; // r12
  unsigned int v52; // eax
  __int64 v53; // rsi
  _QWORD *v54; // rdi
  void (__fastcall ***v55)(_QWORD); // rcx
  void *v56; // rdi
  void *v57; // rcx
  void *v58; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r13
  unsigned int v63; // esi
  unsigned int *v64; // r8
  unsigned int v65; // eax
  unsigned int *v66; // rcx
  unsigned int v67; // eax
  size_t v68; // r15
  __int64 v69; // rax
  _QWORD *v70; // r12
  _QWORD *v71; // r15
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rdi
  unsigned int v76; // ecx
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rsi
  __int64 *v80; // r12
  __int64 v81; // rax
  __int64 v82; // r15
  _QWORD *v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rsi
  int v86; // eax
  unsigned int v87; // eax
  __int64 v88; // rsi
  unsigned int v89; // r8d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rsi
  _QWORD *v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // rsi
  int v96; // eax
  unsigned int **v97; // rsi
  _DWORD *v98; // rdx
  int v99; // eax
  void *v100; // r14
  void *v101; // r14
  _DWORD *v102; // rdx
  __int64 v103; // rax
  int v104; // ecx
  __int64 v105; // rsi
  __int64 v106; // r13
  unsigned int v107; // eax
  unsigned int *v108; // r10
  unsigned int v109; // esi
  unsigned int *v110; // r15
  unsigned int v111; // ecx
  _BYTE *v112; // rax
  size_t v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdi
  unsigned int v118; // r9d
  unsigned int v119; // eax
  unsigned int *v120; // rax
  unsigned int v121; // r8d
  size_t v122; // rsi
  unsigned int *v123; // rax
  __int64 v124; // rsi
  unsigned __int64 v125; // rdi
  unsigned int v126; // r13d
  unsigned int v127; // ecx
  unsigned int *v128; // rax
  __int64 v129; // rsi
  void *v130; // rdi
  _QWORD *v131; // rax
  unsigned int v132; // ecx
  __int64 v133; // rax
  _DWORD *v134; // rax
  int v135; // edx
  _QWORD *v136; // rax
  unsigned int v137; // edi
  unsigned int v138; // ecx
  unsigned int v139; // edx
  unsigned int *v140; // rdx
  unsigned int v141; // r15d
  size_t v142; // rsi
  unsigned int *v143; // rdx
  _QWORD *v144; // rax
  __int64 v145; // [rsp-8h] [rbp-F8h]
  _Unwind_Exception *v146; // [rsp+0h] [rbp-F0h]
  int n; // [rsp+8h] [rbp-E8h]
  __int64 na; // [rsp+8h] [rbp-E8h]
  int src; // [rsp+10h] [rbp-E0h]
  unsigned int *srca; // [rsp+10h] [rbp-E0h]
  unsigned int *srcb; // [rsp+10h] [rbp-E0h]
  _BYTE *srcc; // [rsp+10h] [rbp-E0h]
  _DWORD *v153; // [rsp+18h] [rbp-D8h]
  unsigned int v154; // [rsp+18h] [rbp-D8h]
  __int64 v155; // [rsp+18h] [rbp-D8h]
  unsigned int v156; // [rsp+18h] [rbp-D8h]
  unsigned int *v157; // [rsp+18h] [rbp-D8h]
  __int64 v158; // [rsp+20h] [rbp-D0h]
  unsigned int v159; // [rsp+20h] [rbp-D0h]
  _QWORD *v160; // [rsp+28h] [rbp-C8h]
  int v161; // [rsp+28h] [rbp-C8h]
  int v162; // [rsp+28h] [rbp-C8h]
  __int64 *v163; // [rsp+28h] [rbp-C8h]
  unsigned int *v164; // [rsp+28h] [rbp-C8h]
  unsigned int v165; // [rsp+28h] [rbp-C8h]
  unsigned int v166; // [rsp+28h] [rbp-C8h]
  void *v167; // [rsp+40h] [rbp-B0h] BYREF
  void *ptr; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v169; // [rsp+50h] [rbp-A0h] BYREF
  __int64 *v170; // [rsp+58h] [rbp-98h] BYREF
  __int64 v171; // [rsp+60h] [rbp-90h] BYREF
  _QWORD *v172; // [rsp+68h] [rbp-88h]
  unsigned int *v173; // [rsp+70h] [rbp-80h] BYREF
  _QWORD *v174; // [rsp+78h] [rbp-78h]
  void *v175; // [rsp+80h] [rbp-70h] BYREF
  size_t v176; // [rsp+88h] [rbp-68h]
  char v177[16]; // [rsp+90h] [rbp-60h] BYREF
  __int64 v178[10]; // [rsp+A0h] [rbp-50h] BYREF

  LODWORD(v158) = a2;
  if ( !*(_QWORD *)(a1 + 176) )
    return (unsigned int)-1;
  *(_DWORD *)(a1 + 152) = 0;
  v160 = *(_QWORD **)(a1 + 120);
  v10 = sub_186B270(0xA0u);
  sub_E395E0(v10, (__int64)v160);
  v11 = *(void (__fastcall ****)(void *))(a1 + 168);
  ++*(_DWORD *)(v10 + 48);
  if ( v11 )
  {
    v12 = (*((_DWORD *)v11 + 12))-- == 1;
    if ( v12 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v13 = *(__int64 **)(a1 + 176);
  *(_QWORD *)(a1 + 168) = v10;
  v14 = *v13;
  v15 = *(void (**)(void))(*v13 + 152);
  if ( v15 != nullsub_846 )
  {
    v15();
    v13 = *(__int64 **)(a1 + 176);
    v14 = *v13;
  }
  v16 = *(void (**)())(v14 + 168);
  if ( v16 != nullsub_97 )
  {
    ((void (__fastcall *)(__int64 *, __int64))v16)(v13, a1 + 192);
    v13 = *(__int64 **)(a1 + 176);
    v14 = *v13;
  }
  v17 = *(void (**)())(v14 + 112);
  if ( v17 != nullsub_93 )
    ((void (__fastcall *)(__int64 *, __int64))v17)(v13, a1 + 80);
  v153 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2A30(v153, v160, *(unsigned __int8 *)(a1 + 201), *(unsigned __int8 *)(a1 + 200), *(unsigned __int8 *)(a1 + 202));
  v21 = (int)v153;
  v22 = *(_QWORD **)(a1 + 128);
  ++v153[8];
  v167 = v153;
  if ( v22 )
  {
    v23 = &v22[*((unsigned int *)v22 - 1)];
    if ( v22 != v23 )
    {
      while ( 1 )
      {
        sub_EDBA20(v21, *v22++, 0, v146, n, src, (__int64)v153, v158);
        if ( v23 == v22 )
          break;
        v21 = (int)v167;
      }
    }
  }
  if ( (_DWORD)v158 )
  {
    v24 = &a3[(unsigned int)v158];
    do
    {
      while ( 1 )
      {
        v26 = sub_15DE060(v160, *a3, v18, v19, v20);
        v27 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        v28 = (unsigned int *)sub_15D3210(v160, *a3);
        v29 = v167;
        v30 = *a3;
        v31 = v28;
        if ( v28 )
        {
          *v28 = (*v28 + 1) & 0x3FFFFFFF | *v28 & 0xC0000000;
          sub_EDB570(v29, v30, v27, v28);
          v18 = (*v31 + 0x3FFFFFFF) & 0x3FFFFFFF;
          v25 = v18 | *v31 & 0xC0000000;
          *v31 = v25;
          if ( (v25 & 0x3FFFFFFF) == 0 )
          {
            v18 = v160[83];
            if ( v18 )
            {
              v60 = *(unsigned int *)(v18 - 4);
              if ( (_DWORD)v60 == *(_DWORD *)(v18 - 8) )
              {
                v76 = (unsigned int)(3 * v60 + 1) >> 1;
                v77 = 8 * v76 + 8;
                if ( 8 * (int)v60 + 8 >= (unsigned int)v77 || (unsigned int)v60 >= v76 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v178, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v178);
                  sub_233E40((__int64)v178);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v154 = (unsigned int)(3 * v60 + 1) >> 1;
                v78 = (unsigned int *)sub_186B300((void *)(v18 - 8), v77);
                v79 = v78[1];
                v18 = (__int64)(v78 + 2);
                v160[83] = v78 + 2;
                *v78 = v154;
                v19 = (unsigned int)(v79 + 1);
                *(_QWORD *)&v78[2 * v79 + 2] = v31;
                v78[1] = v19;
              }
              else
              {
                v19 = (unsigned int)(v60 + 1);
                *(_QWORD *)(v18 + 8 * v60) = v31;
                *(_DWORD *)(v18 - 4) = v19;
              }
            }
            else
            {
              v115 = sub_186B270(0x18u);
              v19 = 1;
              v18 = v115 + 8;
              *(_QWORD *)v115 = 2;
              v160[83] = v115 + 8;
              *(_QWORD *)(v115 + 8) = v31;
              *(_DWORD *)(v115 + 4) = 1;
            }
            while ( (_DWORD)v19 )
            {
              v61 = (unsigned int)(v19 - 1);
              v62 = *(_QWORD *)(v18 + 8 * v61);
              v63 = v19 - 1;
              *(_DWORD *)(v18 - 4) = v61;
              if ( *(char *)(v62 + 3) < 0 )
              {
                v74 = *(_QWORD *)(v62 + 8);
                if ( v74 )
                {
                  v75 = v160[81];
                  v12 = (*(_DWORD *)(v74 + 8))-- == 1;
                  if ( v12 )
                    sub_15D7BC0(v75, v74);
                }
                sub_17E9C40(v160[82], 16, v62);
              }
              else
              {
                v64 = *(unsigned int **)(v62 + 8);
                v65 = (*v64 + 0x3FFFFFFF) & 0x3FFFFFFF | *v64 & 0xC0000000;
                *v64 = v65;
                if ( (v65 & 0x3FFFFFFF) == 0 )
                {
                  if ( v63 == *(_DWORD *)(v18 - 8) )
                  {
                    srca = v64;
                    v118 = (3 * v63 + 1) >> 1;
                    v119 = 8 * v118 + 8;
                    if ( 8 * (int)v19 >= v119 || v63 >= v118 )
                    {
LABEL_181:
                      v3 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v178, "Overflow encountered when expanding vector");
                      *v3 = (char *)off_1C63128;
                      sub_2333C0(v3 + 1, v178);
                      sub_233E40((__int64)v178);
                      __cxa_throw(
                        v3,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v120 = (unsigned int *)sub_186B300((void *)(v18 - 8), v119);
                    v98 = v120 + 2;
                    v64 = srca;
                    v160[83] = v120 + 2;
                    *v120 = (3 * v63 + 1) >> 1;
                  }
                  else
                  {
                    v98 = (_DWORD *)v160[83];
                  }
                  v99 = *(v98 - 1);
                  *(_QWORD *)&v98[2 * v99] = v64;
                  *(v98 - 1) = v99 + 1;
                }
                v66 = *(unsigned int **)(v62 + 16);
                v67 = (*v66 + 0x3FFFFFFF) & 0x3FFFFFFF | *v66 & 0xC0000000;
                *v66 = v67;
                if ( (v67 & 0x3FFFFFFF) == 0 )
                {
                  v93 = (_QWORD *)v160[83];
                  if ( v93 )
                  {
                    v94 = *((_DWORD *)v93 - 1);
                    if ( v94 == *((_DWORD *)v93 - 2) )
                    {
                      srcb = v66;
                      v121 = (3 * v94 + 1) >> 1;
                      v122 = 8 * v121 + 8;
                      if ( 8 * v94 + 8 >= (unsigned int)v122 )
                        goto LABEL_181;
                      v156 = (3 * v94 + 1) >> 1;
                      if ( v94 >= v121 )
                        goto LABEL_181;
                      v123 = (unsigned int *)sub_186B300(v93 - 1, v122);
                      v124 = v123[1];
                      v93 = v123 + 2;
                      v160[83] = v123 + 2;
                      v66 = srcb;
                      *v123 = v156;
                      LODWORD(v123) = v124;
                      v97 = (unsigned int **)&v93[v124];
                      v96 = (_DWORD)v123 + 1;
                    }
                    else
                    {
                      v95 = v94;
                      v96 = v94 + 1;
                      v97 = (unsigned int **)&v93[v95];
                    }
                  }
                  else
                  {
                    v157 = v66;
                    v136 = (_QWORD *)sub_186B270(0x18u);
                    v66 = v157;
                    *v136 = 2;
                    v93 = v136 + 1;
                    v160[83] = v136 + 1;
                    v97 = (unsigned int **)(v136 + 1);
                    v96 = 1;
                  }
                  *v97 = v66;
                  *((_DWORD *)v93 - 1) = v96;
                }
                sub_17E9C40(v160[82], 24, v62);
              }
              v18 = v160[83];
              if ( !v18 )
                break;
              v19 = *(unsigned int *)(v18 - 4);
            }
          }
        }
        else
        {
          sub_EDB570(v167, v30, v27, 0);
        }
        if ( v27 )
        {
          v12 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++a3 == v24 )
          goto LABEL_27;
      }
      ++a3;
      sub_15D7BC0(v160, v27);
    }
    while ( a3 != v24 );
  }
LABEL_27:
  v175 = v177;
  strcpy(v177, "unknown");
  v32 = *(_QWORD *)(a1 + 176);
  v33 = &v167;
  v172 = v160;
  v174 = v160;
  ptr = nullptr;
  v171 = 0;
  v173 = nullptr;
  v176 = 7;
  v169 = 0;
  v34 = sub_EE5780(
          v32,
          (unsigned int)&v167,
          (unsigned int)&ptr,
          (unsigned int)&v169,
          (unsigned int)&v171,
          (unsigned int)&v173,
          (__int64)&v175);
  v37 = *(_QWORD *)(a1 + 168);
  v38 = v145;
  if ( v34 == -1 )
  {
    *(_DWORD *)(v37 + 52) = -1;
    goto LABEL_30;
  }
  if ( v34 == 1 )
  {
    *(_DWORD *)(v37 + 52) = 1;
    goto LABEL_30;
  }
  *(_DWORD *)(v37 + 52) = 0;
  v68 = v176;
  if ( v176 && &v175 != (void **)(v37 + 128) )
  {
    v112 = *(_BYTE **)(v37 + 128);
    v36 = v37 + 144;
    if ( v112 == (_BYTE *)(v37 + 144) )
    {
      if ( v176 <= 0xF )
        goto LABEL_131;
      if ( (v176 & 0x8000000000000000LL) == 0LL )
      {
        if ( v176 <= 0x1D )
        {
          na = 30;
          v125 = 31;
          goto LABEL_157;
        }
        goto LABEL_156;
      }
    }
    else
    {
      v113 = *(_QWORD *)(v37 + 144);
      if ( v113 >= v176 )
      {
LABEL_131:
        if ( v68 == 1 )
        {
          v35 = *(unsigned __int8 *)v175;
          *v112 = v35;
        }
        else
        {
          memcpy(v112, v175, v68);
        }
        v114 = *(_QWORD *)(v37 + 128);
        *(_QWORD *)(v37 + 136) = v68;
        *(_BYTE *)(v114 + v68) = 0;
        goto LABEL_76;
      }
      if ( (v176 & 0x8000000000000000LL) == 0LL )
      {
        na = 2 * v113;
        if ( v176 < 2 * v113 )
        {
          v125 = 2 * v113 + 1;
          if ( (v113 & 0x4000000000000000LL) != 0 )
            goto LABEL_152;
          goto LABEL_157;
        }
LABEL_156:
        na = v176;
        v125 = v176 + 1;
        if ( (__int64)(v176 + 1) < 0 )
LABEL_152:
          std::__throw_bad_alloc();
LABEL_157:
        v112 = (_BYTE *)operator new(v125);
        v130 = *(void **)(v37 + 128);
        if ( (void *)(v37 + 144) != v130 )
        {
          srcc = v112;
          operator delete(v130, *(_QWORD *)(v37 + 144) + 1LL);
          v112 = srcc;
        }
        v36 = na;
        *(_QWORD *)(v37 + 128) = v112;
        *(_QWORD *)(v37 + 144) = na;
        goto LABEL_131;
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_76:
  v33 = (void **)(unsigned int)v158;
  if ( !(_DWORD)v158 )
  {
    v69 = *(_QWORD *)(a1 + 160);
    if ( !v69 || (v36 = *(unsigned int *)(v69 - 4), !(_DWORD)v36) )
    {
      v70 = *(_QWORD **)(a1 + 144);
      if ( v70 )
      {
        v71 = &v70[*((unsigned int *)v70 - 1)];
        if ( v70 >= v71 )
          goto LABEL_135;
        do
        {
          v72 = *v70;
          if ( *v70 )
          {
            v73 = *(_QWORD *)(a1 + 136);
            v12 = (*(_DWORD *)(v72 + 8))-- == 1;
            if ( v12 )
              sub_15D7BC0(v73, v72);
          }
          ++v70;
        }
        while ( v70 < v71 );
        v70 = *(_QWORD **)(a1 + 144);
        if ( v70 )
LABEL_135:
          *((_DWORD *)v70 - 1) = 0;
      }
      v33 = (void **)(a1 + 136);
      sub_ED6190(v167, a1 + 136);
      *(_DWORD *)(a1 + 152) = 1;
    }
  }
LABEL_30:
  v39 = *((_QWORD *)v167 + 1);
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = *(void (__fastcall ****)(void *, void **, __int64, __int64, __int64))(a1 + 184);
  if ( v40 )
  {
    v12 = (*((_DWORD *)v40 + 2))-- == 1;
    if ( v12 )
    {
      (**v40)(v40, v33, v35, v36, v38);
      sub_186B220(v40);
    }
  }
  *(_QWORD *)(a1 + 184) = v39;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 176) + 136LL))(
    *(_QWORD *)(a1 + 176),
    *(_QWORD *)(a1 + 168) + 72LL,
    v35,
    v36,
    v38);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 176) + 136LL))(*(_QWORD *)(a1 + 176), a1 + 208);
  v41 = ptr;
  v42 = *(_QWORD *)(a1 + 168);
  if ( ptr )
    ++*((_DWORD *)ptr + 4);
  v43 = *(_DWORD **)(v42 + 88);
  if ( v43 && (v12 = v43[4] == 1, --v43[4], v12) )
  {
    (**(void (__fastcall ***)(_DWORD *))v43)(v43);
    sub_186B220(v43);
    v41 = ptr;
    v44 = *(_QWORD *)(a1 + 168);
  }
  else
  {
    v44 = v42;
  }
  *(_QWORD *)(v42 + 88) = v41;
  v45 = *(_QWORD *)(v44 + 112);
  v46 = v171;
  if ( v45 != v171 )
  {
    if ( v45 )
    {
      v47 = *(_QWORD *)(v44 + 120);
      v12 = (*(_DWORD *)(v45 + 8))-- == 1;
      if ( v12 )
      {
        sub_15D7BC0(v47, v45);
        v46 = v171;
      }
    }
    *(_QWORD *)(v44 + 112) = v46;
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
  }
  if ( *(_BYTE *)(a1 + 202) )
  {
    v170 = nullptr;
    sub_15D6A80(v160, v173, &v170);
    v80 = v170;
    if ( v170 )
    {
      v81 = *((unsigned int *)v170 - 1);
      if ( !(_DWORD)v81 )
        goto LABEL_109;
      v82 = *v170;
      v163 = &v170[v81];
      v155 = *(_QWORD *)(a1 + 168);
      v83 = *(_QWORD **)(v155 + 104);
      if ( *v170 )
        ++*(_DWORD *)(v82 + 8);
      if ( v83 )
        goto LABEL_103;
      v84 = (_QWORD *)sub_186B270(0x18u);
      v83 = v84 + 1;
      *v84 = 2;
      v85 = v84 + 1;
      *(_QWORD *)(v155 + 104) = v84 + 1;
      v86 = 1;
      while ( 1 )
      {
        *v85 = v82;
        ++v80;
        *((_DWORD *)v83 - 1) = v86;
        if ( v163 == v80 )
          break;
        v82 = *v80;
        if ( *v80 )
          ++*(_DWORD *)(v82 + 8);
LABEL_103:
        v87 = *((_DWORD *)v83 - 1);
        if ( v87 == *((_DWORD *)v83 - 2) )
        {
          v89 = (3 * v87 + 1) >> 1;
          v90 = 8 * v89 + 8;
          if ( 8 * v87 + 8 >= (unsigned int)v90 || v87 >= v89 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v178, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v178);
            sub_233E40((__int64)v178);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v159 = (3 * v87 + 1) >> 1;
          v91 = (unsigned int *)sub_186B300(v83 - 1, v90);
          v92 = v91[1];
          v83 = v91 + 2;
          *(_QWORD *)(v155 + 104) = v91 + 2;
          *v91 = v159;
          LODWORD(v91) = v92;
          v85 = &v83[v92];
          v86 = (_DWORD)v91 + 1;
        }
        else
        {
          v88 = v87;
          v86 = v87 + 1;
          v85 = &v83[v88];
        }
      }
      v80 = v170;
      if ( v170 )
LABEL_109:
        sub_186B220(v80 - 1);
    }
  }
  v48 = *(void (**)(void))(**(_QWORD **)(a1 + 176) + 152LL);
  if ( v48 != nullsub_846 )
    v48();
  v49 = *(_DWORD *)(*(_QWORD *)(a1 + 168) + 52LL);
  if ( v169 )
    sub_186B220((void *)(v169 - 8));
  if ( v175 != v177 )
    operator delete(v175, *(_QWORD *)v177 + 1LL);
  v50 = v173;
  if ( v173 )
  {
    v51 = v174;
    v52 = (*v173 + 0x3FFFFFFF) & 0x3FFFFFFF | *v173 & 0xC0000000;
    *v173 = v52;
    if ( (v52 & 0x3FFFFFFF) == 0 )
    {
      v102 = (_DWORD *)v51[83];
      if ( v102 )
      {
        v103 = (unsigned int)*(v102 - 1);
        if ( (_DWORD)v103 == *(v102 - 2) )
        {
          v126 = (unsigned int)(3 * v103 + 1) >> 1;
          v127 = 8 * v126 + 8;
          if ( 8 * (int)v103 + 8 >= v127 || (unsigned int)v103 >= v126 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v178, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v178);
            sub_233E40((__int64)v178);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v128 = (unsigned int *)sub_186B300(v102 - 2, v127);
          v129 = v128[1];
          v102 = v128 + 2;
          v51[83] = v128 + 2;
          v104 = v129 + 1;
          *v128 = v126;
          *(_QWORD *)&v128[2 * v129 + 2] = v50;
          v128[1] = v129 + 1;
        }
        else
        {
          v104 = v103 + 1;
          *(_QWORD *)&v102[2 * v103] = v50;
          *(v102 - 1) = v103 + 1;
        }
      }
      else
      {
        v133 = sub_186B270(0x18u);
        v104 = 1;
        v102 = (_DWORD *)(v133 + 8);
        *(_QWORD *)v133 = 2;
        v51[83] = v133 + 8;
        *(_QWORD *)(v133 + 8) = v50;
        *(_DWORD *)(v133 + 4) = 1;
      }
      while ( v104 )
      {
        v105 = (unsigned int)(v104 - 1);
        v106 = *(_QWORD *)&v102[2 * v105];
        v107 = v104 - 1;
        *(v102 - 1) = v105;
        if ( *(char *)(v106 + 3) < 0 )
        {
          v116 = *(_QWORD *)(v106 + 8);
          if ( v116 )
          {
            v117 = v51[81];
            v12 = (*(_DWORD *)(v116 + 8))-- == 1;
            if ( v12 )
              sub_15D7BC0(v117, v116);
          }
          sub_17E9C40(v51[82], 16, v106);
        }
        else
        {
          v108 = *(unsigned int **)(v106 + 8);
          v164 = v108;
          v109 = (*v108 + 0x3FFFFFFF) & 0x3FFFFFFF | *v108 & 0xC0000000;
          *v108 = v109;
          if ( (v109 & 0x3FFFFFFF) == 0 )
          {
            if ( v107 == *(v102 - 2) )
            {
              v141 = (3 * v107 + 1) >> 1;
              v142 = 8 * v141 + 8;
              if ( 8 * v104 >= (unsigned int)v142 || v107 >= v141 )
              {
LABEL_182:
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v178, "Overflow encountered when expanding vector");
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v178);
                sub_233E40((__int64)v178);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v143 = (unsigned int *)sub_186B300(v102 - 2, v142);
              v134 = v143 + 2;
              v51[83] = v143 + 2;
              *v143 = v141;
            }
            else
            {
              v134 = (_DWORD *)v51[83];
            }
            v135 = *(v134 - 1);
            *(_QWORD *)&v134[2 * v135] = v164;
            *(v134 - 1) = v135 + 1;
          }
          v110 = *(unsigned int **)(v106 + 16);
          v111 = (*v110 + 0x3FFFFFFF) & 0x3FFFFFFF | *v110 & 0xC0000000;
          *v110 = v111;
          v165 = v111 & 0x3FFFFFFF;
          if ( (v111 & 0x3FFFFFFF) == 0 )
          {
            v131 = (_QWORD *)v51[83];
            if ( v131 )
            {
              v132 = *((_DWORD *)v131 - 1);
              v165 = v132;
              if ( *((_DWORD *)v131 - 2) == v132 )
              {
                v137 = *((_DWORD *)v131 - 1);
                v138 = (3 * v132 + 1) >> 1;
                v139 = 8 * v138 + 8;
                if ( 8 * v137 + 8 >= v139 )
                  goto LABEL_182;
                v166 = v138;
                if ( v137 >= v138 )
                  goto LABEL_182;
                v140 = (unsigned int *)sub_186B300(v131 - 1, v139);
                v131 = v140 + 2;
                v51[83] = v140 + 2;
                *v140 = v166;
                v165 = v140[1];
              }
            }
            else
            {
              v144 = (_QWORD *)sub_186B270(0x18u);
              *v144 = 2;
              v131 = v144 + 1;
              v51[83] = v131;
            }
            v131[v165] = v110;
            *((_DWORD *)v131 - 1) = v165 + 1;
          }
          sub_17E9C40(v51[82], 24, v106);
        }
        v102 = (_DWORD *)v51[83];
        if ( !v102 )
          break;
        v104 = *(v102 - 1);
      }
    }
  }
  v53 = v171;
  if ( v171 )
  {
    v54 = v172;
    v12 = (*(_DWORD *)(v171 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v54, v53);
  }
  v55 = (void (__fastcall ***)(_QWORD))ptr;
  v56 = ptr;
  if ( ptr )
  {
    v161 = *((_DWORD *)ptr + 4);
    *((_DWORD *)ptr + 4) = v161 - 1;
    if ( v161 == 1 )
    {
      v100 = v55;
      (**v55)(v56);
      sub_186B220(v100);
    }
  }
  v57 = v167;
  v58 = v167;
  if ( v167 )
  {
    v162 = *((_DWORD *)v167 + 8);
    *((_DWORD *)v167 + 8) = v162 - 1;
    if ( v162 == 1 )
    {
      v101 = v57;
      sub_ED44E0(v58);
      sub_186B220(v101);
    }
  }
  return v49;
}

