unsigned __int64 __fastcall sub_206F860(int **a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 *v5; // rax
  __int64 v6; // r12
  int v7; // r8d
  __m128i *v8; // rax
  __int64 v9; // r13
  __m128i *v10; // r15
  char *v11; // r15
  size_t v12; // rdx
  char *v13; // rsi
  signed __int64 v14; // rsi
  signed __int64 v15; // r14
  unsigned __int64 result; // rax
  int v17; // r8d
  __m128i *v18; // rax
  __m128i *v19; // rax
  __m128i *v20; // rcx
  __m128i *p_dest; // r12
  char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __m128i *v25; // rdi
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __m128i *v29; // rcx
  __int8 *v30; // rdi
  __int8 v31; // r9
  __int8 v32; // r9
  __int8 v33; // r9
  __int8 v34; // r9
  __int8 v35; // r9
  __int8 v36; // r9
  __int8 v37; // r9
  __int8 v38; // r9
  __int8 v39; // r9
  __int8 v40; // r9
  __int8 v41; // r9
  __int8 v42; // r9
  __int8 v43; // r9
  __int8 v44; // r9
  __int8 v45; // dl
  __int8 *v46; // rcx
  __m128i *v47; // rdx
  __int8 v48; // si
  __int64 v49; // r8
  __m128i *v50; // rdi
  unsigned __int64 v51; // rcx
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __m128i *v54; // rcx
  __int8 *v55; // rdi
  __int8 v56; // r9
  __int8 v57; // r9
  __int8 v58; // r9
  __int8 v59; // r9
  __int8 v60; // r9
  __int8 v61; // r9
  __int8 v62; // r9
  __int8 v63; // r9
  __int8 v64; // r9
  __int8 v65; // r9
  __int8 v66; // r9
  __int8 v67; // r9
  __int8 v68; // r9
  __int8 v69; // r9
  __int8 v70; // dl
  __int8 *v71; // rcx
  __m128i *v72; // rdx
  __int8 v73; // si
  __m128i v74; // xmm6
  __m128i v75; // xmm7
  __int8 v76; // r8
  __int8 v77; // dl
  __int8 v78; // r8
  __int8 v79; // dl
  size_t v80; // rax
  __int8 v81; // cl
  size_t v82; // r15
  __int8 v83; // r15
  const __m128i *v84; // rax
  const __m128i *v85; // rdx
  __m128i v86; // xmm0
  __m128i v87; // xmm3
  __int8 *v88; // rax
  __int8 *v89; // rdx
  __int8 v90; // si
  char v91; // si
  char v92; // si
  char v93; // si
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
  char v104; // cl
  const __m128i *v105; // rax
  const __m128i *v106; // rdx
  __m128i v107; // xmm0
  __m128i v108; // xmm4
  __int8 v109; // cl
  char v110; // cl
  char v111; // cl
  char v112; // cl
  char v113; // cl
  char v114; // cl
  char v115; // cl
  char v116; // cl
  char v117; // cl
  char v118; // cl
  char v119; // cl
  char v120; // cl
  char v121; // cl
  char v122; // cl
  __m128i *v123; // rdx
  __m128i *v124; // rax
  __int8 v125; // di
  __int8 v126; // si
  __m128i *v127; // rdx
  __m128i *v128; // rax
  __int8 v129; // si
  __int8 v130; // cl
  __int8 v131; // [rsp+Fh] [rbp-109h]
  __m128i v132; // [rsp+10h] [rbp-108h] BYREF
  __m128i v133; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v134; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v135; // [rsp+40h] [rbp-D8h]
  __int64 v136; // [rsp+50h] [rbp-C8h] BYREF
  __int64 src; // [rsp+58h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v139; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v140; // [rsp+80h] [rbp-98h]
  __int128 v141; // [rsp+90h] [rbp-88h]
  __m128i v142; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v143; // [rsp+B0h] [rbp-68h]
  __m128i v144; // [rsp+C0h] [rbp-58h]
  __m128i si128; // [rsp+D0h] [rbp-48h]

  if ( a2 && *(_BYTE *)a2 == 1 )
  {
    v3 = *(_QWORD *)(a2 + 128);
    v4 = *(_DWORD *)(v3 + 32);
    v5 = *(__int64 **)(v3 + 24);
    if ( v4 > 0x40 )
    {
      v6 = *v5;
    }
    else
    {
      v6 = 0;
      if ( v4 )
        v6 = (__int64)((_QWORD)v5 << (64 - (unsigned __int8)v4)) >> (64 - (unsigned __int8)v4);
    }
    v7 = **a1;
    dest = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v136 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v8 = sub_A0C4A0(&dest, &v136, &dest, (unsigned __int64)&v142, v7);
    v9 = v136;
    src = v6;
    v10 = (__m128i *)&v8->m128i_u64[1];
    if ( &v8->m128i_u64[1] > (unsigned __int64 *)&v142 )
    {
      v11 = (char *)((char *)&v142 - (char *)v8);
      memcpy(v8, &src, (char *)&v142 - (char *)v8);
      if ( v9 )
      {
        v9 += 64;
        sub_9B6F20((unsigned __int64 *)&v142, &dest);
      }
      else
      {
        v9 = 64;
        sub_A09B80((unsigned __int64 *)&v132, &dest, si128.m128i_u64[1]);
        v74 = _mm_loadu_si128(&v133);
        v75 = _mm_loadu_si128(&v134);
        v142 = _mm_loadu_si128(&v132);
        v143 = v74;
        v144 = v75;
        si128.m128i_i64[0] = v135;
      }
      v12 = 8LL - (_QWORD)v11;
      v13 = (char *)&src + (_QWORD)v11;
      v10 = (__m128i *)((char *)&dest + 8LL - (_QWORD)v11);
      memcpy(&dest, v13, v12);
      v14 = (char *)v10 - (char *)&dest;
      v15 = (char *)v10 - (char *)&dest;
      if ( !v9 )
        goto LABEL_10;
LABEL_52:
      if ( v10 == &v142 || v10 == &dest )
        goto LABEL_49;
      p_dest = &dest;
      v23 = 64;
      if ( (char *)&v142 - (char *)v10 != v14 )
      {
        v49 = 64 - v14;
        if ( v14 >= 64 - v14 )
          goto LABEL_83;
        while ( v14 != 1 )
        {
          v50 = (__m128i *)((char *)p_dest + v14);
          if ( v49 > 0 )
          {
            if ( (v50 >= &p_dest[1] || v14 + 16 <= 0) && (unsigned __int64)(v49 - 1) > 0xE )
            {
              v51 = 0;
              do
              {
                v52 = _mm_loadu_si128(&p_dest[v51 / 0x10]);
                p_dest[v51 / 0x10] = _mm_loadu_si128(&v50[v51 / 0x10]);
                v50[v51 / 0x10] = v52;
                v51 += 16LL;
              }
              while ( v51 != (v49 & 0xFFFFFFFFFFFFFFF0LL) );
              v53 = v49 & 0x7FFFFFFFFFFFFFF0LL;
              v54 = (__m128i *)((char *)p_dest + (v49 & 0xFFFFFFFFFFFFFFF0LL));
              v55 = &v50->m128i_i8[v49 & 0xFFFFFFFFFFFFFFF0LL];
              if ( v49 != (v49 & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v56 = v54->m128i_i8[0];
                v54->m128i_i8[0] = *v55;
                *v55 = v56;
                if ( v49 > v53 + 1 )
                {
                  v57 = v54->m128i_i8[1];
                  v54->m128i_i8[1] = v55[1];
                  v55[1] = v57;
                  if ( v49 > v53 + 2 )
                  {
                    v58 = v54->m128i_i8[2];
                    v54->m128i_i8[2] = v55[2];
                    v55[2] = v58;
                    if ( v49 > v53 + 3 )
                    {
                      v59 = v54->m128i_i8[3];
                      v54->m128i_i8[3] = v55[3];
                      v55[3] = v59;
                      if ( v49 > v53 + 4 )
                      {
                        v60 = v54->m128i_i8[4];
                        v54->m128i_i8[4] = v55[4];
                        v55[4] = v60;
                        if ( v49 > v53 + 5 )
                        {
                          v61 = v54->m128i_i8[5];
                          v54->m128i_i8[5] = v55[5];
                          v55[5] = v61;
                          if ( v49 > v53 + 6 )
                          {
                            v62 = v54->m128i_i8[6];
                            v54->m128i_i8[6] = v55[6];
                            v55[6] = v62;
                            if ( v49 > v53 + 7 )
                            {
                              v63 = v54->m128i_i8[7];
                              v54->m128i_i8[7] = v55[7];
                              v55[7] = v63;
                              if ( v49 > v53 + 8 )
                              {
                                v64 = v54->m128i_i8[8];
                                v54->m128i_i8[8] = v55[8];
                                v55[8] = v64;
                                if ( v49 > v53 + 9 )
                                {
                                  v65 = v54->m128i_i8[9];
                                  v54->m128i_i8[9] = v55[9];
                                  v55[9] = v65;
                                  if ( v49 > v53 + 10 )
                                  {
                                    v66 = v54->m128i_i8[10];
                                    v54->m128i_i8[10] = v55[10];
                                    v55[10] = v66;
                                    if ( v49 > v53 + 11 )
                                    {
                                      v67 = v54->m128i_i8[11];
                                      v54->m128i_i8[11] = v55[11];
                                      v55[11] = v67;
                                      if ( v49 > v53 + 12 )
                                      {
                                        v68 = v54->m128i_i8[12];
                                        v54->m128i_i8[12] = v55[12];
                                        v55[12] = v68;
                                        if ( v49 > v53 + 13 )
                                        {
                                          v69 = v54->m128i_i8[13];
                                          v54->m128i_i8[13] = v55[13];
                                          v55[13] = v69;
                                          if ( v49 > v53 + 14 )
                                          {
                                            v70 = v54->m128i_i8[14];
                                            v54->m128i_i8[14] = v55[14];
                                            v55[14] = v70;
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
                v54 = (__m128i *)((char *)p_dest + v49);
              }
            }
            else
            {
              v54 = (__m128i *)((char *)p_dest + v49);
              do
              {
                v78 = v50->m128i_i8[0];
                v79 = p_dest->m128i_i8[0];
                p_dest = (__m128i *)((char *)p_dest + 1);
                v50 = (__m128i *)((char *)v50 + 1);
                p_dest[-1].m128i_i8[15] = v78;
                v50[-1].m128i_i8[15] = v79;
              }
              while ( p_dest != v54 );
            }
            p_dest = v54;
          }
          if ( !(v23 % v14) )
            goto LABEL_49;
          v49 = v14;
          v14 -= v23 % v14;
          while ( 1 )
          {
            v23 = v49;
            v49 -= v14;
            if ( v14 < v49 )
              break;
LABEL_83:
            if ( v49 == 1 )
              goto LABEL_99;
            v71 = &p_dest->m128i_i8[v23];
            v72 = (__m128i *)((char *)p_dest + v23 - v49);
            p_dest = v72;
            if ( v14 > 0 )
            {
              p_dest = (__m128i *)((char *)v72 - v14);
              do
              {
                v72 = (__m128i *)((char *)v72 - 1);
                --v71;
                v73 = v72->m128i_i8[0];
                v72->m128i_i8[0] = *v71;
                *v71 = v73;
              }
              while ( v72 != p_dest );
            }
            v14 = v23 % v49;
            if ( !(v23 % v49) )
              goto LABEL_49;
          }
        }
LABEL_96:
        v80 = v23 - 1;
        v81 = p_dest->m128i_i8[0];
        v82 = v80;
        if ( v80 )
        {
          v131 = p_dest->m128i_i8[0];
          memmove(p_dest, &p_dest->m128i_i8[1], v80);
          v81 = v131;
        }
        p_dest->m128i_i8[v82] = v81;
        goto LABEL_49;
      }
      v105 = v10;
      if ( v10 < (__m128i *)&v139 && &dest < &v10[1]
        || (unsigned __int64)v10->m128i_u64 + ~(unsigned __int64)&dest <= 0xE )
      {
        v127 = v10;
        v128 = &dest;
        do
        {
          v129 = v127->m128i_i8[0];
          v130 = v128->m128i_i8[0];
          v128 = (__m128i *)((char *)v128 + 1);
          v127 = (__m128i *)((char *)v127 + 1);
          v128[-1].m128i_i8[15] = v129;
          v127[-1].m128i_i8[15] = v130;
        }
        while ( v10 != v128 );
        goto LABEL_49;
      }
      v106 = &dest;
      do
      {
        v107 = _mm_load_si128(v106);
        v108 = _mm_loadu_si128(v105++);
        ++v106;
        v106[-1] = v108;
        v105[-1] = v107;
      }
      while ( v105 != (const __m128i *)&v10->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL] );
      v88 = &dest.m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
      v89 = &v10->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
      if ( v14 == (v14 & 0xFFFFFFFFFFFFFFF0LL) )
        goto LABEL_49;
      v109 = *v88;
      *v88 = *v89;
      *v89 = v109;
      if ( v10 == (__m128i *)(v88 + 1) )
        goto LABEL_49;
      v110 = v88[1];
      v88[1] = v89[1];
      v89[1] = v110;
      if ( v10 == (__m128i *)(v88 + 2) )
        goto LABEL_49;
      v111 = v88[2];
      v88[2] = v89[2];
      v89[2] = v111;
      if ( v10 == (__m128i *)(v88 + 3) )
        goto LABEL_49;
      v112 = v88[3];
      v88[3] = v89[3];
      v89[3] = v112;
      if ( v10 == (__m128i *)(v88 + 4)
        || (v113 = v88[4], v88[4] = v89[4], v89[4] = v113, v10 == (__m128i *)(v88 + 5))
        || (v114 = v88[5], v88[5] = v89[5], v89[5] = v114, v10 == (__m128i *)(v88 + 6))
        || (v115 = v88[6], v88[6] = v89[6], v89[6] = v115, v10 == (__m128i *)(v88 + 7))
        || (v116 = v88[7], v88[7] = v89[7], v89[7] = v116, v10 == (__m128i *)(v88 + 8))
        || (v117 = v88[8], v88[8] = v89[8], v89[8] = v117, v10 == (__m128i *)(v88 + 9))
        || (v118 = v88[9], v88[9] = v89[9], v89[9] = v118, v10 == (__m128i *)(v88 + 10))
        || (v119 = v88[10], v88[10] = v89[10], v89[10] = v119, v10 == (__m128i *)(v88 + 11))
        || (v120 = v88[11], v88[11] = v89[11], v89[11] = v120, v10 == (__m128i *)(v88 + 12))
        || (v121 = v88[12], v88[12] = v89[12], v89[12] = v121, v10 == (__m128i *)(v88 + 13))
        || (v122 = v88[13], v88[13] = v89[13], v89[13] = v122, v10 == (__m128i *)(v88 + 14)) )
      {
LABEL_49:
        sub_9B6F20((unsigned __int64 *)&v142, &dest);
        result = sub_20131D0(&v142, v15 + v9);
        goto LABEL_11;
      }
LABEL_119:
      v104 = v88[14];
      v88[14] = v89[14];
      v89[14] = v104;
      goto LABEL_49;
    }
    v8->m128i_i64[0] = v6;
    v14 = (char *)v10 - (char *)&dest;
    v15 = (char *)v10 - (char *)&dest;
    if ( v9 )
      goto LABEL_52;
  }
  else
  {
    v17 = **a1;
    dest = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v136 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    v18 = sub_A0C4A0(&dest, &v136, &dest, (unsigned __int64)&v142, v17);
    src = v136;
    v19 = sub_206E9E0(&dest, &src, v18, (unsigned __int64)&v142, a2);
    v9 = src;
    v20 = v19;
    v14 = (char *)v19 - (char *)&dest;
    v15 = (char *)v19 - (char *)&dest;
    if ( src )
    {
      if ( v19 == &v142 || v19 == &dest )
        goto LABEL_49;
      p_dest = &dest;
      v22 = (char *)((char *)&v142 - (char *)v19);
      v23 = 64;
      if ( v22 != (char *)v14 )
      {
        v24 = 64 - v14;
        if ( v14 >= 64 - v14 )
          goto LABEL_44;
        while ( v14 != 1 )
        {
          v25 = (__m128i *)((char *)p_dest + v14);
          if ( v24 > 0 )
          {
            if ( (v14 + 16 <= 0 || v25 >= &p_dest[1]) && (unsigned __int64)(v24 - 1) > 0xE )
            {
              v26 = 0;
              do
              {
                v27 = _mm_loadu_si128(&p_dest[v26 / 0x10]);
                p_dest[v26 / 0x10] = _mm_loadu_si128(&v25[v26 / 0x10]);
                v25[v26 / 0x10] = v27;
                v26 += 16LL;
              }
              while ( v26 != (v24 & 0xFFFFFFFFFFFFFFF0LL) );
              v28 = v24 & 0x7FFFFFFFFFFFFFF0LL;
              v29 = (__m128i *)((char *)p_dest + (v24 & 0xFFFFFFFFFFFFFFF0LL));
              v30 = &v25->m128i_i8[v24 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != v24 )
              {
                v31 = v29->m128i_i8[0];
                v29->m128i_i8[0] = *v30;
                *v30 = v31;
                if ( v24 > v28 + 1 )
                {
                  v32 = v29->m128i_i8[1];
                  v29->m128i_i8[1] = v30[1];
                  v30[1] = v32;
                  if ( v24 > v28 + 2 )
                  {
                    v33 = v29->m128i_i8[2];
                    v29->m128i_i8[2] = v30[2];
                    v30[2] = v33;
                    if ( v24 > v28 + 3 )
                    {
                      v34 = v29->m128i_i8[3];
                      v29->m128i_i8[3] = v30[3];
                      v30[3] = v34;
                      if ( v24 > v28 + 4 )
                      {
                        v35 = v29->m128i_i8[4];
                        v29->m128i_i8[4] = v30[4];
                        v30[4] = v35;
                        if ( v24 > v28 + 5 )
                        {
                          v36 = v29->m128i_i8[5];
                          v29->m128i_i8[5] = v30[5];
                          v30[5] = v36;
                          if ( v24 > v28 + 6 )
                          {
                            v37 = v29->m128i_i8[6];
                            v29->m128i_i8[6] = v30[6];
                            v30[6] = v37;
                            if ( v24 > v28 + 7 )
                            {
                              v38 = v29->m128i_i8[7];
                              v29->m128i_i8[7] = v30[7];
                              v30[7] = v38;
                              if ( v24 > v28 + 8 )
                              {
                                v39 = v29->m128i_i8[8];
                                v29->m128i_i8[8] = v30[8];
                                v30[8] = v39;
                                if ( v24 > v28 + 9 )
                                {
                                  v40 = v29->m128i_i8[9];
                                  v29->m128i_i8[9] = v30[9];
                                  v30[9] = v40;
                                  if ( v24 > v28 + 10 )
                                  {
                                    v41 = v29->m128i_i8[10];
                                    v29->m128i_i8[10] = v30[10];
                                    v30[10] = v41;
                                    if ( v24 > v28 + 11 )
                                    {
                                      v42 = v29->m128i_i8[11];
                                      v29->m128i_i8[11] = v30[11];
                                      v30[11] = v42;
                                      if ( v24 > v28 + 12 )
                                      {
                                        v43 = v29->m128i_i8[12];
                                        v29->m128i_i8[12] = v30[12];
                                        v30[12] = v43;
                                        if ( v24 > v28 + 13 )
                                        {
                                          v44 = v29->m128i_i8[13];
                                          v29->m128i_i8[13] = v30[13];
                                          v30[13] = v44;
                                          if ( v24 > v28 + 14 )
                                          {
                                            v45 = v29->m128i_i8[14];
                                            v29->m128i_i8[14] = v30[14];
                                            v30[14] = v45;
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
                v29 = (__m128i *)((char *)p_dest + v24);
              }
            }
            else
            {
              v29 = (__m128i *)((char *)p_dest + v24);
              do
              {
                v76 = v25->m128i_i8[0];
                v77 = p_dest->m128i_i8[0];
                p_dest = (__m128i *)((char *)p_dest + 1);
                v25 = (__m128i *)((char *)v25 + 1);
                p_dest[-1].m128i_i8[15] = v76;
                v25[-1].m128i_i8[15] = v77;
              }
              while ( p_dest != v29 );
            }
            p_dest = v29;
          }
          if ( !(v23 % v14) )
            goto LABEL_49;
          v24 = v14;
          v14 -= v23 % v14;
          while ( 1 )
          {
            v23 = v24;
            v24 -= v14;
            if ( v14 < v24 )
              break;
LABEL_44:
            if ( v24 == 1 )
            {
LABEL_99:
              v83 = p_dest->m128i_i8[v23 - 1];
              memmove(&p_dest->m128i_i8[1], p_dest, v23 - 1);
              p_dest->m128i_i8[0] = v83;
              goto LABEL_49;
            }
            v46 = &p_dest->m128i_i8[v23];
            v47 = (__m128i *)((char *)p_dest + v23 - v24);
            p_dest = v47;
            if ( v14 > 0 )
            {
              p_dest = (__m128i *)((char *)v47 - v14);
              do
              {
                v47 = (__m128i *)((char *)v47 - 1);
                --v46;
                v48 = v47->m128i_i8[0];
                v47->m128i_i8[0] = *v46;
                *v46 = v48;
              }
              while ( v47 != p_dest );
            }
            v14 = v23 % v24;
            if ( !(v23 % v24) )
              goto LABEL_49;
          }
        }
        goto LABEL_96;
      }
      v84 = v20;
      if ( v20 < (__m128i *)&v139 && &dest < &v20[1]
        || (unsigned __int64)v20->m128i_u64 + ~(unsigned __int64)&dest <= 0xE )
      {
        v123 = v20;
        v124 = &dest;
        do
        {
          v125 = v123->m128i_i8[0];
          v126 = v124->m128i_i8[0];
          v124 = (__m128i *)((char *)v124 + 1);
          v123 = (__m128i *)((char *)v123 + 1);
          v124[-1].m128i_i8[15] = v125;
          v123[-1].m128i_i8[15] = v126;
        }
        while ( v124 != v20 );
        goto LABEL_49;
      }
      v85 = &dest;
      do
      {
        v86 = _mm_load_si128(v85);
        v87 = _mm_loadu_si128(v84++);
        ++v85;
        v85[-1] = v87;
        v84[-1] = v86;
      }
      while ( &v20->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL] != (__int8 *)v84 );
      v88 = &dest.m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
      v89 = &v20->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == v14 )
        goto LABEL_49;
      v90 = *v88;
      *v88 = *v89;
      *v89 = v90;
      if ( v20 == (__m128i *)(v88 + 1) )
        goto LABEL_49;
      v91 = v88[1];
      v88[1] = v89[1];
      v89[1] = v91;
      if ( v20 == (__m128i *)(v88 + 2) )
        goto LABEL_49;
      v92 = v88[2];
      v88[2] = v89[2];
      v89[2] = v92;
      if ( v20 == (__m128i *)(v88 + 3) )
        goto LABEL_49;
      v93 = v88[3];
      v88[3] = v89[3];
      v89[3] = v93;
      if ( v20 == (__m128i *)(v88 + 4) )
        goto LABEL_49;
      v94 = v88[4];
      v88[4] = v89[4];
      v89[4] = v94;
      if ( v20 == (__m128i *)(v88 + 5) )
        goto LABEL_49;
      v95 = v88[5];
      v88[5] = v89[5];
      v89[5] = v95;
      if ( v20 == (__m128i *)(v88 + 6) )
        goto LABEL_49;
      v96 = v88[6];
      v88[6] = v89[6];
      v89[6] = v96;
      if ( v20 == (__m128i *)(v88 + 7) )
        goto LABEL_49;
      v97 = v88[7];
      v88[7] = v89[7];
      v89[7] = v97;
      if ( v20 == (__m128i *)(v88 + 8) )
        goto LABEL_49;
      v98 = v88[8];
      v88[8] = v89[8];
      v89[8] = v98;
      if ( v20 == (__m128i *)(v88 + 9) )
        goto LABEL_49;
      v99 = v88[9];
      v88[9] = v89[9];
      v89[9] = v99;
      if ( v20 == (__m128i *)(v88 + 10) )
        goto LABEL_49;
      v100 = v88[10];
      v88[10] = v89[10];
      v89[10] = v100;
      if ( v20 == (__m128i *)(v88 + 11) )
        goto LABEL_49;
      v101 = v88[11];
      v88[11] = v89[11];
      v89[11] = v101;
      if ( v20 == (__m128i *)(v88 + 12) )
        goto LABEL_49;
      v102 = v88[12];
      v88[12] = v89[12];
      v89[12] = v102;
      if ( v20 == (__m128i *)(v88 + 13) )
        goto LABEL_49;
      v103 = v88[13];
      v88[13] = v89[13];
      v89[13] = v103;
      if ( v20 == (__m128i *)(v88 + 14) )
        goto LABEL_49;
      goto LABEL_119;
    }
  }
LABEL_10:
  result = sub_2012F20(&dest, v14, si128.m128i_i64[1]);
LABEL_11:
  **a1 = result;
  return result;
}
