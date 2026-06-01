unsigned __int64 __fastcall sub_A0DEF0(int a1, int *a2)
{
  __m128i *v2; // rax
  int v3; // r8d
  __m128i *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __m128i *v13; // rsi
  signed __int64 v14; // r13
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // rdx
  __m128i *p_src; // rbx
  __int64 v19; // r8
  __m128i *v20; // rdi
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // r9
  __m128i *v24; // rsi
  __int8 *v25; // rdi
  __int8 v26; // dl
  __int8 v27; // dl
  __int8 v28; // dl
  __int8 v29; // dl
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
  __int64 v41; // rdx
  __int8 *v42; // rsi
  __m128i *v43; // rdx
  __int8 v44; // cl
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __int8 v48; // r8
  __int8 v49; // dl
  __int64 v50; // rdi
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rsi
  const __m128i *v54; // rax
  const __m128i *v55; // rdx
  __m128i v56; // xmm0
  __m128i v57; // xmm2
  __int8 *v58; // rax
  __int8 *v59; // rdx
  __int8 v60; // cl
  char v61; // cl
  char v62; // cl
  char v63; // cl
  char v64; // cl
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
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rbp
  __int64 v78; // r9
  __int64 v79; // r8
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rsi
  __int8 v82; // r14
  size_t v83; // rax
  __int8 v84; // r15
  size_t v85; // r14
  __m128i *v86; // rdx
  __m128i *v87; // rax
  __int8 v88; // di
  __int8 v89; // cl
  _QWORD v90[2]; // [rsp+0h] [rbp-D8h]
  __int64 v91; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+18h] [rbp-C0h] BYREF
  __m128i src; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v94; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v95; // [rsp+60h] [rbp-78h] BYREF
  __int128 v96; // [rsp+70h] [rbp-68h]
  __int128 v97; // [rsp+80h] [rbp-58h]
  __m128i si128; // [rsp+90h] [rbp-48h]

  src = 0;
  memset(&v94, 0, 48);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v91 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v2 = sub_A0C4A0(&src, &v91, &src, (unsigned __int64)&v95, a1);
  v3 = *a2;
  v92 = v91;
  v4 = sub_A0C4A0(&src, &v92, v2, (unsigned __int64)&v95, v3);
  v5 = v92;
  v6 = (char *)v4 - (char *)&src;
  if ( v92 )
  {
    v13 = v4;
    v14 = (char *)v4 - (char *)&src;
    if ( v4 != (__m128i *)&v95 && v4 != &src )
    {
      v15 = (char *)((char *)&v95 - (char *)v4);
      v16 = 64;
      v17 = v15;
      p_src = &src;
      if ( v17 == (char *)v6 )
      {
        v54 = v13;
        if ( (v13 >= &v94 || &src >= &v13[1]) && (unsigned __int64)v13->m128i_u64 + ~(unsigned __int64)&src > 0xE )
        {
          v55 = &src;
          do
          {
            v56 = _mm_load_si128(v55);
            v57 = _mm_loadu_si128(v54++);
            ++v55;
            v55[-1] = v57;
            v54[-1] = v56;
          }
          while ( v54 != (const __m128i *)&v13->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL] );
          v58 = &src.m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
          v59 = &v13->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
          if ( v6 != (v6 & 0xFFFFFFFFFFFFFFF0LL) )
          {
            v60 = *v58;
            *v58 = *v59;
            *v59 = v60;
            if ( v13 != (__m128i *)(v58 + 1) )
            {
              v61 = v58[1];
              v58[1] = v59[1];
              v59[1] = v61;
              if ( v13 != (__m128i *)(v58 + 2) )
              {
                v62 = v58[2];
                v58[2] = v59[2];
                v59[2] = v62;
                if ( v13 != (__m128i *)(v58 + 3) )
                {
                  v63 = v58[3];
                  v58[3] = v59[3];
                  v59[3] = v63;
                  if ( v13 != (__m128i *)(v58 + 4) )
                  {
                    v64 = v58[4];
                    v58[4] = v59[4];
                    v59[4] = v64;
                    if ( v13 != (__m128i *)(v58 + 5) )
                    {
                      v65 = v58[5];
                      v58[5] = v59[5];
                      v59[5] = v65;
                      if ( v13 != (__m128i *)(v58 + 6) )
                      {
                        v66 = v58[6];
                        v58[6] = v59[6];
                        v59[6] = v66;
                        if ( v13 != (__m128i *)(v58 + 7) )
                        {
                          v67 = v58[7];
                          v58[7] = v59[7];
                          v59[7] = v67;
                          if ( v13 != (__m128i *)(v58 + 8) )
                          {
                            v68 = v58[8];
                            v58[8] = v59[8];
                            v59[8] = v68;
                            if ( v13 != (__m128i *)(v58 + 9) )
                            {
                              v69 = v58[9];
                              v58[9] = v59[9];
                              v59[9] = v69;
                              if ( v13 != (__m128i *)(v58 + 10) )
                              {
                                v70 = v58[10];
                                v58[10] = v59[10];
                                v59[10] = v70;
                                if ( v13 != (__m128i *)(v58 + 11) )
                                {
                                  v71 = v58[11];
                                  v58[11] = v59[11];
                                  v59[11] = v71;
                                  if ( v13 != (__m128i *)(v58 + 12) )
                                  {
                                    v72 = v58[12];
                                    v58[12] = v59[12];
                                    v59[12] = v72;
                                    if ( v13 != (__m128i *)(v58 + 13) )
                                    {
                                      v73 = v58[13];
                                      v58[13] = v59[13];
                                      v59[13] = v73;
                                      if ( v13 != (__m128i *)(v58 + 14) )
                                      {
                                        v74 = v58[14];
                                        v58[14] = v59[14];
                                        v59[14] = v74;
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
          v86 = v13;
          v87 = &src;
          do
          {
            v88 = v86->m128i_i8[0];
            v89 = v87->m128i_i8[0];
            v87 = (__m128i *)((char *)v87 + 1);
            v86 = (__m128i *)((char *)v86 + 1);
            v87[-1].m128i_i8[15] = v88;
            v86[-1].m128i_i8[15] = v89;
          }
          while ( v13 != v87 );
        }
      }
      else
      {
        v19 = 64 - v6;
        if ( v6 >= 64 - v6 )
          goto LABEL_39;
        while ( v6 != 1 )
        {
          v20 = (__m128i *)((char *)p_src + v6);
          if ( v19 > 0 )
          {
            if ( (v20 >= &p_src[1] || v6 + 16 <= 0) && (unsigned __int64)(v19 - 1) > 0xE )
            {
              v21 = 0;
              do
              {
                v22 = _mm_loadu_si128(&p_src[v21 / 0x10]);
                p_src[v21 / 0x10] = _mm_loadu_si128(&v20[v21 / 0x10]);
                v20[v21 / 0x10] = v22;
                v21 += 16LL;
              }
              while ( v21 != (v19 & 0xFFFFFFFFFFFFFFF0LL) );
              v23 = v19 & 0x7FFFFFFFFFFFFFF0LL;
              v24 = (__m128i *)((char *)p_src + (v19 & 0xFFFFFFFFFFFFFFF0LL));
              v25 = &v20->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
              if ( v19 != (v19 & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v26 = v24->m128i_i8[0];
                v24->m128i_i8[0] = *v25;
                *v25 = v26;
                if ( v19 > v23 + 1 )
                {
                  v27 = v24->m128i_i8[1];
                  v24->m128i_i8[1] = v25[1];
                  v25[1] = v27;
                  if ( v19 > v23 + 2 )
                  {
                    v28 = v24->m128i_i8[2];
                    v24->m128i_i8[2] = v25[2];
                    v25[2] = v28;
                    if ( v19 > v23 + 3 )
                    {
                      v29 = v24->m128i_i8[3];
                      v24->m128i_i8[3] = v25[3];
                      v25[3] = v29;
                      if ( v19 > v23 + 4 )
                      {
                        v30 = v24->m128i_i8[4];
                        v24->m128i_i8[4] = v25[4];
                        v25[4] = v30;
                        if ( v19 > v23 + 5 )
                        {
                          v31 = v24->m128i_i8[5];
                          v24->m128i_i8[5] = v25[5];
                          v25[5] = v31;
                          if ( v19 > v23 + 6 )
                          {
                            v32 = v24->m128i_i8[6];
                            v24->m128i_i8[6] = v25[6];
                            v25[6] = v32;
                            if ( v19 > v23 + 7 )
                            {
                              v33 = v24->m128i_i8[7];
                              v24->m128i_i8[7] = v25[7];
                              v25[7] = v33;
                              if ( v19 > v23 + 8 )
                              {
                                v34 = v24->m128i_i8[8];
                                v24->m128i_i8[8] = v25[8];
                                v25[8] = v34;
                                if ( v19 > v23 + 9 )
                                {
                                  v35 = v24->m128i_i8[9];
                                  v24->m128i_i8[9] = v25[9];
                                  v25[9] = v35;
                                  if ( v19 > v23 + 10 )
                                  {
                                    v36 = v24->m128i_i8[10];
                                    v24->m128i_i8[10] = v25[10];
                                    v25[10] = v36;
                                    if ( v19 > v23 + 11 )
                                    {
                                      v37 = v24->m128i_i8[11];
                                      v24->m128i_i8[11] = v25[11];
                                      v25[11] = v37;
                                      if ( v19 > v23 + 12 )
                                      {
                                        v38 = v24->m128i_i8[12];
                                        v24->m128i_i8[12] = v25[12];
                                        v25[12] = v38;
                                        if ( v19 > v23 + 13 )
                                        {
                                          v39 = v24->m128i_i8[13];
                                          v24->m128i_i8[13] = v25[13];
                                          v25[13] = v39;
                                          if ( v19 > v23 + 14 )
                                          {
                                            v40 = v24->m128i_i8[14];
                                            v24->m128i_i8[14] = v25[14];
                                            v25[14] = v40;
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
                v24 = (__m128i *)((char *)p_src + v19);
              }
            }
            else
            {
              v24 = (__m128i *)((char *)p_src + v19);
              do
              {
                v48 = v20->m128i_i8[0];
                v49 = p_src->m128i_i8[0];
                p_src = (__m128i *)((char *)p_src + 1);
                v20 = (__m128i *)((char *)v20 + 1);
                p_src[-1].m128i_i8[15] = v48;
                v20[-1].m128i_i8[15] = v49;
              }
              while ( p_src != v24 );
            }
            p_src = v24;
          }
          if ( !(v16 % v6) )
            goto LABEL_44;
          v19 = v6;
          v41 = v6 - v16 % v6;
          while ( 1 )
          {
            v16 = v19;
            v6 = v41;
            v19 -= v41;
            if ( v41 < v19 )
              break;
LABEL_39:
            if ( v19 == 1 )
            {
              v82 = p_src->m128i_i8[v16 - 1];
              memmove(&p_src->m128i_i8[1], p_src, v16 - 1);
              p_src->m128i_i8[0] = v82;
              goto LABEL_44;
            }
            v42 = &p_src->m128i_i8[v16];
            v43 = (__m128i *)((char *)p_src + v16 - v19);
            p_src = v43;
            if ( v6 > 0 )
            {
              p_src = (__m128i *)((char *)v43 - v6);
              do
              {
                v43 = (__m128i *)((char *)v43 - 1);
                --v42;
                v44 = v43->m128i_i8[0];
                v43->m128i_i8[0] = *v42;
                *v42 = v44;
              }
              while ( v43 != p_src );
            }
            v41 = v16 % v19;
            if ( !(v16 % v19) )
              goto LABEL_44;
          }
        }
        v83 = v16 - 1;
        v84 = p_src->m128i_i8[0];
        v85 = v83;
        if ( v83 )
          memmove(p_src, &p_src->m128i_i8[1], v83);
        p_src->m128i_i8[v85] = v84;
      }
    }
LABEL_44:
    sub_9B6F20((unsigned __int64 *)&v95, &src);
    v45 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v97))
         ^ si128.m128i_i64[0]
         ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v97)) >> 47));
    v46 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v14 + v5) >> 47) ^ (v14 + v5))
        + v95
        - 0x622015F714C7D297LL * (v45 ^ (v45 >> 47));
    v47 = 0x9DDFEA08EB382D69LL
        * (v46
         ^ (v96
          - 0x4B6D499041670D8DLL * (*((_QWORD *)&v95 + 1) ^ (*((_QWORD *)&v95 + 1) >> 47))
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v97 + 1) ^ *((_QWORD *)&v96 + 1)))
             ^ *((_QWORD *)&v97 + 1)
             ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v97 + 1) ^ *((_QWORD *)&v96 + 1))) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v97 + 1) ^ *((_QWORD *)&v96 + 1)))
              ^ *((_QWORD *)&v97 + 1)
              ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v97 + 1) ^ *((_QWORD *)&v96 + 1))) >> 47))) >> 47))));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v47 ^ v46 ^ (v47 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v47 ^ v46 ^ (v47 >> 47))) >> 47));
  }
  else if ( (unsigned __int64)(v6 - 4) > 4 )
  {
    if ( (unsigned __int64)(v6 - 9) <= 7 )
    {
      v50 = *(__int64 *)((char *)&v92 + v6);
      v51 = __ROR8__(v50 + v6, v6);
      v52 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v51 ^ src.m128i_i64[0] ^ si128.m128i_i64[1]))
           ^ v51
           ^ ((0x9DDFEA08EB382D69LL * (v51 ^ src.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47));
      return v50 ^ (0x9DDFEA08EB382D69LL * (v52 ^ (v52 >> 47)));
    }
    else if ( (unsigned __int64)(v6 - 17) > 0xF )
    {
      if ( (unsigned __int64)v6 > 0x20 )
      {
        v75 = *(__int64 *)((char *)&v91 + v6);
        v76 = src.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v75 + v6);
        v77 = v76 + src.m128i_i64[1];
        v78 = *(_QWORD *)((char *)v90 + v6) + v94.m128i_i64[0];
        v79 = __ROR8__(v76 + src.m128i_i64[1] + v94.m128i_i64[0], 31)
            + __ROL8__(v94.m128i_i64[1] + v76, 12)
            + __ROR8__(v76 + src.m128i_i64[1], 7)
            + __ROL8__(v76, 27);
        v80 = 0x9AE16A3B2F90404FLL
            * (__ROR8__(v78 + *(_QWORD *)((char *)&v90[1] + v6) + v75, 31)
             + v94.m128i_i64[1]
             + __ROL8__(v78, 27)
             + __ROL8__(v78 + *(__int64 *)((char *)&v92 + v6), 12)
             + __ROR8__(v78 + *(_QWORD *)((char *)&v90[1] + v6), 7)
             + v77
             + v94.m128i_i64[0])
            - 0x3C5A37A36834CED9LL
            * (v79 + *(__int64 *)((char *)&v92 + v6) + v78 + *(_QWORD *)((char *)&v90[1] + v6) + v75);
        v81 = v79 + ((0xC3A5C85C97CB3127LL * ((v80 >> 47) ^ v80)) ^ si128.m128i_i64[1]);
        return 0x9AE16A3B2F90404FLL * (v81 ^ (v81 >> 47));
      }
      else
      {
        result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
        if ( v6 )
        {
          v53 = (0xC949D7C7509E6557LL * ((unsigned int)v6 + 4 * *((unsigned __int8 *)&v92 + v6 + 7)))
              ^ (0x9AE16A3B2F90404FLL * (src.m128i_u8[0] + (src.m128i_u8[(unsigned __int64)v6 >> 1] << 8)))
              ^ si128.m128i_i64[1];
          return 0x9AE16A3B2F90404FLL * (v53 ^ (v53 >> 47));
        }
      }
    }
    else
    {
      v10 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v92 + v6);
      v11 = v6
          + si128.m128i_i64[1]
          - 0x4B6D499041670D8DLL * src.m128i_i64[0]
          + __ROR8__(src.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
          - v10;
      v12 = 0x9DDFEA08EB382D69LL
          * (v11
           ^ (__ROL8__(0xB492B66FBE98F273LL * src.m128i_i64[0] - src.m128i_i64[1], 21)
            - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v91 + v6)
            + __ROR8__(si128.m128i_i64[1] ^ v10, 30)));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47)))
            ^ ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47))) >> 47));
    }
  }
  else
  {
    v7 = *(unsigned int *)((char *)&v92 + v6 + 4) ^ si128.m128i_i64[1];
    v8 = 0x9DDFEA08EB382D69LL * (v7 ^ (v6 + 8LL * src.m128i_u32[0]));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v8 ^ v7 ^ (v8 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v8 ^ v7 ^ (v8 >> 47))) >> 47));
  }
  return result;
}
