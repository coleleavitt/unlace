__int64 __fastcall sub_31A4A0(__int64 **a1, double a2, double a3, __m128 a4)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  unsigned int v6; // r15d
  _QWORD *v7; // rax
  const __m128i *v8; // rbp
  const __m128i *v9; // r13
  __m128i *v10; // rbx
  __int32 v11; // eax
  __int32 v12; // eax
  void *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  const __m128i *v17; // rbx
  __int32 v18; // eax
  __int8 v19; // dl
  __int8 *v20; // r14
  __m128i v21; // xmm0
  __int8 v22; // dl
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // eax
  int v26; // edx
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // cl
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rax
  char v34; // cl
  char *v35; // r15
  char *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  bool v41; // zf
  unsigned int v42; // eax
  unsigned int v43; // r15d
  __int64 *v44; // rbx
  __int64 v45; // r14
  int v46; // r10d
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 *v50; // rax
  __int32 v51; // r9d
  char v52; // di
  int v53; // r12d
  char v54; // si
  __int64 v55; // rdx
  __int64 v56; // rdx
  char v57; // r8
  char v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  char v61; // r8
  char v62; // r11
  char v63; // r8
  __int64 v64; // rdx
  char v65; // di
  __int64 v66; // rdx
  void *v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 *v70; // r14
  __int64 *v71; // rbx
  __int64 *v72; // rdx
  int v73; // eax
  void *v74; // r13
  __int64 *v75; // rbx
  void *v76; // r13
  void *v77; // rdi
  char v78; // al
  bool v79; // r15
  void *v80; // r13
  __int64 *v81; // rcx
  int v82; // eax
  __int32 v83; // eax
  void *v84; // r13
  void *v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdi
  int v89; // eax
  void *v90; // r14
  __int64 v91; // rax
  char v92; // si
  char v93; // dl
  __int32 v94; // edx
  __int64 v95; // rax
  __int64 v96; // rdx
  char v97; // cl
  __int64 v98; // rsi
  __int64 v99; // rdi
  int v100; // eax
  int v101; // eax
  unsigned int v102; // r13d
  void *v103; // rbx
  __int64 v104; // rax
  __int64 *v105; // rbx
  __int64 *v106; // rbp
  void *v107; // r14
  __int64 v108; // rsi
  __int64 v109; // rdi
  int v111; // eax
  void *v112; // rbx
  void *v113; // [rsp+8h] [rbp-E0h]
  __int64 *v114; // [rsp+8h] [rbp-E0h]
  __int64 *v115; // [rsp+10h] [rbp-D8h]
  _QWORD *v116; // [rsp+18h] [rbp-D0h]
  unsigned int v117; // [rsp+20h] [rbp-C8h]
  __int64 *v118; // [rsp+20h] [rbp-C8h]
  _QWORD v119[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v120[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int32 v121; // [rsp+50h] [rbp-98h] BYREF
  char v122; // [rsp+54h] [rbp-94h]
  __int64 v123; // [rsp+58h] [rbp-90h]
  int v124; // [rsp+60h] [rbp-88h] BYREF
  char v125; // [rsp+64h] [rbp-84h]
  __int64 v126; // [rsp+68h] [rbp-80h]
  __m128i v127; // [rsp+70h] [rbp-78h] BYREF
  __int64 v128; // [rsp+80h] [rbp-68h] BYREF
  __int64 v129; // [rsp+88h] [rbp-60h]
  __int32 v130; // [rsp+90h] [rbp-58h] BYREF
  char v131; // [rsp+94h] [rbp-54h]
  __int64 v132; // [rsp+98h] [rbp-50h]
  __int32 v133; // [rsp+A0h] [rbp-48h]

  v115 = *a1;
  if ( !*a1 )
    goto LABEL_34;
  v4 = _mm_loadl_epi64((const __m128i *)(*a1 - 1));
  v5 = _mm_shuffle_epi32(v4, 229);
  v6 = _mm_cvtsi128_si32(v5);
  v7 = (_QWORD *)sub_186B270(56LL * (unsigned int)_mm_cvtsi128_si32(v4) + 8);
  v8 = (const __m128i *)*a1;
  v116 = v7;
  v115 = v7 + 1;
  *v7 = v4.m128i_i64[0];
  if ( v8 )
  {
    v9 = (const __m128i *)((char *)v8 + 56 * v8[-1].m128i_u32[3]);
    if ( v9 != v8 )
    {
      v10 = (__m128i *)(v7 + 1);
      while ( 1 )
      {
        v4 = _mm_loadu_si128(v8);
        *v10 = v4;
        if ( v4.m128i_i64[0] )
          ++*(_DWORD *)(v4.m128i_i64[0] + 8);
        v10[1].m128i_i8[4] &= 0xFCu;
        v13 = qword_1C7F2C0;
        v10[2].m128i_i8[4] &= 0xFCu;
        v10[1].m128i_i32[0] = 0;
        v10[1].m128i_i64[1] = 0;
        v10[2].m128i_i32[0] = 1;
        v10[2].m128i_i64[1] = 0;
        if ( (v8[1].m128i_i8[4] & 1) != 0 )
        {
          sub_182C690(v13, &v10[1], &v8[1]);
          if ( (v8[2].m128i_i8[4] & 1) != 0 )
          {
LABEL_12:
            sub_182C690(v13, &v10[2], &v8[2]);
            goto LABEL_7;
          }
        }
        else
        {
          v10[1].m128i_i32[0] = v8[1].m128i_i32[0];
          if ( (v8[2].m128i_i8[4] & 1) != 0 )
            goto LABEL_12;
        }
        v11 = v8[2].m128i_i32[0];
        v10[2].m128i_i8[4] &= ~1u;
        v10[2].m128i_i32[0] = v11;
LABEL_7:
        v12 = v8[3].m128i_i32[0];
        v8 = (const __m128i *)((char *)v8 + 56);
        v10 = (__m128i *)((char *)v10 + 56);
        v10[-1].m128i_i32[2] = v12;
        if ( v9 == v8 )
        {
          v6 = *((_DWORD *)v116 + 1);
          break;
        }
      }
    }
  }
  v14 = 7LL * v6;
  v15 = (__int64)&v115[v14];
  if ( v115 == &v115[v14] )
    goto LABEL_28;
  _BitScanReverse64(&v16, 0x6DB6DB6DB6DB6DB7LL * ((v14 * 8) >> 3));
  sub_317B40(v115, (__m128i *)&v115[v14], 2LL * (int)v16, *(double *)v4.m128i_i64, (__m128)v5, a4);
  if ( (unsigned __int64)v14 <= 112 )
  {
    sub_3173D0((__int64)v115, v15, *(double *)v4.m128i_i64, (__m128)v5);
    goto LABEL_27;
  }
  v17 = (const __m128i *)(v116 + 113);
  sub_3173D0((__int64)v115, (__int64)(v116 + 113), *(double *)v4.m128i_i64, (__m128)v5);
  do
  {
    v18 = v17[1].m128i_i32[0];
    v19 = v17[1].m128i_i8[4];
    v20 = &v17[-4].m128i_i8[8];
    v21 = _mm_loadu_si128(v17);
    v17->m128i_i64[0] = 0;
    LODWORD(v128) = v18;
    v127 = v21;
    LOBYTE(v18) = v19 & 3 | BYTE4(v128) & 0xFC;
    v22 = v17[2].m128i_i8[4];
    BYTE4(v128) = v18;
    v23 = v17[1].m128i_i64[1];
    v17[1].m128i_i64[1] = 0;
    v129 = v23;
    v130 = v17[2].m128i_i32[0];
    v131 = v22 & 3 | v131 & 0xFC;
    v24 = v17[2].m128i_i64[1];
    v17[2].m128i_i64[1] = 0;
    v132 = v24;
    v133 = v17[3].m128i_i32[0];
    while ( 1 )
    {
      v35 = v20 + 56;
      v36 = v20 + 16;
      if ( (v131 & 1) != 0 || v130 != 1 || (v20[36] & 1) != 0 || *((_DWORD *)v20 + 8) != 1 )
      {
        LOBYTE(v37) = sub_1848D40(qword_1C7F2C0, &v128, v36);
        goto LABEL_22;
      }
      if ( (v128 & 0x100000000LL) == 0 && (v20[20] & 1) == 0 )
        break;
      v37 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v128, v36) >> 31;
LABEL_22:
      if ( !(_BYTE)v37 )
        goto LABEL_75;
LABEL_23:
      v38 = *((_QWORD *)v20 + 7);
      v39 = *(_QWORD *)v20;
      *(_QWORD *)v20 = v38;
      *((_QWORD *)v20 + 7) = v39;
      if ( v38 )
      {
        v40 = *((_QWORD *)v20 + 1);
        v41 = (*(_DWORD *)(v38 + 8))-- == 1;
        if ( v41 )
          sub_15D7BC0(v40, v38);
      }
      v25 = *((_DWORD *)v20 + 18);
      v26 = *((_DWORD *)v20 + 4);
      v20 -= 56;
      *((_QWORD *)v20 + 7) = 0;
      v27 = v20[76];
      *((_DWORD *)v20 + 32) = v26;
      v28 = *((_QWORD *)v20 + 10);
      *((_DWORD *)v20 + 18) = v25;
      v29 = *((_QWORD *)v20 + 17);
      *((_QWORD *)v20 + 17) = v28;
      *((_QWORD *)v20 + 10) = v29;
      LOBYTE(v28) = v35[20];
      v35[20] = v27 & 2 | v28 & 0xFD;
      LOBYTE(v29) = v28 & 2 | v20[76] & 0xFD;
      v20[76] = v29;
      v30 = v35[20];
      v35[20] = v29 & 1 | v30 & 0xFE;
      LODWORD(v28) = *((_DWORD *)v20 + 22);
      LOBYTE(v29) = v30 & 1 | v20[76] & 0xFE;
      v31 = v20[92];
      v20[76] = v29;
      LODWORD(v29) = *((_DWORD *)v20 + 36);
      *((_DWORD *)v20 + 36) = v28;
      v32 = *((_QWORD *)v20 + 12);
      *((_DWORD *)v20 + 22) = v29;
      v33 = *((_QWORD *)v20 + 19);
      *((_QWORD *)v20 + 19) = v32;
      *((_QWORD *)v20 + 12) = v33;
      LOBYTE(v32) = v35[36];
      v35[36] = v31 & 2 | v32 & 0xFD;
      LOBYTE(v33) = v32 & 2 | v20[92] & 0xFD;
      v20[92] = v33;
      v34 = v35[36] & 1;
      v35[36] = v33 & 1 | v35[36] & 0xFE;
      v20[92] = v34 | v20[92] & 0xFE;
      *((_DWORD *)v20 + 40) = *((_DWORD *)v20 + 26);
    }
    if ( (int)v128 < *((_DWORD *)v20 + 4) )
      goto LABEL_23;
LABEL_75:
    v87 = v127.m128i_i64[0];
    v127.m128i_i64[0] = *(_QWORD *)v35;
    v86 = v127.m128i_i64[0];
    *(_QWORD *)v35 = v87;
    if ( v86 )
    {
      v88 = v127.m128i_i64[1];
      v41 = (*(_DWORD *)(v86 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v88, v86);
    }
    v89 = *((_DWORD *)v20 + 18);
    v127.m128i_i64[0] = 0;
    v90 = qword_1C7F2C0;
    *((_DWORD *)v35 + 4) = v128;
    LODWORD(v128) = v89;
    v91 = *((_QWORD *)v35 + 3);
    *((_QWORD *)v35 + 3) = v129;
    v129 = v91;
    v92 = v35[20];
    LOBYTE(v91) = v92 & 2;
    v92 &= ~2u;
    v93 = v92 & 0xFE | BYTE4(v128) & 2 | BYTE4(v128) & 1;
    BYTE4(v128) = v92 & 1 | BYTE4(v128) & 0xFC | v91 & 0xFE;
    LODWORD(v91) = *((_DWORD *)v35 + 8);
    v35[20] = v93;
    v94 = v130;
    v130 = v91;
    v95 = *((_QWORD *)v35 + 5);
    *((_DWORD *)v35 + 8) = v94;
    v96 = v132;
    v132 = v95;
    LOBYTE(v95) = v35[36];
    *((_QWORD *)v35 + 5) = v96;
    LOBYTE(v96) = v131 & 1;
    v97 = v95 & 0xFC | v131 & 2;
    v131 = v95 & 1 | v131 & 0xFC | v95 & 2;
    LODWORD(v95) = v133;
    v35[36] = v97 | v96;
    *((_DWORD *)v35 + 12) = v95;
    sub_182CBA0(v90, &v128);
    sub_182CBA0(v90, &v130);
    v98 = v127.m128i_i64[0];
    if ( v127.m128i_i64[0] )
    {
      v99 = v127.m128i_i64[1];
      v41 = (*(_DWORD *)(v127.m128i_i64[0] + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v99, v98);
    }
    v17 = (const __m128i *)((char *)v17 + 56);
  }
  while ( v17 != (const __m128i *)v15 );
LABEL_27:
  v6 = *((_DWORD *)v116 + 1);
LABEL_28:
  v42 = v6 >> 1;
  if ( v6 >> 1 )
  {
    v43 = v6 - 1;
    v44 = v115;
    v117 = v43 - v42;
    do
    {
      while ( 1 )
      {
        v45 = *v44;
        *v44 = 0;
        v46 = *((_DWORD *)v44 + 4);
        v47 = v44[3];
        v44[3] = 0;
        v48 = v44[1];
        v49 = v44[5];
        v44[5] = 0;
        v50 = &v115[7 * v43];
        v51 = *((_DWORD *)v44 + 12);
        v52 = *((_BYTE *)v44 + 20);
        v53 = *((_DWORD *)v44 + 8);
        v54 = *((_BYTE *)v44 + 36);
        v127.m128i_i64[1] = v48;
        v55 = *v50;
        v133 = v51;
        *v44 = v55;
        *((_DWORD *)v44 + 4) = *((_DWORD *)v50 + 4);
        v56 = v50[3];
        *((_DWORD *)v50 + 4) = v46;
        v44[3] = v56;
        v57 = *((_BYTE *)v50 + 20);
        v50[3] = 0;
        LOBYTE(v56) = *((_BYTE *)v44 + 20);
        *((_BYTE *)v44 + 20) = v57 & 2 | v56 & 0xFD;
        LOBYTE(v56) = v56 & 2 | *((_BYTE *)v50 + 20) & 0xFD;
        *((_BYTE *)v50 + 20) = v56;
        v58 = *((_BYTE *)v44 + 20);
        *((_BYTE *)v44 + 20) = v56 & 1 | v58 & 0xFE;
        *((_BYTE *)v50 + 20) = v58 & 1 | *((_BYTE *)v50 + 20) & 0xFE;
        LODWORD(v56) = *((_DWORD *)v44 + 8);
        v127.m128i_i64[0] = 0;
        *((_DWORD *)v44 + 8) = *((_DWORD *)v50 + 8);
        v59 = v50[5];
        *((_DWORD *)v50 + 8) = v56;
        v60 = v44[5];
        v44[5] = v59;
        v61 = *((_BYTE *)v50 + 36);
        v50[5] = v60;
        LOBYTE(v59) = *((_BYTE *)v44 + 36);
        LOBYTE(v60) = v61 & 2 | v59 & 0xFD;
        *((_BYTE *)v44 + 36) = v60;
        v62 = v59 & 1;
        v63 = BYTE4(v128);
        *((_BYTE *)v44 + 36) = *((_BYTE *)v50 + 36) & 1 | v60 & 0xFE;
        *((_DWORD *)v44 + 12) = *((_DWORD *)v50 + 12);
        LODWORD(v60) = *((_DWORD *)v50 + 4);
        *((_DWORD *)v50 + 4) = v46;
        LODWORD(v128) = v60;
        v64 = v50[3];
        *v50 = v45;
        v129 = v64;
        LOBYTE(v64) = *((_BYTE *)v50 + 20);
        v50[3] = v47;
        LOBYTE(v46) = v64;
        BYTE4(v128) = v63 & 0xFC | v64 & 3;
        LODWORD(v64) = *((_DWORD *)v50 + 8);
        *((_BYTE *)v50 + 20) = v52 & 3 | v46 & 0xFC;
        v65 = v59 & 2;
        v130 = v64;
        v66 = v50[5];
        *((_DWORD *)v50 + 8) = v53;
        v50[5] = v49;
        v132 = v66;
        LOBYTE(v66) = *((_BYTE *)v50 + 36);
        *((_DWORD *)v50 + 12) = v51;
        LOBYTE(v59) = v131 & 0xFC;
        *((_BYTE *)v50 + 36) = v66 & 0xFC | v54 & 3;
        v67 = qword_1C7F2C0;
        v131 = v62 | v65 | v59;
        sub_182CBA0(qword_1C7F2C0, &v128);
        sub_182CBA0(v67, &v130);
        v68 = v127.m128i_i64[0];
        if ( v127.m128i_i64[0] )
        {
          v69 = v127.m128i_i64[1];
          v41 = (*(_DWORD *)(v127.m128i_i64[0] + 8))-- == 1;
          if ( v41 )
            break;
        }
        --v43;
        v44 += 7;
        if ( v117 == v43 )
          goto LABEL_34;
      }
      sub_15D7BC0(v69, v68);
      --v43;
      v44 += 7;
    }
    while ( v117 != v43 );
  }
LABEL_34:
  v119[0] = 0;
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v120);
  BYTE4(v120[0]) &= ~1u;
  LODWORD(v120[0]) = 1;
  if ( !v115 )
  {
    v112 = qword_1C7F2C0;
    v102 = 1;
    sub_182CBA0(qword_1C7F2C0, v119);
    sub_182CBA0(v112, v120);
    return v102;
  }
  v70 = &v115[7 * *((unsigned int *)v115 - 1)];
  if ( v70 == v115 )
  {
LABEL_107:
    v102 = 1;
    goto LABEL_122;
  }
  v71 = v115;
  while ( 2 )
  {
    while ( 2 )
    {
      v73 = *((_DWORD *)v71 + 4);
      v74 = qword_1C7F2C0;
      if ( v73 )
      {
        v72 = v71 + 2;
        if ( LODWORD(v119[0]) )
        {
          if ( (v120[0] & 0x100000000LL) != 0
            || LODWORD(v120[0]) != 1
            || (*((_BYTE *)v71 + 36) & 1) != 0
            || *((_DWORD *)v71 + 8) != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v119, v72, v119);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v119, v72, v119);
            sub_182CBA0(v74, v120);
            BYTE4(v120[0]) &= ~1u;
            LODWORD(v120[0]) = 1;
          }
        }
        else
        {
          if ( (*((_BYTE *)v71 + 20) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, v119, v72);
          }
          else
          {
            BYTE4(v119[0]) &= ~1u;
            LODWORD(v119[0]) = v73;
          }
          if ( (*((_BYTE *)v71 + 36) & 1) != 0 )
          {
            sub_182C690(v74, v120, v71 + 4);
          }
          else
          {
            v100 = *((_DWORD *)v71 + 8);
            BYTE4(v120[0]) &= ~1u;
            LODWORD(v120[0]) = v100;
          }
        }
LABEL_41:
        v71 += 7;
        if ( v70 == v71 )
          goto LABEL_47;
        continue;
      }
      break;
    }
    if ( (v119[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v119, v119);
    else
      BYTE4(v119[0]) &= ~1u;
    if ( (v120[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v74, v120, v120);
      goto LABEL_41;
    }
    v71 += 7;
    BYTE4(v120[0]) &= ~1u;
    if ( v70 != v71 )
      continue;
    break;
  }
LABEL_47:
  v118 = &v115[7 * *((unsigned int *)v115 - 1)];
  if ( v118 == v115 )
    goto LABEL_107;
  v75 = v115;
  while ( 1 )
  {
    v127 = 0u;
    v80 = qword_1C7F2C0;
    v128 = 1;
    v129 = 0;
    if ( (*((_BYTE *)v75 + 20) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v127, v75 + 2);
    else
      v127.m128i_i32[0] = *((_DWORD *)v75 + 4);
    v81 = v75 + 4;
    if ( (*((_BYTE *)v75 + 36) & 1) != 0 )
    {
      sub_182C690(v80, &v128, v75 + 4);
      v81 = v75 + 4;
    }
    else
    {
      v82 = *((_DWORD *)v75 + 8);
      BYTE4(v128) &= ~1u;
      LODWORD(v128) = v82;
    }
    v83 = *((_DWORD *)v75 + 4);
    v84 = qword_1C7F2C0;
    if ( v83 )
    {
      if ( v127.m128i_i32[0] )
      {
        if ( (v128 & 0x100000000LL) != 0
          || (_DWORD)v128 != 1
          || (*((_BYTE *)v75 + 36) & 1) != 0
          || *((_DWORD *)v75 + 8) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, &v127, v75 + 2, &v127);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, &v127, v75 + 2, &v127);
          sub_182CBA0(v84, &v128);
          BYTE4(v128) &= ~1u;
          LODWORD(v128) = 1;
        }
      }
      else
      {
        if ( (*((_BYTE *)v75 + 20) & 1) != 0 )
        {
          v114 = v81;
          sub_182C690(qword_1C7F2C0, &v127, v75 + 2);
          v81 = v114;
        }
        else
        {
          v127.m128i_i8[4] &= ~1u;
          v127.m128i_i32[0] = v83;
        }
        if ( (*((_BYTE *)v75 + 36) & 1) != 0 )
        {
          sub_182C690(v84, &v128, v81);
        }
        else
        {
          v101 = *((_DWORD *)v75 + 8);
          BYTE4(v128) &= ~1u;
          LODWORD(v128) = v101;
        }
      }
    }
    else
    {
      if ( (v127.m128i_i8[4] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v127, &v127);
      else
        v127.m128i_i8[4] &= ~1u;
      if ( (v128 & 0x100000000LL) != 0 )
        sub_182C690(v84, &v128, &v128);
      else
        BYTE4(v128) &= ~1u;
    }
    v122 &= 0xFCu;
    v85 = qword_1C7F2C0;
    v125 &= 0xFCu;
    v121 = 0;
    v123 = 0;
    v124 = 1;
    v126 = 0;
    if ( (v127.m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v121, &v127);
      if ( (v128 & 0x100000000LL) != 0 )
      {
LABEL_69:
        sub_182C690(v85, &v124, &v128);
        goto LABEL_51;
      }
    }
    else
    {
      v121 = v127.m128i_i32[0];
      if ( (v128 & 0x100000000LL) != 0 )
        goto LABEL_69;
    }
    v125 &= ~1u;
    v124 = v128;
LABEL_51:
    v76 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v127);
    sub_182CBA0(v76, &v128);
    v77 = qword_1C7F2C0;
    if ( (v125 & 1) != 0 || v124 != 1 || (v120[0] & 0x100000000LL) != 0 || LODWORD(v120[0]) != 1 )
    {
      v78 = sub_1848D40(qword_1C7F2C0, &v121, v119);
      v77 = qword_1C7F2C0;
      v79 = v78;
    }
    else if ( (v122 & 1) != 0 || (v119[0] & 0x100000000LL) != 0 )
    {
      v111 = sub_182C7B0(qword_1C7F2C0, &v121, v119);
      v77 = qword_1C7F2C0;
      v79 = v111 < 0;
    }
    else
    {
      v79 = v121 < SLODWORD(v119[0]);
    }
    sub_182CBA0(v77, &v121);
    sub_182CBA0(v77, &v124);
    if ( v79 )
      break;
    if ( (v120[0] & 0x100000000LL) != 0
      || LODWORD(v120[0]) != 1
      || (*((_BYTE *)v75 + 36) & 1) != 0
      || *((_DWORD *)v75 + 8) != 1 )
    {
      sub_1852000(qword_1C7F2C0, v119, v75 + 2);
      v75 += 7;
      if ( v118 == v75 )
        goto LABEL_107;
    }
    else
    {
      v113 = qword_1C7F2C0;
      sub_1832A70(qword_1C7F2C0, v119, v75 + 2);
      sub_182CBA0(v113, v120);
      BYTE4(v120[0]) &= ~1u;
      v75 += 7;
      LODWORD(v120[0]) = 1;
      if ( v118 == v75 )
        goto LABEL_107;
    }
  }
  v102 = 0;
LABEL_122:
  v103 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v119);
  sub_182CBA0(v103, v120);
  v104 = *((unsigned int *)v115 - 1);
  if ( (_DWORD)v104 )
  {
    v105 = v115;
    v106 = &v115[7 * v104];
    do
    {
      while ( 1 )
      {
        v107 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v105 + 2);
        sub_182CBA0(v107, v105 + 4);
        v108 = *v105;
        if ( *v105 )
        {
          v109 = v105[1];
          v41 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v41 )
            break;
        }
        v105 += 7;
        if ( v105 == v106 )
          goto LABEL_128;
      }
      sub_15D7BC0(v109, v108);
      v105 += 7;
    }
    while ( v105 != v106 );
  }
LABEL_128:
  sub_186B220(v115 - 1);
  return v102;
}

