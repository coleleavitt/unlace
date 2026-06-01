__int64 __fastcall sub_6CADC0(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  __int64 v7; // r10
  int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // edx
  __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 *v28; // rdx
  int v29; // eax
  __int64 v30; // rbx
  __int64 *j; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // r14
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  void *v47; // rdi
  int v48; // eax
  int v49; // edx
  int v50; // eax
  __int64 v51; // rax
  char v52; // si
  char v53; // dl
  char v54; // cl
  char v55; // si
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r9
  int v59; // esi
  int v60; // eax
  __int64 v61; // rdx
  int v62; // ecx
  __m128i *v63; // r12
  __int64 v64; // r8
  __m128i *v65; // r15
  __m128i v66; // xmm0
  __int64 v67; // rax
  __m128i *v68; // rdi
  __m128i *v69; // rax
  __m128i *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rax
  void *v73; // rdi
  int v74; // eax
  int v75; // edx
  int v76; // edx
  char v77; // cl
  __int64 v78; // rax
  __int64 v79; // rdx
  char v80; // si
  __int64 v81; // rax
  __int64 v83; // rax
  unsigned int v84; // ecx
  size_t v85; // rsi
  unsigned int *v86; // rax
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  unsigned int v93; // r10d
  unsigned __int64 v94; // rdx
  __m128i *v95; // rax
  const __m128i *v96; // rax
  __m128i *v97; // r11
  __int64 v98; // rdx
  __m128i *v99; // rsi
  __m128i *v100; // rdx
  _QWORD *v101; // r13
  unsigned int v102; // eax
  _QWORD *v103; // r12
  __int64 *v104; // rbp
  __int64 *v105; // r15
  __int64 v106; // rsi
  __int64 v107; // rdi
  char **v109; // r12
  char **exception; // r12
  __int64 v111; // [rsp+0h] [rbp-B8h]
  unsigned __int8 v112; // [rsp+0h] [rbp-B8h]
  void *v113; // [rsp+0h] [rbp-B8h]
  __int64 *v114; // [rsp+0h] [rbp-B8h]
  __int64 v115; // [rsp+0h] [rbp-B8h]
  __int64 v116; // [rsp+0h] [rbp-B8h]
  __int64 v117; // [rsp+8h] [rbp-B0h]
  int v118; // [rsp+8h] [rbp-B0h]
  unsigned int v119; // [rsp+8h] [rbp-B0h]
  unsigned int v120; // [rsp+8h] [rbp-B0h]
  size_t v121; // [rsp+8h] [rbp-B0h]
  void *v122; // [rsp+8h] [rbp-B0h]
  unsigned int v124; // [rsp+10h] [rbp-A8h]
  int v125; // [rsp+10h] [rbp-A8h]
  __int64 v126; // [rsp+10h] [rbp-A8h]
  __int64 v127; // [rsp+18h] [rbp-A0h]
  int v128; // [rsp+18h] [rbp-A0h]
  int v129; // [rsp+20h] [rbp-98h]
  __int64 v130; // [rsp+20h] [rbp-98h]
  unsigned int v131; // [rsp+38h] [rbp-80h]
  __int64 v132[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v133; // [rsp+60h] [rbp-58h] BYREF
  __int64 v134; // [rsp+68h] [rbp-50h]
  __int64 v135; // [rsp+70h] [rbp-48h] BYREF
  __int64 v136; // [rsp+78h] [rbp-40h]

  v7 = *a2;
  v8 = *(_DWORD *)(*a2 + 12);
  v9 = (*(_DWORD *)(a3 + 12) - v8) ^ (v8 << 8);
  v10 = (v8 - v9) << 10;
  v11 = v9 ^ ((v8 - v9) << 16);
  v12 = v9 - v8;
  v13 = *(__int64 **)(a1 + 32);
  v14 = (v11 + v12) ^ (unsigned int)v10;
  v15 = *(unsigned int *)(a1 + 40);
  v16 = v15 - 1;
  v15 *= 32;
  v17 = (__int64 *)((char *)v13 + v15);
  v18 = 32LL * ((unsigned int)v14 & v16);
  v19 = (__int64 *)((char *)v13 + v18);
  if ( v18 != v15 )
  {
    for ( i = (__int64 *)((char *)v13 + v18); v17 != i; i += 4 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == (_DWORD)v14 && v7 == v18 && a3 == i[1] )
        {
LABEL_57:
          v72 = *(_QWORD *)(i[2] + 8);
          v73 = qword_1C7F2C0;
          if ( v72 )
          {
            v74 = *(_DWORD *)(v72 - 4);
            v133 = 0;
            v134 = 0;
            v135 = 1;
            v75 = v74;
            v136 = 0;
            if ( v74 >= 0 )
              goto LABEL_59;
            v113 = qword_1C7F2C0;
            sub_1830C40(qword_1C7F2C0, &v133, (unsigned int)v74);
            v73 = v113;
          }
          else
          {
            v133 = 0;
            v75 = 0;
            v134 = 0;
            v135 = 1;
            v136 = 0;
LABEL_59:
            LODWORD(v133) = v75;
          }
          sub_182CBA0(v73, &v135);
          v76 = v133;
          v77 = BYTE4(v133);
          LODWORD(v133) = *a4;
          v78 = *((_QWORD *)a4 + 1);
          *a4 = v76;
          v79 = v134;
          v134 = v78;
          LOBYTE(v78) = *((_BYTE *)a4 + 4);
          *((_QWORD *)a4 + 1) = v79;
          LOBYTE(v79) = v77;
          v77 &= ~2u;
          LOBYTE(v79) = v78 & 0xFC | v79 & 2;
          v80 = *((_BYTE *)a4 + 20);
          BYTE4(v133) = v78 & 1 | v77 & 0xFE | v78 & 2;
          LODWORD(v78) = a4[4];
          *((_BYTE *)a4 + 4) = v77 & 1 | v79;
          LODWORD(v135) = v78;
          v81 = *((_QWORD *)a4 + 3);
          *((_QWORD *)a4 + 3) = v136;
          v136 = v81;
          LOBYTE(v81) = BYTE4(v135);
          a4[4] = 1;
          *((_BYTE *)a4 + 20) = v80 & 0xFC | v81 & 2;
          BYTE4(v135) = v80 & 1 | v80 & 2 | v81 & 0xFC;
          sub_25A130((char *)&v133);
          return 1;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v19 != v13; v13 += 4 )
  {
    v83 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
    {
      if ( *((_DWORD *)v13 + 6) == (_DWORD)v14 && v7 == v83 && a3 == v13[1] )
      {
        i = v13;
        goto LABEL_57;
      }
    }
    else if ( !v83 )
    {
      break;
    }
  }
LABEL_8:
  v21 = *(_QWORD *)(a1 + 24);
  v132[0] = *(_QWORD *)(a1 + 8);
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *, __int64 *))(*(_QWORD *)v21 + 24LL))(
          v21,
          v14,
          v18,
          v13,
          v19);
  v23 = *(__int64 **)v22;
  v24 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
  if ( *(_QWORD *)v22 == v24 )
    goto LABEL_90;
  while ( (unsigned __int64)*v23 <= 1 )
  {
    if ( (__int64 *)v24 == ++v23 )
      goto LABEL_90;
  }
  if ( (__int64 *)v24 == v23 )
  {
LABEL_90:
    v30 = 0;
  }
  else
  {
    v25 = *v23;
    if ( *v23 )
      ++*(_DWORD *)(v25 + 8);
    v111 = v24;
    v26 = (_QWORD *)sub_186B270(0x18u);
    v27 = v26 + 1;
    v28 = (__int64 *)v111;
    *v26 = 2;
    v29 = 1;
    v30 = (__int64)v27;
LABEL_16:
    *v27 = v25;
    *(_DWORD *)(v30 - 4) = v29;
    for ( j = v23 + 1; v28 != v23 + 1; j = v23 + 1 )
    {
      while ( 1 )
      {
        v25 = *j;
        v23 = j;
        if ( (unsigned __int64)*j > 1 )
          break;
        if ( v28 == ++j )
          goto LABEL_23;
      }
      if ( v28 == j )
        break;
      ++*(_DWORD *)(v25 + 8);
      v32 = *(_DWORD *)(v30 - 4);
      if ( v32 == *(_DWORD *)(v30 - 8) )
      {
        v84 = (3 * v32 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v32 + 8 >= (unsigned int)v85 || v32 >= v84 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v133, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v133);
          sub_233E40((__int64)&v133);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v119 = (3 * v32 + 1) >> 1;
        v114 = v28;
        v86 = (unsigned int *)sub_186B300((void *)(v30 - 8), v85);
        v30 = (__int64)(v86 + 2);
        v28 = v114;
        *v86 = v119;
        LODWORD(v86) = v86[1];
        v27 = (_QWORD *)(v30 + 8LL * (unsigned int)v86);
        v29 = (_DWORD)v86 + 1;
        goto LABEL_16;
      }
      *(_QWORD *)(v30 + 8LL * v32) = v25;
      *(_DWORD *)(v30 - 4) = v32 + 1;
    }
  }
