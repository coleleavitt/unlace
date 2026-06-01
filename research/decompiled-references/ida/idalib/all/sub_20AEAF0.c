unsigned __int64 __fastcall sub_20AEAF0(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  unsigned __int8 v4; // r15
  __int8 v5; // r15
  __m128i *v6; // rax
  __int16 v7; // dx
  __int64 v8; // r13
  _QWORD *v9; // r10
  __m128i *v11; // rax
  __int64 v12; // r8
  __m128i *v13; // rax
  char v14; // r8
  _BYTE *v15; // rax
  __m128i *v16; // rax
  __int64 v17; // r12
  __m128i *v18; // r14
  signed __int64 v19; // rsi
  __int64 v20; // r13
  char *v21; // r15
  __m128i *p_dest; // rbp
  __int64 v23; // rax
  __int64 v24; // r8
  __m128i *v25; // rdi
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __m128i *v29; // rcx
  __int8 *v30; // rdi
  __int8 v31; // r9
  __int8 v32; // r9
  __int8 v33; // r9
  __int8 v34; // r9
  __int8 v35; // r9
  __int8 v36; // r9
  __int8 v37; // r9
  __int8 v38; // r9
  __int8 v39; // r9
  __int8 v40; // r9
  __int8 v41; // r9
  __int8 v42; // r9
  __int8 v43; // r9
  __int8 v44; // r9
  __int8 v45; // dl
  __int8 *v46; // rcx
  __m128i *v47; // rdx
  __int8 v48; // si
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  __m128i v51; // xmm7
  __m128i v52; // xmm3
  __m128i v53; // xmm4
  __m128i v54; // xmm5
  __int8 v55; // r8
  __int8 v56; // dl
  const __m128i *v57; // rax
  const __m128i *v58; // rdx
  __m128i si128; // xmm0
  __m128i v60; // xmm2
  __int8 *v61; // rax
  __int8 *v62; // rdx
  __int8 v63; // cl
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
  char v75; // cl
  char v76; // cl
  char v77; // cl
  __int8 v78; // r14
  size_t v79; // rax
  __int8 v80; // r15
  size_t v81; // r14
  __m128i *v82; // rdx
  __m128i *v83; // rax
  __int8 v84; // si
  __int8 v85; // cl
  __int64 v86; // [rsp+0h] [rbp-138h]
  char *v87; // [rsp+8h] [rbp-130h]
  __m128i v88; // [rsp+10h] [rbp-128h] BYREF
  __m128i v89; // [rsp+20h] [rbp-118h] BYREF
  __m128i v90; // [rsp+30h] [rbp-108h] BYREF
  __int64 v91; // [rsp+40h] [rbp-F8h]
  __int8 v92; // [rsp+57h] [rbp-E1h] BYREF
  __int64 v93; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v94; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+70h] [rbp-C8h] BYREF
  __int64 src; // [rsp+78h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+80h] [rbp-B8h] BYREF
  _OWORD v99[3]; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v100; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v101; // [rsp+D0h] [rbp-68h]
  __m128i v102; // [rsp+E0h] [rbp-58h]
  __int64 v103; // [rsp+F0h] [rbp-48h]
  __int64 v104; // [rsp+F8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v3 = *(_DWORD *)(a1 + 24);
  if ( v2 )
    return sub_20AE310(v3, (__int16 *)(a1 + 28), (__int64 *)a1, (__int64 *)(a1 + 8), (char *)(a1 + 30));
  v86 = *(_QWORD *)(a1 + 16) & 0x1FFFFFFFFFFFFFFFLL;
  v4 = *(_BYTE *)(a1 + 23);
  dest = 0;
  memset(v99, 0, sizeof(v99));
  v5 = v4 >> 5;
  v100 = 0u;
  v101 = 0u;
  v102 = 0u;
  v103 = 0;
  v104 = 0xFF51AFD7ED558CCDLL;
  v93 = 0;
  v6 = sub_A0C4A0(&dest, &v93, &dest, (unsigned __int64)&v100, v3);
  v7 = *(_WORD *)(a1 + 28);
  v8 = v93;
  v9 = (__int64 *)((char *)v6->m128i_i64 + 2);
  LOWORD(src) = v7;
  if ( &v6->m128i_i16[1] <= (__int16 *)&v100 )
  {
    v6->m128i_i16[0] = v7;
  }
  else
  {
    v87 = (char *)((char *)&v100 - (char *)v6);
    memcpy(v6, &src, (char *)&v100 - (char *)v6);
    if ( v8 )
    {
      v8 += 64;
      sub_9B6F20((unsigned __int64 *)&v100, &dest);
    }
    else
    {
      v8 = 64;
      sub_A09B80((unsigned __int64 *)&v88, &dest, v104);
      v53 = _mm_loadu_si128(&v89);
      v54 = _mm_loadu_si128(&v90);
      v100 = _mm_loadu_si128(&v88);
      v101 = v53;
      v102 = v54;
      v103 = v91;
    }
    memcpy(&dest, (char *)&src + (_QWORD)v87, 2LL - (_QWORD)v87);
    v9 = (__int64 *)((char *)dest.m128i_i64 + 2LL - (_QWORD)v87);
  }
  v94 = v8;
  v11 = sub_206E9E0(&dest, &v94, v9, (unsigned __int64)&v100, *(_QWORD *)a1);
  v12 = *(_QWORD *)(a1 + 8);
  v95 = v94;
  v13 = sub_206E9E0(&dest, &v95, v11, (unsigned __int64)&v100, v12);
  v14 = *(_BYTE *)(a1 + 30);
  v96 = v95;
  v15 = sub_207A9D0(&dest, &v96, v13, (unsigned __int64)&v100, v14);
  src = v96;
  v16 = sub_A232E0(&dest, &src, v15, (unsigned __int64)&v100, v86);
  v17 = src;
  v92 = v5;
  v18 = (__m128i *)&v16->m128i_i8[1];
  if ( &v16->m128i_i8[1] > (__int8 *)&v100 )
  {
    v21 = (char *)((char *)&v100 - (char *)v16);
    memcpy(v16, &v92, (char *)&v100 - (char *)v16);
    if ( v17 )
    {
      v17 += 64;
      sub_9B6F20((unsigned __int64 *)&v100, &dest);
    }
    else
    {
      v17 = 64;
      sub_A09B80((unsigned __int64 *)&v88, &dest, v104);
      v51 = _mm_loadu_si128(&v89);
      v52 = _mm_loadu_si128(&v90);
      v100 = _mm_loadu_si128(&v88);
      v101 = v51;
      v102 = v52;
      v103 = v91;
    }
    v18 = (__m128i *)((char *)&dest + 1LL - (_QWORD)v21);
    memcpy(&dest, &v92 + (_QWORD)v21, 1LL - (_QWORD)v21);
    v19 = 1LL - (_QWORD)v21;
    v20 = 1LL - (_QWORD)v21;
    if ( !v17 )
      return sub_2012F20(&dest, v19, v104);
  }
  else
  {
    v16->m128i_i8[0] = v5;
    v19 = (char *)v18 - (char *)&dest;
    v20 = (char *)v18 - (char *)&dest;
    if ( !v17 )
      return sub_2012F20(&dest, v19, v104);
  }
  if ( v18 != &dest && v18 != &v100 )
  {
    p_dest = &dest;
    v23 = 64;
    if ( v19 == (char *)&v100 - (char *)v18 )
    {
      v57 = v18;
      if ( (v18 >= (__m128i *)v99 || &dest >= &v18[1])
        && (unsigned __int64)v18->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
      {
        v58 = &dest;
        do
        {
          si128 = _mm_load_si128(v58);
          v60 = _mm_loadu_si128(v57++);
          ++v58;
          v58[-1] = v60;
          v57[-1] = si128;
        }
        while ( v57 != (const __m128i *)&v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL] );
        v61 = &dest.m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        v62 = &v18->m128i_i8[v19 & 0xFFFFFFFFFFFFFFF0LL];
        if ( v19 != (v19 & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v63 = *v61;
          *v61 = *v62;
          *v62 = v63;
          if ( v18 != (__m128i *)(v61 + 1) )
          {
            v64 = v61[1];
            v61[1] = v62[1];
            v62[1] = v64;
            if ( v18 != (__m128i *)(v61 + 2) )
            {
              v65 = v61[2];
              v61[2] = v62[2];
              v62[2] = v65;
              if ( v18 != (__m128i *)(v61 + 3) )
              {
                v66 = v61[3];
                v61[3] = v62[3];
                v62[3] = v66;
                if ( v18 != (__m128i *)(v61 + 4) )
                {
                  v67 = v61[4];
                  v61[4] = v62[4];
                  v62[4] = v67;
                  if ( v18 != (__m128i *)(v61 + 5) )
                  {
                    v68 = v61[5];
                    v61[5] = v62[5];
                    v62[5] = v68;
                    if ( v18 != (__m128i *)(v61 + 6) )
                    {
                      v69 = v61[6];
                      v61[6] = v62[6];
                      v62[6] = v69;
                      if ( v18 != (__m128i *)(v61 + 7) )
                      {
                        v70 = v61[7];
                        v61[7] = v62[7];
                        v62[7] = v70;
                        if ( v18 != (__m128i *)(v61 + 8) )
                        {
                          v71 = v61[8];
                          v61[8] = v62[8];
                          v62[8] = v71;
                          if ( v18 != (__m128i *)(v61 + 9) )
                          {
                            v72 = v61[9];
                            v61[9] = v62[9];
                            v62[9] = v72;
                            if ( v18 != (__m128i *)(v61 + 10) )
                            {
                              v73 = v61[10];
                              v61[10] = v62[10];
                              v62[10] = v73;
                              if ( v18 != (__m128i *)(v61 + 11) )
                              {
                                v74 = v61[11];
                                v61[11] = v62[11];
                                v62[11] = v74;
                                if ( v18 != (__m128i *)(v61 + 12) )
                                {
                                  v75 = v61[12];
                                  v61[12] = v62[12];
                                  v62[12] = v75;
                                  if ( v18 != (__m128i *)(v61 + 13) )
                                  {
                                    v76 = v61[13];
                                    v61[13] = v62[13];
                                    v62[13] = v76;
                                    if ( v18 != (__m128i *)(v61 + 14) )
                                    {
                                      v77 = v61[14];
                                      v61[14] = v62[14];
                                      v62[14] = v77;
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
        v82 = v18;
        v83 = &dest;
        do
        {
          v84 = v82->m128i_i8[0];
          v85 = v83->m128i_i8[0];
          v83 = (__m128i *)((char *)v83 + 1);
          v82 = (__m128i *)((char *)v82 + 1);
          v83[-1].m128i_i8[15] = v84;
          v82[-1].m128i_i8[15] = v85;
        }
        while ( v18 != v83 );
      }
    }
    else
    {
      v24 = 64 - v19;
      if ( v19 >= 64 - v19 )
        goto LABEL_45;
      while ( v19 != 1 )
      {
        v25 = (__m128i *)((char *)p_dest + v19);
        if ( v24 > 0 )
        {
          if ( (v25 >= &p_dest[1] || v19 + 16 <= 0) && (unsigned __int64)(v24 - 1) > 0xE )
          {
            v26 = 0;
            do
            {
              v27 = _mm_loadu_si128(&p_dest[v26 / 0x10]);
              p_dest[v26 / 0x10] = _mm_loadu_si128(&v25[v26 / 0x10]);
              v25[v26 / 0x10] = v27;
              v26 += 16LL;
            }
            while ( v26 != (v24 & 0xFFFFFFFFFFFFFFF0LL) );
            v28 = v24 & 0x7FFFFFFFFFFFFFF0LL;
            v29 = (__m128i *)((char *)p_dest + (v24 & 0xFFFFFFFFFFFFFFF0LL));
            v30 = &v25->m128i_i8[v24 & 0xFFFFFFFFFFFFFFF0LL];
            if ( v24 != (v24 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              v31 = v29->m128i_i8[0];
              v29->m128i_i8[0] = *v30;
              *v30 = v31;
              if ( v24 > v28 + 1 )
              {
                v32 = v29->m128i_i8[1];
                v29->m128i_i8[1] = v30[1];
                v30[1] = v32;
                if ( v24 > v28 + 2 )
                {
                  v33 = v29->m128i_i8[2];
                  v29->m128i_i8[2] = v30[2];
                  v30[2] = v33;
                  if ( v24 > v28 + 3 )
                  {
                    v34 = v29->m128i_i8[3];
                    v29->m128i_i8[3] = v30[3];
                    v30[3] = v34;
                    if ( v24 > v28 + 4 )
                    {
                      v35 = v29->m128i_i8[4];
                      v29->m128i_i8[4] = v30[4];
                      v30[4] = v35;
                      if ( v24 > v28 + 5 )
                      {
                        v36 = v29->m128i_i8[5];
                        v29->m128i_i8[5] = v30[5];
                        v30[5] = v36;
                        if ( v24 > v28 + 6 )
                        {
                          v37 = v29->m128i_i8[6];
                          v29->m128i_i8[6] = v30[6];
                          v30[6] = v37;
                          if ( v24 > v28 + 7 )
                          {
                            v38 = v29->m128i_i8[7];
                            v29->m128i_i8[7] = v30[7];
                            v30[7] = v38;
                            if ( v24 > v28 + 8 )
                            {
                              v39 = v29->m128i_i8[8];
                              v29->m128i_i8[8] = v30[8];
                              v30[8] = v39;
                              if ( v24 > v28 + 9 )
                              {
                                v40 = v29->m128i_i8[9];
                                v29->m128i_i8[9] = v30[9];
                                v30[9] = v40;
                                if ( v24 > v28 + 10 )
                                {
                                  v41 = v29->m128i_i8[10];
                                  v29->m128i_i8[10] = v30[10];
                                  v30[10] = v41;
                                  if ( v24 > v28 + 11 )
                                  {
                                    v42 = v29->m128i_i8[11];
                                    v29->m128i_i8[11] = v30[11];
                                    v30[11] = v42;
                                    if ( v24 > v28 + 12 )
                                    {
                                      v43 = v29->m128i_i8[12];
                                      v29->m128i_i8[12] = v30[12];
                                      v30[12] = v43;
                                      if ( v24 > v28 + 13 )
                                      {
                                        v44 = v29->m128i_i8[13];
                                        v29->m128i_i8[13] = v30[13];
                                        v30[13] = v44;
                                        if ( v24 > v28 + 14 )
                                        {
                                          v45 = v29->m128i_i8[14];
                                          v29->m128i_i8[14] = v30[14];
                                          v30[14] = v45;
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
              v29 = (__m128i *)((char *)p_dest + v24);
            }
          }
          else
          {
            v29 = (__m128i *)((char *)p_dest + v24);
            do
            {
              v55 = v25->m128i_i8[0];
              v56 = p_dest->m128i_i8[0];
              p_dest = (__m128i *)((char *)p_dest + 1);
              v25 = (__m128i *)((char *)v25 + 1);
              p_dest[-1].m128i_i8[15] = v55;
              v25[-1].m128i_i8[15] = v56;
            }
            while ( p_dest != v29 );
          }
          p_dest = v29;
        }
        if ( !(v23 % v19) )
          goto LABEL_50;
        v24 = v19;
        v19 -= v23 % v19;
        while ( 1 )
        {
          v23 = v24;
          v24 -= v19;
          if ( v19 < v24 )
            break;
LABEL_45:
          if ( v24 == 1 )
          {
            v78 = p_dest->m128i_i8[v23 - 1];
            memmove(&p_dest->m128i_i8[1], p_dest, v23 - 1);
            p_dest->m128i_i8[0] = v78;
            goto LABEL_50;
          }
          v46 = &p_dest->m128i_i8[v23];
          v47 = (__m128i *)((char *)p_dest + v23 - v24);
          p_dest = v47;
          if ( v19 > 0 )
          {
            p_dest = (__m128i *)((char *)v47 - v19);
            do
            {
              v47 = (__m128i *)((char *)v47 - 1);
              --v46;
              v48 = v47->m128i_i8[0];
              v47->m128i_i8[0] = *v46;
              *v46 = v48;
            }
            while ( v47 != p_dest );
          }
          v19 = v23 % v24;
          if ( !(v23 % v24) )
            goto LABEL_50;
        }
      }
      v79 = v23 - 1;
      v80 = p_dest->m128i_i8[0];
      v81 = v79;
      if ( v79 )
        memmove(p_dest, &p_dest->m128i_i8[1], v79);
      p_dest->m128i_i8[v81] = v80;
    }
  }
LABEL_50:
  sub_9B6F20((unsigned __int64 *)&v100, &dest);
  v49 = 0xB492B66FBE98F273LL * (((unsigned __int64)(v20 + v17) >> 47) ^ (v20 + v17))
      + 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v103 ^ v102.m128i_i64[0]))
          ^ v103
          ^ ((0x9DDFEA08EB382D69LL * (v103 ^ v102.m128i_i64[0])) >> 47))) >> 47)
       ^ (0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v103 ^ v102.m128i_i64[0]))
         ^ v103
         ^ ((0x9DDFEA08EB382D69LL * (v103 ^ v102.m128i_i64[0])) >> 47))))
      + v100.m128i_i64[0];
  v50 = 0x9DDFEA08EB382D69LL
      * (v49
       ^ (v101.m128i_i64[0]
        - 0x4B6D499041670D8DLL * (v100.m128i_i64[1] ^ ((unsigned __int64)v100.m128i_i64[1] >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v102.m128i_i64[1] ^ v101.m128i_i64[1]))
           ^ v102.m128i_i64[1]
           ^ ((0x9DDFEA08EB382D69LL * (v102.m128i_i64[1] ^ v101.m128i_i64[1])) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v102.m128i_i64[1] ^ v101.m128i_i64[1]))
            ^ v102.m128i_i64[1]
            ^ ((0x9DDFEA08EB382D69LL * (v102.m128i_i64[1] ^ v101.m128i_i64[1])) >> 47))) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v50 ^ v49 ^ (v50 >> 47))) >> 47));
}
