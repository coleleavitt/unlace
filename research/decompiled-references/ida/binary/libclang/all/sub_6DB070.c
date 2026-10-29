unsigned __int64 __fastcall sub_6DB070(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        const __m128i *a5,
        char a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  const __m128i *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned int v16; // eax
  char v17; // r10
  unsigned int v18; // r9d
  char v19; // r8
  char v20; // di
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r8
  __int64 *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // ebx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm0
  _BYTE *v35; // r10
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  _QWORD *v40; // r9
  __int64 v41; // rdx
  char v42; // r11
  _QWORD *v43; // r8
  __int64 v44; // rsi
  _QWORD *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int8 v50; // cf
  _BOOL8 v51; // rdi
  unsigned __int64 v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  _BOOL8 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __m128i v62; // xmm0
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rsi
  char v67; // bp
  _QWORD *v68; // r12
  __int64 v69; // rdi
  char v70; // cl
  char v71; // al
  __m128i v72; // xmm0
  __int64 v73; // rax
  __m128i v74; // xmm0
  __m128i v75; // xmm0
  unsigned __int64 v76; // rax
  __m128i *v77; // rdi
  __int64 v78; // rcx
  const __m128i *v79; // rsi
  __m128i *v80; // rdi
  __int64 v81; // rcx
  const __m128i *v82; // rsi
  unsigned __int64 v84; // [rsp+10h] [rbp-2A0h]
  __int64 v85; // [rsp+10h] [rbp-2A0h]
  const __m128i *v86; // [rsp+10h] [rbp-2A0h]
  unsigned __int64 v87; // [rsp+10h] [rbp-2A0h]
  unsigned __int64 v89; // [rsp+10h] [rbp-2A0h]
  __int64 v92; // [rsp+20h] [rbp-290h]
  __int64 v93; // [rsp+28h] [rbp-288h]
  char v94; // [rsp+38h] [rbp-278h]
  __int64 v95; // [rsp+38h] [rbp-278h]
  char v96; // [rsp+40h] [rbp-270h]
  void *v97; // [rsp+40h] [rbp-270h]
  _BYTE *v98; // [rsp+40h] [rbp-270h]
  char v99; // [rsp+48h] [rbp-268h]
  unsigned __int64 v100; // [rsp+48h] [rbp-268h]
  __int64 v101; // [rsp+48h] [rbp-268h]
  unsigned __int64 v102; // [rsp+58h] [rbp-258h]
  char v103; // [rsp+58h] [rbp-258h]
  char v104; // [rsp+58h] [rbp-258h]
  _QWORD *v105; // [rsp+60h] [rbp-250h]
  _QWORD *v106; // [rsp+60h] [rbp-250h]
  _QWORD *v107; // [rsp+68h] [rbp-248h]
  _QWORD *v108; // [rsp+68h] [rbp-248h]
  _BYTE *v109; // [rsp+70h] [rbp-240h]
  __int64 v110; // [rsp+80h] [rbp-230h] BYREF
  void *v111; // [rsp+88h] [rbp-228h] BYREF
  __int64 v112; // [rsp+90h] [rbp-220h]
  _BYTE v113[64]; // [rsp+98h] [rbp-218h] BYREF
  __m128i v114; // [rsp+D8h] [rbp-1D8h] BYREF
  __m128i v115; // [rsp+E8h] [rbp-1C8h]
  __m128i v116; // [rsp+F8h] [rbp-1B8h]
  __m128i v117; // [rsp+108h] [rbp-1A8h]
  __m128i v118; // [rsp+118h] [rbp-198h]
  __m128i v119; // [rsp+128h] [rbp-188h]
  __m128i v120; // [rsp+138h] [rbp-178h]
  __int64 v121; // [rsp+148h] [rbp-168h]
  void *ptr[2]; // [rsp+158h] [rbp-158h] BYREF
  _BYTE v123[128]; // [rsp+168h] [rbp-148h] BYREF
  void *v124[2]; // [rsp+1E8h] [rbp-C8h] BYREF
  _OWORD v125[6]; // [rsp+1F8h] [rbp-B8h] BYREF
  __int64 v126; // [rsp+258h] [rbp-58h]

  v7 = a3;
  v8 = a1;
  v9 = a5;
  ptr[0] = v123;
  ptr[1] = (void *)0x2000000000LL;
  sub_B0C2C0((unsigned int)ptr, a2, a3, a4, (_DWORD)a5, a1, 1);
  v110 = 0;
  v93 = a1 + 384;
  v10 = sub_25AC3A0(a1 + 384, ptr, &v110, &off_47D0A00);
  if ( !v10 )
  {
    v96 = *(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 0x40;
    v16 = v9[1].m128i_u32[2];
    if ( v16 )
    {
      if ( !v96 )
      {
        v85 = 0;
        v94 = 0;
        if ( a4 )
          goto LABEL_16;
        v99 = 0;
        v124[0] = v125;
        v124[1] = (void *)0x1000000000LL;
        goto LABEL_101;
      }
      if ( v16 - 5 > 1 )
      {
        if ( v16 == 2 )
        {
          v65 = v9[2].m128i_i64[0];
          v66 = (_QWORD *)(v65 + 8 * v9[2].m128i_i64[1]);
          if ( (_QWORD *)v65 == v66 )
          {
            v85 = 0;
            v94 = 0;
            v96 = 64;
            if ( a4 )
              goto LABEL_16;
            v124[0] = v125;
            v124[1] = (void *)0x1000000000LL;
            v16 = 2;
LABEL_125:
            v80 = &v114;
            v81 = 30;
            v82 = v9;
            v35 = v113;
            while ( v81 )
            {
              v80->m128i_i32[0] = v82->m128i_i32[0];
              v82 = (const __m128i *)((char *)v82 + 4);
              v80 = (__m128i *)((char *)v80 + 4);
              --v81;
            }
            v111 = v113;
            v112 = 0x800000000LL;
            v114.m128i_i8[2] &= ~2u;
LABEL_31:
            if ( v16 <= 0xB )
            {
              if ( ((1LL << v16) & 0xE89) != 0 )
              {
LABEL_115:
                v115.m128i_i32[2] = 0;
                goto LABEL_90;
              }
              if ( ((1LL << v16) & 0x132) != 0 )
              {
                v115.m128i_i32[2] = 5;
                goto LABEL_90;
              }
              if ( v16 == 2 )
              {
                v40 = (_QWORD *)v9[2].m128i_i64[0];
                v41 = 0;
                v42 = 0;
                v43 = &v40[v9[2].m128i_i64[1]];
                if ( v43 != v40 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v44 = *v40;
                      v45 = (_QWORD *)(*v40 & 0xFFFFFFFFFFFFFFF0LL);
                      v46 = *v45;
                      if ( *(_BYTE *)(*v45 + 16LL) == 37 )
                      {
                        v42 = 1;
                      }
                      else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 37 )
                      {
                        v109 = v35;
                        v107 = v40;
                        v105 = v43;
                        v103 = v42;
                        v100 = *v40 & 0xFFFFFFFFFFFFFFF0LL;
                        v47 = sub_B0D320(v46);
                        v45 = (_QWORD *)v100;
                        v43 = v105;
                        v40 = v107;
                        v35 = v109;
                        v41 = (unsigned int)v112;
                        v42 = (v47 != 0) | v103;
                      }
                      if ( HIDWORD(v112) < (unsigned __int64)(v41 + 1) )
                        break;
                      ++v40;
                      *((_QWORD *)v111 + v41) = v45[1] | v44 & 7;
                      v41 = (unsigned int)(v112 + 1);
                      LODWORD(v112) = v112 + 1;
                      if ( v43 == v40 )
                        goto LABEL_118;
                    }
                    v108 = v40;
                    v106 = v43;
                    v104 = v42;
                    v101 = v45[1] | v44 & 7;
                    v98 = v35;
                    sub_25D6060(&v111, v35, v41 + 1, 8);
                    v43 = v106;
                    v40 = v108 + 1;
                    v35 = v98;
                    *((_QWORD *)v111 + (unsigned int)v112) = v101;
                    v42 = v104;
                    v41 = (unsigned int)(v112 + 1);
                    LODWORD(v112) = v112 + 1;
                  }
                  while ( v106 != v108 + 1 );
LABEL_118:
                  if ( v42 )
                  {
                    v115.m128i_i32[2] = 2;
                    v116.m128i_i64[0] = (__int64)v111;
                    v116.m128i_i64[1] = (unsigned int)v41;
                    goto LABEL_90;
                  }
                }
                goto LABEL_115;
              }
            }
LABEL_90:
            v97 = v35;
            v76 = sub_6C7090((_QWORD *)v8, a2);
            v85 = sub_6DB070(v8, v76, v124[0], LODWORD(v124[1]), &v114, 1);
            sub_25AC3A0(v93, ptr, &v110, &off_47D0A00);
            if ( v111 != v97 )
              free(v111);
            if ( v124[0] != v125 )
              free(v124[0]);
            v16 = v9[1].m128i_u32[2];
            v14 = v9->m128i_u8[2];
            goto LABEL_53;
          }
          v67 = 0;
          v95 = v7;
          v68 = (_QWORD *)v9[2].m128i_i64[0];
          do
          {
            v69 = *(_QWORD *)(*v68 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (v69 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v69 + 8) )
            {
              v8 = a1;
              v7 = v95;
              goto LABEL_132;
            }
            if ( *(_BYTE *)(v69 + 16) == 37 )
            {
              v67 = 1;
            }
            else if ( *(_BYTE *)(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 37 )
            {
              v67 |= sub_B0D320(v69) != 0;
            }
            ++v68;
          }
          while ( v66 != v68 );
          v70 = v67;
          v8 = a1;
          v7 = v95;
          if ( v70 )
            goto LABEL_79;
LABEL_132:
          if ( !a4 )
          {
            v99 = 0;
            v94 = 0;
            goto LABEL_134;
          }
        }
        else if ( !a4 )
        {
          v94 = 0;
LABEL_130:
          v124[0] = v125;
          v124[1] = (void *)0x1000000000LL;
          goto LABEL_125;
        }
        v85 = 0;
        v94 = 0;
        v96 = 64;
        goto LABEL_16;
      }
LABEL_79:
      v96 = 64;
    }
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      if ( a4 )
      {
        v85 = 0;
        v17 = 0;
        v94 = 0;
        v99 = 1;
        goto LABEL_17;
      }
      goto LABEL_89;
    }
    v99 = (*(__int64 *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] >> 3) & 1;
    if ( v99
      && (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | (unsigned __int64)(((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7)) >> 6)
        & 6) != 0 )
    {
      v85 = 0;
      v17 = 0;
      v94 = 0;
      if ( a4 )
        goto LABEL_17;
LABEL_89:
      v35 = v113;
      v94 = 0;
      v124[0] = v125;
      v111 = v113;
      v124[1] = (void *)0x1000000000LL;
      v114 = _mm_loadu_si128(v9);
      v72 = _mm_loadu_si128(v9 + 1);
      v112 = 0x800000000LL;
      v73 = v9[7].m128i_i64[0];
      v115 = v72;
      v74 = _mm_loadu_si128(v9 + 2);
      v121 = v73;
      v116 = v74;
      v117 = _mm_loadu_si128(v9 + 3);
      v75 = _mm_loadu_si128(v9 + 4);
      v114.m128i_i8[2] &= ~2u;
      v118 = v75;
      v119 = _mm_loadu_si128(v9 + 5);
      v120 = _mm_loadu_si128(v9 + 6);
      goto LABEL_90;
    }
    v14 = v9->m128i_u8[2];
    v94 = 0;
    v85 = 0;
    v99 = 1;
    v17 = ((unsigned __int8)(v14 & 2) >> 1) ^ 1;
    if ( a4 )
      goto LABEL_17;
    if ( (v14 & 2) == 0 )
    {
      v16 = v9[1].m128i_u32[2];
      goto LABEL_53;
    }
    v124[0] = v125;
    v124[1] = (void *)0x1000000000LL;
