__int64 __fastcall sub_CF4660(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rdi
  char v12; // dl
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int16 v19; // cx
  __int16 v20; // si
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rbp
  int v24; // edi
  __int64 v25; // r15
  __int64 v26; // rax
  const __m128i *v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rsi
  __int64 v30; // rdx
  const __m128i *v31; // r8
  __int64 *i; // rax
  __int64 v33; // rdx
  __int64 *v34; // rbx
  _OWORD *v35; // rax
  __int64 v36; // rdx
  __m128 *v37; // rbx
  unsigned int v38; // r11d
  __int64 v39; // r10
  __int64 v40; // rax
  int v41; // esi
  __m128 v42; // xmm0
  __int64 v43; // rdx
  __m128 *v44; // rdi
  __m128 *v45; // rdx
  __m128 *v46; // r8
  unsigned __int64 v47; // rcx
  __int64 *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned int v51; // ebx
  __int64 v52; // rax
  int v53; // edx
  bool v54; // zf
  __int64 v55; // rcx
  char v56; // dl
  unsigned int v57; // edx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rbp
  __int64 v62; // r12
  __int64 v63; // r15
  __int64 *v64; // r9
  __int64 v65; // r13
  int v66; // edx
  __int64 *v67; // rax
  __int64 v68; // rax
  unsigned int v69; // edx
  unsigned int v70; // r12d
  __int64 v71; // rbx
  __int64 result; // rax
  __int64 v73; // rax
  int v74; // edx
  __int64 *v75; // rax
  __int64 v76; // r12
  _QWORD *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 m; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // r15
  __int64 *v83; // rbp
  int v84; // eax
  unsigned int v85; // esi
  int v86; // edi
  size_t v87; // r15
  __int64 *v88; // rbx
  __int64 v89; // rsi
  __int64 *v90; // rdx
  __int64 *j; // rcx
  __int64 v92; // r8
  __int64 *v93; // rcx
  int v94; // r9d
  int v95; // r8d
  unsigned int v96; // ecx
  __int64 *v97; // rcx
  __int64 *v98; // rdi
  __int64 v99; // rsi
  __int64 v100; // rcx
  __int64 *k; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 *v105; // rax
  int v106; // ecx
  unsigned int v107; // r9d
  char *v108; // rax
  char *v109; // r8
  __int64 v110; // rdx
  __int64 *v111; // rsi
  __int64 *v112; // rdx
  __int64 v113; // rsi
  __int64 *v114; // rax
  __m128 *v115; // rax
  __m128i *v116; // r8
  const __m128i *v117; // rcx
  __m128i *v118; // r9
  __int64 v119; // rdx
  __m128 *v120; // rsi
  __m128i *v121; // rdx
  __m128i v122; // xmm0
  int v123; // edi
  __int64 *v124; // rax
  __int64 v125; // rcx
  __int64 *v127; // [rsp+8h] [rbp-B0h] BYREF
  __int64 *v128; // [rsp+10h] [rbp-A8h]
  __int64 *v129; // [rsp+18h] [rbp-A0h]
  __int64 v130; // [rsp+20h] [rbp-98h]
  char *v131; // [rsp+28h] [rbp-90h]
  __int64 v132; // [rsp+30h] [rbp-88h]
  __int64 v133; // [rsp+38h] [rbp-80h]
  __int64 v134; // [rsp+40h] [rbp-78h]
  __int64 v135; // [rsp+48h] [rbp-70h]
  __m128i *v136; // [rsp+50h] [rbp-68h]
  __m128i *v137; // [rsp+58h] [rbp-60h]
  __int64 v138; // [rsp+60h] [rbp-58h] BYREF
  __int64 v139; // [rsp+68h] [rbp-50h]
  __int64 v140; // [rsp+70h] [rbp-48h] BYREF
  __int64 v141; // [rsp+78h] [rbp-40h]

  v4 = (__int64 *)a1[2];
  v130 = a3;
  v5 = *a2;
  v128 = &v140;
  v129 = v4;
  sub_EE4940(&v140, "injectivity", v5);
  sub_EE5110("injectivity");
  sub_EE4F60("injectivity");
  v6 = *a2;
  v7 = (*a2)[9];
  v8 = *a2 + 9;
  if ( !v7 )
    goto LABEL_47;
  v9 = *v6;
  v10 = 0;
  while ( 2 )
  {
    v11 = v7;
    v12 = *(_BYTE *)(v7 + 3) >> 6;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_7;
    }
    else
    {
      do
      {
        v11 = *(_QWORD *)(v11 + 16);
        v12 = *(_BYTE *)(v11 + 3) >> 6;
      }
      while ( !v12 );
      if ( v12 != 1 )
      {
LABEL_7:
        if ( v12 == 2 )
          v13 = *(_DWORD *)(v11 + 4) - 1;
        else
          v13 = *(_DWORD *)(v11 + 4);
        if ( v10 >= v13 )
          break;
        goto LABEL_10;
      }
    }
    if ( v10 >= *(_DWORD *)(v11 + 4) + 1 )
      break;
LABEL_10:
    if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
    {
      v14 = *(_QWORD *)(v9 + 864);
      goto LABEL_12;
    }
    v66 = 17;
    while ( 1 )
    {
      if ( *(char *)(v7 + 3) < 0 )
      {
        if ( *(_BYTE *)(v7 + 3) >> 6 != 2 )
        {
          v67 = (__int64 *)(*(_QWORD *)(v7 + 16) + 8LL * v10);
          goto LABEL_73;
        }
        goto LABEL_75;
      }
      if ( v10 == *(_DWORD *)(v7 + 4) )
        break;
LABEL_75:
      v7 = *(_QWORD *)(v7 + 16);
      if ( !--v66 )
      {
        sub_233F80((__int64 *)(v9 + 616), v8);
        v67 = (__int64 *)(*(_QWORD *)(v6[9] + 16) + 8LL * v10);
        goto LABEL_73;
      }
    }
    v67 = (__int64 *)(v7 + 8);
LABEL_73:
    v14 = *v67;
LABEL_12:
    if ( *(_WORD *)(v14 + 4) != 2 )
      goto LABEL_3;
    if ( *(_DWORD *)(v14 + 16) )
      goto LABEL_3;
    if ( *(_DWORD *)(v14 + 20) != 1 )
      goto LABEL_3;
    v15 = *(_QWORD *)(v14 + 24);
    if ( *(_WORD *)(v15 + 4) )
      goto LABEL_3;
    v16 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL);
    if ( !v16 || *v16 || v16[1] != 2 || *(_DWORD *)(v15 + 24) != 2 )
      goto LABEL_3;
    v17 = *(_QWORD *)(v15 + 32);
    v18 = *(_QWORD *)(v15 + 40);
    v19 = *(_WORD *)(v17 + 4);
    v20 = *(_WORD *)(v18 + 4);
    if ( v19 )
    {
      if ( v20 || v19 != 1 )
        goto LABEL_3;
      v125 = v17;
      v17 = v18;
      v18 = v125;
    }
    else if ( v20 != 1 )
    {
      goto LABEL_3;
    }
    if ( *(_DWORD *)(v18 + 16) )
      goto LABEL_3;
    if ( *(_DWORD *)(v17 + 24) != 1 )
      goto LABEL_3;
    v21 = *(_QWORD *)(v17 + 16);
    v22 = *(_QWORD *)(v17 + 32);
    if ( *(_WORD *)(v22 + 4) )
      goto LABEL_3;
    if ( *(_DWORD *)(v22 + 24) != 1 )
      goto LABEL_3;
    v23 = *(_QWORD *)(v22 + 16);
    if ( v18 != *(_QWORD *)(v22 + 32) )
      goto LABEL_3;
    v24 = *(_DWORD *)(v23 + 12);
    v25 = v129[1];
    v26 = *(unsigned int *)(v25 + 8);
    v27 = *(const __m128i **)v25;
    v28 = v26 - 1;
    v26 *= 16;
    v29 = (__int64 *)(*(_QWORD *)v25 + v26);
    v30 = 16LL * (v24 & v28);
    v31 = (const __m128i *)(*(_QWORD *)v25 + v30);
    if ( v30 != v26 )
    {
      for ( i = (__int64 *)(*(_QWORD *)v25 + v30); v29 != i; i += 2 )
      {
        v33 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v33 + 12) == v24 && v23 == v33 )
            goto LABEL_121;
        }
        else if ( !v33 )
        {
          goto LABEL_34;
        }
      }
    }
    for ( ; v31 != v27; ++v27 )
    {
      v103 = v27->m128i_i64[0];
      if ( v27->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v103 + 12) == v24 && v23 == v103 )
        {
          i = (__int64 *)v27;
LABEL_121:
          v127 = (__int64 *)i[1];
          goto LABEL_122;
        }
      }
      else if ( !v103 )
      {
        break;
      }
    }