LABEL_23:
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  v34 = *(_QWORD **)v33;
  v35 = *(_QWORD *)v33 + 8LL * *(unsigned int *)(v33 + 8);
  if ( *(_QWORD *)v33 != v35 )
  {
    while ( *v34 <= 1u )
    {
      if ( (_QWORD *)v35 == ++v34 )
        goto LABEL_38;
    }
    if ( (_QWORD *)v35 != v34 )
    {
      do
      {
        v36 = sub_15E1A70(*(_QWORD *)(a1 + 8));
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        if ( v30 )
        {
          v38 = *(_DWORD *)(v30 - 4);
          if ( v38 == *(_DWORD *)(v30 - 8) )
          {
            v87 = (3 * v38 + 1) >> 1;
            v88 = 8 * v87 + 8;
            if ( 8 * v38 + 8 >= (unsigned int)v88 || v38 >= v87 )
            {
              v109 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v133, "Overflow encountered when expanding vector");
              *v109 = (char *)off_1C63128;
              sub_2333C0(v109 + 1, &v133);
              sub_233E40((__int64)&v133);
              __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v120 = (3 * v38 + 1) >> 1;
            v115 = v37;
            v89 = (unsigned int *)sub_186B300((void *)(v30 - 8), v88);
            v30 = (__int64)(v89 + 2);
            v37 = v115;
            *v89 = v120;
            LODWORD(v89) = v89[1];
            v41 = (_QWORD *)(v30 + 8LL * (unsigned int)v89);
            v40 = (_DWORD)v89 + 1;
          }
          else
          {
            v39 = v38;
            v40 = v38 + 1;
            v41 = (_QWORD *)(v30 + 8 * v39);
          }
        }
        else
        {
          v116 = v36;
          v91 = (_QWORD *)sub_186B270(0x18u);
          v30 = (__int64)(v91 + 1);
          *v91 = 2;
          v37 = v116;
          v40 = 1;
          v41 = (_QWORD *)v30;
        }
        *v41 = v37;
        *(_DWORD *)(v30 - 4) = v40;
        v42 = v34 + 1;
        if ( (_QWORD *)v35 == v34 + 1 )
          break;
        while ( 1 )
        {
          v34 = v42;
          if ( *v42 > 1u )
            break;
          if ( (_QWORD *)v35 == ++v42 )
            goto LABEL_38;
        }
      }
      while ( v42 != (_QWORD *)v35 );
    }
  }
