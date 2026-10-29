__int64 __fastcall sub_7568C0(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  int v13; // esi
  __int64 v14; // r9
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r14
  __int64 v19; // rax
  void *v20; // r13
  void *v21; // r12
  _QWORD *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // edx
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v32; // rax
  unsigned int v33; // edi
  unsigned int v34; // eax
  unsigned int v35; // r14d
  char **exception; // r15
  __int64 v37; // rdx
  unsigned int v38; // edi
  unsigned int *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  _QWORD *v43; // rax
  void *v44; // r12
  __m128i v45; // xmm0
  void *v46; // r12
  __int64 v47; // rax
  int v48; // eax
  int v49; // eax
  void *v50; // r12
  int v51; // eax
  int v52; // eax
  void *v53; // rdi
  void *v54; // rdi
  char v55; // al
  void *v56; // r12
  char v57; // r13
  void *v58; // r12
  void *v59; // rdi
  void *v60; // r14
  void *v61; // r14
  int v62; // edx
  void *v63; // r14
  __int64 v64; // rdx
  char v65; // cl
  __int64 v66; // rax
  void *v67; // r14
  int v68; // edx
  void *v69; // r14
  __int64 v70; // rdx
  char v71; // cl
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned int v79; // edx
  __int64 v80; // rax
  __int64 *v81; // rax
  unsigned int v82; // edi
  char **v83; // r15
  __int64 v84; // rdx
  unsigned int v85; // r13d
  unsigned int v86; // eax
  unsigned int *v87; // rax
  __int64 v88; // rax
  int v89; // edx
  _QWORD *v90; // rax
  char **v91; // r15
  __int64 v92; // rdx
  char **v93; // r15
  __int64 v94; // rdx
  __int64 *v96; // [rsp+10h] [rbp-1F0h]
  char *v98; // [rsp+20h] [rbp-1E0h]
  char *v99; // [rsp+28h] [rbp-1D8h]
  __int64 *v100; // [rsp+30h] [rbp-1D0h]
  void *v101; // [rsp+38h] [rbp-1C8h]
  void *v102; // [rsp+38h] [rbp-1C8h]
  int v103; // [rsp+40h] [rbp-1C0h]
  __int64 *v104; // [rsp+48h] [rbp-1B8h]
  __int64 *v105; // [rsp+50h] [rbp-1B0h]
  __int64 v106; // [rsp+58h] [rbp-1A8h]
  unsigned __int8 v107; // [rsp+63h] [rbp-19Dh]
  unsigned int v108; // [rsp+64h] [rbp-19Ch]
  __int64 v109; // [rsp+68h] [rbp-198h]
  __int64 *v110; // [rsp+70h] [rbp-190h]
  void *v111; // [rsp+80h] [rbp-180h]
  unsigned int v112; // [rsp+88h] [rbp-178h]
  int v113; // [rsp+90h] [rbp-170h] BYREF
  char v114; // [rsp+94h] [rbp-16Ch]
  __int64 v115; // [rsp+98h] [rbp-168h]
  int v116; // [rsp+A0h] [rbp-160h] BYREF
  char v117; // [rsp+A4h] [rbp-15Ch]
  __int64 v118; // [rsp+A8h] [rbp-158h]
  __int64 v119; // [rsp+B0h] [rbp-150h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-148h]
  __int64 v121; // [rsp+C0h] [rbp-140h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-138h]
  __int64 v123; // [rsp+D0h] [rbp-130h] BYREF
  __int64 v124; // [rsp+D8h] [rbp-128h]
  __int64 v125; // [rsp+E0h] [rbp-120h] BYREF
  __int64 v126; // [rsp+E8h] [rbp-118h]
  char v127; // [rsp+F0h] [rbp-110h]
  _BYTE v128[21]; // [rsp+F8h] [rbp-108h] BYREF
  _QWORD v129[2]; // [rsp+110h] [rbp-F0h] BYREF
  _QWORD v130[2]; // [rsp+120h] [rbp-E0h] BYREF
  _QWORD v131[2]; // [rsp+130h] [rbp-D0h] BYREF
  _QWORD v132[2]; // [rsp+140h] [rbp-C0h] BYREF
  int v133; // [rsp+150h] [rbp-B0h]
  char v134; // [rsp+154h] [rbp-ACh]
  __int64 v135; // [rsp+160h] [rbp-A0h] BYREF
  __int64 v136; // [rsp+168h] [rbp-98h]
  __int64 v137; // [rsp+170h] [rbp-90h] BYREF
  __int64 v138; // [rsp+178h] [rbp-88h]
  __int64 v139; // [rsp+180h] [rbp-80h]
  _QWORD v140[2]; // [rsp+188h] [rbp-78h] BYREF
  _QWORD v141[2]; // [rsp+198h] [rbp-68h] BYREF
  _QWORD v142[2]; // [rsp+1A8h] [rbp-58h] BYREF
  _QWORD v143[2]; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v144; // [rsp+1C8h] [rbp-38h]

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v4 )
  {
    if ( *v4 == *(_DWORD *)(a1 + 16) && v4[1] == 40 )
      return 0;
  }
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v127 = 1;
  v128[20] = 1;
  v129[0] = 0;
  v129[1] = 0;
  v130[0] = 1;
  v130[1] = 0;
  v131[0] = 0;
  v131[1] = 0;
  v132[0] = 1;
  v132[1] = 0;
  v133 = 0;
  v134 = 1;
  memset(v128, 0, 20);
  sub_182CBA0(qword_1C7F2C0, v130);
  BYTE4(v130[0]) &= ~1u;
  BYTE4(v131[0]) &= ~1u;
  LODWORD(v130[0]) = 1;
  LODWORD(v131[0]) = 0;
  sub_182CBA0(qword_1C7F2C0, v132);
  BYTE4(v132[0]) &= ~1u;
  LODWORD(v132[0]) = 1;
  v6 = *(unsigned int *)(a2 + 24);
  v134 = 1;
  v6 *= 8;
  v105 = (__int64 *)(a2 + 32 + v6);
  if ( !v6 )
  {
    v99 = (char *)v131;
    v98 = (char *)v129;
    goto LABEL_49;
  }
  v110 = (__int64 *)(a2 + 32);
  v99 = (char *)v131;
  v98 = (char *)v129;
  v107 = 0;
  v106 = a1 + 16;
  do
  {
    v109 = *v110;
    v7 = sub_15D1F10(*v110);
    if ( !(unsigned __int8)sub_1673B10(v106, v7) )
    {
      v22 = *(_QWORD **)(a1 + 96);
      if ( v22 )
      {
        v23 = *((_DWORD *)v22 - 1);
        if ( v23 != *((_DWORD *)v22 - 2) )
          goto LABEL_22;
        v33 = (3 * v23 + 1) >> 1;
        v34 = 8 * v33 + 8;
        v35 = v33;
        if ( 8 * v23 + 8 >= v34 || v23 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_10DC44(&v135, "Overflow encountered when expanding vector", v37);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v135);
          sub_233E40((__int64)&v135);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_47:
        v39 = (unsigned int *)sub_186B300(v22 - 1, v34);
        v22 = v39 + 2;
        *(_QWORD *)(a1 + 96) = v39 + 2;
        *v39 = v35;
        v40 = v39[1];
        v41 = v40;
        v26 = &v22[v40];
        v25 = v41 + 1;
        goto LABEL_23;
      }
LABEL_54:
      v43 = (_QWORD *)sub_186B270(0x18u);
      *v43 = 2;
      v25 = 1;
      v22 = v43 + 1;
      *(_QWORD *)(a1 + 96) = v43 + 1;
      v26 = v43 + 1;
      goto LABEL_23;
    }
    if ( !*(_WORD *)(v109 + 4) )
    {
      v10 = *(_DWORD **)(*(_QWORD *)(v109 + 16) + 24LL);
      if ( v10 )
      {
        if ( *(_DWORD *)(a1 + 16) == *v10 && v10[1] == 40 )
        {
          v22 = *(_QWORD **)(a1 + 96);
          if ( !v22 )
            goto LABEL_54;
LABEL_21:
          v23 = *((_DWORD *)v22 - 1);
          if ( v23 == *((_DWORD *)v22 - 2) )
          {
            v38 = (3 * v23 + 1) >> 1;
            v34 = 8 * v38 + 8;
            v35 = v38;
            if ( 8 * v23 + 8 >= v34 || v23 >= v38 )
            {
              v91 = (char **)__cxa_allocate_exception(0x28u);
              sub_10DC44(&v135, "Overflow encountered when expanding vector", v92);
              *v91 = (char *)off_1C63128;
              sub_2333C0(v91 + 1, &v135);
              sub_233E40((__int64)&v135);
              __cxa_throw(v91, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_47;
          }
          goto LABEL_22;
        }
      }
    }
    v136 = 1;
    v137 = 0;
    v135 = v109;
    v139 = 0x100000000LL;
    v144 = 0x100000000LL;
    v140[0] = 0;
    v138 = 0;
    v140[1] = 0;
    v141[0] = 1;
    v141[1] = 0;
    v142[0] = 0;
    v142[1] = 0;
    v143[0] = 1;
    v143[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v141);
    BYTE4(v141[0]) &= ~1u;
    BYTE4(v142[0]) &= ~1u;
    LODWORD(v141[0]) = 1;
    LODWORD(v142[0]) = 0;
    sub_182CBA0(qword_1C7F2C0, v143);
    v11 = *(unsigned int *)(a1 + 72);
    BYTE4(v144) = 1;
    BYTE4(v143[0]) &= ~1u;
    v12 = *(_QWORD **)(a1 + 64);
    v13 = *(_DWORD *)(v135 + 12);
    LODWORD(v143[0]) = 1;
    v14 = 112LL * (v13 & (unsigned int)(v11 - 1));
    v15 = &v12[(unsigned __int64)v14 / 8];
    v16 = 112 * v11;
    v17 = &v12[14 * v11];
    v18 = &v12[(unsigned __int64)v14 / 8];
    if ( v14 != v16 )
    {
      do
      {
        v19 = *v18;
        if ( *v18 > 1u )
        {
          if ( *(_DWORD *)(v19 + 12) == v13 && v135 == v19 )
            goto LABEL_57;
        }
        else if ( !v19 )
        {
          goto LABEL_19;
        }
        v18 += 14;
      }
      while ( v17 != v18 );
    }
    if ( v12 == v15 )
    {
LABEL_19:
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v142);
      sub_182CBA0(v20, v143);
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v140);
      sub_182CBA0(v21, v141);
LABEL_20:
      v22 = *(_QWORD **)(a1 + 96);
      if ( !v22 )
        goto LABEL_54;
      goto LABEL_21;
    }
    while ( 1 )
    {
      v32 = *v12;
      if ( *v12 > 1u )
        break;
      if ( !v32 )
        goto LABEL_19;
LABEL_36:
      v12 += 14;
      if ( v15 == v12 )
        goto LABEL_19;
    }
    if ( *(_DWORD *)(v32 + 12) != v13 || v135 != v32 )
      goto LABEL_36;
    v18 = v12;
LABEL_57:
    v111 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v142);
    sub_182CBA0(v111, v143);
    v44 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v140);
    sub_182CBA0(v44, v141);
    v45 = _mm_loadu_si128((const __m128i *)v18 + 1);
    v46 = qword_1C7F2C0;
    v127 = *((_BYTE *)v18 + 8);
    v47 = *(_QWORD *)((char *)v18 + 29);
    *(__m128i *)v128 = v45;
    *(_QWORD *)&v128[13] = v47;
    if ( (*((_BYTE *)v18 + 44) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v129, v18 + 5);
    }
    else
    {
      v48 = *((_DWORD *)v18 + 10);
      BYTE4(v129[0]) &= ~1u;
      LODWORD(v129[0]) = v48;
    }
    if ( (*((_BYTE *)v18 + 60) & 1) != 0 )
    {
      sub_182C690(v46, v130, v18 + 7);
    }
    else
    {
      v49 = *((_DWORD *)v18 + 14);
      BYTE4(v130[0]) &= ~1u;
      LODWORD(v130[0]) = v49;
    }
    v50 = qword_1C7F2C0;
    if ( (*((_BYTE *)v18 + 76) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v131, v18 + 9);
    }
    else
    {
      v51 = *((_DWORD *)v18 + 18);
      BYTE4(v131[0]) &= ~1u;
      LODWORD(v131[0]) = v51;
    }
    if ( (*((_BYTE *)v18 + 92) & 1) != 0 )
    {
      sub_182C690(v50, v132, v18 + 11);
    }
    else
    {
      v52 = *((_DWORD *)v18 + 22);
      BYTE4(v132[0]) &= ~1u;
      LODWORD(v132[0]) = v52;
    }
    v53 = qword_1C7F2C0;
    v133 = *((_DWORD *)v18 + 26);
    v134 = *((_BYTE *)v18 + 108);
    if ( v127 )
    {
      BYTE4(v123) &= 0xFCu;
      BYTE4(v125) &= 0xFCu;
      LODWORD(v123) = 0;
      v124 = 0;
      LODWORD(v125) = 1;
      v126 = 0;
      if ( *(_QWORD *)&v128[8] > 0x7FFFFFFEu )
        sub_182C550(qword_1C7F2C0, &v123);
      else
        LODWORD(v123) = *(_DWORD *)&v128[8];
      sub_182CBA0(v53, &v125);
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = 1;
    }
    else
    {
      BYTE4(v123) &= 0xFCu;
      BYTE4(v125) &= 0xFCu;
      LODWORD(v123) = 0;
      v124 = 0;
      LODWORD(v125) = 1;
      v126 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v123, (int *)v131);
    }
    v54 = qword_1C7F2C0;
    if ( v127 )
    {
      BYTE4(v119) &= 0xFCu;
      BYTE4(v121) &= 0xFCu;
      LODWORD(v119) = 0;
      v120 = 0;
      LODWORD(v121) = 1;
      v122 = 0;
      if ( *(_QWORD *)v128 > 0x7FFFFFFEu )
        sub_182C550(qword_1C7F2C0, &v119);
      else
        LODWORD(v119) = *(_DWORD *)v128;
      sub_182CBA0(v54, &v121);
      BYTE4(v121) &= ~1u;
      LODWORD(v121) = 1;
    }
    else
    {
      BYTE4(v119) &= 0xFCu;
      BYTE4(v121) &= 0xFCu;
      LODWORD(v119) = 0;
      v120 = 0;
      LODWORD(v121) = 1;
      v122 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v119, (int *)v129);
    }
    v55 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v123, (__int64)&v119);
    v56 = qword_1C7F2C0;
    v57 = v55;
    sub_182CBA0(qword_1C7F2C0, &v119);
    v104 = &v121;
    sub_182CBA0(v56, &v121);
    v58 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    v100 = &v125;
    sub_182CBA0(v58, &v125);
    if ( v57 )
      goto LABEL_20;
    v59 = qword_1C7F2C0;
    if ( v127 )
    {
      v114 &= 0xFCu;
      v117 &= 0xFCu;
      v113 = 0;
      v115 = 0;
      v116 = 1;
      v118 = 0;
      if ( *(_QWORD *)&v128[8] > 0x7FFFFFFEu )
        sub_182C550(qword_1C7F2C0, &v113);
      else
        v113 = *(_DWORD *)&v128[8];
      sub_182CBA0(v59, &v116);
      v117 &= ~1u;
      v116 = 1;
    }
    else
    {
      v114 &= 0xFCu;
      v117 &= 0xFCu;
      v113 = 0;
      v115 = 0;
      v116 = 1;
      v118 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v113, (int *)v131);
    }
    v119 = 2;
    v120 = 0;
    v121 = 1;
    v122 = 0;
    sub_182CBA0(qword_1C7F2C0, &v121);
    BYTE4(v121) &= ~1u;
    v60 = qword_1C7F2C0;
    LODWORD(v121) = 1;
    v123 = 0;
    v124 = 0;
    v125 = 1;
    v126 = 0;
    if ( (v114 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v123, &v113);
    else
      LODWORD(v123) = v113;
    if ( (v117 & 1) != 0 )
    {
      sub_182C690(v60, &v125, &v116);
    }
    else
    {
      BYTE4(v125) &= ~1u;
      LODWORD(v125) = v116;
    }
    v61 = qword_1C7F2C0;
    LODWORD(v135) = 0;
    BYTE4(v135) &= 0xFCu;
    BYTE4(v137) &= 0xFCu;
    v136 = 0;
    LODWORD(v137) = 1;
    v138 = 0;
    sub_1833EB0(qword_1C7F2C0, &v123, &v119, &v135);
    sub_182CBA0(v61, &v137);
    v62 = v135;
    v63 = qword_1C7F2C0;
    LODWORD(v135) = v123;
    LODWORD(v123) = v62;
    v64 = v136;
    v136 = v124;
    v124 = v64;
    v65 = BYTE4(v135) & 1;
    LOBYTE(v64) = BYTE4(v123) & 0xFC | BYTE4(v135) & 2;
    BYTE4(v135) = BYTE4(v123) & 1 | BYTE4(v135) & 0xFC | BYTE4(v123) & 2;
    BYTE4(v123) = v65 | v64;
    LODWORD(v137) = v125;
    v66 = v126;
    v126 = v138;
    v138 = v66;
    LODWORD(v125) = 1;
    LOBYTE(v66) = BYTE4(v125) & 1 | BYTE4(v125) & 2 | BYTE4(v137) & 0xFC;
    BYTE4(v125) = BYTE4(v125) & 0xFC | BYTE4(v137) & 2;
    BYTE4(v137) = v66;
    sub_182CBA0(qword_1C7F2C0, &v135);
    sub_182CBA0(v63, &v137);
    v112 = 1;
    if ( (int)v123 <= 0 )
    {
      v108 = 0;
    }
    else
    {
      do
      {
        v67 = qword_1C7F2C0;
        LODWORD(v135) = 0;
        v136 = 0;
        v108 = v112;
        BYTE4(v135) &= 0xFCu;
        BYTE4(v137) &= 0xFCu;
        ++v112;
        LODWORD(v137) = 1;
        v138 = 0;
        sub_1833EB0(qword_1C7F2C0, &v123, &v119, &v135);
        sub_182CBA0(v67, &v137);
        v68 = v135;
        v69 = qword_1C7F2C0;
        LODWORD(v135) = v123;
        LODWORD(v123) = v68;
        v70 = v136;
        v136 = v124;
        v124 = v70;
        v71 = BYTE4(v135) & 1;
        LOBYTE(v70) = BYTE4(v123) & 0xFC | BYTE4(v135) & 2;
        BYTE4(v135) = BYTE4(v123) & 1 | BYTE4(v135) & 0xFC | BYTE4(v123) & 2;
        BYTE4(v123) = v71 | v70;
        LODWORD(v137) = v125;
        v72 = v126;
        v126 = v138;
        v138 = v72;
        LODWORD(v125) = 1;
        LOBYTE(v72) = BYTE4(v125) & 1 | BYTE4(v125) & 2 | BYTE4(v137) & 0xFC;
        BYTE4(v125) = BYTE4(v125) & 0xFC | BYTE4(v137) & 2;
        BYTE4(v137) = v72;
        sub_182CBA0(qword_1C7F2C0, &v135);
        sub_182CBA0(v69, &v137);
      }
      while ( (int)v123 > 0 );
    }
    v102 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v123);
    sub_182CBA0(v102, &v125);
    v101 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v119);
    sub_182CBA0(v101, &v121);
    v104 = (__int64 *)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v113);
    sub_182CBA0(v104, &v116);
    v73 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v109) + 24) + 8LL);
    if ( *(_BYTE *)(v73 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v103 = *(_DWORD *)v73;
    LOBYTE(v104) = v112 < *(_DWORD *)v73 && v112 != 0;
    if ( !(_BYTE)v104 )
    {
      v22 = *(_QWORD **)(a1 + 96);
      if ( v22 )
      {
        v23 = *((_DWORD *)v22 - 1);
        if ( v23 == *((_DWORD *)v22 - 2) )
        {
          v82 = (3 * v23 + 1) >> 1;
          v34 = 8 * v82 + 8;
          v35 = v82;
          if ( 8 * v23 + 8 >= v34 || v23 >= v82 )
          {
            v83 = (char **)__cxa_allocate_exception(0x28u);
            sub_10DC44(&v135, "Overflow encountered when expanding vector", v84);
            *v83 = (char *)off_1C63128;
            sub_2333C0(v83 + 1, &v135);
            sub_233E40((__int64)&v135);
            __cxa_throw(v83, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_47;
        }
LABEL_22:
        v24 = v23;
        v25 = v23 + 1;
        v26 = &v22[v24];
LABEL_23:
        *v26 = v109;
        *((_DWORD *)v22 - 1) = v25;
        goto LABEL_24;
      }
      goto LABEL_54;
    }
    LOBYTE(v136) = 0;
    v137 = 0;
    v119 = v109;
    v138 = 0;
    LODWORD(v135) = v108;
    v74 = sub_15DCAD0(*(_QWORD *)(a1 + 24), (int)&v119, 0);
    sub_15D0DF0(&v137);
    sub_15D0DF0(&v135);
    v75 = sub_1674520(v106, &qword_1C7F2A0, v103 - v112);
    v76 = *(_QWORD *)(a1 + 24);
    v123 = v75;
    v124 = v74;
    v77 = sub_15E1AF0(v76);
    v22 = *(_QWORD **)(a1 + 96);
    v78 = v77;
    if ( v22 )
    {
      v79 = *((_DWORD *)v22 - 1);
      if ( v79 == *((_DWORD *)v22 - 2) )
      {
        v85 = (3 * v79 + 1) >> 1;
        v86 = 8 * v85 + 8;
        if ( 8 * v79 + 8 >= v86 || v79 >= v85 )
        {
          v93 = (char **)__cxa_allocate_exception(0x28u);
          sub_10DC44(&v135, "Overflow encountered when expanding vector", v94);
          *v93 = (char *)off_1C63128;
          sub_2333C0(v93 + 1, &v135);
          sub_233E40((__int64)&v135);
          __cxa_throw(v93, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v87 = (unsigned int *)sub_186B300(v22 - 1, v86);
        v22 = v87 + 2;
        *v87 = v85;
        v88 = v87[1];
        *(_QWORD *)(a1 + 96) = v22;
        v89 = v88;
        v81 = &v22[v88];
        v25 = v89 + 1;
      }
      else
      {
        v80 = v79;
        v25 = v79 + 1;
        v81 = &v22[v80];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x18u);
      *v90 = 2;
      v25 = 1;
      v22 = v90 + 1;
      *(_QWORD *)(a1 + 96) = v90 + 1;
      v81 = v90 + 1;
    }
    *v81 = v78;
    *((_DWORD *)v22 - 1) = v25;
    v107 = (unsigned __int8)v104;
LABEL_24:
    ++v110;
  }
  while ( v105 != v110 );
  if ( !v107 )
  {
LABEL_49:
    v107 = 0;
    goto LABEL_50;
  }
  v27 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a2 + 16),
          v25,
          (int)v22,
          v8,
          v9,
          (int)v132,
          (int)v130,
          a3,
          a2,
          (int)v129,
          (char)v131,
          (int)v100,
          (int)v101,
          v103,
          v104);
  v28 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v29 = *v96;
  if ( *v96 )
  {
    v30 = v96[1];
    if ( (*(_DWORD *)(v29 + 8))-- == 1 )
      sub_15D7BC0(v30, v29);
  }
  *v96 = v28;
LABEL_50:
  sub_25A130(v99);
  sub_25A130(v98);
  return v107;
}

