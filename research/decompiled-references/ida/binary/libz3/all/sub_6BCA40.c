__int64 __fastcall sub_6BCA40(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // r15
  int v18; // eax
  int v19; // eax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // rsi
  bool v28; // zf
  void *v29; // rdi
  __int64 v30; // r15
  int v31; // r13d
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r13
  unsigned int v36; // edx
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r13
  int v41; // eax
  void *v42; // rdi
  bool v43; // al
  bool v44; // al
  void *v45; // r13
  __int64 v46; // r15
  void *v47; // rdi
  int v48; // r13d
  int v49; // r14d
  __int64 v50; // rax
  int v51; // r14d
  __int64 v52; // r13
  unsigned int v53; // edx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  void *v58; // rdi
  bool v59; // al
  bool v60; // al
  void *v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdi
  void *v64; // r13
  unsigned int v65; // ebp
  void *v66; // rbx
  void *v67; // rbx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  void *v72; // r14
  bool v73; // al
  bool v74; // al
  int v75; // eax
  void *v76; // rdi
  int v77; // eax
  int v78; // eax
  bool v79; // al
  unsigned int v80; // eax
  int v81; // eax
  int v82; // eax
  void *v83; // r14
  int v84; // eax
  int v85; // eax
  unsigned int v86; // eax
  __int64 v87; // rax
  unsigned int *v88; // rax
  __int64 v89; // rax
  void (__fastcall *v90)(__int64, _QWORD, _QWORD *, __m128i *, __int64); // r14
  _QWORD *v91; // rax
  __int64 v92; // r10
  __int64 v93; // r11
  __int64 v94; // r14
  __int64 v95; // r15
  __int64 v96; // rax
  __int64 *v97; // rbx
  __int64 v98; // rax
  unsigned int v99; // r14d
  __int64 v100; // rdi
  __int64 (*v101)(); // rcx
  char v102; // cl
  __int64 v103; // r15
  unsigned int *v104; // rax
  __int64 v105; // rax
  __int64 v106; // r14
  __int64 v107; // r14
  __int64 v108; // rax
  __int64 v109; // r15
  __int64 v110; // rax
  unsigned int v111; // edx
  void *v112; // rdi
  __int64 *v113; // rdx
  int v114; // esi
  _QWORD *v115; // rax
  __int64 v116; // r10
  void (__fastcall *v117)(__int64, _QWORD, __int64, _QWORD *); // r11
  void *v118; // rbx
  void *v119; // [rsp+0h] [rbp-108h]
  __int64 v120; // [rsp+8h] [rbp-100h]
  __int64 v121; // [rsp+8h] [rbp-100h]
  __int64 v122; // [rsp+10h] [rbp-F8h]
  __int64 v123; // [rsp+10h] [rbp-F8h]
  __int64 v124; // [rsp+10h] [rbp-F8h]
  __int64 v125; // [rsp+10h] [rbp-F8h]
  __int64 v126; // [rsp+10h] [rbp-F8h]
  int v127; // [rsp+10h] [rbp-F8h]
  __int64 v128; // [rsp+18h] [rbp-F0h]
  __int64 v129; // [rsp+18h] [rbp-F0h]
  int v130; // [rsp+18h] [rbp-F0h]
  __int64 v131; // [rsp+18h] [rbp-F0h]
  int v132; // [rsp+18h] [rbp-F0h]
  __int64 v133; // [rsp+18h] [rbp-F0h]
  int v134; // [rsp+18h] [rbp-F0h]
  int v135; // [rsp+20h] [rbp-E8h]
  __int64 v136; // [rsp+20h] [rbp-E8h]
  __int64 v137; // [rsp+28h] [rbp-E0h]
  char v140; // [rsp+4Ch] [rbp-BCh] BYREF
  __m128i v141; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v142[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v143[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v144[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v145[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v146; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v147; // [rsp+A8h] [rbp-60h]
  __int64 v148; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v149; // [rsp+B8h] [rbp-50h]
  __int64 v150; // [rsp+C0h] [rbp-48h]

  v3 = a1 + 496;
  *(_QWORD *)(a1 + 728) = a1 + 496;
  v142[0] = 0;
  v142[1] = 0;
  v143[0] = 1;
  v143[1] = 0;
  v144[0] = 0;
  v144[1] = 0;
  v145[0] = 1;
  v145[1] = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD **)(v3 + 144);
      if ( !v5 || *((_DWORD *)v5 - 1) != 1 || *(_DWORD *)(v3 + 164) )
        break;
      v3 = *v5;
      *(_QWORD *)(a1 + 728) = *v5;
    }
    v6 = *(_QWORD *)(v3 + 24);
    if ( !v6 )
    {
      v65 = 0;
      goto LABEL_80;
    }
    v7 = *(unsigned int *)(a1 + 432);
    v8 = *(_DWORD *)(v6 + 12);
    v9 = *(__int64 **)(a1 + 424);
    v10 = v7 - 1;
    v7 *= 16;
    v11 = (__int64 *)((char *)v9 + v7);
    v12 = 16LL * (v8 & v10);
    v13 = &v9[(unsigned __int64)v12 / 8];
    if ( v12 == v7 )
    {
LABEL_13:
      while ( v13 != v9 )
      {
        v16 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v16 + 12) == v8 && v6 == v16 )
          {
            v14 = v9;
            goto LABEL_24;
          }
        }
        else if ( !v16 )
        {
          break;
        }
        v9 += 2;
      }
LABEL_12:
      BUG();
    }
    v14 = &v9[(unsigned __int64)v12 / 8];
    while ( 1 )
    {
      v15 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
        break;
      if ( !v15 )
        goto LABEL_12;
LABEL_9:
      v14 += 2;
      if ( v11 == v14 )
        goto LABEL_13;
    }
    if ( *(_DWORD *)(v15 + 12) != v8 || v6 != v15 )
      goto LABEL_9;
