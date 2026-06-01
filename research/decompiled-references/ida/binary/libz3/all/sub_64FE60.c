__int64 *__fastcall sub_64FE60(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  __m128i *v8; // rbp
  __int64 v9; // rax
  __m128i *v10; // r9
  __m128i *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __m128i *v15; // rbx
  __m128i *v16; // r12
  __int64 v17; // rdi
  __int64 *result; // rax
  __int64 v19; // rcx
  __int16 v20; // dx
  __m128i *v21; // rdx
  int v22; // ecx
  __int64 *v23; // rax
  __m128i *v24; // rax
  __m128i *v25; // rdx
  unsigned __int64 v26; // r13
  __int64 *v27; // r12
  __int64 v28; // rsi
  bool v29; // zf
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r8
  int v33; // eax
  const __m128i *v34; // r12
  __int64 v35; // rcx
  __m128i *v36; // rdx
  __m128i *v37; // rsi
  __int64 v38; // rdi
  unsigned int v39; // r13d
  __m128i *v40; // rcx
  __m128i *v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned int v45; // r12d
  size_t v46; // r13
  unsigned __int64 *v47; // rcx
  int v48; // esi
  __int64 v49; // r12
  __m128i *v50; // rdi
  unsigned __int64 *v51; // rax
  _QWORD *v52; // r13
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 *v55; // rax
  unsigned __int64 *v56; // r8
  unsigned __int64 *v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 *v60; // rsi
  unsigned __int64 *v61; // rax
  unsigned __int64 v62; // rdx
  __m128i *v63; // rsi
  __m128i *v64; // r13
  __m128i *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rax
  char *v68; // rdx
  unsigned int v69; // eax
  const __m128i *v70; // r13
  const __m128i *i; // rax
  __int64 v72; // rdx
  __m128i *v73; // rcx
  __m128i *v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // rax
  unsigned int **v77; // rdi
  int v78; // r12d
  int v79; // ecx
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r12
  int v83; // eax
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rax
  int v87; // r9d
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // rdi
  __int64 *v91; // r13
  __int64 v92; // rsi
  __int64 v93; // [rsp+0h] [rbp-4F8h]
  __int64 v94; // [rsp+0h] [rbp-4F8h]
  _DWORD *v95; // [rsp+8h] [rbp-4F0h]
  void *v96; // [rsp+8h] [rbp-4F0h]
  void *v97; // [rsp+8h] [rbp-4F0h]
  int v98[2]; // [rsp+10h] [rbp-4E8h]
  int v99; // [rsp+18h] [rbp-4E0h]
  unsigned int v100; // [rsp+18h] [rbp-4E0h]
  unsigned int v101; // [rsp+1Ch] [rbp-4DCh]
  int v102[2]; // [rsp+20h] [rbp-4D8h]
  __int64 v103; // [rsp+28h] [rbp-4D0h]
  __int64 v104; // [rsp+30h] [rbp-4C8h]
  __int64 v105; // [rsp+30h] [rbp-4C8h]
  char *v106; // [rsp+38h] [rbp-4C0h]
  unsigned int v107; // [rsp+40h] [rbp-4B8h]
  _BYTE v108[12]; // [rsp+44h] [rbp-4B4h]
  __int64 v109; // [rsp+58h] [rbp-4A0h]
  int v110; // [rsp+60h] [rbp-498h]
  __int64 v111; // [rsp+60h] [rbp-498h]
  unsigned __int64 *v112; // [rsp+60h] [rbp-498h]
  unsigned __int64 *v113; // [rsp+60h] [rbp-498h]
  unsigned int v114; // [rsp+68h] [rbp-490h]
  unsigned int v115; // [rsp+6Ch] [rbp-48Ch]
  __int64 v117; // [rsp+78h] [rbp-480h]
  unsigned __int64 *v118; // [rsp+80h] [rbp-478h]
  __int64 v119; // [rsp+88h] [rbp-470h]
  int v122; // [rsp+A8h] [rbp-450h]
  int v123; // [rsp+ACh] [rbp-44Ch]
  __m128i *v124; // [rsp+B0h] [rbp-448h]
  unsigned __int64 *v125; // [rsp+B8h] [rbp-440h]
  unsigned __int64 *v126; // [rsp+C0h] [rbp-438h]
  unsigned __int64 *v127; // [rsp+C8h] [rbp-430h]
  const char *v128; // [rsp+D0h] [rbp-428h] BYREF
  __int64 v129; // [rsp+D8h] [rbp-420h] BYREF
  __int64 v130; // [rsp+E0h] [rbp-418h] BYREF
  void *v131; // [rsp+E8h] [rbp-410h] BYREF
  int v132[2]; // [rsp+F0h] [rbp-408h] BYREF
  int v133[2]; // [rsp+F8h] [rbp-400h] BYREF
  int v134[2]; // [rsp+100h] [rbp-3F8h] BYREF
  __int64 v135; // [rsp+108h] [rbp-3F0h]
  int v136[2]; // [rsp+110h] [rbp-3E8h] BYREF
  void *v137; // [rsp+118h] [rbp-3E0h] BYREF
  void *v138; // [rsp+130h] [rbp-3C8h]
  __int64 v139; // [rsp+148h] [rbp-3B0h]
  char v140[16]; // [rsp+150h] [rbp-3A8h] BYREF
  char v141[24]; // [rsp+160h] [rbp-398h] BYREF
  char v142[16]; // [rsp+178h] [rbp-380h] BYREF
  char v143[64]; // [rsp+188h] [rbp-370h] BYREF
  __int64 v144; // [rsp+1C8h] [rbp-330h] BYREF
  __m128 v145; // [rsp+1D0h] [rbp-328h]
  int v146; // [rsp+1E0h] [rbp-318h]
  __int64 *v147; // [rsp+1E8h] [rbp-310h]
  __int64 v148; // [rsp+1F0h] [rbp-308h]
  int v149; // [rsp+1F8h] [rbp-300h]
  __int64 *v150; // [rsp+200h] [rbp-2F8h]
  __int64 v151; // [rsp+208h] [rbp-2F0h]
  int v152; // [rsp+210h] [rbp-2E8h]
  __int64 v153; // [rsp+218h] [rbp-2E0h]
  __int64 v154[6]; // [rsp+220h] [rbp-2D8h] BYREF
  char v155[24]; // [rsp+250h] [rbp-2A8h] BYREF
  char v156[8]; // [rsp+268h] [rbp-290h] BYREF
  void *v157; // [rsp+270h] [rbp-288h]
  void *ptr; // [rsp+278h] [rbp-280h]
  _QWORD v159[67]; // [rsp+290h] [rbp-268h] BYREF
  _BYTE v160[80]; // [rsp+4A8h] [rbp-50h] BYREF

  v4 = *a1;
  LODWORD(v103) = a4;
  sub_16511B0(&v137);
  *(_QWORD *)v136 = &off_1C63D10;
  v139 = v4;
  sub_16669D0(v140, v4);
  sub_16744A0(v141, v4);
  sub_1684300(v142, v4);
  sub_15C5470(v143, v4);
  v144 = v4;
  sub_180C5A0(v159, "seq");
  v5 = sub_15DA4C0(v4 + 560, v159);
  v6 = sub_15D2690(v4, v5);
  v145 = _mm_loadh_ps((const double *)(v6 + 88));
  v7 = *(_DWORD *)(v6 + 16);
  v147 = &v144;
  v148 = v144;
  v151 = v144;
  v154[0] = v144;
  v146 = v7;
  v149 = v7;
  v150 = &v144;
  v152 = v7;
  v153 = 0;
  memset(&v154[1], 0, 24);
  v154[4] = 0xFFFFFFFFLL;
  v154[5] = 0;
  sub_15F01E0(v155, v4);
  sub_1624F90(v156, v4);
  sub_633760((__int64)v159, *a1, 0, (__int64)v160);
  v160[8] = 0;
  v159[0] = &off_1C4CA80;
  v109 = *a1;
  v130 = *a1;
  v8 = (__m128i *)sub_186B270(0x80u);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v9 = sub_186B270(0x80u);
  *(_DWORD *)(v9 + 8) = 0;
  v11 = (__m128i *)v9;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_DWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 120) = 0;
  v12 = a2[1];
  if ( !v12 )
  {
    sub_186B220(v11);
    *(_QWORD *)v98 = 0;
    v119 = 0;
    *(_QWORD *)v102 = v109;
    v95 = nullptr;
    v107 = 8;
    goto LABEL_10;
  }
  *(_DWORD *)&v108[4] = 0;
  v13 = 0;
  *(_DWORD *)v108 = 0;
  *(_QWORD *)v102 = v109;
  v115 = 8;
  v110 = 0;
  v122 = 0;
  v107 = 8;
  v119 = 0;
  *(_QWORD *)v98 = 0;
  v95 = nullptr;
  do
  {
    if ( v13 >= *(_DWORD *)(v12 - 4) )
      break;
    v104 = 8LL * v13;
    v14 = *(_QWORD *)(v12 + v104);
    v93 = v14;
    if ( *(_WORD *)(v14 + 4) != 2 )
      goto LABEL_5;
    v123 = *(_DWORD *)(v14 + 16);
    if ( v123 )
      goto LABEL_5;
    v19 = *(_QWORD *)(v14 + 24);
    v20 = *(_WORD *)(v19 + 4);
    if ( v20 )
    {
      if ( v20 == 2 )
        goto LABEL_5;
    }
    else if ( (*(_BYTE *)(v19 + 30) & 2) != 0 )
    {
      goto LABEL_5;
    }
    if ( *(_QWORD *)v108 )
    {
      v21 = &v11[v115];
      if ( v21 != v11 )
      {
        v22 = 0;
        v23 = (__int64 *)v11;
        do
        {
          while ( *v23 )
          {
            *v23 = 0;
            v23 += 2;
            if ( v21 == (__m128i *)v23 )
              goto LABEL_36;
          }
          v23 += 2;
          ++v22;
        }
        while ( v21 != (__m128i *)v23 );
LABEL_36:
        if ( v115 > 0x10 && 3 * v115 < 4 * v22 )
        {
          if ( v11 )
            sub_186B220(v11);
          v115 >>= 1;
          v24 = (__m128i *)sub_186B270(16LL * v115);
          v11 = v24;
          v25 = &v24[v115];
          do
          {
            v24->m128i_i64[0] = 0;
            ++v24;
            v24[-1].m128i_i32[2] = 0;
          }
          while ( v25 != v24 );
        }
      }
    }
    if ( *(_QWORD *)v98 )
    {
      v26 = *(_QWORD *)v98 + 8LL * *(unsigned int *)(*(_QWORD *)v98 - 4LL);
      if ( *(_QWORD *)v98 < v26 )
      {
        v27 = *(__int64 **)v98;
        do
        {
          while ( 1 )
          {
            v28 = *v27;
            if ( *v27 )
            {
              v29 = (*(_DWORD *)(v28 + 8))-- == 1;
              if ( v29 )
                break;
            }
            if ( (unsigned __int64)++v27 >= v26 )
              goto LABEL_49;
          }
          sub_15D7BC0(*(_QWORD *)v102, v28);
          ++v27;
        }
        while ( (unsigned __int64)v27 < v26 );
      }
LABEL_49:
      *(_DWORD *)(*(_QWORD *)v98 - 4LL) = 0;
      *(_DWORD *)v108 = *(_DWORD *)(v93 + 20);
      if ( !*(_DWORD *)v108 )
      {
        *(_DWORD *)&v108[4] = 0;
        sub_157BE40(
          (int)v134,
          (int)v159,
          *(_QWORD *)(v93 + 24),
          0,
          v98[0],
          (int)v10,
          v93,
          (__int64)v95,
          v98[0],
          v99,
          v102[0],
          v103,
          v104,
          v106);
        goto LABEL_183;
      }
    }
    else
    {
      *(_DWORD *)v108 = *(_DWORD *)(v93 + 20);
      if ( !*(_DWORD *)v108 )
      {
        *(_DWORD *)&v108[4] = 0;
        sub_157BE40(
          (int)v134,
          (int)v159,
          *(_QWORD *)(v93 + 24),
          0,
          0,
          (int)v10,
          v93,
          (__int64)v95,
          0,
          v99,
          v102[0],
          v103,
          v104,
          v106);
        goto LABEL_183;
      }
    }
    v30 = *(_DWORD *)v108;
    *(_DWORD *)&v108[4] = 0;
    *(_DWORD *)v108 = 0;
    v117 = v115;
    v100 = v30 - 1;
    v114 = v115 - 1;
    do
    {
      v31 = *(_QWORD *)(v93 + 8LL * v100 + 80);
      v32 = 16 * v117;
      v33 = *(_DWORD *)(v31 + 12);
      v34 = &v11[v117];
      v35 = 16LL * (v33 & v114);
      v36 = &v11[(unsigned __int64)v35 / 0x10];
      if ( v35 != 16 * v117 )
      {
        v37 = &v11[(unsigned __int64)v35 / 0x10];
        do
        {
          v38 = v37->m128i_i64[0];
          if ( v37->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v38 + 12) == v33 && v31 == v38 )
              goto LABEL_80;
          }
          else if ( !v38 )
          {
            goto LABEL_58;
          }
          ++v37;
        }
        while ( v34 != v37 );
        if ( v11 != v36 )
        {
          v37 = v11;
          goto LABEL_86;
        }
        v101 = 0;
        v39 = 2 * v115;
        if ( 3 * v115 >= 4 * (*(_DWORD *)v108 + *(_DWORD *)&v108[4]) )
        {
          if ( v32 )
            goto LABEL_61;
LABEL_76:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        goto LABEL_145;
      }
      v37 = v11;
      if ( v11 == v36 )
      {
        v101 = 0;
        v39 = 2 * v115;
        if ( 3 * v115 >= 4 * (*(_DWORD *)v108 + *(_DWORD *)&v108[4]) )
        {
LABEL_211:
          v41 = nullptr;
LABEL_68:
          if ( v36 != v11 )
          {
            v40 = v11;
            do
            {
              while ( 1 )
              {
                v43 = v40->m128i_i64[0];
                if ( v40->m128i_i64[0] <= 1uLL )
                  break;
                if ( *(_DWORD *)(v43 + 12) == v33 && v31 == v43 )
                  goto LABEL_195;
                if ( v36 == ++v40 )
                  goto LABEL_76;
              }
              if ( !v43 )
                goto LABEL_89;
              v41 = v40++;
            }
            while ( v36 != v40 );
          }
          goto LABEL_76;
        }
LABEL_145:
        v115 = v39;
        v117 = v39;
        v106 = (char *)(16LL * v39);
        v67 = sub_186B270((size_t)v106);
        v32 = (__int64)v106;
        v10 = (__m128i *)v67;
        v68 = &v106[v67];
        if ( v39 )
        {
          do
          {
            *(_QWORD *)v67 = 0;
            v67 += 16;
            *(_DWORD *)(v67 - 8) = 0;
          }
          while ( (char *)v67 != v68 );
        }
        v69 = v39 - 1;
        v70 = (const __m128i *)&v106[(_QWORD)v10];
        v114 = v69;
        for ( i = v11; v34 != i; *v74 = v75 )
        {
          while ( i->m128i_i64[0] <= 1uLL )
          {
            if ( v34 == ++i )
              goto LABEL_156;
          }
          v72 = 16LL * (*(_DWORD *)(i->m128i_i64[0] + 12) & v114);
          v73 = &v10[(unsigned __int64)v72 / 0x10];
          if ( v106 == (char *)v72 )
          {
LABEL_159:
            if ( v10 == v73 )
            {
LABEL_190:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v74 = v10;
            while ( v74->m128i_i64[0] )
            {
              if ( v73 == ++v74 )
                goto LABEL_190;
            }
          }
          else
          {
            v74 = &v10[(unsigned __int64)v72 / 0x10];
            while ( v74->m128i_i64[0] )
            {
              if ( v70 == ++v74 )
                goto LABEL_159;
            }
          }
          v75 = _mm_loadu_si128(i++);
        }
LABEL_156:
        if ( v11 )
        {
          *(_QWORD *)&v108[4] = v10;
          sub_186B220(v11);
          v10 = *(__m128i **)&v108[4];
          v32 = (__int64)v106;
        }
        v33 = *(_DWORD *)(v31 + 12);
        v34 = v70;
        v11 = v10;
        *(_DWORD *)&v108[4] = 0;
        v35 = 16LL * (v33 & v114);
        v36 = &v10[(unsigned __int64)v35 / 0x10];
        goto LABEL_60;
      }
LABEL_86:
      while ( 1 )
      {
        v44 = v37->m128i_i64[0];
        if ( v37->m128i_i64[0] > 1uLL )
          break;
        if ( !v44 )
        {
LABEL_58:
          v101 = 0;
          goto LABEL_59;
        }
LABEL_85:
        if ( v36 == ++v37 )
          goto LABEL_58;
      }
      if ( *(_DWORD *)(v44 + 12) != v33 || v31 != v44 )
        goto LABEL_85;
LABEL_80:
      v101 = v37->m128i_i32[2] + 1;
LABEL_59:
      v39 = 2 * v115;
      if ( 3 * v115 < 4 * (*(_DWORD *)&v108[4] + *(_DWORD *)v108) )
        goto LABEL_145;
LABEL_60:
      if ( v35 == v32 )
        goto LABEL_211;
LABEL_61:
      v40 = v36;
      v41 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v42 = v40->m128i_i64[0];
          if ( v40->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v42 + 12) == v33 && v31 == v42 )
          {
LABEL_195:
            v40->m128i_i64[0] = v31;
            v40->m128i_i32[2] = v101;
            goto LABEL_92;
          }
          if ( ++v40 == v34 )
            goto LABEL_68;
        }
        if ( !v42 )
          break;
        v41 = v40++;
        if ( v40 == v34 )
          goto LABEL_68;
      }
