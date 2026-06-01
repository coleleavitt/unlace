unsigned __int64 __fastcall sub_9E96C0(int a1, int *a2, __int8 *a3)
{
  __m128i *v4; // rax
  int v5; // r8d
  __m128i *v6; // rax
  __int8 v7; // dl
  __int64 v8; // r12
  __m128i *v9; // r14
  char *v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r13
  __m128i *p_dest; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __m128i *v16; // rsi
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // r9
  __int8 *v20; // r8
  __int8 *v21; // rsi
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
  __int8 v36; // dl
  __int64 v37; // rdx
  __int8 *v38; // rsi
  __m128i *v39; // rdx
  __int8 v40; // cl
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  __m128i *v49; // r10
  __m128i *v50; // rdx
  __int8 v51; // r8
  __int8 v52; // r9
  __m128i v53; // xmm4
  __m128i v54; // xmm5
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rsi
  const __m128i *v59; // rax
  const __m128i *v60; // rdx
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __int8 *v63; // rax
  __int8 *v64; // rdx
  __int8 v65; // cl
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
  char v79; // cl
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rbp
  __int64 v83; // r9
  __int64 v84; // r8
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rsi
  size_t v87; // rax
  __int8 v88; // r15
  size_t v89; // r14
  __int8 v90; // r14
  __m128i *v91; // rdx
  __m128i *v92; // rax
  __int8 v93; // si
  __int8 v94; // cl
  __m128i v95; // [rsp+0h] [rbp-118h] BYREF
  __m128i v96; // [rsp+10h] [rbp-108h] BYREF
  __m128i v97; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v98; // [rsp+30h] [rbp-E8h]
  _BYTE v99[15]; // [rsp+40h] [rbp-D8h]
  __int8 src; // [rsp+4Fh] [rbp-C9h] BYREF
  __int64 v101; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v102; // [rsp+58h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v104; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v105; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v106; // [rsp+B0h] [rbp-68h]
  __m128i v107; // [rsp+C0h] [rbp-58h]
  __m128i si128; // [rsp+D0h] [rbp-48h]

  dest = 0;
  memset(&v104, 0, 48);
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v101 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D10);
  v4 = sub_9E8760(&dest, &v101, &dest, (unsigned __int64)&v105, a1);
  v5 = *a2;
  v102 = v101;
  v6 = sub_9E8760(&dest, &v102, v4, (unsigned __int64)&v105, v5);
  v7 = *a3;
  v8 = v102;
  v9 = (__m128i *)&v6->m128i_i8[1];
  src = *a3;
  if ( &v6->m128i_i8[1] <= (__int8 *)&v105 )
  {
    v6->m128i_i8[0] = v7;
    v11 = (char *)v9 - (char *)&dest;
    v12 = (char *)v9 - (char *)&dest;
    if ( v8 )
    {
LABEL_5:
      if ( v9 != &dest && v9 != &v105 )
      {
        p_dest = &dest;
        v14 = 64;
        if ( (char *)&v105 - (char *)v9 == v11 )
        {
          v59 = v9;
          if ( (v9 >= &v104 || &dest >= &v9[1]) && (unsigned __int64)v9->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
          {
            v60 = &dest;
            do
            {
              v61 = _mm_load_si128(v60);
              v62 = _mm_loadu_si128(v59++);
              ++v60;
              v60[-1] = v62;
              v59[-1] = v61;
            }
            while ( v59 != (const __m128i *)&v9->m128i_i8[v11 & 0xFFFFFFFFFFFFFFF0LL] );
            v63 = &dest.m128i_i8[v11 & 0xFFFFFFFFFFFFFFF0LL];
            v64 = &v9->m128i_i8[v11 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != v11 )
            {
              v65 = *v63;
              *v63 = *v64;
              *v64 = v65;
              if ( v9 != (__m128i *)(v63 + 1) )
              {
                v66 = v63[1];
                v63[1] = v64[1];
                v64[1] = v66;
                if ( v9 != (__m128i *)(v63 + 2) )
                {
                  v67 = v63[2];
                  v63[2] = v64[2];
                  v64[2] = v67;
                  if ( v9 != (__m128i *)(v63 + 3) )
                  {
                    v68 = v63[3];
                    v63[3] = v64[3];
                    v64[3] = v68;
                    if ( v9 != (__m128i *)(v63 + 4) )
                    {
                      v69 = v63[4];
                      v63[4] = v64[4];
                      v64[4] = v69;
                      if ( v9 != (__m128i *)(v63 + 5) )
                      {
                        v70 = v63[5];
                        v63[5] = v64[5];
                        v64[5] = v70;
                        if ( v9 != (__m128i *)(v63 + 6) )
                        {
                          v71 = v63[6];
                          v63[6] = v64[6];
                          v64[6] = v71;
                          if ( v9 != (__m128i *)(v63 + 7) )
                          {
                            v72 = v63[7];
                            v63[7] = v64[7];
                            v64[7] = v72;
                            if ( v9 != (__m128i *)(v63 + 8) )
                            {
                              v73 = v63[8];
                              v63[8] = v64[8];
                              v64[8] = v73;
                              if ( v9 != (__m128i *)(v63 + 9) )
                              {
                                v74 = v63[9];
                                v63[9] = v64[9];
                                v64[9] = v74;
                                if ( v9 != (__m128i *)(v63 + 10) )
                                {
                                  v75 = v63[10];
                                  v63[10] = v64[10];
                                  v64[10] = v75;
                                  if ( v9 != (__m128i *)(v63 + 11) )
                                  {
                                    v76 = v63[11];
                                    v63[11] = v64[11];
                                    v64[11] = v76;
                                    if ( v9 != (__m128i *)(v63 + 12) )
                                    {
                                      v77 = v63[12];
                                      v63[12] = v64[12];
                                      v64[12] = v77;
                                      if ( v9 != (__m128i *)(v63 + 13) )
                                      {
                                        v78 = v63[13];
                                        v63[13] = v64[13];
                                        v64[13] = v78;
                                        if ( v9 != (__m128i *)(v63 + 14) )
                                        {
                                          v79 = v63[14];
                                          v63[14] = v64[14];
                                          v64[14] = v79;
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
            v91 = v9;
            v92 = &dest;
            do
            {
              v93 = v91->m128i_i8[0];
              v94 = v92->m128i_i8[0];
              v92 = (__m128i *)((char *)v92 + 1);
              v91 = (__m128i *)((char *)v91 + 1);
              v92[-1].m128i_i8[15] = v93;
              v91[-1].m128i_i8[15] = v94;
            }
            while ( v9 != v92 );
          }
        }
        else
        {
          v15 = 64 - v11;
          if ( v11 >= 64 - v11 )
            goto LABEL_35;
          while ( v11 != 1 )
          {
            v16 = (__m128i *)((char *)p_dest + v11);
            if ( v15 > 0 )
            {
              if ( (v11 + 16 <= 0 || v16 >= &p_dest[1]) && (unsigned __int64)(v15 - 1) > 0xE )
              {
                v17 = 0;
                do
                {
                  v18 = _mm_loadu_si128(&p_dest[v17 / 0x10]);
                  p_dest[v17 / 0x10] = _mm_loadu_si128(&v16[v17 / 0x10]);
                  v16[v17 / 0x10] = v18;
                  v17 += 16LL;
                }
                while ( v17 != (v15 & 0xFFFFFFFFFFFFFFF0LL) );
                v19 = v15 & 0x7FFFFFFFFFFFFFF0LL;
                v20 = &p_dest->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
                v21 = &v16->m128i_i8[v15 & 0xFFFFFFFFFFFFFFF0LL];
                if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != v15 )
                {
                  v22 = *v20;
                  *v20 = *v21;
                  *v21 = v22;
                  if ( v15 > v19 + 1 )
                  {
                    v23 = v20[1];
                    v20[1] = v21[1];
                    v21[1] = v23;
                    if ( v15 > v19 + 2 )
                    {
                      v24 = v20[2];
                      v20[2] = v21[2];
                      v21[2] = v24;
                      if ( v15 > v19 + 3 )
                      {
                        v25 = v20[3];
                        v20[3] = v21[3];
                        v21[3] = v25;
                        if ( v15 > v19 + 4 )
                        {
                          v26 = v20[4];
                          v20[4] = v21[4];
                          v21[4] = v26;
                          if ( v15 > v19 + 5 )
                          {
                            v27 = v20[5];
                            v20[5] = v21[5];
                            v21[5] = v27;
                            if ( v15 > v19 + 6 )
                            {
                              v28 = v20[6];
                              v20[6] = v21[6];
                              v21[6] = v28;
                              if ( v15 > v19 + 7 )
                              {
                                v29 = v20[7];
                                v20[7] = v21[7];
                                v21[7] = v29;
                                if ( v15 > v19 + 8 )
                                {
                                  v30 = v20[8];
                                  v20[8] = v21[8];
                                  v21[8] = v30;
                                  if ( v15 > v19 + 9 )
                                  {
                                    v31 = v20[9];
                                    v20[9] = v21[9];
                                    v21[9] = v31;
                                    if ( v15 > v19 + 10 )
                                    {
                                      v32 = v20[10];
                                      v20[10] = v21[10];
                                      v21[10] = v32;
                                      if ( v15 > v19 + 11 )
                                      {
                                        v33 = v20[11];
                                        v20[11] = v21[11];
                                        v21[11] = v33;
                                        if ( v15 > v19 + 12 )
                                        {
                                          v34 = v20[12];
                                          v20[12] = v21[12];
                                          v21[12] = v34;
                                          if ( v15 > v19 + 13 )
                                          {
                                            v35 = v20[13];
                                            v20[13] = v21[13];
                                            v21[13] = v35;
                                            if ( v15 > v19 + 14 )
                                            {
                                              v36 = v20[14];
                                              v20[14] = v21[14];
                                              v21[14] = v36;
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
                v49 = (__m128i *)((char *)v16 + v15);
                v50 = p_dest;
                do
                {
                  v51 = v50->m128i_i8[0];
                  v52 = v16->m128i_i8[0];
                  v16 = (__m128i *)((char *)v16 + 1);
                  v50 = (__m128i *)((char *)v50 + 1);
                  v50[-1].m128i_i8[15] = v52;
                  v16[-1].m128i_i8[15] = v51;
                }
                while ( v16 != v49 );
              }
              p_dest = (__m128i *)((char *)p_dest + v15);
            }
            if ( !(v14 % v11) )
              goto LABEL_40;
            v15 = v11;
            v37 = v11 - v14 % v11;
            while ( 1 )
            {
              v14 = v15;
              v11 = v37;
              v15 -= v37;
              if ( v37 < v15 )
                break;
LABEL_35:
              if ( v15 == 1 )
              {
                v90 = p_dest->m128i_i8[v14 - 1];
                memmove(&p_dest->m128i_i8[1], p_dest, v14 - 1);
                p_dest->m128i_i8[0] = v90;
                goto LABEL_40;
              }
              v38 = &p_dest->m128i_i8[v14];
              v39 = (__m128i *)((char *)p_dest + v14 - v15);
              p_dest = v39;
              if ( v11 > 0 )
              {
                p_dest = (__m128i *)((char *)v39 - v11);
                do
                {
                  v39 = (__m128i *)((char *)v39 - 1);
                  --v38;
                  v40 = v39->m128i_i8[0];
                  v39->m128i_i8[0] = *v38;
                  *v38 = v40;
                }
                while ( v39 != p_dest );
              }
              v37 = v14 % v15;
              if ( !(v14 % v15) )
                goto LABEL_40;
            }
          }
          v87 = v14 - 1;
          v88 = p_dest->m128i_i8[0];
          v89 = v87;
          if ( v87 )
            memmove(p_dest, &p_dest->m128i_i8[1], v87);
          p_dest->m128i_i8[v89] = v88;
        }
      }
LABEL_40:
      sub_9931E0((unsigned __int64 *)&v105, &dest);
      v41 = v105.m128i_i64[0]
          - 0x622015F714C7D297LL
          * (((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v107.m128i_i64[0]))
              ^ si128.m128i_i64[0]
              ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v107.m128i_i64[0])) >> 47))) >> 47)
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v107.m128i_i64[0]))
             ^ si128.m128i_i64[0]
             ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v107.m128i_i64[0])) >> 47))))
          - 0x4B6D499041670D8DLL * (((unsigned __int64)(v12 + v8) >> 47) ^ (v12 + v8));
      v42 = v41
          ^ (0x9DDFEA08EB382D69LL
           * (v41
            ^ (v106.m128i_i64[0]
             - 0x4B6D499041670D8DLL * (v105.m128i_i64[1] ^ ((unsigned __int64)v105.m128i_i64[1] >> 47))
             - 0x622015F714C7D297LL
             * ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1]))
                ^ v107.m128i_i64[1]
                ^ ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1])) >> 47)))
              ^ ((0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1]))
                 ^ v107.m128i_i64[1]
                 ^ ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1])) >> 47))) >> 47)))))
          ^ ((0x9DDFEA08EB382D69LL
            * (v41
             ^ (v106.m128i_i64[0]
              - 0x4B6D499041670D8DLL * (v105.m128i_i64[1] ^ ((unsigned __int64)v105.m128i_i64[1] >> 47))
              - 0x622015F714C7D297LL
              * ((0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1]))
                 ^ v107.m128i_i64[1]
                 ^ ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1])) >> 47)))
               ^ ((0x9DDFEA08EB382D69LL
                 * ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1]))
                  ^ v107.m128i_i64[1]
                  ^ ((0x9DDFEA08EB382D69LL * (v107.m128i_i64[1] ^ v106.m128i_i64[1])) >> 47))) >> 47))))) >> 47);
      return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v42) ^ ((0x9DDFEA08EB382D69LL * v42) >> 47));
    }
  }
  else
  {
    v10 = (char *)((char *)&v105 - (char *)v6);
    memcpy(v6, &src, (char *)&v105 - (char *)v6);
    if ( v8 )
    {
      v8 += 64;
      sub_9931E0((unsigned __int64 *)&v105, &dest);
    }
    else
    {
      v8 = 64;
      sub_9E5E40((unsigned __int64 *)&v95, &dest, si128.m128i_u64[1]);
      v53 = _mm_loadu_si128(&v96);
      v54 = _mm_loadu_si128(&v97);
      v105 = _mm_loadu_si128(&v95);
      v106 = v53;
      v107 = v54;
      si128.m128i_i64[0] = v98;
    }
    v9 = (__m128i *)((char *)&dest + 1LL - (_QWORD)v10);
    memcpy(&dest, &src + (_QWORD)v10, 1LL - (_QWORD)v10);
    v11 = 1LL - (_QWORD)v10;
    v12 = 1LL - (_QWORD)v10;
    if ( v8 )
      goto LABEL_5;
  }
  if ( (unsigned __int64)(v11 - 4) <= 4 )
  {
    v43 = *(unsigned int *)((char *)&v102 + v11 + 4) ^ si128.m128i_i64[1];
    v44 = 0x9DDFEA08EB382D69LL * (v43 ^ (v11 + 8LL * dest.m128i_u32[0]));
    v42 = v44 ^ v43 ^ (v44 >> 47);
    return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v42) ^ ((0x9DDFEA08EB382D69LL * v42) >> 47));
  }
  if ( (unsigned __int64)(v11 - 9) <= 7 )
  {
    v55 = *(__int64 *)((char *)&v102 + v11);
    v56 = __ROR8__(v55 + v11, v11);
    v57 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v56 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
         ^ v56
         ^ ((0x9DDFEA08EB382D69LL * (v56 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47));
    return v55 ^ (0x9DDFEA08EB382D69LL * (v57 ^ (v57 >> 47)));
  }
  else if ( (unsigned __int64)(v11 - 17) > 0xF )
  {
    if ( (unsigned __int64)v11 > 0x20 )
    {
      v80 = *(__int64 *)((char *)&v101 + v11);
      v81 = dest.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v80 + v11);
      v82 = v81 + dest.m128i_i64[1];
      v83 = *(_QWORD *)&v99[v11] + v104.m128i_i64[0];
      v84 = __ROR8__(v81 + dest.m128i_i64[1] + v104.m128i_i64[0], 31)
          + __ROL8__(v104.m128i_i64[1] + v81, 12)
          + __ROR8__(v81 + dest.m128i_i64[1], 7)
          + __ROL8__(v81, 27);
      v85 = 0x9AE16A3B2F90404FLL
          * (__ROR8__(v83 + *(_QWORD *)&v99[v11 + 8] + v80, 31)
           + v104.m128i_i64[1]
           + __ROL8__(v83, 27)
           + __ROL8__(v83 + *(__int64 *)((char *)&v102 + v11), 12)
           + __ROR8__(v83 + *(_QWORD *)&v99[v11 + 8], 7)
           + v82
           + v104.m128i_i64[0])
          - 0x3C5A37A36834CED9LL * (v84 + *(__int64 *)((char *)&v102 + v11) + v83 + *(_QWORD *)&v99[v11 + 8] + v80);
      v86 = v84 + ((0xC3A5C85C97CB3127LL * ((v85 >> 47) ^ v85)) ^ si128.m128i_i64[1]);
      return 0x9AE16A3B2F90404FLL * (v86 ^ (v86 >> 47));
    }
    else
    {
      result = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
      if ( v11 )
      {
        v58 = (0xC949D7C7509E6557LL * ((unsigned int)v11 + 4 * *((unsigned __int8 *)&v102 + v11 + 7)))
            ^ (0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[(unsigned __int64)v11 >> 1] << 8)))
            ^ si128.m128i_i64[1];
        return 0x9AE16A3B2F90404FLL * (v58 ^ (v58 >> 47));
      }
    }
  }
  else
  {
    v46 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&v102 + v11);
    v47 = v11
        + si128.m128i_i64[1]
        - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
        + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
        - v46;
    v48 = 0x9DDFEA08EB382D69LL
        * (v47
         ^ (__ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
          - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v101 + v11)
          + __ROR8__(si128.m128i_i64[1] ^ v46, 30)));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (v48 ^ v47 ^ (v48 >> 47)))
          ^ ((0x9DDFEA08EB382D69LL * (v48 ^ v47 ^ (v48 >> 47))) >> 47));
  }
  return result;
}