LABEL_24:
    v137 = v14[1];
    v17 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v3 + 116) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v144, v3 + 112);
      if ( (*(_BYTE *)(v3 + 132) & 1) != 0 )
        goto LABEL_127;
LABEL_26:
      v19 = *(_DWORD *)(v3 + 128);
      BYTE4(v145[0]) &= ~1u;
      LODWORD(v145[0]) = v19;
    }
    else
    {
      v18 = *(_DWORD *)(v3 + 112);
      BYTE4(v144[0]) &= ~1u;
      LODWORD(v144[0]) = v18;
      if ( (*(_BYTE *)(v3 + 132) & 1) == 0 )
        goto LABEL_26;
LABEL_127:
      sub_182C690(v17, v145, v3 + 128);
    }
    v20 = _mm_loadl_epi64((const __m128i *)(a1 + 48));
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 728) + 72LL);
    v141 = _mm_unpacklo_epi64((__m128i)v21, v20);
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v146 = 0;
    v147 = v20.m128i_i64[0];
    sub_1361190(a2, v137, &v146);
    v24 = *(_QWORD *)(a1 + 48);
    if ( v146 == *(_QWORD *)(v24 + 856) )
    {
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v142, &qword_1C7F280);
      goto LABEL_143;
    }
    if ( v146 == *(_QWORD *)(v24 + 864) )
    {
      v83 = qword_1C7F2C0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v142, &qword_1C7F2A0);
      }
      else
      {
        BYTE4(v142[0]) &= ~1u;
        LODWORD(v142[0]) = qword_1C7F2A0;
      }
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      {
        v27 = v146;
        BYTE4(v143[0]) &= ~1u;
        LODWORD(v143[0]) = qword_1C7F2B0;
        if ( !v146 )
          goto LABEL_119;
LABEL_138:
        v26 = v147;
        v28 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( !v28 )
          goto LABEL_119;
        goto LABEL_139;
      }
      sub_182C690(v83, v143, &qword_1C7F2B0);