LABEL_34:
    ++*(_DWORD *)(v23 + 8);
    v127 = (__int64 *)sub_186B270(0x18u);
    v34 = v127;
    v35 = (_OWORD *)sub_186B270(0x40u);
    *v34 = (__int64)v35;
    *v35 = 0;
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = 0;
    *((_DWORD *)v34 + 4) = 0;
    v34[1] = 8;
    v36 = *(unsigned int *)(v25 + 8);
    LODWORD(v35) = 4 * (*(_DWORD *)(v25 + 12) + *(_DWORD *)(v25 + 16));
    LODWORD(v131) = 2 * v36;
    if ( 3 * (int)v36 < (unsigned int)v35 )
    {
      v132 = 16LL * (unsigned int)v131;
      v115 = (__m128 *)sub_186B270(v132);
      v39 = v132;
      v37 = v115;
      v116 = (__m128i *)((char *)v115 + v132);
      if ( (_DWORD)v131 )
      {
        if ( (v132 & 0x10) == 0 || (*v115 = 0, ++v115, v116 != (__m128i *)v115) )
        {
          do
          {
            *v115 = 0;
            v115 += 2;
            v115[-1] = 0;
          }
          while ( v116 != (__m128i *)v115 );
        }
      }
      v117 = *(const __m128i **)v25;
      v118 = (__m128i *)(*(_QWORD *)v25 + 16LL * *(unsigned int *)(v25 + 8));
      v38 = (_DWORD)v131 - 1;
      v40 = (__int64)v116;
      if ( *(__m128i **)v25 != v118 )
      {
        do
        {
          while ( v117->m128i_i64[0] <= 1uLL )
          {
            if ( v118 == ++v117 )
              goto LABEL_196;
          }
          v119 = 16LL * (*(_DWORD *)(v117->m128i_i64[0] + 12) & v38);
          v120 = &v37[(unsigned __int64)v119 / 0x10];
          if ( v39 == v119 )
          {
LABEL_200:
            if ( v37 == v120 )
            {
LABEL_211:
              v137 = v116;
              v136 = v116;
              v135 = v39;
              LODWORD(v134) = v38;
              v133 = (__int64)v118;
              v132 = (__int64)v117;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v121 = (__m128i *)v37;
            while ( v121->m128i_i64[0] )
            {
              if ( v120 == (__m128 *)++v121 )
                goto LABEL_211;
            }
          }
          else
          {
            v121 = (__m128i *)&v37[(unsigned __int64)v119 / 0x10];
            while ( v121->m128i_i64[0] )
            {
              if ( v116 == ++v121 )
                goto LABEL_200;
            }
          }
          v122 = _mm_loadu_si128(v117++);
          *v121 = v122;
        }
        while ( v118 != v117 );
LABEL_196:
        v118 = *(__m128i **)v25;
      }
      if ( v118 )
      {
        v134 = (__int64)v116;
        v133 = v39;
        LODWORD(v132) = v38;
        sub_186B220(v118);
        v40 = v134;
        v39 = v133;
        v38 = v132;
      }
      v123 = (int)v131;
      *(_QWORD *)v25 = v37;
      *(_DWORD *)(v25 + 16) = 0;
      *(_DWORD *)(v25 + 8) = v123;
    }
    else
    {
      v37 = *(__m128 **)v25;
      v38 = v36 - 1;
      v39 = 16 * v36;
      v40 = *(_QWORD *)v25 + 16 * v36;
    }
    v41 = *(_DWORD *)(v23 + 12);
    v42 = _mm_loadh_ps((const double *)&v127);
    v43 = 16LL * (v41 & v38);
    v44 = &v37[(unsigned __int64)v43 / 0x10];
    if ( v43 != v39 )
    {
      v45 = &v37[(unsigned __int64)v43 / 0x10];
      v46 = nullptr;
      while ( 1 )
      {
        v47 = v45->m128_u64[0];
        if ( v45->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v47 + 12) == v41 && v23 == v47 )
          {
            *v45 = v42;
            goto LABEL_122;
          }
        }
        else
        {
          if ( !v47 )
          {
            if ( v46 )
              goto LABEL_209;
            v46 = v45;
            goto LABEL_210;
          }
          v46 = v45;
        }
        if ( ++v45 == (__m128 *)v40 )
          goto LABEL_116;
      }
    }
    v46 = nullptr;
