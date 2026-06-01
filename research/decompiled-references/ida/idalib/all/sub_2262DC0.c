__int64 __fastcall sub_2262DC0(__int64 a1, const __m128i *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  char *v6; // r15
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __m128i *v11; // r14
  unsigned __int64 v12; // rax
  __m128i *v13; // rax
  __int64 v14; // r13
  __m128i *v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  char *v31; // r12
  __m128i *p_dest; // r15
  __int64 v33; // rax
  __int64 v34; // r8
  __m128i *v35; // rdi
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // r10
  __m128i *v39; // rsi
  __int8 *v40; // rdi
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int8 v44; // dl
  __int8 v45; // dl
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
  __int64 v56; // rdx
  __int8 *v57; // rsi
  __m128i *v58; // rdx
  __int8 v59; // cl
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int8 v65; // r8
  __int8 v66; // dl
  size_t v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r11
  __int64 v70; // rdi
  __int64 v71; // r10
  __int64 v72; // r13
  __int64 v73; // rdi
  unsigned __int64 v74; // rcx
  const __m128i *v75; // rax
  const __m128i *v76; // rsi
  __m128i v77; // xmm0
  __m128i v78; // xmm3
  __int8 *v79; // rax
  __int8 *v80; // rsi
  __int8 v81; // cl
  char v82; // cl
  char v83; // cl
  char v84; // cl
  char v85; // cl
  char v86; // cl
  char v87; // cl
  char v88; // cl
  char v89; // cl
  char v90; // cl
  char v91; // cl
  char v92; // cl
  char v93; // cl
  char v94; // cl
  char v95; // dl
  __int8 v96; // r12
  size_t v97; // rax
  __int8 v98; // cl
  size_t v99; // r12
  __m128i *v100; // rcx
  __m128i *v101; // rax
  __int8 v102; // di
  __int8 v103; // si
  _QWORD *src; // [rsp+8h] [rbp-F0h]
  void *srca; // [rsp+8h] [rbp-F0h]
  void *srcb; // [rsp+8h] [rbp-F0h]
  __int8 srcc; // [rsp+8h] [rbp-F0h]
  __m128i *v108; // [rsp+10h] [rbp-E8h]
  __int64 v109; // [rsp+20h] [rbp-D8h]
  __int64 v110; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+38h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v114; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v115; // [rsp+60h] [rbp-98h]
  __int128 v116; // [rsp+70h] [rbp-88h]
  __int128 v117; // [rsp+80h] [rbp-78h] BYREF
  __int128 v118; // [rsp+90h] [rbp-68h]
  __int128 v119; // [rsp+A0h] [rbp-58h]
  __m128i si128; // [rsp+B0h] [rbp-48h]

  v4 = a2->m128i_i64[1];
  if ( a2[4].m128i_i32[2] == 3 )
  {
    v62 = a2->m128i_i64[1];
    dest = _mm_loadu_si128(a2 + 2);
    v20 = sub_22621E0(v62, (__int64)&dest);
  }
  else
  {
    v5 = a2[3].m128i_i64[1];
    if ( v5 )
    {
      v6 = *(char **)(v5 + 8);
      v7 = *(_QWORD *)(v5 + 16) - (_QWORD)v6;
    }
    else
    {
      srcb = (void *)a2->m128i_i64[1];
      v6 = (char *)&byte_22F0C30;
      v67 = j__strlen(&byte_22F0C30);
      v4 = (__int64)srcb;
      v7 = v67;
    }
    v8 = (_QWORD *)a2[2].m128i_i64[0];
    dest = 0;
    v114 = 0;
    v9 = a2[2].m128i_i64[1];
    v115 = 0;
    v116 = 0;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
    src = v8;
    v110 = 0;
    v108 = sub_A232E0(&dest, &v110, &dest, (unsigned __int64)&v117, v4);
    v111 = v110;
    v10 = sub_2248870(src, v9);
    v11 = sub_A232E0(&dest, &v111, v108, (unsigned __int64)&v117, v10);
    v112 = v111;
    v12 = sub_2248870(v6, v7);
    v13 = sub_A232E0(&dest, &v112, v11, (unsigned __int64)&v117, v12);
    v14 = v112;
    v15 = v13;
    v16 = (char *)v13 - (char *)&dest;
    v17 = (char *)v13 - (char *)&dest;
    if ( v112 )
    {
      if ( v13 != (__m128i *)&v117 && v13 != &dest )
      {
        v31 = (char *)((char *)&v117 - (char *)v13);
        p_dest = &dest;
        v33 = 64;
        if ( v31 == (char *)v16 )
        {
          v75 = v15;
          if ( (v15 >= (__m128i *)&v114 || &dest >= &v15[1])
            && (unsigned __int64)v15->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
          {
            v76 = &dest;
            do
            {
              v77 = _mm_load_si128(v76);
              v78 = _mm_loadu_si128(v75++);
              ++v76;
              v76[-1] = v78;
              v75[-1] = v77;
            }
            while ( v75 != (const __m128i *)&v15->m128i_i8[v16 & 0xFFFFFFFFFFFFFFF0LL] );
            v79 = &dest.m128i_i8[v16 & 0xFFFFFFFFFFFFFFF0LL];
            v80 = &v15->m128i_i8[v16 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v16 != (v16 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v81 = *v79;
              *v79 = *v80;
              *v80 = v81;
              if ( v15 != (__m128i *)(v79 + 1) )
              {
                v82 = v79[1];
                v79[1] = v80[1];
                v80[1] = v82;
                if ( v15 != (__m128i *)(v79 + 2) )
                {
                  v83 = v79[2];
                  v79[2] = v80[2];
                  v80[2] = v83;
                  if ( v15 != (__m128i *)(v79 + 3) )
                  {
                    v84 = v79[3];
                    v79[3] = v80[3];
                    v80[3] = v84;
                    if ( v15 != (__m128i *)(v79 + 4) )
                    {
                      v85 = v79[4];
                      v79[4] = v80[4];
                      v80[4] = v85;
                      if ( v15 != (__m128i *)(v79 + 5) )
                      {
                        v86 = v79[5];
                        v79[5] = v80[5];
                        v80[5] = v86;
                        if ( v15 != (__m128i *)(v79 + 6) )
                        {
                          v87 = v79[6];
                          v79[6] = v80[6];
                          v80[6] = v87;
                          if ( v15 != (__m128i *)(v79 + 7) )
                          {
                            v88 = v79[7];
                            v79[7] = v80[7];
                            v80[7] = v88;
                            if ( v15 != (__m128i *)(v79 + 8) )
                            {
                              v89 = v79[8];
                              v79[8] = v80[8];
                              v80[8] = v89;
                              if ( v15 != (__m128i *)(v79 + 9) )
                              {
                                v90 = v79[9];
                                v79[9] = v80[9];
                                v80[9] = v90;
                                if ( v15 != (__m128i *)(v79 + 10) )
                                {
                                  v91 = v79[10];
                                  v79[10] = v80[10];
                                  v80[10] = v91;
                                  if ( v15 != (__m128i *)(v79 + 11) )
                                  {
                                    v92 = v79[11];
                                    v79[11] = v80[11];
                                    v80[11] = v92;
                                    if ( v15 != (__m128i *)(v79 + 12) )
                                    {
                                      v93 = v79[12];
                                      v79[12] = v80[12];
                                      v80[12] = v93;
                                      if ( v15 != (__m128i *)(v79 + 13) )
                                      {
                                        v94 = v79[13];
                                        v79[13] = v80[13];
                                        v80[13] = v94;
                                        if ( v15 != (__m128i *)(v79 + 14) )
                                        {
                                          v95 = v79[14];
                                          v79[14] = v80[14];
                                          v80[14] = v95;
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
            v100 = v15;
            v101 = &dest;
            do
            {
              v102 = v100->m128i_i8[0];
              v103 = v101->m128i_i8[0];
              v101 = (__m128i *)((char *)v101 + 1);
              v100 = (__m128i *)((char *)v100 + 1);
              v101[-1].m128i_i8[15] = v102;
              v100[-1].m128i_i8[15] = v103;
            }
            while ( v15 != v101 );
          }
        }
        else
        {
          v34 = 64 - v16;
          if ( v16 >= 64 - v16 )
            goto LABEL_44;
          while ( v16 != 1 )
          {
            v35 = (__m128i *)((char *)p_dest + v16);
            if ( v34 > 0 )
            {
              if ( (v16 + 16 <= 0 || v35 >= &p_dest[1]) && (unsigned __int64)(v34 - 1) > 0xE )
              {
                v36 = 0;
                do
                {
                  v37 = _mm_loadu_si128(&p_dest[v36 / 0x10]);
                  p_dest[v36 / 0x10] = _mm_loadu_si128(&v35[v36 / 0x10]);
                  v35[v36 / 0x10] = v37;
                  v36 += 16LL;
                }
                while ( v36 != (v34 & 0xFFFFFFFFFFFFFFF0LL) );
                v38 = v34 & 0x7FFFFFFFFFFFFFF0LL;
                v39 = (__m128i *)((char *)p_dest + (v34 & 0xFFFFFFFFFFFFFFF0LL));
                v40 = &v35->m128i_i8[v34 & 0xFFFFFFFFFFFFFFF0LL];
                if ( v34 != (v34 & 0xFFFFFFFFFFFFFFF0LL) )
                {
                  v41 = v39->m128i_i8[0];
                  v39->m128i_i8[0] = *v40;
                  *v40 = v41;
                  if ( v34 > v38 + 1 )
                  {
                    v42 = v39->m128i_i8[1];
                    v39->m128i_i8[1] = v40[1];
                    v40[1] = v42;
                    if ( v34 > v38 + 2 )
                    {
                      v43 = v39->m128i_i8[2];
                      v39->m128i_i8[2] = v40[2];
                      v40[2] = v43;
                      if ( v34 > v38 + 3 )
                      {
                        v44 = v39->m128i_i8[3];
                        v39->m128i_i8[3] = v40[3];
                        v40[3] = v44;
                        if ( v34 > v38 + 4 )
                        {
                          v45 = v39->m128i_i8[4];
                          v39->m128i_i8[4] = v40[4];
                          v40[4] = v45;
                          if ( v34 > v38 + 5 )
                          {
                            v46 = v39->m128i_i8[5];
                            v39->m128i_i8[5] = v40[5];
                            v40[5] = v46;
                            if ( v34 > v38 + 6 )
                            {
                              v47 = v39->m128i_i8[6];
                              v39->m128i_i8[6] = v40[6];
                              v40[6] = v47;
                              if ( v34 > v38 + 7 )
                              {
                                v48 = v39->m128i_i8[7];
                                v39->m128i_i8[7] = v40[7];
                                v40[7] = v48;
                                if ( v34 > v38 + 8 )
                                {
                                  v49 = v39->m128i_i8[8];
                                  v39->m128i_i8[8] = v40[8];
                                  v40[8] = v49;
                                  if ( v34 > v38 + 9 )
                                  {
                                    v50 = v39->m128i_i8[9];
                                    v39->m128i_i8[9] = v40[9];
                                    v40[9] = v50;
                                    if ( v34 > v38 + 10 )
                                    {
                                      v51 = v39->m128i_i8[10];
                                      v39->m128i_i8[10] = v40[10];
                                      v40[10] = v51;
                                      if ( v34 > v38 + 11 )
                                      {
                                        v52 = v39->m128i_i8[11];
                                        v39->m128i_i8[11] = v40[11];
                                        v40[11] = v52;
                                        if ( v34 > v38 + 12 )
                                        {
                                          v53 = v39->m128i_i8[12];
                                          v39->m128i_i8[12] = v40[12];
                                          v40[12] = v53;
                                          if ( v34 > v38 + 13 )
                                          {
                                            v54 = v39->m128i_i8[13];
                                            v39->m128i_i8[13] = v40[13];
                                            v40[13] = v54;
                                            if ( v34 > v38 + 14 )
                                            {
                                              v55 = v39->m128i_i8[14];
                                              v39->m128i_i8[14] = v40[14];
                                              v40[14] = v55;
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
                  v39 = (__m128i *)((char *)p_dest + v34);
                }
              }
              else
              {
                v39 = (__m128i *)((char *)p_dest + v34);
                do
                {
                  v65 = v35->m128i_i8[0];
                  v66 = p_dest->m128i_i8[0];
                  p_dest = (__m128i *)((char *)p_dest + 1);
                  v35 = (__m128i *)((char *)v35 + 1);
                  p_dest[-1].m128i_i8[15] = v65;
                  v35[-1].m128i_i8[15] = v66;
                }
                while ( p_dest != v39 );
              }
              p_dest = v39;
            }
            if ( !(v33 % v16) )
              goto LABEL_49;
            v34 = v16;
            v56 = v16 - v33 % v16;
            while ( 1 )
            {
              v33 = v34;
              v16 = v56;
              v34 -= v56;
              if ( v56 < v34 )
                break;
LABEL_44:
              if ( v34 == 1 )
              {
                v96 = p_dest->m128i_i8[v33 - 1];
                memmove(&p_dest->m128i_i8[1], p_dest, v33 - 1);
                p_dest->m128i_i8[0] = v96;
                goto LABEL_49;
              }
              v57 = &p_dest->m128i_i8[v33];
              v58 = (__m128i *)((char *)p_dest + v33 - v34);
              p_dest = v58;
              if ( v16 > 0 )
              {
                p_dest = (__m128i *)((char *)v58 - v16);
                do
                {
                  v58 = (__m128i *)((char *)v58 - 1);
                  --v57;
                  v59 = v58->m128i_i8[0];
                  v58->m128i_i8[0] = *v57;
                  *v57 = v59;
                }
                while ( v58 != p_dest );
              }
              v56 = v33 % v34;
              if ( !(v33 % v34) )
                goto LABEL_49;
            }
          }
          v97 = v33 - 1;
          v98 = p_dest->m128i_i8[0];
          v99 = v97;
          if ( v97 )
          {
            srcc = p_dest->m128i_i8[0];
            memmove(p_dest, &p_dest->m128i_i8[1], v97);
            v98 = srcc;
          }
          p_dest->m128i_i8[v99] = v98;
        }
      }
LABEL_49:
      sub_9B6F20((unsigned __int64 *)&v117, &dest);
      v60 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v17 + v14) >> 47) ^ (v17 + v14))
          + 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v119))
              ^ si128.m128i_i64[0]
              ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v119)) >> 47))) >> 47)
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v119))
             ^ si128.m128i_i64[0]
             ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v119)) >> 47))))
          + v117;
      v61 = 0x9DDFEA08EB382D69LL
          * (v60
           ^ (v118
            - 0x4B6D499041670D8DLL * (*((_QWORD *)&v117 + 1) ^ (*((_QWORD *)&v117 + 1) >> 47))
            - 0x622015F714C7D297LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v119 + 1) ^ *((_QWORD *)&v118 + 1)))
               ^ *((_QWORD *)&v119 + 1)
               ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v119 + 1) ^ *((_QWORD *)&v118 + 1))) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v119 + 1) ^ *((_QWORD *)&v118 + 1)))
                ^ *((_QWORD *)&v119 + 1)
                ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v119 + 1) ^ *((_QWORD *)&v118 + 1))) >> 47))) >> 47))));
      v20 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v61 ^ v60 ^ (v61 >> 47))) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v61 ^ v60 ^ (v61 >> 47))));
    }
    else if ( (unsigned __int64)(v16 - 4) > 4 )
    {
      if ( (unsigned __int64)(v16 - 9) <= 7 )
      {
        v63 = *(__int64 *)((char *)&v112 + v16);
        v64 = __ROR8__(v63 + v16, v16);
        v20 = v63
            ^ (0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v64 ^ si128.m128i_i64[1] ^ dest.m128i_i64[0]))
                ^ v64
                ^ ((0x9DDFEA08EB382D69LL * (v64 ^ si128.m128i_i64[1] ^ dest.m128i_i64[0])) >> 47)))
              ^ ((0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL * (v64 ^ si128.m128i_i64[1] ^ dest.m128i_i64[0]))
                 ^ v64
                 ^ ((0x9DDFEA08EB382D69LL * (v64 ^ si128.m128i_i64[1] ^ dest.m128i_i64[0])) >> 47))) >> 47)));
      }
      else if ( (unsigned __int64)(v16 - 17) > 0xF )
      {
        if ( (unsigned __int64)v16 > 0x20 )
        {
          v69 = *(__int64 *)((char *)&v111 + v16);
          v70 = dest.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v69 + v16);
          v71 = v70 + dest.m128i_i64[1];
          v72 = *(__int64 *)((char *)&v109 + v16) + v114;
          v73 = __ROR8__(v70 + dest.m128i_i64[1] + v114, 31)
              + __ROL8__(*((_QWORD *)&v114 + 1) + v70, 12)
              + __ROR8__(v70 + dest.m128i_i64[1], 7)
              + __ROL8__(v70, 27);
          v74 = 0x9AE16A3B2F90404FLL
              * (__ROR8__(v72 + *(__int64 *)((char *)&v110 + v16) + v69, 31)
               + __ROL8__(v72, 27)
               + *((_QWORD *)&v114 + 1)
               + __ROL8__(v72 + *(__int64 *)((char *)&v112 + v16), 12)
               + __ROR8__(v72 + *(__int64 *)((char *)&v110 + v16), 7)
               + v71
               + v114)
              - 0x3C5A37A36834CED9LL
              * (v73 + *(__int64 *)((char *)&v112 + v16) + v72 + *(__int64 *)((char *)&v110 + v16) + v69);
          v20 = 0x9AE16A3B2F90404FLL
              * (((v73 + ((0xC3A5C85C97CB3127LL * ((v74 >> 47) ^ v74)) ^ si128.m128i_i64[1])) >> 47)
               ^ (v73 + ((0xC3A5C85C97CB3127LL * ((v74 >> 47) ^ v74)) ^ si128.m128i_i64[1])));
        }
        else
        {
          v20 = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
          if ( v16 )
          {
            v68 = (0xC949D7C7509E6557LL * ((unsigned int)v16 + 4 * *((unsigned __int8 *)&v112 + v16 + 7)))
                ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[(unsigned __int64)v16 >> 1] << 8)));
            v20 = 0x9AE16A3B2F90404FLL * (((v68 ^ si128.m128i_i64[1]) >> 47) ^ v68 ^ si128.m128i_i64[1]);
          }
        }
      }
      else
      {
        v28 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v112 + v16);
        v29 = v16
            + si128.m128i_i64[1]
            - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
            + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
            - v28;
        v30 = 0x9DDFEA08EB382D69LL
            * (v29
             ^ (__ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
              - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v111 + v16)
              + __ROR8__(v28 ^ si128.m128i_i64[1], 30)));
        v20 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v30 ^ v29 ^ (v30 >> 47))) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (v30 ^ v29 ^ (v30 >> 47))));
      }
    }
    else
    {
      v18 = si128.m128i_i64[1] ^ *(unsigned int *)((char *)&v112 + v16 + 4);
      v19 = 0x9DDFEA08EB382D69LL * (v18 ^ (v16 + 8LL * dest.m128i_u32[0]));
      v20 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v19 ^ v18 ^ (v19 >> 47)))
           ^ ((0x9DDFEA08EB382D69LL * (v19 ^ v18 ^ (v19 >> 47))) >> 47));
    }
  }
  v21 = a2[3].m128i_i64[1];
  v22 = a2[4].m128i_i64[1];
  v23 = 0;
  if ( v21 )
    v23 = *(_QWORD *)(v21 + 16) - *(_QWORD *)(v21 + 8);
  v24 = a2[4].m128i_i64[0];
  v25 = 1000000000 * a2[3].m128i_i64[0];
  dest.m128i_i64[0] = a2[1].m128i_i64[0];
  v26 = a2[1].m128i_i64[1];
  srca = (void *)v25;
  LOWORD(v115) = 261;
  dest.m128i_i64[1] = v26;
  sub_2253560((_QWORD *)a1, &dest);
  *(_QWORD *)(a1 + 40) = v20;
  *(_QWORD *)(a1 + 56) = v24;
  *(_QWORD *)(a1 + 48) = srca;
  *(_QWORD *)(a1 + 64) = v23;
  *(_QWORD *)(a1 + 72) = v22;
  *(_QWORD *)(a1 + 32) = -1;
  *(_BYTE *)(a1 + 80) = 0;
  return a1;
}