LABEL_89:
      if ( v41 )
        --*(_DWORD *)&v108[4];
      else
        v41 = v40;
      v41->m128i_i64[0] = v31;
      v41->m128i_i32[2] = v101;
      ++*(_DWORD *)v108;
LABEL_92:
      v45 = 2 * v107;
      if ( 3 * v107 >= 4 * (v110 + v122) )
      {
        v46 = 16LL * v107;
        LODWORD(v106) = v107 - 1;
        v47 = (unsigned __int64 *)&v8[v46 / 0x10];
        goto LABEL_94;
      }
      v46 = 16LL * v45;
      v55 = (unsigned __int64 *)sub_186B270(v46);
      v118 = v55;
      v47 = &v55[v46 / 8];
      if ( v45 )
      {
        if ( (v46 & 0x10) == 0 || (*(_OWORD *)v55 = 0, v55 += 2, v47 != v55) )
        {
          do
          {
            *(_OWORD *)v55 = 0;
            v55 += 4;
            *((_OWORD *)v55 - 1) = 0;
          }
          while ( v47 != v55 );
        }
        LODWORD(v106) = v45 - 1;
        v111 = v107;
        v10 = &v8[v107];
LABEL_116:
        v56 = &v8->m128i_u64[1];
        while ( 2 )
        {
          v58 = *(v56 - 1);
          if ( v58 <= 1 )
            goto LABEL_117;
          v59 = 16LL * (*(_DWORD *)(v58 + 12) & (unsigned int)v106);
          v60 = &v118[(unsigned __int64)v59 / 8];
          if ( v46 == v59 )
          {
LABEL_136:
            v61 = v118;
            if ( v118 == v60 )
            {
LABEL_189:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            while ( *v61 )
            {
              v61 += 2;
              if ( v60 == v61 )
                goto LABEL_189;
            }
            *v61 = v58;
            if ( v56 == v61 + 1 )
              goto LABEL_117;
            v62 = v61[1];
            if ( v62 )
            {
LABEL_126:
              v127 = v56;
              v126 = v61;
              v125 = v47;
              v124 = v10;
              sub_186B220((void *)(v62 - 8));
              v56 = v127;
              v61 = v126;
              v47 = v125;
              v10 = v124;
            }
LABEL_127:
            v61[1] = 0;
            v61[1] = *v56;
            v57 = v56 + 2;
            v32 = (__int64)(v56 + 1);
            *(_QWORD *)(v32 - 8) = 0;
            if ( v10 == (__m128i *)v32 )
              goto LABEL_128;
          }
          else
          {
            v61 = &v118[(unsigned __int64)v59 / 8];
            while ( *v61 )
            {
              v61 += 2;
              if ( v47 == v61 )
                goto LABEL_136;
            }
            *v61 = v58;
            if ( v56 != v61 + 1 )
            {
              v62 = v61[1];
              if ( v62 )
                goto LABEL_126;
              goto LABEL_127;
            }
LABEL_117:
            v57 = v56 + 2;
            v32 = (__int64)(v56 + 1);
            if ( v10 == (__m128i *)v32 )
              goto LABEL_128;
          }
          v56 = v57;
          continue;
        }
      }
      v47 = v55;
      LODWORD(v106) = -1;
      v111 = v107;
      v10 = &v8[v107];
      if ( v10 != v8 )
        goto LABEL_116;
LABEL_128:
      if ( v8 )
      {
        v63 = &v8[v111];
        if ( v107 )
        {
          v64 = v11;
          v65 = v8;
          do
          {
            while ( 1 )
            {
              v66 = v65->m128i_i64[1];
              if ( !v66 )
                break;
              ++v65;
              v112 = v47;
              sub_186B220((void *)(v66 - 8));
              v47 = v112;
              if ( v65 == v63 )
                goto LABEL_133;
            }
            ++v65;
          }
          while ( v65 != v63 );
LABEL_133:
          v11 = v64;
          v46 = 16LL * v45;
        }
        v113 = v47;
        sub_186B220(v8);
        v47 = v113;
      }
      v110 = 0;
      v8 = (__m128i *)v118;
      v107 *= 2;
LABEL_94:
      v48 = *(_DWORD *)(v31 + 12);
      v49 = 16LL * (v48 & (unsigned int)v106);
      v50 = &v8[(unsigned __int64)v49 / 0x10];
      if ( v49 == v46 )
      {
        v52 = nullptr;
LABEL_102:
        if ( v8 == v50 )
        {
LABEL_110:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v51 = (unsigned __int64 *)v8;
        while ( 1 )
        {
          while ( 1 )
          {
            v54 = *v51;
            if ( *v51 <= 1 )
              break;
            if ( *(_DWORD *)(v54 + 12) == v48 && v31 == v54 )
              goto LABEL_196;
            v51 += 2;
            if ( v50 == (__m128i *)v51 )
              goto LABEL_110;
          }
          if ( !v54 )
            break;
          v52 = v51;
          v51 += 2;
          if ( v50 == (__m128i *)v51 )
            goto LABEL_110;
        }
        if ( v52 )
          --v110;
        else
          v52 = v51;
        v76 = v52[1];
        *v52 = v31;
        if ( v76 )
LABEL_169:
          sub_186B220((void *)(v76 - 8));
LABEL_170:
        v52[1] = 0;
        ++v122;
LABEL_171:
        v77 = (unsigned int **)(v52 + 1);
        if ( v95 )
          v78 = *(v95 - 1);
        else
          v78 = 0;
      }
      else
      {
        v51 = (unsigned __int64 *)&v8[(unsigned __int64)v49 / 0x10];
        v52 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v53 = *v51;
            if ( *v51 > 1 )
              break;
            if ( !v53 )
            {
              if ( v52 )
                --v110;
              else
                v52 = v51;
              v76 = v52[1];
              *v52 = v31;
              if ( !v76 )
                goto LABEL_170;
              goto LABEL_169;
            }
            v52 = v51;
            v51 += 2;
            if ( v51 == v47 )
              goto LABEL_102;
          }
          if ( *(_DWORD *)(v53 + 12) == v48 && v31 == v53 )
            break;
          v51 += 2;
          if ( v51 == v47 )
            goto LABEL_102;
        }
LABEL_196:
        v80 = v51[1];
        v52 = v51;
        if ( !v80 )
          goto LABEL_171;
        v81 = *(unsigned int *)(v80 - 4);
        if ( v101 < (unsigned int)v81 )
          goto LABEL_177;
        v79 = (int)v95;
        if ( v95 )
          v78 = *(v95 - 1);
        else
          v78 = 0;
        v77 = (unsigned int **)(v52 + 1);
        if ( (_DWORD)v81 != *(_DWORD *)(v80 - 8) )
          goto LABEL_174;
      }
      sub_2FD3F0(v77);
      v80 = v52[1];
      v81 = *(unsigned int *)(v80 - 4);
