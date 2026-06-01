__int64 __fastcall sub_3C0EC0(char *a1, char *a2, __m128i a3)
{
  char *v3; // r15
  bool v4; // zf
  unsigned int v5; // eax
  double v6; // xmm1_8
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  double *v10; // rcx
  _DWORD *v11; // rbx
  char *v12; // rdx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  double *v16; // r9
  double *i; // rax
  _DWORD *v18; // rdx
  unsigned int v19; // edx
  double v20; // xmm0_8
  unsigned int v21; // ebp
  double v22; // xmm1_8
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // eax
  _DWORD *v26; // rdx
  char v27; // al
  char v28; // cl
  int v29; // eax
  __m128i *v30; // rbp
  int v31; // r10d
  size_t v32; // r12
  __m128i *v33; // rcx
  int v34; // esi
  __int64 v35; // r10
  __m128i *v36; // rdi
  double *m128i_i64; // rax
  __m128i *v38; // r8
  _DWORD *v39; // rdx
  double v40; // xmm2_8
  _DWORD *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  unsigned int v48; // r13d
  unsigned int v49; // esi
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 j; // rbx
  __int64 v53; // r12
  int v54; // eax
  _DWORD *v55; // rcx
  char v56; // al
  char v57; // cl
  __int64 v58; // rdi
  __m128i *v59; // rax
  __m128i *v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdx
  __m128i *v63; // r11
  _DWORD *v64; // r8
  const __m128i *v65; // rbx
  __int64 v66; // rax
  __m128i *v67; // rdx
  __m128i *v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r12d
  unsigned int v71; // eax
  __int64 v72; // r8
  __int64 v73; // rbx
  __int64 k; // r13
  int v75; // eax
  _DWORD *v76; // rcx
  char v77; // al
  char v78; // dl
  unsigned int v79; // eax
  __int64 v80; // rbx
  unsigned int v81; // ebp
  __int64 v82; // rcx
  __int64 v83; // r13
  __int64 v84; // r12
  int v85; // eax
  int v86; // edx
  _DWORD *v87; // rax
  char v88; // al
  char v89; // dl
  unsigned int v90; // eax
  __int64 v91; // rbx
  unsigned int v92; // r13d
  unsigned int v93; // r12d
  __int64 v94; // rbp
  __int64 v95; // rsi
  int v96; // ecx
  _DWORD *v97; // rax
  char v98; // al
  char v99; // cl
  unsigned int v100; // r14d
  unsigned int v101; // r13d
  __int64 v102; // r12
  unsigned int v103; // ebx
  __int64 v104; // rsi
  double v105; // [rsp+8h] [rbp-E0h]
  _DWORD *v106; // [rsp+8h] [rbp-E0h]
  double v107; // [rsp+10h] [rbp-D8h]
  char *v108; // [rsp+18h] [rbp-D0h]
  _QWORD *v109; // [rsp+20h] [rbp-C8h]
  unsigned int v110; // [rsp+20h] [rbp-C8h]
  char *v111; // [rsp+30h] [rbp-B8h]
  unsigned int v112; // [rsp+38h] [rbp-B0h]
  __m128i *v113; // [rsp+40h] [rbp-A8h]
  __int64 v114; // [rsp+48h] [rbp-A0h]
  unsigned int v115; // [rsp+48h] [rbp-A0h]
  __int64 v116; // [rsp+50h] [rbp-98h]
  __int64 v117; // [rsp+50h] [rbp-98h]
  __int64 v118; // [rsp+58h] [rbp-90h]
  unsigned int v119; // [rsp+58h] [rbp-90h]
  unsigned int v120; // [rsp+64h] [rbp-84h]
  __int64 v121; // [rsp+68h] [rbp-80h]
  __int64 v122; // [rsp+68h] [rbp-80h]
  __int64 v123; // [rsp+70h] [rbp-78h]
  unsigned int v124; // [rsp+78h] [rbp-70h]
  unsigned int v125[4]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v126[88]; // [rsp+90h] [rbp-58h] BYREF

  v3 = a1;
  v4 = (*((_DWORD *)a1 + 33))-- == 1;
  v108 = a2;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 32);
    if ( v5 > 0xFFFF )
    {
      v6 = 1.1;
      a3 = _mm_cvtsi32_si128(0x16u);
    }
    else
    {
      v6 = 1.1 * *((double *)a1 + 15);
      a3 = (__m128i)(11 * v5 / 0xAuLL);
    }
    a3.m128i_i64[0] = _mm_shuffle_epi32(a3, 224).m128i_u64[0];
    *((double *)a1 + 15) = v6;
    *((_QWORD *)a1 + 16) = a3.m128i_i64[0];
  }
  v7 = *((_QWORD *)a2 + 3);
  if ( !v7 )
  {
    v9 = 0;
    goto LABEL_41;
  }
  a2 = a1 + 112;
  v8 = 0;
  v9 = 0;
  v107 = 0.0;
  v111 = a1 + 112;
  do
  {
    if ( v8 >= *(_DWORD *)(v7 - 4) )
      break;
    v10 = *((double **)v3 + 10);
    v11 = *(_DWORD **)(v7 + 8LL * v8);
    v12 = (char *)*((unsigned int *)v3 + 22);
    v13 = v11[3];
    v14 = (_DWORD)v12 - 1;
    a2 = v12;
    v12 = (char *)(16LL * (_QWORD)v12);
    a1 = &v12[(_QWORD)v10];
    v15 = 16LL * (v13 & (unsigned int)v14);
    v16 = &v10[(unsigned __int64)v15 / 8];
    if ( (char *)v15 != v12 )
    {
      for ( i = &v10[(unsigned __int64)v15 / 8]; a1 != (char *)i; i += 2 )
      {
        v18 = *(_DWORD **)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( v18[3] == v13 && v11 == v18 )
            goto LABEL_36;
        }
        else if ( !v18 )
        {
          goto LABEL_15;
        }
      }
    }
    if ( v10 == v16 )
    {
LABEL_15:
      v19 = v11[6];
      v20 = 1.0;
      if ( !v19 )
        goto LABEL_25;
      goto LABEL_16;
    }
    while ( 1 )
    {
      v42 = *(_DWORD **)v10;
      if ( *(_QWORD *)v10 <= 1u )
        break;
      if ( v42[3] == v13 && v11 == v42 )
      {
        i = v10;
LABEL_36:
        v105 = i[1];
        goto LABEL_37;
      }
LABEL_47:
      v10 += 2;
      if ( v16 == v10 )
        goto LABEL_15;
    }
    if ( v42 )
      goto LABEL_47;
    v19 = v11[6];
    v20 = 1.0;
    if ( !v19 )
      goto LABEL_25;