LABEL_101:
    v94 = 0;
    goto LABEL_28;
  }
  v11 = v10 - 32;
  v12 = v10;
  v13 = (v10 - 32) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = v13;
  if ( a6 )
    goto LABEL_3;
  v16 = v9[1].m128i_u32[2];
  if ( v16 - 6 > 2 )
    goto LABEL_3;
  v17 = a6;
  if ( ((*(_WORD *)(v12 - 10) >> 6) & 0xFu) - 6 > 2 )
  {
    v24 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(v12 - 12);
    v19 = *(_BYTE *)(v12 - 9);
    v20 = v19 & 8;
    v21 = (v11 + 4LL * ((v19 & 0x10) != 0) + 8LL * (unsigned __int16)(v18 >> 6) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (unsigned __int8)(v19 & 8) >> 3;
    if ( v20 && (*(_BYTE *)(v21 + 1) & 4) != 0 )
      v23 = (__int64 *)(v21 + 16);
    else
      v23 = (__int64 *)(v21 + 8LL * v22);
    v24 = *v23;
  }
  if ( v9[3].m128i_i64[0] == v24 )
    goto LABEL_3;
  v25 = *(_QWORD *)(v13 + 8);
  v94 = 1;
  v85 = v25;
  v96 = *(_BYTE *)(*(_QWORD *)(v8 + 2160) + 1LL) & 0x40;
  if ( !v96 )
  {
    if ( !a4 )
    {
      if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
      {
        LOBYTE(v14) = v9->m128i_i8[2];
LABEL_54:
        v52 = 0;
        if ( v9[4].m128i_i64[1] )
          v52 = a4;
        v53 = 8 * a4 + 4 * (v14 & 1);
        v54 = v52
            + 8
            * (((v53 - (unsigned __int64)(v53 != 0)) >> 3)
             + (v53 != 0)
             + ((v9->m128i_i16[1] & 0x7FC) != 0)
             + (unsigned __int64)(((v9->m128i_i16[1] & 0x7FC) != 0)
                                | (unsigned __int8)(v9[6].m128i_i64[0] != 0 || v16 == 2))
             + 1);
        v55 = v54 != 0;
        v51 = v9->m128i_i64[1] > 7uLL;
        v56 = 8
            * (v9[7].m128i_i64[0]
             + (v9[6].m128i_i64[0] + 8 * (v51 + v55 + ((v54 - v55) >> 3)) != 0)
             + ((v9[6].m128i_i64[0]
               + 8 * (v51 + v55 + ((v54 - v55) >> 3))
               - (v9[6].m128i_i64[0] + 8 * (v51 + v55 + ((v54 - v55) >> 3)) != 0)) >> 3))
            + 48;
        v57 = *(_QWORD *)(v8 + 2192);
        *(_QWORD *)(v8 + 2272) += v56;
        v58 = (v57 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(v8 + 2200) >= v58 + v56 && v57 )
        {
          *(_QWORD *)(v8 + 2192) = v58 + v56;
          v59 = (v57 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v59 = sub_6A76A0(v8 + 2192, v56, 4);
          v58 = v59;
        }
        v60 = v9[7].m128i_i64[0];
        v61 = v85;
        v87 = v59;
        *(__m128i *)v124 = _mm_loadu_si128(v9);
        v62 = _mm_loadu_si128(v9 + 1);
        v126 = v60;
        v125[0] = v62;
        v125[1] = _mm_loadu_si128(v9 + 2);
        v125[2] = _mm_loadu_si128(v9 + 3);
        v125[3] = _mm_loadu_si128(v9 + 4);
        v125[4] = _mm_loadu_si128(v9 + 5);
        v125[5] = _mm_loadu_si128(v9 + 6);
        sub_B0B700(v59, a2, v7, a4, v61, v124);
        v63 = *(unsigned int *)(v8 + 16);
        v64 = v87;
        if ( *(unsigned int *)(v8 + 20) < (unsigned __int64)(v63 + 1) )
        {
          sub_25D6060(v8 + 8, v8 + 24, v63 + 1, 8);
          v63 = *(unsigned int *)(v8 + 16);
          v64 = v87;
        }
        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v63) = v58;
        ++*(_DWORD *)(v8 + 16);
        if ( !v94 )
        {
          v89 = v64;
          sub_25AC200(v93, v64 + 32, v110, &off_47D0A00);
          v64 = v89;
        }
        if ( v9[6].m128i_i64[0] )
          *(_BYTE *)(v8 + 17281) = 1;
        v14 = v64 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_3;
      }
      v77 = &v114;
      v78 = 30;
      v79 = v9;
      v35 = v113;
      v124[0] = v125;
      while ( v78 )
      {
        v77->m128i_i32[0] = v79->m128i_i32[0];
        v79 = (const __m128i *)((char *)v79 + 4);
        v77 = (__m128i *)((char *)v77 + 4);
        --v78;
      }
      v124[1] = (void *)0x1000000000LL;
      v111 = v113;
      v112 = 0x800000000LL;
      v114.m128i_i8[2] &= ~2u;
      goto LABEL_114;
    }
    goto LABEL_16;
  }
  v96 = 64;
  if ( v16 != 6 )
  {
    if ( a4 )
    {
LABEL_16:
      v99 = 0;
      v17 = 0;
      goto LABEL_17;
    }
    if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      v14 = v9->m128i_u8[2];
      goto LABEL_53;
    }
    goto LABEL_130;
  }
  v99 = 1;
  if ( !a4 )
  {
    if ( (v25 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      v14 = v9->m128i_u8[2];
      goto LABEL_53;
    }
LABEL_134:
    v96 = 64;
    v124[0] = v125;
    v124[1] = (void *)0x1000000000LL;
    goto LABEL_28;
  }
LABEL_17:
  v26 = 0;
  v27 = 0;
LABEL_18:
  if ( v17 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(v7 + 8 * v27);
      v29 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v29 + 8) )
        break;
      if ( (v28 & 7) != 0 )
        break;
      if ( (v28 & 8) != 0 )
        break;
      if ( (*(_BYTE *)(v29 + 17) & 8) != 0 )
      {
        v92 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
        v71 = sub_B17520(v92);
        v29 = v92;
        if ( v71 )
          break;
      }
      v48 = *(unsigned __int8 *)(v29 + 16);
      if ( (unsigned __int8)v48 <= 0x1Au )
      {
        v49 = -100663413;
        v50 = _bittest64(&v49, v48);
        v17 = v50;
        v27 = (unsigned int)++v26;
        if ( v26 != a4 )
          goto LABEL_18;
        if ( !v50 )
          break;
        goto LABEL_52;
      }
      v27 = (unsigned int)++v26;
      if ( a4 == v26 )
      {
        v16 = v9[1].m128i_u32[2];
        v14 = v9->m128i_u8[2];
        goto LABEL_53;
      }
    }
  }
  if ( (v85 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v124[0] = v125;
    v124[1] = (void *)0x1000000000LL;
    if ( a4 > 0x10 )
      sub_25D6060(v124, v125, a4, 8);
    v86 = v9;
    v30 = 0;
    v31 = 0;
    do
    {
      while ( 1 )
      {
        v32 = sub_6DAFF0((_QWORD *)v8, *(_QWORD *)(v7 + 8 * v30));
        v33 = LODWORD(v124[1]) + 1LL;
        if ( HIDWORD(v124[1]) < v33 )
          break;
        *((_QWORD *)v124[0] + LODWORD(v124[1])) = v32;
        ++LODWORD(v124[1]);
        v30 = (unsigned int)++v31;
        if ( v31 == a4 )
          goto LABEL_27;
      }
      v102 = v32;
      sub_25D6060(v124, v125, v33, 8);
      *((_QWORD *)v124[0] + LODWORD(v124[1])) = v102;
      ++LODWORD(v124[1]);
      v30 = (unsigned int)++v31;
    }
    while ( a4 != v31 );
LABEL_27:
    v9 = v86;
LABEL_28:
    v34 = _mm_loadu_si128(v9);
    v35 = v113;
    v111 = v113;
    v114 = v34;
    v36 = _mm_loadu_si128(v9 + 1);
    v112 = 0x800000000LL;
    v37 = v9[7].m128i_i64[0];
    v115 = v36;
    v38 = _mm_loadu_si128(v9 + 2);
    v114.m128i_i8[2] &= ~2u;
    v116 = v38;
    v39 = _mm_loadu_si128(v9 + 3);
    v121 = v37;
    v117 = v39;
    v118 = _mm_loadu_si128(v9 + 4);
    v119 = _mm_loadu_si128(v9 + 5);
    v120 = _mm_loadu_si128(v9 + 6);
    if ( v99 )
      goto LABEL_90;
    if ( v96 )
    {
      v16 = v9[1].m128i_u32[2];
      goto LABEL_31;
    }
LABEL_114:
    v115.m128i_i32[2] = 0;
    v116 = 0u;
    v118.m128i_i64[0] = 0;
    v117 = 0;
    goto LABEL_90;
  }
LABEL_52:
  v16 = v9[1].m128i_u32[2];
  v14 = v9->m128i_u8[2];
LABEL_53:
  switch ( v16 )
  {
    case 0u:
    case 1u:
    case 2u:
      goto LABEL_54;
    default:
      break;
  }
LABEL_3:
  if ( ptr[0] != v123 )
  {
    v84 = v14;
    free(ptr[0]);
    return v84;
  }
  return v14;
}