LABEL_174:
      *(_DWORD *)(v80 + 4 * v81) = v78;
      ++*(_DWORD *)(v80 - 4);
      v128 = (const char *)sub_133F920(a3, v48, v80, v79, v32, (_DWORD)v10);
      v82 = *a1;
      v83 = sub_15E3510(*a1, &v128, 0, 0, v31, 0);
      v86 = sub_15DC610(
              v82,
              v83,
              0,
              0,
              v84,
              v85,
              v93,
              (int)v95,
              v98[0],
              v100,
              v102[0],
              v103,
              v104,
              (int)v106,
              v107,
              *(void **)&v108[4]);
      v129 = v86;
      if ( v86 )
        ++*(_DWORD *)(v86 + 8);
      v131 = v96;
      sub_64DC20(&v131, &v129);
      v97 = v131;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v103, v128);
      std::__ostream_insert<char,std::char_traits<char>>();
      *(_QWORD *)v134 = 0;
      sub_160AF10(v103, v31, (int)v136, (int)v134, 0, v87, v94, v97);
      sub_18572D0(v134);
      std::__ostream_insert<char,std::char_traits<char>>();
      v80 = v52[1];
LABEL_177:
      v88 = *(_QWORD *)&v95[2 * *(unsigned int *)(v80 + 4LL * v101)];
      *(_QWORD *)v134 = v88;
      if ( v88 )
        ++*(_DWORD *)(v88 + 8);
      *(_QWORD *)v132 = *(_QWORD *)v102;
      *(_QWORD *)v133 = *(_QWORD *)v98;
      sub_64DC20(v133, v134);
      --v100;
      *(_QWORD *)v102 = *(_QWORD *)v132;
      *(_QWORD *)v98 = *(_QWORD *)v133;
    }
    while ( v100 != -1 );
    if ( *(_QWORD *)v133 )
      v123 = *(_DWORD *)(*(_QWORD *)v133 - 4LL);
    sub_157BE40(
      (int)v134,
      (int)v159,
      *(_QWORD *)(v93 + 24),
      v123,
      v133[0],
      (int)v10,
      v93,
      (__int64)v95,
      v133[0],
      -1,
      v132[0],
      v103,
      v104,
      v106);