LABEL_38:
  v43 = (__int64 *)sub_186B270(0x78u);
  v44 = *(_QWORD *)(a1 + 8);
  v43[1] = 0;
  *v43 = v44;
  v43[2] = v44;
  v43[3] = 0;
  v43[4] = 0;
  v43[5] = v44;
  v43[6] = 0;
  v43[7] = v44;
  v43[8] = 0;
  v43[9] = v44;
  v43[10] = 0;
  v43[11] = v44;
  v43[12] = 0;
  v43[13] = v44;
  v43[14] = 0;
  if ( v30 )
    v45 = *(unsigned int *)(v30 - 4);
  else
    v45 = 0;
  v112 = sub_6DF680(a1 + 96, *a2, v45, v30, v43);
  if ( !v112 )
  {
    sub_2334C0(v43 + 13);
    sub_2334C0(v43 + 11);
    sub_2334C0(v43 + 9);
    sub_2334C0(v43 + 7);
    sub_2334C0(v43 + 5);
    v101 = (_QWORD *)v43[4];
    if ( v101 )
    {
      v102 = *((_DWORD *)v101 - 1);
      if ( v102 )
      {
        v103 = &v101[2 * v102];
        do
        {
          v104 = (__int64 *)v101[1];
          if ( v104 )
          {
            v105 = &v104[*((unsigned int *)v104 - 1)];
            if ( v104 >= v105 )
              goto LABEL_135;
            do
            {
              while ( 1 )
              {
                v106 = *v104;
                if ( *v104 )
                {
                  v107 = *v101;
                  if ( (*(_DWORD *)(v106 + 8))-- == 1 )
                    break;
                }
                if ( ++v104 >= v105 )
                  goto LABEL_134;
              }
              sub_15D7BC0(v107, v106);
              ++v104;
            }
            while ( v104 < v105 );
LABEL_134:
            v104 = (__int64 *)v101[1];
            if ( v104 )
LABEL_135:
              sub_186B220(v104 - 1);
          }
          v101 += 2;
        }
        while ( v103 != v101 );
        v101 = (_QWORD *)v43[4];
      }
      sub_186B220(v101 - 1);
    }
    sub_2334C0(v43 + 2);
    sub_2334C0(v43);
    sub_186B220(v43);
    goto LABEL_89;
  }
  v46 = v43[1];
  v47 = qword_1C7F2C0;
  if ( v46 )
  {
    v48 = *(_DWORD *)(v46 - 4);
    v133 = 0;
    v134 = 0;
    v135 = 1;
    v49 = v48;
    v136 = 0;
    if ( v48 < 0 )
    {
      v122 = qword_1C7F2C0;
      sub_1830C40(qword_1C7F2C0, &v133, (unsigned int)v48);
      v47 = v122;
      goto LABEL_44;
    }
  }
  else
  {
    v133 = 0;
    v49 = 0;
    v134 = 0;
    v135 = 1;
    v136 = 0;
  }
  LODWORD(v133) = v49;
