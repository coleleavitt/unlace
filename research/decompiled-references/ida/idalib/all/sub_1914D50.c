__int64 __fastcall sub_1914D50(__int64 *a1, unsigned __int64 a2, __int64 a3, _BOOL4 *a4, int a5, __m128 a6, __m128 a7)
{
  _QWORD *v7; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r13d
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned __int64 v33; // r8
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // r9
  _WORD *v37; // r8
  unsigned int *v38; // rdi
  __int64 v39; // rbp
  unsigned int *v40; // r12
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rdx
  _QWORD *v43; // r14
  _QWORD *v44; // rbx
  _QWORD *v45; // rdi
  void *v46; // rdi
  void **v47; // r14
  void **v48; // rbx
  double v49; // xmm0_8
  char v50; // al
  __int64 v51; // rcx
  unsigned int *v52; // r12
  __int64 v53; // r9
  __int64 *v54; // r8
  void *v55; // rsi
  unsigned int v56; // eax
  char v57; // dl
  __int64 v58; // rcx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rbp
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // rax
  _QWORD *v65; // r15
  _QWORD *v66; // rbx
  _QWORD *v67; // rdi
  void *v68; // rdi
  void **v69; // r15
  void **v70; // rbx
  double v71; // xmm0_8
  unsigned int *v72; // r13
  __int64 *v73; // rbx
  unsigned int v74; // edx
  __int64 v75; // rcx
  bool v76; // r12
  __int64 (__fastcall *v77)(__int64, __int64, __int64, unsigned int); // rax
  _BOOL4 *v78; // rsi
  __int64 v79; // rbp
  char v80; // al
  bool v81; // zf
  __int64 *v82; // rbx
  unsigned int *v83; // r13
  unsigned int *v84; // rbp
  unsigned int v85; // edx
  __int64 v86; // rcx
  __int64 v87; // rdx
  char v88; // dl
  __int64 v89; // rax
  int v90; // eax
  __int64 (__fastcall *v91)(__int64, __int64, __int64, unsigned int); // rax
  __int64 v92; // rsi
  bool v93; // bp
  unsigned int *v94; // r13
  __int64 *v95; // rbx
  unsigned int v96; // edx
  __int64 v97; // rcx
  __int64 v98; // rdx
  double v99; // xmm0_8
  unsigned int *v100; // r13
  __int64 *v101; // rbx
  unsigned int *v102; // rbp
  unsigned int v103; // edx
  __int64 v104; // rcx
  char v105; // dl
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r13
  void *v112; // rax
  _QWORD *v113; // rax
  unsigned __int64 v114; // [rsp+0h] [rbp-2E8h]
  __int64 *v115; // [rsp+0h] [rbp-2E8h]
  __int64 *v116; // [rsp+8h] [rbp-2E0h]
  _WORD *v117; // [rsp+18h] [rbp-2D0h]
  _BOOL4 v118; // [rsp+2Ch] [rbp-2BCh] BYREF
  __int16 v119; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int **v120; // [rsp+38h] [rbp-2B0h]
  unsigned int v121; // [rsp+40h] [rbp-2A8h] BYREF
  char v122; // [rsp+44h] [rbp-2A4h]
  __int64 v123; // [rsp+48h] [rbp-2A0h] BYREF
  unsigned int v124; // [rsp+50h] [rbp-298h]
  char v125; // [rsp+54h] [rbp-294h]
  void *v126; // [rsp+80h] [rbp-268h] BYREF
  void *v127; // [rsp+88h] [rbp-260h]
  void *v128; // [rsp+90h] [rbp-258h]
  char v129; // [rsp+98h] [rbp-250h]
  _BYTE v130[72]; // [rsp+A0h] [rbp-248h] BYREF
  unsigned __int8 *v131; // [rsp+E8h] [rbp-200h]
  int v132; // [rsp+F0h] [rbp-1F8h]
  char v133; // [rsp+F8h] [rbp-1F0h]
  __int64 v134; // [rsp+100h] [rbp-1E8h]
  void *v135; // [rsp+110h] [rbp-1D8h] BYREF
  void *v136; // [rsp+118h] [rbp-1D0h]
  void *v137; // [rsp+120h] [rbp-1C8h]
  char v138; // [rsp+128h] [rbp-1C0h]
  unsigned __int8 *v139[10]; // [rsp+130h] [rbp-1B8h] BYREF
  int v140; // [rsp+180h] [rbp-168h]
  char v141; // [rsp+188h] [rbp-160h]
  __int64 v142; // [rsp+190h] [rbp-158h]
  unsigned int *v143; // [rsp+1A0h] [rbp-148h] BYREF
  __int64 v144; // [rsp+1A8h] [rbp-140h]
  _QWORD v145[39]; // [rsp+1B0h] [rbp-138h] BYREF

  v7 = (_QWORD *)a2;
  v16 = sub_EEB7E0(a2, a2, *(double *)a6.m128_u64);
  if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 )
  {
    v17 = *((_BYTE *)a4 + 8);
    *(_WORD *)((char *)&v144 + 1) = 1;
    LOBYTE(v144) = v17;
    v143 = (unsigned int *)off_2C5AE08;
    v145[0] = a4;
    v18 = sub_1BF9B70(a1, v16, a2, &v143);
    if ( v18 == 1 )
      return 1;
    v7 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*(_WORD *)(v18 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0x10
      || !sub_F61920(*(_QWORD *)(v7[1] & 0xFFFFFFFFFFFFFFF0LL), v16, v19, v20, v21, v22) )
    {
      return 1;
    }
  }
  else if ( !sub_F61920(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v13, v14, v15) )
  {
    if ( !*((_BYTE *)a4 + 8) )
    {
      v49 = (**(double (__fastcall ***)(unsigned int **, _BOOL4 *, __int64 *, _QWORD, _QWORD))a4)(
              &v143,
              a4,
              a1,
              v16,
              *(_QWORD *)(a2 + 8));
      v135 = (void *)sub_EEC8C0(a2, (__int64)a4, v49);
      sub_1587DB0((__int64)&v143, (__int64 *)&v135);
      sub_15F7200(&v143);
    }
    return 1;
  }
  v29 = sub_19146F0((__int64)a1, v7, v25, v26, v27, v28, a6, a7);
  if ( v29 == 1 )
    return 1;
  v32 = a1[31];
  v33 = v29 & 0xFFFFFFFFFFFFFFFELL;
  v114 = v29 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 )
  {
    v116 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    v50 = sub_C3EA40(v33, v32, nullptr, v30, v33, v31);
    v33 = (unsigned __int64)v116;
    if ( !v50 )
    {
      v32 = a1[31];
      goto LABEL_9;
    }
    v52 = (unsigned int *)v145;
    v143 = (unsigned int *)v145;
    v144 = 0x800000000LL;
    if ( a3 )
    {
      sub_C3BE30((__int64)&v135, v116, a1[31], (__int64)&v143, (__int64)v116, v31);
      v54 = v116;
      if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
      {
        operator delete[](*(void **)a3);
        v54 = v116;
      }
      v55 = v135;
      v56 = (unsigned int)v136;
      v57 = BYTE4(v136);
      *(_QWORD *)a3 = v135;
      v58 = *(unsigned __int16 *)v54;
      *(_DWORD *)(a3 + 8) = v56;
      LOWORD(v58) = v58 & 0x1FF;
      *(_BYTE *)(a3 + 12) = v57;
      if ( (_WORD)v58 != 61 )
      {
        LODWORD(v127) = v56;
        if ( v56 > 0x40 )
        {
          v115 = v54;
          sub_2205510(&v126);
          v57 = *(_BYTE *)(a3 + 12);
          v56 = (unsigned int)v127;
          v55 = v126;
          v54 = v115;
        }
        else
        {
          v126 = v55;
        }
        v59 = (_QWORD *)a1[31];
        BYTE4(v127) = v57;
        v136 = v55;
        BYTE4(v137) = v57;
        BYTE4(v135) &= ~1u;
        LODWORD(v135) = 2;
        LODWORD(v127) = 0;
        LODWORD(v137) = v56;
        v114 = sub_C09C20(v59, (__int64)v54, (int *)&v135, v58, (__int64)v54, v53);
        if ( (unsigned int)v135 > 1 )
          sub_A4F8E0((int *)&v135);
        if ( (unsigned int)v127 > 0x40 && v126 )
          operator delete[](v126);
      }
    }
    else
    {
      if ( (*(_WORD *)v116 & 0x1FF) == 0x3D )
        goto LABEL_95;
      v114 = sub_C09AC0((_QWORD *)a1[31], v114, 0, 0, (__int64)v116, v31);
    }
    v60 = (unsigned int)v144;
    if ( (_DWORD)v144 )
    {
      if ( (_DWORD)v144 == 1 && v143[6] == 108 )
      {
        v16 = *v143;
        sub_C239B0((__int64)v143, (__int64)(v143 + 8));
        v60 = 0;
        LODWORD(v144) = 0;
      }
      if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
      {
        if ( *((_BYTE *)a4 + 8) )
        {
          v61 = (__int64)v143;
        }
        else
        {
          v99 = (*(double (__fastcall **)(void **, _BOOL4 *, __int64 *, _QWORD))(*(_QWORD *)a4 + 8LL))(
                  &v135,
                  a4,
                  a1,
                  v16);
          v126 = (void *)sub_EEC8C0(v114, (__int64)a4, v99);
          sub_1587DB0((__int64)&v135, (__int64 *)&v126);
          sub_15F7200(&v135);
          v60 = (unsigned int)v144;
          v61 = (__int64)v143;
          v100 = &v143[8 * (unsigned int)v144];
          if ( v143 != v100 )
          {
            v101 = a1 + 1;
            v102 = v143;
            do
            {
              v103 = *v102;
              v104 = (__int64)(v102 + 2);
              v102 += 8;
              sub_168CDE0((__int64)&v135, v101, v103, v104, 0);
              sub_15F7200(&v135);
            }
            while ( v100 != v102 );
            v61 = (__int64)v143;
            v60 = (unsigned int)v144;
          }
        }
        v23 = 1;
        v62 = v61;
        v52 = (unsigned int *)(v61 + 32 * v60);
LABEL_70:
        if ( (unsigned int *)v62 != v52 )
        {
          do
          {
            v52 -= 8;
            v63 = *((_QWORD *)v52 + 1);
            if ( v63 )
            {
              v64 = *((_QWORD *)v52 + 2);
              if ( v64 )
              {
                if ( v63 < v64 || v63 > v64 + 14848 )
                {
                  v65 = *(_QWORD **)(v63 + 528);
                  v66 = &v65[8 * (unsigned __int64)*(unsigned int *)(v63 + 536)];
                  if ( v65 != v66 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v66 -= 8;
                        v67 = (_QWORD *)v66[3];
                        if ( v67 == v66 + 5 )
                          break;
                        operator delete(v67);
                        if ( v65 == v66 )
                          goto LABEL_77;
                      }
                    }
                    while ( v65 != v66 );
LABEL_77:
                    v66 = *(_QWORD **)(v63 + 528);
                  }
                  if ( v66 != (_QWORD *)(v63 + 544) )
                    free(v66);
                  v68 = *(void **)(v63 + 416);
                  v69 = (void **)(v63 + 416);
                  if ( v68 != (void *)(v63 + 432) )
                    free(v68);
                  v70 = (void **)(v63 + 96);
                  do
                  {
                    while ( 1 )
                    {
                      v69 -= 4;
                      if ( *v69 == v69 + 2 )
                        break;
                      operator delete(*v69);
                      if ( v70 == v69 )
                        goto LABEL_85;
                    }
                  }
                  while ( v70 != v69 );
LABEL_85:
                  operator delete((void *)v63, 0x3A0u);
                }
                else
                {
                  v87 = *(unsigned int *)(v64 + 14976);
                  *(_DWORD *)(v64 + 14976) = v87 + 1;
                  *(_QWORD *)(v64 + 8 * v87 + 14848) = v63;
                }
              }
            }
          }
          while ( v52 != (unsigned int *)v62 );
          v52 = v143;
        }
        goto LABEL_88;
      }
      v91 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)a4 + 16LL);
      if ( v91 != sub_18E0F60 )
      {
        v92 = (__int64)a4;
        v91((__int64)&v126, (__int64)a4, (__int64)a1, v16);
        goto LABEL_139;
      }
      v92 = (__int64)(a1 + 1);
      sub_168B9F0((__int64)&v135, a1 + 1, v16, 0x15B1u, 0);
      v93 = (*(_BYTE *)(a1[29] + 1) & 8) != 0;
      if ( v141 )
      {
        v92 = v93;
        sub_AE9DF0(v139, v93, 3u);
        v105 = v141;
      }
      else
      {
        if ( !BYTE4(v142) )
        {
          v133 = 0;
          v126 = v135;
          v127 = v136;
          v128 = v137;
          v129 = v138;
LABEL_138:
          v134 = v142;
          sub_15F7200(&v135);
LABEL_139:
          v135 = (void *)sub_EEC8C0(v114, v92, *(double *)a6.m128_u64);
          sub_1587DB0((__int64)&v126, (__int64 *)&v135);
          sub_15F7200(&v126);
          v94 = v143;
          v62 = (__int64)&v143[8 * (unsigned int)v144];
          if ( v143 == (unsigned int *)v62 )
          {
            v52 = &v143[8 * (unsigned int)v144];
          }
          else
          {
            v95 = a1 + 1;
            do
            {
              v96 = *v94;
              v97 = (__int64)(v94 + 2);
              v94 += 8;
              sub_168CDE0((__int64)&v135, v95, v96, v97, 0);
              sub_15F7200(&v135);
            }
            while ( (unsigned int *)v62 != v94 );
            v62 = (__int64)v143;
            v52 = &v143[8 * (unsigned int)v144];
          }
          v23 = v114;
          goto LABEL_70;
        }
        v111 = sub_168B9E0(&v135);
        v112 = v137;
        if ( v137 )
          v112 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v137 + 32LL))(v137);
        v126 = v112;
        v113 = sub_1587BC0(v111, (__int64 *)&v126, v107, v108, v109, v110);
        v92 = v93;
        sub_AE9DF0((unsigned __int8 **)(*v113 + 32LL * (unsigned int)v142 + 8), v93, 3u);
        v105 = v141;
      }
      v133 = 0;
      v126 = v135;
      v127 = v136;
      v128 = v137;
      v129 = v138;
      if ( v105 )
      {
        v92 = (__int64)v139;
        sub_FC70F0((__int64)v130, (__int64)v139);
        v133 = 1;
        v131 = v139[9];
        v132 = v140;
      }
      goto LABEL_138;
    }
    v33 = v114;
    v52 = v143;
