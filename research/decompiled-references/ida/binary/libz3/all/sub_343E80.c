__int64 __fastcall sub_343E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v7; // r14
  void *v8; // rbp
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // r10d
  __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  void *v24; // rbx
  __int64 v25; // r15
  __int64 *v26; // rbx
  unsigned int v27; // r9d
  size_t v28; // r15
  __int64 *v29; // rbp
  int v30; // esi
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 result; // rax
  __int64 *v41; // rdx
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rdx
  __m128i *v46; // rax
  int v47; // r10d
  __m128i *v48; // rcx
  const __m128i *v49; // r13
  __m128i *v50; // r11
  __int64 v51; // rax
  __m128i *v52; // rdx
  __m128i *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rbp
  __int64 v56; // rax
  int v57; // r10d
  __int64 v58; // rdx
  char *v59; // r15
  __int64 v60; // rax
  char *v61; // r11
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  int v66; // esi
  int v67; // edx
  __int64 v68; // rsi
  __int64 v69; // rdx
  char v70; // di
  char v71; // di
  __int64 v72; // rsi
  __int64 v73; // rdx
  char v74; // di
  char v75; // di
  char *v76; // r15
  char *v77; // rbx
  void *v78; // rbp
  char *v79; // rsi
  int v80; // eax
  int v81; // edx
  __int64 v82; // rax
  char v83; // si
  __int64 v84; // rax
  char v85; // si
  int v86; // edx
  int v87; // ecx
  __int64 v88; // rdx
  char v89; // si
  __int64 v90; // rdx
  char v91; // si
  _QWORD *v92; // rax
  int v93; // eax
  int v94; // edx
  __int64 v95; // rax
  char v96; // cl
  __int64 v97; // rax
  char v98; // cl
  int v99; // [rsp+0h] [rbp-B8h]
  size_t v101; // [rsp+10h] [rbp-A8h]
  __int64 v102; // [rsp+10h] [rbp-A8h]
  unsigned int v103; // [rsp+10h] [rbp-A8h]
  size_t v104; // [rsp+18h] [rbp-A0h]
  char *v105; // [rsp+18h] [rbp-A0h]
  __int64 v106; // [rsp+18h] [rbp-A0h]
  int v107; // [rsp+20h] [rbp-98h]
  unsigned int v108; // [rsp+20h] [rbp-98h]
  int v109; // [rsp+20h] [rbp-98h]
  __int64 v110; // [rsp+28h] [rbp-90h]
  size_t v111; // [rsp+30h] [rbp-88h]
  int v112; // [rsp+3Ch] [rbp-7Ch]
  __int64 v113; // [rsp+50h] [rbp-68h] BYREF
  __int64 v114; // [rsp+58h] [rbp-60h] BYREF
  __int64 v115; // [rsp+60h] [rbp-58h]
  __int64 v116; // [rsp+68h] [rbp-50h] BYREF
  __int64 v117; // [rsp+70h] [rbp-48h]

  v114 = 0;
  v113 = sub_97D810(a2, a3, a4);
  v7 = v113;
  v115 = 0;
  v8 = qword_1C7F2C0;
  v116 = 1;
  v117 = 0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v114, a4);
  else
    LODWORD(v114) = *(_DWORD *)a4;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
  {
    sub_182C690(v8, &v116, a4 + 16);
  }
  else
  {
    v9 = *(_DWORD *)(a4 + 16);
    BYTE4(v116) &= ~1u;
    LODWORD(v116) = v9;
  }
  v10 = *(unsigned int *)(a1 + 168);
  v11 = 2 * v10;
  if ( 3 * (int)v10 < (unsigned int)(4 * (*(_DWORD *)(a1 + 172) + *(_DWORD *)(a1 + 176))) )
  {
    v55 = v11;
    v107 = 2 * v10;
    v104 = 40LL * v11;
    v101 = v104;
    v56 = sub_186B270(v104);
    v57 = v107;
    v12 = v56;
    v14 = v104;
    if ( v107 )
    {
      v58 = v56 + 40 * v55;
      do
      {
        *(_OWORD *)(v56 + 24) = 0;
        v56 += 40;
        *(_OWORD *)(v56 - 32) = 0;
        *(_QWORD *)(v56 - 40) = 0;
        *(_BYTE *)(v56 - 28) = 0;
        *(_DWORD *)(v56 - 16) = 1;
        *(_BYTE *)(v56 - 12) = 0;
      }
      while ( v58 != v56 );
    }
    v59 = *(char **)(a1 + 160);
    v13 = v107 - 1;
    v15 = v12 + v104;
    v60 = *(unsigned int *)(a1 + 168);
    v61 = &v59[40 * v60];
    if ( v59 != v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *(_QWORD *)v59;
          if ( *(_QWORD *)v59 > 1u )
            break;
          v59 += 40;
          if ( v61 == v59 )
            goto LABEL_82;
        }
        v63 = 40LL * (*(_DWORD *)(v62 + 12) & v13);
        v64 = v12 + v63;
        if ( v104 == v63 )
        {
LABEL_90:
          if ( v12 == v64 )
          {
LABEL_103:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v65 = v12;
          while ( *(_QWORD *)v65 )
          {
            v65 += 40;
            if ( v64 == v65 )
              goto LABEL_103;
          }
        }
        else
        {
          v65 = v12 + v63;
          while ( *(_QWORD *)v65 )
          {
            v65 += 40;
            if ( v15 == v65 )
              goto LABEL_90;
          }
        }
        v66 = *((_DWORD *)v59 + 2);
        *(_QWORD *)v65 = v62;
        v59 += 40;
        v67 = *(_DWORD *)(v65 + 8);
        *(_DWORD *)(v65 + 8) = v66;
        v68 = *((_QWORD *)v59 - 3);
        *((_DWORD *)v59 - 8) = v67;
        v69 = *(_QWORD *)(v65 + 16);
        *(_QWORD *)(v65 + 16) = v68;
        v70 = *(v59 - 28);
        *((_QWORD *)v59 - 3) = v69;
        LOBYTE(v69) = *(_BYTE *)(v65 + 12);
        *(_BYTE *)(v65 + 12) = v70 & 2 | v69 & 0xFD;
        LOBYTE(v69) = v69 & 2 | *(v59 - 28) & 0xFD;
        *(v59 - 28) = v69;
        v71 = *(_BYTE *)(v65 + 12);
        *(_BYTE *)(v65 + 12) = v69 & 1 | v71 & 0xFE;
        LODWORD(v68) = *((_DWORD *)v59 - 4);
        *(v59 - 28) = v71 & 1 | *(v59 - 28) & 0xFE;
        LODWORD(v69) = *(_DWORD *)(v65 + 24);
        *(_DWORD *)(v65 + 24) = v68;
        v72 = *((_QWORD *)v59 - 1);
        *((_DWORD *)v59 - 4) = v69;
        v73 = *(_QWORD *)(v65 + 32);
        *(_QWORD *)(v65 + 32) = v72;
        v74 = *(v59 - 12);
        *((_QWORD *)v59 - 1) = v73;
        LOBYTE(v73) = *(_BYTE *)(v65 + 28);
        *(_BYTE *)(v65 + 28) = v74 & 2 | v73 & 0xFD;
        LOBYTE(v73) = v73 & 2 | *(v59 - 12) & 0xFD;
        *(v59 - 12) = v73;
        v75 = *(_BYTE *)(v65 + 28) & 1;
        *(_BYTE *)(v65 + 28) = v73 & 1 | *(_BYTE *)(v65 + 28) & 0xFE;
        *(v59 - 12) = v75 | *(v59 - 12) & 0xFE;
      }
      while ( v61 != v59 );
LABEL_82:
      v60 = *(unsigned int *)(a1 + 168);
      v61 = *(char **)(a1 + 160);
    }
    if ( v61 )
    {
      if ( (_DWORD)v60 )
      {
        v105 = v61;
        v108 = v107 - 1;
        v110 = v14;
        v76 = &v61[40 * v60];
        v111 = v12 + v101;
        v112 = v57;
        v102 = v12;
        v77 = v61;
        do
        {
          v78 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v77 + 8);
          v79 = v77 + 24;
          v77 += 40;
          sub_182CBA0(v78, v79);
        }
        while ( v77 != v76 );
        v12 = v102;
        v61 = v105;
        v13 = v108;
        v14 = v110;
        v15 = v111;
        v57 = v112;
      }
      v109 = v57;
      v106 = v14;
      v103 = v13;
      sub_186B220(v61);
      v13 = v103;
      v14 = v106;
      v57 = v109;
    }
    *(_QWORD *)(a1 + 160) = v12;
    *(_DWORD *)(a1 + 168) = v57;
    *(_DWORD *)(a1 + 176) = 0;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 160);
    v13 = v10 - 1;
    v14 = 40 * v10;
    v15 = v12 + 40 * v10;
  }
  v16 = v113;
  v17 = *(_DWORD *)(v113 + 12);
  v18 = v17 & v13;
  v19 = v12 + 40 * v18;
  if ( 40 * v18 != v14 )
  {
    v20 = v12 + 40 * v18;
    v21 = 0;
    while ( 1 )
    {
      v22 = *(_QWORD *)v20;
      if ( *(_QWORD *)v20 > 1u )
      {
        if ( *(_DWORD *)(v22 + 12) == v17 && v113 == v22 )
        {
          v86 = *(_DWORD *)(v20 + 8);
          v87 = v114;
          *(_QWORD *)v20 = v113;
          *(_DWORD *)(v20 + 8) = v87;
          LODWORD(v114) = v86;
          v88 = *(_QWORD *)(v20 + 16);
          *(_QWORD *)(v20 + 16) = v115;
          v115 = v88;
          LOBYTE(v88) = *(_BYTE *)(v20 + 12);
          *(_BYTE *)(v20 + 12) = BYTE4(v114) & 2 | v88 & 0xFD;
          BYTE4(v114) = v88 & 2 | BYTE4(v114) & 0xFD;
          v89 = *(_BYTE *)(v20 + 12);
          *(_BYTE *)(v20 + 12) = BYTE4(v114) & 1 | v89 & 0xFE;
          BYTE4(v114) = v89 & 1 | BYTE4(v114) & 0xFE;
          LODWORD(v88) = *(_DWORD *)(v20 + 24);
          *(_DWORD *)(v20 + 24) = v116;
          LODWORD(v116) = v88;
          v90 = *(_QWORD *)(v20 + 32);
          *(_QWORD *)(v20 + 32) = v117;
          v117 = v90;
          LOBYTE(v90) = *(_BYTE *)(v20 + 28);
          *(_BYTE *)(v20 + 28) = BYTE4(v116) & 2 | v90 & 0xFD;
          BYTE4(v116) = v90 & 2 | BYTE4(v116) & 0xFD;
          v91 = *(_BYTE *)(v20 + 28) & 1;
          *(_BYTE *)(v20 + 28) = BYTE4(v116) & 1 | *(_BYTE *)(v20 + 28) & 0xFE;
          BYTE4(v116) = v91 | BYTE4(v116) & 0xFE;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v22 )
        {
          if ( v21 )
            goto LABEL_98;
          v21 = v20;
          goto LABEL_99;
        }
        v21 = v20;
      }
      v20 += 40;
      if ( v20 == v15 )
        goto LABEL_18;
    }
  }
  v21 = 0;
  while ( 1 )
  {
LABEL_18:
    if ( v19 == v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v23 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 <= 1u )
      break;
    if ( *(_DWORD *)(v23 + 12) == v17 && v113 == v23 )
    {
      v93 = *(_DWORD *)(v12 + 8);
      v94 = v114;
      *(_QWORD *)v12 = v113;
      *(_DWORD *)(v12 + 8) = v94;
      LODWORD(v114) = v93;
      v95 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v12 + 16) = v115;
      v115 = v95;
      LOBYTE(v94) = *(_BYTE *)(v12 + 12);
      *(_BYTE *)(v12 + 12) = BYTE4(v114) & 2 | v94 & 0xFD;
      BYTE4(v114) = v94 & 2 | BYTE4(v114) & 0xFD;
      v96 = *(_BYTE *)(v12 + 12);
      *(_BYTE *)(v12 + 12) = BYTE4(v114) & 1 | v96 & 0xFE;
      BYTE4(v114) = v96 & 1 | BYTE4(v114) & 0xFE;
      LODWORD(v95) = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 24) = v116;
      LODWORD(v116) = v95;
      v97 = *(_QWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 32) = v117;
      v117 = v97;
      LOBYTE(v94) = *(_BYTE *)(v12 + 28);
      *(_BYTE *)(v12 + 28) = BYTE4(v116) & 2 | v94 & 0xFD;
      BYTE4(v116) = v94 & 2 | BYTE4(v116) & 0xFD;
      v98 = *(_BYTE *)(v12 + 28) & 1;
      *(_BYTE *)(v12 + 28) = BYTE4(v116) & 1 | *(_BYTE *)(v12 + 28) & 0xFE;
      BYTE4(v116) = v98 | BYTE4(v116) & 0xFE;
      goto LABEL_23;
    }
