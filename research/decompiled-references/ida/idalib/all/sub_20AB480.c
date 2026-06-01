unsigned __int64 __fastcall sub_20AB480(int a1, int *a2, __int64 *a3, __int64 *a4)
{
  __m128i *v6; // rax
  int v7; // r8d
  __m128i *v8; // rax
  __int64 v9; // r8
  __m128i *v10; // rax
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r12
  signed __int64 v14; // rsi
  __m128i *v16; // rcx
  signed __int64 v17; // r13
  char *v18; // rbx
  __int64 v19; // rax
  char *v20; // rdx
  __m128i *p_src; // rbx
  __int64 v22; // r8
  __m128i *v23; // rdi
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // r9
  __m128i *v27; // rcx
  __int8 *v28; // rdi
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
  __int8 v41; // dl
  __int8 v42; // dl
  __int8 v43; // dl
  __int64 v44; // rdx
  __int8 *v45; // rcx
  __m128i *v46; // rdx
  __int8 v47; // si
  unsigned __int64 v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  __int8 v51; // r8
  __int8 v52; // dl
  const __m128i *v53; // rax
  const __m128i *v54; // rdx
  __m128i v55; // xmm0
  __m128i v56; // xmm2
  __int8 *v57; // rax
  __int8 *v58; // rdx
  __int8 v59; // si
  char v60; // si
  char v61; // si
  char v62; // si
  char v63; // si
  char v64; // si
  char v65; // si
  char v66; // si
  char v67; // si
  char v68; // si
  char v69; // si
  char v70; // si
  char v71; // si
  char v72; // si
  char v73; // cl
  size_t v74; // rax
  __int8 v75; // r15
  size_t v76; // r14
  __int8 v77; // r14
  __m128i *v78; // rdx
  __m128i *v79; // rax
  __int8 v80; // di
  __int8 v81; // si
  __int64 v82; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v84; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+18h] [rbp-C0h] BYREF
  __m128i src; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v87[3]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v88; // [rsp+60h] [rbp-78h] BYREF
  __int128 v89; // [rsp+70h] [rbp-68h]
  __int128 v90; // [rsp+80h] [rbp-58h]
  __m128i si128; // [rsp+90h] [rbp-48h]

  src = 0;
  memset(v87, 0, sizeof(v87));
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v82 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v6 = sub_A0C4A0(&src, &v82, &src, (unsigned __int64)&v88, a1);
  v7 = *a2;
  v83 = v82;
  v8 = sub_A0C4A0(&src, &v83, v6, (unsigned __int64)&v88, v7);
  v9 = *a3;
  v84 = v83;
  v10 = sub_20728A0(&src, &v84, v8, (unsigned __int64)&v88, v9);
  v11 = *a4;
  v85 = v84;
  v12 = sub_20728A0(&src, &v85, v10, (unsigned __int64)&v88, v11);
  v13 = v85;
  v14 = (char *)v12 - (char *)&src;
  if ( !v85 )
    return sub_2012F20(&src, v14, si128.m128i_i64[1]);
  v16 = v12;
  v17 = (char *)v12 - (char *)&src;
  if ( v12 != (__m128i *)&v88 && v12 != &src )
  {
    v18 = (char *)((char *)&v88 - (char *)v12);
    v19 = 64;
    v20 = v18;
    p_src = &src;
    if ( v20 == (char *)v14 )
    {
      v53 = v16;
      if ( (v16 >= (__m128i *)v87 || &src >= &v16[1])
        && (unsigned __int64)v16->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v54 = &src;
        do
        {
          v55 = _mm_load_si128(v54);
          v56 = _mm_loadu_si128(v53++);
          ++v54;
          v54[-1] = v56;
          v53[-1] = v55;
        }
        while ( v53 != (const __m128i *)&v16->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL] );
        v57 = &src.m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
        v58 = &v16->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != v14 )
        {
          v59 = *v57;
          *v57 = *v58;
          *v58 = v59;
          if ( v16 != (__m128i *)(v57 + 1) )
          {
            v60 = v57[1];
            v57[1] = v58[1];
            v58[1] = v60;
            if ( v16 != (__m128i *)(v57 + 2) )
            {
              v61 = v57[2];
              v57[2] = v58[2];
              v58[2] = v61;
              if ( v16 != (__m128i *)(v57 + 3) )
              {
                v62 = v57[3];
                v57[3] = v58[3];
                v58[3] = v62;
                if ( v16 != (__m128i *)(v57 + 4) )
                {
                  v63 = v57[4];
                  v57[4] = v58[4];
                  v58[4] = v63;
                  if ( v16 != (__m128i *)(v57 + 5) )
                  {
                    v64 = v57[5];
                    v57[5] = v58[5];
                    v58[5] = v64;
                    if ( v16 != (__m128i *)(v57 + 6) )
                    {
                      v65 = v57[6];
                      v57[6] = v58[6];
                      v58[6] = v65;
                      if ( v16 != (__m128i *)(v57 + 7) )
                      {
                        v66 = v57[7];
                        v57[7] = v58[7];
                        v58[7] = v66;
                        if ( v16 != (__m128i *)(v57 + 8) )
                        {
                          v67 = v57[8];
                          v57[8] = v58[8];
                          v58[8] = v67;
                          if ( v16 != (__m128i *)(v57 + 9) )
                          {
                            v68 = v57[9];
                            v57[9] = v58[9];
                            v58[9] = v68;
                            if ( v16 != (__m128i *)(v57 + 10) )
                            {
                              v69 = v57[10];
                              v57[10] = v58[10];
                              v58[10] = v69;
                              if ( v16 != (__m128i *)(v57 + 11) )
                              {
                                v70 = v57[11];
                                v57[11] = v58[11];
                                v58[11] = v70;
                                if ( v16 != (__m128i *)(v57 + 12) )
                                {
                                  v71 = v57[12];
                                  v57[12] = v58[12];
                                  v58[12] = v71;
                                  if ( v16 != (__m128i *)(v57 + 13) )
                                  {
                                    v72 = v57[13];
                                    v57[13] = v58[13];
                                    v58[13] = v72;
                                    if ( v16 != (__m128i *)(v57 + 14) )
                                    {
                                      v73 = v57[14];
                                      v57[14] = v58[14];
                                      v58[14] = v73;
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
        v78 = v16;
        v79 = &src;
        do
        {
          v80 = v78->m128i_i8[0];
          v81 = v79->m128i_i8[0];
          v79 = (__m128i *)((char *)v79 + 1);
          v78 = (__m128i *)((char *)v78 + 1);
          v79[-1].m128i_i8[15] = v80;
          v78[-1].m128i_i8[15] = v81;
        }
        while ( v16 != v79 );
      }
    }
    else
    {
      v22 = 64 - v14;
      if ( v14 >= 64 - v14 )
        goto LABEL_34;
      while ( v14 != 1 )
      {
        v23 = (__m128i *)((char *)p_src + v14);
        if ( v22 > 0 )
        {
          if ( (v23 >= &p_src[1] || v14 + 16 <= 0) && (unsigned __int64)(v22 - 1) > 0xE )
          {
            v24 = 0;
            do
            {
              v25 = _mm_loadu_si128(&p_src[v24 / 0x10]);
              p_src[v24 / 0x10] = _mm_loadu_si128(&v23[v24 / 0x10]);
              v23[v24 / 0x10] = v25;
              v24 += 16LL;
            }
            while ( v24 != (v22 & 0xFFFFFFFFFFFFFFF0LL) );
            v26 = v22 & 0x7FFFFFFFFFFFFFF0LL;
            v27 = (__m128i *)((char *)p_src + (v22 & 0xFFFFFFFFFFFFFFF0LL));
            v28 = &v23->m128i_i8[v22 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v22 != (v22 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v29 = v27->m128i_i8[0];
              v27->m128i_i8[0] = *v28;
              *v28 = v29;
              if ( v22 > v26 + 1 )
              {
                v30 = v27->m128i_i8[1];
                v27->m128i_i8[1] = v28[1];
                v28[1] = v30;
                if ( v22 > v26 + 2 )
                {
                  v31 = v27->m128i_i8[2];
                  v27->m128i_i8[2] = v28[2];
                  v28[2] = v31;
                  if ( v22 > v26 + 3 )
                  {
                    v32 = v27->m128i_i8[3];
                    v27->m128i_i8[3] = v28[3];
                    v28[3] = v32;
                    if ( v22 > v26 + 4 )
                    {
                      v33 = v27->m128i_i8[4];
                      v27->m128i_i8[4] = v28[4];
                      v28[4] = v33;
                      if ( v22 > v26 + 5 )
                      {
                        v34 = v27->m128i_i8[5];
                        v27->m128i_i8[5] = v28[5];
                        v28[5] = v34;
                        if ( v22 > v26 + 6 )
                        {
                          v35 = v27->m128i_i8[6];
                          v27->m128i_i8[6] = v28[6];
                          v28[6] = v35;
                          if ( v22 > v26 + 7 )
                          {
                            v36 = v27->m128i_i8[7];
                            v27->m128i_i8[7] = v28[7];
                            v28[7] = v36;
                            if ( v22 > v26 + 8 )
                            {
                              v37 = v27->m128i_i8[8];
                              v27->m128i_i8[8] = v28[8];
                              v28[8] = v37;
                              if ( v22 > v26 + 9 )
                              {
                                v38 = v27->m128i_i8[9];
                                v27->m128i_i8[9] = v28[9];
                                v28[9] = v38;
                                if ( v22 > v26 + 10 )
                                {
                                  v39 = v27->m128i_i8[10];
                                  v27->m128i_i8[10] = v28[10];
                                  v28[10] = v39;
                                  if ( v22 > v26 + 11 )
                                  {
                                    v40 = v27->m128i_i8[11];
                                    v27->m128i_i8[11] = v28[11];
                                    v28[11] = v40;
                                    if ( v22 > v26 + 12 )
                                    {
                                      v41 = v27->m128i_i8[12];
                                      v27->m128i_i8[12] = v28[12];
                                      v28[12] = v41;
                                      if ( v22 > v26 + 13 )
                                      {
                                        v42 = v27->m128i_i8[13];
                                        v27->m128i_i8[13] = v28[13];
                                        v28[13] = v42;
                                        if ( v22 > v26 + 14 )
                                        {
                                          v43 = v27->m128i_i8[14];
                                          v27->m128i_i8[14] = v28[14];
                                          v28[14] = v43;
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
              v27 = (__m128i *)((char *)p_src + v22);
            }
          }
          else
          {
            v27 = (__m128i *)((char *)p_src + v22);
            do
            {
              v51 = v23->m128i_i8[0];
              v52 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v23 = (__m128i *)((char *)v23 + 1);
              p_src[-1].m128i_i8[15] = v51;
              v23[-1].m128i_i8[15] = v52;
            }
            while ( p_src != v27 );
          }
          p_src = v27;
        }
        if ( !(v19 % v14) )
          goto LABEL_39;
        v22 = v14;
        v44 = v14 - v19 % v14;
        while ( 1 )
        {
          v19 = v22;
          v14 = v44;
          v22 -= v44;
          if ( v44 < v22 )
            break;
LABEL_34:
          if ( v22 == 1 )
          {
            v77 = p_src->m128i_i8[v19 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v19 - 1);
            p_src->m128i_i8[0] = v77;
            goto LABEL_39;
          }
          v45 = &p_src->m128i_i8[v19];
          v46 = (__m128i *)((char *)p_src + v19 - v22);
          p_src = v46;
          if ( v14 > 0 )
          {
            p_src = (__m128i *)((char *)v46 - v14);
            do
            {
              v46 = (__m128i *)((char *)v46 - 1);
              --v45;
              v47 = v46->m128i_i8[0];
              v46->m128i_i8[0] = *v45;
              *v45 = v47;
            }
            while ( v46 != p_src );
          }
          v44 = v19 % v22;
          if ( !(v19 % v22) )
            goto LABEL_39;
        }
      }
      v74 = v19 - 1;
      v75 = p_src->m128i_i8[0];
      v76 = v74;
      if ( v74 )
        memmove(p_src, &p_src->m128i_i8[1], v74);
      p_src->m128i_i8[v76] = v75;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)&v88, &src);
  v48 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v90))
       ^ si128.m128i_i64[0]
       ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v90)) >> 47));
  v49 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v17 + v13) >> 47) ^ (v17 + v13))
      + v88
      - 0x622015F714C7D297LL * (v48 ^ (v48 >> 47));
  v50 = 0x9DDFEA08EB382D69LL
      * (v49
       ^ (v89
        - 0x4B6D499041670D8DLL * (*((_QWORD *)&v88 + 1) ^ (*((_QWORD *)&v88 + 1) >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v90 + 1) ^ *((_QWORD *)&v89 + 1)))
           ^ *((_QWORD *)&v90 + 1)
           ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v90 + 1) ^ *((_QWORD *)&v89 + 1))) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v90 + 1) ^ *((_QWORD *)&v89 + 1)))
            ^ *((_QWORD *)&v90 + 1)
            ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v90 + 1) ^ *((_QWORD *)&v89 + 1))) >> 47))) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) >> 47));
}