LABEL_95:
    v23 = v33;
LABEL_88:
    if ( v52 != (unsigned int *)v145 )
      free(v52);
    return v23;
  }
LABEL_9:
  v119 = 0;
  v143 = (unsigned int *)v145;
  v144 = 0x800000000LL;
  v120 = &v143;
  v122 &= ~1u;
  v117 = (_WORD *)v33;
  v121 = 0;
  v34 = sub_C3D370(v33, (__int64)&v119, v32, 1, v33, v31);
  v37 = v117;
  if ( !v34 || v121 != 2 || (_BYTE)v119 || (v88 = *(_BYTE *)(a1[29] + 1), (v88 & 8) != 0) && HIBYTE(v119) )
  {
    if ( (*v117 & 0x1FF) != 0x3D )
      v114 = sub_C09C20((_QWORD *)a1[31], (__int64)v117, (int *)&v121, v35, (__int64)v117, v36);
    if ( (_DWORD)v144 != 1 )
      goto LABEL_15;
    v38 = v143;
    if ( v143[6] != 108 )
      goto LABEL_15;
    v76 = 1;
  }
  else
  {
    if ( (*v117 & 0x1FF) != 0x3D )
    {
      v114 = sub_C09C20((_QWORD *)a1[31], (__int64)v117, (int *)&v121, v35, (__int64)v117, v36);
      v88 = *(_BYTE *)(a1[29] + 1);
    }
    v89 = (unsigned int)v144;
    if ( (v88 & 0x10) != 0 && !(_DWORD)v144 )
    {
      if ( a3 )
      {
        if ( *(_DWORD *)(a3 + 8) <= 0x40u && v124 <= 0x40 )
        {
          v106 = v123;
          *(_DWORD *)(a3 + 8) = v124;
          *(_QWORD *)a3 = v106;
        }
        else
        {
          sub_22056A0(a3, &v123);
          v89 = (unsigned int)v144;
        }
        *(_BYTE *)(a3 + 12) = v125;
      }
      v39 = (__int64)v143;
      v23 = v114;
      v40 = &v143[8 * v89];
      goto LABEL_18;
    }
    v76 = a5 == 0;
    if ( (_DWORD)v144 != 1 )
      goto LABEL_98;
    v38 = v143;
    if ( v143[6] != 108 )
      goto LABEL_98;
  }
  v16 = *v38;
  sub_C239B0((__int64)v38, (__int64)(v38 + 8));
  LODWORD(v144) = 0;
