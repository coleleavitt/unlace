__int64 __fastcall sub_15128F0(
        const __m128i *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        __m128i a6,
        __m128 a7)
{
  int v10; // eax
  char v11; // bl
  __int64 *v12; // rdi
  __m128i *v13; // rsi
  bool v14; // al
  int v15; // r15d
  unsigned int v16; // r15d
  int v17; // r14d
  unsigned int v18; // r14d
  __int16 v19; // di
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  char v24; // bl
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  __int32 v27; // eax
  __int32 v28; // ebx
  __int64 *v29; // rdi
  _BYTE *v30; // rax
  signed __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rbp
  void *v39; // rbx
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  int v45; // edx
  __int64 *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rsi
  __m128i *v51; // r15
  unsigned __int64 v52; // rdx
  __int64 v53; // rsi
  __m128i *v54; // rdi
  __m128i *v55; // r10
  __int64 v56; // rdi
  unsigned int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rax
  __m128i *v66; // r15
  __m128i *v67; // r11
  const __m128i *v68; // r10
  __int64 v69; // rdi
  unsigned int v70; // eax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int32 v73; // eax
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rax
  __int8 v76; // r14
  __int64 v77; // r13
  unsigned __int64 v78; // r15
  __int64 v79; // rax
  __int64 v80; // rdx
  const __m128i *v81; // rax
  __m128i *v82; // rcx
  _BYTE *v83; // rax
  signed __int64 v84; // rdx
  __int8 v85; // al
  unsigned __int16 v86; // ax
  __int32 v87; // r15d
  __m128i si128; // xmm7
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _BYTE *v93; // rax
  signed __int64 v94; // rdx
  _BYTE *v95; // rax
  signed __int64 v96; // rdx
  _BYTE *v97; // rax
  signed __int64 v98; // rdx
  _BYTE *v99; // rax
  signed __int64 v100; // rdx
  __int64 v101; // rsi
  char *v102; // r15
  __int64 v103; // rsi
  __int8 *v104; // r15
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // rdx
  __int64 v110; // [rsp+8h] [rbp-1B0h]
  int *m128i_i32; // [rsp+10h] [rbp-1A8h]
  bool v113; // [rsp+33h] [rbp-185h]
  int v114; // [rsp+34h] [rbp-184h]
  unsigned int v115; // [rsp+48h] [rbp-170h]
  __int64 v117; // [rsp+50h] [rbp-168h]
  __m128i *v118; // [rsp+50h] [rbp-168h]
  unsigned __int64 v119; // [rsp+50h] [rbp-168h]
  __int64 v120; // [rsp+50h] [rbp-168h]
  __int64 v121; // [rsp+50h] [rbp-168h]
  __int64 v122; // [rsp+50h] [rbp-168h]
  __m128i *v123; // [rsp+58h] [rbp-160h]
  const __m128i *v124; // [rsp+58h] [rbp-160h]
  __int64 v125; // [rsp+58h] [rbp-160h]
  __int64 v126; // [rsp+58h] [rbp-160h]
  void *v127; // [rsp+60h] [rbp-158h] BYREF
  __int64 v128; // [rsp+68h] [rbp-150h] BYREF
  __m128i v129; // [rsp+70h] [rbp-148h] BYREF
  __int64 v130; // [rsp+80h] [rbp-138h]
  __m128i v131; // [rsp+90h] [rbp-128h] BYREF
  __int32 v132; // [rsp+A0h] [rbp-118h]
  void *ptr; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v134; // [rsp+B8h] [rbp-100h]
  _BYTE v135[48]; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i *v136; // [rsp+F0h] [rbp-C8h] BYREF
  int v137; // [rsp+F8h] [rbp-C0h]
  const __m128i *v138; // [rsp+100h] [rbp-B8h]
  int v139; // [rsp+108h] [rbp-B0h]
  __int16 v140; // [rsp+10Ch] [rbp-ACh]
  __int64 (__fastcall *v141)(__int64); // [rsp+110h] [rbp-A8h]
  __int64 v142; // [rsp+118h] [rbp-A0h]
  __int64 v143; // [rsp+120h] [rbp-98h]
  void *v144[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v145[15]; // [rsp+140h] [rbp-78h] BYREF

  v115 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 64LL);
  v10 = sub_20ED480(a3);
  m128i_i32 = a1[1].m128i_i32;
  v113 = a3 != 65 && a3 != 47;
  if ( v113 )
  {
    if ( (unsigned int)(v10 - 4) <= 1 )
    {
      if ( (a2 & 2) == 0 )
      {
        sub_1564840(v144, a1, &a1[1], 1807);
        v83 = (_BYTE *)sub_20EAB70(a3, v115);
        sub_AEC220((unsigned __int8 **)v144, v83, v84);
        sub_15038B0((unsigned __int8 **)v144);
        sub_AEA040((__int64)v144);
        if ( a3 == 35 )
        {
          LOWORD(v144[0]) = 449;
          v38 = 1;
          sub_15680D0(a1, v144, 1, 0);
          return v38;
        }
      }
      v113 = 0;
    }
  }
  else
  {
    v113 = 1;
  }
  ptr = v135;
  v134 = 0x500000000LL;
  sub_1504FB0((__int64 *)&v127, 117, 0);
  v129.m128i_i64[0] = 0;
  v129.m128i_i32[2] = 0;
  v130 = 0;
  v11 = a3 == 17 || a3 == 36;
  if ( v11 )
  {
    v73 = a1[2].m128i_i32[0];
    v131 = _mm_loadu_si128(a1 + 1);
    v132 = v73;
  }
  v12 = (__int64 *)a1->m128i_i64[1];
  v13 = (__m128i *)&a1[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v12, a1[1].m128i_i32);
  if ( a3 == 11 )
  {
    v138 = a1;
    v136 = (__m128i *)&a1[122];
    v85 = a1[122].m128i_i8[0];
    a1[122].m128i_i8[0] = 1;
    LOBYTE(v137) = v85;
    v139 = 1507350;
    v140 = 449;
    v141 = sub_146A990;
    v142 = 0;
    v143 = 0;
    if ( !(unsigned __int8)sub_1503860((__int64)&v136) )
    {
      v86 = a1[2].m128i_u16[0];
      if ( (unsigned __int16)(v86 - 5) > 1u )
      {
        v13 = (__m128i *)a1;
        sub_1564840(v144, a1, &a1[1], 1800);
        sub_AEA040((__int64)v144);
      }
      else
      {
        v87 = a1[1].m128i_i32[0];
        if ( sub_141A630(v86) )
          v13 = nullptr;
        else
          v13 = (__m128i *)a1[1].m128i_i64[1];
        v144[0] = v13;
        LODWORD(v144[1]) = v87;
        sub_B85890(v145, (__int64)v13);
        si128 = _mm_load_si128((const __m128i *)v144);
        v130 = v145[0];
        v129 = si128;
        sub_1504200((__int64)a1);
      }
      sub_14808E0((__int64)&v136, v13->m128i_i64, v89, v90, v91, v92);
    }
    v114 = 103;
    v136->m128i_i8[0] = v137;
  }
  else
  {
    v114 = 103;
    if ( a3 - 9 <= 1 )
    {
      v114 = sub_1506700(a1);
      if ( a1[2].m128i_i16[0] != 449 )
        sub_1504200((__int64)a1);
    }
  }
  v14 = def_FFDDA1();
  v15 = -!v14;
  LOWORD(v15) = 0;
  v16 = v15 + 4423689;
  v17 = -!v14;
  LOWORD(v17) = 0;
  v18 = v17 + 4292617;
  if ( (unsigned __int8)sub_FFEBC0(a3, (__int64)v13) )
    v18 = v16;
  sub_146B5E0(&v128, (__int64)a1, v18, 1, 0);
  sub_1B5B570(*(_QWORD *)(a1[6].m128i_i64[0] + 760), a3, &v129, *(_QWORD *)(a1[6].m128i_i64[0] + 608), a4);
  v19 = a1[2].m128i_i16[0];
  if ( v19 != 449 )
  {
    if ( v19 != 23 || !a5 )
    {
      while ( 1 )
      {
        v24 = (v19 == 22) & v11;
        if ( v24 )
        {
          v41 = a1->m128i_i64[1];
          if ( *(_DWORD *)(v41 + 1012) )
          {
            v42 = operator new[](0x18u);
            a6 = _mm_loadu_si128(a1 + 1);
            *(_DWORD *)(v42 + 16) = a1[2].m128i_i32[0];
            *(__m128i *)v42 = a6;
            sub_14368B0(v41, (char *)v42, 1, 1u, 1u, 1u);
          }
          else
          {
            sub_1417F90((_QWORD *)a1->m128i_i64[1]);
            v60 = *(unsigned int *)(v41 + 2912);
            v61 = *(_QWORD *)(v41 + 2904);
            v62 = 3 * v60;
            v63 = v60 + 1;
            v64 = 24LL * *(_QWORD *)(v41 + 2944);
            v65 = 8 * v62;
            v66 = (__m128i *)(v61 + v64);
            v67 = (__m128i *)(v61 + v65);
            if ( v61 + v64 == v61 + v65 )
            {
              v81 = (const __m128i *)m128i_i32;
              if ( v63 > *(unsigned int *)(v41 + 2916) )
              {
                v107 = v41 + 2920;
                if ( v61 > (unsigned __int64)m128i_i32 || v67 <= (__m128i *)m128i_i32 )
                {
                  sub_2237220(v41 + 2904, v107, v63, 24);
                  v67 = (__m128i *)(*(_QWORD *)(v41 + 2904) + 24LL * *(unsigned int *)(v41 + 2912));
                  v81 = (const __m128i *)m128i_i32;
                }
                else
                {
                  sub_2237220(v41 + 2904, v107, v63, 24);
                  v108 = *(_QWORD *)(v41 + 2904);
                  v81 = (const __m128i *)((char *)m128i_i32 + v108 - v61);
                  v67 = (__m128i *)(v108 + 24LL * *(unsigned int *)(v41 + 2912));
                }
              }
              *v67 = _mm_loadu_si128(v81);
              v67[1].m128i_i64[0] = v81[1].m128i_i64[0];
              ++*(_DWORD *)(v41 + 2912);
            }
            else
            {
              v68 = (const __m128i *)m128i_i32;
              v119 = (unsigned __int64)m128i_i32;
              if ( v63 > *(unsigned int *)(v41 + 2916) )
              {
                v101 = v41 + 2920;
                if ( v61 > (unsigned __int64)m128i_i32 || v67 <= (__m128i *)m128i_i32 )
                {
                  v125 = 24LL * *(_QWORD *)(v41 + 2944);
                  sub_2237220(v41 + 2904, v101, v63, 24);
                  v68 = (const __m128i *)m128i_i32;
                  v61 = *(_QWORD *)(v41 + 2904);
                  v66 = (__m128i *)(v61 + v125);
                  v65 = 24LL * *(unsigned int *)(v41 + 2912);
                  v67 = (__m128i *)(v61 + v65);
                }
                else
                {
                  v120 = 24LL * *(_QWORD *)(v41 + 2944);
                  v102 = (char *)m128i_i32 - v61;
                  sub_2237220(v41 + 2904, v101, v63, 24);
                  v61 = *(_QWORD *)(v41 + 2904);
                  v68 = (const __m128i *)&v102[v61];
                  v65 = 24LL * *(unsigned int *)(v41 + 2912);
                  v66 = (__m128i *)(v61 + v120);
                  v67 = (__m128i *)(v61 + v65);
                  v119 = (unsigned __int64)v68;
                }
              }
              *v67 = _mm_loadu_si128((const __m128i *)(v61 + v65 - 24));
              v67[1].m128i_i64[0] = *(_QWORD *)(v61 + v65 - 8);
              v69 = *(_QWORD *)(v41 + 2904);
              v70 = *(_DWORD *)(v41 + 2912);
              v71 = 24LL * v70;
              if ( (__m128i *)(v69 + v71 - 24) != v66 )
              {
                v124 = v68;
                memmove(&v66[1].m128i_u64[1], v66, v69 + v71 - 24 - (_QWORD)v66);
                v70 = *(_DWORD *)(v41 + 2912);
                v68 = v124;
                v69 = *(_QWORD *)(v41 + 2904);
              }
              v72 = v70 + 1;
              *(_DWORD *)(v41 + 2912) = v72;
              if ( (unsigned __int64)v66 <= v119 && v69 + 24 * v72 > v119 )
                v68 = (const __m128i *)((char *)v68 + 24);
              *v66 = _mm_loadu_si128(v68);
              v66[1].m128i_i32[0] = v68[1].m128i_i32[0];
            }
          }
          v43 = a1->m128i_i64[1];
          if ( *(_DWORD *)(v43 + 1012) )
          {
            v44 = operator new[](0x18u);
            a7 = (__m128)_mm_load_si128(&v131);
            *(_DWORD *)(v44 + 16) = v132;
            *(__m128 *)v44 = a7;
            sub_14368B0(v43, (char *)v44, 1, 1u, 1u, 1u);
          }
          else
          {
            sub_1417F90((_QWORD *)a1->m128i_i64[1]);
            v47 = *(_QWORD *)(v43 + 2904);
            v48 = *(unsigned int *)(v43 + 2912);
            v49 = 24LL * *(_QWORD *)(v43 + 2944);
            v50 = 3 * v48;
            v51 = (__m128i *)(v47 + v49);
            v52 = v48 + 1;
            v53 = 8 * v50;
            v54 = (__m128i *)(v47 + v53);
            if ( v47 + v49 == v47 + v53 )
            {
              v82 = &v131;
              if ( v52 > *(unsigned int *)(v43 + 2916) )
              {
                v105 = v43 + 2920;
                v122 = *(_QWORD *)(v43 + 2904);
                if ( v47 > (unsigned __int64)&v131 || v54 <= &v131 )
                {
                  sub_2237220(v43 + 2904, v105, v52, 24);
                  v82 = &v131;
                  v54 = (__m128i *)(*(_QWORD *)(v43 + 2904) + 24LL * *(unsigned int *)(v43 + 2912));
                }
                else
                {
                  sub_2237220(v43 + 2904, v105, v52, 24);
                  v106 = *(_QWORD *)(v43 + 2904);
                  v82 = (__m128i *)((char *)&v131 + v106 - v122);
                  v54 = (__m128i *)(v106 + 24LL * *(unsigned int *)(v43 + 2912));
                }
              }
              *v54 = _mm_loadu_si128(v82);
              v54[1].m128i_i64[0] = v82[1].m128i_i64[0];
              ++*(_DWORD *)(v43 + 2912);
            }
            else
            {
              v55 = &v131;
              v118 = &v131;
              if ( v52 > *(unsigned int *)(v43 + 2916) )
              {
                v103 = v43 + 2920;
                if ( v47 > (unsigned __int64)&v131 || v54 <= &v131 )
                {
                  v126 = 24LL * *(_QWORD *)(v43 + 2944);
                  sub_2237220(v43 + 2904, v103, v52, 24);
                  v55 = &v131;
                  v47 = *(_QWORD *)(v43 + 2904);
                  v51 = (__m128i *)(v47 + v126);
                  v53 = 24LL * *(unsigned int *)(v43 + 2912);
                  v54 = (__m128i *)(v47 + v53);
                }
                else
                {
                  v121 = 24LL * *(_QWORD *)(v43 + 2944);
                  v104 = &v131.m128i_i8[-v47];
                  sub_2237220(v43 + 2904, v103, v52, 24);
                  v47 = *(_QWORD *)(v43 + 2904);
                  v55 = (__m128i *)&v104[v47];
                  v53 = 24LL * *(unsigned int *)(v43 + 2912);
                  v51 = (__m128i *)(v47 + v121);
                  v54 = (__m128i *)(v47 + v53);
                  v118 = v55;
                }
              }
              *v54 = _mm_loadu_si128((const __m128i *)(v47 + v53 - 24));
              v54[1].m128i_i64[0] = *(_QWORD *)(v47 + v53 - 8);
              v56 = *(_QWORD *)(v43 + 2904);
              v57 = *(_DWORD *)(v43 + 2912);
              v58 = 24LL * v57;
              if ( v51 != (__m128i *)(v56 + v58 - 24) )
              {
                v123 = v55;
                memmove(&v51[1].m128i_u64[1], v51, v56 + v58 - 24 - (_QWORD)v51);
                v57 = *(_DWORD *)(v43 + 2912);
                v55 = v123;
                v56 = *(_QWORD *)(v43 + 2904);
              }
              v59 = v57 + 1;
              *(_DWORD *)(v43 + 2912) = v59;
              if ( v51 <= v118 && (unsigned __int64)v118 < v56 + 24 * v59 )
                v55 = (__m128i *)((char *)v55 + 24);
              *v51 = _mm_loadu_si128(v55);
              v51[1].m128i_i32[0] = v55[1].m128i_i32[0];
            }
          }
          sub_1504200((__int64)a1);
          if ( sub_10CCDE0(a1[2].m128i_i16[0]) )
            goto LABEL_59;
        }
        else
        {
          v25 = 106;
          v26 = 106;
          v24 = sub_10CCDE0(v19);
          if ( v24 )
            goto LABEL_26;
        }
        sub_13D35F0(
          (__int64)v144,
          (__int64)m128i_i32,
          *(_QWORD *)(a1->m128i_i64[1] + 88),
          *(_QWORD *)(a1->m128i_i64[1] + 56),
          nullptr);
        v136 = (__m128i *)sub_20EF010(v144[0], v144[1]);
        v26 = (unsigned int)v136;
        v137 = v45;
        if ( v144[0] != v145 )
          operator delete(v144[0]);
        if ( !v24 )
        {
          v25 = v26;
          goto LABEL_26;
        }
LABEL_59:
        v25 = 37;
        if ( a3 != 36 )
          v25 = 23;
        v26 = v25;
LABEL_26:
        sub_1AF3B20(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v26);
        if ( ((unsigned __int8)v127 & 1) != 0 )
          v20 = ((((unsigned __int64)v127 >> 1) & ~(-1LL << ((unsigned __int64)v127 >> 58))) >> v25) & 1;
        else
          LOBYTE(v20) = (*(_QWORD *)(*(_QWORD *)v127 + 8LL * (v25 >> 6)) >> v25) & 1;
        v21 = sub_1511350((__int64)a1, a3, v26, (unsigned __int8)v20 ^ 1u, a6, a7);
        if ( ((unsigned __int8)v127 & 1) != 0 )
          v127 = (void *)(2
                        * (((unsigned __int64)v127 >> 58 << 57)
                         | ~(-1LL << ((unsigned __int64)v127 >> 58))
                         & (~(-1LL << ((unsigned __int64)v127 >> 58)) & ((unsigned __int64)v127 >> 1) | (1LL << v25)))
                        + 1);
        else
          *(_QWORD *)(*(_QWORD *)v127 + 8LL * (v25 >> 6)) |= 1LL << v25;
        if ( v21 )
        {
          v22 = (unsigned int)v134;
          v23 = (unsigned int)v134 + 1LL;
          if ( v23 > HIDWORD(v134) )
          {
            v117 = v21;
            sub_2237220(&ptr, v135, v23, 8);
            v22 = (unsigned int)v134;
            v21 = v117;
          }
          *((_QWORD *)ptr + v22) = v21;
          LODWORD(v134) = v134 + 1;
        }
        if ( a1[2].m128i_i16[0] == 66 )
        {
          v46 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v46, m128i_i32);
        }
        sub_1AF3B30(*(_QWORD *)(a1[6].m128i_i64[0] + 760));
        v19 = a1[2].m128i_i16[0];
        if ( v19 == 449 )
          goto LABEL_29;
        v11 = a5 & (v19 == 23);
        if ( v11 )
          goto LABEL_28;
      }
    }
    do
LABEL_28:
      sub_1504200((__int64)a1);
    while ( a1[2].m128i_i16[0] != 449 );
  }