LABEL_116:
    while ( 2 )
    {
      if ( v44 == v37 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v81 = v37->m128_u64[0];
      if ( v37->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v81 + 12) == v41 && v23 == v81 )
        {
          *v37 = v42;
          goto LABEL_122;
        }
        goto LABEL_115;
      }
      if ( v81 )
      {
        v46 = v37;
LABEL_115:
        ++v37;
        continue;
      }
      break;
    }
    if ( v46 )
LABEL_209:
      --*(_DWORD *)(v25 + 16);
    else
      v46 = v37;
LABEL_210:
    *v46 = v42;
    ++*(_DWORD *)(v25 + 12);
LABEL_122:
    v82 = *((unsigned int *)v127 + 2);
    v83 = (__int64 *)*v127;
    v84 = *(_DWORD *)(v21 + 12);
    v85 = v82 - 1;
    v86 = *((_DWORD *)v127 + 2);
    v87 = 8 * v82;
    v88 = (__int64 *)(*v127 + v87);
    v89 = 8LL * (v84 & v85);
    v90 = (__int64 *)(*v127 + v89);
    if ( v89 != v87 )
    {
      for ( j = (__int64 *)(*v127 + v89); v88 != j; ++j )
      {
        v92 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v92 + 12) == v84 && v21 == v92 )
            goto LABEL_3;
        }
        else if ( !v92 )
        {
          goto LABEL_129;
        }
      }
    }
    if ( v83 != v90 )
    {
      for ( k = (__int64 *)*v127; v90 != k; ++k )
      {
        v102 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v102 + 12) == v84 && v21 == v102 )
            goto LABEL_3;
        }
        else if ( !v102 )
        {
          break;
        }
      }
    }
