unsigned __int64 __fastcall sub_2092C70(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 *v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r10
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r11
  __int64 v32; // rsi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  const __m128i *v37; // rcx
  const __m128i *v38; // rax
  __m128i si128; // xmm0
  __m128i v40; // xmm2
  __int64 v41; // r9
  __int64 v42; // rax
  char *v43; // r8
  __int64 v44; // rdi
  char *v45; // rcx
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __int64 v48; // rsi
  char *v49; // r10
  char *v50; // rcx
  char v51; // dl
  char v52; // dl
  char v53; // dl
  char v54; // dl
  char v55; // dl
  char v56; // dl
  char v57; // dl
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // dl
  char v62; // dl
  char v63; // dl
  char v64; // dl
  char v65; // dl
  __int64 v66; // rdx
  char *v67; // rcx
  char *v68; // rdx
  char v69; // si
  char *v70; // r11
  char *v71; // rdx
  char v72; // si
  char v73; // r10
  size_t v74; // rax
  char v75; // cl
  size_t v76; // r9
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  const __m128i *v79; // rdi
  __int8 v80; // r8
  __int8 v81; // si
  char *v82; // rax
  __int64 v83; // rdi
  char *v84; // rdx
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdi
  __int64 v87; // r8
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rsi
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // rsi
  __int8 *v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // [rsp+0h] [rbp-C8h]
  __int64 v101; // [rsp+8h] [rbp-C0h]
  __int64 v102; // [rsp+10h] [rbp-B8h]
  __int64 v103; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v104; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v105; // [rsp+28h] [rbp-A0h]
  const __m128i *p_src; // [rsp+30h] [rbp-98h]
  unsigned __int64 v107; // [rsp+38h] [rbp-90h]
  _BYTE v108[15]; // [rsp+40h] [rbp-88h]
  char v109; // [rsp+4Fh] [rbp-79h]
  __int64 src; // [rsp+50h] [rbp-78h] BYREF
  __int64 v111; // [rsp+58h] [rbp-70h]
  __int64 v112; // [rsp+60h] [rbp-68h]
  __int64 v113; // [rsp+68h] [rbp-60h] BYREF
  __int64 v114; // [rsp+70h] [rbp-58h] BYREF
  __int64 v115; // [rsp+78h] [rbp-50h] BYREF
  __int64 v116; // [rsp+80h] [rbp-48h] BYREF
  __int64 v117; // [rsp+88h] [rbp-40h] BYREF
  _BYTE v118[56]; // [rsp+90h] [rbp-38h] BYREF

  if ( a1 == a2 )
    return 0x65B0C5ECC2C5CC82LL;
  v2 = *a1;
  src = *a1;
  if ( a2 == a1 + 1 )
  {
    v77 = HIDWORD(src) ^ 0xFF51AFD7ED558CCDLL;
    v78 = 0x9DDFEA08EB382D69LL * (v77 ^ (8LL * (unsigned int)src + 8));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v78 ^ v77 ^ (v78 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v78 ^ v77 ^ (v78 >> 47))) >> 47));
  }
  else
  {
    v3 = a1[1];
    v111 = v3;
    if ( a2 == a1 + 2 )
    {
      v83 = __ROR8__(v3 + 16, 16);
      return v3
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * (v83
               ^ (0x9DDFEA08EB382D69LL * (v83 ^ v2 ^ 0xFF51AFD7ED558CCDLL))
               ^ ((0x9DDFEA08EB382D69LL * (v83 ^ v2 ^ 0xFF51AFD7ED558CCDLL)) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * (v83
                ^ (0x9DDFEA08EB382D69LL * (v83 ^ v2 ^ 0xFF51AFD7ED558CCDLL))
                ^ ((0x9DDFEA08EB382D69LL * (v83 ^ v2 ^ 0xFF51AFD7ED558CCDLL)) >> 47))) >> 47)));
    }
    else
    {
      v4 = a1[2];
      v112 = v4;
      if ( a2 == a1 + 3 )
      {
        v84 = (char *)&v113;
      }
      else
      {
        v5 = a1[3];
        v113 = v5;
        if ( a2 == a1 + 4 )
        {
          v84 = (char *)&v114;
        }
        else
        {
          v6 = a1[4];
          v114 = v6;
          if ( a2 == a1 + 5 )
          {
            v84 = (char *)&v115;
          }
          else
          {
            v7 = a1[5];
            v115 = v7;
            if ( a2 == a1 + 6 )
            {
              v84 = (char *)&v116;
            }
            else
            {
              v8 = a1[6];
              v116 = v8;
              if ( a2 == a1 + 7 )
              {
                v84 = (char *)&v117;
              }
              else
              {
                v9 = a1[7];
                v10 = a1 + 8;
                v117 = v9;
                if ( a2 != a1 + 8 )
                {
                  v11 = a1[8];
                  v105 = 64;
                  v104 = (0xB492B66FBE98F273LL * __ROL8__(v3 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
                  v13 = v7 - 0x7323D61940A0DA1FLL - 0x4B6D499041670D8DLL * __ROL8__(v8 - 0x414BFF9ED66A691CLL, 22);
                  v14 = v2 + 0x298DF016A9F64655LL + v4 + v3;
                  v15 = __ROR8__(v104 + v2 + 0x298DF016A9F64655LL + v5 - 0xAE502812AB8D92LL, 21)
                      + v2
                      + 0x298DF016A9F64655LL
                      + __ROL8__(v14, 20);
                  v16 = v6 + 0x4BF62CB950C3753ALL;
                  v17 = v14 + v5;
                  v18 = v16 + v8 + v7;
                  v19 = __ROL8__(v18, 20) + v16 + __ROR8__(v13 + v16 + v9 + v4, 21);
                  v20 = v15;
                  v101 = v19;
                  v102 = v9 + v18;
                  v100 = 0x544962662A7EE1A4LL;
                  p_src = (const __m128i *)&src;
                  v107 = ~(unsigned __int64)&src;
                  while ( 1 )
                  {
                    src = v11;
                    if ( a2 == v10 + 1 )
                    {
                      v103 = 8;
                      v10 = a2;
                      v41 = 8;
                    }
                    else
                    {
                      v21 = v10[1];
                      v111 = v21;
                      if ( a2 == v10 + 2 )
                      {
                        v10 = a2;
                        v41 = 16;
                        v103 = 16;
                      }
                      else
                      {
                        v22 = v10[2];
                        v112 = v22;
                        if ( a2 == v10 + 3 )
                        {
                          v10 = a2;
                          v41 = 24;
                          v103 = 24;
                        }
                        else
                        {
                          v23 = v10[3];
                          v113 = v23;
                          if ( a2 == v10 + 4 )
                          {
                            v37 = p_src;
                            v38 = p_src + 2;
                            if ( (unsigned __int64)p_src[2].m128i_u64 + v107 <= 0xE )
                            {
                              v79 = p_src + 2;
                              do
                              {
                                v80 = v38->m128i_i8[0];
                                v81 = v37->m128i_i8[0];
                                v37 = (const __m128i *)((char *)v37 + 1);
                                v38 = (const __m128i *)((char *)v38 + 1);
                                v37[-1].m128i_i8[15] = v80;
                                v38[-1].m128i_i8[15] = v81;
                              }
                              while ( v37 != v79 );
                            }
                            else
                            {
                              do
                              {
                                si128 = _mm_load_si128(v37);
                                v40 = _mm_loadu_si128(v38++);
                                ++v37;
                                v37[-1] = v40;
                                v38[-1] = si128;
                              }
                              while ( v38 != (const __m128i *)v118 );
                            }
                            v21 = v111;
                            v26 = v116;
                            v10 += 4;
                            v103 = 32;
                            v25 = v115;
                            v11 = src;
                            v23 = v113;
                            v22 = v112;
                            v24 = v114;
                            v27 = v117;
                            goto LABEL_20;
                          }
                          v24 = v10[4];
                          v114 = v24;
                          if ( a2 == v10 + 5 )
                          {
                            v10 = a2;
                            v41 = 40;
                            v103 = 40;
                          }
                          else
                          {
                            v25 = v10[5];
                            v115 = v25;
                            if ( a2 == v10 + 6 )
                            {
                              v10 = a2;
                              v41 = 48;
                              v103 = 48;
                            }
                            else
                            {
                              v26 = v10[6];
                              v116 = v26;
                              if ( a2 != v10 + 7 )
                              {
                                v27 = v10[7];
                                v10 += 8;
                                v103 = 64;
                                v117 = v27;
                                goto LABEL_20;
                              }
                              v10 = a2;
                              v41 = 56;
                              v103 = 56;
                            }
                          }
                        }
                      }
                    }
                    v42 = 64;
                    v43 = (char *)&src;
                    v44 = 64 - v41;
                    if ( v41 >= 64 - v41 )
                    {
                      while ( v44 != 1 )
                      {
                        v67 = &v43[v42];
                        v68 = &v43[v42 - v44];
                        v43 = v68;
                        if ( v41 > 0 )
                        {
                          v43 = &v68[-v41];
                          do
                          {
                            --v68;
                            --v67;
                            v69 = *v68;
                            *v68 = *v67;
                            *v67 = v69;
                          }
                          while ( v68 != v43 );
                        }
                        v66 = v42 % v44;
                        if ( !(v42 % v44) )
                          goto LABEL_58;
LABEL_52:
                        v42 = v44;
                        v41 = v66;
                        v44 -= v66;
                        if ( v66 < v44 )
                          goto LABEL_27;
                      }
                      *(_QWORD *)v108 = v43;
                      v109 = v43[v42 - 1];
                      memmove(v43 + 1, v43, v42 - 1);
                      **(_BYTE **)v108 = v109;
                    }
                    else
                    {
LABEL_27:
                      if ( v41 == 1 )
                      {
                        v74 = v42 - 1;
                        v75 = *v43;
                        v76 = v74;
                        if ( v74 )
                        {
                          v109 = *v43;
                          *(_QWORD *)v108 = v74;
                          v82 = (char *)memmove(v43, v43 + 1, v74);
                          v75 = v109;
                          v76 = *(_QWORD *)v108;
                          v43 = v82;
                        }
                        v43[v76] = v75;
                      }
                      else
                      {
                        v45 = &v43[v41];
                        if ( v44 > 0 )
                        {
                          if ( (v41 + 16 <= 0 || v45 >= v43 + 16) && (unsigned __int64)(v44 - 1) > 0xE )
                          {
                            v46 = 0;
                            do
                            {
                              v47 = _mm_loadu_si128((const __m128i *)&v43[v46]);
                              *(__m128i *)&v43[v46] = _mm_loadu_si128((const __m128i *)&v45[v46]);
                              *(__m128i *)&v45[v46] = v47;
                              v46 += 16;
                            }
                            while ( v46 != (v44 & 0xFFFFFFFFFFFFFFF0LL) );
                            v48 = v44 & 0x7FFFFFFFFFFFFFF0LL;
                            v49 = &v43[v44 & 0xFFFFFFFFFFFFFFF0LL];
                            v50 = &v45[v44 & 0xFFFFFFFFFFFFFFF0LL];
                            if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) != v44 )
                            {
                              v51 = *v49;
                              *v49 = *v50;
                              *v50 = v51;
                              if ( v44 > v48 + 1 )
                              {
                                v52 = v49[1];
                                v49[1] = v50[1];
                                v50[1] = v52;
                                if ( v44 > v48 + 2 )
                                {
                                  v53 = v49[2];
                                  v49[2] = v50[2];
                                  v50[2] = v53;
                                  if ( v44 > v48 + 3 )
                                  {
                                    v54 = v49[3];
                                    v49[3] = v50[3];
                                    v50[3] = v54;
                                    if ( v44 > v48 + 4 )
                                    {
                                      v55 = v49[4];
                                      v49[4] = v50[4];
                                      v50[4] = v55;
                                      if ( v44 > v48 + 5 )
                                      {
                                        v56 = v49[5];
                                        v49[5] = v50[5];
                                        v50[5] = v56;
                                        if ( v44 > v48 + 6 )
                                        {
                                          v57 = v49[6];
                                          v49[6] = v50[6];
                                          v50[6] = v57;
                                          if ( v44 > v48 + 7 )
                                          {
                                            v58 = v49[7];
                                            v49[7] = v50[7];
                                            v50[7] = v58;
                                            if ( v44 > v48 + 8 )
                                            {
                                              v59 = v49[8];
                                              v49[8] = v50[8];
                                              v50[8] = v59;
                                              if ( v44 > v48 + 9 )
                                              {
                                                v60 = v49[9];
                                                v49[9] = v50[9];
                                                v50[9] = v60;
                                                if ( v44 > v48 + 10 )
                                                {
                                                  v61 = v49[10];
                                                  v49[10] = v50[10];
                                                  v50[10] = v61;
                                                  if ( v44 > v48 + 11 )
                                                  {
                                                    v62 = v49[11];
                                                    v49[11] = v50[11];
                                                    v50[11] = v62;
                                                    if ( v44 > v48 + 12 )
                                                    {
                                                      v63 = v49[12];
                                                      v49[12] = v50[12];
                                                      v50[12] = v63;
                                                      if ( v44 > v48 + 13 )
                                                      {
                                                        v64 = v49[13];
                                                        v49[13] = v50[13];
                                                        v50[13] = v64;
                                                        if ( v44 > v48 + 14 )
                                                        {
                                                          v65 = v49[14];
                                                          v49[14] = v50[14];
                                                          v50[14] = v65;
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
                            v70 = &v45[v44];
                            v71 = v43;
                            do
                            {
                              v72 = *v71;
                              v73 = *v45++;
                              *v71++ = v73;
                              *(v45 - 1) = v72;
                            }
                            while ( v70 != v45 );
                          }
                          v43 += v44;
                        }
                        if ( v42 % v41 )
                        {
                          v44 = v41;
                          v66 = v41 - v42 % v41;
                          goto LABEL_52;
                        }
                      }
                    }
LABEL_58:
                    v21 = v111;
                    v26 = v116;
                    v25 = v115;
                    v11 = src;
                    v23 = v113;
                    v22 = v112;
                    v24 = v114;
                    v27 = v117;
LABEL_20:
                    v28 = 0xB492B66FBE98F273LL * v20 + v11;
                    v29 = v101 ^ (0xB492B66FBE98F273LL * __ROL8__(v21 + v100 + v13 + v17, 27));
                    v13 = v25 + v17 - 0x4B6D499041670D8DLL * __ROL8__(v26 + v20 + v13, 22);
                    v100 = 0xB492B66FBE98F273LL * __ROL8__(v102 + v104, 31);
                    v30 = v28 + v21 + v22;
                    v17 = v23 + v30;
                    v31 = v100 + v101 + v24;
                    v20 = __ROL8__(v30, 20) + v28 + __ROR8__(v29 + v28 + v23 + v102, 21);
                    v32 = v31 + v25 + v26;
                    v101 = __ROL8__(v32, 20) + v31 + __ROR8__(v13 + v31 + v27 + v22, 21);
                    v102 = v32 + v27;
                    v105 += v103;
                    if ( a2 == v10 )
                    {
                      v33 = v100
                          - 0x4B6D499041670D8DLL * (v105 ^ (v105 >> 47))
                          - 0x622015F714C7D297LL
                          * (((0x9DDFEA08EB382D69LL
                             * (((0x9DDFEA08EB382D69LL * (v101 ^ v20)) >> 47)
                              ^ v101
                              ^ (0x9DDFEA08EB382D69LL * (v101 ^ v20)))) >> 47)
                           ^ (0x9DDFEA08EB382D69LL
                            * (((0x9DDFEA08EB382D69LL * (v101 ^ v20)) >> 47)
                             ^ v101
                             ^ (0x9DDFEA08EB382D69LL * (v101 ^ v20)))));
                      v34 = 0x9DDFEA08EB382D69LL
                          * ((0x9DDFEA08EB382D69LL * ((v32 + v27) ^ v17))
                           ^ (v32 + v27)
                           ^ ((0x9DDFEA08EB382D69LL * ((v32 + v27) ^ v17)) >> 47));
                      v35 = 0x9DDFEA08EB382D69LL
                          * (v33
                           ^ (v29
                            - 0x4B6D499041670D8DLL * ((v13 >> 47) ^ v13)
                            - 0x622015F714C7D297LL * ((v34 >> 47) ^ v34)));
                      return 0x9DDFEA08EB382D69LL
                           * (((0x9DDFEA08EB382D69LL * (v33 ^ v35 ^ (v35 >> 47))) >> 47)
                            ^ (0x9DDFEA08EB382D69LL * (v33 ^ v35 ^ (v35 >> 47))));
                    }
                    v104 = v29;
                    v11 = *v10;
                  }
                }
                v84 = v118;
              }
            }
          }
        }
      }
      v85 = v84 - (char *)&src;
      if ( v85 - 17 > 0xF )
      {
        if ( v85 <= 0x20 )
        {
          if ( v85 )
          {
            v99 = (0xC949D7C7509E6557LL * ((unsigned int)v85 + 4 * (unsigned __int8)*(&v109 + v85)))
                ^ (0x9AE16A3B2F90404FLL * ((unsigned __int8)src + (*((unsigned __int8 *)&src + (v85 >> 1)) << 8)))
                ^ 0xFF51AFD7ED558CCDLL;
            return 0x9AE16A3B2F90404FLL * (v99 ^ (v99 >> 47));
          }
          else
          {
            return 0x65B0C5ECC2C5CC82LL;
          }
        }
        else
        {
          v92 = *(_QWORD *)&v108[v85];
          v93 = src - 0x3C5A37A36834CED9LL * (v92 + v85);
          v94 = v93 + v111 + v112;
          v95 = &(*(const __m128i **)((char *)&p_src + v85))->m128i_i8[v112];
          v96 = __ROR8__(v94, 31) + __ROR8__(v93 + v111, 7) + __ROL8__(v113 + v93, 12) + __ROL8__(v93, 27);
          v97 = 0xC3A5C85C97CB3127LL * (_QWORD)&v95[*(_QWORD *)&v108[v85 - 8] + v92 + *(_QWORD *)&v108[v85 + 8] + v96]
              - 0x651E95C4D06FBFB1LL
              * (v94
               + __ROR8__(&v95[*(_QWORD *)&v108[v85 - 8] + v92], 31)
               + __ROR8__(&v95[*(_QWORD *)&v108[v85 - 8]], 7)
               + v113
               + __ROL8__(v95, 27)
               + __ROL8__(&v95[*(_QWORD *)&v108[v85 + 8]], 12));
          v98 = v96 + ((0xC3A5C85C97CB3127LL * ((v97 >> 47) ^ v97)) ^ 0xFF51AFD7ED558CCDLL);
          return 0x9AE16A3B2F90404FLL * (v98 ^ (v98 >> 47));
        }
      }
      else
      {
        v86 = 0x9AE16A3B2F90404FLL * *(_QWORD *)&v108[v85 + 8];
        v87 = __ROL8__(0xB492B66FBE98F273LL * src - v111, 21);
        v88 = 0xC3A5C85C97CB3127LL * *(_QWORD *)&v108[v85];
        v89 = v85 + 0xB492B66FBE98F273LL * src - 0xAE502812AA7333LL + __ROR8__(v111 ^ 0xC949D7C7509E6557LL, 20) - v86;
        v90 = __ROR8__(v86 ^ 0xFF51AFD7ED558CCDLL, 30);
        v91 = 0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v89 ^ (v88 + v87 + v90)))
             ^ v89
             ^ ((0x9DDFEA08EB382D69LL * (v89 ^ (v88 + v87 + v90))) >> 47));
        return 0x9DDFEA08EB382D69LL * ((v91 >> 47) ^ v91);
      }
    }
  }
}
