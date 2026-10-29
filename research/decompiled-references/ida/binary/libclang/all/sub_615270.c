__int64 __fastcall sub_615270(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int32 v6; // edx
  const __m128i *v7; // r14
  const __m128i *v8; // r13
  _QWORD *v9; // rbx
  const __m128i *v10; // rax
  __m128i v11; // xmm1
  const __m128i *v12; // r15
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int32 v17; // eax
  int v18; // edx
  __m128i v19; // xmm2
  int v20; // r12d
  __int64 v21; // rdx
  __int64 m128i_i64; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm5
  __int64 v28; // rax
  unsigned __int64 *v29; // r15
  unsigned __int64 *v30; // r12
  __int64 v31; // rdx
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int128 v36; // xmm0
  __m128i v37; // xmm4
  __int64 v38; // rcx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int8 v41; // al
  _DWORD *v42; // rax
  __m128i v43; // xmm3
  __int64 v44; // rdx
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r12
  __int64 v49; // r13
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // r15
  unsigned __int64 *v56; // r13
  __int64 *v57; // rax
  __int8 v58; // dl
  char v59; // al
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // r15
  unsigned int v63; // eax
  __int64 v64; // rax
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // r13
  bool v72; // r8
  __m128i v73; // xmm6
  unsigned __int64 v74; // rax
  __m128i v75; // xmm0
  int v76; // eax
  bool v77; // zf
  __m128i v78; // xmm7
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  const __m128i *v84; // r13
  unsigned __int64 v85; // r15
  unsigned __int16 v86; // ax
  unsigned __int64 *v87; // r12
  __int64 v88; // r15
  int v89; // edx
  int v90; // ecx
  int v91; // r8d
  int v92; // r9d
  __int64 v93; // rax
  __int64 v94; // r15
  __int64 v95; // rax
  __int64 v96; // r13
  __int64 v97; // r15
  __m128i v98; // [rsp+0h] [rbp-308h]
  __m128i v99; // [rsp+20h] [rbp-2E8h]
  __m128i v100; // [rsp+20h] [rbp-2E8h]
  __int128 v101; // [rsp+20h] [rbp-2E8h]
  __m128i v102; // [rsp+20h] [rbp-2E8h]
  __m128i v103; // [rsp+20h] [rbp-2E8h]
  __m128i v104; // [rsp+20h] [rbp-2E8h]
  __m128i v105; // [rsp+30h] [rbp-2D8h]
  __int64 v106; // [rsp+40h] [rbp-2C8h]
  int v107; // [rsp+4Ch] [rbp-2BCh]
  __m128i v108; // [rsp+50h] [rbp-2B8h] BYREF
  __m128i v109; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v110; // [rsp+70h] [rbp-298h]
  __int64 v111; // [rsp+78h] [rbp-290h]
  __int64 v112; // [rsp+80h] [rbp-288h]
  const __m128i *v113; // [rsp+88h] [rbp-280h]
  __m128i v114; // [rsp+90h] [rbp-278h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-268h]
  __m128i v116; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v117; // [rsp+C0h] [rbp-248h]
  __m128i v118; // [rsp+D0h] [rbp-238h] BYREF
  __int64 v119; // [rsp+E0h] [rbp-228h]
  __m128i v120; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v121; // [rsp+100h] [rbp-208h] BYREF
  __m128i v122; // [rsp+110h] [rbp-1F8h] BYREF
  __m128i v123; // [rsp+120h] [rbp-1E8h] BYREF
  __m128i v124; // [rsp+130h] [rbp-1D8h] BYREF
  __m128i v125; // [rsp+140h] [rbp-1C8h] BYREF
  __m128i v126; // [rsp+150h] [rbp-1B8h] BYREF
  __m128i v127; // [rsp+160h] [rbp-1A8h] BYREF
  __m128i v128; // [rsp+170h] [rbp-198h] BYREF
  __m128i v129; // [rsp+180h] [rbp-188h] BYREF
  __m128i v130; // [rsp+190h] [rbp-178h] BYREF
  __m128i v131; // [rsp+1A0h] [rbp-168h] BYREF
  __m128i v132; // [rsp+1B0h] [rbp-158h] BYREF
  __m128i v133; // [rsp+1C0h] [rbp-148h] BYREF
  __m128i v134; // [rsp+1D0h] [rbp-138h] BYREF
  __m128i v135; // [rsp+1E0h] [rbp-128h] BYREF
  __m128i v136; // [rsp+1F0h] [rbp-118h] BYREF
  __m128i v137; // [rsp+200h] [rbp-108h] BYREF
  __m128i v138; // [rsp+210h] [rbp-F8h] BYREF
  __m128i v139; // [rsp+220h] [rbp-E8h] BYREF
  __int64 v140; // [rsp+230h] [rbp-D8h] BYREF
  __m128i v141; // [rsp+238h] [rbp-D0h] BYREF
  __int64 v142; // [rsp+248h] [rbp-C0h]
  __m128i v143; // [rsp+250h] [rbp-B8h]
  __m128i v144; // [rsp+260h] [rbp-A8h]
  __m128i v145; // [rsp+270h] [rbp-98h]
  __m128i v146; // [rsp+280h] [rbp-88h]
  __m256i v147; // [rsp+290h] [rbp-78h] BYREF
  __m128i v148; // [rsp+2B0h] [rbp-58h]
  __int64 v149; // [rsp+2C0h] [rbp-48h]
  int v150; // [rsp+2C8h] [rbp-40h]

  v6 = a2->m128i_u32[2];
  if ( !v6 )
    return 0;
  v7 = (const __m128i *)(a1 + 16);
  v8 = a2;
  v9 = (_QWORD *)a1;
  while ( 2 )
  {
    v10 = (const __m128i *)(v8->m128i_i64[0] + ((unsigned __int64)v6 << 6) - 64);
    v11 = _mm_loadu_si128(v10 + 3);
    v12 = (const __m128i *)v10->m128i_i64[0];
    v13 = v10->m128i_u64[1];
    v143 = _mm_loadu_si128(v10);
    v14 = _mm_loadu_si128(v10 + 1);
    v15 = v10[3].m128i_u32[2];
    v146 = v11;
    v144 = v14;
    v16 = _mm_loadu_si128(v10 + 2);
    v17 = v144.m128i_i32[2];
    v8->m128i_i32[2] = v6 - 1;
    v18 = *((_DWORD *)v9 + 5);
    v19 = _mm_loadu_si128((const __m128i *)(v9 + 3));
    v20 = *((_DWORD *)v9 + 4);
    *(__m128i *)(v9 + 3) = v16;
    v107 = v18;
    v21 = v9[5];
    v145 = v16;
    v106 = v21;
    v108 = v19;
    v9[2] = v144.m128i_i64[1];
    m128i_i64 = (unsigned int)(v17 - 1);
    v9[5] = v11.m128i_i64[0];
    if ( (unsigned int)m128i_i64 <= 0x26 || (unsigned int)(v17 - 600) <= 4 )
    {
      v23 = _mm_loadu_si128(v7);
      v109.m128i_i64[0] = v13;
      LODWORD(v110) = v15;
      v24 = sub_63A250(a1, v13, m128i_i64, v15, a5, a6, v23.m128i_i32[0], v23.m128i_i64[1]);
      v13 = v109.m128i_i64[0];
      v15 = (unsigned int)v110;
      v9[6] = v24;
    }
    switch ( v15 )
    {
      case 0LL:
        if ( !v12 )
          goto LABEL_30;
        v72 = v13 != 0;
        LODWORD(v13) = (_DWORD)v12;
        sub_639160(&v122, v12, *v9, *(_QWORD *)((char *)v9 + 84), v72, a6);
        v101 = (__int128)_mm_load_si128(&v122);
        v36 = (__int128)_mm_load_si128(&v123);
        goto LABEL_20;
      case 1LL:
        if ( !v12 )
          goto LABEL_30;
        v13 = (unsigned __int64)v12;
        sub_639270(&v120, v12, v9[6], *v9, *(_QWORD *)((char *)v9 + 84));
        v73 = _mm_loadu_si128((const __m128i *)&v120.m128i_u64[1]);
        v15 = v121.m128i_i64[1];
        LODWORD(v110) = v120.m128i_i32[1];
        LODWORD(a1) = *((_DWORD *)v9 + 21);
        LODWORD(v112) = v120.m128i_i32[0];
        v111 = v121.m128i_i64[1];
        v147.m256i_i64[0] = v120.m128i_i64[0];
        v147.m256i_i64[3] = v121.m128i_i64[1];
        v109 = v73;
        *(__m128i *)&v147.m256i_u64[1] = v73;
        if ( (_DWORD)a1 )
        {
          v13 = *((unsigned int *)v9 + 22);
          if ( (_DWORD)v13 )
          {
            v74 = sub_5FD3D0(
                    a1,
                    v13,
                    m128i_i64,
                    v121.m128i_i32[2],
                    a5,
                    a6,
                    (__int128)_mm_load_si128((const __m128i *)&v147),
                    (__int128)_mm_load_si128((const __m128i *)&v147.m256i_u64[2]));
            if ( !(_DWORD)v74 )
              goto LABEL_30;
            m128i_i64 = HIDWORD(v74);
            if ( !HIDWORD(v74) )
              goto LABEL_30;
            v13 = (m128i_i64 << 32) | (unsigned int)v74;
            a1 = *(_QWORD *)(v9[1] + 32LL);
            if ( (unsigned int)sub_5F7DA0(a1, v13, *(_QWORD *)((char *)v9 + 84)) )
              goto LABEL_30;
          }
        }
        a1 = v9[9];
        v102 = _mm_loadu_si128((const __m128i *)v9 + 1);
        v105 = _mm_loadu_si128((const __m128i *)v9 + 2);
        v98 = _mm_load_si128(&v120);
        v75 = _mm_load_si128(&v121);
        v76 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v9[7])(
                a1,
                v13,
                m128i_i64,
                v15,
                a5,
                a6,
                v98.m128i_i64[0],
                v98.m128i_i64[1],
                v75.m128i_i64[0],
                v75.m128i_i64[1],
                v102.m128i_i64[0],
                v102.m128i_i64[1],
                v105.m128i_i64[0],
                v105.m128i_i64[1]);
        if ( !v76 )
          goto LABEL_21;
        if ( v76 == 2 )
        {
          v77 = v9[8] == 0;
          v113 = (const __m128i *)&v147;
          if ( !v77 )
          {
            v78 = _mm_load_si128(&v109);
            v150 = 15;
            v147.m256i_i64[3] = __PAIR64__(v110, v112);
            v148 = v78;
            v149 = v111;
            memset(&v147, 0, 24);
            sub_611F00((__int64)v8, (const __m128i *)&v147);
          }
          sub_639270(&v140, v12, v9[6], *v9, *(_QWORD *)((char *)v9 + 84));
          LODWORD(v13) = (_DWORD)v12;
          v79 = _mm_loadu_si128(&v141);
          LODWORD(a1) = (_DWORD)v113;
          v147.m256i_i64[0] = (__int64)v8;
          v147.m256i_i64[1] = v140;
          *(__m128i *)&v147.m256i_u64[2] = v79;
          v148.m128i_i64[0] = v142;
          sub_611FB0(v113, (__int64)v12);
        }
        goto LABEL_30;
      case 2LL:
        if ( (v12->m128i_i8[2] & 0x10) != 0 )
        {
          v13 = v12[3].m128i_u64[0];
          if ( v13 )
          {
            LODWORD(a1) = (_DWORD)v9;
            if ( (unsigned __int8)sub_61B740(v9, v13, v12[3].m128i_i64[1]) )
              goto LABEL_21;
          }
        }
        LODWORD(a1) = (_DWORD)v9;
        v38 = *(_QWORD *)(v12[1].m128i_i64[1] + 40);
        v39 = v12[2].m128i_i64[0];
        v116.m128i_i32[2] = v12[2].m128i_i32[2];
        v116.m128i_i64[0] = v38;
        v117 = v39;
        v40 = _mm_load_si128(&v116);
        if ( (unsigned __int8)sub_61B700(
                                (_DWORD)v9,
                                v13,
                                v116.m128i_i32[2],
                                v38,
                                a5,
                                a6,
                                v40.m128i_i32[0],
                                v40.m128i_i32[2],
                                v39) )
          goto LABEL_21;
        v41 = v12->m128i_i8[2];
        if ( (v41 & 0x40) == 0 )
          goto LABEL_30;
        m128i_i64 = 16LL * ((v41 & 0x10) != 0) + 8LL * ((v41 & 0x20) != 0);
        v42 = (__int32 *)((char *)v12[3].m128i_i32 + m128i_i64);
        LODWORD(v15) = *v42;
        if ( !*v42 )
          goto LABEL_30;
        v94 = (__int64)v12[4].m128i_i64 + m128i_i64;
        v95 = 32LL * (unsigned int)v42[3];
        LODWORD(m128i_i64) = v94 + v95;
        if ( v94 + v95 == v94 )
          goto LABEL_30;
        v110 = (__int64)v8;
        v96 = v94;
        v97 = v94 + v95;
        while ( 1 )
        {
          LODWORD(v13) = v96;
          LODWORD(a1) = (_DWORD)v9;
          if ( (unsigned __int8)sub_61C470(v9, v96) )
            goto LABEL_21;
          v96 += 32;
          if ( v97 == v96 )
            goto LABEL_104;
        }
      case 3LL:
        v81 = v13;
        LODWORD(a1) = (_DWORD)v9;
        LODWORD(v13) = (_DWORD)v12;
        if ( !(unsigned __int8)sub_61B330(v9, v12, v81) )
          goto LABEL_30;
        goto LABEL_21;
      case 4LL:
        v13 = v12[2].m128i_u64[1];
        m128i_i64 = v12[3].m128i_i64[0];
        if ( v13 )
        {
          LODWORD(a1) = (_DWORD)v9;
          if ( (unsigned __int8)sub_61B740(v9, v13, m128i_i64) )
            goto LABEL_21;
        }
        v80 = _mm_loadu_si128(v12 + 1);
        LODWORD(a1) = (_DWORD)v9;
        if ( (unsigned __int8)sub_61B700(
                                (_DWORD)v9,
                                v13,
                                m128i_i64,
                                v15,
                                a5,
                                a6,
                                v80.m128i_i32[0],
                                v80.m128i_i32[2],
                                v12[2].m128i_i64[0]) )
          goto LABEL_21;
        LODWORD(v13) = (_DWORD)v12;
        sub_63A170(&v128, v12, *v9);
        v101 = (__int128)_mm_load_si128(&v128);
        v36 = (__int128)_mm_load_si128(&v129);
        goto LABEL_20;
      case 5LL:
        if ( (v12->m128i_i8[2] & 8) != 0 )
        {
          v13 = v12[2].m128i_u64[0];
          if ( v13 )
          {
            LODWORD(a1) = (_DWORD)v9;
            if ( (unsigned __int8)sub_61B740(v9, v13, v12[2].m128i_i64[1]) )
              goto LABEL_21;
          }
        }
        LODWORD(m128i_i64) = v12->m128i_i32[1];
        v15 = *(_QWORD *)(v12[1].m128i_i64[0] + 40);
        v82 = v12[1].m128i_i64[1];
        v118.m128i_i32[2] = m128i_i64;
        v118.m128i_i64[0] = v15;
        v119 = v82;
        v103 = _mm_load_si128(&v118);
LABEL_96:
        LODWORD(a1) = (_DWORD)v9;
        if ( !(unsigned __int8)sub_61B700(
                                 (_DWORD)v9,
                                 v13,
                                 m128i_i64,
                                 v15,
                                 a5,
                                 a6,
                                 v103.m128i_i32[0],
                                 v103.m128i_i32[2],
                                 v82) )
          goto LABEL_30;
        goto LABEL_21;
      case 6LL:
        if ( !v12[3].m128i_i64[0] )
          goto LABEL_30;
        v31 = (unsigned int)v13;
        v13 = v12[3].m128i_u64[0];
        sub_63A120(&v124, v13, v31, *v9);
        v101 = (__int128)_mm_load_si128(&v124);
        v36 = (__int128)_mm_load_si128(&v125);
        goto LABEL_20;
      case 7LL:
        if ( (const __m128i *)v13 == v12 )
          goto LABEL_30;
        v110 = (__int64)v8;
        v84 = v12;
        v85 = v13;
        do
        {
          LODWORD(v13) = (_DWORD)v84;
          LODWORD(a1) = (_DWORD)v9;
          if ( (unsigned __int8)sub_61C470(v9, v84) )
            goto LABEL_21;
          v84 += 2;
        }
        while ( (const __m128i *)v85 != v84 );
LABEL_104:
        v8 = (const __m128i *)v110;
        goto LABEL_30;
      case 8LL:
        v83 = v13;
        LODWORD(a1) = (_DWORD)v9;
        LODWORD(v13) = (_DWORD)v12;
        if ( !(unsigned __int8)sub_61B740(v9, v12, v83) )
          goto LABEL_30;
        goto LABEL_21;
      case 9LL:
        v86 = v12->m128i_i16[0] & 0x1FF;
        if ( v86 > 0xE4u || v86 == 70 )
        {
          v114 = _mm_loadu_si128(v12 + 2);
          v115 = v12[3].m128i_i64[0];
        }
        else
        {
          v93 = v12[4].m128i_i64[0];
          v114 = _mm_loadu_si128(v12 + 3);
          v115 = v93;
        }
        v82 = v115;
        v103 = _mm_load_si128(&v114);
        goto LABEL_96;
      case 10LL:
        v44 = (unsigned int)v13;
        LODWORD(v13) = (_DWORD)v12;
        sub_639E30(&v126, v12, v44, *v9);
        v101 = (__int128)_mm_load_si128(&v126);
        v36 = (__int128)_mm_load_si128(&v127);
        goto LABEL_20;
      case 11LL:
        v13 = v12[2].m128i_u64[0];
        v45 = *(_BYTE *)(v13 + 28) & 0x7F;
        if ( v45 == 65 )
        {
          sub_639CF0(&v130, v13, v12[1].m128i_u32[1], *v9);
          v101 = (__int128)_mm_load_si128(&v130);
          v36 = (__int128)_mm_load_si128(&v131);
        }
        else
        {
          if ( v45 != 66 )
            goto LABEL_30;
          sub_639D40(&v132, v13, v12[1].m128i_u32[1], *v9);
          v101 = (__int128)_mm_load_si128(&v132);
          v36 = (__int128)_mm_load_si128(&v133);
        }
LABEL_20:
        LODWORD(a1) = (_DWORD)v9;
        if ( (unsigned __int8)sub_619180((_DWORD)v9, v13, v32, v33, v34, v35, v101, v36) )
          goto LABEL_21;
LABEL_30:
        v43 = _mm_load_si128(&v108);
        *((_DWORD *)v9 + 4) = v20;
        *((_DWORD *)v9 + 5) = v107;
        *(__m128i *)(v9 + 3) = v43;
        goto LABEL_9;
      case 12LL:
        v110 = sub_8C57B0(v12, v13);
        v46 = sub_8C5820(v12);
        v47 = v110;
        if ( v110 == v46 )
          goto LABEL_42;
        LODWORD(v110) = v20;
        v48 = v47;
        v109.m128i_i64[0] = (__int64)v12;
        v111 = (__int64)v8;
        v49 = v46;
        do
        {
          v13 = *(_QWORD *)v48 & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)v48 > 7u && ((*(_BYTE *)(v13 + 28) + 90) & 0x7Fu) <= 6 )
          {
            sub_639DE0(&v134, v13, *(unsigned int *)(v48 + 8), *v9);
            LODWORD(a1) = (_DWORD)v9;
            if ( (unsigned __int8)sub_619180(
                                    (_DWORD)v9,
                                    v13,
                                    v50,
                                    v51,
                                    v52,
                                    v53,
                                    (__int128)_mm_load_si128(&v134),
                                    (__int128)_mm_load_si128(&v135)) )
            {
LABEL_115:
              v20 = v110;
              goto LABEL_21;
            }
          }
          v48 += 16;
        }
        while ( v49 != v48 );
        v20 = v110;
        v12 = (const __m128i *)v109.m128i_i64[0];
        v8 = (const __m128i *)v111;