LABEL_143:
      v27 = v146;
      if ( !v146 )
      {
LABEL_119:
        v29 = qword_1C7F2C0;
        if ( (v143[0] & 0x100000000LL) != 0
          || LODWORD(v143[0]) != 1
          || (v145[0] & 0x100000000LL) != 0
          || LODWORD(v145[0]) != 1 )
        {
          LOBYTE(v80) = sub_1848D40(qword_1C7F2C0, v142, v144);
          v29 = qword_1C7F2C0;
        }
        else if ( (v142[0] & 0x100000000LL) != 0 || (v144[0] & 0x100000000LL) != 0 )
        {
          v86 = sub_182C7B0(qword_1C7F2C0, v142, v144);
          v29 = qword_1C7F2C0;
          v80 = v86 >> 31;
        }
        else
        {
          LOBYTE(v80) = SLODWORD(v142[0]) < SLODWORD(v144[0]);
        }
        if ( (_BYTE)v80 )
          goto LABEL_38;
        if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) == 0 )
          goto LABEL_36;
        goto LABEL_124;
      }
      goto LABEL_138;
    }
    v25 = sub_1673B50((int)a1 + 88, v146, (unsigned int)v142, (unsigned int)&v140, v22, v23);
    v26 = v147;
    v27 = v146;
    if ( v25 )
    {
      if ( !v146 )
        goto LABEL_119;
      v28 = (*(_DWORD *)(v146 + 8))-- == 1;
      if ( !v28 )
        goto LABEL_119;
LABEL_139:
      sub_15D7BC0(v26, v27);
      goto LABEL_119;
    }
    if ( v146 )
    {
      v28 = (*(_DWORD *)(v146 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v26, v27);
    }
    v29 = qword_1C7F2C0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) == 0 )
    {
LABEL_36:
      BYTE4(v142[0]) &= ~1u;
      LODWORD(v142[0]) = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
        goto LABEL_37;
LABEL_125:
      sub_182C690(v29, v143, &qword_1C7F2B0);
      v29 = qword_1C7F2C0;
      goto LABEL_38;
    }
LABEL_124:
    sub_182C690(v29, v142, &qword_1C7F2A0);
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      goto LABEL_125;
LABEL_37:
    BYTE4(v143[0]) &= ~1u;
    v29 = qword_1C7F2C0;
    LODWORD(v143[0]) = qword_1C7F2B0;
LABEL_38:
    v146 = 0;
    v30 = *(_QWORD *)(a1 + 728);
    v147 = 0;
    v148 = 1;
    v149 = 0;
    v150 = 0;
    if ( (v142[0] & 0x100000000LL) != 0 )
      sub_182C690(v29, &v146, v142);
    else
      LODWORD(v146) = v142[0];
    if ( (v143[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v29, &v148, v143);
    }
    else
    {
      BYTE4(v148) &= ~1u;
      LODWORD(v148) = v143[0];
    }
    v31 = sub_182DB30(&v146);
    v32 = 3 * sub_182DB30(&v148);
    v33 = *(unsigned int *)(v30 + 160);
    v34 = v31 + v32;
    v35 = *(_QWORD *)(v30 + 152);
    v36 = v33 - 1;
    v33 *= 48;
    v37 = v35 + v33;
    v38 = 48LL * (v34 & v36);
    v39 = v35 + v38;
    if ( v38 == v33 )
      goto LABEL_84;
    v40 = v35 + v38;
LABEL_46:
    v41 = *(_DWORD *)(v40 + 4);
    if ( v41 == 2 )
    {
      if ( *(_DWORD *)v40 != v34 )
        goto LABEL_45;
      v42 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v40 + 12) & 1) != 0 || (v146 & 0x100000000LL) != 0 )
      {
        v135 = v34;
        v128 = v39;
        v69 = sub_182C7B0(qword_1C7F2C0, v40 + 8, &v146);
        v39 = v128;
        v34 = v135;
        v43 = v69 == 0;
      }
      else
      {
        v43 = *(_DWORD *)(v40 + 8) == (_DWORD)v146;
      }
      if ( !v43 )
        goto LABEL_45;
      if ( (*(_BYTE *)(v40 + 28) & 1) != 0 || (v148 & 0x100000000LL) != 0 )
      {
        v132 = v34;
        v123 = v39;
        v81 = sub_182C7B0(v42, v40 + 24, &v148);
        v39 = v123;
        v34 = v132;
        v44 = v81 == 0;
      }
      else
      {
        v44 = *(_DWORD *)(v40 + 24) == (_DWORD)v148;
      }
      if ( !v44 )
        goto LABEL_45;