LABEL_17:
    v12 += 40;
  }
  if ( v23 )
  {
    v21 = v12;
    goto LABEL_17;
  }
  if ( v21 )
LABEL_98:
    --*(_DWORD *)(a1 + 176);
  else
    v21 = v12;
LABEL_99:
  v80 = *(_DWORD *)(v21 + 8);
  v81 = v114;
  *(_QWORD *)v21 = v16;
  *(_DWORD *)(v21 + 8) = v81;
  LODWORD(v114) = v80;
  v82 = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = v115;
  v115 = v82;
  LOBYTE(v81) = *(_BYTE *)(v21 + 12);
  *(_BYTE *)(v21 + 12) = BYTE4(v114) & 2 | v81 & 0xFD;
  BYTE4(v114) = v81 & 2 | BYTE4(v114) & 0xFD;
  v83 = *(_BYTE *)(v21 + 12);
  *(_BYTE *)(v21 + 12) = BYTE4(v114) & 1 | v83 & 0xFE;
  BYTE4(v114) = v83 & 1 | BYTE4(v114) & 0xFE;
  LODWORD(v82) = *(_DWORD *)(v21 + 24);
  *(_DWORD *)(v21 + 24) = v116;
  LODWORD(v116) = v82;
  v84 = *(_QWORD *)(v21 + 32);
  *(_QWORD *)(v21 + 32) = v117;
  v117 = v84;
  LOBYTE(v81) = *(_BYTE *)(v21 + 28);
  *(_BYTE *)(v21 + 28) = BYTE4(v116) & 2 | v81 & 0xFD;
  BYTE4(v116) = v81 & 2 | BYTE4(v116) & 0xFD;
  v85 = *(_BYTE *)(v21 + 28) & 1;
  *(_BYTE *)(v21 + 28) = BYTE4(v116) & 1 | *(_BYTE *)(v21 + 28) & 0xFE;
  LOBYTE(v84) = BYTE4(v116);
  ++*(_DWORD *)(a1 + 172);
  BYTE4(v116) = v85 | v84 & 0xFE;
