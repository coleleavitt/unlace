unsigned __int64 __fastcall sub_20A2580(__int64 a1, __int64 *a2)
{
  __m128i *v2; // rax
  __int64 v3; // r8
  __m128i *v4; // rax
  __int64 v5; // r12
  signed __int64 v6; // rsi
  __m128i *v8; // rcx
  signed __int64 v9; // r13
  char *v10; // rbx
  __int64 v11; // rax
  char *v12; // rdx
  __m128i *p_src; // rbx
  __int64 v14; // r8
  __m128i *v15; // rdi
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // r9
  __m128i *v19; // rcx
  __int8 *v20; // rdi
  __int8 v21; // dl
  __int8 v22; // dl
  __int8 v23; // dl
  __int8 v24; // dl
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
  __int64 v36; // rdx
  __int8 *v37; // rcx
  __m128i *v38; // rdx
  __int8 v39; // si
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int8 v43; // r8
  __int8 v44; // dl
  const __m128i *v45; // rax
  const __m128i *v46; // rdx
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __int8 *v49; // rax
  __int8 *v50; // rdx
  __int8 v51; // si
  char v52; // si
  char v53; // si
  char v54; // si
  char v55; // si
  char v56; // si
  char v57; // si
  char v58; // si
  char v59; // si
  char v60; // si
  char v61; // si
  char v62; // si
  char v63; // si
  char v64; // si
  char v65; // cl
  size_t v66; // rax
  __int8 v67; // r15
  size_t v68; // r14
  __int8 v69; // r14
  __m128i *v70; // rdx
  __m128i *v71; // rax
  __int8 v72; // di
  __int8 v73; // si
  __int64 v74; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+8h] [rbp-C0h] BYREF
  __m128i src; // [rsp+10h] [rbp-B8h] BYREF
  _OWORD v77[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+50h] [rbp-78h] BYREF
  __int128 v79; // [rsp+60h] [rbp-68h]
  __int128 v80; // [rsp+70h] [rbp-58h]
  __m128i si128; // [rsp+80h] [rbp-48h]

  src = 0;
  memset(v77, 0, sizeof(v77));
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v74 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v2 = sub_206E9E0(&src, &v74, &src, (unsigned __int64)&v78, a1);
  v3 = *a2;
  v75 = v74;
  v4 = sub_206E9E0(&src, &v75, v2, (unsigned __int64)&v78, v3);
  v5 = v75;
  v6 = (char *)v4 - (char *)&src;
  if ( !v75 )
    return sub_2012F20(&src, v6, si128.m128i_i64[1]);
  v8 = v4;
  v9 = (char *)v4 - (char *)&src;
  if ( v4 != (__m128i *)&v78 && v4 != &src )
  {
    v10 = (char *)((char *)&v78 - (char *)v4);
    v11 = 64;
    v12 = v10;
    p_src = &src;
    if ( v12 == (char *)v6 )
    {
      v45 = v8;
      if ( (v8 >= (__m128i *)v77 || &src >= &v8[1]) && (unsigned __int64)v8->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v46 = &src;
        do
        {
          v47 = _mm_load_si128(v46);
          v48 = _mm_loadu_si128(v45++);
          ++v46;
          v46[-1] = v48;
          v45[-1] = v47;
        }
        while ( v45 != (const __m128i *)&v8->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL] );
        v49 = &src.m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
        v50 = &v8->m128i_i8[v6 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != v6 )
        {
          v51 = *v49;
          *v49 = *v50;
          *v50 = v51;
          if ( v8 != (__m128i *)(v49 + 1) )
          {
            v52 = v49[1];
            v49[1] = v50[1];
            v50[1] = v52;
            if ( v8 != (__m128i *)(v49 + 2) )
            {
              v53 = v49[2];
              v49[2] = v50[2];
              v50[2] = v53;
              if ( v8 != (__m128i *)(v49 + 3) )
              {
                v54 = v49[3];
                v49[3] = v50[3];
                v50[3] = v54;
                if ( v8 != (__m128i *)(v49 + 4) )
                {
                  v55 = v49[4];
                  v49[4] = v50[4];
                  v50[4] = v55;
                  if ( v8 != (__m128i *)(v49 + 5) )
                  {
                    v56 = v49[5];
                    v49[5] = v50[5];
                    v50[5] = v56;
                    if ( v8 != (__m128i *)(v49 + 6) )
                    {
                      v57 = v49[6];
                      v49[6] = v50[6];
                      v50[6] = v57;
                      if ( v8 != (__m128i *)(v49 + 7) )
                      {
                        v58 = v49[7];
                        v49[7] = v50[7];
                        v50[7] = v58;
                        if ( v8 != (__m128i *)(v49 + 8) )
                        {
                          v59 = v49[8];
                          v49[8] = v50[8];
                          v50[8] = v59;
                          if ( v8 != (__m128i *)(v49 + 9) )
                          {
                            v60 = v49[9];
                            v49[9] = v50[9];
                            v50[9] = v60;
                            if ( v8 != (__m128i *)(v49 + 10) )
                            {
                              v61 = v49[10];
                              v49[10] = v50[10];
                              v50[10] = v61;
                              if ( v8 != (__m128i *)(v49 + 11) )
                              {
                                v62 = v49[11];
                                v49[11] = v50[11];
                                v50[11] = v62;
                                if ( v8 != (__m128i *)(v49 + 12) )
                                {
                                  v63 = v49[12];
                                  v49[12] = v50[12];
                                  v50[12] = v63;
                                  if ( v8 != (__m128i *)(v49 + 13) )
                                  {
                                    v64 = v49[13];
                                    v49[13] = v50[13];
                                    v50[13] = v64;
                                    if ( v8 != (__m128i *)(v49 + 14) )
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
        v70 = v8;
        v71 = &src;
        do
        {
          v72 = v70->m128i_i8[0];
          v73 = v71->m128i_i8[0];
          v71 = (__m128i *)((char *)v71 + 1);
          v70 = (__m128i *)((char *)v70 + 1);
          v71[-1].m128i_i8[15] = v72;
          v70[-1].m128i_i8[15] = v73;
        }
        while ( v8 != v71 );
      }
    }
    else
    {
      v14 = 64 - v6;
      if ( v6 >= 64 - v6 )
        goto LABEL_34;
      while ( v6 != 1 )
      {
        v15 = (__m128i *)((char *)p_src + v6);
        if ( v14 > 0 )
        {
          if ( (v15 >= &p_src[1] || v6 + 16 <= 0) && (unsigned __int64)(v14 - 1) > 0xE )
          {
            v16 = 0;
            do
            {
              v17 = _mm_loadu_si128(&p_src[v16 / 0x10]);
              p_src[v16 / 0x10] = _mm_loadu_si128(&v15[v16 / 0x10]);
              v15[v16 / 0x10] = v17;
              v16 += 16LL;
            }
            while ( v16 != (v14 & 0xFFFFFFFFFFFFFFF0LL) );
            v18 = v14 & 0x7FFFFFFFFFFFFFF0LL;
            v19 = (__m128i *)((char *)p_src + (v14 & 0xFFFFFFFFFFFFFFF0LL));
            v20 = &v15->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v14 != (v14 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v21 = v19->m128i_i8[0];
              v19->m128i_i8[0] = *v20;
              *v20 = v21;
              if ( v14 > v18 + 1 )
              {
                v22 = v19->m128i_i8[1];
                v19->m128i_i8[1] = v20[1];
                v20[1] = v22;
                if ( v14 > v18 + 2 )
                {
                  v23 = v19->m128i_i8[2];
                  v19->m128i_i8[2] = v20[2];
                  v20[2] = v23;
                  if ( v14 > v18 + 3 )
                  {
                    v24 = v19->m128i_i8[3];
                    v19->m128i_i8[3] = v20[3];
                    v20[3] = v24;
                    if ( v14 > v18 + 4 )
                    {
                      v25 = v19->m128i_i8[4];
                      v19->m128i_i8[4] = v20[4];
                      v20[4] = v25;
                      if ( v14 > v18 + 5 )
                      {
                        v26 = v19->m128i_i8[5];
                        v19->m128i_i8[5] = v20[5];
                        v20[5] = v26;
                        if ( v14 > v18 + 6 )
                        {
                          v27 = v19->m128i_i8[6];
                          v19->m128i_i8[6] = v20[6];
                          v20[6] = v27;
                          if ( v14 > v18 + 7 )
                          {
                            v28 = v19->m128i_i8[7];
                            v19->m128i_i8[7] = v20[7];
                            v20[7] = v28;
                            if ( v14 > v18 + 8 )
                            {
                              v29 = v19->m128i_i8[8];
                              v19->m128i_i8[8] = v20[8];
                              v20[8] = v29;
                              if ( v14 > v18 + 9 )
                              {
                                v30 = v19->m128i_i8[9];
                                v19->m128i_i8[9] = v20[9];
                                v20[9] = v30;
                                if ( v14 > v18 + 10 )
                                {
                                  v31 = v19->m128i_i8[10];
                                  v19->m128i_i8[10] = v20[10];
                                  v20[10] = v31;
                                  if ( v14 > v18 + 11 )
                                  {
                                    v32 = v19->m128i_i8[11];
                                    v19->m128i_i8[11] = v20[11];
                                    v20[11] = v32;
                                    if ( v14 > v18 + 12 )
                                    {
                                      v33 = v19->m128i_i8[12];
                                      v19->m128i_i8[12] = v20[12];
                                      v20[12] = v33;
                                      if ( v14 > v18 + 13 )
                                      {
                                        v34 = v19->m128i_i8[13];
                                        v19->m128i_i8[13] = v20[13];
                                        v20[13] = v34;
                                        if ( v14 > v18 + 14 )
                                        {
                                          v35 = v19->m128i_i8[14];
                                          v19->m128i_i8[14] = v20[14];
                                          v20[14] = v35;
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
              v19 = (__m128i *)((char *)p_src + v14);
            }
          }
          else
          {
            v19 = (__m128i *)((char *)p_src + v14);
            do
            {
              v43 = v15->m128i_i8[0];
              v44 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v15 = (__m128i *)((char *)v15 + 1);
              p_src[-1].m128i_i8[15] = v43;
              v15[-1].m128i_i8[15] = v44;
            }
            while ( p_src != v19 );
          }
          p_src = v19;
        }
        if ( !(v11 % v6) )
          goto LABEL_39;
        v14 = v6;
        v36 = v6 - v11 % v6;
        while ( 1 )
        {
          v11 = v14;
          v6 = v36;
          v14 -= v36;
          if ( v36 < v14 )
            break;
LABEL_34:
          if ( v14 == 1 )
          {
            v69 = p_src->m128i_i8[v11 - 1];
            memmove(&p_src->m128i_i8[1], p_src, v11 - 1);
            p_src->m128i_i8[0] = v69;
            goto LABEL_39;
          }
          v37 = &p_src->m128i_i8[v11];
          v38 = (__m128i *)((char *)p_src + v11 - v14);
          p_src = v38;
          if ( v6 > 0 )
          {
            p_src = (__m128i *)((char *)v38 - v6);
            do
            {
              v38 = (__m128i *)((char *)v38 - 1);
              --v37;
              v39 = v38->m128i_i8[0];
              v38->m128i_i8[0] = *v37;
              *v37 = v39;
            }
            while ( v38 != p_src );
          }
          v36 = v11 % v14;
          if ( !(v11 % v14) )
            goto LABEL_39;
        }
      }
      v66 = v11 - 1;
      v67 = p_src->m128i_i8[0];
      v68 = v66;
      if ( v66 )
        memmove(p_src, &p_src->m128i_i8[1], v66);
      p_src->m128i_i8[v68] = v67;
    }
  }
LABEL_39:
  sub_9B6F20((unsigned __int64 *)&v78, &src);
  v40 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v80))
       ^ si128.m128i_i64[0]
       ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v80)) >> 47));
  v41 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v9 + v5) >> 47) ^ (v9 + v5))
      + v78
      - 0x622015F714C7D297LL * (v40 ^ (v40 >> 47));
  v42 = 0x9DDFEA08EB382D69LL
      * (v41
       ^ (v79
        - 0x4B6D499041670D8DLL * (*((_QWORD *)&v78 + 1) ^ (*((_QWORD *)&v78 + 1) >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v80 + 1) ^ *((_QWORD *)&v79 + 1)))
           ^ *((_QWORD *)&v80 + 1)
           ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v80 + 1) ^ *((_QWORD *)&v79 + 1))) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v80 + 1) ^ *((_QWORD *)&v79 + 1)))
            ^ *((_QWORD *)&v80 + 1)
            ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v80 + 1) ^ *((_QWORD *)&v79 + 1))) >> 47))) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v42 ^ v41 ^ (v42 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v42 ^ v41 ^ (v42 >> 47))) >> 47));
}
