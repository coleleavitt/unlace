unsigned __int64 __fastcall sub_207C060(__int64 a1, __int64 *a2, int *a3, int *a4, char *a5, __int64 a6)
{
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  int v13; // r8d
  __m128i *v14; // rax
  int v15; // r8d
  __m128i *v16; // rax
  char v17; // r8
  _BYTE *v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // r8
  __m128i v21; // xmm2
  _QWORD *v22; // r13
  __m128i *v23; // rax
  __int64 v24; // r12
  __m128i *v25; // rdx
  signed __int64 v26; // rsi
  signed __int64 v27; // r13
  _BYTE *v29; // rax
  int v30; // r8d
  __m128i *v31; // rax
  __int64 v32; // r14
  __m128i *v33; // rcx
  signed __int64 v34; // rsi
  signed __int64 v35; // r15
  __m128i *p_src; // rbp
  char *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdi
  __m128i *v40; // rcx
  unsigned __int64 v41; // r8
  __m128i v42; // xmm0
  __int64 v43; // r9
  __int8 *v44; // r8
  __int8 *v45; // rcx
  __int8 v46; // dl
  __int8 v47; // dl
  __int8 v48; // dl
  __int8 v49; // dl
  __int8 v50; // dl
  __int8 v51; // dl
  __int8 v52; // dl
  __int8 v53; // dl
  __int8 v54; // dl
  __int8 v55; // dl
  __int8 v56; // dl
  __int8 v57; // dl
  __int8 v58; // dl
  __int8 v59; // dl
  __int8 v60; // dl
  __int64 v61; // rdx
  __int8 *v62; // r8
  __m128i *v63; // rcx
  __int8 v64; // dl
  __m128i *v65; // r10
  __m128i *v66; // rdx
  __int8 v67; // r8
  __int8 v68; // r9
  __m128i *p_dest; // rbp
  char *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r8
  __m128i *v73; // rcx
  unsigned __int64 v74; // rdi
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __m128i *v77; // rdi
  __int8 *v78; // rcx
  __int8 v79; // r9
  __int8 v80; // r9
  __int8 v81; // r9
  __int8 v82; // r9
  __int8 v83; // r9
  __int8 v84; // r9
  __int8 v85; // r9
  __int8 v86; // r9
  __int8 v87; // r9
  __int8 v88; // r9
  __int8 v89; // r9
  __int8 v90; // r9
  __int8 v91; // r9
  __int8 v92; // r9
  __int8 v93; // dl
  __int8 *v94; // rdx
  __m128i *v95; // rcx
  __int8 v96; // si
  __int8 v97; // r8
  __int8 v98; // dl
  const __m128i *v99; // rax
  const __m128i *v100; // rcx
  __m128i v101; // xmm0
  __m128i v102; // xmm5
  __int8 *v103; // rax
  __int8 *v104; // rcx
  __int8 v105; // si
  char v106; // si
  char v107; // si
  char v108; // si
  char v109; // si
  char v110; // si
  char v111; // si
  char v112; // si
  char v113; // si
  char v114; // si
  char v115; // si
  char v116; // si
  char v117; // si
  char v118; // si
  char v119; // dl
  size_t v120; // rax
  __int8 v121; // r15
  size_t v122; // r14
  __int8 v123; // r14
  const __m128i *v124; // rax
  const __m128i *v125; // rdx
  __m128i v126; // xmm0
  __m128i v127; // xmm6
  __int8 *v128; // rax
  __int8 *v129; // rdx
  __int8 v130; // si
  char v131; // si
  char v132; // si
  char v133; // si
  char v134; // si
  char v135; // si
  char v136; // si
  char v137; // si
  char v138; // si
  char v139; // si
  char v140; // si
  char v141; // si
  char v142; // si
  char v143; // si
  char v144; // cl
  size_t v145; // rax
  __int8 v146; // r8
  size_t v147; // rcx
  __m128i *v148; // rcx
  __m128i *v149; // rax
  __int8 v150; // di
  __int8 v151; // si
  __m128i *v152; // rdx
  __m128i *v153; // rax
  __int8 v154; // di
  __int8 v155; // si
  __int8 v156; // [rsp+0h] [rbp-188h]
  size_t v157; // [rsp+0h] [rbp-188h]
  __int8 v158; // [rsp+Fh] [rbp-179h]
  __int64 v159; // [rsp+10h] [rbp-178h] BYREF
  __int64 v160; // [rsp+18h] [rbp-170h] BYREF
  __int64 v161; // [rsp+20h] [rbp-168h] BYREF
  __int64 v162; // [rsp+28h] [rbp-160h] BYREF
  __int64 v163; // [rsp+30h] [rbp-158h] BYREF
  __int64 v164; // [rsp+38h] [rbp-150h] BYREF
  __int64 v165; // [rsp+40h] [rbp-148h] BYREF
  __int64 v166; // [rsp+48h] [rbp-140h] BYREF
  __m128i src; // [rsp+50h] [rbp-138h] BYREF
  _OWORD v168[3]; // [rsp+60h] [rbp-128h] BYREF
  _OWORD v169[3]; // [rsp+90h] [rbp-F8h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-C8h]
  __m128i dest; // [rsp+D0h] [rbp-B8h] BYREF
  _OWORD v172[3]; // [rsp+E0h] [rbp-A8h] BYREF
  _OWORD v173[3]; // [rsp+110h] [rbp-78h] BYREF
  __m128i v174; // [rsp+140h] [rbp-48h]

  src = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  memset(v168, 0, sizeof(v168));
  memset(v169, 0, sizeof(v169));
  v159 = 0;
  v10 = sub_206E9E0(&src, &v159, &src, (unsigned __int64)v169, a1);
  v11 = *a2;
  v160 = v159;
  v12 = sub_20728A0(&src, &v160, v10, (unsigned __int64)v169, v11);
  v13 = *a3;
  v161 = v160;
  v14 = sub_A0C4A0(&src, &v161, v12, (unsigned __int64)v169, v13);
  v15 = *a4;
  v162 = v161;
  v16 = sub_A0C4A0(&src, &v162, v14, (unsigned __int64)v169, v15);
  v17 = *a5;
  v163 = v162;
  v18 = sub_207A9D0(&src, &v163, v16, (unsigned __int64)v169, v17);
  v19 = *(_BYTE *)(a6 + 4) == 0;
  v20 = 0xB2B24F688DC4164DLL;
  v21 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v22 = v18;
  v164 = v163;
  if ( !v19 )
  {
    dest = 0;
    memset(v172, 0, sizeof(v172));
    memset(v173, 0, sizeof(v173));
    v174 = v21;
    v165 = 0;
    v29 = sub_207A9D0(&dest, &v165, &dest, (unsigned __int64)v173, 1);
    v30 = *(_DWORD *)a6;
    v166 = v165;
    v31 = sub_A0C4A0(&dest, &v166, v29, (unsigned __int64)v173, v30);
    v32 = v166;
    v33 = v31;
    v34 = (char *)v31 - (char *)&dest;
    v35 = (char *)v31 - (char *)&dest;
    if ( v166 )
    {
      if ( v31 != (__m128i *)v173 && v31 != &dest )
      {
        p_dest = &dest;
        v70 = (char *)((char *)v173 - (char *)v31);
        v71 = 64;
        if ( v70 == (char *)v34 )
        {
          v124 = v33;
          if ( (v33 >= (__m128i *)v172 || &dest >= &v33[1])
            && (unsigned __int64)v33->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
          {
            v125 = &dest;
            do
            {
              v126 = _mm_load_si128(v125);
              v127 = _mm_loadu_si128(v124++);
              ++v125;
              v125[-1] = v127;
              v124[-1] = v126;
            }
            while ( v124 != (const __m128i *)&v33->m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL] );
            v128 = &dest.m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL];
            v129 = &v33->m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v34 != (v34 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v130 = *v128;
              *v128 = *v129;
              *v129 = v130;
              if ( v33 != (__m128i *)(v128 + 1) )
              {
                v131 = v128[1];
                v128[1] = v129[1];
                v129[1] = v131;
                if ( v33 != (__m128i *)(v128 + 2) )
                {
                  v132 = v128[2];
                  v128[2] = v129[2];
                  v129[2] = v132;
                  if ( v33 != (__m128i *)(v128 + 3) )
                  {
                    v133 = v128[3];
                    v128[3] = v129[3];
                    v129[3] = v133;
                    if ( v33 != (__m128i *)(v128 + 4) )
                    {
                      v134 = v128[4];
                      v128[4] = v129[4];
                      v129[4] = v134;
                      if ( v33 != (__m128i *)(v128 + 5) )
                      {
                        v135 = v128[5];
                        v128[5] = v129[5];
                        v129[5] = v135;
                        if ( v33 != (__m128i *)(v128 + 6) )
                        {
                          v136 = v128[6];
                          v128[6] = v129[6];
                          v129[6] = v136;
                          if ( v33 != (__m128i *)(v128 + 7) )
                          {
                            v137 = v128[7];
                            v128[7] = v129[7];
                            v129[7] = v137;
                            if ( v33 != (__m128i *)(v128 + 8) )
                            {
                              v138 = v128[8];
                              v128[8] = v129[8];
                              v129[8] = v138;
                              if ( v33 != (__m128i *)(v128 + 9) )
                              {
                                v139 = v128[9];
                                v128[9] = v129[9];
                                v129[9] = v139;
                                if ( v33 != (__m128i *)(v128 + 10) )
                                {
                                  v140 = v128[10];
                                  v128[10] = v129[10];
                                  v129[10] = v140;
                                  if ( v33 != (__m128i *)(v128 + 11) )
                                  {
                                    v141 = v128[11];
                                    v128[11] = v129[11];
                                    v129[11] = v141;
                                    if ( v33 != (__m128i *)(v128 + 12) )
                                    {
                                      v142 = v128[12];
                                      v128[12] = v129[12];
                                      v129[12] = v142;
                                      if ( v33 != (__m128i *)(v128 + 13) )
                                      {
                                        v143 = v128[13];
                                        v128[13] = v129[13];
                                        v129[13] = v143;
                                        if ( v33 != (__m128i *)(v128 + 14) )
                                        {
                                          v144 = v128[14];
                                          v128[14] = v129[14];
                                          v129[14] = v144;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v152 = v33;
            v153 = &dest;
            do
            {
              v154 = v152->m128i_i8[0];
              v155 = v153->m128i_i8[0];
              v153 = (__m128i *)((char *)v153 + 1);
              v152 = (__m128i *)((char *)v152 + 1);
              v153[-1].m128i_i8[15] = v154;
              v152[-1].m128i_i8[15] = v155;
            }
            while ( v33 != v153 );
          }
        }
        else
        {
          v72 = 64 - v34;
          if ( v34 >= 64 - v34 )
            goto LABEL_76;
          while ( v34 != 1 )
          {
            v73 = (__m128i *)((char *)p_dest + v34);
            if ( v72 > 0 )
            {
              if ( (v73 >= &p_dest[1] || v34 + 16 <= 0) && (unsigned __int64)(v72 - 1) > 0xE )
              {
                v74 = 0;
                do
                {
                  v75 = _mm_loadu_si128(&p_dest[v74 / 0x10]);
                  p_dest[v74 / 0x10] = _mm_loadu_si128(&v73[v74 / 0x10]);
                  v73[v74 / 0x10] = v75;
                  v74 += 16LL;
                }
                while ( v74 != (v72 & 0xFFFFFFFFFFFFFFF0LL) );
                v76 = v72 & 0x7FFFFFFFFFFFFFF0LL;
                v77 = (__m128i *)((char *)p_dest + (v72 & 0xFFFFFFFFFFFFFFF0LL));
                v78 = &v73->m128i_i8[v72 & 0xFFFFFFFFFFFFFFF0LL];
                if ( v72 != (v72 & 0xFFFFFFFFFFFFFFF0LL) )
                {
                  v79 = v77->m128i_i8[0];
                  v77->m128i_i8[0] = *v78;
                  *v78 = v79;
                  if ( v72 > v76 + 1 )
                  {
                    v80 = v77->m128i_i8[1];
                    v77->m128i_i8[1] = v78[1];
                    v78[1] = v80;
                    if ( v72 > v76 + 2 )
                    {
                      v81 = v77->m128i_i8[2];
                      v77->m128i_i8[2] = v78[2];
                      v78[2] = v81;
                      if ( v72 > v76 + 3 )
                      {
                        v82 = v77->m128i_i8[3];
                        v77->m128i_i8[3] = v78[3];
                        v78[3] = v82;
                        if ( v72 > v76 + 4 )
                        {
                          v83 = v77->m128i_i8[4];
                          v77->m128i_i8[4] = v78[4];
                          v78[4] = v83;
                          if ( v72 > v76 + 5 )
                          {
                            v84 = v77->m128i_i8[5];
                            v77->m128i_i8[5] = v78[5];
                            v78[5] = v84;
                            if ( v72 > v76 + 6 )
                            {
                              v85 = v77->m128i_i8[6];
                              v77->m128i_i8[6] = v78[6];
                              v78[6] = v85;
                              if ( v72 > v76 + 7 )
                              {
                                v86 = v77->m128i_i8[7];
                                v77->m128i_i8[7] = v78[7];
                                v78[7] = v86;
                                if ( v72 > v76 + 8 )
                                {
                                  v87 = v77->m128i_i8[8];
                                  v77->m128i_i8[8] = v78[8];
                                  v78[8] = v87;
                                  if ( v72 > v76 + 9 )
                                  {
                                    v88 = v77->m128i_i8[9];
                                    v77->m128i_i8[9] = v78[9];
                                    v78[9] = v88;
                                    if ( v72 > v76 + 10 )
                                    {
                                      v89 = v77->m128i_i8[10];
                                      v77->m128i_i8[10] = v78[10];
                                      v78[10] = v89;
                                      if ( v72 > v76 + 11 )
                                      {
                                        v90 = v77->m128i_i8[11];
                                        v77->m128i_i8[11] = v78[11];
                                        v78[11] = v90;
                                        if ( v72 > v76 + 12 )
                                        {
                                          v91 = v77->m128i_i8[12];
                                          v77->m128i_i8[12] = v78[12];
                                          v78[12] = v91;
                                          if ( v72 > v76 + 13 )
                                          {
                                            v92 = v77->m128i_i8[13];
                                            v77->m128i_i8[13] = v78[13];
                                            v78[13] = v92;
                                            if ( v72 > v76 + 14 )
                                            {
                                              v93 = v77->m128i_i8[14];
                                              v77->m128i_i8[14] = v78[14];
                                              v78[14] = v93;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  v77 = (__m128i *)((char *)p_dest + v72);
                }
              }
              else
              {
                v77 = (__m128i *)((char *)p_dest + v72);
                do
                {
                  v97 = v73->m128i_i8[0];
                  v98 = p_dest->m128i_i8[0];
                  p_dest = (__m128i *)((char *)p_dest + 1);
                  v73 = (__m128i *)((char *)v73 + 1);
                  p_dest[-1].m128i_i8[15] = v97;
                  v73[-1].m128i_i8[15] = v98;
                }
                while ( p_dest != v77 );
              }
              p_dest = v77;
            }
            if ( !(v71 % v34) )
              goto LABEL_81;
            v72 = v34;
            v34 -= v71 % v34;
            while ( 1 )
            {
              v71 = v72;
              v72 -= v34;
              if ( v34 < v72 )
                break;
LABEL_76:
              if ( v72 == 1 )
              {
                v156 = p_dest->m128i_i8[v71 - 1];
                memmove(&p_dest->m128i_i8[1], p_dest, v71 - 1);
                p_dest->m128i_i8[0] = v156;
                goto LABEL_81;
              }
              v94 = &p_dest->m128i_i8[v71];
              v95 = (__m128i *)((char *)p_dest + v71 - v72);
              p_dest = v95;
              if ( v34 > 0 )
              {
                p_dest = (__m128i *)((char *)v95 - v34);
                do
                {
                  v95 = (__m128i *)((char *)v95 - 1);
                  --v94;
                  v96 = v95->m128i_i8[0];
                  v95->m128i_i8[0] = *v94;
                  *v94 = v96;
                }
                while ( v95 != p_dest );
              }
              v34 = v71 % v72;
              if ( !(v71 % v72) )
                goto LABEL_81;
            }
          }
          v145 = v71 - 1;
          v146 = p_dest->m128i_i8[0];
          v147 = v145;
          if ( v145 )
          {
            v158 = p_dest->m128i_i8[0];
            v157 = v145;
            memmove(p_dest, &p_dest->m128i_i8[1], v145);
            v146 = v158;
            v147 = v157;
          }
          p_dest->m128i_i8[v147] = v146;
        }
      }
LABEL_81:
      sub_9B6F20((unsigned __int64 *)v173, &dest);
      v20 = sub_20131D0(v173, v32 + v35);
    }
    else
    {
      v20 = sub_2012F20(&dest, v34, v174.m128i_i64[1]);
    }
  }
  v23 = sub_A232E0(&src, &v164, v22, (unsigned __int64)v169, v20);
  v24 = v164;
  v25 = v23;
  v26 = (char *)v23 - (char *)&src;
  v27 = (char *)v23 - (char *)&src;
  if ( !v164 )
    return sub_2012F20(&src, v26, si128.m128i_i64[1]);
  if ( v23 != (__m128i *)v169 && v23 != &src )
  {
    p_src = &src;
    v37 = (char *)((char *)v169 - (char *)v23);
    v38 = 64;
    if ( v37 == (char *)v26 )
    {
      v99 = v25;
      if ( (v25 >= (__m128i *)v168 || &src >= &v25[1])
        && (unsigned __int64)v25->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v100 = &src;
        do
        {
          v101 = _mm_load_si128(v100);
          v102 = _mm_loadu_si128(v99++);
          ++v100;
          v100[-1] = v102;
          v99[-1] = v101;
        }
        while ( &v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)v99 );
        v103 = &src.m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        v104 = &v25->m128i_i8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v26 & 0xFFFFFFFFFFFFFFF0LL) != v26 )
        {
          v105 = *v103;
          *v103 = *v104;
          *v104 = v105;
          if ( v25 != (__m128i *)(v103 + 1) )
          {
            v106 = v103[1];
            v103[1] = v104[1];
            v104[1] = v106;
            if ( v25 != (__m128i *)(v103 + 2) )
            {
              v107 = v103[2];
              v103[2] = v104[2];
              v104[2] = v107;
              if ( v25 != (__m128i *)(v103 + 3) )
              {
                v108 = v103[3];
                v103[3] = v104[3];
                v104[3] = v108;
                if ( v25 != (__m128i *)(v103 + 4) )
                {
                  v109 = v103[4];
                  v103[4] = v104[4];
                  v104[4] = v109;
                  if ( v25 != (__m128i *)(v103 + 5) )
                  {
                    v110 = v103[5];
                    v103[5] = v104[5];
                    v104[5] = v110;
                    if ( v25 != (__m128i *)(v103 + 6) )
                    {
                      v111 = v103[6];
                      v103[6] = v104[6];
                      v104[6] = v111;
                      if ( v25 != (__m128i *)(v103 + 7) )
                      {
                        v112 = v103[7];
                        v103[7] = v104[7];
                        v104[7] = v112;
                        if ( v25 != (__m128i *)(v103 + 8) )
                        {
                          v113 = v103[8];
                          v103[8] = v104[8];
                          v104[8] = v113;
                          if ( v25 != (__m128i *)(v103 + 9) )
                          {
                            v114 = v103[9];
                            v103[9] = v104[9];
                            v104[9] = v114;
                            if ( v25 != (__m128i *)(v103 + 10) )
                            {
                              v115 = v103[10];
                              v103[10] = v104[10];
                              v104[10] = v115;
                              if ( v25 != (__m128i *)(v103 + 11) )
                              {
                                v116 = v103[11];
                                v103[11] = v104[11];
                                v104[11] = v116;
                                if ( v25 != (__m128i *)(v103 + 12) )
                                {
                                  v117 = v103[12];
                                  v103[12] = v104[12];
                                  v104[12] = v117;
                                  if ( v25 != (__m128i *)(v103 + 13) )
                                  {
                                    v118 = v103[13];
                                    v103[13] = v104[13];
                                    v104[13] = v118;
                                    if ( v25 != (__m128i *)(v103 + 14) )
                                    {
                                      v119 = v103[14];
                                      v103[14] = v104[14];
                                      v104[14] = v119;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v148 = v25;
        v149 = &src;
        do
        {
          v150 = v148->m128i_i8[0];
          v151 = v149->m128i_i8[0];
          v149 = (__m128i *)((char *)v149 + 1);
          v148 = (__m128i *)((char *)v148 + 1);
          v149[-1].m128i_i8[15] = v150;
          v148[-1].m128i_i8[15] = v151;
        }
        while ( v25 != v149 );
      }
    }
    else
    {
      v39 = 64 - v26;
      if ( v26 >= 64 - v26 )
        goto LABEL_36;
      while ( v26 != 1 )
      {
        v40 = (__m128i *)((char *)p_src + v26);
        if ( v39 > 0 )
        {
          if ( (v40 >= &p_src[1] || v26 + 16 <= 0) && (unsigned __int64)(v39 - 1) > 0xE )
          {
            v41 = 0;
            do
            {
              v42 = _mm_loadu_si128(&p_src[v41 / 0x10]);
              p_src[v41 / 0x10] = _mm_loadu_si128(&v40[v41 / 0x10]);
              v40[v41 / 0x10] = v42;
              v41 += 16LL;
            }
            while ( v41 != (v39 & 0xFFFFFFFFFFFFFFF0LL) );
            v43 = v39 & 0x7FFFFFFFFFFFFFF0LL;
            v44 = &p_src->m128i_i8[v39 & 0xFFFFFFFFFFFFFFF0LL];
            v45 = &v40->m128i_i8[v39 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v39 != (v39 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v46 = *v44;
              *v44 = *v45;
              *v45 = v46;
              if ( v39 > v43 + 1 )
              {
                v47 = v44[1];
                v44[1] = v45[1];
                v45[1] = v47;
                if ( v39 > v43 + 2 )
                {
                  v48 = v44[2];
                  v44[2] = v45[2];
                  v45[2] = v48;
                  if ( v39 > v43 + 3 )
                  {
                    v49 = v44[3];
                    v44[3] = v45[3];
                    v45[3] = v49;
                    if ( v39 > v43 + 4 )
                    {
                      v50 = v44[4];
                      v44[4] = v45[4];
                      v45[4] = v50;
                      if ( v39 > v43 + 5 )
                      {
                        v51 = v44[5];
                        v44[5] = v45[5];
                        v45[5] = v51;
                        if ( v39 > v43 + 6 )
                        {
                          v52 = v44[6];
                          v44[6] = v45[6];
                          v45[6] = v52;
                          if ( v39 > v43 + 7 )
                          {
                            v53 = v44[7];
                            v44[7] = v45[7];
                            v45[7] = v53;
                            if ( v39 > v43 + 8 )
                            {
                              v54 = v44[8];
                              v44[8] = v45[8];
                              v45[8] = v54;
                              if ( v39 > v43 + 9 )
                              {
                                v55 = v44[9];
                                v44[9] = v45[9];
                                v45[9] = v55;
                                if ( v39 > v43 + 10 )
                                {
                                  v56 = v44[10];
                                  v44[10] = v45[10];
                                  v45[10] = v56;
                                  if ( v39 > v43 + 11 )
                                  {
                                    v57 = v44[11];
                                    v44[11] = v45[11];
                                    v45[11] = v57;
                                    if ( v39 > v43 + 12 )
                                    {
                                      v58 = v44[12];
                                      v44[12] = v45[12];
                                      v45[12] = v58;
                                      if ( v39 > v43 + 13 )
                                      {
                                        v59 = v44[13];
                                        v44[13] = v45[13];
                                        v45[13] = v59;
                                        if ( v39 > v43 + 14 )
                                        {
                                          v60 = v44[14];
                                          v44[14] = v45[14];
                                          v45[14] = v60;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v65 = (__m128i *)((char *)v40 + v39);
            v66 = p_src;
            do
            {
              v67 = v66->m128i_i8[0];
              v68 = v40->m128i_i8[0];
              v40 = (__m128i *)((char *)v40 + 1);
              v66 = (__m128i *)((char *)v66 + 1);
              v66[-1].m128i_i8[15] = v68;
              v40[-1].m128i_i8[15] = v67;
            }
            while ( v65 != v40 );
          }
          p_src = (__m128i *)((char *)p_src + v39);
        }
        if ( !(v38 % v26) )
          goto LABEL_41;
        v39 = v26;
        v61 = v26 - v38 % v26;
        while ( 1 )
        {
          v38 = v39;
          v26 = v61;
          v39 -= v61;
          if ( v61 < v39 )
            break;
LABEL_36:
          if ( v39 == 1 )
          {
            v123 = p_src->m128i_i8[v38 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v38 - 1);
            p_src->m128i_i8[0] = v123;
            goto LABEL_41;
          }
          v62 = &p_src->m128i_i8[v38];
          v63 = (__m128i *)((char *)p_src + v38 - v39);
          p_src = v63;
          if ( v26 > 0 )
          {
            p_src = (__m128i *)((char *)v63 - v26);
            do
            {
              v63 = (__m128i *)((char *)v63 - 1);
              --v62;
              v64 = v63->m128i_i8[0];
              v63->m128i_i8[0] = *v62;
              *v62 = v64;
            }
            while ( v63 != p_src );
          }
          v61 = v38 % v39;
          if ( !(v38 % v39) )
            goto LABEL_41;
        }
      }
      v120 = v38 - 1;
      v121 = p_src->m128i_i8[0];
      v122 = v120;
      if ( v120 )
        memmove(p_src, &p_src->m128i_i8[1], v120);
      p_src->m128i_i8[v122] = v121;
    }
  }
LABEL_41:
  sub_9B6F20((unsigned __int64 *)v169, &src);
  return sub_20131D0(v169, v24 + v27);
}
