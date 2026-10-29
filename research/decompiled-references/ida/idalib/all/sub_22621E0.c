unsigned __int64 __fastcall sub_22621E0(__int64 a1, __int64 a2)
{
  __m128i *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 *v6; // r13
  unsigned __int64 v7; // rax
  __m128i *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __m128i *v17; // rsi
  signed __int64 v18; // r13
  char *v19; // rbx
  __int64 v20; // rax
  char *v21; // rdx
  __m128i *p_src; // rbx
  __int64 v23; // r8
  __m128i *v24; // rdi
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // r9
  __m128i *v28; // rsi
  __int8 *v29; // rdi
  __int8 v30; // dl
  __int8 v31; // dl
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
  __int64 v45; // rdx
  __int8 *v46; // rsi
  __m128i *v47; // rdx
  __int8 v48; // cl
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rcx
  __int8 v52; // r8
  __int8 v53; // dl
  __int64 v54; // rdi
  __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rsi
  const __m128i *v58; // rax
  const __m128i *v59; // rdx
  __m128i v60; // xmm0
  __m128i v61; // xmm2
  __int8 *v62; // rax
  __int8 *v63; // rdx
  __int8 v64; // cl
  char v65; // cl
  char v66; // cl
  char v67; // cl
  char v68; // cl
  char v69; // cl
  char v70; // cl
  char v71; // cl
  char v72; // cl
  char v73; // cl
  char v74; // cl
  char v75; // cl
  char v76; // cl
  char v77; // cl
  char v78; // cl
  __int64 v79; // rax
  __int64 v80; // r8
  __int64 v81; // rbp
  __int64 v82; // r9
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rsi
  __int8 v86; // r14
  size_t v87; // rax
  __int8 v88; // r15
  size_t v89; // r14
  __m128i *v90; // rdx
  __m128i *v91; // rax
  __int8 v92; // di
  __int8 v93; // cl
  _QWORD v94[2]; // [rsp+0h] [rbp-D8h]
  __int64 v95; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+18h] [rbp-C0h] BYREF
  __m128i src; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v98; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v99; // [rsp+60h] [rbp-78h] BYREF
  __int128 v100; // [rsp+70h] [rbp-68h]
  __int128 v101; // [rsp+80h] [rbp-58h]
  __m128i si128; // [rsp+90h] [rbp-48h]

  src = 0;
  memset(&v98, 0, 48);
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v95 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v3 = sub_A232E0(&src, &v95, &src, (unsigned __int64)&v99, a1);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD **)a2;
  v6 = (__int64 *)v3;
  v96 = v95;
  v7 = sub_2248870(v5, v4);
  v8 = sub_A232E0(&src, &v96, v6, (unsigned __int64)&v99, v7);
  v9 = v96;
  v10 = (char *)v8 - (char *)&src;
  if ( v96 )
  {
    v17 = v8;
    v18 = (char *)v8 - (char *)&src;
    if ( v8 != (__m128i *)&v99 && v8 != &src )
    {
      v19 = (char *)((char *)&v99 - (char *)v8);
      v20 = 64;
      v21 = v19;
      p_src = &src;
      if ( v21 == (char *)v10 )
      {
        v58 = v17;
        if ( (v17 >= &v98 || &src >= &v17[1]) && (unsigned __int64)v17->m128i_u64 + ~(unsigned __int64)&src > 0xE )
        {
          v59 = &src;
          do
          {
            v60 = _mm_load_si128(v59);
            v61 = _mm_loadu_si128(v58++);
            ++v59;
            v59[-1] = v61;
            v58[-1] = v60;
          }
          while ( v58 != (const __m128i *)&v17->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL] );
          v62 = &src.m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
          v63 = &v17->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
          if ( v10 != (v10 & 0xFFFFFFFFFFFFFFF0LL) )
          {
            v64 = *v62;
            *v62 = *v63;
            *v63 = v64;
            if ( v17 != (__m128i *)(v62 + 1) )
            {
              v65 = v62[1];
              v62[1] = v63[1];
              v63[1] = v65;
              if ( v17 != (__m128i *)(v62 + 2) )
              {
                v66 = v62[2];
                v62[2] = v63[2];
                v63[2] = v66;
                if ( v17 != (__m128i *)(v62 + 3) )
                {
                  v67 = v62[3];
                  v62[3] = v63[3];
                  v63[3] = v67;
                  if ( v17 != (__m128i *)(v62 + 4) )
                  {
                    v68 = v62[4];
                    v62[4] = v63[4];
                    v63[4] = v68;
                    if ( v17 != (__m128i *)(v62 + 5) )
                    {
                      v69 = v62[5];
                      v62[5] = v63[5];
                      v63[5] = v69;
                      if ( v17 != (__m128i *)(v62 + 6) )
                      {
                        v70 = v62[6];
                        v62[6] = v63[6];
                        v63[6] = v70;
                        if ( v17 != (__m128i *)(v62 + 7) )
                        {
                          v71 = v62[7];
                          v62[7] = v63[7];
                          v63[7] = v71;
                          if ( v17 != (__m128i *)(v62 + 8) )
                          {
                            v72 = v62[8];
                            v62[8] = v63[8];
                            v63[8] = v72;
                            if ( v17 != (__m128i *)(v62 + 9) )
                            {
                              v73 = v62[9];
                              v62[9] = v63[9];
                              v63[9] = v73;
                              if ( v17 != (__m128i *)(v62 + 10) )
                              {
                                v74 = v62[10];
                                v62[10] = v63[10];
                                v63[10] = v74;
                                if ( v17 != (__m128i *)(v62 + 11) )
                                {
                                  v75 = v62[11];
                                  v62[11] = v63[11];
                                  v63[11] = v75;
                                  if ( v17 != (__m128i *)(v62 + 12) )
                                  {
                                    v76 = v62[12];
                                    v62[12] = v63[12];
                                    v63[12] = v76;
                                    if ( v17 != (__m128i *)(v62 + 13) )
                                    {
                                      v77 = v62[13];
                                      v62[13] = v63[13];
                                      v63[13] = v77;
                                      if ( v17 != (__m128i *)(v62 + 14) )
                                      {
                                        v78 = v62[14];
                                        v62[14] = v63[14];
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
          }
        }
        else
        {
          v90 = v17;
          v91 = &src;
          do
          {
            v92 = v90->m128i_i8[0];
            v93 = v91->m128i_i8[0];
            v91 = (__m128i *)((char *)v91 + 1);
            v90 = (__m128i *)((char *)v90 + 1);
            v91[-1].m128i_i8[15] = v92;
            v90[-1].m128i_i8[15] = v93;
          }
          while ( v17 != v91 );
        }
      }
      else
      {
        v23 = 64 - v10;
        if ( v10 >= 64 - v10 )
          goto LABEL_39;
        while ( v10 != 1 )
        {
          v24 = (__m128i *)((char *)p_src + v10);
          if ( v23 > 0 )
          {
            if ( (v24 >= &p_src[1] || v10 + 16 <= 0) && (unsigned __int64)(v23 - 1) > 0xE )
            {
              v25 = 0;
              do
              {
                v26 = _mm_loadu_si128(&p_src[v25 / 0x10]);
                p_src[v25 / 0x10] = _mm_loadu_si128(&v24[v25 / 0x10]);
                v24[v25 / 0x10] = v26;
                v25 += 16LL;
              }
              while ( v25 != (v23 & 0xFFFFFFFFFFFFFFF0LL) );
              v27 = v23 & 0x7FFFFFFFFFFFFFF0LL;
              v28 = (__m128i *)((char *)p_src + (v23 & 0xFFFFFFFFFFFFFFF0LL));
              v29 = &v24->m128i_i8[v23 & 0xFFFFFFFFFFFFFFF0LL];
              if ( v23 != (v23 & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v30 = v28->m128i_i8[0];
                v28->m128i_i8[0] = *v29;
                *v29 = v30;
                if ( v23 > v27 + 1 )
                {
                  v31 = v28->m128i_i8[1];
                  v28->m128i_i8[1] = v29[1];
                  v29[1] = v31;
                  if ( v23 > v27 + 2 )
                  {
                    v32 = v28->m128i_i8[2];
                    v28->m128i_i8[2] = v29[2];
                    v29[2] = v32;
                    if ( v23 > v27 + 3 )
                    {
                      v33 = v28->m128i_i8[3];
                      v28->m128i_i8[3] = v29[3];
                      v29[3] = v33;
                      if ( v23 > v27 + 4 )
                      {
                        v34 = v28->m128i_i8[4];
                        v28->m128i_i8[4] = v29[4];
                        v29[4] = v34;
                        if ( v23 > v27 + 5 )
                        {
                          v35 = v28->m128i_i8[5];
                          v28->m128i_i8[5] = v29[5];
                          v29[5] = v35;
                          if ( v23 > v27 + 6 )
                          {
                            v36 = v28->m128i_i8[6];
                            v28->m128i_i8[6] = v29[6];
                            v29[6] = v36;
                            if ( v23 > v27 + 7 )
                            {
                              v37 = v28->m128i_i8[7];
                              v28->m128i_i8[7] = v29[7];
                              v29[7] = v37;
                              if ( v23 > v27 + 8 )
                              {
                                v38 = v28->m128i_i8[8];
                                v28->m128i_i8[8] = v29[8];
                                v29[8] = v38;
                                if ( v23 > v27 + 9 )
                                {
                                  v39 = v28->m128i_i8[9];
                                  v28->m128i_i8[9] = v29[9];
                                  v29[9] = v39;
                                  if ( v23 > v27 + 10 )
                                  {
                                    v40 = v28->m128i_i8[10];
                                    v28->m128i_i8[10] = v29[10];
                                    v29[10] = v40;
                                    if ( v23 > v27 + 11 )
                                    {
                                      v41 = v28->m128i_i8[11];
                                      v28->m128i_i8[11] = v29[11];
                                      v29[11] = v41;
                                      if ( v23 > v27 + 12 )
                                      {
                                        v42 = v28->m128i_i8[12];
                                        v28->m128i_i8[12] = v29[12];
                                        v29[12] = v42;
                                        if ( v23 > v27 + 13 )
                                        {
                                          v43 = v28->m128i_i8[13];
                                          v28->m128i_i8[13] = v29[13];
                                          v29[13] = v43;
                                          if ( v23 > v27 + 14 )
                                          {
                                            v44 = v28->m128i_i8[14];
                                            v28->m128i_i8[14] = v29[14];
                                            v29[14] = v44;
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
                v28 = (__m128i *)((char *)p_src + v23);
              }
            }
            else
            {
              v28 = (__m128i *)((char *)p_src + v23);
              do
              {
                v52 = v24->m128i_i8[0];
                v53 = p_src->m128i_i8[0];
                p_src = (__m128i *)((char *)p_src + 1);
                v24 = (__m128i *)((char *)v24 + 1);
                p_src[-1].m128i_i8[15] = v52;
                v24[-1].m128i_i8[15] = v53;
              }
              while ( p_src != v28 );
            }
            p_src = v28;
          }
          if ( !(v20 % v10) )
            goto LABEL_44;
          v23 = v10;
          v45 = v10 - v20 % v10;
          while ( 1 )
          {
            v20 = v23;
            v10 = v45;
            v23 -= v45;
            if ( v45 < v23 )
              break;
LABEL_39:
            if ( v23 == 1 )
            {
              v86 = p_src->m128i_i8[v20 - 1];
              memmove(&p_src->m128i_i8[1], p_src, v20 - 1);
              p_src->m128i_i8[0] = v86;
              goto LABEL_44;
            }
            v46 = &p_src->m128i_i8[v20];
            v47 = (__m128i *)((char *)p_src + v20 - v23);
            p_src = v47;
            if ( v10 > 0 )
            {
              p_src = (__m128i *)((char *)v47 - v10);
              do
              {
                v47 = (__m128i *)((char *)v47 - 1);
                --v46;
                v48 = v47->m128i_i8[0];
                v47->m128i_i8[0] = *v46;
                *v46 = v48;
              }
              while ( v47 != p_src );
            }
            v45 = v20 % v23;
            if ( !(v20 % v23) )
              goto LABEL_44;
          }
        }
        v87 = v20 - 1;
        v88 = p_src->m128i_i8[0];
        v89 = v87;
        if ( v87 )
          memmove(p_src, &p_src->m128i_i8[1], v87);
        p_src->m128i_i8[v89] = v88;
      }
    }
LABEL_44:
    sub_9B6F20((unsigned __int64 *)&v99, &src);
    v49 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v101))
         ^ si128.m128i_i64[0]
         ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v101)) >> 47));
    v50 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v18 + v9) >> 47) ^ (v18 + v9))
        + v99
        - 0x622015F714C7D297LL * (v49 ^ (v49 >> 47));
    v51 = 0x9DDFEA08EB382D69LL
        * (v50
         ^ (v100
          - 0x4B6D499041670D8DLL * (*((_QWORD *)&v99 + 1) ^ (*((_QWORD *)&v99 + 1) >> 47))
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v101 + 1) ^ *((_QWORD *)&v100 + 1)))
             ^ *((_QWORD *)&v101 + 1)
             ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v101 + 1) ^ *((_QWORD *)&v100 + 1))) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v101 + 1) ^ *((_QWORD *)&v100 + 1)))
              ^ *((_QWORD *)&v101 + 1)
              ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v101 + 1) ^ *((_QWORD *)&v100 + 1))) >> 47))) >> 47))));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v51 ^ v50 ^ (v51 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v51 ^ v50 ^ (v51 >> 47))) >> 47));
  }
  else if ( (unsigned __int64)(v10 - 4) > 4 )
  {
    if ( (unsigned __int64)(v10 - 9) <= 7 )
    {
      v54 = *(__int64 *)((char *)&v96 + v10);
      v55 = __ROR8__(v54 + v10, v10);
      v56 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v55 ^ src.m128i_i64[0] ^ si128.m128i_i64[1]))
           ^ v55
           ^ ((0x9DDFEA08EB382D69LL * (v55 ^ src.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47));
      return v54 ^ (0x9DDFEA08EB382D69LL * (v56 ^ (v56 >> 47)));
    }
    else if ( (unsigned __int64)(v10 - 17) > 0xF )
    {
      if ( (unsigned __int64)v10 > 0x20 )
      {
        v79 = *(__int64 *)((char *)&v95 + v10);
        v80 = src.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v79 + v10);
        v81 = v80 + src.m128i_i64[1];
        v82 = *(_QWORD *)((char *)v94 + v10) + v98.m128i_i64[0];
        v83 = __ROR8__(v80 + src.m128i_i64[1] + v98.m128i_i64[0], 31)
            + __ROL8__(v98.m128i_i64[1] + v80, 12)
            + __ROR8__(v80 + src.m128i_i64[1], 7)
            + __ROL8__(v80, 27);
        v84 = 0x9AE16A3B2F90404FLL
            * (__ROR8__(v82 + *(_QWORD *)((char *)&v94[1] + v10) + v79, 31)
             + v98.m128i_i64[1]
             + __ROL8__(v82, 27)
             + __ROL8__(v82 + *(__int64 *)((char *)&v96 + v10), 12)
             + __ROR8__(v82 + *(_QWORD *)((char *)&v94[1] + v10), 7)
             + v81
             + v98.m128i_i64[0])
            - 0x3C5A37A36834CED9LL
            * (v83 + *(__int64 *)((char *)&v96 + v10) + v82 + *(_QWORD *)((char *)&v94[1] + v10) + v79);
        v85 = v83 + ((0xC3A5C85C97CB3127LL * ((v84 >> 47) ^ v84)) ^ si128.m128i_i64[1]);
        return 0x9AE16A3B2F90404FLL * (v85 ^ (v85 >> 47));
      }
      else
      {
        result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
        if ( v10 )
        {
          v57 = (0xC949D7C7509E6557LL * ((unsigned int)v10 + 4 * *((unsigned __int8 *)&v96 + v10 + 7)))
              ^ (0x9AE16A3B2F90404FLL * (src.m128i_u8[0] + (src.m128i_u8[(unsigned __int64)v10 >> 1] << 8)))
              ^ si128.m128i_i64[1];
          return 0x9AE16A3B2F90404FLL * (v57 ^ (v57 >> 47));
        }
      }
    }
    else
    {
      v14 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v96 + v10);
      v15 = v10
          + si128.m128i_i64[1]
          - 0x4B6D499041670D8DLL * src.m128i_i64[0]
          + __ROR8__(src.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
          - v14;
      v16 = 0x9DDFEA08EB382D69LL
          * (v15
           ^ (__ROL8__(0xB492B66FBE98F273LL * src.m128i_i64[0] - src.m128i_i64[1], 21)
            - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v95 + v10)
            + __ROR8__(si128.m128i_i64[1] ^ v14, 30)));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v16 ^ v15 ^ (v16 >> 47)))
            ^ ((0x9DDFEA08EB382D69LL * (v16 ^ v15 ^ (v16 >> 47))) >> 47));
    }
  }
  else
  {
    v11 = *(unsigned int *)((char *)&v96 + v10 + 4) ^ si128.m128i_i64[1];
    v12 = 0x9DDFEA08EB382D69LL * (v11 ^ (v10 + 8LL * src.m128i_u32[0]));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47))) >> 47));
  }
  return result;
}
