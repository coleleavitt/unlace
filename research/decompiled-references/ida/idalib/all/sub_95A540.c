signed __int64 __fastcall sub_95A540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned int v10; // ecx
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128i *v16; // r13
  unsigned int *v17; // rax
  const __m128i *v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r10d
  __int64 v24; // rbx
  __int32 *v25; // rdx
  __int32 v26; // edi
  unsigned __int32 v27; // esi
  __int32 v28; // esi
  unsigned int v29; // edi
  __int32 v30; // eax
  __m128i *v31; // rax
  unsigned int v32; // r15d
  unsigned int v33; // r11d
  __int32 v34; // esi
  unsigned int v35; // r12d
  __int32 v36; // edi
  __int32 v37; // r8d
  __int32 v38; // edx
  unsigned int v39; // ebx
  unsigned int v40; // ecx
  __int32 *v41; // rax
  __int32 *v42; // rdx
  unsigned int v43; // r9d
  unsigned int v44; // r10d
  unsigned int v45; // r13d
  __m128i *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  __int32 *v50; // rax
  int v51; // r11d
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int8 *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ebx
  unsigned int v58; // r15d
  unsigned int v59; // r15d
  unsigned int *v60; // rax
  unsigned int v61; // r12d
  __int32 *v62; // r10
  int v63; // eax
  int v64; // r9d
  int v65; // r11d
  _DWORD *v66; // r10
  __m128i *v67; // r12
  unsigned int v68; // r15d
  __int32 v69; // r13d
  int v70; // r10d
  unsigned int v71; // eax
  const __m128i *v72; // r13
  unsigned int v73; // r14d
  unsigned int v74; // r10d
  int v75; // eax
  __int32 v76; // r10d
  __int64 v77; // r11
  int v78; // r9d
  int v79; // r9d
  __m128i *v80; // r14
  __int32 v81; // eax
  __int64 v82; // rdx
  unsigned int v83; // eax
  int v84; // edi
  __int32 v85; // esi
  unsigned int v86; // edx
  unsigned int v87; // eax
  unsigned int v88; // r10d
  __int32 *v90; // rcx
  unsigned __int32 v91; // edx
  unsigned int v92; // ebx
  int v93; // r10d
  unsigned int v94; // ecx
  unsigned int v95; // r14d
  unsigned int v96; // r15d
  unsigned int v97; // eax
  __int64 v98; // r9
  unsigned int v99; // eax
  unsigned int v100; // edx
  int v101; // edx
  __int32 *v102; // r9
  unsigned int *v103; // rdx
  unsigned int v104; // eax
  unsigned int v105; // r8d
  unsigned int v106; // esi
  unsigned int v107; // ecx
  unsigned int v108; // edi
  unsigned int v109; // eax
  unsigned int v110; // edx
  __int64 v111; // r13
  char *v112; // r13
  __int32 *v113; // rax
  unsigned int v114; // eax
  unsigned int v115; // eax
  unsigned int v116; // edx
  __m128i *v117; // rdx
  char *v118; // rsi
  const __m128i *v119; // rcx
  __m128i *v120; // rdx
  __m128i v121; // xmm2
  __int32 v122; // edx
  __m128i *v123; // rdx
  _DWORD *v124; // [rsp+0h] [rbp-1B8h]
  unsigned __int64 v125; // [rsp+8h] [rbp-1B0h]
  unsigned int i; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *v127; // [rsp+8h] [rbp-1B0h]
  unsigned int v128; // [rsp+8h] [rbp-1B0h]
  unsigned int v129; // [rsp+10h] [rbp-1A8h]
  unsigned int v130; // [rsp+10h] [rbp-1A8h]
  __int64 v131; // [rsp+10h] [rbp-1A8h]
  __m128i *v132; // [rsp+18h] [rbp-1A0h]
  int v133; // [rsp+18h] [rbp-1A0h]
  unsigned int v134; // [rsp+18h] [rbp-1A0h]
  const __m128i *v135; // [rsp+20h] [rbp-198h]
  int v136; // [rsp+20h] [rbp-198h]
  unsigned int *v137; // [rsp+28h] [rbp-190h]
  unsigned int v138; // [rsp+30h] [rbp-188h]
  unsigned int v139; // [rsp+30h] [rbp-188h]
  unsigned __int8 *v140; // [rsp+38h] [rbp-180h]
  unsigned int v141; // [rsp+40h] [rbp-178h]
  int v142; // [rsp+44h] [rbp-174h]
  __int32 *v143; // [rsp+48h] [rbp-170h]
  unsigned __int8 *v144; // [rsp+50h] [rbp-168h]
  unsigned __int8 *v145; // [rsp+58h] [rbp-160h]
  __int64 (__fastcall *v146)(unsigned int *, __int64, int *, unsigned __int8 *, unsigned __int8 *, __m128i *, bool); // [rsp+60h] [rbp-158h]
  __int8 *v147; // [rsp+68h] [rbp-150h]
  __m128i *v149; // [rsp+80h] [rbp-138h]
  unsigned int v151; // [rsp+90h] [rbp-128h]
  unsigned int v152; // [rsp+94h] [rbp-124h]
  __int32 *v154; // [rsp+A8h] [rbp-110h]
  int v155; // [rsp+B8h] [rbp-100h] BYREF
  unsigned int v156; // [rsp+BCh] [rbp-FCh] BYREF
  __m128i v157; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i v158; // [rsp+D0h] [rbp-E8h]
  __int64 v159; // [rsp+E0h] [rbp-D8h]
  __int64 v160; // [rsp+E8h] [rbp-D0h]
  int v161; // [rsp+F0h] [rbp-C8h]
  unsigned __int64 v162; // [rsp+104h] [rbp-B4h]
  __int32 v163; // [rsp+10Ch] [rbp-ACh]
  __m128i v164; // [rsp+110h] [rbp-A8h] BYREF
  __int64 (__fastcall *v165)(int, int, int, int, int, int, int, int); // [rsp+120h] [rbp-98h]
  __int64 (__fastcall *v166)(int, int, int, int, int, int, int, int); // [rsp+128h] [rbp-90h]
  __int64 (__fastcall *v167)(int, int, int, int, int, int, int, int); // [rsp+130h] [rbp-88h]
  __int64 (__fastcall *v168)(int, int, int, int, int, int, int, int); // [rsp+138h] [rbp-80h]
  __int64 (__fastcall *v169)(int, int, int, int, int, int, int, int); // [rsp+140h] [rbp-78h]
  __int64 (__fastcall *v170)(int, int, int, int, int, int, int, int); // [rsp+148h] [rbp-70h]
  __int64 (__fastcall *v171)(int, int, int, int, int, int, int, int); // [rsp+150h] [rbp-68h]
  __int64 (__fastcall *v172)(int, int, int, int, int, int, int, int); // [rsp+158h] [rbp-60h]
  __int64 (__fastcall *v173)(int, int, int, int, int, int, int, int); // [rsp+160h] [rbp-58h]
  __int64 (__fastcall *v174)(int, int, int, int, int, int, int, int); // [rsp+168h] [rbp-50h]
  unsigned __int64 v175; // [rsp+178h] [rbp-40h]

  v8 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  v175 = __readfsqword(0x28u);
  v124 = (_DWORD *)(a1 + 144);
  v9 = &a4[a5];
  v10 = *(_DWORD *)(a1 + 272);
  v145 = v9;
  v11 = *(_DWORD *)(a1 + 276) <= 0xFFFu;
  v144 = v9 - 8;
  v164.m128i_i64[0] = (__int64)sub_95E530;
  v164.m128i_i64[1] = (__int64)sub_95D0F0;
  v165 = sub_95DE70;
  v166 = sub_95D7B0;
  v167 = sub_961760;
  v168 = sub_95FB40;
  v169 = sub_95ED30;
  v170 = sub_960950;
  v171 = sub_965600;
  v172 = sub_963750;
  v173 = sub_9646A0;
  v174 = sub_9627F0;
  v12 = 4095;
  if ( v11 )
    v12 = *(_DWORD *)(a1 + 276);
  v152 = v12;
  if ( v10 <= 2 )
  {
    v141 = 4;
    v146 = (__int64 (__fastcall *)(unsigned int *, __int64, int *, unsigned __int8 *, unsigned __int8 *, __m128i *, bool))v164.m128i_i64[4 * a6];
  }
  else
  {
    v13 = 6;
    if ( v10 <= 6 )
      v13 = v10;
    v146 = (__int64 (__fastcall *)(unsigned int *, __int64, int *, unsigned __int8 *, unsigned __int8 *, __m128i *, bool))v164.m128i_i64[4 * a6 + (unsigned int)(v13 - 3)];
    v14 = 4;
    if ( v10 == 3 )
      v14 = 3;
    v141 = v14;
  }
  v15 = *(_DWORD *)(a1 + 44);
  v16 = *(__m128i **)(a1 + 184);
  v165 = nullptr;
  v164 = 0;
  v155 = v15;
  v17 = *(unsigned int **)(a1 + 176);
  LODWORD(v166) = 0;
  v137 = v17;
  v18 = *(const __m128i **)(a1 + 288);
  if ( v18 )
  {
    v157 = _mm_loadu_si128(v18);
    v158 = _mm_loadu_si128(v18 + 1);
    v159 = v18[2].m128i_i64[0];
  }
  else
  {
    v157 = 0u;
    v158 = 0u;
    v159 = 0;
  }
  v160 = 0;
  v161 = 0;
  sub_959B00((__int64)&v157, 0, a5);
  sub_959E80(a1 + 144, a4, a5, 0);
  v140 = &a4[a4 == v8];
  if ( v144 <= v140 )
  {
    v149 = (__m128i *)a4;
    return v145 - (unsigned __int8 *)v149;
  }
  v149 = (__m128i *)a4;
  v154 = &v16->m128i_i32[7 * v141];
  do
  {
    while ( 1 )
    {
      v19 = (_DWORD)v140 - (_DWORD)v149;
      v20 = ((__int64 (__fastcall *)(unsigned int *, __int64, int *, unsigned __int8 *, unsigned __int8 *, __int64, bool, _QWORD))v146)(
              v137,
              a1,
              &v155,
              v140,
              v145,
              a3,
              (_DWORD)v140 == (_DWORD)v149,
              v141);
      v156 = v20;
      if ( v158.m128i_i64[1] && v158.m128i_i64[1] > (unsigned __int64)v157.m128i_i64[1] )
      {
        sub_95A420(&v157, (__int64)v137, &v156, (_DWORD)v140 - (_DWORD)a4, (_DWORD)v145 - (_DWORD)v140);
        v20 = v156;
      }
      if ( !v20 )
      {
        ++v140;
        goto LABEL_14;
      }
      v16->m128i_i32[2] = 0;
      v16->m128i_i32[3] = v19;
      v16->m128i_i32[0] = sub_959CD0(v19, (__int64)v124, 0);
      v16[1].m128i_i64[0] = *(_QWORD *)a3;
      v16[1].m128i_i32[2] = *(_DWORD *)(a3 + 8);
      v21 = &v137[2 * v156 - 2];
      if ( v21[1] > v152 )
      {
        v22 = *(_QWORD *)v21;
        v23 = 0;
        v24 = 0;
        v164.m128i_i32[3] = 0;
        *(__int64 *)((char *)v164.m128i_i64 + 4) = v22;
        goto LABEL_21;
      }
      v55 = &v16[1].m128i_i8[12];
      v56 = v19 + 1;
      v57 = v141 + v19;
      v147 = &v16[1].m128i_i8[12];
      do
      {
        *((_DWORD *)v55 + 3) = v56++;
        v55 += 28;
        *((_DWORD *)v55 - 7) = 0x40000000;
        *((_DWORD *)v55 - 5) = 0;
      }
      while ( v57 != v56 );
      v58 = v141 - 1;
      if ( !v156 )
        break;
      v138 = 0;
      v59 = v141;
      do
      {
        v60 = &v137[2 * v138];
        v61 = *v60;
        for ( i = v60[1]; i >= v59; *v66 = v63 + v64 + v65 )
        {
          v62 = &v16->m128i_i32[7 * v59];
          v62[2] = v59++;
          v62[1] = v61;
          v62[3] = 0;
          v63 = sub_959CD0(0, (__int64)v124, 0);
        }
        ++v138;
      }
      while ( v138 < v156 );
      v16->m128i_i32[7 * v59] = 0x40000000;
      v58 = v59 - 1;
      if ( v58 )
        goto LABEL_51;
      v80 = v16;
      v88 = 0;
      v77 = 0;
LABEL_68:
      v164 = _mm_loadu_si128(v80);
      v165 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))v80[1].m128i_i64[0];
      LODWORD(v166) = v80[1].m128i_i32[2];
      if ( !v164.m128i_i32[2] )
        goto LABEL_69;
      v122 = v164.m128i_i32[3];
      LODWORD(v24) = v88 - v164.m128i_i32[2];
      v23 = v88 - v164.m128i_i32[2];
      if ( !v164.m128i_i32[3] )
      {
        v24 = (unsigned int)v24;
        goto LABEL_21;
      }
      *(_QWORD *)a3 = v165;
      *(_DWORD *)(a3 + 8) = (_DWORD)v166;
      v23 -= v122;
      v129 = v23 + 2;
      v31 = (__m128i *)((char *)v16 + 28 * v23 + 56);
      v31->m128i_i32[3] = v122;
      v31->m128i_i32[2] = 0;
      v123 = (__m128i *)((char *)v16 + 28 * v23 + 28);
      *v123 = _mm_load_si128(&v164);
      v123[1].m128i_i64[0] = (__int64)v165;
      v123[1].m128i_i32[2] = (int)v166;
      v25 = &v16->m128i_i32[7 * v23];