LABEL_16:
    v112 = v8;
    v21 = 0;
    while ( 1 )
    {
LABEL_18:
      v22 = 0.0;
      v23 = *(_QWORD *)&v11[2 * v21 + 8];
      v125[0] = 0;
      if ( *(_WORD *)(v23 + 4) )
        goto LABEL_17;
      v24 = *(_QWORD *)(v23 + 16);
      v109 = v3 + 8;
      v25 = sub_15F0200(v3 + 8);
      v26 = *(_DWORD **)(v24 + 24);
      if ( v26 )
      {
        if ( v25 == *v26 && !v26[1] )
          break;
      }
      v27 = sub_15D26C0(*(_QWORD *)v3, v23);
      v19 = v11[6];
      v28 = v27;
      v29 = v125[0];
      if ( v28 )
        v29 = v125[0] + 1;
      ++v21;
      v20 = v20 + (double)v29;
      if ( v21 >= v19 )
        goto LABEL_24;
    }
    v48 = 0;
    v49 = ++v125[0];
    v50 = *(_DWORD *)(v23 + 24);
    if ( !v50 )
      goto LABEL_69;
    v106 = v11;
    v51 = v23;
    while ( 2 )
    {
      if ( v49 > 0x13 )
        goto LABEL_67;
      for ( j = *(_QWORD *)(v51 + 8LL * v48 + 32); *(_WORD *)(j + 4); j = *(_QWORD *)(v51 + 8LL * v48 + 32) )
      {
        if ( ++v48 >= v50 )
          goto LABEL_68;
      }
      v53 = *(_QWORD *)(j + 16);
      v114 = v51;
      v54 = sub_15F0200(v109);
      v55 = *(_DWORD **)(v53 + 24);
      v51 = v114;
      if ( !v55 || v54 != *v55 || v55[1] )
      {
        v56 = sub_15D26C0(*(_QWORD *)v3, j);
        v51 = v114;
        v49 = v125[0];
        v57 = v56;
        v50 = *(_DWORD *)(v114 + 24);
        if ( v57 )
          v49 = ++v125[0];
        goto LABEL_67;
      }
      v70 = 0;
      v49 = ++v125[0];
      v71 = *(_DWORD *)(j + 24);
      if ( !v71 )
        goto LABEL_112;
      v115 = v48;
      v72 = j;
      v73 = v51;
      while ( 2 )
      {
        if ( v49 > 0x13 )
          goto LABEL_110;
        for ( k = *(_QWORD *)(v72 + 8LL * v70 + 32); *(_WORD *)(k + 4); k = *(_QWORD *)(v72 + 8LL * v70 + 32) )
        {
          if ( ++v70 >= v71 )
            goto LABEL_111;
        }
        v118 = v72;
        v116 = *(_QWORD *)(k + 16);
        v75 = sub_15F0200(v109);
        v72 = v118;
        v76 = *(_DWORD **)(v116 + 24);
        if ( !v76 || v75 != *v76 || v76[1] )
        {
          v77 = sub_15D26C0(*(_QWORD *)v3, k);
          v72 = v118;
          v49 = v125[0];
          v78 = v77;
          v71 = *(_DWORD *)(v118 + 24);
          if ( v78 )
            v49 = ++v125[0];
          goto LABEL_110;
        }
        v49 = ++v125[0];
        v79 = *(_DWORD *)(k + 24);
        if ( !v79 )
          goto LABEL_132;
        v120 = v70;
        v117 = v73;
        v80 = v118;
        v119 = v21;
        v81 = 0;
        v82 = k;
        while ( 2 )
        {
          if ( v49 > 0x13 )
            goto LABEL_130;
          while ( 1 )
          {
            v83 = *(_QWORD *)(v82 + 8LL * v81 + 32);
            if ( !*(_WORD *)(v83 + 4) )
              break;
            if ( ++v81 >= v79 )
              goto LABEL_131;
          }
          v84 = *(_QWORD *)(v83 + 16);
          v121 = v82;
          v85 = sub_15F0200(v109);
          v82 = v121;
          v86 = v85;
          v87 = *(_DWORD **)(v84 + 24);
          if ( !v87 || v86 != *v87 || v87[1] )
          {
            v88 = sub_15D26C0(*(_QWORD *)v3, v83);
            v82 = v121;
            v49 = v125[0];
            v89 = v88;
            v79 = *(_DWORD *)(v121 + 24);
            if ( v89 )
              v49 = ++v125[0];
            goto LABEL_130;
          }
          v49 = ++v125[0];
          v90 = *(_DWORD *)(v83 + 24);
          if ( !v90 )
            goto LABEL_148;
          v123 = v121;
          v122 = v80;
          v91 = v83;
          v92 = 0;
          v93 = v81;
          while ( v49 <= 0x13 )
          {
            while ( 1 )
            {
              v94 = *(_QWORD *)(v91 + 8LL * v92 + 32);
              if ( !*(_WORD *)(v94 + 4) )
                break;
              if ( ++v92 >= v90 )
                goto LABEL_151;
            }
            v95 = *(_QWORD *)(v94 + 16);
            v96 = sub_15F0200(v109);
            v97 = *(_DWORD **)(v95 + 24);
            if ( v97 && v96 == *v97 && !v97[1] )
            {
              v49 = ++v125[0];
              if ( *(_DWORD *)(v94 + 24) )
              {
                v124 = v9;
                v100 = v92;
                v101 = v93;
                v102 = v91;
                v103 = 0;
                do
                {
                  v104 = *(_QWORD *)(v94 + 8LL * v103++ + 32);
                  sub_3BE4D0(v3, v104, v125, 0x14u);
                }
                while ( v103 < *(_DWORD *)(v94 + 24) );
                v91 = v102;
                v49 = v125[0];
                v93 = v101;
                v92 = v100;
                v90 = *(_DWORD *)(v91 + 24);
                v9 = v124;
              }
              else
              {
                v90 = *(_DWORD *)(v91 + 24);
              }
            }
            else
            {
              v98 = sub_15D26C0(*(_QWORD *)v3, v94);
              v49 = v125[0];
              v99 = v98;
              v90 = *(_DWORD *)(v91 + 24);
              if ( v99 )
                v49 = ++v125[0];
            }
            if ( ++v92 >= v90 )
            {
LABEL_151:
              v80 = v122;
              v82 = v123;
              v81 = v93;
              goto LABEL_148;
            }
          }
          v80 = v122;
          v82 = v123;
          v81 = v93;
          if ( v92 + 1 < v90 )
          {
LABEL_148:
            v79 = *(_DWORD *)(v82 + 24);
            goto LABEL_130;
          }
          v79 = *(_DWORD *)(v123 + 24);
          v81 = v93 + 1;
          if ( v93 + 1 < v79 )
          {
LABEL_130:
            if ( ++v81 >= v79 )
              break;
            continue;
          }
          break;
        }
LABEL_131:
        v72 = v80;
        v21 = v119;
        v73 = v117;
        v70 = v120;
LABEL_132:
        v71 = *(_DWORD *)(v72 + 24);
LABEL_110:
        if ( ++v70 < v71 )
          continue;
        break;
      }
LABEL_111:
      v48 = v115;
      v51 = v73;
LABEL_112:
      v50 = *(_DWORD *)(v51 + 24);
LABEL_67:
      if ( ++v48 < v50 )
        continue;
      break;
    }
