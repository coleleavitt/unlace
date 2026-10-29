unsigned __int64 __fastcall sub_20AC470(__int64 a1, __int64 *a2, char *a3)
{
  __m128i *v4; // rax
  __int64 v5; // r8
  __m128i *v6; // rax
  char v7; // r8
  __m128i *v8; // rax
  __int64 v9; // r12
  signed __int64 v10; // rsi
  __m128i *v12; // rcx
  signed __int64 v13; // r13
  char *v14; // rbx
  __int64 v15; // rax
  char *v16; // rdx
  __m128i *p_src; // rbx
  __int64 v18; // r8
  __m128i *v19; // rdi
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // r9
  __m128i *v23; // rcx
  __int8 *v24; // rdi
  __int8 v25; // dl
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
  __int64 v40; // rdx
  __int8 *v41; // rcx
  __m128i *v42; // rdx
  __int8 v43; // si
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  __int8 v47; // r8
  __int8 v48; // dl
  const __m128i *v49; // rax
  const __m128i *v50; // rdx
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __int8 *v53; // rax
  __int8 *v54; // rdx
  __int8 v55; // si
  char v56; // si
  char v57; // si
  char v58; // si
  char v59; // si
  char v60; // si
  char v61; // si
  char v62; // si
  char v63; // si
  char v64; // si
  char v65; // si
  char v66; // si
  char v67; // si
  char v68; // si
  char v69; // cl
  size_t v70; // rax
  __int8 v71; // r15
  size_t v72; // r14
  __int8 v73; // r14
  __m128i *v74; // rdx
  __m128i *v75; // rax
  __int8 v76; // di
  __int8 v77; // si
  __int64 v78; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+10h] [rbp-C0h] BYREF
  __m128i src; // [rsp+18h] [rbp-B8h] BYREF
  _OWORD v82[3]; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+58h] [rbp-78h] BYREF
  __int128 v84; // [rsp+68h] [rbp-68h]
  __int128 v85; // [rsp+78h] [rbp-58h]
  __m128i si128; // [rsp+88h] [rbp-48h]

  src = 0;
  memset(v82, 0, sizeof(v82));
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v78 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v4 = sub_20728A0(&src, &v78, &src, (unsigned __int64)&v83, a1);
  v5 = *a2;
  v79 = v78;
  v6 = sub_206E9E0(&src, &v79, v4, (unsigned __int64)&v83, v5);
  v7 = *a3;
  v80 = v79;
  v8 = (__m128i *)sub_207A9D0(&src, &v80, v6, (unsigned __int64)&v83, v7);
  v9 = v80;
  v10 = (char *)v8 - (char *)&src;
  if ( !v80 )
    return sub_2012F20(&src, v10, si128.m128i_i64[1]);
  v12 = v8;
  v13 = (char *)v8 - (char *)&src;
  if ( v8 != (__m128i *)&v83 && v8 != &src )
  {
    v14 = (char *)((char *)&v83 - (char *)v8);
    v15 = 64;
    v16 = v14;
    p_src = &src;
    if ( v16 == (char *)v10 )
    {
      v49 = v12;
      if ( (v12 >= (__m128i *)v82 || &src >= &v12[1])
        && (unsigned __int64)v12->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v50 = &src;
        do
        {
          v51 = _mm_load_si128(v50);
          v52 = _mm_loadu_si128(v49++);
          ++v50;
          v50[-1] = v52;
          v49[-1] = v51;
        }
        while ( v49 != (const __m128i *)&v12->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL] );
        v53 = &src.m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
        v54 = &v12->m128i_i8[v10 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != v10 )
        {
          v55 = *v53;
          *v53 = *v54;
          *v54 = v55;
          if ( v12 != (__m128i *)(v53 + 1) )
          {
            v56 = v53[1];
            v53[1] = v54[1];
            v54[1] = v56;
            if ( v12 != (__m128i *)(v53 + 2) )
            {
              v57 = v53[2];
              v53[2] = v54[2];
              v54[2] = v57;
              if ( v12 != (__m128i *)(v53 + 3) )
              {
                v58 = v53[3];
                v53[3] = v54[3];
                v54[3] = v58;
                if ( v12 != (__m128i *)(v53 + 4) )
                {
                  v59 = v53[4];
                  v53[4] = v54[4];
                  v54[4] = v59;
                  if ( v12 != (__m128i *)(v53 + 5) )
                  {
                    v60 = v53[5];
                    v53[5] = v54[5];
                    v54[5] = v60;
                    if ( v12 != (__m128i *)(v53 + 6) )
                    {
                      v61 = v53[6];
                      v53[6] = v54[6];
                      v54[6] = v61;
                      if ( v12 != (__m128i *)(v53 + 7) )
                      {
                        v62 = v53[7];
                        v53[7] = v54[7];
                        v54[7] = v62;
                        if ( v12 != (__m128i *)(v53 + 8) )
                        {
                          v63 = v53[8];
                          v53[8] = v54[8];
                          v54[8] = v63;
                          if ( v12 != (__m128i *)(v53 + 9) )
                          {
                            v64 = v53[9];
                            v53[9] = v54[9];
                            v54[9] = v64;
                            if ( v12 != (__m128i *)(v53 + 10) )
                            {
                              v65 = v53[10];
                              v53[10] = v54[10];
                              v54[10] = v65;
                              if ( v12 != (__m128i *)(v53 + 11) )
                              {
                                v66 = v53[11];
                                v53[11] = v54[11];
                                v54[11] = v66;
                                if ( v12 != (__m128i *)(v53 + 12) )
                                {
                                  v67 = v53[12];
                                  v53[12] = v54[12];
                                  v54[12] = v67;
                                  if ( v12 != (__m128i *)(v53 + 13) )
                                  {
                                    v68 = v53[13];
                                    v53[13] = v54[13];
                                    v54[13] = v68;
                                    if ( v12 != (__m128i *)(v53 + 14) )
                                    {
                                      v69 = v53[14];
                                      v53[14] = v54[14];
                                      v54[14] = v69;
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
        v74 = v12;
        v75 = &src;
        do
        {
          v76 = v74->m128i_i8[0];
          v77 = v75->m128i_i8[0];
          v75 = (__m128i *)((char *)v75 + 1);
          v74 = (__m128i *)((char *)v74 + 1);
          v75[-1].m128i_i8[15] = v76;
          v74[-1].m128i_i8[15] = v77;
        }
        while ( v12 != v75 );
      }
    }
    else
    {
      v18 = 64 - v10;
      if ( v10 >= 64 - v10 )
        goto LABEL_34;
      while ( v10 != 1 )
      {
        v19 = (__m128i *)((char *)p_src + v10);
        if ( v18 > 0 )
        {
          if ( (v19 >= &p_src[1] || v10 + 16 <= 0) && (unsigned __int64)(v18 - 1) > 0xE )
          {
            v20 = 0;
            do
            {
              v21 = _mm_loadu_si128(&p_src[v20 / 0x10]);
              p_src[v20 / 0x10] = _mm_loadu_si128(&v19[v20 / 0x10]);
              v19[v20 / 0x10] = v21;
              v20 += 16LL;
            }
            while ( v20 != (v18 & 0xFFFFFFFFFFFFFFF0LL) );
            v22 = v18 & 0x7FFFFFFFFFFFFFF0LL;
            v23 = (__m128i *)((char *)p_src + (v18 & 0xFFFFFFFFFFFFFFF0LL));
            v24 = &v19->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v18 != (v18 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v25 = v23->m128i_i8[0];
              v23->m128i_i8[0] = *v24;
              *v24 = v25;
              if ( v18 > v22 + 1 )
              {
                v26 = v23->m128i_i8[1];
                v23->m128i_i8[1] = v24[1];
                v24[1] = v26;
                if ( v18 > v22 + 2 )
                {
                  v27 = v23->m128i_i8[2];
                  v23->m128i_i8[2] = v24[2];
                  v24[2] = v27;
                  if ( v18 > v22 + 3 )
                  {
                    v28 = v23->m128i_i8[3];
                    v23->m128i_i8[3] = v24[3];
                    v24[3] = v28;
                    if ( v18 > v22 + 4 )
                    {
                      v29 = v23->m128i_i8[4];
                      v23->m128i_i8[4] = v24[4];
                      v24[4] = v29;
                      if ( v18 > v22 + 5 )
                      {
                        v30 = v23->m128i_i8[5];
                        v23->m128i_i8[5] = v24[5];
                        v24[5] = v30;
                        if ( v18 > v22 + 6 )
                        {
                          v31 = v23->m128i_i8[6];
                          v23->m128i_i8[6] = v24[6];
                          v24[6] = v31;
                          if ( v18 > v22 + 7 )
                          {
                            v32 = v23->m128i_i8[7];
                            v23->m128i_i8[7] = v24[7];
                            v24[7] = v32;
                            if ( v18 > v22 + 8 )
                            {
                              v33 = v23->m128i_i8[8];
                              v23->m128i_i8[8] = v24[8];
                              v24[8] = v33;
                              if ( v18 > v22 + 9 )
                              {
                                v34 = v23->m128i_i8[9];
                                v23->m128i_i8[9] = v24[9];
                                v24[9] = v34;
                                if ( v18 > v22 + 10 )
                                {
                                  v35 = v23->m128i_i8[10];
                                  v23->m128i_i8[10] = v24[10];
                                  v24[10] = v35;
                                  if ( v18 > v22 + 11 )
                                  {
                                    v36 = v23->m128i_i8[11];
                                    v23->m128i_i8[11] = v24[11];
                                    v24[11] = v36;
                                    if ( v18 > v22 + 12 )
                                    {
                                      v37 = v23->m128i_i8[12];
                                      v23->m128i_i8[12] = v24[12];
                                      v24[12] = v37;
                                      if ( v18 > v22 + 13 )
                                      {
                                        v38 = v23->m128i_i8[13];
                                        v23->m128i_i8[13] = v24[13];
                                        v24[13] = v38;
                                        if ( v18 > v22 + 14 )
                                        {
                                          v39 = v23->m128i_i8[14];
                                          v23->m128i_i8[14] = v24[14];
                                          v24[14] = v39;
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
              v23 = (__m128i *)((char *)p_src + v18);
            }
          }
          else
          {
            v23 = (__m128i *)((char *)p_src + v18);
            do
            {
              v47 = v19->m128i_i8[0];
              v48 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v19 = (__m128i *)((char *)v19 + 1);
              p_src[-1].m128i_i8[15] = v47;
              v19[-1].m128i_i8[15] = v48;
            }
            while ( p_src != v23 );
          }
          p_src = v23;
        }
        if ( !(v15 % v10) )
          goto LABEL_39;
        v18 = v10;
        v40 = v10 - v15 % v10;
        while ( 1 )
        {
          v15 = v18;
          v10 = v40;
          v18 -= v40;
          if ( v40 < v18 )
            break;
LABEL_34:
          if ( v18 == 1 )
          {
            v73 = p_src->m128i_i8[v15 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v15 - 1);
            p_src->m128i_i8[0] = v73;
            goto LABEL_39;
          }
          v41 = &p_src->m128i_i8[v15];
          v42 = (__m128i *)((char *)p_src + v15 - v18);
          p_src = v42;
          if ( v10 > 0 )
          {
            p_src = (__m128i *)((char *)v42 - v10);
            do
            {
              v42 = (__m128i *)((char *)v42 - 1);
              --v41;
              v43 = v42->m128i_i8[0];
              v42->m128i_i8[0] = *v41;
              *v41 = v43;
            }
            while ( v42 != p_src );
          }
          v40 = v15 % v18;
          if ( !(v15 % v18) )
            goto LABEL_39;
        }
      }
      v70 = v15 - 1;
      v71 = p_src->m128i_i8[0];
      v72 = v70;
      if ( v70 )
        memmove(p_src, &p_src->m128i_i8[1], v70);
      p_src->m128i_i8[v72] = v71;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)&v83, &src);
  v44 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v85))
       ^ si128.m128i_i64[0]
       ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v85)) >> 47));
  v45 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v13 + v9) >> 47) ^ (v13 + v9))
      + v83
      - 0x622015F714C7D297LL * (v44 ^ (v44 >> 47));
  v46 = 0x9DDFEA08EB382D69LL
      * (v45
       ^ (v84
        - 0x4B6D499041670D8DLL * (*((_QWORD *)&v83 + 1) ^ (*((_QWORD *)&v83 + 1) >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v85 + 1) ^ *((_QWORD *)&v84 + 1)))
           ^ *((_QWORD *)&v85 + 1)
           ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v85 + 1) ^ *((_QWORD *)&v84 + 1))) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v85 + 1) ^ *((_QWORD *)&v84 + 1)))
            ^ *((_QWORD *)&v85 + 1)
            ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v85 + 1) ^ *((_QWORD *)&v84 + 1))) >> 47))) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47))) >> 47));
}