LABEL_29:
  v27 = a1[1].m128i_i32[1];
  v28 = a1[1].m128i_i32[0];
  v29 = (__int64 *)a1->m128i_i64[1];
  if ( !v27 )
    v27 = a1[1].m128i_i32[0];
  a1[2].m128i_i32[2] = v27;
  sub_14634E0(v29, m128i_i32);
  if ( a3 != 47 )
  {
    if ( (a3 == 102 || a3 == 69) && (((unsigned __int8)v127 & 1) != 0 || (*(_BYTE *)(*(_QWORD *)v127 + 12LL) & 2) == 0) )
    {
      sub_1564820(v144, a1, a4, 46);
      v30 = (_BYTE *)sub_20EAB70(a3, v115);
      sub_AEC220((unsigned __int8 **)v144, v30, v31);
      sub_1503D30((unsigned __int8 **)v144, (__int64)"sizes");
      sub_AEA040((__int64)v144);
    }
    v32 = a1[6].m128i_i64[0];
    v33 = *(_QWORD *)(v32 + 760);
    if ( !v113 )
    {
      if ( a3 - 72 <= 1 || (v34 = 0, a3 == 87) )
      {
        sub_1AF3B60(v33, a3, *(_QWORD *)(v32 + 608));
        v35 = a1[6].m128i_i64[0];
        sub_1C36400(v35, 0);
        v110 = sub_1C36480(a1[6].m128i_i64[0], a4, a4, 0, 0, 0);
        sub_1C36470(v35);
        v34 = sub_1B14300(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v110, ptr, (unsigned int)v134) & 0xFFFFFFFFFFFFFFFELL;
        v33 = *(_QWORD *)(a1[6].m128i_i64[0] + 760);
      }
      goto LABEL_40;
    }
LABEL_92:
    sub_1AF3B60(v33, a3, *(_QWORD *)(v32 + 608));
    v76 = a1[134].m128i_i8[10];
    v77 = a1[6].m128i_i64[0];
    a1[134].m128i_i8[10] = 0;
    sub_1C36400(v77, 0);
    v78 = sub_153D810(a1, 0, 0);
    if ( v78 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 68LL) & 0x20) != 0 )
      v78 = sub_1B888F0(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v78 & 0xFFFFFFFFFFFFFFFELL);
    sub_1C36470(v77);
    v79 = sub_1B14300(*(_QWORD *)(a1[6].m128i_i64[0] + 760), v78, ptr, (unsigned int)v134);
    v80 = a1[6].m128i_i64[0];
    a1[134].m128i_i8[10] = v76;
    v34 = v79 & 0xFFFFFFFFFFFFFFFELL;
    v33 = *(_QWORD *)(v80 + 760);
    goto LABEL_40;
  }
  v74 = (unsigned __int64)v127;
  if ( ((unsigned __int8)v127 & 1) != 0 )
  {
    if ( ((unsigned int)((unsigned __int64)v127 >> 1) & ~(-1 << ((unsigned __int64)v127 >> 58)) & 0x400000) == 0 )
    {
LABEL_85:
      v75 = (((v74 >> 1) & ~(-1LL << (v74 >> 58))) >> 29) & 1;
      goto LABEL_86;
    }
  }
  else if ( (**(_QWORD **)v127 & 0x400000) == 0 )
  {
    goto LABEL_116;
  }
  if ( (a2 & 2) == 0 )
  {
    sub_1564820(v144, a1, a4, 1807);
    v93 = (_BYTE *)sub_20EAB70(47, v115);
    sub_AEC220((unsigned __int8 **)v144, v93, v94);
    sub_1503AF0((unsigned __int8 **)v144, 1);
    v95 = (_BYTE *)sub_20EB760(22, 0);
    sub_AEC220((unsigned __int8 **)v144, v95, v96);
    sub_AEA040((__int64)v144);
    v74 = (unsigned __int64)v127;
  }
  v113 = 0;
  if ( (v74 & 1) != 0 )
    goto LABEL_85;