LABEL_44:
  sub_182CBA0(v47, &v135);
  v50 = *a4;
  *a4 = v133;
  LODWORD(v133) = v50;
  v51 = *((_QWORD *)a4 + 1);
  *((_QWORD *)a4 + 1) = v134;
  v134 = v51;
  v52 = *((_BYTE *)a4 + 4);
  LOBYTE(v51) = v52 & 2;
  v52 &= ~2u;
  v53 = BYTE4(v133) & 1;
  LOBYTE(v51) = v52 & 1 | BYTE4(v133) & 0xFC | v51 & 0xFE;
  v54 = v52 & 0xFE | BYTE4(v133) & 2;
  v55 = *((_BYTE *)a4 + 20);
  BYTE4(v133) = v51;
  LODWORD(v51) = a4[4];
  *((_BYTE *)a4 + 4) = v54 | v53;
  LODWORD(v135) = v51;
  v56 = *((_QWORD *)a4 + 3);
  *((_QWORD *)a4 + 3) = v136;
  v136 = v56;
  LOBYTE(v56) = BYTE4(v135);
  a4[4] = 1;
  *((_BYTE *)a4 + 20) = v55 & 0xFC | v56 & 2;
  BYTE4(v135) = v55 & 1 | v55 & 2 | v56 & 0xFC;
  sub_25A130((char *)&v133);
  v57 = *a2;
  v133 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  v117 = v57;
  sub_6C01B0((_QWORD *)(a1 + 248), &v133);
  ++*(_DWORD *)(a3 + 8);
  v133 = a3;
  sub_6C01B0((_QWORD *)(a1 + 248), &v133);
  v58 = v117;
  v59 = *(_DWORD *)(v117 + 12);
  v60 = (*(_DWORD *)(a3 + 12) - v59) ^ (v59 << 8);
  v61 = *(unsigned int *)(a1 + 40);
  v62 = ((v60 ^ ((v59 - v60) << 16)) + v60 - v59) ^ ((v59 - v60) << 10);
  if ( 3 * (int)v61 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
  {
    v129 = ((v60 ^ ((v59 - v60) << 16)) + v60 - v59) ^ ((v59 - v60) << 10);
    v127 = v117;
    v124 = 2 * v61;
    v121 = 32LL * (unsigned int)(2 * v61);
    v92 = sub_186B270(v121);
    v93 = v124;
    v64 = v121;
    v63 = (__m128i *)v92;
    v58 = v127;
    v62 = v129;
    if ( v124 )
    {
      v125 = v124 - 1;
      if ( v93 - 1 <= 2 )
      {
        *(_DWORD *)(v92 + 24) = 0;
        *(_DWORD *)(v92 + 56) = 0;
        *(_OWORD *)v92 = 0;
        *(_OWORD *)(v92 + 32) = 0;
      }
      else
      {
        v94 = v92 + ((unsigned __int64)(v93 >> 2) << 7);
        do
        {
          *(_DWORD *)(v92 + 24) = 0;
          v92 += 128;
          *(_OWORD *)(v92 - 128) = 0;
          *(_OWORD *)(v92 - 96) = 0;
          *(_OWORD *)(v92 - 64) = 0;
          *(_OWORD *)(v92 - 32) = 0;
          *(_DWORD *)(v92 - 72) = 0;
          *(_DWORD *)(v92 - 40) = 0;
          *(_DWORD *)(v92 - 8) = 0;
        }
        while ( v94 != v92 );
        v95 = &v63[2 * (v93 & 0xFFFFFFFC)];
        if ( (v93 & 2) != 0 )
        {
          v95[1].m128i_i32[2] = 0;
          v95[3].m128i_i32[2] = 0;
          *v95 = 0;
          v95[2] = 0;
          if ( (v93 & 2) != 2 )
          {
            v95[5].m128i_i32[2] = 0;
            v95[4] = 0;
          }
        }
      }
    }
    else
    {
      v125 = -1;
    }
    v96 = *(const __m128i **)(a1 + 32);
    v65 = &v63[v121 / 0x10];
    v97 = (__m128i *)&v96[2 * *(unsigned int *)(a1 + 40)];
    v118 = v125;
    if ( v96 != v97 )
    {
      do
      {
        if ( v96->m128i_i64[0] > 1uLL )
        {
          v98 = 32LL * (v96[1].m128i_i32[2] & (unsigned int)v125);
          v99 = &v63[(unsigned __int64)v98 / 0x10];
          if ( v64 == v98 )
          {
LABEL_110:
            if ( v63 == v99 )
            {
LABEL_142:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v100 = v63;
            while ( v100->m128i_i64[0] )
            {
              v100 += 2;
              if ( v99 == v100 )
                goto LABEL_142;
            }
          }
          else
          {
            v100 = &v63[(unsigned __int64)v98 / 0x10];
            while ( v100->m128i_i64[0] )
            {
              v100 += 2;
              if ( v65 == v100 )
                goto LABEL_110;
            }
          }
          *v100 = _mm_loadu_si128(v96);
          v100[1] = _mm_loadu_si128(v96 + 1);
        }
        v96 += 2;
      }
      while ( v97 != v96 );
      v97 = *(__m128i **)(a1 + 32);
    }
    if ( v97 )
    {
      v131 = v93;
      v130 = v64;
      v128 = v62;
      v126 = v58;
      sub_186B220(v97);
      v93 = v131;
      v64 = v130;
      v62 = v128;
      v58 = v126;
    }
    *(_QWORD *)(a1 + 32) = v63;
    *(_DWORD *)(a1 + 40) = v93;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v63 = *(__m128i **)(a1 + 32);
    v118 = v61 - 1;
    v64 = 32 * v61;
    v65 = &v63[2 * v61];
  }
  v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v58, (__m128i)(unsigned __int64)a3);
  v67 = 32LL * (v62 & (unsigned int)v118);
  v68 = &v63[(unsigned __int64)v67 / 0x10];
  if ( v67 != v64 )
  {
    v69 = &v63[(unsigned __int64)v67 / 0x10];
    v70 = nullptr;
    while ( 1 )
    {
      v71 = v69->m128i_i64[0];
      if ( v69->m128i_i64[0] > 1uLL )
      {
        if ( v69[1].m128i_i32[2] == v62 && v58 == v71 && a3 == v69->m128i_i64[1] )
        {
          v69[1].m128i_i64[0] = (__int64)v43;
          v69[1].m128i_i32[2] = v62;
          *v69 = v66;
          goto LABEL_89;
        }
      }
      else
      {
        if ( !v71 )
        {
          if ( v70 )
            goto LABEL_121;
          v70 = v69;
          goto LABEL_122;
        }
        v70 = v69;
      }
      v69 += 2;
      if ( v69 == v65 )
        goto LABEL_82;
    }
  }
  v70 = nullptr;
  while ( 1 )
  {
LABEL_82:
    if ( v68 == v63 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v90 = v63->m128i_i64[0];
    if ( v63->m128i_i64[0] <= 1uLL )
      break;
    if ( v63[1].m128i_i32[2] == v62 && v58 == v90 && a3 == v63->m128i_i64[1] )
    {
      v63[1].m128i_i64[0] = (__int64)v43;
      v63[1].m128i_i32[2] = v62;
      *v63 = v66;
      goto LABEL_89;
    }
LABEL_81:
    v63 += 2;
  }
  if ( v90 )
  {
    v70 = v63;
    goto LABEL_81;
  }
  if ( v70 )
LABEL_121:
    --*(_DWORD *)(a1 + 48);
  else
    v70 = v63;
LABEL_122:
  v70[1].m128i_i64[0] = (__int64)v43;
  v70[1].m128i_i32[2] = v62;
  *v70 = v66;
  ++*(_DWORD *)(a1 + 44);
LABEL_89:
  v132[1] = v30;
  sub_2334C0(v132);
  return v112;
}

