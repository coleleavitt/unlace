__int64 __fastcall sub_6B3CC0(const __m128i *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int32 v7; // r15d
  __int64 *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int v10; // r13d
  unsigned int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int32 v15; // r15d
  __int64 *v16; // r14
  __int64 v17; // r12
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 *v21; // rax
  __int64 v22; // rsi
  __int64 result; // rax
  __int64 v24; // rsi
  int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // rdi
  __m128i v28; // xmm1
  unsigned int v29; // r8d
  int v30; // r8d
  __int64 *v31; // rdx
  int v32; // esi
  int v33; // r8d
  __int64 *v34; // rdx
  int v35; // esi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r8
  _QWORD *v41; // rcx
  __int32 v42; // edi
  __int64 v43; // r8
  _QWORD *v44; // rdx
  __int64 *v45; // r9
  __int64 *i; // rax
  __int64 v47; // rdx
  __int32 v48; // r8d
  __int32 v49; // r8d
  __int64 v50; // r11
  int v51; // r15d
  _QWORD *v52; // r13
  unsigned int v53; // edi
  _QWORD *v54; // rcx
  __int64 v55; // r10
  __int32 v56; // edi
  unsigned int v57; // eax
  __int64 v58; // r8
  int v59; // r10d
  __int64 *v60; // r9
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // r8
  _QWORD *v66; // rcx
  __int32 v67; // edi
  __int64 v68; // r8
  _QWORD *v69; // rdx
  __int64 *v70; // r9
  __int64 *j; // rax
  __int64 v72; // rdx
  __int32 v73; // r8d
  __int32 v74; // r8d
  __int64 v75; // r11
  int v76; // r15d
  _QWORD *v77; // r13
  __int64 v78; // rdi
  _QWORD *v79; // rcx
  __int64 v80; // r10
  __int32 v81; // edi
  unsigned int v82; // eax
  __int64 v83; // r8
  int v84; // r10d
  __int64 *v85; // r9
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rsi
  _QWORD *v89; // rcx
  __int32 v90; // edi
  __int64 v91; // rsi
  _QWORD *v92; // rdx
  __int64 *v93; // r8
  __int64 *v94; // rax
  __int64 v95; // rdx
  __int32 v96; // edi
  __int32 v97; // edi
  __int64 v98; // r11
  unsigned int v99; // esi
  _QWORD *v100; // rcx
  __int64 v101; // r10
  __int32 v102; // edi
  int v103; // r9d
  __int64 *v104; // r8
  unsigned int v105; // r13d
  __int64 v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // r9
  _QWORD *v110; // rcx
  __int32 v111; // edi
  __int64 v112; // r9
  _QWORD *v113; // rdx
  __int64 *v114; // r8
  __int64 *v115; // rax
  __int64 v116; // rdx
  __int32 v117; // r9d
  __int32 v118; // r9d
  __int64 v119; // r11
  unsigned int v120; // edi
  _QWORD *v121; // rcx
  __int64 v122; // r10
  __int32 v123; // edi
  int v124; // r9d
  __int64 *v125; // r8
  unsigned int v126; // r13d
  __int64 v127; // rax
  _QWORD *v128; // r15
  _QWORD *v129; // r15
  int v130; // [rsp+8h] [rbp-40h]
  int v131; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v7 = a1[1145].m128i_u32[2];
  v8 = (__int64 *)a1[1144].m128i_i64[1];
  if ( !v7 )
    goto LABEL_31;
  v9 = v7 - 1;
  v10 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v11 = v9 & v10;
  v12 = &v8[2 * ((unsigned int)v9 & v10)];
  v13 = *v12;
  if ( a2 != *v12 )
  {
    v30 = 1;
    v31 = nullptr;
    while ( v13 != -4096 )
    {
      if ( v13 == -8192 && !v31 )
        v31 = v12;
      v11 = v9 & (v30 + v11);
      v12 = &v8[2 * v11];
      v13 = *v12;
      if ( a2 == *v12 )
        goto LABEL_3;
      ++v30;
    }
    if ( !v31 )
      v31 = v12;
    v32 = a1[1145].m128i_i32[0] + 1;
    v3 = 2 * v7;
    if ( 4 * v32 < 3 * v7 )
    {
      if ( v7 >> 3 < v7 - a1[1145].m128i_i32[1] - v32 )
      {
LABEL_19:
        a1[1145].m128i_i32[0] = v32;
        if ( *v31 != -4096 )
          --a1[1145].m128i_i32[1];
        *v31 = a2;
        v31[1] = a3;
        goto LABEL_3;
      }
      v107 = (((((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
              | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
              | ((v9 | (v9 >> 1)) >> 2)
              | v9
              | (v9 >> 1)) >> 16)
            | ((((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4) | ((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 8)
            | ((((v9 | (v9 >> 1)) >> 2) | v9 | (v9 >> 1)) >> 4)
            | ((v9 | (v9 >> 1)) >> 2)
            | v9
            | (v9 >> 1))
           + 1;
      if ( (unsigned int)v107 < 0x40 )
        LODWORD(v107) = 64;
      a1[1145].m128i_i32[2] = v107;
      v108 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v107, 8);
      v109 = a1[1145].m128i_u32[2];
      a1[1144].m128i_i64[1] = (__int64)v108;
      v110 = v108;
      v111 = v109;
      v112 = 16 * v109;
      v113 = &v108[(unsigned __int64)v112 / 8];
      if ( v8 )
      {
        a1[1145].m128i_i64[0] = 0;
        v114 = &v8[2 * v7];
        if ( v112 )
        {
          if ( (v112 & 0x10) == 0 || (*v108 = -4096, v110 = v108 + 2, v108 + 2 != v113) )
          {
            do
            {
              *v110 = -4096;
              v110 += 4;
              *(v110 - 2) = -4096;
            }
            while ( v110 != v113 );
          }
        }
        v115 = v8;
        do
        {
          v116 = *v115;
          if ( *v115 != -4096 && v116 != -8192 )
          {
            v117 = a1[1145].m128i_i32[2];
            if ( !v117 )
            {
              *(_QWORD *)&dword_0 = *v115;
              BUG();
            }
            v118 = v117 - 1;
            v119 = a1[1144].m128i_i64[1];
            v120 = v118 & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
            v121 = (_QWORD *)(v119 + 16LL * v120);
            v122 = *v121;
            if ( *v121 != v116 )
            {
              v131 = 1;
              v129 = nullptr;
              while ( v122 != -4096 )
              {
                if ( v122 == -8192 && !v129 )
                  v129 = v121;
                v120 = v118 & (v131 + v120);
                v121 = (_QWORD *)(v119 + 16LL * v120);
                v122 = *v121;
                if ( v116 == *v121 )
                  goto LABEL_136;
                ++v131;
              }
              if ( v129 )
                v121 = v129;
            }
LABEL_136:
            *v121 = v116;
            v121[1] = v115[1];
            ++a1[1145].m128i_i32[0];
          }
          v115 += 2;
        }
        while ( v114 != v115 );
        operator delete();
        v110 = (_QWORD *)a1[1144].m128i_i64[1];
        v111 = a1[1145].m128i_i32[2];
        v32 = a1[1145].m128i_i32[0] + 1;
      }
      else
      {
        a1[1145].m128i_i64[0] = 0;
        if ( v108 != v113 )
        {
          if ( (v112 & 0x10) == 0 || (*v108 = -4096, v108 += 2, v108 != v113) )
          {
            do
            {
              *v108 = -4096;
              v108 += 4;
              *(v108 - 2) = -4096;
            }
            while ( v108 != v113 );
          }
        }
        v32 = 1;
      }
      if ( v111 )
      {
        v123 = v111 - 1;
        v124 = 1;
        v125 = nullptr;
        v126 = v123 & v10;
        v31 = &v110[2 * v126];
        v127 = *v31;
        if ( a2 != *v31 )
        {
          while ( v127 != -4096 )
          {
            if ( v127 == -8192 && !v125 )
              v125 = v31;
            v126 = v123 & (v124 + v126);
            v31 = &v110[2 * v126];
            v127 = *v31;
            if ( a2 == *v31 )
              goto LABEL_19;
            ++v124;
          }
          if ( v125 )
            v31 = v125;
        }
        goto LABEL_19;
      }
LABEL_207:
      a1[1145].m128i_i32[0] = v32;
      BUG();
    }
LABEL_31:
    v36 = (unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1);
    v37 = (((v36 >> 2) | v36) >> 4) | (v36 >> 2) | v36;
    v38 = ((((v37 >> 8) | v37) >> 16) | (v37 >> 8) | v37) + 1;
    if ( (unsigned int)v38 < 0x40 )
      LODWORD(v38) = 64;
    a1[1145].m128i_i32[2] = v38;
    v39 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v38, 8);
    v40 = a1[1145].m128i_u32[2];
    a1[1144].m128i_i64[1] = (__int64)v39;
    v41 = v39;
    v42 = v40;
    v43 = 16 * v40;
    v44 = &v39[(unsigned __int64)v43 / 8];
    if ( v8 )
    {
      a1[1145].m128i_i64[0] = 0;
      v45 = &v8[2 * v7];
      if ( v43 )
      {
        if ( (v43 & 0x10) == 0 || (*v39 = -4096, v41 = v39 + 2, v39 + 2 != v44) )
        {
          do
          {
            *v41 = -4096;
            v41 += 4;
            *(v41 - 2) = -4096;
          }
          while ( v41 != v44 );
        }
      }
      for ( i = v8; v45 != i; i += 2 )
      {
        v47 = *i;
        if ( *i != -4096 && v47 != -8192 )
        {
          v48 = a1[1145].m128i_i32[2];
          if ( !v48 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v49 = v48 - 1;
          v50 = a1[1144].m128i_i64[1];
          v51 = 1;
          v52 = nullptr;
          v53 = v49 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
          v54 = (_QWORD *)(v50 + 16LL * v53);
          v55 = *v54;
          if ( v47 != *v54 )
          {
            while ( v55 != -4096 )
            {
              if ( v55 == -8192 && !v52 )
                v52 = v54;
              v53 = v49 & (v53 + v51);
              v54 = (_QWORD *)(v50 + 16LL * v53);
              v55 = *v54;
              if ( v47 == *v54 )
                goto LABEL_43;
              ++v51;
            }
            if ( v52 )
              v54 = v52;
          }
LABEL_43:
          *v54 = v47;
          v54[1] = i[1];
          ++a1[1145].m128i_i32[0];
        }
      }
      operator delete();
      v41 = (_QWORD *)a1[1144].m128i_i64[1];
      v42 = a1[1145].m128i_i32[2];
      v32 = a1[1145].m128i_i32[0] + 1;
    }
    else
    {
      a1[1145].m128i_i64[0] = 0;
      if ( v39 != v44 )
      {
        if ( (v43 & 0x10) == 0 || (*v39 = -4096, v39 += 2, v39 != v44) )
        {
          do
          {
            *v39 = -4096;
            v39 += 4;
            *(v39 - 2) = -4096;
          }
          while ( v39 != v44 );
        }
      }
      v32 = 1;
    }
    if ( v42 )
    {
      v56 = v42 - 1;
      v57 = v56 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v31 = &v41[2 * v57];
      v58 = *v31;
      if ( a2 != *v31 )
      {
        v59 = 1;
        v60 = nullptr;
        while ( v58 != -4096 )
        {
          if ( v58 == -8192 && !v60 )
            v60 = v31;
          v57 = v56 & (v59 + v57);
          v31 = &v41[2 * v57];
          v58 = *v31;
          if ( a2 == *v31 )
            goto LABEL_19;
          ++v59;
        }
        if ( v60 )
          v31 = v60;
      }
      goto LABEL_19;
    }
    goto LABEL_207;
  }
LABEL_3:
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v15 = a1[1147].m128i_u32[0];
  v16 = (__int64 *)a1[1146].m128i_i64[0];
  v17 = v14;
  v18 = 0;
  if ( !v15 )
    goto LABEL_53;
  v19 = v15 - 1;
  v20 = v19 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
  v21 = &v16[2 * v20];
  v22 = *v21;
  if ( v17 == *v21 )
    goto LABEL_5;
  v33 = 1;
  v34 = nullptr;
  while ( v22 != -4096 )
  {
    if ( v22 == -8192 && !v34 )
      v34 = v21;
    v20 = v19 & (v33 + v20);
    v21 = &v16[2 * v20];
    v22 = *v21;
    if ( v17 == *v21 )
      goto LABEL_5;
    ++v33;
  }
  if ( !v34 )
    v34 = v21;
  v35 = a1[1146].m128i_i32[2] + 1;
  v18 = 2 * v15;
  if ( 4 * v35 >= 3 * v15 )
  {
LABEL_53:
    v61 = (unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1);
    v62 = (((v61 >> 2) | v61) >> 4) | (v61 >> 2) | v61;
    v63 = ((((v62 >> 8) | v62) >> 16) | (v62 >> 8) | v62) + 1;
    if ( (unsigned int)v63 < 0x40 )
      LODWORD(v63) = 64;
    a1[1147].m128i_i32[0] = v63;
    v64 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v63, 8);
    v65 = a1[1147].m128i_u32[0];
    a1[1146].m128i_i64[0] = (__int64)v64;
    v66 = v64;
    v67 = v65;
    v68 = 16 * v65;
    v69 = &v64[(unsigned __int64)v68 / 8];
    if ( v16 )
    {
      a1[1146].m128i_i64[1] = 0;
      v70 = &v16[2 * v15];
      if ( v68 )
      {
        if ( (v68 & 0x10) == 0 || (*v64 = -4096, v66 = v64 + 2, v64 + 2 != v69) )
        {
          do
          {
            *v66 = -4096;
            v66 += 4;
            *(v66 - 2) = -4096;
          }
          while ( v66 != v69 );
        }
      }
      for ( j = v16; v70 != j; j += 2 )
      {
        v72 = *j;
        if ( *j != -4096 && v72 != -8192 )
        {
          v73 = a1[1147].m128i_i32[0];
          if ( !v73 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v74 = v73 - 1;
          v75 = a1[1146].m128i_i64[0];
          v76 = 1;
          v77 = nullptr;
          LODWORD(v78) = v74 & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
          v79 = (_QWORD *)(v75 + 16LL * (unsigned int)v78);
          v80 = *v79;
          if ( v72 != *v79 )
          {
            while ( v80 != -4096 )
            {
              if ( v80 == -8192 && !v77 )
                v77 = v79;
              v78 = v74 & (unsigned int)(v78 + v76);
              v79 = (_QWORD *)(v75 + 16 * v78);
              v80 = *v79;
              if ( v72 == *v79 )
                goto LABEL_65;
              ++v76;
            }
            if ( v77 )
              v79 = v77;
          }
LABEL_65:
          *v79 = v72;
          v79[1] = j[1];
          ++a1[1146].m128i_i32[2];
        }
      }
      operator delete();
      v66 = (_QWORD *)a1[1146].m128i_i64[0];
      v67 = a1[1147].m128i_i32[0];
      v35 = a1[1146].m128i_i32[2] + 1;
    }
    else
    {
      a1[1146].m128i_i64[1] = 0;
      if ( v64 != v69 )
      {
        if ( (v68 & 0x10) == 0 || (*v64 = -4096, v64 += 2, v64 != v69) )
        {
          do
          {
            *v64 = -4096;
            v64 += 4;
            *(v64 - 2) = -4096;
          }
          while ( v64 != v69 );
        }
      }
      v35 = 1;
    }
    if ( v67 )
    {
      v81 = v67 - 1;
      v82 = v81 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v34 = &v66[2 * v82];
      v83 = *v34;
      if ( v17 != *v34 )
      {
        v84 = 1;
        v85 = nullptr;
        while ( v83 != -4096 )
        {
          if ( v83 == -8192 && !v85 )
            v85 = v34;
          v82 = v81 & (v84 + v82);
          v34 = &v66[2 * v82];
          v83 = *v34;
          if ( v17 == *v34 )
            goto LABEL_28;
          ++v84;
        }
        if ( v85 )
          v34 = v85;
      }
      goto LABEL_28;
    }
    goto LABEL_205;
  }
  if ( v15 >> 3 >= v15 - a1[1146].m128i_i32[3] - v35 )
  {
    v86 = (((((((((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 4) | ((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 8)
           | ((((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 4)
           | ((v19 | (v19 >> 1)) >> 2)
           | v19
           | (v19 >> 1)) >> 16)
         | ((((((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 4) | ((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 8)
         | ((((v19 | (v19 >> 1)) >> 2) | v19 | (v19 >> 1)) >> 4)
         | ((v19 | (v19 >> 1)) >> 2)
         | v19
         | (v19 >> 1))
        + 1;
    if ( (unsigned int)v86 < 0x40 )
      LODWORD(v86) = 64;
    a1[1147].m128i_i32[0] = v86;
    v87 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v86, 8);
    v88 = a1[1147].m128i_u32[0];
    a1[1146].m128i_i64[0] = (__int64)v87;
    v89 = v87;
    v90 = v88;
    v91 = 16 * v88;
    v92 = &v87[(unsigned __int64)v91 / 8];
    if ( v16 )
    {
      a1[1146].m128i_i64[1] = 0;
      v93 = &v16[2 * v15];
      if ( v91 )
      {
        if ( (v91 & 0x10) == 0 || (*v87 = -4096, v89 = v87 + 2, v87 + 2 != v92) )
        {
          do
          {
            *v89 = -4096;
            v89 += 4;
            *(v89 - 2) = -4096;
          }
          while ( v89 != v92 );
        }
      }
      v94 = v16;
      do
      {
        v95 = *v94;
        if ( *v94 != -4096 && v95 != -8192 )
        {
          v96 = a1[1147].m128i_i32[0];
          if ( !v96 )
          {
            *(_QWORD *)&dword_0 = *v94;
            BUG();
          }
          v97 = v96 - 1;
          v98 = a1[1146].m128i_i64[0];
          v99 = v97 & (((unsigned int)v95 >> 9) ^ ((unsigned int)v95 >> 4));
          v100 = (_QWORD *)(v98 + 16LL * v99);
          v101 = *v100;
          if ( v95 != *v100 )
          {
            v130 = 1;
            v128 = nullptr;
            while ( v101 != -4096 )
            {
              if ( !v128 && v101 == -8192 )
                v128 = v100;
              v99 = v97 & (v130 + v99);
              v100 = (_QWORD *)(v98 + 16LL * v99);
              v101 = *v100;
              if ( v95 == *v100 )
                goto LABEL_115;
              ++v130;
            }
            if ( v128 )
              v100 = v128;
          }
LABEL_115:
          *v100 = v95;
          v100[1] = v94[1];
          ++a1[1146].m128i_i32[2];
        }
        v94 += 2;
      }
      while ( v93 != v94 );
      operator delete();
      v89 = (_QWORD *)a1[1146].m128i_i64[0];
      v90 = a1[1147].m128i_i32[0];
      v35 = a1[1146].m128i_i32[2] + 1;
    }
    else
    {
      a1[1146].m128i_i64[1] = 0;
      if ( v87 != v92 )
      {
        if ( (v91 & 0x10) == 0 || (*v87 = -4096, v87 += 2, v87 != v92) )
        {
          do
          {
            *v87 = -4096;
            v87 += 4;
            *(v87 - 2) = -4096;
          }
          while ( v87 != v92 );
        }
      }
      v35 = 1;
    }
    if ( v90 )
    {
      v102 = v90 - 1;
      v103 = 1;
      v104 = nullptr;
      v105 = v102 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v34 = &v89[2 * v105];
      v106 = *v34;
      if ( v17 != *v34 )
      {
        while ( v106 != -4096 )
        {
          if ( !v104 && v106 == -8192 )
            v104 = v34;
          v105 = v102 & (v103 + v105);
          v34 = &v89[2 * v105];
          v106 = *v34;
          if ( v17 == *v34 )
            goto LABEL_28;
          ++v103;
        }
        if ( v104 )
          v34 = v104;
      }
      goto LABEL_28;
    }
LABEL_205:
    a1[1146].m128i_i32[2] = v35;
    BUG();
  }
LABEL_28:
  a1[1146].m128i_i32[2] = v35;
  if ( *v34 != -4096 )
    --a1[1146].m128i_i32[3];
  *v34 = v17;
  v34[1] = a2;
LABEL_5:
  result = a1[1148].m128i_u32[2];
  v24 = a1[1147].m128i_i64[1];
  if ( (_DWORD)result )
  {
    v25 = result - 1;
    v26 = (result - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
    result = v24 + 16LL * v26;
    v27 = *(_QWORD *)result;
    if ( v17 == *(_QWORD *)result )
    {
LABEL_7:
      v28 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
      *(_QWORD *)result = -8192;
      a1[1148].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(a1 + 1148), v28).m128i_u64[0];
    }
    else
    {
      result = 1;
      while ( v27 != -4096 )
      {
        v29 = result + 1;
        v26 = v25 & (result + v26);
        result = v24 + 16LL * v26;
        v27 = *(_QWORD *)result;
        if ( v17 == *(_QWORD *)result )
          goto LABEL_7;
        result = v29;
      }
    }
  }
  return result;
}

