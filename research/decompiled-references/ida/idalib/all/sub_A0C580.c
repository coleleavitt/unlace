__int64 __fastcall sub_A0C580(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  int v6; // eax
  __int8 v7; // r12
  __m128i *v8; // rax
  __int64 v9; // r14
  _DWORD *v10; // r9
  __m128i *v11; // rax
  __int64 v12; // r15
  __m128i *v13; // rdx
  __int64 v14; // rcx
  signed __int64 v15; // r10
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  _WORD *v20; // rax
  _WORD *v21; // r9
  int v22; // ecx
  int v23; // r8d
  _WORD *v24; // rsi
  __int64 v25; // rdi
  char v26; // r10
  int v27; // r11d
  int v28; // r9d
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  __m128i *p_dest; // r14
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  __m128i *v37; // rsi
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int8 *v41; // r9
  __int8 *v42; // rsi
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
  __int8 v56; // dl
  __int8 v57; // dl
  __int64 v58; // rdx
  __int8 *v59; // rsi
  __m128i *v60; // rdx
  __int8 v61; // cl
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rsi
  __m128i *v64; // r11
  __m128i *v65; // rdx
  __int8 v66; // di
  __int8 v67; // r9
  __m128i v68; // xmm4
  __m128i v69; // xmm5
  __int64 v70; // rsi
  __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  const __m128i *v74; // rax
  const __m128i *v75; // rsi
  __m128i v76; // xmm0
  __m128i v77; // xmm2
  __int8 *v78; // rax
  __int8 *v79; // rsi
  __int8 v80; // cl
  char v81; // cl
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
  char v94; // dl
  __int64 v95; // r10
  __int64 v96; // rdi
  __int64 v97; // r11
  __int64 v98; // r13
  __int64 v99; // rdi
  unsigned __int64 v100; // rcx
  size_t v101; // rax
  __int8 v102; // cl
  size_t v103; // r8
  __m128i *v104; // rcx
  __m128i *v105; // rax
  __int8 v106; // di
  __int8 v107; // si
  int v108; // [rsp+0h] [rbp-128h]
  int v109; // [rsp+4h] [rbp-124h]
  signed __int64 v110; // [rsp+8h] [rbp-120h]
  __int8 v111; // [rsp+8h] [rbp-120h]
  size_t v112; // [rsp+8h] [rbp-120h]
  char *v113; // [rsp+10h] [rbp-118h]
  signed __int64 v114; // [rsp+10h] [rbp-118h]
  __int8 v115; // [rsp+10h] [rbp-118h]
  signed __int64 v116; // [rsp+18h] [rbp-110h]
  __m128i v117; // [rsp+20h] [rbp-108h] BYREF
  __m128i v118; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v119; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v120[2]; // [rsp+50h] [rbp-D8h]
  __int64 v121; // [rsp+60h] [rbp-C8h] BYREF
  __int64 src; // [rsp+68h] [rbp-C0h] BYREF
  __m128i dest; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v124; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v125; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v126; // [rsp+C0h] [rbp-68h]
  __m128i v127; // [rsp+D0h] [rbp-58h]
  __m128i si128; // [rsp+E0h] [rbp-48h]

  v5 = *(_DWORD *)a3;
  v6 = *(_DWORD *)(a3 + 8);
  dest = 0;
  v7 = *(_BYTE *)(a3 + 4);
  v109 = v5;
  memset(&v124, 0, 48);
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v108 = v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v121 = 0;
  v8 = sub_A0C4A0(&dest, &v121, &dest, (unsigned __int64)&v125, v5);
  v9 = v121;
  LOBYTE(src) = v7;
  v10 = (__int32 *)((char *)v8->m128i_i32 + 1);
  if ( &v8->m128i_i8[1] <= (__int8 *)&v125 )
  {
    v8->m128i_i8[0] = v7;
  }
  else
  {
    v113 = (char *)((char *)&v125 - (char *)v8);
    memcpy(v8, &src, (char *)&v125 - (char *)v8);
    if ( v9 )
    {
      v9 += 64;
      sub_9B6F20((unsigned __int64 *)&v125, &dest);
    }
    else
    {
      v9 = 64;
      sub_A09B80((unsigned __int64 *)&v117, &dest, si128.m128i_u64[1]);
      v68 = _mm_loadu_si128(&v118);
      v69 = _mm_loadu_si128(&v119);
      v125 = _mm_loadu_si128(&v117);
      v126 = v68;
      v127 = v69;
      si128.m128i_i64[0] = v120[0];
    }
    memcpy(&dest, (char *)&src + (_QWORD)v113, 1LL - (_QWORD)v113);
    v10 = (__int32 *)((char *)dest.m128i_i32 + 1LL - (_QWORD)v113);
  }
  src = v9;
  v11 = sub_A0C4A0(&dest, &src, v10, (unsigned __int64)&v125, v108);
  v12 = src;
  v13 = v11;
  v14 = (char *)v11 - (char *)&dest;
  v15 = (char *)v11 - (char *)&dest;
  if ( src )
  {
    if ( v11 != &v125 && v11 != &dest )
    {
      p_dest = &dest;
      v34 = (char *)((char *)&v125 - (char *)v11);
      v35 = 64;
      if ( v34 == (char *)v14 )
      {
        v74 = v13;
        if ( (v13 >= &v124 || &dest >= &v13[1]) && (unsigned __int64)v13->m128i_u64 + ~(unsigned __int64)&dest > 0xE )
        {
          v75 = &dest;
          do
          {
            v76 = _mm_load_si128(v75);
            v77 = _mm_loadu_si128(v74++);
            ++v75;
            v75[-1] = v77;
            v74[-1] = v76;
          }
          while ( v74 != (const __m128i *)&v13->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL] );
          v78 = &dest.m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
          v79 = &v13->m128i_i8[v14 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != v14 )
          {
            v80 = *v78;
            *v78 = *v79;
            *v79 = v80;
            if ( v13 != (__m128i *)(v78 + 1) )
            {
              v81 = v78[1];
              v78[1] = v79[1];
              v79[1] = v81;
              if ( v13 != (__m128i *)(v78 + 2) )
              {
                v82 = v78[2];
                v78[2] = v79[2];
                v79[2] = v82;
                if ( v13 != (__m128i *)(v78 + 3) )
                {
                  v83 = v78[3];
                  v78[3] = v79[3];
                  v79[3] = v83;
                  if ( v13 != (__m128i *)(v78 + 4) )
                  {
                    v84 = v78[4];
                    v78[4] = v79[4];
                    v79[4] = v84;
                    if ( v13 != (__m128i *)(v78 + 5) )
                    {
                      v85 = v78[5];
                      v78[5] = v79[5];
                      v79[5] = v85;
                      if ( v13 != (__m128i *)(v78 + 6) )
                      {
                        v86 = v78[6];
                        v78[6] = v79[6];
                        v79[6] = v86;
                        if ( v13 != (__m128i *)(v78 + 7) )
                        {
                          v87 = v78[7];
                          v78[7] = v79[7];
                          v79[7] = v87;
                          if ( v13 != (__m128i *)(v78 + 8) )
                          {
                            v88 = v78[8];
                            v78[8] = v79[8];
                            v79[8] = v88;
                            if ( v13 != (__m128i *)(v78 + 9) )
                            {
                              v89 = v78[9];
                              v78[9] = v79[9];
                              v79[9] = v89;
                              if ( v13 != (__m128i *)(v78 + 10) )
                              {
                                v90 = v78[10];
                                v78[10] = v79[10];
                                v79[10] = v90;
                                if ( v13 != (__m128i *)(v78 + 11) )
                                {
                                  v91 = v78[11];
                                  v78[11] = v79[11];
                                  v79[11] = v91;
                                  if ( v13 != (__m128i *)(v78 + 12) )
                                  {
                                    v92 = v78[12];
                                    v78[12] = v79[12];
                                    v79[12] = v92;
                                    if ( v13 != (__m128i *)(v78 + 13) )
                                    {
                                      v93 = v78[13];
                                      v78[13] = v79[13];
                                      v79[13] = v93;
                                      if ( v13 != (__m128i *)(v78 + 14) )
                                      {
                                        v94 = v78[14];
                                        v78[14] = v79[14];
                                        v79[14] = v94;
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
          v104 = v13;
          v105 = &dest;
          do
          {
            v106 = v104->m128i_i8[0];
            v107 = v105->m128i_i8[0];
            v105 = (__m128i *)((char *)v105 + 1);
            v104 = (__m128i *)((char *)v104 + 1);
            v105[-1].m128i_i8[15] = v106;
            v104[-1].m128i_i8[15] = v107;
          }
          while ( v13 != v105 );
        }
      }
      else
      {
        v36 = 64 - v14;
        if ( v14 >= 64 - v14 )
          goto LABEL_51;
        while ( v14 != 1 )
        {
          v37 = (__m128i *)((char *)p_dest + v14);
          if ( v36 > 0 )
          {
            if ( (v14 + 16 <= 0 || v37 >= &p_dest[1]) && (unsigned __int64)(v36 - 1) > 0xE )
            {
              v38 = 0;
              do
              {
                v39 = _mm_loadu_si128(&p_dest[v38 / 0x10]);
                p_dest[v38 / 0x10] = _mm_loadu_si128(&v37[v38 / 0x10]);
                v37[v38 / 0x10] = v39;
                v38 += 16LL;
              }
              while ( v38 != (v36 & 0xFFFFFFFFFFFFFFF0LL) );
              v40 = v36 & 0x7FFFFFFFFFFFFFF0LL;
              v41 = &p_dest->m128i_i8[v36 & 0xFFFFFFFFFFFFFFF0LL];
              v42 = &v37->m128i_i8[v36 & 0xFFFFFFFFFFFFFFF0LL];
              if ( v36 != (v36 & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v43 = *v41;
                *v41 = *v42;
                *v42 = v43;
                if ( v36 > v40 + 1 )
                {
                  v44 = v41[1];
                  v41[1] = v42[1];
                  v42[1] = v44;
                  if ( v36 > v40 + 2 )
                  {
                    v45 = v41[2];
                    v41[2] = v42[2];
                    v42[2] = v45;
                    if ( v36 > v40 + 3 )
                    {
                      v46 = v41[3];
                      v41[3] = v42[3];
                      v42[3] = v46;
                      if ( v36 > v40 + 4 )
                      {
                        v47 = v41[4];
                        v41[4] = v42[4];
                        v42[4] = v47;
                        if ( v36 > v40 + 5 )
                        {
                          v48 = v41[5];
                          v41[5] = v42[5];
                          v42[5] = v48;
                          if ( v36 > v40 + 6 )
                          {
                            v49 = v41[6];
                            v41[6] = v42[6];
                            v42[6] = v49;
                            if ( v36 > v40 + 7 )
                            {
                              v50 = v41[7];
                              v41[7] = v42[7];
                              v42[7] = v50;
                              if ( v36 > v40 + 8 )
                              {
                                v51 = v41[8];
                                v41[8] = v42[8];
                                v42[8] = v51;
                                if ( v36 > v40 + 9 )
                                {
                                  v52 = v41[9];
                                  v41[9] = v42[9];
                                  v42[9] = v52;
                                  if ( v36 > v40 + 10 )
                                  {
                                    v53 = v41[10];
                                    v41[10] = v42[10];
                                    v42[10] = v53;
                                    if ( v36 > v40 + 11 )
                                    {
                                      v54 = v41[11];
                                      v41[11] = v42[11];
                                      v42[11] = v54;
                                      if ( v36 > v40 + 12 )
                                      {
                                        v55 = v41[12];
                                        v41[12] = v42[12];
                                        v42[12] = v55;
                                        if ( v36 > v40 + 13 )
                                        {
                                          v56 = v41[13];
                                          v41[13] = v42[13];
                                          v42[13] = v56;
                                          if ( v36 > v40 + 14 )
                                          {
                                            v57 = v41[14];
                                            v41[14] = v42[14];
                                            v42[14] = v57;
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
              v64 = (__m128i *)((char *)v37 + v36);
              v65 = p_dest;
              do
              {
                v66 = v65->m128i_i8[0];
                v67 = v37->m128i_i8[0];
                v37 = (__m128i *)((char *)v37 + 1);
                v65 = (__m128i *)((char *)v65 + 1);
                v65[-1].m128i_i8[15] = v67;
                v37[-1].m128i_i8[15] = v66;
              }
              while ( v37 != v64 );
            }
            p_dest = (__m128i *)((char *)p_dest + v36);
          }
          if ( !(v35 % v14) )
            goto LABEL_56;
          v36 = v14;
          v58 = v14 - v35 % v14;
          while ( 1 )
          {
            v35 = v36;
            v14 = v58;
            v36 -= v58;
            if ( v58 < v36 )
              break;
LABEL_51:
            if ( v36 == 1 )
            {
              v114 = v15;
              v111 = p_dest->m128i_i8[v35 - 1];
              memmove(&p_dest->m128i_i8[1], p_dest, v35 - 1);
              v15 = v114;
              p_dest->m128i_i8[0] = v111;
              goto LABEL_56;
            }
            v59 = &p_dest->m128i_i8[v35];
            v60 = (__m128i *)((char *)p_dest + v35 - v36);
            p_dest = v60;
            if ( v14 > 0 )
            {
              p_dest = (__m128i *)((char *)v60 - v14);
              do
              {
                v60 = (__m128i *)((char *)v60 - 1);
                --v59;
                v61 = v60->m128i_i8[0];
                v60->m128i_i8[0] = *v59;
                *v59 = v61;
              }
              while ( v60 != p_dest );
            }
            v58 = v35 % v36;
            if ( !(v35 % v36) )
              goto LABEL_56;
          }
        }
        v101 = v35 - 1;
        v102 = p_dest->m128i_i8[0];
        v103 = v101;
        if ( v101 )
        {
          v116 = v15;
          v115 = p_dest->m128i_i8[0];
          v112 = v101;
          memmove(p_dest, &p_dest->m128i_i8[1], v101);
          v15 = v116;
          v102 = v115;
          v103 = v112;
        }
        p_dest->m128i_i8[v103] = v102;
      }
    }
LABEL_56:
    v110 = v15;
    sub_9B6F20((unsigned __int64 *)&v125, &dest);
    v62 = 0xB492B66FBE98F273LL * ((v12 + v110) ^ ((unsigned __int64)(v12 + v110) >> 47))
        + v125.m128i_i64[0]
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v127.m128i_i64[0]))
           ^ si128.m128i_i64[0]
           ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v127.m128i_i64[0])) >> 47)))
         ^ ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v127.m128i_i64[0]))
            ^ si128.m128i_i64[0]
            ^ ((0x9DDFEA08EB382D69LL * (si128.m128i_i64[0] ^ v127.m128i_i64[0])) >> 47))) >> 47));
    v63 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL
           * (v62
            ^ (v126.m128i_i64[0]
             - 0x4B6D499041670D8DLL * (v125.m128i_i64[1] ^ ((unsigned __int64)v125.m128i_i64[1] >> 47))
             - 0x622015F714C7D297LL
             * ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1]))
                ^ v127.m128i_i64[1]
                ^ ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1])) >> 47)))
              ^ ((0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1]))
                 ^ v127.m128i_i64[1]
                 ^ ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1])) >> 47))) >> 47))))) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * (v62
           ^ (v126.m128i_i64[0]
            - 0x4B6D499041670D8DLL * (v125.m128i_i64[1] ^ ((unsigned __int64)v125.m128i_i64[1] >> 47))
            - 0x622015F714C7D297LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1]))
               ^ v127.m128i_i64[1]
               ^ ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1])) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1]))
                ^ v127.m128i_i64[1]
                ^ ((0x9DDFEA08EB382D69LL * (v127.m128i_i64[1] ^ v126.m128i_i64[1])) >> 47))) >> 47)))))
         ^ v62);
    v18 = 0x9DDFEA08EB382D69LL * (v63 ^ (v63 >> 47));
  }
  else if ( (unsigned __int64)(v14 - 4) > 4 )
  {
    if ( (unsigned __int64)(v14 - 9) <= 7 )
    {
      v70 = *(__int64 *)((char *)&src + v14);
      v71 = __ROR8__(v70 + v14, v14);
      v18 = v70
          ^ (0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v71 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
              ^ v71
              ^ ((0x9DDFEA08EB382D69LL * (v71 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47)))
            ^ ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v71 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1]))
               ^ v71
               ^ ((0x9DDFEA08EB382D69LL * (v71 ^ dest.m128i_i64[0] ^ si128.m128i_i64[1])) >> 47))) >> 47)));
    }
    else if ( (unsigned __int64)(v14 - 17) > 0xF )
    {
      if ( (unsigned __int64)v14 > 0x20 )
      {
        v95 = *(__int64 *)((char *)&v121 + v14);
        v96 = dest.m128i_i64[0] - 0x3C5A37A36834CED9LL * (v95 + v14);
        v97 = v96 + dest.m128i_i64[1] + v124.m128i_i64[0];
        v98 = *(_QWORD *)((char *)v120 + v14) + v124.m128i_i64[0];
        v99 = __ROR8__(v97, 31)
            + __ROL8__(v124.m128i_i64[1] + v96, 12)
            + __ROR8__(v96 + dest.m128i_i64[1], 7)
            + __ROL8__(v96, 27);
        v100 = 0x9AE16A3B2F90404FLL
             * (__ROR8__(v98 + *(_QWORD *)((char *)&v120[1] + v14) + v95, 31)
              + __ROL8__(v98 + *(__int64 *)((char *)&src + v14), 12)
              + __ROL8__(v98, 27)
              + v124.m128i_i64[1]
              + __ROR8__(v98 + *(_QWORD *)((char *)&v120[1] + v14), 7)
              + v97)
             - 0x3C5A37A36834CED9LL
             * (v99 + *(__int64 *)((char *)&src + v14) + v98 + *(_QWORD *)((char *)&v120[1] + v14) + v95);
        v18 = 0x9AE16A3B2F90404FLL
            * (((((0xC3A5C85C97CB3127LL * ((v100 >> 47) ^ v100)) ^ si128.m128i_i64[1]) + v99) >> 47)
             ^ (((0xC3A5C85C97CB3127LL * ((v100 >> 47) ^ v100)) ^ si128.m128i_i64[1]) + v99));
      }
      else
      {
        v18 = si128.m128i_i64[1] ^ 0x9AE16A3B2F90404FLL;
        if ( v14 )
        {
          v72 = 0x9AE16A3B2F90404FLL * (dest.m128i_u8[0] + (dest.m128i_u8[(unsigned __int64)v14 >> 1] << 8));
          v73 = 0xC949D7C7509E6557LL * ((unsigned int)v14 + 4 * *((unsigned __int8 *)&src + v14 + 7));
          v18 = 0x9AE16A3B2F90404FLL * (((v73 ^ v72 ^ si128.m128i_i64[1]) >> 47) ^ v73 ^ v72 ^ si128.m128i_i64[1]);
        }
      }
    }
    else
    {
      v30 = 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)&src + v14);
      v31 = v14
          + si128.m128i_i64[1]
          - 0x4B6D499041670D8DLL * dest.m128i_i64[0]
          + __ROR8__(dest.m128i_i64[1] ^ 0xC949D7C7509E6557LL, 20)
          - v30;
      v32 = 0x9DDFEA08EB382D69LL
          * (v31
           ^ (__ROL8__(0xB492B66FBE98F273LL * dest.m128i_i64[0] - dest.m128i_i64[1], 21)
            - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)&v121 + v14)
            + __ROR8__(v30 ^ si128.m128i_i64[1], 30)));
      v18 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * ((v32 >> 47) ^ v32 ^ v31)) >> 47)
           ^ (0x9DDFEA08EB382D69LL * ((v32 >> 47) ^ v32 ^ v31)));
    }
  }
  else
  {
    v16 = si128.m128i_i64[1] ^ *(unsigned int *)((char *)&src + v14 + 4);
    v17 = 0x9DDFEA08EB382D69LL * (v16 ^ (v14 + 8LL * dest.m128i_u32[0]));
    v18 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v17 ^ v16 ^ (v17 >> 47)))
         ^ ((0x9DDFEA08EB382D69LL * (v17 ^ v16 ^ (v17 >> 47))) >> 47));
  }
  v19 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 4LL * ((unsigned int)v18 & (*(_DWORD *)a2 - 1)));
  if ( (_DWORD)v19 && (v20 = (_WORD *)(*(_QWORD *)(a2 + 16) + v19), v21 = v20 + 1, *v20) )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = (unsigned __int16)v21[5];
      v24 = v21 + 6;
      v25 = (unsigned __int16)v21[4];
      if ( v18 == *(_QWORD *)v21 )
      {
        v26 = *((_BYTE *)v21 + 16);
        v27 = *((_DWORD *)v21 + 3);
        v28 = *(_DWORD *)((char *)v21 + 17);
        if ( v7 == v26 && v109 == v27 && v108 == v28 )
          break;
      }
      ++v22;
      v21 = (_WORD *)((char *)v24 + (unsigned int)(v23 + v25));
      if ( (unsigned __int16)*v20 == v22 )
        goto LABEL_16;
    }
    *(_DWORD *)a1 = v27;
    *(_BYTE *)(a1 + 4) = v26;
    *(_DWORD *)(a1 + 8) = v28;
    *(_QWORD *)(a1 + 16) = (char *)v24 + v25;
    *(_DWORD *)(a1 + 24) = v23;
    *(_QWORD *)(a1 + 32) = a2 + 24;
  }
  else
  {
LABEL_16:
    *(_DWORD *)a1 = -1;
    *(_BYTE *)(a1 + 4) = -1;
    *(_DWORD *)(a1 + 8) = -1;
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  return a1;
}