LABEL_56:
      v45 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v146);
      sub_182CBA0(v45, &v148);
      v46 = *(_QWORD *)(a1 + 728);
      v47 = qword_1C7F2C0;
      v146 = 0;
      v147 = 0;
      v148 = 1;
      v149 = 0;
      v150 = 0;
      if ( (v142[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v146, v142);
        if ( (v143[0] & 0x100000000LL) != 0 )
          goto LABEL_131;
LABEL_58:
        BYTE4(v148) &= ~1u;
        LODWORD(v148) = v143[0];
      }
      else
      {
        LODWORD(v146) = v142[0];
        if ( (v143[0] & 0x100000000LL) == 0 )
          goto LABEL_58;
LABEL_131:
        sub_182C690(v47, &v148, v143);
      }
      v48 = sub_182DB30(&v146);
      v49 = 3 * sub_182DB30(&v148);
      v50 = *(unsigned int *)(v46 + 160);
      v51 = v48 + v49;
      v52 = *(_QWORD *)(v46 + 152);
      v53 = v50 - 1;
      v50 *= 48;
      v54 = v52 + v50;
      v55 = 48LL * (v51 & v53);
      v56 = v52 + v55;
      if ( v55 == v50 )
        goto LABEL_100;
      v52 += v55;
      while ( 2 )
      {
        v57 = *(_DWORD *)(v52 + 4);
        if ( v57 != 2 )
        {
          if ( !v57 )
            goto LABEL_199;
LABEL_62:
          v52 += 48;
          if ( v54 != v52 )
            continue;
          v52 = *(_QWORD *)(v46 + 152);
LABEL_100:
          if ( v56 == v52 )
          {
LABEL_199:
            v118 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v146);
            sub_182CBA0(v118, &v148);
            BUG();
          }
          while ( 2 )
          {
            v75 = *(_DWORD *)(v52 + 4);
            if ( v75 == 2 )
            {
              if ( *(_DWORD *)v52 == v51 )
              {
                v76 = qword_1C7F2C0;
                if ( (*(_BYTE *)(v52 + 12) & 1) != 0 || (v146 & 0x100000000LL) != 0 )
                {
                  v131 = v56;
                  v78 = sub_182C7B0(qword_1C7F2C0, v52 + 8, &v146);
                  v56 = v131;
                  if ( !v78 )
                    goto LABEL_112;
                }
                else if ( *(_DWORD *)(v52 + 8) == (_DWORD)v146 )
                {
LABEL_112:
                  if ( (*(_BYTE *)(v52 + 28) & 1) != 0 || (v148 & 0x100000000LL) != 0 )
                  {
                    v126 = v56;
                    v85 = sub_182C7B0(v76, v52 + 24, &v148);
                    v56 = v126;
                    v79 = v85 == 0;
                  }
                  else
                  {
                    v79 = *(_DWORD *)(v52 + 24) == (_DWORD)v148;
                  }
                  if ( v79 )
                    goto LABEL_73;
                }
              }
            }
            else if ( !v75 )
            {
              goto LABEL_199;
            }
            v52 += 48;
            if ( v56 == v52 )
              goto LABEL_199;
            continue;
          }
        }
        break;
      }
      if ( *(_DWORD *)v52 != v51 )
        goto LABEL_62;
      v58 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v52 + 12) & 1) != 0 || (v146 & 0x100000000LL) != 0 )
      {
        v136 = v54;
        v129 = v56;
        v70 = sub_182C7B0(qword_1C7F2C0, v52 + 8, &v146);
        v56 = v129;
        v54 = v136;
        v59 = v70 == 0;
      }
      else
      {
        v59 = *(_DWORD *)(v52 + 8) == (_DWORD)v146;
      }
      if ( !v59 )
        goto LABEL_62;
      if ( (*(_BYTE *)(v52 + 28) & 1) != 0 || (v148 & 0x100000000LL) != 0 )
      {
        v133 = v54;
        v124 = v56;
        v82 = sub_182C7B0(v58, v52 + 24, &v148);
        v56 = v124;
        v54 = v133;
        v60 = v82 == 0;
      }
      else
      {
        v60 = *(_DWORD *)(v52 + 24) == (_DWORD)v148;
      }
      if ( !v60 )
        goto LABEL_62;
