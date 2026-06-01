unsigned __int64 __fastcall sub_20A2CD0(int a1, __int8 *a2, __int64 *a3)
{
  __m128i *v4; // rax
  __int8 v5; // dl
  __int64 v6; // r15
  _QWORD *v7; // r12
  char *v8; // r12
  size_t v9; // rdx
  char *v10; // rsi
  __int64 v11; // r8
  __m128i *v12; // rax
  __int64 v13; // r12
  __m128i *v14; // rdx
  signed __int64 v15; // rsi
  signed __int64 v16; // r13
  char *v18; // rbx
  __int64 v19; // rax
  char *v20; // rcx
  __m128i *p_dest; // rbx
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
  __m128i v53; // xmm4
  __m128i v54; // xmm5
  const __m128i *v55; // rax
  const __m128i *v56; // rcx
  __m128i v57; // xmm0
  __m128i v58; // xmm2
  __int8 *v59; // rax
  __int8 *v60; // rcx
  __int8 v61; // si
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
  char v73; // si
  char v74; // si
  char v75; // dl
  size_t v76; // rax
  __int8 v77; // r15
  size_t v78; // r14
  __int8 v79; // r14
  __m128i *v80; // rcx
  __m128i *v81; // rax
  __int8 v82; // di
  __int8 v83; // si
  __m128i v84; // [rsp+0h] [rbp-108h] BYREF
  __m128i v85; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v86; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v87; // [rsp+30h] [rbp-D8h]
  __int64 v88; // [rsp+40h] [rbp-C8h] BYREF
  __int64 src; // [rsp+48h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v91[3]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v92; // [rsp+90h] [rbp-78h] BYREF
  __m128i v93; // [rsp+A0h] [rbp-68h]
  __m128i v94; // [rsp+B0h] [rbp-58h]
  __m128i si128; // [rsp+C0h] [rbp-48h]

  dest = 0;
  memset(v91, 0, sizeof(v91));
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v88 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v4 = sub_A0C4A0(&dest, &v88, &dest, (unsigned __int64)&v92, a1);
  v5 = *a2;
  v6 = v88;
  v7 = (__int64 *)((char *)v4->m128i_i64 + 1);
  LOBYTE(src) = *a2;
  if ( &v4->m128i_i8[1] <= (__int8 *)&v92 )
  {
    v4->m128i_i8[0] = v5;
  }
  else
  {
    v8 = (char *)((char *)&v92 - (char *)v4);
    memcpy(v4, &src, (char *)&v92 - (char *)v4);
    if ( v6 )
    {
      v6 += 64;
      sub_9B6F20((unsigned __int64 *)&v92, &dest);
    }
    else
    {
      v6 = 64;
      sub_A09B80((unsigned __int64 *)&v84, &dest, si128.m128i_u64[1]);
      v53 = _mm_loadu_si128(&v85);
      v54 = _mm_loadu_si128(&v86);
      v92 = _mm_loadu_si128(&v84);
      v93 = v53;
      v94 = v54;
      si128.m128i_i64[0] = v87;
    }
    v9 = 1LL - (_QWORD)v8;
    v10 = (char *)&src + (_QWORD)v8;
    v7 = (__int64 *)((char *)dest.m128i_i64 + 1LL - (_QWORD)v8);
    memcpy(&dest, v10, v9);
  }
  v11 = *a3;
  src = v6;
  v12 = sub_206E9E0(&dest, &src, v7, (unsigned __int64)&v92, v11);
  v13 = src;
  v14 = v12;
  v15 = (char *)v12 - (char *)&dest;
  v16 = (char *)v12 - (char *)&dest;
  if ( !src )
    return sub_2012F20(&dest, v15, si128.m128i_i64[1]);
  if ( v12 != &v92 && v12 != &dest )
  {
    v18 = (char *)((char *)&v92 - (char *)v12);
    v19 = 64;
    v20 = v18;
    p_dest = &dest;
    if ( v20 == (char *)v15 )
    {
      v55 = v14;
      if ( (v14 >= (__m128i *)v91 || &dest >= &v14[1])
        && (unsigned __int64)v14->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v56 = &dest;
        do
        {
          v57 = _mm_load_si128(v56);
          v58 = _mm_loadu_si128(v55++);
          ++v56;
          v56[-1] = v58;
          v55[-1] = v57;
        }
        while ( v55 != (const __m128i *)&v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL] );
        v59 = &dest.m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        v60 = &v14->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v15 != (v15 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v61 = *v59;
          *v59 = *v60;
          *v60 = v61;
          if ( v14 != (__m128i *)(v59 + 1) )
          {
            v62 = v59[1];
            v59[1] = v60[1];
            v60[1] = v62;
            if ( v14 != (__m128i *)(v59 + 2) )
            {
              v63 = v59[2];
              v59[2] = v60[2];
              v60[2] = v63;
              if ( v14 != (__m128i *)(v59 + 3) )
              {
                v64 = v59[3];
                v59[3] = v60[3];
                v60[3] = v64;
                if ( v14 != (__m128i *)(v59 + 4) )
                {
                  v65 = v59[4];
                  v59[4] = v60[4];
                  v60[4] = v65;
                  if ( v14 != (__m128i *)(v59 + 5) )
                  {
                    v66 = v59[5];
                    v59[5] = v60[5];
                    v60[5] = v66;
                    if ( v14 != (__m128i *)(v59 + 6) )
                    {
                      v67 = v59[6];
                      v59[6] = v60[6];
                      v60[6] = v67;
                      if ( v14 != (__m128i *)(v59 + 7) )
                      {
                        v68 = v59[7];
                        v59[7] = v60[7];
                        v60[7] = v68;
                        if ( v14 != (__m128i *)(v59 + 8) )
                        {
                          v69 = v59[8];
                          v59[8] = v60[8];
                          v60[8] = v69;
                          if ( v14 != (__m128i *)(v59 + 9) )
                          {
                            v70 = v59[9];
                            v59[9] = v60[9];
                            v60[9] = v70;
                            if ( v14 != (__m128i *)(v59 + 10) )
                            {
                              v71 = v59[10];
                              v59[10] = v60[10];
                              v60[10] = v71;
                              if ( v14 != (__m128i *)(v59 + 11) )
                              {
                                v72 = v59[11];
                                v59[11] = v60[11];
                                v60[11] = v72;
                                if ( v14 != (__m128i *)(v59 + 12) )
                                {
                                  v73 = v59[12];
                                  v59[12] = v60[12];
                                  v60[12] = v73;
                                  if ( v14 != (__m128i *)(v59 + 13) )
                                  {
                                    v74 = v59[13];
                                    v59[13] = v60[13];
                                    v60[13] = v74;
                                    if ( v14 != (__m128i *)(v59 + 14) )
                                    {
                                      v75 = v59[14];
                                      v59[14] = v60[14];
                                      v60[14] = v75;
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
        v80 = v14;
        v81 = &dest;
        do
        {
          v82 = v80->m128i_i8[0];
          v83 = v81->m128i_i8[0];
          v81 = (__m128i *)((char *)v81 + 1);
          v80 = (__m128i *)((char *)v80 + 1);
          v81[-1].m128i_i8[15] = v82;
          v80[-1].m128i_i8[15] = v83;
        }
        while ( v14 != v81 );
      }
    }
    else
    {
      v22 = 64 - v15;
      if ( v15 >= 64 - v15 )
        goto LABEL_39;
      while ( v15 != 1 )
      {
        v23 = (__m128i *)((char *)p_dest + v15);
        if ( v22 > 0 )
        {
          if ( (v23 >= &p_dest[1] || v15 + 16 <= 0) && (unsigned __int64)(v22 - 1) > 0xE )
          {
            v24 = 0;
            do
            {
              v25 = _mm_loadu_si128(&p_dest[v24 / 0x10]);
              p_dest[v24 / 0x10] = _mm_loadu_si128(&v23[v24 / 0x10]);
              v23[v24 / 0x10] = v25;
              v24 += 16LL;
            }
            while ( v24 != (v22 & 0xFFFFFFFFFFFFFFF0LL) );
            v26 = v22 & 0x7FFFFFFFFFFFFFF0LL;
            v27 = (__m128i *)((char *)p_dest + (v22 & 0xFFFFFFFFFFFFFFF0LL));
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
              v27 = (__m128i *)((char *)p_dest + v22);
            }
          }
          else
          {
            v27 = (__m128i *)((char *)p_dest + v22);
            do
            {
              v51 = v23->m128i_i8[0];
              v52 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v23 = (__m128i *)((char *)v23 + 1);
              p_dest[-1].m128i_i8[15] = v51;
              v23[-1].m128i_i8[15] = v52;
            }
            while ( p_dest != v27 );
          }
          p_dest = v27;
        }
        if ( !(v19 % v15) )
          goto LABEL_44;
        v22 = v15;
        v44 = v15 - v19 % v15;
        while ( 1 )
        {
          v19 = v22;
          v15 = v44;
          v22 -= v44;
          if ( v44 < v22 )
            break;
LABEL_39:
          if ( v22 == 1 )
          {
            v79 = p_dest->m128i_i8[v19 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v19 - 1);
            p_dest->m128i_i8[0] = v79;
            goto LABEL_44;
          }
          v45 = &p_dest->m128i_i8[v19];
          v46 = (__m128i *)((char *)p_dest + v19 - v22);
          p_dest = v46;
          if ( v15 > 0 )
          {
            p_dest = (__m128i *)((char *)v46 - v15);
            do
            {
              v46 = (__m128i *)((char *)v46 - 1);
              --v45;
              v47 = v46->m128i_i8[0];
              v46->m128i_i8[0] = *v45;
              *v45 = v47;
            }
            while ( v46 != p_dest );
          }
          v44 = v19 % v22;
          if ( !(v19 % v22) )
            goto LABEL_44;
        }
      }
      v76 = v19 - 1;
      v77 = p_dest->m128i_i8[0];
      v78 = v76;
      if ( v76 )
        memmove(p_dest, &p_dest->m128i_i8[1], v76);
      p_dest->m128i_i8[v78] = v77;
    }
  }
LABEL_44:
  sub_9B6F20((unsigned __int64 *)&v92, &dest);
  v48 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v94.m128i_i64[0]))
       ^ si128.m128i_i64[0]
       ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v94.m128i_i64[0])) >> 47));
  v49 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v16 + v13) >> 47) ^ (v16 + v13))
      + v92.m128i_i64[0]
      - 0x622015F714C7D297LL * (v48 ^ (v48 >> 47));
  v50 = 0x9DDFEA08EB382D69LL
      * (v49
       ^ (v93.m128i_i64[0]
        - 0x4B6D499041670D8DLL * (v92.m128i_i64[1] ^ ((unsigned __int64)v92.m128i_i64[1] >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v94.m128i_i64[1] ^ v93.m128i_i64[1]))
           ^ v94.m128i_i64[1]
           ^ ((0x9DDFEA08EB382D69LL * (v94.m128i_i64[1] ^ v93.m128i_i64[1])) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v94.m128i_i64[1] ^ v93.m128i_i64[1]))
            ^ v94.m128i_i64[1]
            ^ ((0x9DDFEA08EB382D69LL * (v94.m128i_i64[1] ^ v93.m128i_i64[1])) >> 47))) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) >> 47));
}