LABEL_25:
      *v31 = _mm_load_si128(&v164);
      v31[1].m128i_i64[0] = (__int64)v165;
      v31[1].m128i_i32[2] = (int)v166;
      v32 = v25[2];
      v33 = v25[3];
      v34 = *v25;
      v35 = v25[1];
      v36 = v25[4];
      v37 = v25[5];
      v38 = v25[6];
      v31->m128i_i32[3] = v33;
      if ( !v32 )
      {
        v32 = v31->m128i_u32[2];
        v35 = v31->m128i_u32[1];
        v39 = v129;
LABEL_30:
        v132 = v16;
        v45 = v35;
        v46 = v149;
        v135 = (const __m128i *)(v145 - 32);
        while ( 1 )
        {
          v49 = (unsigned __int64)v46->m128i_u64 + v33;
          v125 = v33;
          if ( !v32 )
            goto LABEL_36;
          sub_959DB0((__int64)v124, v33, (unsigned __int8 *)v46, v45, v32);
          v52 = v32;
          v53 = v125;
          if ( (unsigned __int64)v135 < v49 )
            break;
          *(__m128i *)*(_QWORD *)(a2 + 24) = _mm_loadu_si128(v46);
          if ( v125 > 0x10 )
          {
            v117 = *(__m128i **)(a2 + 24);
            v117[1] = _mm_loadu_si128(v46 + 1);
            if ( (__int64)(v125 - 16) > 16 )
            {
              v118 = &v117->m128i_i8[v125];
              v119 = v46 + 2;
              v120 = v117 + 2;
              do
              {
                v121 = _mm_loadu_si128(v119);
                v120 += 2;
                v119 += 2;
                v120[-2] = v121;
                v120[-1] = _mm_loadu_si128(v119 - 1);
              }
              while ( v118 > (char *)v120 );
            }
            goto LABEL_41;
          }
          *(_QWORD *)(a2 + 24) += v125;
          v47 = *(_QWORD *)(a2 + 8);
LABEL_33:
          *(_WORD *)(v47 + 4) = v51;
          **(_DWORD **)(a2 + 8) = v45;
          v48 = *(_QWORD *)(a2 + 8);
          if ( (unsigned __int64)(v52 - 3) > 0xFFFF )
          {
            *(_DWORD *)(a2 + 72) = 2;
            *(_DWORD *)(a2 + 76) = (v48 - *(_QWORD *)a2) >> 3;
          }
          *(_WORD *)(v48 + 6) = v52 - 3;
          *(_QWORD *)(a2 + 8) += 8LL;
          v49 = (unsigned __int64)v46->m128i_u64 + v51 + v32;
          v46 = (__m128i *)v49;
LABEL_36:
          if ( ++v39 > v129 )
          {
            v16 = v132;
            v140 = (unsigned __int8 *)v49;
            v149 = v46;
            goto LABEL_106;
          }
          v50 = &v132->m128i_i32[7 * v39];
          v33 = v50[3];
          v32 = v50[2];
          v45 = v50[1];
        }
        sub_9599A0(*(__m128i **)(a2 + 24), v46, v49, v135);
        v53 = v125;
LABEL_41:
        *(_QWORD *)(a2 + 24) += v53;
        v47 = *(_QWORD *)(a2 + 8);
        if ( v53 > 0xFFFF )
        {
          v54 = v47 - *(_QWORD *)a2;
          *(_DWORD *)(a2 + 72) = 1;
          *(_DWORD *)(a2 + 76) = v54 >> 3;
        }
        goto LABEL_33;
      }
      v39 = v129;
      v40 = v23;
      while ( 1 )
      {
        v41 = &v16->m128i_i32[7 * --v39];
        v41[3] = v33;
        v40 -= v32 + v33;
        *v41 = v34;
        v41[6] = v38;
        v41[1] = v35;
        v41[2] = v32;
        v42 = &v16->m128i_i32[7 * v40];
        v41[4] = v36;
        v41[5] = v37;
        v43 = v42[2];
        v33 = v42[3];
        v34 = *v42;
        v44 = v42[1];
        v36 = v42[4];
        v37 = v42[5];
        v38 = v42[6];
        v41[3] = v33;
        if ( !v43 )
          break;
        v32 = v43;
        v35 = v44;
      }
      if ( v39 <= v129 )
        goto LABEL_30;
