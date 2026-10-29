__int64 __fastcall sub_7DEE60(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // dl
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __m128i *v11; // rbp
  __m128i *v12; // rax
  int v13; // r10d
  __int64 v14; // r15
  __int32 v15; // r14d
  unsigned __int64 v16; // r12
  unsigned int v17; // edx
  __int64 v18; // rbp
  bool v19; // al
  int v20; // edx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  int v23; // r10d
  int v24; // ecx
  unsigned int v25; // r10d
  int v26; // r11d
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rbp
  int v31; // esi
  int v32; // esi
  __m128i v33; // xmm0
  __int64 v34; // rdx
  unsigned __int64 *v35; // rbp
  __m128i v36; // xmm0
  __int64 v37; // r15
  int v38; // esi
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  int i; // r11d
  int v43; // eax
  unsigned int v44; // r10d
  __int64 *v45; // rsi
  __int8 *v46; // rbp
  int v47; // eax
  __int64 v48; // r15
  int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  bool v53; // al
  unsigned int v54; // r10d
  bool v55; // al
  unsigned __int64 v56; // r10
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rbp
  const __m128i *v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rdi
  unsigned __int64 v63; // r10
  const __m128i *v64; // rbp
  int v65; // r15d
  bool v66; // al
  int v67; // ecx
  int v68; // edx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned int v71; // edx
  int k; // r8d
  unsigned __int64 v73; // r9
  int v74; // esi
  _DWORD *v75; // rdi
  int v76; // r15d
  bool v77; // al
  int v78; // edx
  int v79; // eax
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rcx
  int v82; // r11d
  __m128i *v83; // r8
  unsigned int j; // ecx
  __m128i *v85; // r9
  __int32 v86; // eax
  char v87; // dl
  unsigned int v88; // ecx
  unsigned int v89; // esi
  int v90; // eax
  __int64 v91; // r15
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rdi
  __m128i *v95; // rax
  __int64 v96; // r15
  __int32 v97; // eax
  unsigned int v98; // edx
  unsigned int v99; // edx
  int v100; // eax
  int v101; // ecx
  int v102; // eax
  void *v103; // rdi
  __int64 v104; // rax
  int v105; // eax
  unsigned int v106; // ecx
  __int32 v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // eax
  unsigned __int64 v111; // rsi
  __int8 *v112; // rbp
  __int64 v113; // rax
  bool v114; // al
  __int64 v115; // rax
  unsigned int v116; // edx
  bool v117; // al
  bool v118; // al
  int v119; // esi
  __int64 v120; // rdx
  __int64 v121; // rax
  int v122; // [rsp+Ch] [rbp-ECh]
  int v125; // [rsp+20h] [rbp-D8h]
  int v126; // [rsp+20h] [rbp-D8h]
  int v127; // [rsp+20h] [rbp-D8h]
  __int64 v128; // [rsp+20h] [rbp-D8h]
  __int64 v129; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v130; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v131; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v132; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v133; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v134; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v135; // [rsp+20h] [rbp-D8h]
  __int64 v136; // [rsp+28h] [rbp-D0h]
  _DWORD *v137; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v138; // [rsp+28h] [rbp-D0h]
  unsigned int v139; // [rsp+30h] [rbp-C8h]
  unsigned int v140; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v141; // [rsp+30h] [rbp-C8h]
  int v142; // [rsp+30h] [rbp-C8h]
  int v143; // [rsp+30h] [rbp-C8h]
  unsigned int v144; // [rsp+30h] [rbp-C8h]
  __int64 v145; // [rsp+38h] [rbp-C0h]
  int v146; // [rsp+38h] [rbp-C0h]
  int v147; // [rsp+38h] [rbp-C0h]
  unsigned int v148; // [rsp+38h] [rbp-C0h]
  int v149; // [rsp+38h] [rbp-C0h]
  int v150; // [rsp+40h] [rbp-B8h]
  __int64 v151; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v152; // [rsp+40h] [rbp-B8h]
  __m128i *v153; // [rsp+40h] [rbp-B8h]
  __int64 v154; // [rsp+48h] [rbp-B0h]
  __int64 v155; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v156; // [rsp+48h] [rbp-B0h]
  __m128i *v157; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v158; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v159; // [rsp+60h] [rbp-98h] BYREF
  __m128i v160; // [rsp+70h] [rbp-88h] BYREF
  __int64 v161; // [rsp+80h] [rbp-78h]
  __m128i v162; // [rsp+90h] [rbp-68h] BYREF
  __m128i v163; // [rsp+A0h] [rbp-58h]
  __int64 v164; // [rsp+B0h] [rbp-48h]

  v3 = *(_BYTE *)(a2 + 32);
  v122 = v3 & 0x3F;
  if ( (v3 & 0x3F) != 0 )
  {
    v5 = 0;
    do
    {
      v13 = *((_DWORD *)a1 + 4);
      v159.m128i_i32[0] = 1043;
      v14 = *a1;
      v15 = *(_DWORD *)(a3 + 4 * v5 + 12);
      v16 = *(_QWORD *)(a2 + 8 * v5 + 48);
      v160.m128i_i32[0] = v15;
      v159.m128i_i64[1] = v16;
      if ( !v13 )
      {
        v6 = a1[1];
        v7 = 0;
        v8 = 0;
        goto LABEL_4;
      }
      v17 = *(_DWORD *)(v14 + 40);
      if ( !v17 )
      {
        v162.m128i_i64[0] = 0;
        v30 = (__int64 *)(v14 + 24);
        goto LABEL_28;
      }
      v125 = *(_DWORD *)(v14 + 40);
      v18 = *(_QWORD *)(v14 + 24);
      v162.m128i_i32[0] = 73;
      v136 = v160.m128i_i64[0];
      v19 = sub_7204C0(v162.m128i_i32, 1043);
      v20 = v125;
      if ( v19 )
      {
        v158 = v16;
        v162.m128i_i64[0] = v136;
        v47 = sub_7DB4D0(&v158, &v162);
        v20 = v125;
        v23 = v47;
      }
      else
      {
        v21 = 0x9DDFEA08EB382D69LL * (HIDWORD(v16) ^ (8LL * (unsigned int)v16 - 0xAE502812AA7333LL));
        v22 = 0x9DDFEA08EB382D69LL * (v21 ^ HIDWORD(v16) ^ (v21 >> 47));
        v23 = -348639895 * ((v22 >> 47) ^ v22);
      }
      v24 = v20 - 1;
      v25 = (v20 - 1) & v23;
      if ( v16 )
      {
        v26 = 1;
        v27 = 0;
        while ( 1 )
        {
          v28 = v18 + 48LL * v25;
          v29 = *(_DWORD *)v28;
          if ( *(_DWORD *)v28 != 1043 )
            goto LABEL_13;
          v154 = v18 + 48LL * v25;
          v150 = v26;
          v145 = v27;
          v139 = v25;
          v126 = v24;
          v162.m128i_i32[0] = 73;
          v53 = sub_7204C0(v162.m128i_i32, v159.m128i_i32[0]);
          v24 = v126;
          v25 = v139;
          v27 = v145;
          v26 = v150;
          v28 = v154;
          if ( v53 )
            break;
          v29 = *(_DWORD *)v154;
          if ( *(int *)v154 > 73 )
          {
            if ( v16 == *(_QWORD *)(v154 + 8) )
              goto LABEL_56;
            goto LABEL_49;
          }
          if ( !v29 )
            goto LABEL_14;
LABEL_52:
          v54 = v26 + v25;
          ++v26;
          v25 = v24 & v54;
        }
        if ( v16 == *(_QWORD *)(v154 + 8) )
        {
          if ( v136 == *(_QWORD *)(v154 + 16) )
            goto LABEL_56;
          v29 = *(_DWORD *)v154;
        }
        else
        {
          v29 = *(_DWORD *)v154;
        }
LABEL_13:
        if ( !v29 )
          goto LABEL_14;
LABEL_49:
        if ( v29 == 1045 && !v27 )
          v27 = v28;
        goto LABEL_52;
      }
      v27 = 0;
      for ( i = 1; ; ++i )
      {
        v28 = v18 + 48LL * v25;
        v43 = *(_DWORD *)v28;
        if ( *(_DWORD *)v28 != 1043 )
          goto LABEL_32;
        v155 = v18 + 48LL * v25;
        v151 = v27;
        v146 = i;
        v140 = v25;
        v127 = v24;
        v162.m128i_i32[0] = 73;
        v55 = sub_7204C0(v162.m128i_i32, v159.m128i_i32[0]);
        v24 = v127;
        v25 = v140;
        i = v146;
        v27 = v151;
        v28 = v155;
        if ( !v55 )
          break;
        if ( *(_QWORD *)(v155 + 8) )
        {
          v43 = *(_DWORD *)v155;
        }
        else
        {
          if ( *(_QWORD *)(v155 + 16) == v136 )
            goto LABEL_56;
          v43 = *(_DWORD *)v155;
        }
LABEL_32:
        if ( !v43 )
        {
LABEL_14:
          v30 = (__int64 *)(v14 + 24);
          if ( !v27 )
            v27 = v28;
          v17 = *(_DWORD *)(v14 + 40);
          v162.m128i_i64[0] = v27;
          v31 = *(_DWORD *)(v14 + 32) + 1;
          if ( 4 * v31 < 3 * v17 )
          {
            if ( v17 >> 3 >= v17 - (v31 + *(_DWORD *)(v14 + 36)) )
            {
              v32 = v17;
              goto LABEL_19;
            }
            goto LABEL_20;
          }
LABEL_28:
          v32 = 2 * v17;
LABEL_19:
          sub_7DDEA0((__int64)v30, v32);
          sub_7DCEC0(v30, (__int64)&v159, &v162);
          v27 = v162.m128i_i64[0];
          v31 = *(_DWORD *)(v14 + 32) + 1;
LABEL_20:
          *(_DWORD *)(v14 + 32) = v31;
          if ( *(_DWORD *)v27 )
            --*(_DWORD *)(v14 + 36);
          v33 = _mm_load_si128(&v159);
          v34 = v161;
          *(_QWORD *)(v27 + 40) = 0;
          v35 = (unsigned __int64 *)(v27 + 40);
          *(__m128i *)v27 = v33;
          v36 = _mm_load_si128(&v160);
          *(_QWORD *)(v27 + 32) = v34;
          *(__m128i *)(v27 + 16) = v36;
LABEL_23:
          v37 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
          v38 = *(_DWORD *)v37;
          v162.m128i_i32[0] = 77;
          if ( sub_7204C0(v162.m128i_i32, v38) && (v39 = *(_QWORD *)(v37 + 8)) != 0 )
          {
            v40 = v39 & 0xFFFFFFFFFFFFFFF9LL;
          }
          else
          {
            v48 = a1[1] + 40LL * *((unsigned int *)a1 + 4) - 40;
            v49 = *(_DWORD *)v48;
            v162.m128i_i32[0] = 176;
            if ( sub_7204C0(v162.m128i_i32, v49) && (v50 = *(_QWORD *)(v48 + 8)) != 0 )
            {
              v40 = v50 & 0xFFFFFFFFFFFFFFF9LL | 2;
            }
            else
            {
              v51 = operator new(0x28u);
              v52 = a1[1] + 40LL * *((unsigned int *)a1 + 4);
              *(__m128i *)v51 = _mm_loadu_si128((const __m128i *)(v52 - 40));
              *(__m128i *)(v51 + 16) = _mm_loadu_si128((const __m128i *)(v52 - 24));
              *(_QWORD *)(v51 + 32) = *(_QWORD *)(v52 - 8);
              v40 = v51 & 0xFFFFFFFFFFFFFFF9LL | 4;
            }
          }
          *v35 = v40;
          v8 = *((unsigned int *)a1 + 4);
          v6 = a1[1];
          v7 = 40 * v8;
          goto LABEL_4;
        }
LABEL_33:
        if ( v43 == 1045 && !v27 )
          v27 = v28;
        v44 = i + v25;
        v25 = v24 & v44;
      }
      v43 = *(_DWORD *)v155;
      if ( *(int *)v155 > 73 && *(_QWORD *)(v155 + 8) )
        goto LABEL_33;
LABEL_56:
      v56 = *(_QWORD *)(v28 + 40);
      v35 = (unsigned __int64 *)(v28 + 40);
      if ( v56 <= 7 )
        goto LABEL_23;
      v128 = v28;
      if ( (~(_BYTE)v56 & 6) != 0 )
      {
        v57 = operator new(0xB8u);
        v58 = v128;
        v59 = v57;
        v60 = (const __m128i *)(*(_QWORD *)(v128 + 40) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v128 + 40) & 6) != 0 )
        {
          if ( (*(_QWORD *)(v128 + 40) & 6LL) == 2 && v60 )
          {
            v97 = sub_720B10((_WORD *)(*(_QWORD *)(v128 + 40) & 0xFFFFFFFFFFFFFFF8LL));
            v162.m128i_i64[1] = (__int64)v60;
            v58 = v128;
            v162.m128i_i32[0] = v97;
          }
          else
          {
LABEL_60:
            v162 = _mm_loadu_si128(v60);
            v163 = _mm_loadu_si128(v60 + 1);
            v164 = v60[2].m128i_i64[0];
          }
        }
        else
        {
          if ( !v60 )
            goto LABEL_60;
          v107 = sub_720580(*(_QWORD *)(v128 + 40) & 0xFFFFFFFFFFFFFFF8LL);
          v162.m128i_i64[1] = (__int64)v60;
          v58 = v128;
          v162.m128i_i32[0] = v107;
        }
        v129 = v58;
        sub_7DD830(v59, &v162);
        v61 = v129;
        v62 = *(_QWORD *)(v129 + 40);
        if ( v62 )
        {
          if ( (*(_QWORD *)(v129 + 40) & 6LL) == 4 )
          {
            v103 = (void *)(v62 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v103 )
            {
              operator delete(v103, 0x28u);
              v61 = v129;
            }
          }
        }
        v56 = v59 | 6;
        *(_QWORD *)(v61 + 40) = v59 | 6;
      }
      v6 = a1[1];
      v63 = v56 & 0xFFFFFFFFFFFFFFF8LL;
      v64 = (const __m128i *)(v6 + 40LL * *((unsigned int *)a1 + 4) - 40);
      v7 = 40LL * *((unsigned int *)a1 + 4);
      if ( v64->m128i_i32[0] <= 73 || !v64->m128i_i64[1] )
        goto LABEL_98;
      if ( (*(_BYTE *)(v63 + 96) & 1) == 0 )
      {
        v96 = *(unsigned int *)(v63 + 112);
        v130 = *(_QWORD *)(v63 + 104);
        v137 = (_DWORD *)(v130 + 40 * v96);
        if ( (_DWORD)v96 )
        {
          v65 = v96 - 1;
          goto LABEL_68;
        }
LABEL_77:
        v64 = (const __m128i *)(v6 + v7 - 40);
        if ( v64->m128i_i32[0] > 73 && v64->m128i_i64[1] )
        {
          if ( (*(_BYTE *)(v63 + 96) & 1) != 0 )
          {
            v76 = 1;
            v138 = v63 + 104;
            goto LABEL_81;
          }
          v102 = *(_DWORD *)(v63 + 112);
          if ( v102 )
          {
            v76 = v102 - 1;
            v138 = *(_QWORD *)(v63 + 104);
LABEL_81:
            v162.m128i_i32[0] = 73;
            v131 = v63;
            v77 = sub_7204C0(v162.m128i_i32, v64->m128i_i32[0]);
            v78 = v64->m128i_i32[0];
            v63 = v131;
            if ( v77 )
            {
              v108 = v64->m128i_i64[1];
              v142 = v64->m128i_i32[0];
              v162.m128i_i64[0] = v64[1].m128i_i64[0];
              v158 = v108;
              v79 = sub_7DB4D0(&v158, &v162);
              v63 = v131;
              v78 = v142;
            }
            else if ( v78 == 5 )
            {
              v113 = v64->m128i_i64[1];
              v158 = v64[1].m128i_u64[0];
              v162.m128i_i64[0] = v113;
              v79 = sub_7DB530(&v162, &v158);
              v63 = v131;
              v78 = 5;
            }
            else
            {
              v79 = -1916529075;
              if ( v78 > 73 )
              {
                v80 = v64->m128i_u64[1];
                v81 = 0x9DDFEA08EB382D69LL
                    * ((0x9DDFEA08EB382D69LL * (HIDWORD(v80) ^ (8LL * (unsigned int)v80 - 0xAE502812AA7333LL)))
                     ^ HIDWORD(v80)
                     ^ ((0x9DDFEA08EB382D69LL * (HIDWORD(v80) ^ (8LL * (unsigned int)v80 - 0xAE502812AA7333LL))) >> 47));
                v79 = -348639895 * (v81 ^ (v81 >> 47));
              }
            }
            v82 = 1;
            v83 = nullptr;
            for ( j = v76 & v79; ; j = v76 & v106 )
            {
LABEL_86:
              v85 = (__m128i *)(v138 + 40LL * j);
              v86 = v85->m128i_i32[0];
              if ( !v78 )
                goto LABEL_100;
              if ( v78 != 1045 )
                break;
              if ( v86 == 1045 )
                goto LABEL_100;
              if ( !v86 )
              {
LABEL_90:
                v87 = *(_BYTE *)(v63 + 96);
                v88 = 6;
                v89 = 2;
                if ( !v83 )
                  v83 = v85;
                v162.m128i_i64[0] = (__int64)v83;
                v90 = (*(_DWORD *)(v63 + 96) >> 1) + 1;
                if ( (v87 & 1) == 0 )
                  goto LABEL_140;
                goto LABEL_93;
              }
              v106 = v82 + j;
              v78 = v64->m128i_i32[0];
              ++v82;
            }
            if ( v78 != v86 )
            {
LABEL_89:
              if ( !v86 )
                goto LABEL_90;
              v78 = v64->m128i_i32[0];
              j = v76 & (v82 + j);
              if ( v86 == 1045 && !v83 )
                v83 = v85;
              ++v82;
              goto LABEL_86;
            }
            if ( v78 == 6 )
            {
              v117 = v64->m128i_i64[1] == v85->m128i_i64[1];
LABEL_156:
              if ( v117 )
                goto LABEL_100;
LABEL_157:
              v86 = v85->m128i_i32[0];
              goto LABEL_89;
            }
            v162.m128i_i32[0] = 73;
            v157 = (__m128i *)(v138 + 40LL * j);
            v153 = v83;
            v149 = v82;
            v144 = j;
            v134 = v63;
            v118 = sub_7204C0(v162.m128i_i32, v64->m128i_i32[0]);
            v63 = v134;
            j = v144;
            v82 = v149;
            v83 = v153;
            v85 = v157;
            if ( v118 || v64->m128i_i32[0] == 5 )
            {
              if ( v64->m128i_i64[1] == v157->m128i_i64[1] && v64[1].m128i_i64[0] == v157[1].m128i_i64[0] )
                goto LABEL_100;
              goto LABEL_157;
            }
            v119 = v157->m128i_i32[0];
            if ( v64->m128i_i32[0] <= 73 )
            {
              if ( v119 <= 73 )
                goto LABEL_100;
              v120 = 0;
LABEL_162:
              v121 = v157->m128i_i64[1];
            }
            else
            {
              v120 = v64->m128i_i64[1];
              v121 = 0;
              if ( v119 > 73 )
                goto LABEL_162;
            }
            v117 = v120 == v121;
            goto LABEL_156;
          }
          v162.m128i_i64[0] = 0;
          v83 = nullptr;
          v90 = (*(_DWORD *)(v63 + 96) >> 1) + 1;
LABEL_140:
          v89 = *(_DWORD *)(v63 + 112);
          v88 = 3 * v89;
LABEL_93:
          v91 = v63 + 96;
          if ( 4 * v90 >= v88 )
          {
            v135 = v63;
            v89 *= 2;
          }
          else
          {
            if ( v89 >> 3 < v89 - (v90 + *(_DWORD *)(v63 + 100)) )
              goto LABEL_95;
            v135 = v63;
          }
          sub_7DD180(v63 + 96, v89);
          sub_7DB920(v91, (__int64)v64, &v162);
          v63 = v135;
          v83 = (__m128i *)v162.m128i_i64[0];
          v90 = (*(_DWORD *)(v135 + 96) >> 1) + 1;
LABEL_95:
          *(_DWORD *)(v63 + 96) = (2 * v90) | *(_DWORD *)(v63 + 96) & 1;
          if ( v83->m128i_i32[0] )
            --*(_DWORD *)(v63 + 100);
          *v83 = _mm_loadu_si128(v64);
          v83[1] = _mm_loadu_si128(v64 + 1);
          v83[2].m128i_i64[0] = v64[2].m128i_i64[0];
        }
LABEL_98:
        v92 = *(unsigned int *)(v63 + 8);
        v93 = *(_QWORD *)v63;
        v94 = v92 + 1;
        if ( *(unsigned int *)(v63 + 12) < (unsigned __int64)(v92 + 1) )
        {
          v111 = v63 + 16;
          if ( (unsigned __int64)v64 < v93 || (unsigned __int64)v64 >= v93 + 40 * v92 )
          {
            v133 = v63;
            sub_25D6060(v63, v111, v94, 40);
            v63 = v133;
            v93 = *(_QWORD *)v133;
            v92 = *(unsigned int *)(v133 + 8);
          }
          else
          {
            v112 = &v64->m128i_i8[-v93];
            v132 = v63;
            sub_25D6060(v63, v111, v94, 40);
            v63 = v132;
            v93 = *(_QWORD *)v132;
            v92 = *(unsigned int *)(v132 + 8);
            v64 = (const __m128i *)&v112[*(_QWORD *)v132];
          }
        }
        v95 = (__m128i *)(v93 + 40 * v92);
        *v95 = _mm_loadu_si128(v64);
        v95[1] = _mm_loadu_si128(v64 + 1);
        v95[2].m128i_i64[0] = v64[2].m128i_i64[0];
        ++*(_DWORD *)(v63 + 8);
LABEL_100:
        v8 = *((unsigned int *)a1 + 4);
        v6 = a1[1];
        v7 = 40 * v8;
        goto LABEL_4;
      }
      v65 = 1;
      v130 = v63 + 104;
      v137 = (_DWORD *)(v63 + 184);
LABEL_68:
      v162.m128i_i32[0] = 73;
      v141 = v63;
      v66 = sub_7204C0(v162.m128i_i32, v64->m128i_i32[0]);
      v67 = v64->m128i_i32[0];
      v63 = v141;
      if ( v66 )
      {
        v104 = v64->m128i_i64[1];
        v147 = v64->m128i_i32[0];
        v162.m128i_i64[0] = v64[1].m128i_i64[0];
        v158 = v104;
        v105 = sub_7DB4D0(&v158, &v162);
        v63 = v141;
        v67 = v147;
        v68 = v105;
      }
      else if ( v67 == 5 )
      {
        v109 = v64->m128i_i64[1];
        v158 = v64[1].m128i_u64[0];
        v162.m128i_i64[0] = v109;
        v110 = sub_7DB530(&v162, &v158);
        v63 = v141;
        v67 = 5;
        v68 = v110;
      }
      else
      {
        v68 = -1916529075;
        if ( v67 > 73 )
        {
          v69 = v64->m128i_u64[1];
          v70 = 0x9DDFEA08EB382D69LL
              * (((0x9DDFEA08EB382D69LL * (HIDWORD(v69) ^ (8LL * (unsigned int)v69 - 0xAE502812AA7333LL))) >> 47)
               ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v69) ^ (8LL * (unsigned int)v69 - 0xAE502812AA7333LL)))
               ^ HIDWORD(v69));
          v68 = -348639895 * (v70 ^ (v70 >> 47));
        }
      }
      v71 = v65 & v68;
      for ( k = 1; ; ++k )
      {
        v73 = v130 + 40LL * v71;
        v74 = *(_DWORD *)v73;
        if ( !v67 )
          break;
        while ( 1 )
        {
          if ( v67 == 1045 )
          {
            if ( v74 == 1045 )
              goto LABEL_129;
            goto LABEL_119;
          }
          if ( v74 != v67 )
            goto LABEL_119;
          if ( v74 != 6 )
            break;
          if ( v64->m128i_i64[1] == *(_QWORD *)(v73 + 8) )
            goto LABEL_129;
          v98 = k + v71;
          ++k;
          v71 = v65 & v98;
          v73 = v130 + 40LL * v71;
          v74 = *(_DWORD *)v73;
        }
        v162.m128i_i32[0] = 73;
        v156 = v73;
        v152 = v63;
        v148 = v71;
        v143 = k;
        v114 = sub_7204C0(v162.m128i_i32, v64->m128i_i32[0]);
        k = v143;
        v71 = v148;
        v63 = v152;
        v73 = v156;
        if ( v114 || v64->m128i_i32[0] == 5 )
        {
          if ( v64->m128i_i64[1] == *(_QWORD *)(v156 + 8) && v64[1].m128i_i64[0] == *(_QWORD *)(v156 + 16) )
            goto LABEL_129;
          v74 = *(_DWORD *)v156;
LABEL_119:
          if ( v74 )
            goto LABEL_151;
          v8 = *((unsigned int *)a1 + 4);
          v6 = a1[1];
          v75 = (_DWORD *)(v63 + 184);
          v7 = 40 * v8;
          if ( (*(_BYTE *)(v63 + 96) & 1) == 0 )
            v75 = (_DWORD *)(*(_QWORD *)(v63 + 104) + 40LL * *(unsigned int *)(v63 + 112));
          goto LABEL_76;
        }
        v74 = *(_DWORD *)v156;
        if ( v64->m128i_i32[0] > 73 )
        {
          v115 = v64->m128i_i64[1];
          if ( v74 > 73 )
          {
            if ( v115 != *(_QWORD *)(v156 + 8) )
              goto LABEL_151;
LABEL_129:
            v8 = *((unsigned int *)a1 + 4);
            v6 = a1[1];
            v75 = (_DWORD *)v73;
            v7 = 40 * v8;
            goto LABEL_76;
          }
          if ( !v115 )
            goto LABEL_129;
          goto LABEL_119;
        }
        if ( v74 <= 73 || !*(_QWORD *)(v156 + 8) )
          goto LABEL_129;
LABEL_151:
        v116 = k + v71;
        v67 = v64->m128i_i32[0];
        v71 = v65 & v116;
      }
      v75 = (_DWORD *)(v130 + 40LL * v71);
      if ( v74 )
      {
        v99 = v65 & (k + v71);
        v75 = (_DWORD *)(v130 + 40LL * v99);
        if ( *v75 )
        {
          v100 = k + 1;
          do
          {
            v101 = v100++;
            v99 = v65 & (v101 + v99);
            v75 = (_DWORD *)(v130 + 40LL * v99);
          }
          while ( *v75 );
        }
        v8 = *((unsigned int *)a1 + 4);
        v6 = a1[1];
        v7 = 40 * v8;
      }
      else
      {
        v8 = *((unsigned int *)a1 + 4);
        v6 = a1[1];
        v7 = 40 * v8;
      }
