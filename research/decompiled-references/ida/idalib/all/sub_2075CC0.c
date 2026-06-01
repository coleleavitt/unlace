unsigned __int64 __fastcall sub_2075CC0(__int64 a1)
{
  _BYTE *v1; // rbp
  unsigned __int8 v2; // al
  _BYTE *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r8
  __int64 v7; // r8
  __m128i *v8; // r15
  __int64 v9; // rax
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r8
  __m128i *v14; // rax
  int v15; // r8d
  __m128i *v16; // rax
  __int64 v17; // r12
  __m128i *v18; // rdx
  signed __int64 v19; // rsi
  signed __int64 v20; // r13
  char *v22; // r14
  __m128i *p_src; // rbp
  __int64 v24; // rax
  __int64 v25; // r8
  __m128i *v26; // rdi
  unsigned __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // r9
  __m128i *v30; // rcx
  __int8 *v31; // rdi
  __int8 v32; // dl
  __int8 v33; // dl
  __int8 v34; // dl
  __int8 v35; // dl
  __int8 v36; // dl
  __int8 v37; // dl
  __int8 v38; // dl
  __int8 v39; // dl
  __int8 v40; // dl
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int8 v44; // dl
  __int8 v45; // dl
  __int8 v46; // dl
  __int64 v47; // rdx
  __int8 *v48; // rcx
  __m128i *v49; // rdx
  __int8 v50; // si
  __int8 v51; // r8
  __int8 v52; // dl
  __m128i *v53; // r12
  __int64 v54; // rax
  __m128i *v55; // rax
  char *v56; // r14
  __int64 v57; // rdi
  __m128i *v58; // rcx
  unsigned __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // r8
  __m128i *v62; // rdx
  __int8 *v63; // rcx
  __int8 v64; // r9
  __int8 v65; // r9
  __int8 v66; // r9
  __int8 v67; // r9
  __int8 v68; // r9
  __int8 v69; // r9
  __int8 v70; // r9
  __int8 v71; // r9
  __int8 v72; // r9
  __int8 v73; // r9
  __int8 v74; // r9
  __int8 v75; // r9
  __int8 v76; // r9
  __int8 v77; // r9
  __int8 v78; // r8
  __int64 v79; // rdx
  __int8 *v80; // rcx
  __m128i *v81; // rdx
  __int8 v82; // si
  __int8 v83; // r14
  size_t v84; // rax
  __int8 v85; // r15
  size_t v86; // r14
  const __m128i *v87; // rax
  const __m128i *v88; // rcx
  __m128i v89; // xmm0
  __m128i v90; // xmm3
  __int8 *v91; // rax
  __int8 *v92; // rcx
  __int8 v93; // si
  char v94; // si
  char v95; // si
  char v96; // si
  char v97; // si
  char v98; // si
  char v99; // si
  char v100; // si
  char v101; // si
  char v102; // si
  char v103; // si
  char v104; // si
  char v105; // si
  char v106; // si
  char v107; // dl
  __int8 v108; // r8
  __int8 v109; // di
  __m128i *v110; // rcx
  __m128i *v111; // rax
  __int8 v112; // di
  __int8 v113; // si
  const __m128i *v114; // rax
  const __m128i *v115; // rcx
  signed __int64 v116; // rdi
  __m128i v117; // xmm0
  __m128i v118; // xmm4
  __m128i *v119; // rcx
  __m128i *v120; // rax
  __int8 v121; // di
  __int8 v122; // si
  __int64 v123; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v124; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v125; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v126; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+28h] [rbp-C0h] BYREF
  __m128i src; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v129; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v130; // [rsp+50h] [rbp-98h]
  __int128 v131; // [rsp+60h] [rbp-88h]
  __int128 v132; // [rsp+70h] [rbp-78h] BYREF
  __int128 v133; // [rsp+80h] [rbp-68h]
  __int128 v134; // [rsp+90h] [rbp-58h]
  __m128i si128; // [rsp+A0h] [rbp-48h]

  v1 = *(_BYTE **)a1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_52;
  if ( *v1 != 14 )
  {
    v5 = 0;
    v1 = nullptr;
    goto LABEL_7;
  }
  v2 = *(v1 - 16);
  v3 = (v2 & 2) != 0 ? *((_BYTE **)v1 - 4) : &v1[-8 * ((v2 >> 2) & 0xF) - 16];
  v1 = *((_BYTE **)v3 + 9);
  if ( !v1 )
  {
LABEL_52:
    v5 = 0;
    goto LABEL_7;
  }
  v1 = (_BYTE *)sub_20A0B40(*((_QWORD *)v3 + 9));
  v5 = v4;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 68) & 8) == 0 && (v6 = *(_QWORD *)(a1 + 16)) != 0 && *(_QWORD *)a1 && **(_BYTE **)a1 == 14 )
  {
    v126 = 0;
    src = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v53 = sub_20728A0(&src, &v126, &src, (unsigned __int64)&v132, v6);
    v127 = v126;
    v54 = sub_2248870(v1, v5);
    v55 = sub_A232E0(&src, &v127, v53, (unsigned __int64)&v132, v54);
    v17 = v127;
    v18 = v55;
    v19 = (char *)v55 - (char *)&src;
    v20 = (char *)v55 - (char *)&src;
    if ( !v127 )
      return sub_2012F20(&src, v19, si128.m128i_i64[1]);
    if ( v55 != (__m128i *)&v132 && v55 != &src )
    {
      v56 = (char *)((char *)&v132 - (char *)v55);
      p_src = &src;
      v24 = 64;
      if ( v56 != (char *)v19 )
      {
        while ( 1 )
        {
          v57 = v24 - v19;
          if ( v19 < v24 - v19 )
            break;
LABEL_87:
          if ( v57 == 1 )
          {
LABEL_93:
            v83 = p_src->m128i_i8[v24 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v24 - 1);
            p_src->m128i_i8[0] = v83;
            goto LABEL_50;
          }
          v80 = &p_src->m128i_i8[v24];
          v81 = (__m128i *)((char *)p_src + v24 - v57);
          p_src = v81;
          if ( v19 > 0 )
          {
            p_src = (__m128i *)((char *)v81 - v19);
            do
            {
              v81 = (__m128i *)((char *)v81 - 1);
              --v80;
              v82 = v81->m128i_i8[0];
              v81->m128i_i8[0] = *v80;
              *v80 = v82;
            }
            while ( v81 != p_src );
          }
          v19 = v24 % v57;
          if ( !(v24 % v57) )
            goto LABEL_50;
          v24 = v57;
        }
        while ( v19 != 1 )
        {
          v58 = (__m128i *)((char *)p_src + v19);
          if ( v57 > 0 )
          {
            if ( (v58 >= &p_src[1] || v19 + 16 <= 0) && (unsigned __int64)(v57 - 1) > 0xE )
            {
              v59 = 0;
              do
              {
                v60 = _mm_loadu_si128(&p_src[v59 / 0x10]);
                p_src[v59 / 0x10] = _mm_loadu_si128(&v58[v59 / 0x10]);
                v58[v59 / 0x10] = v60;
                v59 += 16LL;
              }
              while ( v59 != (v57 & 0xFFFFFFFFFFFFFFF0LL) );
              v61 = v57 & 0x7FFFFFFFFFFFFFF0LL;
              v62 = (__m128i *)((char *)p_src + (v57 & 0xFFFFFFFFFFFFFFF0LL));
              v63 = &v58->m128i_i8[v57 & 0xFFFFFFFFFFFFFFF0LL];
              if ( v57 != (v57 & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v64 = v62->m128i_i8[0];
                v62->m128i_i8[0] = *v63;
                *v63 = v64;
                if ( v57 > v61 + 1 )
                {
                  v65 = v62->m128i_i8[1];
                  v62->m128i_i8[1] = v63[1];
                  v63[1] = v65;
                  if ( v57 > v61 + 2 )
                  {
                    v66 = v62->m128i_i8[2];
                    v62->m128i_i8[2] = v63[2];
                    v63[2] = v66;
                    if ( v57 > v61 + 3 )
                    {
                      v67 = v62->m128i_i8[3];
                      v62->m128i_i8[3] = v63[3];
                      v63[3] = v67;
                      if ( v57 > v61 + 4 )
                      {
                        v68 = v62->m128i_i8[4];
                        v62->m128i_i8[4] = v63[4];
                        v63[4] = v68;
                        if ( v57 > v61 + 5 )
                        {
                          v69 = v62->m128i_i8[5];
                          v62->m128i_i8[5] = v63[5];
                          v63[5] = v69;
                          if ( v57 > v61 + 6 )
                          {
                            v70 = v62->m128i_i8[6];
                            v62->m128i_i8[6] = v63[6];
                            v63[6] = v70;
                            if ( v57 > v61 + 7 )
                            {
                              v71 = v62->m128i_i8[7];
                              v62->m128i_i8[7] = v63[7];
                              v63[7] = v71;
                              if ( v57 > v61 + 8 )
                              {
                                v72 = v62->m128i_i8[8];
                                v62->m128i_i8[8] = v63[8];
                                v63[8] = v72;
                                if ( v57 > v61 + 9 )
                                {
                                  v73 = v62->m128i_i8[9];
                                  v62->m128i_i8[9] = v63[9];
                                  v63[9] = v73;
                                  if ( v57 > v61 + 10 )
                                  {
                                    v74 = v62->m128i_i8[10];
                                    v62->m128i_i8[10] = v63[10];
                                    v63[10] = v74;
                                    if ( v57 > v61 + 11 )
                                    {
                                      v75 = v62->m128i_i8[11];
                                      v62->m128i_i8[11] = v63[11];
                                      v63[11] = v75;
                                      if ( v57 > v61 + 12 )
                                      {
                                        v76 = v62->m128i_i8[12];
                                        v62->m128i_i8[12] = v63[12];
                                        v63[12] = v76;
                                        if ( v57 > v61 + 13 )
                                        {
                                          v77 = v62->m128i_i8[13];
                                          v62->m128i_i8[13] = v63[13];
                                          v63[13] = v77;
                                          if ( v57 > v61 + 14 )
                                          {
                                            v78 = v62->m128i_i8[14];
                                            v62->m128i_i8[14] = v63[14];
                                            v63[14] = v78;
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
                v62 = (__m128i *)((char *)p_src + v57);
              }
            }
            else
            {
              v62 = (__m128i *)((char *)p_src + v57);
              do
              {
                v108 = v58->m128i_i8[0];
                v109 = p_src->m128i_i8[0];
                p_src = (__m128i *)((char *)p_src + 1);
                v58 = (__m128i *)((char *)v58 + 1);
                p_src[-1].m128i_i8[15] = v108;
                v58[-1].m128i_i8[15] = v109;
              }
              while ( p_src != v62 );
            }
            p_src = v62;
          }
          v79 = v24 % v19;
          if ( !(v24 % v19) )
            goto LABEL_50;
          v24 = v19;
          v19 -= v79;
          v57 = v24 - v19;
          if ( v19 >= v24 - v19 )
            goto LABEL_87;
        }
        goto LABEL_94;
      }
      v114 = v18;
      if ( (v18 >= (__m128i *)&v129 || &src >= &v18[1])
        && (unsigned __int64)v18->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v115 = &src;
        v116 = (char *)v18 - (char *)&src;
        do
        {
          v117 = _mm_load_si128(v115);
          v118 = _mm_loadu_si128(v114++);
          ++v115;
          v115[-1] = v118;
          v114[-1] = v117;
        }
        while ( v114 != (const __m128i *)&v18->m128i_i8[((char *)v18 - (char *)&src) & 0xFFFFFFFFFFFFFFF0LL] );
        v91 = &src.m128i_i8[v116 & 0xFFFFFFFFFFFFFFF0LL];
        v92 = &v18->m128i_i8[v116 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v116 != (v116 & 0xFFFFFFFFFFFFFFF0LL) )
        {
LABEL_102:
          v93 = *v91;
          *v91 = *v92;
          *v92 = v93;
          if ( v18 != (__m128i *)(v91 + 1) )
          {
            v94 = v91[1];
            v91[1] = v92[1];
            v92[1] = v94;
            if ( v18 != (__m128i *)(v91 + 2) )
            {
              v95 = v91[2];
              v91[2] = v92[2];
              v92[2] = v95;
              if ( v18 != (__m128i *)(v91 + 3) )
              {
                v96 = v91[3];
                v91[3] = v92[3];
                v92[3] = v96;
                if ( v18 != (__m128i *)(v91 + 4) )
                {
                  v97 = v91[4];
                  v91[4] = v92[4];
                  v92[4] = v97;
                  if ( v18 != (__m128i *)(v91 + 5) )
                  {
                    v98 = v91[5];
                    v91[5] = v92[5];
                    v92[5] = v98;
                    if ( v18 != (__m128i *)(v91 + 6) )
                    {
                      v99 = v91[6];
                      v91[6] = v92[6];
                      v92[6] = v99;
                      if ( v18 != (__m128i *)(v91 + 7) )
                      {
                        v100 = v91[7];
                        v91[7] = v92[7];
                        v92[7] = v100;
                        if ( v18 != (__m128i *)(v91 + 8) )
                        {
                          v101 = v91[8];
                          v91[8] = v92[8];
                          v92[8] = v101;
                          if ( v18 != (__m128i *)(v91 + 9) )
                          {
                            v102 = v91[9];
                            v91[9] = v92[9];
                            v92[9] = v102;
                            if ( v18 != (__m128i *)(v91 + 10) )
                            {
                              v103 = v91[10];
                              v91[10] = v92[10];
                              v92[10] = v103;
                              if ( v18 != (__m128i *)(v91 + 11) )
                              {
                                v104 = v91[11];
                                v91[11] = v92[11];
                                v92[11] = v104;
                                if ( v18 != (__m128i *)(v91 + 12) )
                                {
                                  v105 = v91[12];
                                  v91[12] = v92[12];
                                  v92[12] = v105;
                                  if ( v18 != (__m128i *)(v91 + 13) )
                                  {
                                    v106 = v91[13];
                                    v91[13] = v92[13];
                                    v92[13] = v106;
                                    if ( v18 != (__m128i *)(v91 + 14) )
                                    {
                                      v107 = v91[14];
                                      v91[14] = v92[14];
                                      v92[14] = v107;
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
        v119 = v18;
        v120 = &src;
        do
        {
          v121 = v119->m128i_i8[0];
          v122 = v120->m128i_i8[0];
          v120 = (__m128i *)((char *)v120 + 1);
          v119 = (__m128i *)((char *)v119 + 1);
          v120[-1].m128i_i8[15] = v121;
          v119[-1].m128i_i8[15] = v122;
        }
        while ( v18 != v120 );
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 8);
    src = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v123 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v8 = sub_20728A0(&src, &v123, &src, (unsigned __int64)&v132, v7);
    v124 = v123;
    v9 = sub_2248870(v1, v5);
    v10 = sub_A232E0(&src, &v124, v8, (unsigned __int64)&v132, v9);
    v11 = *(_QWORD *)(a1 + 24);
    v125 = v124;
    v12 = sub_206E9E0(&src, &v125, v10, (unsigned __int64)&v132, v11);
    v13 = *(_QWORD *)(a1 + 40);
    v126 = v125;
    v14 = sub_206E9E0(&src, &v126, v12, (unsigned __int64)&v132, v13);
    v15 = *(_DWORD *)(a1 + 32);
    v127 = v126;
    v16 = sub_A0C4A0(&src, &v127, v14, (unsigned __int64)&v132, v15);
    v17 = v127;
    v18 = v16;
    v19 = (char *)v16 - (char *)&src;
    v20 = (char *)v16 - (char *)&src;
    if ( !v127 )
      return sub_2012F20(&src, v19, si128.m128i_i64[1]);
    if ( v16 != (__m128i *)&v132 && v16 != &src )
    {
      v22 = (char *)((char *)&v132 - (char *)v16);
      p_src = &src;
      v24 = 64;
      if ( v22 != (char *)v19 )
      {
        v25 = 64 - v19;
        if ( v19 >= 64 - v19 )
          goto LABEL_45;
        while ( v19 != 1 )
        {
          v26 = (__m128i *)((char *)p_src + v19);
          if ( v25 > 0 )
          {
            if ( (v19 + 16 <= 0 || v26 >= &p_src[1]) && (unsigned __int64)(v25 - 1) > 0xE )
            {
              v27 = 0;
              do
              {
                v28 = _mm_loadu_si128(&p_src[v27 / 0x10]);
                p_src[v27 / 0x10] = _mm_loadu_si128(&v26[v27 / 0x10]);
                v26[v27 / 0x10] = v28;
                v27 += 16LL;
              }
              while ( v27 != (v25 & 0xFFFFFFFFFFFFFFF0LL) );
              v29 = v25 & 0x7FFFFFFFFFFFFFF0LL;
              v30 = (__m128i *)((char *)p_src + (v25 & 0xFFFFFFFFFFFFFFF0LL));
              v31 = &v26->m128i_i8[v25 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) != v25 )
              {
                v32 = v30->m128i_i8[0];
                v30->m128i_i8[0] = *v31;
                *v31 = v32;
                if ( v25 > v29 + 1 )
                {
                  v33 = v30->m128i_i8[1];
                  v30->m128i_i8[1] = v31[1];
                  v31[1] = v33;
                  if ( v25 > v29 + 2 )
                  {
                    v34 = v30->m128i_i8[2];
                    v30->m128i_i8[2] = v31[2];
                    v31[2] = v34;
                    if ( v25 > v29 + 3 )
                    {
                      v35 = v30->m128i_i8[3];
                      v30->m128i_i8[3] = v31[3];
                      v31[3] = v35;
                      if ( v25 > v29 + 4 )
                      {
                        v36 = v30->m128i_i8[4];
                        v30->m128i_i8[4] = v31[4];
                        v31[4] = v36;
                        if ( v25 > v29 + 5 )
                        {
                          v37 = v30->m128i_i8[5];
                          v30->m128i_i8[5] = v31[5];
                          v31[5] = v37;
                          if ( v25 > v29 + 6 )
                          {
                            v38 = v30->m128i_i8[6];
                            v30->m128i_i8[6] = v31[6];
                            v31[6] = v38;
                            if ( v25 > v29 + 7 )
                            {
                              v39 = v30->m128i_i8[7];
                              v30->m128i_i8[7] = v31[7];
                              v31[7] = v39;
                              if ( v25 > v29 + 8 )
                              {
                                v40 = v30->m128i_i8[8];
                                v30->m128i_i8[8] = v31[8];
                                v31[8] = v40;
                                if ( v25 > v29 + 9 )
                                {
                                  v41 = v30->m128i_i8[9];
                                  v30->m128i_i8[9] = v31[9];
                                  v31[9] = v41;
                                  if ( v25 > v29 + 10 )
                                  {
                                    v42 = v30->m128i_i8[10];
                                    v30->m128i_i8[10] = v31[10];
                                    v31[10] = v42;
                                    if ( v25 > v29 + 11 )
                                    {
                                      v43 = v30->m128i_i8[11];
                                      v30->m128i_i8[11] = v31[11];
                                      v31[11] = v43;
                                      if ( v25 > v29 + 12 )
                                      {
                                        v44 = v30->m128i_i8[12];
                                        v30->m128i_i8[12] = v31[12];
                                        v31[12] = v44;
                                        if ( v25 > v29 + 13 )
                                        {
                                          v45 = v30->m128i_i8[13];
                                          v30->m128i_i8[13] = v31[13];
                                          v31[13] = v45;
                                          if ( v25 > v29 + 14 )
                                          {
                                            v46 = v30->m128i_i8[14];
                                            v30->m128i_i8[14] = v31[14];
                                            v31[14] = v46;
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
                v30 = (__m128i *)((char *)p_src + v25);
              }
            }
            else
            {
              v30 = (__m128i *)((char *)p_src + v25);
              do
              {
                v51 = v26->m128i_i8[0];
                v52 = p_src->m128i_i8[0];
                p_src = (__m128i *)((char *)p_src + 1);
                v26 = (__m128i *)((char *)v26 + 1);
                p_src[-1].m128i_i8[15] = v51;
                v26[-1].m128i_i8[15] = v52;
              }
              while ( v30 != p_src );
            }
            p_src = v30;
          }
          if ( !(v24 % v19) )
            goto LABEL_50;
          v25 = v19;
          v47 = v19 - v24 % v19;
          while ( 1 )
          {
            v24 = v25;
            v19 = v47;
            v25 -= v47;
            if ( v47 < v25 )
              break;
LABEL_45:
            if ( v25 == 1 )
              goto LABEL_93;
            v48 = &p_src->m128i_i8[v24];
            v49 = (__m128i *)((char *)p_src + v24 - v25);
            p_src = v49;
            if ( v19 > 0 )
            {
              p_src = (__m128i *)((char *)v49 - v19);
              do
              {
                v49 = (__m128i *)((char *)v49 - 1);
                --v48;
                v50 = v49->m128i_i8[0];
                v49->m128i_i8[0] = *v48;
                *v48 = v50;
              }
              while ( v49 != p_src );
            }
            v47 = v24 % v25;
            if ( !(v24 % v25) )
              goto LABEL_50;
          }
        }
LABEL_94:
        v84 = v24 - 1;
        v85 = p_src->m128i_i8[0];
        v86 = v84;
        if ( v84 )
          memmove(p_src, &p_src->m128i_i8[1], v84);
        p_src->m128i_i8[v86] = v85;
        goto LABEL_50;
      }
      v87 = v18;
      if ( (v18 >= (__m128i *)&v129 || &src >= &v18[1])
        && (unsigned __int64)v18->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v88 = &src;
        do
        {
          v89 = _mm_load_si128(v88);
          v90 = _mm_loadu_si128(v87++);
          ++v88;
          v88[-1] = v90;
          v87[-1] = v89;
        }
        while ( v87 != (const __m128i *)&v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL] );
        v91 = &src.m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        v92 = &v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != v19 )
          goto LABEL_102;
      }
      else
      {
        v110 = v18;
        v111 = &src;
        do
        {
          v112 = v110->m128i_i8[0];
          v113 = v111->m128i_i8[0];
          v111 = (__m128i *)((char *)v111 + 1);
          v110 = (__m128i *)((char *)v110 + 1);
          v111[-1].m128i_i8[15] = v112;
          v110[-1].m128i_i8[15] = v113;
        }
        while ( v18 != v111 );
      }
    }
  }
LABEL_50:
  sub_9B6F20((unsigned __int64 *)&v132, &src);
  return sub_20131D0(&v132, v17 + v20);
}