LABEL_106:
      sub_959C00(v124, 0);
LABEL_14:
      if ( v144 <= v140 )
        return v145 - (unsigned __int8 *)v149;
    }
    *v154 = 0x40000000;
LABEL_51:
    v130 = v58;
    v67 = v16;
    v68 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = v68;
        v127 = &v140[v68];
        v72 = (__m128i *)((char *)v67 + 28 * v68 - 28);
        v73 = v72->m128i_u32[3];
        sub_95A4E0(v127 - 1, (__int64)v124, 0);
        sub_959CD0(v74, (__int64)v124, 0);
        v75 = sub_959CD0(v73, (__int64)v124, 0);
        v79 = v72->m128i_i32[0] + v78 - v75;
        v80 = (__m128i *)((char *)v67 + 28 * v68);
        if ( v79 <= v80->m128i_i32[0] )
          break;
        if ( !v80->m128i_i32[3] )
          goto LABEL_63;
LABEL_53:
        if ( v144 >= v127 )
          goto LABEL_54;
LABEL_66:
        if ( v130 < ++v68 )
        {
LABEL_67:
          v77 = v130;
          v16 = v67;
          v88 = v130;
          v80 = (__m128i *)((char *)v67 + 28 * v130);
          goto LABEL_68;
        }
      }
      *v80 = _mm_loadu_si128(v72);
      v80[1].m128i_i64[0] = v72[1].m128i_i64[0];
      v81 = v72[1].m128i_i32[2];
      v80->m128i_i32[3] = v76;
      v80[1].m128i_i32[2] = v81;
      v80->m128i_i32[0] = v79;
      if ( v76 )
        goto LABEL_53;