LABEL_68:
    v11 = v106;
LABEL_69:
    v19 = v11[6];
    v22 = (double)(int)v49;
LABEL_17:
    ++v21;
    v20 = v20 + v22;
    if ( v21 < v19 )
      goto LABEL_18;
LABEL_24:
    v8 = v112;
    LODWORD(a2) = *((_DWORD *)v3 + 22);
LABEL_25:
    *(double *)a3.m128i_i64 = v20 / *((double *)v3 + 15);
    v110 = 2 * (_DWORD)a2;
    v105 = *(double *)a3.m128i_i64;
    if ( 3 * (int)a2 < (unsigned int)(4 * (*((_DWORD *)v3 + 23) + *((_DWORD *)v3 + 24))) )
    {
      v32 = 16LL * v110;
      v59 = (__m128i *)sub_186B270(v32);
      v30 = v59;
      v60 = &v59[v32 / 0x10];
      if ( v110 )
      {
        do
        {
          v59->m128i_i64[0] = 0;
          ++v59;
          v59[-1].m128i_i64[1] = 0;
        }
        while ( v59 != v60 );
      }
      v61 = *((_QWORD *)v3 + 10);
      v33 = v60;
      v62 = 16LL * *((unsigned int *)v3 + 22);
      v63 = (__m128i *)(v61 + v62);
      v31 = v110 - 1;
      if ( v61 != v61 + v62 )
      {
        v64 = v11;
        v65 = *((const __m128i **)v3 + 10);
        do
        {
          while ( v65->m128i_i64[0] <= 1uLL )
          {
            if ( v63 == ++v65 )
              goto LABEL_92;
          }
          v66 = *(_DWORD *)(v65->m128i_i64[0] + 12) & (unsigned int)v31;
          v67 = &v30[v66];
          if ( v110 == v66 )
          {
LABEL_96:
            if ( v30 == v67 )
            {
LABEL_105:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v68 = v30;
            while ( v68->m128i_i64[0] )
            {
              if ( v67 == ++v68 )
                goto LABEL_105;
            }
          }
          else
          {
            v68 = &v30[v66];
            while ( v68->m128i_i64[0] )
            {
              if ( v60 == ++v68 )
                goto LABEL_96;
            }
          }
          a3 = _mm_loadu_si128(v65++);
          *v68 = a3;
        }
        while ( v63 != v65 );
LABEL_92:
        v63 = *((__m128i **)v3 + 10);
        v32 = 16LL * v110;
        v11 = v64;
      }
      if ( v63 )
      {
        v113 = v60;
        sub_186B220(v63);
        v33 = v113;
        v31 = v110 - 1;
      }
      *((_QWORD *)v3 + 10) = v30;
      *((_DWORD *)v3 + 24) = 0;
      *((_DWORD *)v3 + 22) = v110;
    }
    else
    {
      v30 = *((__m128i **)v3 + 10);
      v31 = (_DWORD)a2 - 1;
      v32 = 16LL * (unsigned int)a2;
      v33 = &v30[v32 / 0x10];
    }
    v34 = v11[3];
    v35 = 16LL * (v34 & (unsigned int)v31);
    v36 = &v30[(unsigned __int64)v35 / 0x10];
    if ( v35 == v32 )
    {
      v38 = nullptr;
      while ( 1 )
      {
LABEL_57:
        if ( v36 == v30 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v45 = (_DWORD *)v30->m128i_i64[0];
        if ( v30->m128i_i64[0] > 1uLL )
        {
          if ( v45[3] == v34 && v11 == v45 )
          {
            v30->m128i_i64[0] = (__int64)v11;
            *(double *)&v30->m128i_i64[1] = v105;
            goto LABEL_80;
          }
        }
        else
        {
          if ( !v45 )
          {
            if ( v38 )
              --*((_DWORD *)v3 + 24);
            else
              v38 = v30;
            v38->m128i_i64[0] = (__int64)v11;
            *(double *)&v38->m128i_i64[1] = v105;
            ++*((_DWORD *)v3 + 23);
            goto LABEL_80;
          }
          v38 = v30;
        }
        ++v30;
      }
    }
    m128i_i64 = (double *)v30[(unsigned __int64)v35 / 0x10].m128i_i64;
    v38 = nullptr;
    while ( 2 )
    {
      v39 = *(_DWORD **)m128i_i64;
      if ( *(_QWORD *)m128i_i64 > 1u )
      {
        if ( v39[3] == v34 && v11 == v39 )
        {
          *(_QWORD *)m128i_i64 = v11;
          m128i_i64[1] = v105;
          goto LABEL_80;
        }
        goto LABEL_31;
      }
      if ( v39 )
      {
        v38 = (__m128i *)m128i_i64;
LABEL_31:
        m128i_i64 += 2;
        if ( m128i_i64 == (double *)v33 )
          goto LABEL_57;
        continue;
      }
      break;
    }
    if ( v38 )
      --*((_DWORD *)v3 + 24);
    else
      v38 = (__m128i *)m128i_i64;
    v38->m128i_i64[0] = (__int64)v11;
    *(double *)&v38->m128i_i64[1] = v105;
    ++*((_DWORD *)v3 + 23);
LABEL_80:
    *(_QWORD *)v125 = v11;
    a2 = (char *)v125;
    ++v11[2];
    a1 = v111;
    sub_3BD3D0(v111, v125);
LABEL_37:
    if ( (unsigned int)sub_180B130(a1) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v43 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v125, v11, *(_QWORD *)v3, 0, 0, 0);
        sub_160E8B0(v43, v125);
        std::__ostream_insert<char,std::char_traits<char>>();
        *(double *)a3.m128i_i64 = v105;
        v44 = std::ostream::_M_insert<double>();
        a2 = "\n";
        sub_3BCC00(v44, "\n");
        a1 = v126;
        sub_18572D0(v126);
        sub_186A500(v126, "\n");
      }
      else
      {
        v46 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v125, v11, *(_QWORD *)v3, 0, 0, 0);
        sub_160E8B0(v46, v125);
        std::__ostream_insert<char,std::char_traits<char>>();
        *(double *)a3.m128i_i64 = v105;
        v47 = std::ostream::_M_insert<double>();
        a2 = "\n";
        sub_3BCC00(v47, "\n");
        a1 = v126;
        sub_18572D0(v126);
      }
    }
    v40 = fmax(v105, v107);
    v7 = *((_QWORD *)v108 + 3);
    if ( v105 > v107 )
      v9 = v8;
    v107 = v40;
    ++v8;
  }
  while ( v7 );
LABEL_41:
  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v58 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v58, "\n");
      sub_186A500(v58, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v69 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v69, "\n");
    }
  }
  return v9;
}