LABEL_129:
    v93 = v127;
    ++*(_DWORD *)(v21 + 8);
    v94 = *((_DWORD *)v93 + 4);
    v95 = *((_DWORD *)v93 + 3);
    v96 = 2 * v86;
    if ( 3 * v86 < (unsigned int)(4 * (v94 + v95)) )
    {
      v104 = v96;
      LODWORD(v131) = 2 * v86;
      v87 = 8LL * v96;
      v105 = (__int64 *)sub_186B270(v87);
      v106 = (int)v131;
      v83 = v105;
      if ( (_DWORD)v131 )
      {
        memset(v105, 0, 8 * v104);
        v106 = (int)v131;
      }
      v107 = v106 - 1;
      v88 = &v83[v87 / 8];
      v108 = (char *)*v127;
      v109 = (char *)(*v127 + 8LL * *((unsigned int *)v127 + 2));
      if ( (char *)*v127 != v109 )
      {
        do
        {
          while ( *(_QWORD *)v108 <= 1u )
          {
            v108 += 8;
            if ( v109 == v108 )
              goto LABEL_174;
          }
          v110 = 8LL * (*(_DWORD *)(*(_QWORD *)v108 + 12LL) & v107);
          v111 = &v83[(unsigned __int64)v110 / 8];
          if ( v87 == v110 )
          {
LABEL_178:
            if ( v83 == v111 )
            {
LABEL_212:
              LODWORD(v134) = v106;
              v133 = (__int64)v109;
              LODWORD(v132) = v106 - 1;
              v131 = v108;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v112 = v83;
            while ( *v112 )
            {
              if ( v111 == ++v112 )
                goto LABEL_212;
            }
          }
          else
          {
            v112 = &v83[(unsigned __int64)v110 / 8];
            while ( *v112 )
            {
              if ( v88 == ++v112 )
                goto LABEL_178;
            }
          }
          v113 = *(_QWORD *)v108;
          v108 += 8;
          *v112 = v113;
        }
        while ( v109 != v108 );
LABEL_174:
        v109 = (char *)*v127;
      }
      if ( v109 )
      {
        LODWORD(v132) = v106;
        LODWORD(v131) = v106 - 1;
        sub_186B220(v109);
        v106 = v132;
        v107 = (unsigned int)v131;
      }
      v114 = v127;
      *v127 = (__int64)v83;
      *((_DWORD *)v114 + 2) = v106;
      *((_DWORD *)v114 + 4) = 0;
      v84 = *(_DWORD *)(v21 + 12);
      v89 = 8LL * (v84 & v107);
      v94 = 0;
      v90 = &v83[(unsigned __int64)v89 / 8];
    }
    if ( v89 != v87 )
    {
      v97 = v90;
      v98 = nullptr;
      while ( 1 )
      {
        v99 = *v97;
        if ( (unsigned __int64)*v97 > 1 )
        {
          if ( *(_DWORD *)(v99 + 12) == v84 && v21 == v99 )
          {
            *v97 = v21;
            goto LABEL_3;
          }
        }
        else
        {
          if ( !v99 )
          {
            if ( v98 )
              goto LABEL_206;
            v98 = v97;
            goto LABEL_207;
          }
          v98 = v97;
        }
        if ( ++v97 == v88 )
          goto LABEL_141;
      }
    }
    v98 = nullptr;
LABEL_141:
    while ( 2 )
    {
      if ( v83 == v90 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v100 = *v83;
      if ( (unsigned __int64)*v83 > 1 )
      {
        if ( *(_DWORD *)(v100 + 12) == v84 && v21 == v100 )
        {
          *v83 = v21;
          goto LABEL_3;
        }
        goto LABEL_140;
      }
      if ( v100 )
      {
        v98 = v83;
LABEL_140:
        ++v83;
        continue;
      }
      break;
    }
    if ( v98 )
LABEL_206:
      *((_DWORD *)v127 + 4) = v94 - 1;
    else
      v98 = v83;
LABEL_207:
    v124 = v127;
    *v98 = v21;
    ++*((_DWORD *)v124 + 3);
LABEL_3:
    ++v10;
    v6 = *a2;
    v7 = (*a2)[9];
    v8 = *a2 + 9;
    if ( v7 )
    {
      v9 = *v6;
      continue;
    }
    break;
  }
LABEL_47:
  sub_EE4A00(v128);
  v48 = *a2;
  v49 = (*a2)[9];
  if ( !v49 )
    goto LABEL_81;
  v50 = *v48;
  v51 = 0;
  v127 = &v138;
  while ( 2 )
  {
    v55 = v49;
    v56 = *(_BYTE *)(v49 + 3) >> 6;
    if ( !v56 )
    {
      do
      {
        v55 = *(_QWORD *)(v55 + 16);
        v56 = *(_BYTE *)(v55 + 3) >> 6;
      }
      while ( !v56 );
      if ( v56 != 1 )
        goto LABEL_62;
      goto LABEL_80;
    }
    if ( v56 == 1 )
    {
LABEL_80:
      if ( v51 >= *(_DWORD *)(v55 + 4) + 1 )
        break;
      goto LABEL_65;
    }
LABEL_62:
    if ( v56 == 2 )
      v57 = *(_DWORD *)(v55 + 4) - 1;
    else
      v57 = *(_DWORD *)(v55 + 4);
    if ( v51 >= v57 )
      break;
LABEL_65:
    if ( (*((_BYTE *)v48 + 123) & 0x20) != 0 )
    {
      v58 = *(_QWORD *)(v50 + 864);
      goto LABEL_67;
    }
    v74 = 17;
    while ( 2 )
    {
      if ( *(char *)(v49 + 3) < 0 )
      {
        if ( *(_BYTE *)(v49 + 3) >> 6 != 2 )
        {
          v75 = (__int64 *)(*(_QWORD *)(v49 + 16) + 8LL * v51);
          goto LABEL_91;
        }
LABEL_93:
        v49 = *(_QWORD *)(v49 + 16);
        if ( !--v74 )
        {
          sub_233F80((__int64 *)(v50 + 616), (_DWORD *)v48 + 18);
          v75 = (__int64 *)(*(_QWORD *)(v48[9] + 16) + 8LL * v51);
          goto LABEL_91;
        }
        continue;
      }
      break;
    }
    if ( v51 != *(_DWORD *)(v49 + 4) )
      goto LABEL_93;
    v75 = (__int64 *)(v49 + 8);
LABEL_91:
    v58 = *v75;
LABEL_67:
    v59 = a1[6];
    v60 = a1[3];
    v138 = 0;
    v140 = 0;
    v139 = v59;
    v141 = v59;
    sub_CF44C0(v60, v58, v127, v128);
    v61 = v138;
    v62 = v140;
    v63 = v141;
    v64 = *a2;
    v65 = v139;
    if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
    {
      v52 = v64[13];
      v53 = 17;
      do
      {
        if ( *(char *)(v52 + 3) >= 0 )
        {
          if ( v51 == *(_DWORD *)(v52 + 4) )
            goto LABEL_52;
        }
        else if ( *(_BYTE *)(v52 + 3) >> 6 != 2 )
        {
          goto LABEL_52;
        }
        v52 = *(_QWORD *)(v52 + 16);
        --v53;
      }
      while ( v53 );
      v73 = *v64;
      v129 = *a2;
      sub_236900((_QWORD *)(v73 + 672), v64 + 13);
      LODWORD(v64) = (_DWORD)v129;
    }
LABEL_52:
    sub_EDBFA0((int)v64);
    if ( v62 )
    {
      v54 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v63, v62);
    }
    if ( v61 )
    {
      v54 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v65, v61);
    }
    ++v51;
    v48 = *a2;
    v49 = (*a2)[9];
    if ( v49 )
    {
      v50 = *v48;
      continue;
    }
    break;
  }