LABEL_63:
      v82 = (__int64)v67->m128i_i64 + 28 * (v68 - v80->m128i_i32[2]);
      v83 = v80->m128i_u32[1];
      v84 = *(_DWORD *)(v82 + 12);
      v162 = *(_QWORD *)(v82 + 16);
      v163 = *(_DWORD *)(v82 + 24);
      if ( v83 <= 3 )
      {
        v116 = v83 + (v84 == 0) - 1;
        if ( v83 + (v84 == 0) == 1 )
        {
          v85 = v163;
          v86 = HIDWORD(v162);
          v87 = v162;
        }
        else
        {
          v87 = v162 - 1;
          if ( v116 == 3 || (v85 = v163, v87 = *((_DWORD *)&v162 + v116), v116 > 1) )
          {
            v85 = HIDWORD(v162);
            v86 = v162;
          }
          else
          {
            v86 = v162;
          }
        }
      }
      else
      {
        v85 = HIDWORD(v162);
        v86 = v162;
        v87 = v83 - 3;
      }
      v162 = __PAIR64__(v86, v87);
      v163 = v85;
      v80[1].m128i_i64[0] = __PAIR64__(v86, v87);
      v80[1].m128i_i32[2] = v163;
      if ( v144 < v127 )
        goto LABEL_66;