LABEL_23:
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v114);
  sub_182CBA0(v24, &v116);
  v25 = *(unsigned int *)(a1 + 192);
  if ( 3 * (int)v25 < (unsigned int)(4 * (*(_DWORD *)(a1 + 196) + *(_DWORD *)(a1 + 200))) )
  {
    v99 = 2 * v25;
    v28 = 16LL * (unsigned int)(2 * v25);
    v46 = (__m128i *)sub_186B270(v28);
    v47 = v99;
    v26 = (__int64 *)v46;
    v48 = &v46[v28 / 0x10];
    if ( v99 )
    {
      if ( (v28 & 0x10) == 0 || (*v46 = 0, ++v46, v48 != v46) )
      {
        do
        {
          *v46 = 0;
          v46 += 2;
          v46[-1] = 0;
        }
        while ( v48 != v46 );
      }
    }
    v49 = *(const __m128i **)(a1 + 184);
    v27 = v99 - 1;
    v29 = (__int64 *)v48;
    v50 = (__m128i *)&v49[*(unsigned int *)(a1 + 192)];
    if ( v49 != v50 )
    {
      do
      {
        while ( v49->m128i_i64[0] <= 1uLL )
        {
          if ( v50 == ++v49 )
            goto LABEL_61;
        }
        v51 = 16LL * (*(_DWORD *)(v49->m128i_i64[0] + 12) & v27);
        v52 = (__m128i *)&v26[(unsigned __int64)v51 / 8];
        if ( v28 == v51 )
        {
LABEL_65:
          if ( v26 == (__int64 *)v52 )
          {
LABEL_104:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v53 = (__m128i *)v26;
          while ( v53->m128i_i64[0] )
          {
            if ( v52 == ++v53 )
              goto LABEL_104;
          }
        }
        else
        {
          v53 = (__m128i *)&v26[(unsigned __int64)v51 / 8];
          while ( v53->m128i_i64[0] )
          {
            if ( v48 == ++v53 )
              goto LABEL_65;
          }
        }
        v54 = _mm_loadu_si128(v49++);
        *v53 = v54;
      }
      while ( v50 != v49 );
LABEL_61:
      v50 = *(__m128i **)(a1 + 184);
      v29 = (__int64 *)v48;
    }
    if ( v50 )
    {
      sub_186B220(v50);
      v47 = v99;
      v27 = v99 - 1;
    }
    *(_QWORD *)(a1 + 184) = v26;
    *(_DWORD *)(a1 + 192) = v47;
    *(_DWORD *)(a1 + 200) = 0;
  }
  else
  {
    v26 = *(__int64 **)(a1 + 184);
    v27 = v25 - 1;
    v28 = 16 * v25;
    v29 = &v26[v28 / 8];
  }
  v30 = *(_DWORD *)(v7 + 12);
  v31 = 16LL * (v30 & v27);
  v32 = &v26[(unsigned __int64)v31 / 8];
  if ( v31 != v28 )
  {
    v33 = &v26[(unsigned __int64)v31 / 8];
    v34 = nullptr;
    while ( 1 )
    {
      v35 = *v33;
      if ( (unsigned __int64)*v33 > 1 )
      {
        if ( *(_DWORD *)(v35 + 12) == v30 && v7 == v35 )
        {
          *v33 = v7;
          v33[1] = a3;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v34 )
            goto LABEL_101;
          v34 = v33;
          goto LABEL_102;
        }
        v34 = v33;
      }
      v33 += 2;
      if ( v33 == v29 )
        goto LABEL_36;
    }
  }
  v34 = nullptr;