LABEL_42:
        m128i_i64 = (__int64)v12[2].m128i_i64;
        v54 = v12->m128i_u16[2];
        v15 = (__int64)&v12[2].m128i_i64[v54];
        if ( v54 * 8 )
        {
          v110 = (__int64)v12;
          v55 = (__int64)&v12[2].m128i_i64[v54];
          v109.m128i_i64[0] = (__int64)v8;
          v56 = (unsigned __int64 *)m128i_i64;
          do
          {
            v13 = *v56;
            if ( *v56 )
            {
              LODWORD(a1) = (_DWORD)v9;
              if ( (unsigned __int8)sub_6160A0(v9, v13, m128i_i64, v15) )
                goto LABEL_21;
            }
            ++v56;
          }
          while ( (unsigned __int64 *)v55 != v56 );
          v12 = (const __m128i *)v110;
          v8 = (const __m128i *)v109.m128i_i64[0];
        }
        LODWORD(a1) = (_DWORD)v12;
        m128i_i64 = *(_QWORD *)(sub_8C58D0(v12, v13, m128i_i64, v15) + 56);
        v57 = (__int64 *)(m128i_i64 & 0xFFFFFFFFFFFFFFF8LL);
        LODWORD(m128i_i64) = m128i_i64 & 4;
        if ( (_DWORD)m128i_i64 )
          v57 = (__int64 *)v57[4];
        v15 = *v57;
        if ( (*v57 & 7) != 0 )
          goto LABEL_8;
        if ( (v15 & 8) != 0 )
          goto LABEL_8;
        m128i_i64 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(m128i_i64 + 16) != 26 || !v15 )
          goto LABEL_8;
        v58 = v12->m128i_i8[2];
        a1 = (__int64)(v57 + 1);
        if ( (v58 & 0x20) == 0 )
          goto LABEL_55;
        if ( *(_BYTE *)(v15 + 16) == 25 )
        {
          LODWORD(m128i_i64) = v58 & 0x40;
          if ( (_DWORD)m128i_i64 )
          {
            v61 = 16;
            goto LABEL_59;
          }
LABEL_8:
          v26 = _mm_load_si128(&v108);
          *((_DWORD *)v9 + 4) = v20;
          *((_DWORD *)v9 + 5) = v107;
          *(__m128i *)(v9 + 3) = v26;
LABEL_9:
          v9[5] = v106;
          if ( (unsigned int)(v20 - 1) <= 0x26 || (unsigned int)(v20 - 600) <= 4 )
          {
            v100 = _mm_loadu_si128(v7);
            v9[6] = sub_63A250(a1, v13, m128i_i64, v15, a5, a6, v100.m128i_i32[0], v100.m128i_i64[1]);
          }
          v6 = v8->m128i_u32[2];
          if ( !v6 )
            return 0;
          continue;
        }
        LODWORD(v13) = (unsigned __int16)(*(_DWORD *)(v15 + 20) >> 6);
        if ( (unsigned __int16)(*(_DWORD *)(v15 + 20) >> 6) )
        {
          LODWORD(v110) = v20;
          v109.m128i_i64[0] = (__int64)v12;
          v87 = (unsigned __int64 *)(v57 + 3);
          v113 = v8;
          v88 = (__int64)&v57[(unsigned int)(v13 - 1) + 4];
          v111 = (__int64)(v57 + 1);
          v112 = v15;
          do
          {
            v13 = *v87;
            sub_639160(&v136, *v87, *v9, 0, 1, a6);
            LODWORD(a1) = (_DWORD)v9;
            if ( (unsigned __int8)sub_619180(
                                    (_DWORD)v9,
                                    v13,
                                    v89,
                                    v90,
                                    v91,
                                    v92,
                                    (__int128)_mm_load_si128(&v136),
                                    (__int128)_mm_load_si128(&v137)) )
              goto LABEL_115;
            ++v87;
          }
          while ( v87 != (unsigned __int64 *)v88 );
          v20 = v110;
          a1 = v111;
          v15 = v112;
          v8 = v113;
          v58 = *(_BYTE *)(v109.m128i_i64[0] + 2);
        }