LABEL_54:
      if ( v130 == v68 )
      {
        v16 = v67;
        v88 = v68;
        goto LABEL_68;
      }
      v69 = v80->m128i_i32[0];
      v139 = v68 + 1;
      if ( v67[1].m128i_i32[7 * v68 + 3] > v80->m128i_i32[0] + 128 )
      {
        v133 = sub_959CD0(0, (__int64)v124, 0);
        v71 = v146(v137, a1, &v155, v127, v145, v80 + 1, v70 == 0);
        v156 = v71;
        if ( v158.m128i_i64[1] && v158.m128i_i64[1] > (unsigned __int64)v157.m128i_i64[1] )
        {
          sub_95A420(&v157, (__int64)v137, &v156, (_DWORD)v127 - (_DWORD)a4, (_DWORD)v145 - (_DWORD)v127);
          v71 = v156;
        }
        if ( v71 )
          break;
      }
LABEL_60:
      v68 = v139;
      if ( v130 < v139 )
        goto LABEL_67;
    }
    v90 = (__int32 *)&v137[2 * v71 - 2];
    v91 = v90[1];
    v77 = v91 + v68;
    if ( v91 <= v152 && (unsigned int)v77 <= 0xFFF && v145 > &v140[v68 + (unsigned __int64)v91] )
    {
      v92 = *v137;
      v93 = 0;
      v94 = v137[1];
      v95 = v141;
      v136 = v133 + v69;
      v151 = v68;
      v96 = v130;
      while ( 1 )
      {
        if ( v95 <= v94 )
        {
          _BitScanReverse(&v104, v92);
          v104 ^= 0x1Fu;
          v105 = 31 - v104;
          v128 = (31 - v104) << 8;
          v131 = 4LL * (31 - v104);
          v142 = 78 - v104;
          v106 = v94 + v151;
          v107 = v94 - 3;
          v134 = ((_DWORD)&loc_80000C - v104) << 9;
          v108 = v107 + 3;
          if ( *(_DWORD *)(a1 + 224) != 1 )
          {
LABEL_85:
            _BitScanReverse(&v109, *(_DWORD *)(*(_QWORD *)(a1 + 168) + v131) + 1);
            v110 = *(_DWORD *)(a1 + 220) + v128 - ((31 - (v109 ^ 0x1F)) << 8);
            if ( v105 > 0x13 )
              v110 += v134;
            if ( v107 > 0x7F )
            {
              _BitScanReverse(&v97, v107);
              v98 = 67 - (v97 ^ 0x1F);
            }
            else
            {
              v98 = byte_23D83E0[v107];
            }
            _BitScanReverse(&v99, *(_DWORD *)(*(_QWORD *)(a1 + 160) + 4 * v98) + 1);
            v100 = v110 + *(_DWORD *)(a1 + 216) + 51 + (byte_23D84A0[v98] << 8) - ((31 - (v99 ^ 0x1F)) << 8);
            goto LABEL_77;
          }
          while ( 1 )
          {
            _BitScanReverse(&v115, v107 + 1);
            v100 = (v142 - (v115 ^ 0x1F)) << 8;
LABEL_77:
            v101 = v136 + v100;
            v102 = &v67->m128i_i32[7 * v106];
            if ( v96 < v106 )
            {
              v111 = v96 + 1;
              v143 = &v67->m128i_i32[7 * v111];
              v112 = &v147[28 * (v106 - v96) - 28 + 28 * v111];
              v113 = v143;
              do
              {
                *v113 = 0x40000000;
                v113 += 7;
                *(v113 - 4) = 1;
              }
              while ( v112 != (char *)v113 );
              v96 = v106;
            }
            else if ( v101 >= *v102 )
            {
              break;
            }
            v114 = v107 - 1;
            v102[2] = v108;
            --v106;
            v102[1] = v92;
            v102[3] = 0;
            *v102 = v101;
            if ( v95 > v107 + 2 )
              break;
            --v107;
            v108 = v114 + 3;
            if ( *(_DWORD *)(a1 + 224) != 1 )
              goto LABEL_85;
          }
        }
        if ( v93 + 1 >= v156 )
          break;
        v95 = v141;
        v103 = &v137[2 * (v93 + 1)];
        v92 = *v103;
        v94 = v103[1];
        if ( v93 != -1 )
          v95 = v137[2 * v93 + 1] + 1;
        ++v93;
      }
      v130 = v96;
      v67[1].m128i_i32[7 * v96 + 3] = 0x40000000;
      goto LABEL_60;
    }
    v164.m128i_i64[1] = v91;
    v16 = v67;
    v23 = v68;
    v164.m128i_i32[1] = *v90;
    if ( v91 )
    {
LABEL_21:
      v25 = &v16->m128i_i32[7 * v24];
      v26 = v25[3];
      v162 = *((_QWORD *)v25 + 2);
      v163 = v25[6];
      if ( v164.m128i_i32[1] > 3u )
      {
        v28 = HIDWORD(v162);
        v29 = v162;
        v30 = v164.m128i_i32[1] - 3;
      }
      else
      {
        v27 = v164.m128i_i32[1] + (v26 == 0) - 1;
        if ( v164.m128i_i32[1] + (v26 == 0) == 1 )
        {
          v28 = v163;
          v29 = HIDWORD(v162);
          v30 = v162;
        }
        else
        {
          v30 = v162 - 1;
          if ( v164.m128i_i32[1] + (v26 == 0) == 4 || (v30 = *((_DWORD *)&v162 + v27), v27 > 1) )
            v28 = HIDWORD(v162);
          else
            v28 = v163;
          v29 = v162;
        }
      }
      v162 = __PAIR64__(v29, v30);
      v163 = v28;
      *(_QWORD *)a3 = __PAIR64__(v29, v30);
      v129 = v23 + 2;
      *(_DWORD *)(a3 + 8) = v163;
      v31 = (__m128i *)((char *)v16 + 28 * v23 + 56);
      goto LABEL_25;
    }
LABEL_69:
    v140 += v77;
  }
  while ( v144 > v140 );
  return v145 - (unsigned __int8 *)v149;
}
