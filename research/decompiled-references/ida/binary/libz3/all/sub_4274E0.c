__int64 __fastcall sub_4274E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128i si128)
{
  char **exception; // rbp
  char **v8; // rbp
  char **v9; // rbp
  __int64 v10; // rdi
  char *v11; // rbx
  __m128i *v12; // rbp
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // esi
  unsigned int v17; // edx
  __int64 *v18; // r9
  __int64 v19; // rdx
  __int64 *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rdx
  _DWORD *v30; // rax
  __int64 *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // r13
  __m128i *v38; // rbx
  __int32 v39; // r9d
  size_t v40; // r14
  char *m128i_i8; // rbp
  int v42; // esi
  __int64 v43; // r9
  __m128i *v44; // rdi
  char *v45; // rax
  __m128i *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rax
  __m128i *v49; // rax
  __int32 v50; // r10d
  __m128i *v51; // rdx
  const __m128i *v52; // rax
  __m128i *v53; // r11
  __int64 v54; // rdx
  __m128i *v55; // rsi
  __m128i *v56; // rdx
  __int32 v57; // eax
  __int32 v58; // ecx
  __int32 v59; // eax
  unsigned int v60; // r13d
  unsigned int v61; // edx
  unsigned int *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r12d
  _QWORD *v67; // rax
  __m128 *v68; // r15
  unsigned int v69; // edx
  unsigned int v70; // ebp
  unsigned int v71; // eax
  unsigned int *v72; // rax
  unsigned __int64 *v73; // r13
  __int64 v74; // rbx
  unsigned __int64 *v75; // rsi
  _DWORD *v76; // rdi
  unsigned __int64 *v77; // r9
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned __int64 *v80; // rbx
  unsigned __int64 *v81; // rbp
  __int64 *v82; // r12
  __int64 *v83; // r13
  __int64 v84; // rsi
  unsigned __int64 v85; // rdi
  bool v86; // zf
  __m128 *v87; // rdx
  __int64 v88; // rax
  __m128i *i; // rbx
  unsigned int v90; // ebp
  _QWORD *v91; // rax
  unsigned int v92; // r12d
  unsigned int v93; // edx
  unsigned int *v94; // rax
  unsigned int v95; // eax
  unsigned int v96; // ecx
  __m128i *v97; // rax
  __m128i v98; // xmm2
  __m128i v99; // xmm1
  unsigned int v100; // eax
  unsigned int v101; // edx
  unsigned int v102; // eax
  int v103; // eax
  unsigned __int64 *v104; // r12
  __int64 v105; // rax
  __m128i *v106; // r13
  __int32 *v107; // r14
  unsigned int v108; // r15d
  __int64 v109; // rbp
  unsigned __int64 *v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // r12
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rsi
  __int64 *v118; // rdi
  int v119; // edx
  __int16 v120; // cx
  __int16 v121; // ax
  __int16 v122; // dx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 *v125; // r12
  __int64 v126; // rbp
  unsigned __int64 v127; // r15
  unsigned int v128; // edx
  unsigned int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // r12
  __int64 v134; // rsi
  std::ostream *v135; // rdi
  __int64 v136; // rsi
  __int64 v137; // rdi
  __int64 v138; // r12
  unsigned __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r12
  __int64 v145; // rsi
  std::ostream *v146; // rax
  unsigned int v147; // eax
  unsigned __int64 *v148; // rbp
  __int64 *v149; // rbx
  __int64 *v150; // r13
  __int64 v151; // rsi
  unsigned __int64 v152; // rdi
  __int64 *v153; // rbx
  unsigned __int64 v154; // rbp
  __int64 v155; // rsi
  _QWORD *v157; // rax
  int v158; // r8d
  int v159; // edi
  __int64 v160; // rcx
  int v161; // esi
  int v162; // r9d
  int *v163; // rax
  int v164; // r10d
  __int64 j; // rax
  __m128i *v166; // rdx
  unsigned int v167; // ecx
  unsigned int v168; // eax
  unsigned int v169; // esi
  __int64 v170; // rcx
  int v171; // edi
  __int32 *v172; // rcx
  int v173; // eax
  __int64 v174; // [rsp+8h] [rbp-140h]
  unsigned int v175; // [rsp+8h] [rbp-140h]
  unsigned int *v176; // [rsp+8h] [rbp-140h]
  unsigned int v177; // [rsp+10h] [rbp-138h]
  unsigned int v178; // [rsp+10h] [rbp-138h]
  __int64 v179; // [rsp+10h] [rbp-138h]
  __int64 v180; // [rsp+18h] [rbp-130h]
  unsigned int *v181; // [rsp+18h] [rbp-130h]
  __m128i v182; // [rsp+20h] [rbp-128h] BYREF
  __int64 *v183; // [rsp+30h] [rbp-118h]
  __int64 v184; // [rsp+38h] [rbp-110h]
  __int64 v185; // [rsp+40h] [rbp-108h]
  __m128i *v186; // [rsp+48h] [rbp-100h]
  __int64 v187; // [rsp+50h] [rbp-F8h]
  __int32 v188; // [rsp+58h] [rbp-F0h]
  __int32 v189; // [rsp+5Ch] [rbp-ECh]
  __int64 v190; // [rsp+60h] [rbp-E8h]
  __int64 v191; // [rsp+68h] [rbp-E0h]
  __int64 v192; // [rsp+70h] [rbp-D8h]
  __int64 v193; // [rsp+78h] [rbp-D0h]
  __m128i *v194; // [rsp+88h] [rbp-C0h] BYREF
  char v195[8]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int64 *v196; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v197; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v198; // [rsp+A8h] [rbp-A0h]
  __int64 v199; // [rsp+B0h] [rbp-98h]
  __int64 v200; // [rsp+B8h] [rbp-90h]
  __int64 v201; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v202; // [rsp+C8h] [rbp-80h]
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v204; // [rsp+D8h] [rbp-70h]
  int v205; // [rsp+E0h] [rbp-68h]
  __int64 *v206; // [rsp+F0h] [rbp-58h] BYREF
  __int64 *v207; // [rsp+F8h] [rbp-50h]

  v184 = a1;
  v10 = *(_QWORD *)(a2 + 16);
  v191 = a2;
  v192 = a4;
  v193 = a5;
  v187 = a6;
  v194 = nullptr;
  sub_4031A0(v10, a3, &v194);
  v11 = (char *)v194;
  v183 = (__int64 *)v194;
  if ( v194 )
  {
    v183 = nullptr;
    v12 = (__m128i *)((char *)v194 + 8 * v194[-1].m128i_u32[3]);
    if ( v194 != v12 )
    {
      do
      {
        v13 = *(_QWORD *)v11;
        v14 = *(__int64 **)(v184 + 264);
        v15 = *(unsigned int *)(v184 + 272);
        v16 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
        v17 = v15 - 1;
        v15 *= 16;
        v18 = (__int64 *)((char *)v14 + v15);
        v19 = 16LL * (v16 & v17);
        v20 = &v14[(unsigned __int64)v19 / 8];
        if ( v19 == v15 )
        {
LABEL_11:
          while ( v20 != v14 )
          {
            v23 = *v14;
            if ( (unsigned __int64)*v14 > 1 )
            {
              if ( *(_DWORD *)(v23 + 12) == v16 && v13 == v23 )
              {
                v21 = v14;
                goto LABEL_20;
              }
            }
            else if ( !v23 )
            {
              break;
            }
            v14 += 2;
          }
LABEL_242:
          BUG();
        }
        v21 = &v14[(unsigned __int64)v19 / 8];
        while ( 1 )
        {
          while ( 1 )
          {
            v22 = *v21;
            if ( (unsigned __int64)*v21 > 1 )
              break;
            if ( !v22 )
              goto LABEL_242;
            v21 += 2;
            if ( v18 == v21 )
              goto LABEL_11;
          }
          if ( *(_DWORD *)(v22 + 12) == v16 && v13 == v22 )
            break;
          v21 += 2;
          if ( v18 == v21 )
            goto LABEL_11;
        }
LABEL_20:
        v24 = v183;
        v25 = v21[1];
        if ( v183 )
        {
          v26 = *((_DWORD *)v183 - 1);
          if ( v26 == *((_DWORD *)v183 - 2) )
          {
            v60 = (3 * v26 + 1) >> 1;
            v61 = 8 * v60 + 8;
            if ( 8 * v26 + 8 >= v61 || v26 >= v60 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v206, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v206);
              sub_233E40((__int64)&v206);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (unsigned int *)sub_186B300(v183 - 1, v61);
            v63 = v62[1];
            v24 = (__int64 *)(v62 + 2);
            *v62 = v60;
            v183 = v24;
            LODWORD(v62) = v63;
            v29 = &v24[v63];
            v28 = (_DWORD)v62 + 1;
          }
          else
          {
            v27 = v26;
            v28 = v26 + 1;
            v29 = &v183[v27];
          }
        }
        else
        {
          v157 = (_QWORD *)sub_186B270(0x18u);
          *v157 = 2;
          v183 = v157 + 1;
          v29 = v157 + 1;
          v24 = v157 + 1;
          v28 = 1;
        }
        v11 += 8;
        *v29 = v25;
        *((_DWORD *)v24 - 1) = v28;
      }
      while ( v12 != (__m128i *)v11 );
    }
  }
  v30 = (_DWORD *)sub_186B270(0x80u);
  *(_QWORD *)v30 = 0;
  v30[2] = 0;
  *((_QWORD *)v30 + 2) = 0;
  v30[6] = 0;
  *((_QWORD *)v30 + 4) = 0;
  v30[10] = 0;
  *((_QWORD *)v30 + 6) = 0;
  v30[14] = 0;
  *((_QWORD *)v30 + 8) = 0;
  v30[18] = 0;
  *((_QWORD *)v30 + 10) = 0;
  v30[22] = 0;
  *((_QWORD *)v30 + 12) = 0;
  v30[26] = 0;
  *((_QWORD *)v30 + 14) = 0;
  v30[30] = 0;
  ptr = v30;
  v31 = (__int64 *)v194;
  v204 = 8;
  v205 = 0;
  if ( !v194 )
    goto LABEL_82;
  v32 = v194[-1].m128i_u32[3];
  if ( !v32 )
    goto LABEL_82;
  v185 = 0;
  v190 = v32;
  v180 = v184 + 176;
  while ( 2 )
  {
    v33 = 0;
    v34 = v31[v185];
    v35 = v183[v185];
    v182.m128i_i32[0] = v185;
    v177 = v185 + 1;
    v36 = *(unsigned int *)(v34 + 32);
    v174 = 8 * v36;
    if ( !(_DWORD)v36 )
      goto LABEL_47;
    do
    {
      v37 = sub_439010(v180, *(_QWORD *)(*(_QWORD *)(v35 + 48) + v33), 1, v177);
      if ( 3 * (int)v204 < (unsigned int)(4 * (HIDWORD(v204) + v205)) )
      {
        v182.m128i_i32[2] = 2 * v204;
        v40 = 16LL * (unsigned int)(2 * v204);
        v49 = (__m128i *)sub_186B270(v40);
        v50 = v182.m128i_i32[2];
        v38 = v49;
        v51 = &v49[v40 / 0x10];
        if ( v182.m128i_i32[2] )
        {
          do
          {
            v49->m128i_i64[0] = 0;
            ++v49;
            v49[-1].m128i_i32[2] = 0;
          }
          while ( v49 != v51 );
        }
        v52 = (const __m128i *)ptr;
        v39 = v50 - 1;
        m128i_i8 = v38[v40 / 0x10].m128i_i8;
        v53 = (__m128i *)((char *)ptr + 16 * (unsigned int)v204);
        if ( ptr != v53 )
        {
          do
          {
            while ( v52->m128i_i64[0] <= 1uLL )
            {
              if ( v53 == ++v52 )
                goto LABEL_60;
            }
            v54 = 16LL * (*(_DWORD *)(v52->m128i_i64[0] + 12) & (unsigned int)v39);
            v55 = &v38[(unsigned __int64)v54 / 0x10];
            if ( v40 == v54 )
            {
LABEL_64:
              if ( v38 == v55 )
              {
LABEL_72:
                v189 = v50;
                v188 = v50 - 1;
                v186 = v53;
                v182.m128i_i64[1] = (__int64)v52;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v56 = v38;
              while ( v56->m128i_i64[0] )
              {
                if ( v55 == ++v56 )
                  goto LABEL_72;
              }
            }
            else
            {
              v56 = &v38[(unsigned __int64)v54 / 0x10];
              while ( v56->m128i_i64[0] )
              {
                if ( m128i_i8 == (char *)++v56 )
                  goto LABEL_64;
              }
            }
            si128 = _mm_loadu_si128(v52++);
            *v56 = si128;
          }
          while ( v53 != v52 );
LABEL_60:
          v53 = (__m128i *)ptr;
        }
        if ( v53 )
        {
          LODWORD(v186) = v50;
          v182.m128i_i32[2] = v50 - 1;
          sub_186B220(v53);
          v50 = (int)v186;
          v39 = v182.m128i_i32[2];
        }
        ptr = v38;
        LODWORD(v204) = v50;
        v205 = 0;
      }
      else
      {
        v38 = (__m128i *)ptr;
        v39 = v204 - 1;
        v40 = 16LL * (unsigned int)v204;
        m128i_i8 = (char *)ptr + v40;
      }
      v42 = *(_DWORD *)(v37 + 12);
      v43 = 16LL * (v42 & (unsigned int)v39);
      v44 = &v38[(unsigned __int64)v43 / 0x10];
      if ( v43 != v40 )
      {
        v45 = v38[(unsigned __int64)v43 / 0x10].m128i_i8;
        v46 = nullptr;
        while ( 1 )
        {
          v47 = *(_QWORD *)v45;
          if ( *(_QWORD *)v45 > 1u )
          {
            if ( *(_DWORD *)(v47 + 12) == v42 && v37 == v47 )
            {
              v58 = v182.m128i_i32[0];
              *(_QWORD *)v45 = v37;
              *((_DWORD *)v45 + 2) = v58;
              goto LABEL_46;
            }
          }
          else
          {
            if ( !v47 )
            {
              if ( v46 )
                goto LABEL_70;
              v46 = (__m128i *)v45;
              goto LABEL_71;
            }
            v46 = (__m128i *)v45;
          }
          v45 += 16;
          if ( v45 == m128i_i8 )
            goto LABEL_41;
        }
      }
      v46 = nullptr;
      while ( 1 )
      {
LABEL_41:
        if ( v44 == v38 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v48 = v38->m128i_i64[0];
        if ( v38->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v48 + 12) == v42 && v37 == v48 )
        {
          v59 = v182.m128i_i32[0];
          v38->m128i_i64[0] = v37;
          v38->m128i_i32[2] = v59;
          goto LABEL_46;
        }
LABEL_40:
        ++v38;
      }
      if ( v48 )
      {
        v46 = v38;
        goto LABEL_40;
      }
      if ( v46 )
LABEL_70:
        --v205;
      else
        v46 = v38;
LABEL_71:
      v57 = v182.m128i_i32[0];
      v46->m128i_i64[0] = v37;
      v46->m128i_i32[2] = v57;
      ++HIDWORD(v204);
LABEL_46:
      v33 += 8;
    }
    while ( v174 != v33 );
LABEL_47:
    if ( v190 != ++v185 )
    {
      v31 = (__int64 *)v194;
      continue;
    }
    break;
  }
LABEL_82:
  sub_4415B0(v195, *(_QWORD *)(v184 + 152));
  v64 = *(_QWORD *)(v184 + 152);
  v198 = nullptr;
  v197 = v64;
  v182.m128i_i64[1] = (__int64)&v197;
  sub_15EEF60(v192);
  v65 = *(_QWORD *)(v184 + 152);
  v200 = 0;
  v182.m128i_i64[0] = v65;
  v199 = v65;
  if ( v194 )
  {
    v66 = v194[-1].m128i_u32[3];
    v196 = nullptr;
    v202 = 0;
    if ( v66 )
    {
      v67 = (_QWORD *)sub_186B270(0x28u);
      v68 = (__m128 *)(v67 + 1);
      *v67 = 2;
      v196 = v67 + 1;
      while ( 1 )
      {
        v69 = v68[-1].m128_u32[2];
        if ( v69 >= v66 )
          break;
        while ( 1 )
        {
          v70 = (3 * v69 + 1) >> 1;
          v71 = 16 * v70 + 8;
          if ( 16 * v69 + 8 >= v71 || v69 >= v70 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v206, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, &v206);
            sub_233E40((__int64)&v206);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v72 = (unsigned int *)sub_186B270(v71);
          v73 = v196;
          v68 = (__m128 *)(v72 + 2);
          if ( !v196 )
            break;
          v74 = *((unsigned int *)v196 - 1);
          v75 = v196;
          v76 = v72 + 2;
          v72[1] = v74;
          v77 = &v73[2 * v74];
          if ( v73 != v77 )
          {
            do
            {
              v78 = *v75;
              v75 += 2;
              v76 += 4;
              *((_QWORD *)v76 - 2) = v78;
              v79 = *(v75 - 1);
              *(v75 - 1) = 0;
              *((_QWORD *)v76 - 1) = v79;
            }
            while ( v77 != v75 );
          }
          if ( (_DWORD)v74 )
          {
            v175 = v66;
            v181 = v72;
            v80 = &v73[2 * v74];
            v178 = v70;
            v81 = v73;
            do
            {
              v82 = (__int64 *)v81[1];
              if ( v82 )
              {
                v83 = &v82[*((unsigned int *)v82 - 1)];
                if ( v82 >= v83 )
                  goto LABEL_101;
                do
                {
                  while ( 1 )
                  {
                    v84 = *v82;
                    if ( *v82 )
                    {
                      v85 = *v81;
                      v86 = (*(_DWORD *)(v84 + 8))-- == 1;
                      if ( v86 )
                        break;
                    }
                    if ( ++v82 >= v83 )
                      goto LABEL_100;
                  }
                  sub_15D7BC0(v85, v84);
                  ++v82;
                }
                while ( v82 < v83 );
LABEL_100:
                v82 = (__int64 *)v81[1];
                if ( v82 )
LABEL_101:
                  sub_186B220(v82 - 1);
              }
              v81 += 2;
            }
            while ( v81 != v80 );
            v66 = v175;
            v70 = v178;
            v72 = v181;
            v73 = v196;
          }
          v176 = v72;
          sub_186B220(v73 - 1);
          v196 = (unsigned __int64 *)v68;
          *v176 = v70;
          v69 = v68[-1].m128_u32[2];
          if ( v69 >= v66 )
            goto LABEL_105;
        }
        v72[1] = 0;
        v196 = (unsigned __int64 *)(v72 + 2);
        *v72 = v70;
      }
LABEL_105:
      v68[-1].m128_i32[3] = v66;
      if ( v66 == 1 )
      {
LABEL_110:
        v88 = v182.m128i_i64[0];
        v68->m128_u64[1] = 0;
        v68->m128_u64[0] = v88;
      }
      else
      {
        si128 = _mm_loadl_epi64(&v182);
        v87 = v68;
        do
        {
          *v87 = (__m128)si128;
          v87 += 2;
          v87[-1] = (__m128)si128;
        }
        while ( &v68[2 * ((unsigned __int64)v66 >> 1)] != v87 );
        if ( (v66 & 1) != 0 )
        {
          v68 += v66 & 0xFFFFFFFE;
          goto LABEL_110;
        }
      }
    }
  }
  else
  {
    v196 = nullptr;
  }
  sub_445830(v195, &ptr, v182.m128i_i64[1], v193, &v196);
  i = v194;
  if ( !v194 )
  {
    v173 = *(_DWORD *)(v184 + 260);
    if ( v173 != 1 && v173 != 2 )
    {
      v104 = v196;
      if ( !v196 )
        goto LABEL_199;
      v105 = *((unsigned int *)v196 - 1);
      if ( !(_DWORD)v105 )
        goto LABEL_198;
      goto LABEL_131;
    }
LABEL_239:
    v104 = v196;
    if ( !v196 )
      goto LABEL_199;
    v105 = *((unsigned int *)v196 - 1);
    i = nullptr;
    if ( !(_DWORD)v105 )
      goto LABEL_198;
    goto LABEL_131;
  }
  v90 = v194[-1].m128i_u32[3];
  if ( !v90 )
    goto LABEL_239;
  v91 = (_QWORD *)sub_186B270(0x10u);
  *v91 = 2;
  for ( i = (__m128i *)(v91 + 1); ; i = (__m128i *)(v94 + 2) )
  {
    v95 = i[-1].m128i_u32[2];
    if ( v95 >= v90 )
      break;
    v92 = (3 * v95 + 1) >> 1;
    v93 = 4 * v92 + 8;
    if ( 4 * v95 + 8 >= v93 || v95 >= v92 )
    {
      v8 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v206, "Overflow encountered when expanding vector");
      *v8 = (char *)off_1C63128;
      sub_2333C0(v8 + 1, &v206);
      sub_233E40((__int64)&v206);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v94 = (unsigned int *)sub_186B300(&i[-1].m128i_u64[1], v93);
    *v94 = v92;
  }
  i[-1].m128i_i32[3] = v90;
  memset(i, 0, 4LL * v90);
  if ( v194 )
  {
    v96 = v194[-1].m128i_u32[3];
    if ( v96 )
    {
      if ( v96 - 1 <= 2 )
      {
        v100 = 0;
LABEL_124:
        i->m128i_i32[v100] = v100;
        v101 = v100 + 1;
        if ( v100 + 1 < v96 )
        {
          v102 = v100 + 2;
          i->m128i_i32[v101] = v101;
          if ( v102 < v96 )
            i->m128i_i32[v102] = v102;
        }
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B6590);
        v97 = i;
        v98 = _mm_shuffle_epi32(_mm_cvtsi32_si128(4u), 0);
        do
        {
          v99 = si128;
          ++v97;
          si128 = _mm_add_epi32(si128, v98);
          v97[-1] = v99;
        }
        while ( v97 != &i[v96 >> 2] );
        v100 = v96 & 0xFFFFFFFC;
        if ( (v96 & 3) != 0 )
          goto LABEL_124;
      }
    }
  }
  v103 = *(_DWORD *)(v184 + 260);
  if ( v103 == 1 )
  {
    v166 = i;
    v167 = i[-1].m128i_u32[3];
    v168 = v167 - 1;
    v167 >>= 1;
    v169 = v168 - v167;
    if ( v167 )
    {
      do
      {
        v170 = v168;
        v171 = v166->m128i_i32[0];
        --v168;
        v166 = (__m128i *)((char *)v166 + 4);
        v172 = &i->m128i_i32[v170];
        v166[-1].m128i_i32[3] = *v172;
        *v172 = v171;
      }
      while ( v169 != v168 );
    }
  }
  else if ( v103 == 2 )
  {
    v158 = i[-1].m128i_i32[3];
    v159 = v158 - 1;
    if ( v158 - 1 > 0 )
    {
      v160 = v159;
      v161 = *(_DWORD *)(v184 + 256);
      do
      {
        v161 = 214013 * v161 + 2531011;
        v162 = i->m128i_i32[v160];
        v163 = &i->m128i_i32[(HIWORD(v161) & 0x7FFF) % ((int)v160 + 1)];
        v164 = *v163;
        i->m128i_i32[v160--] = *v163;
        *v163 = v162;
      }
      while ( (int)v160 > 0 );
      *(_DWORD *)(v184 + 256) = v161;
      i->m128i_i32[v159 - (__int64)(v158 - 2)] = v164;
      *v163 = v162;
    }
  }
  v104 = v196;
  if ( !v196 || (v105 = *((unsigned int *)v196 - 1), !(_DWORD)v105) )
  {
LABEL_183:
    sub_186B220(&i[-1].m128i_u64[1]);
    goto LABEL_184;
  }
LABEL_131:
  v106 = i;
  v107 = &i->m128i_i32[v105];
  while ( 2 )
  {
    v108 = v106->m128i_i32[0];
    v201 = 0;
    v202 = *(_QWORD *)(v184 + 152);
    v109 = v183[v108];
    v110 = &v104[2 * v108];
    v111 = v110[1];
    v112 = *v110;
    if ( v111 )
      v113 = *(unsigned int *)(v111 - 4);
    else
      v113 = 0;
    v114 = sub_15EC1C0(*v110, v113);
    v115 = v114;
    if ( v114 )
      ++*(_DWORD *)(v114 + 8);
    v116 = v201;
    v201 = v115;
    if ( v116 )
    {
      v86 = (*(_DWORD *)(v116 + 8))-- == 1;
      if ( v86 )
      {
        sub_15D7BC0(v112, v116);
        v115 = v201;
      }
    }
    sub_43D1D0(v184 + 176, v115, v108 + 1, 0, &v201, 1);
    v117 = v191;
    v118 = (__int64 *)(v109 + 136);
    v119 = *(unsigned __int16 *)(v191 + 72);
    v120 = *(_WORD *)(v191 + 74);
    v121 = (v119 == 0) + *(_WORD *)(v191 + 72) - 1;
    v86 = v119 == 0xFFFF;
    v122 = -1;
    if ( !v86 )
      v122 = v121;
    v123 = *(_QWORD *)(*(_QWORD *)(v109 + 136) + 8LL);
    v207 = nullptr;
    v206 = (__int64 *)v123;
    v124 = sub_405720((__int64)v118, v191, v122, v120, v201, (__int64)&v206);
    v125 = v207;
    v126 = v124;
    if ( v207 )
    {
      v127 = (unsigned __int64)&v207[*((unsigned int *)v207 - 1)];
      if ( (unsigned __int64)v207 >= v127 )
        goto LABEL_149;
      do
      {
        while ( 1 )
        {
          v117 = *v125;
          if ( *v125 )
          {
            v118 = v206;
            v86 = (*(_DWORD *)(v117 + 8))-- == 1;
            if ( v86 )
              break;
          }
          if ( (unsigned __int64)++v125 >= v127 )
            goto LABEL_148;
        }
        sub_15D7BC0(v118, v117);
        ++v125;
      }
      while ( (unsigned __int64)v125 < v127 );
LABEL_148:
      v125 = v207;
      if ( v207 )
      {
LABEL_149:
        v118 = v125 - 1;
        sub_186B220(v125 - 1);
      }
    }
    if ( v126 )
      ++*(_DWORD *)v126;
    v128 = *(_DWORD *)(v187 + 8);
    v129 = *(_DWORD *)(v187 + 12);
    if ( v128 >= v129 )
    {
      v138 = 2 * v129;
      v130 = sub_186B270(8 * v138);
      v128 = *(_DWORD *)(v187 + 8);
      v118 = *(__int64 **)v187;
      if ( v128 )
      {
        if ( v128 - 1 <= 2 || (__int64 *)v130 == v118 + 1 )
        {
          for ( j = 0; j != v128; ++j )
          {
            v117 = v118[j];
            *(_QWORD *)(v130 + j * 8) = v117;
          }
        }
        else
        {
          v139 = 0;
          v117 = 16LL * (v128 >> 1);
          do
          {
            si128 = _mm_loadu_si128((const __m128i *)&v118[v139 / 8]);
            *(__m128i *)(v130 + v139) = si128;
            v139 += 16LL;
          }
          while ( v117 != v139 );
          if ( (v128 & 1) != 0 )
          {
            v140 = v128 & 0xFFFFFFFE;
            v117 = v118[v140];
            *(_QWORD *)(v130 + 8 * v140) = v117;
          }
        }
      }
      if ( v118 != (__int64 *)(v187 + 16) && v118 )
      {
        v179 = v130;
        sub_186B220(v118);
        v130 = v179;
        v128 = *(_DWORD *)(v187 + 8);
      }
      v141 = v187;
      *(_QWORD *)v187 = v130;
      *(_DWORD *)(v141 + 12) = v138;
    }
    else
    {
      v130 = *(_QWORD *)v187;
    }
    *(_QWORD *)(v130 + 8LL * v128) = v126;
    *(_DWORD *)(v187 + 8) = v128 + 1;
    if ( (unsigned int)sub_180B130(v118) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)si128.m128i_i64) )
      {
        sub_186A4C0(*(double *)si128.m128i_i64);
        sub_180B150(v118, v117);
        std::__ostream_insert<char,std::char_traits<char>>();
        v131 = *(_QWORD *)(*(_QWORD *)(v126 + 16) + 24LL);
        v132 = *(_QWORD *)(v131 + 16);
        if ( (v132 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v132 )
            strlen(*(const char **)(v131 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v133 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v134 = **(unsigned int **)(v126 + 24);
        std::ostream::_M_insert<unsigned long>();
        v135 = (std::ostream *)sub_180B150(v133, v134);
        std::ostream::flush(v135);
        sub_186A500(v135, v134);
      }
      else
      {
        sub_180B150(v118, v117);
        std::__ostream_insert<char,std::char_traits<char>>();
        v142 = *(_QWORD *)(*(_QWORD *)(v126 + 16) + 24LL);
        v143 = *(_QWORD *)(v142 + 16);
        if ( (v143 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v143 )
            strlen(*(const char **)(v142 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v144 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v145 = **(unsigned int **)(v126 + 24);
        std::ostream::_M_insert<unsigned long>();
        v146 = (std::ostream *)sub_180B150(v144, v145);
        std::ostream::flush(v146);
      }
    }
    v136 = v201;
    if ( !v201 || (v137 = v202, v86 = *(_DWORD *)(v201 + 8) == 1, --*(_DWORD *)(v201 + 8), !v86) )
    {
      v106 = (__m128i *)((char *)v106 + 4);
      if ( v107 == (__int32 *)v106 )
        break;
      goto LABEL_164;
    }
    sub_15D7BC0(v137, v136);
    v106 = (__m128i *)((char *)v106 + 4);
    if ( v107 != (__int32 *)v106 )
    {
LABEL_164:
      v104 = v196;
      continue;
    }
    break;
  }
  if ( i )
    goto LABEL_183;
LABEL_184:
  v104 = v196;
  if ( v196 )
  {
    v147 = *((_DWORD *)v196 - 1);
    if ( v147 )
    {
      v148 = &v196[2 * v147];
      do
      {
        v149 = (__int64 *)v104[1];
        if ( v149 )
        {
          v150 = &v149[*((unsigned int *)v149 - 1)];
          if ( v149 >= v150 )
            goto LABEL_195;
          do
          {
            while ( 1 )
            {
              v151 = *v149;
              if ( *v149 )
              {
                v152 = *v104;
                v86 = (*(_DWORD *)(v151 + 8))-- == 1;
                if ( v86 )
                  break;
              }
              if ( ++v149 >= v150 )
                goto LABEL_194;
            }
            sub_15D7BC0(v152, v151);
            ++v149;
          }
          while ( v149 < v150 );
LABEL_194:
          v149 = (__int64 *)v104[1];
          if ( v149 )
LABEL_195:
            sub_186B220(v149 - 1);
        }
        v104 += 2;
      }
      while ( v148 != v104 );
      v104 = v196;
    }
LABEL_198:
    sub_186B220(v104 - 1);
  }
LABEL_199:
  v153 = v198;
  if ( v198 )
  {
    v154 = (unsigned __int64)&v198[*((unsigned int *)v198 - 1)];
    if ( (unsigned __int64)v198 >= v154 )
      goto LABEL_207;
    do
    {
      while ( 1 )
      {
        v155 = *v153;
        if ( *v153 )
        {
          v86 = (*(_DWORD *)(v155 + 8))-- == 1;
          if ( v86 )
            break;
        }
        if ( (unsigned __int64)++v153 >= v154 )
          goto LABEL_206;
      }
      sub_15D7BC0(v197, v155);
      ++v153;
    }
    while ( (unsigned __int64)v153 < v154 );
LABEL_206:
    v153 = v198;
    if ( v198 )
LABEL_207:
      sub_186B220(v153 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
  if ( v183 )
    sub_186B220(v183 - 1);
  if ( v194 )
    sub_186B220(&v194[-1].m128i_u64[1]);
  return 1;
}