LABEL_36:
  while ( 2 )
  {
    if ( v32 == v26 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = *v26;
    if ( (unsigned __int64)*v26 > 1 )
    {
      if ( *(_DWORD *)(v36 + 12) == v30 && v7 == v36 )
      {
        *v26 = v7;
        v26[1] = a3;
        goto LABEL_41;
      }
      goto LABEL_35;
    }
    if ( v36 )
    {
      v34 = v26;
LABEL_35:
      v26 += 2;
      continue;
    }
    break;
  }
  if ( v34 )
LABEL_101:
    --*(_DWORD *)(a1 + 200);
  else
    v34 = v26;
LABEL_102:
  *v34 = v7;
  v34[1] = a3;
  ++*(_DWORD *)(a1 + 196);
LABEL_41:
  v37 = *(_QWORD **)(a1 + 216);
  ++*(_DWORD *)(v7 + 8);
  if ( v37 )
  {
    v38 = *((_DWORD *)v37 - 1);
    if ( v38 == *((_DWORD *)v37 - 2) )
    {
      v42 = (3 * v38 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v43 || v38 >= v42 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v113, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v113);
        sub_233E40((__int64)&v113);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v37 - 1, v43);
      v45 = v44[1];
      v37 = v44 + 2;
      *v44 = v42;
      *(_QWORD *)(a1 + 216) = v44 + 2;
      LODWORD(v44) = v45;
      v41 = &v37[v45];
      result = (unsigned int)((_DWORD)v44 + 1);
    }
    else
    {
      v39 = v38;
      result = v38 + 1;
      v41 = &v37[v39];
    }
  }
  else
  {
    v92 = (_QWORD *)sub_186B270(0x18u);
    v37 = v92 + 1;
    *v92 = 2;
    result = 1;
    *(_QWORD *)(a1 + 216) = v37;
    v41 = v37;
  }
  *v41 = v7;
  *((_DWORD *)v37 - 1) = result;
  return result;
}