LABEL_81:
  v68 = v130;
  ++*((_DWORD *)v48 + 8);
  v69 = *(_DWORD *)(v68 + 8);
  v70 = *(_DWORD *)(v68 + 12);
  if ( v69 >= v70 )
  {
    v76 = 2 * v70;
    v71 = sub_186B270(8 * v76);
    v69 = *(_DWORD *)(v130 + 8);
    v77 = *(_QWORD **)v130;
    if ( v69 )
    {
      if ( v69 - 1 <= 2 || (_QWORD *)v71 == v77 + 1 )
      {
        for ( m = 0; m != v69; ++m )
          *(_QWORD *)(v71 + m * 8) = v77[m];
      }
      else
      {
        v78 = 0;
        do
        {
          *(__m128i *)(v71 + v78 * 8) = _mm_loadu_si128((const __m128i *)&v77[v78]);
          v78 += 2;
        }
        while ( v78 != 2LL * (v69 >> 1) );
        if ( (v69 & 1) != 0 )
          *(_QWORD *)(v71 + 8LL * (v69 & 0xFFFFFFFE)) = v77[v69 & 0xFFFFFFFE];
      }
    }
    if ( v77 != (_QWORD *)(v130 + 16) && v77 )
    {
      sub_186B220(v77);
      v69 = *(_DWORD *)(v130 + 8);
    }
    v79 = v130;
    *(_QWORD *)v130 = v71;
    *(_DWORD *)(v79 + 12) = v76;
  }
  else
  {
    v71 = *(_QWORD *)v68;
  }
  *(_QWORD *)(v71 + 8LL * v69) = v48;
  result = v130;
  *(_DWORD *)(v130 + 8) = v69 + 1;
  return result;
}