LABEL_55:
        LODWORD(m128i_i64) = v58 & 0x40;
        if ( !(_DWORD)m128i_i64 )
          goto LABEL_8;
        v59 = *(_BYTE *)(v15 + 16);
        if ( v59 == 26 )
        {
          v60 = 8 * ((*(_WORD *)(v15 + 22) & 0x3C0) != 0) + 15;
          goto LABEL_58;
        }
        v61 = 16;
        if ( v59 != 25 )
        {
          v60 = 15;
LABEL_58:
          v61 = 8 * ((v60 + ((*(_DWORD *)(v15 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
        }
LABEL_59:
        v62 = a1 + v61;
        a1 = *(_QWORD *)(v15 + 24);
        v110 = v15;
        v63 = sub_B1AFD0(a1);
        LODWORD(a1) = (_DWORD)v9;
        v13 = *(_QWORD *)(v110 + 24);
        if ( !(unsigned __int8)sub_61B330(v9, v13, v63 * ((v62 != 0) + (v62 - (unsigned __int64)(v62 != 0)) / v63)) )
          goto LABEL_8;
LABEL_21:
        v37 = _mm_load_si128(&v108);
        *((_DWORD *)v9 + 4) = v20;
        *((_DWORD *)v9 + 5) = v107;
        *(__m128i *)(v9 + 3) = v37;
        v9[5] = v106;
        if ( (unsigned int)(v20 - 1) <= 0x26 || (LODWORD(a6) = v20 - 600, (unsigned int)(v20 - 600) <= 4) )
        {
          v104 = _mm_loadu_si128((const __m128i *)v9 + 1);
          v9[6] = sub_63A250(a1, v13, m128i_i64, v15, a5, a6, v104.m128i_i32[0], v104.m128i_i64[1]);
        }
        return 1;
      case 13LL:
        v64 = v12[1].m128i_i64[0];
        v13 = *(_QWORD *)v64;
        m128i_i64 = *(_QWORD *)(v64 + 8);
        if ( !*(_QWORD *)v64 )
          goto LABEL_64;
        LODWORD(a1) = (_DWORD)v9;
        if ( (unsigned __int8)sub_61B740(v9, v13, m128i_i64) )
          goto LABEL_21;
        v64 = v12[1].m128i_i64[0];
LABEL_64:
        v13 = *(_QWORD *)(v64 + 56);
        if ( !v13 )
          goto LABEL_67;
        sub_639D40(&v138, v13, *(unsigned int *)(v64 + 32), *v9);
        LODWORD(a1) = (_DWORD)v9;
        if ( (unsigned __int8)sub_619180(
                                (_DWORD)v9,
                                v13,
                                v65,
                                v66,
                                v67,
                                v68,
                                (__int128)_mm_load_si128(&v138),
                                (__int128)_mm_load_si128(&v139)) )
          goto LABEL_21;
        v64 = v12[1].m128i_i64[0];
LABEL_67:
        v69 = *(_QWORD *)(v64 + 64);
        if ( !v69 )
          goto LABEL_8;
        LODWORD(m128i_i64) = v69 + 16;
        v15 = v69 + 16 + 32LL * *(unsigned int *)(v69 + 8);
        if ( v15 == v69 + 16 )
          goto LABEL_8;
        v110 = (__int64)v8;
        v70 = v15;
        v71 = v69 + 16;
        do
        {
          LODWORD(v13) = v71;
          LODWORD(a1) = (_DWORD)v9;
          if ( (unsigned __int8)sub_61C470(v9, v71) )
            goto LABEL_21;
          v71 += 32;
        }
        while ( v70 != v71 );
        v8 = (const __m128i *)v110;
        goto LABEL_8;
      case 14LL:
        m128i_i64 = (__int64)&v12[3].m128i_i64[v12[1].m128i_u32[0]];
        v28 = m128i_i64 + 8LL * v12[1].m128i_u32[1];
        if ( v28 != m128i_i64 )
        {
          LODWORD(v110) = v20;
          v29 = (unsigned __int64 *)v28;
          v30 = (unsigned __int64 *)m128i_i64;
          do
          {
            v13 = *v30;
            LODWORD(a1) = (_DWORD)v9;
            ++v30;
            sub_61D7D0(v9, v13);
          }
          while ( v29 != v30 );
          v20 = v110;
        }
        goto LABEL_8;
      case 15LL:
        a1 = v9[9];
        v99 = _mm_loadu_si128((const __m128i *)v9 + 1);
        v25 = _mm_loadu_si128((const __m128i *)v9 + 2);
        if ( !((unsigned __int8 (__fastcall *)(__int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v9[8])(
                a1,
                v13,
                m128i_i64,
                v15,
                a5,
                a6,
                v99.m128i_i64[0],
                v99.m128i_i64[1],
                v25.m128i_i64[0],
                v25.m128i_i64[1]) )
          goto LABEL_8;
        goto LABEL_21;
      default:
        goto LABEL_8;
    }
  }
}