LABEL_73:
      v61 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v146);
      sub_182CBA0(v61, &v148);
      v3 = *(_QWORD *)(*(_QWORD *)(v46 + 144) + 8LL * *(unsigned int *)(v52 + 40));
      v28 = *(_QWORD *)(v3 + 72) == 0;
      *(_QWORD *)(a1 + 728) = v3;
      if ( v28 )
      {
        if ( a3 )
        {
          v87 = *(_QWORD *)(a1 + 48);
          v146 = 0;
          v147 = v87;
          v88 = *(unsigned int **)(sub_15D1F10(v6) + 24);
          if ( v88 )
            v89 = 8LL * *v88;
          else
            v89 = 0x7FFFFFFF8LL;
          v90 = *(void (__fastcall **)(__int64, _QWORD, _QWORD *, __m128i *, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + v89)
                                                                                     + 32LL);
          v91 = sub_6AFFC0(*(_QWORD **)(a1 + 448), *(_DWORD *)(a1 + 456), v6);
          v90(v93, v91[1], v142, &v141, v92);
          sub_6B49D0(*(_QWORD *)(a1 + 728), (__int64 *)(a1 + 744));
          v94 = v141.m128i_i64[0];
          v95 = *(_QWORD *)(a1 + 728);
          if ( v141.m128i_i64[0] )
            ++*(_DWORD *)(v141.m128i_i64[0] + 8);
          sub_6A99C0(*(_QWORD *)(v95 + 72), *(_QWORD *)(v95 + 80));
          *(_QWORD *)(v95 + 72) = v94;
          v96 = *(_QWORD *)(a1 + 728);
          if ( v146 )
          {
            sub_6B4BD0(v96 + 40, *(_QWORD *)(v6 + 16), v146);
            v96 = *(_QWORD *)(a1 + 728);
          }
          v119 = (void *)(v96 + 200);
          v120 = v96 + 176;
          v97 = (__int64 *)(v96 + 72);
          sub_14B9B80(a1 + 64, v96 + 72);
          v98 = *(_QWORD *)(a1 + 40);
LABEL_162:
          v99 = 0;
          while ( v98 && v99 < *(_DWORD *)(v98 - 4) )
          {
            while ( 1 )
            {
              v100 = *(_QWORD *)(v98 + 8LL * v99);
              if ( v100 )
              {
                v101 = *(__int64 (**)())(*(_QWORD *)v100 + 64LL);
                if ( v101 != sub_6AFD50 )
                  break;
              }
              if ( ++v99 >= *(_DWORD *)(v98 - 4) )
                goto LABEL_168;
            }
            v102 = ((__int64 (__fastcall *)(__int64, __int64 *))v101)(v100, v97);
            ++v99;
            v98 = *(_QWORD *)(a1 + 40);
            if ( v102 )
              goto LABEL_162;
          }
LABEL_168:
          sub_6BB860(a1 + 776, v97, v120, (__int64)v119);
          v65 = 0;
          sub_6A99C0(v146, v147);
        }
        else
        {
          v65 = 0;
        }
        goto LABEL_79;
      }
      v62 = v141.m128i_i64[0];
      if ( v141.m128i_i64[0] )
      {
        v63 = v141.m128i_i64[1];
        v28 = (*(_DWORD *)(v141.m128i_i64[0] + 8))-- == 1;
        if ( v28 )
        {
          sub_15D7BC0(v63, v62);
          v3 = *(_QWORD *)(a1 + 728);
        }
      }
      continue;
    }
    break;
  }
  if ( !v41 )
    goto LABEL_77;
LABEL_45:
  v40 += 48;
  if ( v37 != v40 )
    goto LABEL_46;
  v35 = *(_QWORD *)(v30 + 152);
