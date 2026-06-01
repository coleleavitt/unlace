void __fastcall sub_ABCC10(__int64 a1, unsigned int a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  _QWORD *v5; // r14
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  unsigned int *v12; // r13
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  int *v17; // rax
  int v18; // eax
  void *v19; // rbx
  void *v20; // rbx
  int v21; // r12d
  int v22; // r13d
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r12d
  int v27; // r13d
  int v28; // eax
  __int64 v29; // r12
  int v30; // r13d
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r14
  void *v34; // rcx
  int v35; // eax
  void *v36; // rdi
  int v37; // eax
  bool v38; // al
  int v39; // eax
  bool v40; // al
  unsigned int v41; // r14d
  __int64 v42; // rax
  signed int v43; // edx
  char *v44; // r12
  _QWORD *v45; // rax
  __int64 v46; // rax
  void *v47; // r13
  int v48; // r13d
  int v49; // r14d
  int v50; // eax
  __int64 v51; // rsi
  int v52; // edx
  int v53; // r13d
  int v54; // ecx
  int v55; // eax
  __int64 v56; // r13
  int v57; // ecx
  __int64 v58; // rdx
  char *v59; // r8
  __int64 v60; // r14
  int v61; // eax
  void *v62; // rdi
  bool v63; // al
  bool v64; // al
  __int64 v65; // rdx
  unsigned int v66; // eax
  int v67; // eax
  void *v68; // rdi
  bool v69; // al
  bool v70; // al
  int v71; // eax
  int v72; // eax
  void *v73; // rdi
  int v74; // eax
  bool v75; // al
  int v76; // eax
  bool v77; // al
  int v78; // eax
  __int64 v79; // rax
  void *v80; // rdi
  bool v81; // al
  _QWORD *v82; // rax
  unsigned __int64 v83; // rbp
  __int64 v84; // rax
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  _QWORD *v87; // rdi
  __int64 v88; // r14
  __int64 v89; // rax
  __int64 v90; // r13
  _QWORD *v91; // rax
  unsigned int v92; // esi
  __m128 v93; // xmm0
  unsigned int v94; // edx
  __m128 *v95; // rcx
  __int64 v96; // rdi
  char *v97; // rdi
  __int64 v98; // rax
  char *v99; // rbx
  char *v100; // r13
  void *v101; // r12
  char *v102; // rsi
  unsigned int v103; // edx
  unsigned int v104; // ecx
  unsigned int *v105; // rcx
  _QWORD *v106; // rax
  void *v107; // [rsp+8h] [rbp-130h]
  __int64 v108; // [rsp+18h] [rbp-120h]
  char *v109; // [rsp+18h] [rbp-120h]
  char *v110; // [rsp+18h] [rbp-120h]
  __int64 v111; // [rsp+18h] [rbp-120h]
  void *ptr; // [rsp+20h] [rbp-118h] BYREF
  char *v113; // [rsp+28h] [rbp-110h]
  __int64 v114; // [rsp+30h] [rbp-108h]
  void *v115; // [rsp+38h] [rbp-100h]
  void *v116; // [rsp+40h] [rbp-F8h]
  unsigned int v117; // [rsp+48h] [rbp-F0h]
  _DWORD v118[3]; // [rsp+4Ch] [rbp-ECh] BYREF
  unsigned int v119; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int v120; // [rsp+5Ch] [rbp-DCh] BYREF
  _QWORD v121[2]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v122[2]; // [rsp+70h] [rbp-C8h] BYREF
  _QWORD v123[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v124[2]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v125[2]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v126[2]; // [rsp+B0h] [rbp-88h] BYREF
  int v127; // [rsp+C0h] [rbp-78h]
  __int64 v128; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-60h]
  __int64 v130; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v131; // [rsp+E8h] [rbp-50h]
  int v132; // [rsp+F0h] [rbp-48h]
  __int64 v133; // [rsp+F4h] [rbp-44h]
  int v134; // [rsp+FCh] [rbp-3Ch]

  v117 = a2;
  v118[0] = a2;
  v121[0] = 0;
  v121[1] = 0;
  v122[0] = 1;
  v122[1] = 0;
  if ( !(unsigned __int8)sub_AB6070(a1, a2, (__int64)v121) )
  {
    sub_1872CE0("");
    sub_1873130(114, 475);
  }
  v108 = v117;
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v117);
  if ( (unsigned __int8)sub_8EA3B0(*(_QWORD *)(a1 + 16), (__int64)v5) )
  {
    v107 = *(void **)(a1 + 24);
    v6 = sub_15D1F10(*v5);
    v7 = (_DWORD *)sub_16746C0(a1 + 80, v121, v6);
    ptr = v7;
    if ( v7 )
      ++v7[2];
    v8 = *(_QWORD *)(a1 + 1144);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 504);
      *(_DWORD *)(v8 - 4) = 0;
      v10 = *(unsigned int **)(v9 + 8 * v108);
      if ( !v10 || (v11 = &v10[*(v10 - 1)], v11 == v10) )
      {
        v15 = *(_QWORD *)(a1 + 16);
LABEL_14:
        v16 = *(_DWORD *)(v8 - 4);
LABEL_15:
        sub_8EA480(v15, (__int64)v5, (__int64)ptr, v16, v8);
        sub_AB3AA0((__int64)ptr, (__int64)v107);
        goto LABEL_16;
      }
    }
    else
    {
      v10 = *(unsigned int **)(*(_QWORD *)(a1 + 504) + 8 * v108);
      if ( !v10 || (v11 = &v10[*(v10 - 1)], v11 == v10) )
      {
        v15 = *(_QWORD *)(a1 + 16);
        v16 = 0;
        goto LABEL_15;
      }
    }
    v12 = v10;
    do
    {
      v13 = *v12;
      v14 = *v12;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v13) == 0xFF )
        v14 = v13 ^ 1;
      v119 = v14;
      sub_AB8CB0((_QWORD *)(a1 + 1144), &v119);
      ++v12;
    }
    while ( v11 != v12 );
    v8 = *(_QWORD *)(a1 + 1144);
    v15 = *(_QWORD *)(a1 + 16);
    if ( !v8 )
    {
      v16 = 0;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
LABEL_16:
  v17 = *(int **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v108)) + 24) + 8LL);
  if ( *((_BYTE *)v17 + 8) )
    sub_DBF6E(0);
  v18 = *v17;
  v125[0] = 0;
  v125[1] = 0;
  LODWORD(v113) = v18;
  v19 = qword_1C7F2C0;
  v126[0] = 1;
  v126[1] = 0;
  if ( (v121[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v125, v121);
  else
    LODWORD(v125[0]) = v121[0];
  if ( (v122[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v19, v126, v122);
  }
  else
  {
    BYTE4(v126[0]) &= ~1u;
    LODWORD(v126[0]) = v122[0];
  }
  v20 = qword_1C7F2C0;
  v128 = 0;
  v129 = 0;
  v127 = (int)v113;
  v114 = a1 + 552;
  v130 = 1;
  v131 = 0;
  v133 = 0;
  v134 = 0;
  if ( (v125[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v128, v125);
  else
    LODWORD(v128) = v125[0];
  if ( (v126[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v20, &v130, v126);
  }
  else
  {
    BYTE4(v130) &= ~1u;
    LODWORD(v130) = v126[0];
  }
  v21 = v127;
  v132 = v127;
  v22 = sub_182DB30(&v128);
  ptr = &v130;
  v23 = sub_182DB30(&v130);
  v24 = *(unsigned int *)(a1 + 568);
  v25 = v22 + 3 * v23;
  v26 = (v25 << 8) ^ (v21 - v25);
  v27 = (v25 - v26) << 10;
  v28 = v26 - v25 + (v26 ^ ((v25 - v26) << 16));
  v29 = *(_QWORD *)(a1 + 560);
  v30 = v28 ^ v27;
  v31 = 56LL * (v30 & (unsigned int)(v24 - 1));
  v32 = 56 * v24;
  v33 = v29 + v31;
  v34 = (void *)(v29 + 56 * v24);
  if ( v31 != v32 )
  {
    v29 += v31;
    do
    {
      v35 = *(_DWORD *)(v29 + 4);
      if ( v35 == 2 )
      {
        if ( *(_DWORD *)v29 == v30 )
        {
          v36 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v29 + 12) & 1) != 0 || (v128 & 0x100000000LL) != 0 )
          {
            v116 = v34;
            v115 = qword_1C7F2C0;
            v37 = sub_182C7B0(qword_1C7F2C0, v29 + 8, &v128);
            v34 = v116;
            v38 = v37 == 0;
          }
          else
          {
            v38 = *(_DWORD *)(v29 + 8) == (_DWORD)v128;
          }
          if ( v38 )
          {
            if ( (*(_BYTE *)(v29 + 28) & 1) != 0 || (v130 & 0x100000000LL) != 0 )
            {
              v115 = v34;
              v39 = sub_182C7B0(v36, v29 + 24, ptr);
              v34 = v115;
              v40 = v39 == 0;
            }
            else
            {
              v40 = *(_DWORD *)(v29 + 24) == (_DWORD)v130;
            }
            if ( v40 && *(_DWORD *)(v29 + 40) == v132 )
            {
LABEL_40:
              sub_25A130((char *)&v128);
              v41 = *(_DWORD *)(v29 + 48);
              v42 = *(_QWORD *)(a1 + 32);
              v123[0] = 0;
              v123[1] = 0;
              v120 = v41;
              v124[0] = 1;
              v124[1] = 0;
              if ( v42 )
                v43 = *(_DWORD *)(v42 - 4);
              else
                v43 = 0;
              v44 = (char *)v123;
              if ( (int)v41 < v43 )
              {
                v44 = (char *)v123;
                v45 = *(_QWORD **)(v42 + 8LL * v41);
                v115 = (void *)(a1 + 80);
                v46 = sub_15D1F10(*v45);
                if ( (unsigned __int8)sub_1673B10(a1 + 80, v46) )
                {
                  v79 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * v41)) + 24) + 8LL);
                  if ( *(_BYTE *)(v79 + 8) )
                    sub_DBF6E(0);
                  v44 = (char *)v123;
                  if ( (_DWORD)v113 == *(_DWORD *)v79 )
                  {
                    if ( (unsigned __int8)sub_AB6070(a1, v41, (__int64)v123) )
                    {
                      v80 = qword_1C7F2C0;
                      if ( (v121[0] & 0x100000000LL) != 0 || (v123[0] & 0x100000000LL) != 0 )
                      {
                        v113 = (char *)qword_1C7F2C0;
                        v80 = qword_1C7F2C0;
                        if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v121, v123) )
                          goto LABEL_126;
                      }
                      else if ( LODWORD(v121[0]) == LODWORD(v123[0]) )
                      {
LABEL_126:
                        if ( (v122[0] & 0x100000000LL) != 0 || (v124[0] & 0x100000000LL) != 0 )
                          v81 = (unsigned int)sub_182C7B0(v80, v122, v124) == 0;
                        else
                          v81 = LODWORD(v122[0]) == LODWORD(v124[0]);
                        if ( v81 )
                        {
                          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v41) + 8LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v108) + 8LL) )
                          {
                            ++*(_DWORD *)(a1 + 68);
                            sub_AB92E0(a1, v117, v41);
                            v82 = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 16) + 8400LL, 32);
                            v82[1] = 2;
                            v83 = (unsigned __int64)v82;
                            *v82 = off_1C56738;
                            v84 = *(_QWORD *)(a1 + 32);
                            v85 = _mm_cvtsi32_si128(v41);
                            v86 = _mm_cvtsi32_si128(v117);
                            *(_QWORD *)(v83 + 16) = a1;
                            v87 = *(_QWORD **)(v84 + 8LL * v41);
                            v88 = *(_QWORD *)(v84 + 8 * v108);
                            ptr = v87;
                            v89 = v87[1];
                            *(_QWORD *)(v83 + 24) = _mm_unpacklo_epi32(v86, v85).m128i_u64[0];
                            if ( *(_QWORD *)(v88 + 8) != v89 )
                            {
                              v90 = *(_QWORD *)(a1 + 16);
                              v91 = *(_QWORD **)(v90 + 8760);
                              if ( v91 )
                              {
                                v92 = *((_DWORD *)v91 - 2);
                                if ( *((_DWORD *)v91 - 1) == v92 )
                                {
                                  v103 = (3 * v92 + 1) >> 1;
                                  v104 = 24 * v103 + 8;
                                  if ( 24 * v92 + 8 >= v104 || v92 >= v103 )
                                  {
                                    exception = (char **)__cxa_allocate_exception(0x28u);
                                    sub_139F3A(&v128, "Overflow encountered when expanding vector", v3);
                                    *exception = (char *)off_1C63128;
                                    sub_2333C0(exception + 1, &v128);
                                    sub_233E40((__int64)&v128);
                                    __cxa_throw(
                                      exception,
                                      (struct type_info *)&`typeinfo for'default_exception,
                                      (void (*)(void *))sub_230E50);
                                  }
                                  v105 = (unsigned int *)sub_186B300(v91 - 1, v104);
                                  v91 = v105 + 2;
                                  *(_QWORD *)(v90 + 8760) = v105 + 2;
                                  *v105 = (3 * v92 + 1) >> 1;
                                }
                              }
                              else
                              {
                                v106 = (_QWORD *)sub_186B270(0x38u);
                                *v106 = 2;
                                v91 = v106 + 1;
                                *(_QWORD *)(v90 + 8760) = v91;
                              }
                              v93 = _mm_loadh_ps((const double *)&ptr);
                              v94 = *((_DWORD *)v91 - 1);
                              v95 = (__m128 *)&v91[3 * v94];
                              v95[1].m128_u64[0] = v83 | 3;
                              *v95 = v93;
                              *((_DWORD *)v91 - 1) = v94 + 1;
                            }
                            sub_AC6640(v114, v125, &v120);
                          }
LABEL_68:
                          sub_25A130(v44);
                          goto LABEL_72;
                        }
                      }
                    }
                  }
                }
              }
              v128 = 0;
              v47 = qword_1C7F2C0;
              v129 = 0;
              v130 = 1;
              v131 = 0;
              v133 = 0;
              v134 = 0;
              if ( (v125[0] & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v128, v125);
              else
                LODWORD(v128) = v125[0];
              if ( (v126[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(v47, ptr, v126);
              }
              else
              {
                BYTE4(v130) &= ~1u;
                LODWORD(v130) = v126[0];
              }
              v48 = v127;
              v132 = v127;
              v49 = sub_182DB30(&v128);
              v50 = sub_182DB30(ptr);
              v51 = *(unsigned int *)(a1 + 568);
              v52 = v49 + 3 * v50;
              v53 = (v52 << 8) ^ (v48 - v52);
              v54 = (v52 - v53) << 10;
              v55 = v53 - v52 + (v53 ^ ((v52 - v53) << 16));
              v56 = *(_QWORD *)(a1 + 560);
              v57 = v55 ^ v54;
              v58 = 56LL * (v57 & (unsigned int)(v51 - 1));
              v59 = (char *)(v56 + v58);
              v60 = v56 + 56 * v51;
              if ( v58 != 56 * v51 )
              {
                v56 += v58;
                while ( 1 )
                {
                  v61 = *(_DWORD *)(v56 + 4);
                  if ( v61 == 2 )
                  {
                    if ( *(_DWORD *)v56 == v57 )
                    {
                      v62 = qword_1C7F2C0;
                      if ( (*(_BYTE *)(v56 + 12) & 1) != 0 || (v128 & 0x100000000LL) != 0 )
                      {
                        v117 = v57;
                        v113 = v59;
                        v71 = sub_182C7B0(qword_1C7F2C0, v56 + 8, &v128);
                        v59 = v113;
                        v57 = v117;
                        v63 = v71 == 0;
                      }
                      else
                      {
                        v63 = *(_DWORD *)(v56 + 8) == (_DWORD)v128;
                      }
                      if ( v63 )
                      {
                        if ( (*(_BYTE *)(v56 + 28) & 1) != 0 || (v130 & 0x100000000LL) != 0 )
                        {
                          LODWORD(v113) = v57;
                          v110 = v59;
                          v78 = sub_182C7B0(v62, v56 + 24, ptr);
                          v59 = v110;
                          v57 = (int)v113;
                          v64 = v78 == 0;
                        }
                        else
                        {
                          v64 = *(_DWORD *)(v56 + 24) == (_DWORD)v130;
                        }
                        if ( v64 && *(_DWORD *)(v56 + 40) == v132 )
                        {
LABEL_63:
                          v65 = v56 + 56;
                          if ( v60 == v56 + 56 )
                            v65 = *(_QWORD *)(a1 + 560);
                          v66 = *(_DWORD *)(a1 + 572) - 1;
                          if ( *(_DWORD *)(v65 + 4) )
                          {
                            v96 = *(unsigned int *)(a1 + 576);
                            *(_DWORD *)(v56 + 4) = 1;
                            *(_DWORD *)(a1 + 572) = v66;
                            if ( v66 < 0x40 )
                              v66 = 64;
                            *(_DWORD *)(a1 + 576) = v96 + 1;
                            if ( v66 < (int)v96 + 1 && !(unsigned __int8)sub_186AF10(v96) )
                            {
                              v111 = sub_AC65C0(*(unsigned int *)(a1 + 568));
                              sub_AC63B0(
                                *(_QWORD *)(a1 + 560),
                                *(unsigned int *)(a1 + 568),
                                v111,
                                *(unsigned int *)(a1 + 568));
                              v97 = *(char **)(a1 + 560);
                              if ( v97 )
                              {
                                v98 = *(unsigned int *)(a1 + 568);
                                if ( (_DWORD)v98 )
                                {
                                  ptr = *(void **)(a1 + 560);
                                  v113 = (char *)v123;
                                  v99 = v97;
                                  v100 = &v97[56 * v98];
                                  do
                                  {
                                    v101 = qword_1C7F2C0;
                                    sub_182CBA0(qword_1C7F2C0, v99 + 8);
                                    v102 = v99 + 24;
                                    v99 += 56;
                                    sub_182CBA0(v101, v102);
                                  }
                                  while ( v99 != v100 );
                                  v97 = (char *)ptr;
                                  v44 = v113;
                                }
                                sub_186B220(v97);
                              }
                              *(_DWORD *)(a1 + 576) = 0;
                              *(_QWORD *)(a1 + 560) = v111;
                            }
                          }
                          else
                          {
                            *(_DWORD *)(v56 + 4) = 0;
                            *(_DWORD *)(a1 + 572) = v66;
                          }
                          goto LABEL_67;
                        }
                      }
                    }
                  }
                  else if ( !v61 )
                  {
                    goto LABEL_67;
                  }
                  v56 += 56;
                  if ( v60 == v56 )
                  {
                    v56 = *(_QWORD *)(a1 + 560);
                    break;
                  }
                }
              }
              while ( v59 != (char *)v56 )
              {
                v72 = *(_DWORD *)(v56 + 4);
                if ( v72 == 2 )
                {
                  if ( *(_DWORD *)v56 == v57 )
                  {
                    v73 = qword_1C7F2C0;
                    if ( (*(_BYTE *)(v56 + 12) & 1) != 0 || (v128 & 0x100000000LL) != 0 )
                    {
                      v117 = v57;
                      v113 = v59;
                      v74 = sub_182C7B0(qword_1C7F2C0, v56 + 8, &v128);
                      v59 = v113;
                      v57 = v117;
                      v75 = v74 == 0;
                    }
                    else
                    {
                      v75 = *(_DWORD *)(v56 + 8) == (_DWORD)v128;
                    }
                    if ( v75 )
                    {
                      if ( (*(_BYTE *)(v56 + 28) & 1) != 0 || (v130 & 0x100000000LL) != 0 )
                      {
                        LODWORD(v113) = v57;
                        v109 = v59;
                        v76 = sub_182C7B0(v73, v56 + 24, ptr);
                        v59 = v109;
                        v57 = (int)v113;
                        v77 = v76 == 0;
                      }
                      else
                      {
                        v77 = *(_DWORD *)(v56 + 24) == (_DWORD)v130;
                      }
                      if ( v77 && *(_DWORD *)(v56 + 40) == v132 )
                        goto LABEL_63;
                    }
                  }
                }
                else if ( !v72 )
                {
                  break;
                }
                v56 += 56;
              }
LABEL_67:
              sub_25A130((char *)&v128);
              sub_AC6640(v114, v125, v118);
              goto LABEL_68;
            }
          }
        }
      }
      else if ( !v35 )
      {
        goto LABEL_71;
      }
      v29 += 56;
    }
    while ( v34 != (void *)v29 );
    v29 = *(_QWORD *)(a1 + 560);
  }
  for ( ; v33 != v29; v29 += 56 )
  {
    v67 = *(_DWORD *)(v29 + 4);
    if ( v67 == 2 )
    {
      if ( *(_DWORD *)v29 == v30 )
      {
        v68 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v29 + 12) & 1) != 0 || (v128 & 0x100000000LL) != 0 )
        {
          v115 = qword_1C7F2C0;
          v68 = qword_1C7F2C0;
          v69 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v29 + 8, &v128) == 0;
        }
        else
        {
          v69 = *(_DWORD *)(v29 + 8) == (_DWORD)v128;
        }
        if ( v69 )
        {
          v70 = (*(_BYTE *)(v29 + 28) & 1) != 0 || (v130 & 0x100000000LL) != 0
              ? (unsigned int)sub_182C7B0(v68, v29 + 24, ptr) == 0
              : *(_DWORD *)(v29 + 24) == (_DWORD)v130;
          if ( v70 && *(_DWORD *)(v29 + 40) == v132 )
            goto LABEL_40;
        }
      }
    }
    else if ( !v67 )
    {
      break;
    }
  }
LABEL_71:
  sub_25A130((char *)&v128);
  sub_AC6640(v114, v125, v118);
LABEL_72:
  sub_25A130((char *)v125);
  sub_25A130((char *)v121);
}

