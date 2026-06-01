__m128i *__fastcall sub_172F6D0(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 i; // rax
  __m128i *v4; // r12
  __m128i *v5; // r13
  __int64 v6; // rbp
  __m128i v7; // xmm1
  __int64 v8; // r8
  __int64 v9; // rdi
  __int32 v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __m128i v15; // xmm2
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // r14
  __m128i v23; // xmm1
  __int64 v24; // r15
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __m128i v27; // xmm2
  char *v28; // rdi
  __int32 v29; // ecx
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  __m128i v32; // xmm5
  unsigned int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128i *v36; // r13
  __m128i *v37; // r12
  __int64 v38; // rbp
  __m128i v39; // xmm7
  __int64 v40; // r8
  __int64 v41; // rdi
  __int32 v42; // eax
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // r10
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // r14
  __m128i v55; // xmm7
  __int64 v56; // r15
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  __m128i v59; // xmm0
  char *v60; // rdi
  __int32 v61; // ecx
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  unsigned int v65; // ebx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __m128i *v68; // r13
  __m128i *v69; // r15
  __int32 v70; // edx
  __m128i v71; // xmm4
  __int64 v72; // rax
  void *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  __m128i v76; // xmm6
  __m128i v77; // xmm5
  __m128i v78; // xmm7
  __int64 v79; // rax
  _QWORD *v80; // rbp
  _QWORD *v81; // rbx
  _QWORD *v82; // rdi
  int v84; // [rsp+Ch] [rbp-12Ch]
  __int32 v85; // [rsp+Ch] [rbp-12Ch]
  __int32 v86; // [rsp+10h] [rbp-128h]
  __int64 v87; // [rsp+10h] [rbp-128h]
  __int64 v88; // [rsp+18h] [rbp-120h]
  __int32 v89; // [rsp+18h] [rbp-120h]
  __int32 v90; // [rsp+20h] [rbp-118h]
  __int32 v91; // [rsp+20h] [rbp-118h]
  __int32 v92; // [rsp+24h] [rbp-114h]
  int v93; // [rsp+24h] [rbp-114h]
  __int64 v94; // [rsp+28h] [rbp-110h]
  signed __int64 v95; // [rsp+30h] [rbp-108h]
  signed __int64 v96; // [rsp+38h] [rbp-100h]
  __m128i *v97; // [rsp+40h] [rbp-F8h]
  __int8 *v98; // [rsp+48h] [rbp-F0h]
  __m128i v99; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v100; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v101; // [rsp+70h] [rbp-C8h]
  __int64 v102; // [rsp+78h] [rbp-C0h]
  __m128i v103; // [rsp+80h] [rbp-B8h] BYREF
  void *v104; // [rsp+90h] [rbp-A8h]
  _QWORD *v105; // [rsp+98h] [rbp-A0h]
  __int64 v106; // [rsp+A0h] [rbp-98h]
  __int32 v107; // [rsp+A8h] [rbp-90h]
  __int32 v108; // [rsp+ACh] [rbp-8Ch]
  __int64 v109; // [rsp+B0h] [rbp-88h]
  unsigned int v110; // [rsp+B8h] [rbp-80h]
  __int32 v111; // [rsp+BCh] [rbp-7Ch]
  __m128i v112; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v113; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v114; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v115; // [rsp+F0h] [rbp-48h]

  v97 = a1;
  if ( a1 == a2 )
    return a3;
  if ( a2 == a3 )
    return a1;
  v98 = &a1->m128i_i8[(char *)a3 - (char *)a2];
  v96 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a3 - (char *)a1) >> 3);
  if ( 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3) == v96
                                                                - 0xCF3CF3CF3CF3CF3DLL
                                                                * (((char *)a2 - (char *)a1) >> 3) )
  {
    v68 = a2;
    v69 = a1;
    do
    {
      v70 = v69[6].m128i_i32[2];
      v71 = _mm_loadu_si128(v69 + 3);
      v99.m128i_i64[0] = v69->m128i_i64[0];
      v72 = v69->m128i_i64[1];
      v103 = v71;
      v99.m128i_i64[1] = v72;
      v100 = v69[1];
      v101 = v69[2].m128i_i64[0];
      v102 = v69[2].m128i_i64[1];
      v73 = (void *)v69[4].m128i_i64[0];
      v69[4].m128i_i64[0] = 0;
      v104 = v73;
      v74 = (_QWORD *)v69[4].m128i_i64[1];
      v69[4].m128i_i64[1] = 0;
      v105 = v74;
      v75 = v69[5].m128i_i64[0];
      v69[5].m128i_i64[0] = 0;
      v106 = v75;
      v107 = v69[5].m128i_i32[2];
      v108 = v69[5].m128i_i32[3];
      v109 = v69[6].m128i_i64[0];
      v110 = v70 & 0x3FFFF | v110 & 0xFFFC0000;
      v76 = _mm_loadu_si128(v69 + 8);
      v77 = _mm_loadu_si128(v69 + 7);
      v78 = _mm_loadu_si128(v69 + 9);
      v111 = v69[6].m128i_i32[3];
      v79 = v69[10].m128i_i64[0];
      v112 = v77;
      v113 = v76;
      v114 = v78;
      v115 = v79;
      sub_172F0A0(v69, v68);
      sub_172F0A0(v68, &v99);
      v80 = v105;
      v81 = v104;
      if ( v105 != v104 )
      {
        do
        {
          while ( 1 )
          {
            v82 = (_QWORD *)v81[3];
            if ( v82 == v81 + 5 )
              break;
            operator delete(v82);
            v81 += 8;
            if ( v80 == v81 )
              goto LABEL_36;
          }
          v81 += 8;
        }
        while ( v80 != v81 );
LABEL_36:
        v81 = v104;
      }
      if ( v81 )
        operator delete(v81);
      v69 = (__m128i *)((char *)v69 + 168);
      v68 = (__m128i *)((char *)v68 + 168);
    }
    while ( a2 != v69 );
    return (__m128i *)((char *)v97
                     + 168
                     * ((0xF3CF3CF3CF3CF3DLL * ((unsigned __int64)((char *)&a2[-11].m128i_u64[1] - (char *)v97) >> 3))
                      & 0x1FFFFFFFFFFFFFFFLL)
                     + 168);
  }
  else
  {
    v94 = 0xCF3CF3CF3CF3CF3DLL * (((char *)a2 - (char *)a1) >> 3);
    for ( i = v94; ; i = v67 )
    {
      while ( 1 )
      {
        v95 = v96 - i;
        if ( i >= v96 - i )
          break;
        v4 = v97;
        v5 = (__m128i *)((char *)v97 + 168 * i);
        if ( v96 - i > 0 )
        {
          v6 = 0;
          do
          {
            v7 = _mm_loadu_si128(v4 + 7);
            v8 = v4[4].m128i_i64[0];
            v9 = v4[4].m128i_i64[1];
            v90 = v4[5].m128i_i32[2];
            v10 = v4[5].m128i_i32[3];
            v11 = v4[5].m128i_i64[0];
            v99.m128i_i64[1] = v4->m128i_i64[1];
            v12 = v4[1].m128i_i64[0];
            v13 = v4->m128i_i64[0];
            v103 = _mm_loadu_si128(v4 + 3);
            v86 = v10;
            v14 = v4[6].m128i_i64[0];
            v100.m128i_i64[0] = v12;
            v88 = v14;
            LODWORD(v14) = v4[6].m128i_i32[2];
            v15 = _mm_loadu_si128(v4 + 8);
            v100.m128i_i64[1] = v4[1].m128i_i64[1];
            v16 = v4[2].m128i_i64[0];
            v84 = v14;
            LODWORD(v14) = v4[6].m128i_i32[3];
            v17 = v4[2].m128i_i64[1];
            v112 = v7;
            v101 = v16;
            v113 = v15;
            v4[4].m128i_i64[0] = 0;
            v4[4].m128i_i64[1] = 0;
            v4[5].m128i_i64[0] = 0;
            v92 = v14;
            v18 = v4[10].m128i_i64[0];
            v114 = _mm_loadu_si128(v4 + 9);
            v115 = v18;
            v4->m128i_i64[0] = v5->m128i_i64[0];
            v4->m128i_i64[1] = v5->m128i_i64[1];
            v4[1] = _mm_loadu_si128(v5 + 1);
            v4[2].m128i_i64[0] = v5[2].m128i_i64[0];
            v4[2].m128i_i64[1] = v5[2].m128i_i64[1];
            v4[3] = _mm_loadu_si128(v5 + 3);
            v4[4].m128i_i64[0] = v5[4].m128i_i64[0];
            v19 = v5[4].m128i_i64[1];
            v5[4].m128i_i64[0] = 0;
            v20 = v4[4].m128i_i64[1];
            v4[4].m128i_i64[1] = v19;
            v5[4].m128i_i64[1] = v20;
            v4[5].m128i_i64[0] = v5[5].m128i_i64[0];
            v4[5].m128i_i32[2] = v5[5].m128i_i32[2];
            v4[5].m128i_i32[3] = v5[5].m128i_i32[3];
            v4[6].m128i_i64[0] = v5[6].m128i_i64[0];
            LOBYTE(v20) = v5[6].m128i_i8[8] & 1 | v4[6].m128i_i8[8] & 0xFE;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 2 | v20 & 0xFD;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 4 | v20 & 0xFB;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 8 | v20 & 0xF7;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 0x10 | v20 & 0xEF;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 0x20 | v20 & 0xDF;
            v4[6].m128i_i8[8] = v20;
            LOBYTE(v20) = v5[6].m128i_i8[8] & 0x40 | v20 & 0xBF;
            v4[6].m128i_i8[8] = v20;
            v4[6].m128i_i8[8] = v5[6].m128i_i8[8] & 0x80 | v20 & 0x7F;
            v4[6].m128i_i8[9] = v5[6].m128i_i8[9] & 3 | v4[6].m128i_i8[9] & 0xFC;
            v4[6].m128i_i32[2] = v5[6].m128i_i32[2] & 0x3FC00 | v4[6].m128i_i32[2] & 0xFFFC03FF;
            v4[6].m128i_i32[3] = v5[6].m128i_i32[3];
            v4[7] = _mm_loadu_si128(v5 + 7);
            v4[8] = _mm_loadu_si128(v5 + 8);
            v4[9] = _mm_loadu_si128(v5 + 9);
            v4[10].m128i_i64[0] = v5[10].m128i_i64[0];
            v5->m128i_i64[0] = v13;
            v21 = v99.m128i_i64[1];
            v22 = (_QWORD *)v5[4].m128i_i64[0];
            v23 = _mm_load_si128(&v100);
            v5[2].m128i_i64[1] = v17;
            v5->m128i_i64[1] = v21;
            v24 = v5[4].m128i_i64[1];
            v25 = v101;
            v5[1] = v23;
            v26 = v22;
            v27 = _mm_load_si128(&v103);
            v5[4].m128i_i64[0] = v8;
            v5[2].m128i_i64[0] = v25;
            v5[3] = v27;
            v5[4].m128i_i64[1] = v9;
            for ( v5[5].m128i_i64[0] = v11; (_QWORD *)v24 != v26; v26 += 8 )
            {
              while ( 1 )
              {
                v28 = (char *)v26[3];
                if ( v28 == (char *)(v26 + 5) )
                  break;
                operator delete(v28);
                v26 += 8;
                if ( (_QWORD *)v24 == v26 )
                  goto LABEL_11;
              }
            }
LABEL_11:
            if ( v22 )
              operator delete(v22);
            v29 = v5[6].m128i_i32[2];
            v4 = (__m128i *)((char *)v4 + 168);
            v5 = (__m128i *)((char *)v5 + 168);
            ++v6;
            v30 = _mm_load_si128(&v112);
            v5[-5].m128i_i32[0] = v90;
            *(__m128i *)((char *)v5 - 56) = v30;
            v31 = _mm_load_si128(&v113);
            v32 = _mm_load_si128(&v114);
            v5[-5].m128i_i32[1] = v86;
            v33 = v29 & 0xFFFC0000 | v84 & 0x3FFFF;
            v34 = v115;
            v5[-4].m128i_i32[0] = v33;
            v5[-5].m128i_i64[1] = v88;
            *(__m128i *)((char *)v5 - 40) = v31;
            v5[-4].m128i_i32[1] = v92;
            *(__m128i *)((char *)v5 - 24) = v32;
            v5[-1].m128i_i64[1] = v34;
          }
          while ( v95 != v6 );
          v97 = (__m128i *)((char *)v97 + 168 * v95);
        }
        v35 = v96 % v94;
        if ( !(v96 % v94) )
          return (__m128i *)v98;
        v96 = v94;
        i = v94 - v35;
        v94 -= v35;
      }
      v36 = (__m128i *)((char *)v97 + 168 * v96);
      v97 = (__m128i *)((char *)v36 - 168 * v95);
      if ( v94 > 0 )
      {
        v37 = (__m128i *)((char *)v36 - 168 * v95);
        v38 = 0;
        do
        {
          v37 = (__m128i *)((char *)v37 - 168);
          v36 = (__m128i *)((char *)v36 - 168);
          v39 = _mm_loadu_si128(v37 + 7);
          v40 = v37[4].m128i_i64[0];
          v41 = v37[4].m128i_i64[1];
          v85 = v37[5].m128i_i32[2];
          v42 = v37[5].m128i_i32[3];
          v43 = v37[5].m128i_i64[0];
          v99.m128i_i64[1] = v37->m128i_i64[1];
          v44 = v37[1].m128i_i64[0];
          v45 = v37->m128i_i64[0];
          v103 = _mm_loadu_si128(v37 + 3);
          v91 = v42;
          v46 = v37[6].m128i_i64[0];
          v100.m128i_i64[0] = v44;
          v87 = v46;
          LODWORD(v46) = v37[6].m128i_i32[2];
          v47 = _mm_loadu_si128(v37 + 8);
          v100.m128i_i64[1] = v37[1].m128i_i64[1];
          v48 = v37[2].m128i_i64[0];
          v93 = v46;
          LODWORD(v46) = v37[6].m128i_i32[3];
          v49 = v37[2].m128i_i64[1];
          v112 = v39;
          v101 = v48;
          v113 = v47;
          v37[4].m128i_i64[0] = 0;
          v37[4].m128i_i64[1] = 0;
          v37[5].m128i_i64[0] = 0;
          v89 = v46;
          v50 = v37[10].m128i_i64[0];
          v114 = _mm_loadu_si128(v37 + 9);
          v115 = v50;
          v37->m128i_i64[0] = v36->m128i_i64[0];
          v37->m128i_i64[1] = v36->m128i_i64[1];
          v37[1] = _mm_loadu_si128(v36 + 1);
          v37[2].m128i_i64[0] = v36[2].m128i_i64[0];
          v37[2].m128i_i64[1] = v36[2].m128i_i64[1];
          v37[3] = _mm_loadu_si128(v36 + 3);
          v37[4].m128i_i64[0] = v36[4].m128i_i64[0];
          v51 = v36[4].m128i_i64[1];
          v36[4].m128i_i64[0] = 0;
          v52 = v37[4].m128i_i64[1];
          v37[4].m128i_i64[1] = v51;
          v36[4].m128i_i64[1] = v52;
          v37[5].m128i_i64[0] = v36[5].m128i_i64[0];
          v37[5].m128i_i32[2] = v36[5].m128i_i32[2];
          v37[5].m128i_i32[3] = v36[5].m128i_i32[3];
          v37[6].m128i_i64[0] = v36[6].m128i_i64[0];
          LOBYTE(v52) = v36[6].m128i_i8[8] & 1 | v37[6].m128i_i8[8] & 0xFE;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 2 | v52 & 0xFD;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 4 | v52 & 0xFB;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 8 | v52 & 0xF7;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 0x10 | v52 & 0xEF;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 0x20 | v52 & 0xDF;
          v37[6].m128i_i8[8] = v52;
          LOBYTE(v52) = v36[6].m128i_i8[8] & 0x40 | v52 & 0xBF;
          v37[6].m128i_i8[8] = v52;
          v37[6].m128i_i8[8] = v36[6].m128i_i8[8] & 0x80 | v52 & 0x7F;
          v37[6].m128i_i8[9] = v36[6].m128i_i8[9] & 3 | v37[6].m128i_i8[9] & 0xFC;
          v37[6].m128i_i32[2] = v36[6].m128i_i32[2] & 0x3FC00 | v37[6].m128i_i32[2] & 0xFFFC03FF;
          v37[6].m128i_i32[3] = v36[6].m128i_i32[3];
          v37[7] = _mm_loadu_si128(v36 + 7);
          v37[8] = _mm_loadu_si128(v36 + 8);
          v37[9] = _mm_loadu_si128(v36 + 9);
          v37[10].m128i_i64[0] = v36[10].m128i_i64[0];
          v36->m128i_i64[0] = v45;
          v53 = v99.m128i_i64[1];
          v54 = (_QWORD *)v36[4].m128i_i64[0];
          v55 = _mm_load_si128(&v100);
          v36[2].m128i_i64[1] = v49;
          v36->m128i_i64[1] = v53;
          v56 = v36[4].m128i_i64[1];
          v57 = v101;
          v36[1] = v55;
          v58 = v54;
          v59 = _mm_load_si128(&v103);
          v36[4].m128i_i64[0] = v40;
          v36[2].m128i_i64[0] = v57;
          v36[3] = v59;
          v36[4].m128i_i64[1] = v41;
          for ( v36[5].m128i_i64[0] = v43; (_QWORD *)v56 != v58; v58 += 8 )
          {
            while ( 1 )
            {
              v60 = (char *)v58[3];
              if ( v60 == (char *)(v58 + 5) )
                break;
              operator delete(v60);
              v58 += 8;
              if ( v58 == (_QWORD *)v56 )
                goto LABEL_24;
            }
          }
LABEL_24:
          if ( v54 )
            operator delete(v54);
          v61 = v36[6].m128i_i32[2];
          ++v38;
          v62 = _mm_load_si128(&v112);
          v36[5].m128i_i32[2] = v85;
          v36[7] = v62;
          v63 = _mm_load_si128(&v113);
          v64 = _mm_load_si128(&v114);
          v36[5].m128i_i32[3] = v91;
          v65 = v61 & 0xFFFC0000 | v93 & 0x3FFFF;
          v66 = v115;
          v36[6].m128i_i32[2] = v65;
          v36[6].m128i_i64[0] = v87;
          v36[8] = v63;
          v36[6].m128i_i32[3] = v89;
          v36[9] = v64;
          v36[10].m128i_i64[0] = v66;
        }
        while ( v94 != v38 );
        v97 = (__m128i *)((char *)v97 - 168 * v94);
      }
      v67 = v96 % v95;
      v94 = v96 % v95;
      if ( !(v96 % v95) )
        break;
      v96 = v95;
    }
  }
  return (__m128i *)v98;
}