LABEL_84:
  while ( v39 != v35 )
  {
    v71 = *(_DWORD *)(v35 + 4);
    if ( v71 == 2 )
    {
      if ( *(_DWORD *)v35 == v34 )
      {
        v72 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v35 + 12) & 1) != 0 || (v146 & 0x100000000LL) != 0 )
        {
          v130 = v34;
          v122 = v39;
          v77 = sub_182C7B0(qword_1C7F2C0, v35 + 8, &v146);
          v39 = v122;
          v34 = v130;
          v73 = v77 == 0;
        }
        else
        {
          v73 = *(_DWORD *)(v35 + 8) == (_DWORD)v146;
        }
        if ( v73 )
        {
          if ( (*(_BYTE *)(v35 + 28) & 1) != 0 || (v148 & 0x100000000LL) != 0 )
          {
            v134 = v34;
            v125 = v39;
            v84 = sub_182C7B0(v72, v35 + 24, &v148);
            v39 = v125;
            v34 = v134;
            v74 = v84 == 0;
          }
          else
          {
            v74 = *(_DWORD *)(v35 + 24) == (_DWORD)v148;
          }
          if ( v74 )
            goto LABEL_56;
        }
      }
    }
    else if ( !v71 )
    {
      break;
    }
    v35 += 48;
  }
LABEL_77:
  v64 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v146);
  sub_182CBA0(v64, &v148);
  if ( a3 )
  {
    v121 = *(_QWORD *)(a1 + 48);
    if ( (unsigned __int8)sub_15D2CB0(v121, v137) )
    {
      if ( LODWORD(v142[0]) )
      {
        if ( (v142[0] & 0x100000000LL) != 0
          || LODWORD(v142[0]) != 1
          || (v143[0] & 0x100000000LL) != 0
          || LODWORD(v143[0]) != 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 1861);
        }
      }
      else
      {
        v137 = sub_15EC2C0(*(_QWORD *)(a1 + 48), v137);
      }
    }
    else
    {
      v103 = *(_QWORD *)(a1 + 48);
      v104 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v137) + 24) + 8LL);
      if ( *((_BYTE *)v104 + 8) )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v105 = sub_1674520(a1 + 88, v142, *v104);
      v106 = v105;
      if ( v105 )
        ++*(_DWORD *)(v105 + 8);
      v137 = sub_15E1B70(*(_QWORD *)(a1 + 48));
      sub_6A99A0(v106, v103);
    }
    if ( v137 )
      ++*(_DWORD *)(v137 + 8);
    v107 = *(_QWORD *)(a1 + 728);
    v108 = *(_QWORD *)(v107 + 144);
    if ( v108 )
      v127 = *(_DWORD *)(v108 - 4);
    else
      v127 = 0;
    v109 = sub_186B270(0xE8u);
    sub_6B1890(v109, v107, *(_QWORD *)v107, v137);
    v110 = *(_QWORD *)(v107 + 144);
    if ( !v110 || (v111 = *(_DWORD *)(v110 - 4), v111 == *(_DWORD *)(v110 - 8)) )
    {
      sub_6BC180((unsigned int **)(v107 + 144));
      v110 = *(_QWORD *)(v107 + 144);
      v111 = *(_DWORD *)(v110 - 4);
    }
    v112 = qword_1C7F2C0;
    *(_QWORD *)(v110 + 8LL * v111) = v109;
    *(_DWORD *)(v110 - 4) = v111 + 1;
    v146 = 0;
    v147 = 0;
    v148 = 1;
    v149 = 0;
    sub_27B950((__int64)v112, (__int64)&v146, (int *)v142);
    LODWORD(v150) = v127;
    sub_6BC280(v107 + 152, (__int64)&v146);
    sub_25A130((char *)&v146);
    v113 = *(__int64 **)(v107 + 16);
    if ( v113 )
      v114 = *((_DWORD *)v113 - 1);
    else
      v114 = 0;
    sub_6B2860(v109 + 8, v114, v113);
    *(_QWORD *)(a1 + 728) = v109;
    sub_15D1F10(v6);
    v115 = sub_6AFFC0(*(_QWORD **)(a1 + 448), *(_DWORD *)(a1 + 456), v6);
    v117(v116, v115[1], v141.m128i_i64[0], v142);
    sub_6B49D0(*(_QWORD *)(a1 + 728), (__int64 *)(a1 + 744));
    sub_6A99A0(v137, v121);
  }
  v65 = 1;
LABEL_79:
  sub_6A99C0(v141.m128i_i64[0], v141.m128i_i64[1]);
LABEL_80:
  v66 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v144);
  sub_182CBA0(v66, v145);
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v142);
  sub_182CBA0(v67, v143);
  return v65;
}