LABEL_76:
      if ( v75 == v137 )
        goto LABEL_77;
LABEL_4:
      v9 = *((unsigned int *)a1 + 5);
      v10 = v8 + 1;
      v11 = &v162;
      v162.m128i_i32[0] = 1043;
      v162.m128i_i64[1] = v16;
      v163.m128i_i32[0] = v15;
      if ( v9 < v10 )
      {
        v45 = a1 + 3;
        if ( (unsigned __int64)&v162 < v6 || (unsigned __int64)&v162 >= v6 + v7 )
        {
          sub_25D6060(a1 + 1, v45, v10, 40);
          v6 = a1[1];
          v7 = 40LL * *((unsigned int *)a1 + 4);
        }
        else
        {
          v46 = &v162.m128i_i8[-v6];
          sub_25D6060(a1 + 1, v45, v10, 40);
          v6 = a1[1];
          v11 = (__m128i *)&v46[v6];
          v7 = 40LL * *((unsigned int *)a1 + 4);
        }
      }
      v12 = (__m128i *)(v6 + v7);
      ++v5;
      *v12 = _mm_loadu_si128(v11);
      v12[1] = _mm_loadu_si128(v11 + 1);
      v12[2].m128i_i64[0] = v11[2].m128i_i64[0];
    }
    while ( v122 != (_DWORD)v5 );
  }
  return 1;
}

