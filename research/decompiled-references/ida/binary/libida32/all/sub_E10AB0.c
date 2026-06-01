unsigned __int64 __fastcall sub_E10AB0(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rbp
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r10
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  const __m128i *v35; // rdx
  const __m128i *v36; // rax
  const __m128i *v37; // r8
  __m128i si128; // xmm0
  __m128i v39; // xmm1
  __int8 v40; // di
  __int8 v41; // cl
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rsi
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 *v49; // r13
  __int64 v50; // r8
  char *v51; // rcx
  unsigned __int64 v52; // rdx
  __m128i v53; // xmm0
  __int64 v54; // rsi
  char *v55; // rdi
  char *v56; // rcx
  char v57; // dl
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // dl
  char v62; // dl
  char v63; // dl
  char v64; // dl
  char v65; // dl
  char v66; // dl
  char v67; // dl
  char v68; // dl
  char v69; // dl
  char v70; // dl
  char v71; // dl
  __int64 v72; // rdx
  _BYTE *v73; // rdx
  unsigned __int64 *v74; // rcx
  char v75; // si
  char *v76; // rsi
  unsigned __int64 *v77; // rdx
  char v78; // di
  char v79; // r10
  size_t v80; // rax
  char v81; // r14
  size_t v82; // rcx
  char v83; // r14
  __int64 v84; // rsi
  unsigned __int64 *v85; // rcx
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rdi
  __int64 v88; // r8
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rsi
  __int64 v91; // rcx
  unsigned __int64 v92; // rdx
  __int64 v93; // r11
  unsigned __int64 v94; // rsi
  unsigned __int64 v95; // r9
  size_t v96; // rdi
  __int64 v97; // rsi
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v102; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v103; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v104; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v105; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v106; // [rsp+30h] [rbp-A8h]
  __int64 v107; // [rsp+38h] [rbp-A0h]
  size_t v108; // [rsp+40h] [rbp-98h]
  unsigned __int64 v109; // [rsp+48h] [rbp-90h]
  const __m128i *p_src; // [rsp+50h] [rbp-88h]
  unsigned __int64 v111; // [rsp+58h] [rbp-80h]
  unsigned __int64 src; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v113; // [rsp+68h] [rbp-70h]
  unsigned __int64 v114; // [rsp+70h] [rbp-68h]
  unsigned __int64 v115; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v116; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v117; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v118; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v119; // [rsp+98h] [rbp-40h] BYREF
  _BYTE v120[56]; // [rsp+A0h] [rbp-38h] BYREF

  v1 = *(_QWORD **)a1;
  v2 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v2 )
    return 0x65B0C5ECC2C5CC82LL;
  v3 = 0;
  v4 = *(_QWORD *)(*v1 + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*v1 + 40LL) & 7) != 0 )
    v4 = 0;
  src = v4;
  if ( (_QWORD *)v2 == v1 + 1 )
  {
    v45 = HIDWORD(src) ^ 0xFF51AFD7ED558CCDLL;
    v46 = 0x9DDFEA08EB382D69LL * (v45 ^ (8LL * (unsigned int)src + 8));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47))) >> 47));
  }
  v5 = *(_QWORD *)(v1[1] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v1[1] + 40LL) & 7) != 0 )
    v5 = 0;
  v6 = v5;
  v113 = v5;
  if ( (_QWORD *)v2 == v1 + 2 )
  {
    v84 = __ROR8__(v5 + 16, 16);
    return v5
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * (v84
             ^ (0x9DDFEA08EB382D69LL * (v84 ^ v4 ^ 0xFF51AFD7ED558CCDLL))
             ^ ((0x9DDFEA08EB382D69LL * (v84 ^ v4 ^ 0xFF51AFD7ED558CCDLL)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * (v84
              ^ (0x9DDFEA08EB382D69LL * (v84 ^ v4 ^ 0xFF51AFD7ED558CCDLL))
              ^ ((0x9DDFEA08EB382D69LL * (v84 ^ v4 ^ 0xFF51AFD7ED558CCDLL)) >> 47))) >> 47)));
  }
  v7 = *(_QWORD *)(v1[2] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v1[2] + 40LL) & 7) != 0 )
    v7 = 0;
  v114 = v7;
  if ( (_QWORD *)v2 == v1 + 3 )
  {
    v85 = &v115;
  }
  else
  {
    v8 = *(_QWORD *)(v1[3] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v1[3] + 40LL) & 7) != 0 )
      v8 = 0;
    v115 = v8;
    if ( (_QWORD *)v2 == v1 + 4 )
    {
      v85 = &v116;
    }
    else
    {
      v9 = *(_QWORD *)(v1[4] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v1[4] + 40LL) & 7) != 0 )
        v9 = 0;
      v116 = v9;
      if ( (_QWORD *)v2 == v1 + 5 )
      {
        v85 = &v117;
      }
      else
      {
        v10 = *(_QWORD *)(v1[5] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v1[5] + 40LL) & 7) != 0 )
          v10 = 0;
        v117 = v10;
        if ( (_QWORD *)v2 == v1 + 6 )
        {
          v85 = &v118;
        }
        else
        {
          v11 = *(_QWORD *)(v1[6] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v1[6] + 40LL) & 7) != 0 )
            v11 = 0;
          v118 = v11;
          if ( (_QWORD *)v2 == v1 + 7 )
          {
            v85 = &v119;
          }
          else
          {
            v12 = v1 + 8;
            if ( (*(_QWORD *)(v1[7] + 40LL) & 7) == 0 )
              v3 = *(_QWORD *)(v1[7] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
            v119 = v3;
            if ( (_QWORD *)v2 != v12 )
            {
              v13 = v1[8];
              v109 = 64;
              v14 = *(_QWORD *)(v13 + 40);
              v15 = v4 + 0x298DF016A9F64655LL;
              v106 = (0xB492B66FBE98F273LL * __ROL8__(v6 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
              v16 = v10 - 0x7323D61940A0DA1FLL - 0x4B6D499041670D8DLL * __ROL8__(v11 - 0x414BFF9ED66A691CLL, 22);
              v17 = v15 + v7 + v6;
              v105 = v17 + v8;
              v18 = v9 + 0x4BF62CB950C3753ALL;
              v102 = v15 + __ROL8__(v17, 20) + __ROR8__(v106 + v15 + v8 - 0xAE502812AB8D92LL, 21);
              v103 = __ROR8__(v16 + v18 + v3 + v7, 21) + __ROL8__(v18 + v11 + v10, 20) + v18;
              v104 = v18 + v11 + v10 + v3;
              v101 = 0x544962662A7EE1A4LL;
              p_src = (const __m128i *)&src;
              v111 = ~(unsigned __int64)&src;
              while ( 1 )
              {
                v27 = v14 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v14 & 7) != 0 )
                  v27 = 0;
                src = v27;
                if ( (_QWORD *)v2 == v12 + 1 )
                {
                  v107 = 8;
                  v12 = (_QWORD *)v2;
                  v47 = 8;
                }
                else
                {
                  v28 = *(_QWORD *)(v12[1] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v12[1] + 40LL) & 7) != 0 )
                    v28 = 0;
                  v113 = v28;
                  if ( (_QWORD *)v2 == v12 + 2 )
                  {
                    v12 = (_QWORD *)v2;
                    v47 = 16;
                    v107 = 16;
                  }
                  else
                  {
                    v29 = *(_QWORD *)(v12[2] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_QWORD *)(v12[2] + 40LL) & 7) != 0 )
                      v29 = 0;
                    v114 = v29;
                    if ( (_QWORD *)v2 == v12 + 3 )
                    {
                      v12 = (_QWORD *)v2;
                      v47 = 24;
                      v107 = 24;
                    }
                    else
                    {
                      v30 = *(_QWORD *)(v12[3] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (*(_QWORD *)(v12[3] + 40LL) & 7) != 0 )
                        v30 = 0;
                      v115 = v30;
                      if ( (_QWORD *)v2 == v12 + 4 )
                      {
                        v35 = p_src;
                        v36 = p_src + 2;
                        v37 = p_src + 2;
                        if ( (unsigned __int64)p_src[2].m128i_u64 + v111 <= 0xE )
                        {
                          do
                          {
                            v40 = v36->m128i_i8[0];
                            v41 = v35->m128i_i8[0];
                            v35 = (const __m128i *)((char *)v35 + 1);
                            v36 = (const __m128i *)((char *)v36 + 1);
                            v35[-1].m128i_i8[15] = v40;
                            v36[-1].m128i_i8[15] = v41;
                          }
                          while ( v35 != v37 );
                        }
                        else
                        {
                          do
                          {
                            si128 = _mm_load_si128(v35);
                            v39 = _mm_loadu_si128(v36++);
                            ++v35;
                            v35[-1] = v39;
                            v36[-1] = si128;
                          }
                          while ( v36 != (const __m128i *)v120 );
                        }
                        v29 = v114;
                        v28 = v113;
                        v12 += 4;
                        v107 = 32;
                        v19 = v119;
                        v33 = v118;
                        v32 = v117;
                        v27 = src;
                        v30 = v115;
                        v31 = v116;
                        v20 = v114 + v119;
                        goto LABEL_29;
                      }
                      v31 = *(_QWORD *)(v12[4] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (*(_QWORD *)(v12[4] + 40LL) & 7) != 0 )
                        v31 = 0;
                      v116 = v31;
                      if ( (_QWORD *)v2 == v12 + 5 )
                      {
                        v12 = (_QWORD *)v2;
                        v47 = 40;
                        v107 = 40;
                      }
                      else
                      {
                        v32 = *(_QWORD *)(v12[5] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                        if ( (*(_QWORD *)(v12[5] + 40LL) & 7) != 0 )
                          v32 = 0;
                        v117 = v32;
                        if ( (_QWORD *)v2 == v12 + 6 )
                        {
                          v12 = (_QWORD *)v2;
                          v47 = 48;
                          v107 = 48;
                        }
                        else
                        {
                          v33 = *(_QWORD *)(v12[6] + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (*(_QWORD *)(v12[6] + 40LL) & 7) != 0 )
                            v33 = 0;
                          v118 = v33;
                          if ( (_QWORD *)v2 != v12 + 7 )
                          {
                            v34 = *(_QWORD *)(v12[7] + 40LL);
                            if ( (v34 & 7) != 0 )
                            {
                              v20 = v29;
                              v19 = 0;
                            }
                            else
                            {
                              v19 = v34 & 0xFFFFFFFFFFFFFFF8LL;
                              v20 = v19 + v29;
                            }
                            v119 = v19;
                            v12 += 8;
                            v107 = 64;
                            goto LABEL_29;
                          }
                          v12 = (_QWORD *)v2;
                          v47 = 56;
                          v107 = 56;
                        }
                      }
                    }
                  }
                }
                v48 = 64;
                v49 = &src;
                v50 = 64 - v47;
                if ( v47 >= 64 - v47 )
                {
                  while ( v50 != 1 )
                  {
                    v73 = (char *)v49 + v48;
                    v49 = (unsigned __int64 *)((char *)v49 + v48 - v50);
                    if ( v47 > 0 )
                    {
                      v74 = (unsigned __int64 *)((char *)v49 - v47);
                      do
                      {
                        v49 = (unsigned __int64 *)((char *)v49 - 1);
                        --v73;
                        v75 = *(_BYTE *)v49;
                        *(_BYTE *)v49 = *v73;
                        *v73 = v75;
                      }
                      while ( v49 != v74 );
                    }
                    v72 = v48 % v50;
                    if ( !(v48 % v50) )
                      goto LABEL_94;
LABEL_88:
                    v48 = v50;
                    v47 = v72;
                    v50 -= v72;
                    if ( v72 < v50 )
                      goto LABEL_63;
                  }
                  v83 = *((_BYTE *)v49 + v48 - 1);
                  memmove((char *)v49 + 1, v49, v48 - 1);
                  *(_BYTE *)v49 = v83;
                }
                else
                {
LABEL_63:
                  if ( v47 == 1 )
                  {
                    v80 = v48 - 1;
                    v81 = *(_BYTE *)v49;
                    v82 = v80;
                    if ( v80 )
                    {
                      v108 = v80;
                      memmove(v49, (char *)v49 + 1, v80);
                      v82 = v108;
                    }
                    *((_BYTE *)v49 + v82) = v81;
                  }
                  else
                  {
                    v51 = (char *)v49 + v47;
                    if ( v50 > 0 )
                    {
                      if ( (v47 + 16 <= 0 || v51 >= (char *)v49 + 16) && (unsigned __int64)(v50 - 1) > 0xE )
                      {
                        v52 = 0;
                        do
                        {
                          v53 = _mm_loadu_si128((const __m128i *)&v49[v52 / 8]);
                          *(__m128i *)&v49[v52 / 8] = _mm_loadu_si128((const __m128i *)&v51[v52]);
                          *(__m128i *)&v51[v52] = v53;
                          v52 += 16LL;
                        }
                        while ( (v50 & 0xFFFFFFFFFFFFFFF0LL) != v52 );
                        v54 = v50 & 0x7FFFFFFFFFFFFFF0LL;
                        v55 = (char *)v49 + (v50 & 0xFFFFFFFFFFFFFFF0LL);
                        v56 = &v51[v50 & 0xFFFFFFFFFFFFFFF0LL];
                        if ( (v50 & 0xFFFFFFFFFFFFFFF0LL) != v50 )
                        {
                          v57 = *v55;
                          *v55 = *v56;
                          *v56 = v57;
                          if ( v50 > v54 + 1 )
                          {
                            v58 = v55[1];
                            v55[1] = v56[1];
                            v56[1] = v58;
                            if ( v50 > v54 + 2 )
                            {
                              v59 = v55[2];
                              v55[2] = v56[2];
                              v56[2] = v59;
                              if ( v50 > v54 + 3 )
                              {
                                v60 = v55[3];
                                v55[3] = v56[3];
                                v56[3] = v60;
                                if ( v50 > v54 + 4 )
                                {
                                  v61 = v55[4];
                                  v55[4] = v56[4];
                                  v56[4] = v61;
                                  if ( v50 > v54 + 5 )
                                  {
                                    v62 = v55[5];
                                    v55[5] = v56[5];
                                    v56[5] = v62;
                                    if ( v50 > v54 + 6 )
                                    {
                                      v63 = v55[6];
                                      v55[6] = v56[6];
                                      v56[6] = v63;
                                      if ( v50 > v54 + 7 )
                                      {
                                        v64 = v55[7];
                                        v55[7] = v56[7];
                                        v56[7] = v64;
                                        if ( v50 > v54 + 8 )
                                        {
                                          v65 = v55[8];
                                          v55[8] = v56[8];
                                          v56[8] = v65;
                                          if ( v50 > v54 + 9 )
                                          {
                                            v66 = v55[9];
                                            v55[9] = v56[9];
                                            v56[9] = v66;
                                            if ( v50 > v54 + 10 )
                                            {
                                              v67 = v55[10];
                                              v55[10] = v56[10];
                                              v56[10] = v67;
                                              if ( v50 > v54 + 11 )
                                              {
                                                v68 = v55[11];
                                                v55[11] = v56[11];
                                                v56[11] = v68;
                                                if ( v50 > v54 + 12 )
                                                {
                                                  v69 = v55[12];
                                                  v55[12] = v56[12];
                                                  v56[12] = v69;
                                                  if ( v50 > v54 + 13 )
                                                  {
                                                    v70 = v55[13];
                                                    v55[13] = v56[13];
                                                    v56[13] = v70;
                                                    if ( v50 > v54 + 14 )
                                                    {
                                                      v71 = v55[14];
                                                      v55[14] = v56[14];
                                                      v56[14] = v71;
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
                        v76 = &v51[v50];
                        v77 = v49;
                        do
                        {
                          v78 = *(_BYTE *)v77;
                          v79 = *v51++;
                          v77 = (unsigned __int64 *)((char *)v77 + 1);
                          *((_BYTE *)v77 - 1) = v79;
                          *(v51 - 1) = v78;
                        }
                        while ( v76 != v51 );
                      }
                      v49 = (unsigned __int64 *)((char *)v49 + v50);
                    }
                    if ( v48 % v47 )
                    {
                      v50 = v47;
                      v72 = v47 - v48 % v47;
                      goto LABEL_88;
                    }
                  }
                }
LABEL_94:
                v29 = v114;
                v19 = v119;
                v28 = v113;
                v33 = v118;
                v27 = src;
                v32 = v117;
                v20 = v114 + v119;
                v30 = v115;
                v31 = v116;
LABEL_29:
                v21 = __ROL8__(v28 + v101 + v16 + v105, 27);
                v16 = v105 + v32 - 0x4B6D499041670D8DLL * __ROL8__(v33 + v102 + v16, 22);
                v101 = 0xB492B66FBE98F273LL * __ROL8__(v104 + v106, 31);
                v22 = v103 ^ (0xB492B66FBE98F273LL * v21);
                v108 = v22;
                v23 = v27 - 0x4B6D499041670D8DLL * v102;
                v24 = v23 + v29 + v28;
                v102 = __ROL8__(v24, 20) + v23 + __ROR8__(v22 + v23 + v30 + v104, 21);
                v105 = v24 + v30;
                v25 = v101 + v103 + v31;
                v103 = __ROR8__(v16 + v25 + v20, 21) + __ROL8__(v25 + v33 + v32, 20) + v25;
                v26 = v25 + v33 + v32 + v19;
                v104 = v26;
                v109 += v107;
                if ( (_QWORD *)v2 == v12 )
                {
                  v42 = v101
                      - 0x4B6D499041670D8DLL * (v109 ^ (v109 >> 47))
                      - 0x622015F714C7D297LL
                      * (((0x9DDFEA08EB382D69LL
                         * (((0x9DDFEA08EB382D69LL * (v103 ^ v102)) >> 47)
                          ^ v103
                          ^ (0x9DDFEA08EB382D69LL * (v103 ^ v102)))) >> 47)
                       ^ (0x9DDFEA08EB382D69LL
                        * (((0x9DDFEA08EB382D69LL * (v103 ^ v102)) >> 47) ^ v103
                                                                          ^ (0x9DDFEA08EB382D69LL * (v103 ^ v102)))));
                  v43 = 0x9DDFEA08EB382D69LL
                      * (v42
                       ^ (v22
                        - 0x4B6D499041670D8DLL * (v16 ^ (v16 >> 47))
                        - 0x622015F714C7D297LL
                        * (((0x9DDFEA08EB382D69LL
                           * (((0x9DDFEA08EB382D69LL * (v26 ^ v105)) >> 47) ^ v26
                                                                            ^ (0x9DDFEA08EB382D69LL * (v26 ^ v105)))) >> 47)
                         ^ (0x9DDFEA08EB382D69LL
                          * (((0x9DDFEA08EB382D69LL * (v26 ^ v105)) >> 47) ^ v26 ^ (0x9DDFEA08EB382D69LL * (v26 ^ v105)))))));
                  return 0x9DDFEA08EB382D69LL
                       * ((0x9DDFEA08EB382D69LL * (v42 ^ v43 ^ (v43 >> 47)))
                        ^ ((0x9DDFEA08EB382D69LL * (v42 ^ v43 ^ (v43 >> 47))) >> 47));
                }
                v106 = v22;
                v14 = *(_QWORD *)(*v12 + 40LL);
              }
            }
            v85 = (unsigned __int64 *)v120;
          }
        }
      }
    }
  }
  v86 = (char *)v85 - (char *)&src;
  if ( v86 - 17 <= 0xF )
  {
    v87 = 0x9AE16A3B2F90404FLL * *(unsigned __int64 *)((char *)&v111 + v86);
    v88 = __ROL8__(0xB492B66FBE98F273LL * src - v113, 21);
    v89 = 0xC3A5C85C97CB3127LL * *(_QWORD *)((char *)&p_src + v86);
    v90 = v86 + 0xB492B66FBE98F273LL * src - 0xAE502812AA7333LL + __ROR8__(v113 ^ 0xC949D7C7509E6557LL, 20) - v87;
    v91 = __ROR8__(v87 ^ 0xFF51AFD7ED558CCDLL, 30);
    v92 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v90 ^ (v89 + v88 + v91)))
         ^ v90
         ^ ((0x9DDFEA08EB382D69LL * (v90 ^ (v89 + v88 + v91))) >> 47));
    return 0x9DDFEA08EB382D69LL * (v92 ^ (v92 >> 47));
  }
  if ( v86 > 0x20 )
  {
    v93 = *(__int64 *)((char *)&p_src + v86);
    v94 = src - 0x3C5A37A36834CED9LL * (v93 + v86);
    v95 = v94 + v113 + v114;
    v96 = *(size_t *)((char *)&v108 + v86) + v114;
    v97 = __ROR8__(v95, 31) + __ROL8__(v115 + v94, 12) + __ROR8__(v94 + v113, 7) + __ROL8__(v94, 27);
    v98 = 0x9AE16A3B2F90404FLL
        * (v95
         + __ROR8__(v96 + *(unsigned __int64 *)((char *)&v109 + v86) + v93, 31)
         + v115
         + __ROL8__(v96, 27)
         + __ROL8__(v96 + *(unsigned __int64 *)((char *)&v111 + v86), 12)
         + __ROR8__(v96 + *(unsigned __int64 *)((char *)&v109 + v86), 7))
        - 0x3C5A37A36834CED9LL
        * (v97 + *(unsigned __int64 *)((char *)&v111 + v86) + v96 + *(unsigned __int64 *)((char *)&v109 + v86) + v93);
    v99 = v97 + ((0xC3A5C85C97CB3127LL * ((v98 >> 47) ^ v98)) ^ 0xFF51AFD7ED558CCDLL);
    return 0x9AE16A3B2F90404FLL * (v99 ^ (v99 >> 47));
  }
  if ( !v86 )
    return 0x65B0C5ECC2C5CC82LL;
  v100 = (0xC949D7C7509E6557LL * ((unsigned int)v86 + 4 * *((unsigned __int8 *)&v111 + v86 + 7)))
       ^ (0x9AE16A3B2F90404FLL * ((unsigned __int8)src + (*((unsigned __int8 *)&src + (v86 >> 1)) << 8)))
       ^ 0xFF51AFD7ED558CCDLL;
  return 0x9AE16A3B2F90404FLL * (v100 ^ (v100 >> 47));
}