LABEL_116:
  v75 = (**(_QWORD **)v74 >> 29) & 1LL;
LABEL_86:
  if ( (_BYTE)v75 )
  {
    if ( (a2 & 2) == 0 )
    {
      sub_1564820(v144, a1, a4, 1807);
      v97 = (_BYTE *)sub_20EAB70(47, v115);
      sub_AEC220((unsigned __int8 **)v144, v97, v98);
      sub_1503AF0((unsigned __int8 **)v144, 1);
      v99 = (_BYTE *)sub_20EB760(29, 0);
      sub_AEC220((unsigned __int8 **)v144, v99, v100);
      sub_AEA040((__int64)v144);
    }
    v33 = *(_QWORD *)(a1[6].m128i_i64[0] + 760);
    v34 = 0;
    goto LABEL_40;
  }
  v32 = a1[6].m128i_i64[0];
  v34 = 0;
  v33 = *(_QWORD *)(v32 + 760);
  if ( v113 )
    goto LABEL_92;
LABEL_40:
  v36 = sub_1B69230(v33, a3, (unsigned int)&v129, v114, (_DWORD)ptr, v134, v34, a4, v28);
  v37 = a1[6].m128i_i64[0];
  v38 = v36;
  sub_1B335B0(*(_QWORD *)(v37 + 760), v36 & 0xFFFFFFFFFFFFFFFELL);
  if ( v128 )
    sub_1564F70(v128);
  v39 = v127;
  if ( ((unsigned __int8)v127 & 1) == 0 && v127 )
  {
    if ( *(void **)v127 != (char *)v127 + 16 )
      free(*(void **)v127);
    operator delete(v39, 0x48u);
  }
  if ( ptr != v135 )
    free(ptr);
  return v38;
}