LABEL_98:
  if ( !v76 )
  {
    v77 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)a4 + 16LL);
    if ( v77 == sub_18E0F60 )
    {
      sub_168B9F0((__int64)&v135, a1 + 1, v16, 0x15B1u, 0);
      v78 = &v118;
      v118 = (*(_BYTE *)(a1[29] + 1) & 8) != 0;
      v79 = sub_1588370((__int64)&v135, (unsigned int *)&v118);
      v126 = *(void **)v79;
      v127 = *(void **)(v79 + 8);
      v128 = *(void **)(v79 + 16);
      v80 = *(_BYTE *)(v79 + 24);
      v133 = 0;
      v81 = *(_BYTE *)(v79 + 120) == 0;
      v129 = v80;
      if ( !v81 )
      {
        v78 = (_BOOL4 *)(v79 + 32);
        sub_FC70F0((__int64)v130, v79 + 32);
        v131 = *(unsigned __int8 **)(v79 + 104);
        v90 = *(_DWORD *)(v79 + 112);
        v133 = 1;
        v132 = v90;
      }
      v134 = *(_QWORD *)(v79 + 128);
      sub_15F7200(&v135);
    }
    else
    {
      v78 = a4;
      v77((__int64)&v126, (__int64)a4, (__int64)a1, v16);
    }
    v82 = a1 + 1;
    v135 = (void *)sub_EEC8C0(v114, (__int64)v78, *(double *)a6.m128_u64);
    sub_1587DB0((__int64)&v126, (__int64 *)&v135);
    sub_15F7200(&v126);
    v83 = v143;
    v84 = &v143[8 * (unsigned int)v144];
    if ( v143 != v84 )
    {
      do
      {
        v85 = *v83;
        v86 = (__int64)(v83 + 2);
        v83 += 8;
        sub_168CDE0((__int64)&v135, v82, v85, v86, 0);
        sub_15F7200(&v135);
      }
      while ( v84 != v83 );
    }
    if ( a3 )
    {
      if ( *(_DWORD *)(a3 + 8) <= 0x40u && v124 <= 0x40 )
      {
        v98 = v123;
        *(_DWORD *)(a3 + 8) = v124;
        *(_QWORD *)a3 = v98;
      }
      else
      {
        sub_22056A0(a3, &v123);
      }
      *(_BYTE *)(a3 + 12) = v125;
    }
    v39 = (__int64)v143;
    v23 = v114;
    v40 = &v143[8 * (unsigned int)v144];
    goto LABEL_18;
  }