LABEL_183:
    v89 = *(_QWORD *)v134;
    *(_QWORD *)v134 = v119;
    sub_64AD00(v119, v135);
    v90 = *a2;
    v12 = a2[1];
    v91 = (__int64 *)(v12 + v105);
    if ( v89 )
      ++*(_DWORD *)(v89 + 8);
    v92 = *v91;
    if ( *v91 )
    {
      v29 = (*(_DWORD *)(v92 + 8))-- == 1;
      if ( v29 )
      {
        sub_15D7BC0(v90, v92);
        v12 = a2[1];
      }
    }
    *v91 = v89;
    v119 = v89;
LABEL_5:
    ++v13;
  }
  while ( v12 );
  if ( v11 )
    sub_186B220(v11);
  if ( v8 )
  {
    if ( v107 )
    {
LABEL_10:
      v15 = v8;
      v16 = &v8[v107];
      do
      {
        while ( 1 )
        {
          v17 = v15->m128i_i64[1];
          if ( !v17 )
            break;
          ++v15;
          sub_186B220((void *)(v17 - 8));
          if ( v15 == v16 )
            goto LABEL_13;
        }
        ++v15;
      }
      while ( v15 != v16 );
    }
LABEL_13:
    sub_186B220(v8);
  }
  sub_64AD00(v119, v109);
  *(_QWORD *)v132 = *(_QWORD *)v102;
  *(_QWORD *)v133 = *(_QWORD *)v98;
  sub_2334C0((__int64 *)v132);
  v131 = v95;
  sub_2334C0(&v130);
  v159[0] = &off_1C4CA80;
  sub_267D20(v159);
  *(_QWORD *)v136 = &off_1C63D10;
  if ( ptr )
    sub_186B220(ptr);
  if ( v157 )
    sub_186B220(v157);
  sub_2334C0(v154);
  if ( v153 )
    sub_186B220((void *)(v153 - 8));
  result = qword_1C7A350;
  *(_QWORD *)v136 = qword_1C7A350;
  if ( v138 )
    result = (__int64 *)sub_186B220(v138);
  if ( v137 )
    return (__int64 *)sub_186B220(v137);
  return result;
}

