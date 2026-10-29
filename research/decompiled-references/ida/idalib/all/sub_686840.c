void __fastcall __noreturn sub_686840(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        double a6,
        double a7,
        double a8)
{
  unsigned int v8; // r14d
  int v9; // r12d
  __int64 v11; // rax
  __m128 v12; // xmm0
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 segm_base; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r13
  char *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r14d
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // r9
  const __m128i *v32; // rax
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r9
  unsigned __int64 v46; // rax
  unsigned __int64 *v47; // rax
  unsigned int v48; // ecx
  char v49; // al
  double v50; // xmm2_8
  bool v51; // zf
  __m128i v52; // xmm1
  unsigned __int64 *v53; // rax
  __int64 v54; // r9
  __m128i v55; // xmm3
  __int64 v56; // rdi
  char v57; // al
  __int64 v58; // rdi
  char v59; // al
  __int64 v60; // rcx
  __int64 v61; // r8
  char merge_state; // al
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // r14
  __int64 v68; // rdi
  unsigned __int64 v69; // r14
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdx
  int v73; // r8d
  int v74; // ecx
  int v75; // eax
  __int64 v76; // rdx
  unsigned __int64 *v77; // rax
  unsigned __int64 *v78; // r14
  char v79; // al
  __int64 *v80; // r15
  unsigned __int64 v81; // rsi
  unsigned int v82; // eax
  char v83; // al
  __int64 v84; // rax
  __m128i si128; // xmm4
  __int64 v86; // rdi
  int v87; // eax
  char v88; // al
  __int64 v89; // rdi
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r14
  unsigned __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdi
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // rax
  __int64 v101; // [rsp+0h] [rbp-568h]
  int v102; // [rsp+0h] [rbp-568h]
  int v103; // [rsp+0h] [rbp-568h]
  char *v104; // [rsp+0h] [rbp-568h]
  int v105; // [rsp+0h] [rbp-568h]
  __int64 v107; // [rsp+8h] [rbp-560h]
  unsigned int v108; // [rsp+10h] [rbp-558h]
  unsigned int v109; // [rsp+14h] [rbp-554h]
  void *v110; // [rsp+18h] [rbp-550h]
  void *v111; // [rsp+18h] [rbp-550h]
  unsigned __int64 v112; // [rsp+18h] [rbp-550h]
  int v113[2]; // [rsp+18h] [rbp-550h]
  int v114[4]; // [rsp+20h] [rbp-548h] BYREF
  __int64 *v115; // [rsp+30h] [rbp-538h]
  int v116[2]; // [rsp+38h] [rbp-530h]
  __int64 v117; // [rsp+40h] [rbp-528h]
  unsigned __int64 v118; // [rsp+48h] [rbp-520h]
  int v119[4]; // [rsp+50h] [rbp-518h] BYREF
  __int64 v120[2]; // [rsp+60h] [rbp-508h]
  __m128i v121; // [rsp+70h] [rbp-4F8h]
  __m128i v122; // [rsp+80h] [rbp-4E8h]
  _BYTE v123[144]; // [rsp+90h] [rbp-4D8h] BYREF
  char v124[512]; // [rsp+120h] [rbp-448h] BYREF
  _OWORD v125[3]; // [rsp+320h] [rbp-248h] BYREF
  int v126; // [rsp+350h] [rbp-218h]
  unsigned __int64 v127; // [rsp+528h] [rbp-40h]

  v9 = a5;
  v127 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v126 = 685166;
    v125[0] = _mm_load_si128((const __m128i *)&xmmword_23A7F60);
    v125[1] = _mm_load_si128((const __m128i *)&xmmword_23A7F70);
    v125[2] = _mm_load_si128((const __m128i *)&xmmword_23A7F80);
    if ( (a5 & 8) != 0 )
    {
      if ( (a5 & 2) == 0 )
        sub_378D50();
      sub_378C70((__int64)v125);
    }
    sub_368890();
  }
  v122 = 0u;
  *(_QWORD *)&v123[136] = 0xFFFFFFFF00000000LL;
  v11 = a1[2];
  *(_OWORD *)v120 = 0;
  v121 = 0;
  v12 = (__m128)-1LL;
  *(_QWORD *)v123 = 0;
  memset(&v123[8], 255, 128);
  if ( *(_DWORD *)(v11 + 4) == -1 )
    sub_378C70((__int64)"You forgot to call set_processor_type()");
  v13 = a2;
  v108 = a5 & 8;
  if ( (a5 & 1) != 0 )
  {
    *(_OWORD *)(a2 + 56) = -1;
    *(_OWORD *)(a2 + 72) = -1;
    *(_OWORD *)(a2 + 88) = -1;
    *(_OWORD *)(a2 + 104) = -1;
    *(_OWORD *)(a2 + 120) = -1;
    *(_OWORD *)(a2 + 136) = -1;
    *(_OWORD *)(a2 + 152) = -1;
    *(_OWORD *)(a2 + 168) = -1;
  }
  v124[0] = 0;
  if ( a3 )
    qstrncpy(v124, a3, 512);
  v14 = a4;
  LOBYTE(v125[0]) = 0;
  if ( a4 )
    qstrncpy(v125, a4, 512);
  v15 = v13;
  v109 = 2 * *(_DWORD *)(a1[3] + 24);
  segm_base = get_segm_base(v13);
  v21 = *(_QWORD *)v13;
  v22 = *(char **)(v13 + 8);
  v110 = (void *)segm_base;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
  {
    if ( v21 == -1 )
      goto LABEL_11;
  }
  else
  {
    if ( HIDWORD(v21) )
    {
LABEL_11:
      v8 = 1736;
      goto LABEL_12;
    }
    if ( v22 == (char *)-1LL )
    {
      if ( *(_BYTE *)(v13 + 43) != 2 )
      {
        if ( v21 >= segm_base )
          goto LABEL_22;
        goto LABEL_81;
      }
LABEL_82:
      v15 = *a1;
      v14 = 3;
      v8 = 1501;
      if ( !sub_631C90(*a1, 3, 4, v18, v19, v20) )
        goto LABEL_12;
LABEL_20:
      if ( v21 >= (unsigned __int64)v110 )
      {
        if ( (unsigned __int64)v22 >= v21 )
        {
LABEL_22:
          v23 = a1[2];
          if ( (*(_BYTE *)(v23 + 8) & 1) == 0 )
          {
            v75 = *(_DWORD *)(v23 + 84) - *(_DWORD *)(v23 + 68);
            v23 = *(_QWORD *)(v13 + 48);
            *(_QWORD *)(v13 + 8LL * v75 + 56) = v23;
          }
          sub_50E690(*a1, *(unsigned int *)(v13 + 16), v23);
          sub_50E690(*a1, *(unsigned int *)(v13 + 24), v24);
          if ( (char *)v21 == v22 )
          {
            *(_BYTE *)(v13 + 184) = 7;
            v22 = (char *)(v21 + 1);
          }
          *(_QWORD *)v114 = v13;
          LODWORD(v117) = v9;
          v115 = a1 + 203;
          LOBYTE(v8) = v22 + 1 != nullptr;
          v116[0] = v108 >> 1;
          v25 = ((unsigned int)v9 >> 2) & v8;
          while ( 1 )
          {
            v26 = sub_505EB0((__int64)(a1 + 203), v21);
            if ( !v26 || *v26 >= (unsigned __int64)v22 )
              break;
            if ( !(_BYTE)v25 )
            {
              v13 = *(_QWORD *)v114;
              v9 = v117;
              v28 = *v26;
              goto LABEL_32;
            }
            sub_686360(a1, *v26, v22, (v108 >> 1) | 0x22, (__m128)-1LL, a7, a8);
          }
          v28 = v21 + 1;
          v13 = *(_QWORD *)v114;
          v9 = v117;
          if ( v22 != (char *)-1LL )
            v28 = (__int64)v22;
LABEL_32:
          v8 = 1501;
          if ( *(_BYTE *)(v13 + 43) > 2u )
            goto LABEL_85;
          v29 = *a1;
          *(_QWORD *)v114 = v28;
          v30 = sub_6438C0(v29);
          v31 = *(_QWORD *)v114;
          if ( v30 )
            *(_WORD *)(v13 + 44) |= 0x10u;
          *(_QWORD *)v114 = v31;
          v32 = (const __m128i *)sub_505D70((__int64)v115, v21);
          v33 = *(_QWORD *)v114;
          if ( v32 )
          {
            *(__m128i *)v120 = _mm_loadu_si128(v32);
            v121 = _mm_loadu_si128(v32 + 1);
            v122 = _mm_loadu_si128(v32 + 2);
            *(__m128i *)v123 = _mm_loadu_si128(v32 + 3);
            *(__m128i *)&v123[16] = _mm_loadu_si128(v32 + 4);
            *(__m128i *)&v123[32] = _mm_loadu_si128(v32 + 5);
            *(__m128i *)&v123[48] = _mm_loadu_si128(v32 + 6);
            *(__m128i *)&v123[64] = _mm_loadu_si128(v32 + 7);
            *(__m128i *)&v123[80] = _mm_loadu_si128(v32 + 8);
            *(__m128i *)&v123[96] = _mm_loadu_si128(v32 + 9);
            *(__m128i *)&v123[112] = _mm_loadu_si128(v32 + 10);
            v12 = (__m128)_mm_loadu_si128(v32 + 11);
            *(__m128 *)&v123[128] = v12;
            v34 = sub_510110((__int64)a1, *(unsigned __int64 *)v123);
            v35 = sub_510110((__int64)a1, *(_QWORD *)(v13 + 48));
            LOBYTE(v117) = 0;
            v33 = *(_QWORD *)v114;
            HIBYTE(v117) = 1;
            if ( v34 == v35 )
              LOBYTE(v117) = v122.m128i_i8[11] == *(_BYTE *)(v13 + 43);
          }
          else
          {
            LOBYTE(v117) = 0;
            HIBYTE(v117) = 0;
          }
          *(_QWORD *)v114 = v33;
          v36 = sub_3792E0(0x19u, v13);
          v28 = *(_QWORD *)v114;
          if ( v36 < 0 )
          {
            v8 = 1281;
LABEL_85:
            v104 = (char *)v28;
            sub_512970(*a1, *(unsigned int *)(v13 + 16), v27);
            v15 = *a1;
            v14 = *(unsigned int *)(v13 + 24);
            sub_512970(*a1, v14, v76);
            v22 = v104;
            goto LABEL_12;
          }
          v39 = a1[2];
          v40 = *(_DWORD *)(v39 + 84);
          if ( v40 != -1 )
          {
            v41 = v40 - *(_DWORD *)(v39 + 68);
            v39 = v41 + 6;
            if ( *(_QWORD *)(v13 + 8 * v41 + 56) == -1 )
              *(_QWORD *)(v13 + 8 * v39 + 8) = *(_QWORD *)(v13 + 48);
          }
          sub_6849A0(a1, v21, v39, v37, v38, v28, a3, a4, v108, v110, v28, v114[2], (int)v115, v116[0], v117);
          v44 = a1[3];
          v45 = *(_QWORD *)v114;
          v46 = 0x100000000LL;
          if ( *(_DWORD *)(v44 + 24) == 8 )
            v46 = -1;
          if ( *(_QWORD *)v114 < v46 )
          {
            sub_6849A0(
              a1,
              *(unsigned __int64 *)v114,
              v44,
              v42,
              v43,
              *(__int64 *)v114,
              v101,
              v107,
              v108,
              v111,
              *(__int64 *)v114,
              v114[2],
              (int)v115,
              v116[0],
              v117);
            v45 = *(_QWORD *)v114;
          }
          *(_QWORD *)v114 = v45;
          v47 = sub_505D70((__int64)v115, v21);
          v28 = *(_QWORD *)v114;
          if ( v47 )
          {
            v48 = v116[0] | ((_BYTE)v117 == 0 ? 16 : 18);
            if ( *v47 != v21 )
            {
              v49 = sub_685E90(a1, v21, v21, v48, v12, a7, a8);
              v28 = *(_QWORD *)v114;
              if ( v49 )
                goto LABEL_49;
              goto LABEL_99;
            }
            v83 = sub_686360(a1, v21, *(char **)v114, v48 | 0x20, v12, a7, a8);
            v28 = *(_QWORD *)v114;
            if ( !v83 )
            {
LABEL_99:
              v8 = 1282;
              goto LABEL_85;
            }
          }
          else if ( (v9 & 0x10) != 0 )
          {
            v77 = sub_5060F0((__int64)v115, v21);
            v28 = *(_QWORD *)v114;
            v78 = v77;
            if ( v77 )
            {
              v79 = is_spec_segm(*((unsigned __int8 *)v77 + 184));
              v28 = *(_QWORD *)v114;
              if ( !v79 )
              {
                v80 = (__int64 *)v78[1];
                if ( v21 - (unsigned __int64)v80 - 1 <= 0xFFFE )
                {
                  v81 = *v78;
                  v118 = v21 - (_QWORD)v80;
                  if ( !(unsigned __int8)sub_685E90(a1, v81, v21, v116[0] | 8u, v12, a7, a8) )
                  {
                    if ( !under_debugger )
                      interr(155);
                    BUG();
                  }
                  sub_3D6730(a1, v80, v118, 0);
                  v28 = *(_QWORD *)v114;
                }
              }
            }
          }
LABEL_49:
          if ( !v108 )
          {
            *(_QWORD *)v114 = v28;
            v82 = sub_503DD0((__int64)v115);
            sub_387DF0(1270, v82, v109, v21);
          }
          v50 = *(double *)&v28;
          v51 = a1[97] == 0;
          v52 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)(unsigned __int64)v28);
          *(__m128i *)v114 = v52;
          if ( v51 )
          {
            v84 = *a1;
            si128 = _mm_load_si128((const __m128i *)v114);
            *(_QWORD *)v116 = v28;
            v86 = *(_QWORD *)(v84 + 1672);
            *(__m128i *)v119 = si128;
            v87 = sub_3C0380(v86, (unsigned __int64 *)v119, (v9 >> 5) & 1, 0);
            v28 = *(_QWORD *)v116;
            if ( v87 )
            {
LABEL_101:
              v8 = 1283;
              goto LABEL_85;
            }
          }
          else
          {
            *(_WORD *)(v13 + 44) |= 8u;
          }
          *(_QWORD *)v116 = v28;
          v53 = sub_506150((__int64)v115);
          v54 = *(_QWORD *)v116;
          if ( !v53 )
          {
            sub_754DC0(*a1, *(unsigned __int8 *)(v13 + 43));
            v54 = *(_QWORD *)v116;
          }
          v55 = _mm_load_si128((const __m128i *)v114);
          v56 = (__int64)v115;
          *(_QWORD *)v116 = v54;
          v8 = 1284;
          *(__m128i *)v13 = v55;
          v57 = sub_505940(v56, (unsigned __int64 *)v13, *(double *)v12.m128_u64, *(double *)v52.m128i_i64);
          v28 = *(_QWORD *)v116;
          if ( !v57 )
            goto LABEL_85;
          v58 = *a1;
          v115 = *(__int64 **)v116;
          v8 = 1112;
          sub_510270(v58);
          v59 = sub_519A10(*a1, v21, (unsigned __int64)v115);
          v28 = (__int64)v115;
          if ( !v59 )
            goto LABEL_85;
          sub_39ADA0(0x3Fu, v13, v27, v60, v61, v115);
          merge_state = get_merge_state(63, v13);
          v66 = (__int64)v115;
          if ( (merge_state & 2) == 0 )
          {
            if ( !*(_BYTE *)(v13 + 43) )
            {
              v91 = *(_QWORD *)(v13 + 48);
              v92 = sub_631AD0(*a1, 23, v63, v64, v65, (__int64)v115);
              v96 = (__int64)v115;
              if ( v91 < v92 )
              {
                sub_632610(*a1, 23, *(_QWORD *)(v13 + 48));
                v96 = (__int64)v115;
              }
              v97 = *a1;
              v98 = *(_QWORD *)(v13 + 48);
              v115 = (__int64 *)v96;
              v99 = sub_631AD0(v97, 24, v93, v94, v95, v96);
              v66 = (__int64)v115;
              if ( v99 < v98 )
              {
                sub_632610(*a1, 24, *(_QWORD *)(v13 + 48));
                v66 = (__int64)v115;
              }
            }
            v67 = v21 - (_QWORD)v111;
            if ( (void *)v21 != v111 )
            {
              v89 = *a1;
              v115 = (__int64 *)v66;
              v90 = sub_631AD0(v89, 23, v63, v64, v65, v66);
              v66 = (__int64)v115;
              if ( v67 < v90 )
              {
                sub_632610(*a1, 23, v67);
                v66 = (__int64)v115;
              }
            }
            v68 = *a1;
            v115 = (__int64 *)v66;
            v69 = v66 - (_QWORD)v111;
            v70 = sub_631AD0(v68, 24, v63, v64, v65, v66);
            v66 = (__int64)v115;
            if ( v70 < v69 )
            {
              *(_QWORD *)v113 = v115;
              sub_632610(*a1, 24, v69);
              v66 = *(_QWORD *)v113;
            }
          }
          v112 = v66;
          sub_50E3D0(*a1, *(_QWORD *)v13, *(unsigned int *)(v13 + 16));
          v71 = *(unsigned int *)(v13 + 16);
          sub_512970(*a1, v71, v72);
          v74 = 0;
          LODWORD(v28) = v112;
          if ( HIBYTE(v117) )
            v74 = (unsigned __int8)(v117 | (v122.m128i_i8[11] == *(_BYTE *)(v13 + 43))) ^ 1;
          if ( (*(_BYTE *)(v13 + 44) & 8) == 0 && (v9 & 0x40) == 0 )
            v74 |= 2u;
          if ( a1[97]
            || (LODWORD(v71) = v21,
                v88 = sub_684690(a1, v21, v112, v74, v13, *(double *)v12.m128_u64, *(double *)v52.m128i_i64, v50),
                v28 = v112,
                v88) )
          {
            if ( v101 )
            {
              LODWORD(v71) = v13;
              v102 = v28;
              sub_6851E0(a1, (unsigned __int64 *)v13, v124, 0);
              LODWORD(v28) = v102;
            }
            if ( v107 )
            {
              LODWORD(v71) = v13;
              v103 = v28;
              sub_684EE0(a1, v13, (const char *)v125, 0);
              LODWORD(v28) = v103;
            }
            if ( (*(_BYTE *)(v13 + 44) & 8) == 0 )
            {
              v105 = v28;
              v71 = (unsigned int)getinf(4) + 1;
              setinf(4, v71);
              LODWORD(v28) = v105;
            }
            callui(1, v71, (int)&callui, v74, v73, v28);
          }
          goto LABEL_101;
        }
        v8 = 1285;
LABEL_12:
        if ( v108 )
        {
          if ( (v9 & 2) == 0 )
            sub_387D20(v8, v109, v21, v109);
          sub_387C60(v8, v109, v21, v109, v22, v109, *(_QWORD *)(v13 + 48), v15);
        }
        sub_387DF0(1275, v14, v17, v18);
      }
LABEL_81:
      v8 = 1280;
      goto LABEL_12;
    }
    if ( (unsigned __int64)v22 > 0x100000000LL )
    {
      v8 = 1737;
      goto LABEL_12;
    }
  }
  if ( *(_BYTE *)(v13 + 43) != 2 )
    goto LABEL_20;
  goto LABEL_82;
}