LABEL_15:
  if ( !*((_BYTE *)a4 + 8) )
  {
    v71 = (*(double (__fastcall **)(void **, _BOOL4 *, __int64 *, _QWORD, _WORD *))(*(_QWORD *)a4 + 8LL))(
            &v135,
            a4,
            a1,
            v16,
            v37);
    v126 = (void *)sub_EEC8C0(v114, (__int64)a4, v71);
    sub_1587DB0((__int64)&v135, (__int64 *)&v126);
    sub_15F7200(&v135);
    v72 = v143;
    v39 = (__int64)&v143[8 * (unsigned int)v144];
    if ( v143 == (unsigned int *)v39 )
    {
      v40 = &v143[8 * (unsigned int)v144];
      goto LABEL_17;
    }
    v73 = a1 + 1;
    do
    {
      v74 = *v72;
      v75 = (__int64)(v72 + 2);
      v72 += 8;
      sub_168CDE0((__int64)&v135, v73, v74, v75, 0);
      sub_15F7200(&v135);
    }
    while ( (unsigned int *)v39 != v72 );
  }
  v39 = (__int64)v143;
  v40 = &v143[8 * (unsigned int)v144];
LABEL_17:
  v23 = 1;
LABEL_18:
  if ( (unsigned int *)v39 != v40 )
  {
    do
    {
      v40 -= 8;
      v41 = *((_QWORD *)v40 + 1);
      if ( v41 )
      {
        v42 = *((_QWORD *)v40 + 2);
        if ( v42 )
        {
          if ( v41 < v42 || v41 > v42 + 14848 )
          {
            v43 = *(_QWORD **)(v41 + 528);
            v44 = &v43[8 * (unsigned __int64)*(unsigned int *)(v41 + 536)];
            if ( v43 != v44 )
            {
              do
              {
                while ( 1 )
                {
                  v44 -= 8;
                  v45 = (_QWORD *)v44[3];
                  if ( v45 == v44 + 5 )
                    break;
                  operator delete(v45);
                  if ( v43 == v44 )
                    goto LABEL_25;
                }
              }
              while ( v43 != v44 );
LABEL_25:
              v44 = *(_QWORD **)(v41 + 528);
            }
            if ( v44 != (_QWORD *)(v41 + 544) )
              free(v44);
            v46 = *(void **)(v41 + 416);
            v47 = (void **)(v41 + 416);
            if ( v46 != (void *)(v41 + 432) )
              free(v46);
            v48 = (void **)(v41 + 96);
            do
            {
              while ( 1 )
              {
                v47 -= 4;
                if ( *v47 == v47 + 2 )
                  break;
                operator delete(*v47);
                if ( v47 == v48 )
                  goto LABEL_33;
              }
            }
            while ( v47 != v48 );
LABEL_33:
            operator delete((void *)v41, 0x3A0u);
          }
          else
          {
            v51 = *(unsigned int *)(v42 + 14976);
            *(_DWORD *)(v42 + 14976) = v51 + 1;
            *(_QWORD *)(v42 + 8 * v51 + 14848) = v41;
          }
        }
      }
    }
    while ( v40 != (unsigned int *)v39 );
    v40 = v143;
  }
  if ( v40 != (unsigned int *)v145 )
    free(v40);
  if ( v121 > 1 )
    sub_A4F8E0((int *)&v121);
  return v23;
}
