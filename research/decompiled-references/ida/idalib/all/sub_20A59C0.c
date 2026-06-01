unsigned __int64 __fastcall sub_20A59C0(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r8
  _BYTE *v4; // rax
  unsigned __int8 v5; // dl
  _BYTE *v6; // rax
  __m128i *v7; // rax
  __int64 v8; // r8
  __m128i *v9; // rax
  __int64 v10; // r12
  __m128i *v11; // rdx
  signed __int64 v12; // rsi
  signed __int64 v13; // r13
  char *v15; // r14
  __m128i *p_src; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __m128i *v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int8 *v23; // r10
  __int8 *v24; // rcx
  __int8 v25; // r8
  __int8 v26; // r8
  __int8 v27; // r8
  __int8 v28; // r8
  __int8 v29; // r8
  __int8 v30; // r8
  __int8 v31; // r8
  __int8 v32; // r8
  __int8 v33; // r8
  __int8 v34; // r8
  __int8 v35; // r8
  __int8 v36; // r8
  __int8 v37; // r8
  __int8 v38; // r8
  __int8 v39; // dl
  __m128i *v40; // rdi
  __int64 v41; // rdx
  __int8 *v42; // rcx
  signed __int64 v43; // rsi
  __m128i *v44; // rdx
  __int8 *v45; // r10
  __int8 v46; // r8
  const __m128i *v47; // rax
  const __m128i *v48; // rcx
  __m128i v49; // xmm0
  __m128i v50; // xmm2
  __int8 *v51; // rax
  __int8 *v52; // rcx
  __int8 v53; // si
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
  char v65; // si
  char v66; // si
  char v67; // dl
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int8 v70; // r8
  __int8 v71; // dl
  __int8 v72; // r14
  size_t v73; // rax
  __int8 v74; // r15
  size_t v75; // r14
  __m128i *v76; // rcx
  __m128i *v77; // rax
  __int8 v78; // di
  __int8 v79; // si
  __int64 v80; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+8h] [rbp-C0h] BYREF
  __m128i src; // [rsp+10h] [rbp-B8h] BYREF
  _OWORD v83[3]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v84; // [rsp+50h] [rbp-78h] BYREF
  __int128 v85; // [rsp+60h] [rbp-68h]
  __int128 v86; // [rsp+70h] [rbp-58h]
  __m128i si128; // [rsp+80h] [rbp-48h]

  v2 = *(_DWORD *)a1;
  if ( v2 != 13 )
    return sub_20A5250(
             v2,
             (__int64 *)(a1 + 8),
             (__int64 *)(a1 + 16),
             (int *)(a1 + 24),
             (__int64 *)(a1 + 32),
             (__int64 *)(a1 + 40),
             (int *)(a1 + 84));
  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return sub_20A5250(
             v2,
             (__int64 *)(a1 + 8),
             (__int64 *)(a1 + 16),
             (int *)(a1 + 24),
             (__int64 *)(a1 + 32),
             (__int64 *)(a1 + 40),
             (int *)(a1 + 84));
  v4 = *(_BYTE **)(a1 + 32);
  if ( !v4 || *v4 != 14 )
    return sub_20A5250(
             v2,
             (__int64 *)(a1 + 8),
             (__int64 *)(a1 + 16),
             (int *)(a1 + 24),
             (__int64 *)(a1 + 32),
             (__int64 *)(a1 + 40),
             (int *)(a1 + 84));
  v5 = *(v4 - 16);
  v6 = (v5 & 2) != 0 ? *((_BYTE **)v4 - 4) : &v4[-8 * ((v5 >> 2) & 0xF) - 16];
  if ( !*((_QWORD *)v6 + 9) )
    return sub_20A5250(
             v2,
             (__int64 *)(a1 + 8),
             (__int64 *)(a1 + 16),
             (int *)(a1 + 24),
             (__int64 *)(a1 + 32),
             (__int64 *)(a1 + 40),
             (int *)(a1 + 84));
  v80 = 0;
  src = 0;
  memset(v83, 0, sizeof(v83));
  v84 = 0;
  v85 = 0;
  v86 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v7 = sub_20728A0(&src, &v80, &src, (unsigned __int64)&v84, v3);
  v8 = *(_QWORD *)(a1 + 32);
  v81 = v80;
  v9 = sub_206E9E0(&src, &v81, v7, (unsigned __int64)&v84, v8);
  v10 = v81;
  v11 = v9;
  v12 = (char *)v9 - (char *)&src;
  v13 = (char *)v9 - (char *)&src;
  if ( !v81 )
    return sub_2012F20(&src, v12, si128.m128i_i64[1]);
  if ( v9 != (__m128i *)&v84 && v9 != &src )
  {
    v15 = (char *)((char *)&v84 - (char *)v9);
    p_src = &src;
    v17 = 64;
    if ( v15 == (char *)v12 )
    {
      v47 = v11;
      if ( (v11 >= (__m128i *)v83 || &src >= &v11[1])
        && (unsigned __int64)v11->m128i_u64 + ~(unsigned __int64)&src > 0xE )
      {
        v48 = &src;
        do
        {
          v49 = _mm_load_si128(v48);
          v50 = _mm_loadu_si128(v47++);
          ++v48;
          v48[-1] = v50;
          v47[-1] = v49;
        }
        while ( v47 != (const __m128i *)&v11->m128i_i8[v12 & 0xFFFFFFFFFFFFFFF0LL] );
        v51 = &src.m128i_i8[v12 & 0xFFFFFFFFFFFFFFF0LL];
        v52 = &v11->m128i_i8[v12 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != v12 )
        {
          v53 = *v51;
          *v51 = *v52;
          *v52 = v53;
          if ( v11 != (__m128i *)(v51 + 1) )
          {
            v54 = v51[1];
            v51[1] = v52[1];
            v52[1] = v54;
            if ( v11 != (__m128i *)(v51 + 2) )
            {
              v55 = v51[2];
              v51[2] = v52[2];
              v52[2] = v55;
              if ( v11 != (__m128i *)(v51 + 3) )
              {
                v56 = v51[3];
                v51[3] = v52[3];
                v52[3] = v56;
                if ( v11 != (__m128i *)(v51 + 4) )
                {
                  v57 = v51[4];
                  v51[4] = v52[4];
                  v52[4] = v57;
                  if ( v11 != (__m128i *)(v51 + 5) )
                  {
                    v58 = v51[5];
                    v51[5] = v52[5];
                    v52[5] = v58;
                    if ( v11 != (__m128i *)(v51 + 6) )
                    {
                      v59 = v51[6];
                      v51[6] = v52[6];
                      v52[6] = v59;
                      if ( v11 != (__m128i *)(v51 + 7) )
                      {
                        v60 = v51[7];
                        v51[7] = v52[7];
                        v52[7] = v60;
                        if ( v11 != (__m128i *)(v51 + 8) )
                        {
                          v61 = v51[8];
                          v51[8] = v52[8];
                          v52[8] = v61;
                          if ( v11 != (__m128i *)(v51 + 9) )
                          {
                            v62 = v51[9];
                            v51[9] = v52[9];
                            v52[9] = v62;
                            if ( v11 != (__m128i *)(v51 + 10) )
                            {
                              v63 = v51[10];
                              v51[10] = v52[10];
                              v52[10] = v63;
                              if ( v11 != (__m128i *)(v51 + 11) )
                              {
                                v64 = v51[11];
                                v51[11] = v52[11];
                                v52[11] = v64;
                                if ( v11 != (__m128i *)(v51 + 12) )
                                {
                                  v65 = v51[12];
                                  v51[12] = v52[12];
                                  v52[12] = v65;
                                  if ( v11 != (__m128i *)(v51 + 13) )
                                  {
                                    v66 = v51[13];
                                    v51[13] = v52[13];
                                    v52[13] = v66;
                                    if ( v11 != (__m128i *)(v51 + 14) )
                                    {
                                      v67 = v51[14];
                                      v51[14] = v52[14];
                                      v52[14] = v67;
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
        v76 = v11;
        v77 = &src;
        do
        {
          v78 = v76->m128i_i8[0];
          v79 = v77->m128i_i8[0];
          v77 = (__m128i *)((char *)v77 + 1);
          v76 = (__m128i *)((char *)v76 + 1);
          v77[-1].m128i_i8[15] = v78;
          v76[-1].m128i_i8[15] = v79;
        }
        while ( v11 != v77 );
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = v17 - v12;
        if ( v12 < v17 - v12 )
          break;
LABEL_42:
        if ( v18 == 1 )
        {
          v72 = p_src->m128i_i8[v17 - 1];
          memmove(&p_src->m128i_i8[1], p_src, v17 - 1);
          p_src->m128i_i8[0] = v72;
          goto LABEL_69;
        }
        v42 = &p_src->m128i_i8[v17];
        p_src = (__m128i *)((char *)p_src + v17 - v18);
        if ( v12 > 0 )
        {
          v43 = -v12;
          v44 = p_src;
          v45 = &v42[v43];
          do
          {
            v44 = (__m128i *)((char *)v44 - 1);
            --v42;
            v46 = v44->m128i_i8[0];
            v44->m128i_i8[0] = *v42;
            *v42 = v46;
          }
          while ( v42 != v45 );
          p_src = (__m128i *)((char *)p_src + v43);
        }
        v12 = v17 % v18;
        if ( !(v17 % v18) )
          goto LABEL_69;
        v17 = v18;
      }
      while ( v12 != 1 )
      {
        v19 = (__m128i *)((char *)p_src + v12);
        if ( v18 > 0 )
        {
          if ( (v19 >= &p_src[1] || v12 + 16 <= 0) && (unsigned __int64)(v18 - 1) > 0xE )
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
            v23 = &p_src->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
            v24 = &v19->m128i_i8[v18 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v18 == (v18 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v40 = (__m128i *)((char *)p_src + (v18 & 0xFFFFFFFFFFFFFFF0LL));
            }
            else
            {
              v25 = *v23;
              *v23 = *v24;
              *v24 = v25;
              if ( v18 > v22 + 1 )
              {
                v26 = v23[1];
                v23[1] = v24[1];
                v24[1] = v26;
                if ( v18 > v22 + 2 )
                {
                  v27 = v23[2];
                  v23[2] = v24[2];
                  v24[2] = v27;
                  if ( v18 > v22 + 3 )
                  {
                    v28 = v23[3];
                    v23[3] = v24[3];
                    v24[3] = v28;
                    if ( v18 > v22 + 4 )
                    {
                      v29 = v23[4];
                      v23[4] = v24[4];
                      v24[4] = v29;
                      if ( v18 > v22 + 5 )
                      {
                        v30 = v23[5];
                        v23[5] = v24[5];
                        v24[5] = v30;
                        if ( v18 > v22 + 6 )
                        {
                          v31 = v23[6];
                          v23[6] = v24[6];
                          v24[6] = v31;
                          if ( v18 > v22 + 7 )
                          {
                            v32 = v23[7];
                            v23[7] = v24[7];
                            v24[7] = v32;
                            if ( v18 > v22 + 8 )
                            {
                              v33 = v23[8];
                              v23[8] = v24[8];
                              v24[8] = v33;
                              if ( v18 > v22 + 9 )
                              {
                                v34 = v23[9];
                                v23[9] = v24[9];
                                v24[9] = v34;
                                if ( v18 > v22 + 10 )
                                {
                                  v35 = v23[10];
                                  v23[10] = v24[10];
                                  v24[10] = v35;
                                  if ( v18 > v22 + 11 )
                                  {
                                    v36 = v23[11];
                                    v23[11] = v24[11];
                                    v24[11] = v36;
                                    if ( v18 > v22 + 12 )
                                    {
                                      v37 = v23[12];
                                      v23[12] = v24[12];
                                      v24[12] = v37;
                                      if ( v18 > v22 + 13 )
                                      {
                                        v38 = v23[13];
                                        v23[13] = v24[13];
                                        v24[13] = v38;
                                        if ( v18 > v22 + 14 )
                                        {
                                          v39 = v23[14];
                                          v23[14] = v24[14];
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
              v40 = (__m128i *)((char *)p_src + v18);
            }
          }
          else
          {
            v40 = (__m128i *)((char *)p_src + v18);
            do
            {
              v70 = v19->m128i_i8[0];
              v71 = p_src->m128i_i8[0];
              p_src = (__m128i *)((char *)p_src + 1);
              v19 = (__m128i *)((char *)v19 + 1);
              p_src[-1].m128i_i8[15] = v70;
              v19[-1].m128i_i8[15] = v71;
            }
            while ( p_src != v40 );
          }
          p_src = v40;
        }
        v41 = v17 % v12;
        if ( !(v17 % v12) )
          goto LABEL_69;
        v17 = v12;
        v12 -= v41;
        v18 = v17 - v12;
        if ( v12 >= v17 - v12 )
          goto LABEL_42;
      }
      v73 = v17 - 1;
      v74 = p_src->m128i_i8[0];
      v75 = v73;
      if ( v73 )
        memmove(p_src, &p_src->m128i_i8[1], v73);
      p_src->m128i_i8[v75] = v74;
    }
  }
LABEL_69:
  sub_9B6F20((unsigned __int64 *)&v84, &src);
  v68 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v13 + v10) >> 47) ^ (v13 + v10))
      + 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v86))
          ^ si128.m128i_i64[0]
          ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v86)) >> 47))) >> 47)
       ^ (0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v86))
         ^ si128.m128i_i64[0]
         ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ (unsigned __int64)v86)) >> 47))))
      + v84;
  v69 = 0x9DDFEA08EB382D69LL
      * (v68
       ^ (v85
        - 0x4B6D499041670D8DLL * (*((_QWORD *)&v84 + 1) ^ (*((_QWORD *)&v84 + 1) >> 47))
        - 0x622015F714C7D297LL
        * (((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v86 + 1) ^ *((_QWORD *)&v85 + 1)))
            ^ *((_QWORD *)&v86 + 1)
            ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v86 + 1) ^ *((_QWORD *)&v85 + 1))) >> 47))) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v86 + 1) ^ *((_QWORD *)&v85 + 1)))
           ^ *((_QWORD *)&v86 + 1)
           ^ ((0x9DDFEA08EB382D69LL * (*((_QWORD *)&v86 + 1) ^ *((_QWORD *)&v85 + 1))) >> 47))))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * ((v69 >> 47) ^ v69 ^ v68)) ^ ((0x9DDFEA08EB382D69LL * ((v69 >> 47) ^ v69 ^ v68)) >> 47));
}
