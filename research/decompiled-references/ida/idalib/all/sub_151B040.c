void __fastcall sub_151B040(const __m128i *a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __m128i a5)
{
  int *m128i_i32; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __m128i v11; // xmm2
  _QWORD *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  char v16; // al
  __int64 v17; // rbp
  unsigned int v18; // r8d
  void *v19; // rax
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdx
  __int32 v25; // eax
  __int64 *v26; // rdi
  void *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdi
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __m128i *v36; // r14
  __m128i *v37; // r11
  unsigned __int64 v38; // r9
  const __m128i *v39; // rcx
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int16 v48; // di
  __int32 v49; // r15d
  bool v50; // zf
  __int64 v51; // rax
  __int32 v52; // eax
  __int64 *v53; // rdi
  __int64 v54; // rbp
  _QWORD *v55; // rbx
  _QWORD *v56; // rdi
  unsigned int v57; // r12d
  int v58; // edx
  __int64 v59; // rdx
  __int32 v60; // eax
  __int64 *v61; // rdi
  __int64 v62; // rbp
  _QWORD *v63; // rbx
  _QWORD *v64; // rdi
  void *v65; // rbx
  __int64 *v66; // rdi
  __int32 v67; // eax
  __int64 *v68; // rdi
  _BYTE *v69; // rax
  signed __int64 v70; // rdx
  _BYTE *v71; // rax
  signed __int64 v72; // rdx
  __int64 *v73; // rdi
  const __m128i *v74; // r14
  __int64 v75; // rsi
  char *v76; // r14
  __int64 v77; // rsi
  char *v78; // r14
  __int64 v79; // rax
  unsigned int v80; // [rsp+0h] [rbp-3E8h]
  void *v81; // [rsp+0h] [rbp-3E8h]
  const __m128i *v82; // [rsp+0h] [rbp-3E8h]
  __int64 v83; // [rsp+0h] [rbp-3E8h]
  unsigned __int64 v85; // [rsp+10h] [rbp-3D8h]
  __int64 v86; // [rsp+10h] [rbp-3D8h]
  __int64 v87; // [rsp+18h] [rbp-3D0h]
  unsigned int **v88; // [rsp+20h] [rbp-3C8h]
  unsigned int v89; // [rsp+28h] [rbp-3C0h]
  unsigned __int32 v90; // [rsp+2Ch] [rbp-3BCh]
  unsigned __int64 v91; // [rsp+38h] [rbp-3B0h]
  int v92; // [rsp+58h] [rbp-390h]
  int v93; // [rsp+60h] [rbp-388h] BYREF
  __int64 v94; // [rsp+64h] [rbp-384h]
  int v95; // [rsp+6Ch] [rbp-37Ch]
  const __m128i *v96; // [rsp+70h] [rbp-378h]
  void *v97; // [rsp+78h] [rbp-370h]
  const __m128i *v98; // [rsp+80h] [rbp-368h] BYREF
  int v99; // [rsp+88h] [rbp-360h]
  char v100; // [rsp+90h] [rbp-358h]
  void *v101; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-340h]
  _BYTE v103[48]; // [rsp+B0h] [rbp-338h] BYREF
  void *v104; // [rsp+E0h] [rbp-308h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-300h]
  _BYTE v106[48]; // [rsp+F0h] [rbp-2F8h] BYREF
  void *ptr; // [rsp+120h] [rbp-2C8h] BYREF
  __int64 v108; // [rsp+128h] [rbp-2C0h]
  _BYTE v109[48]; // [rsp+130h] [rbp-2B8h] BYREF
  void *v110[2]; // [rsp+160h] [rbp-288h] BYREF
  _BYTE v111[48]; // [rsp+170h] [rbp-278h] BYREF
  _BYTE *v112; // [rsp+1A0h] [rbp-248h] BYREF
  __int64 v113; // [rsp+1A8h] [rbp-240h]
  _BYTE v114[176]; // [rsp+1B0h] [rbp-238h] BYREF
  void *v115[2]; // [rsp+260h] [rbp-188h] BYREF
  __int128 v116; // [rsp+270h] [rbp-178h] BYREF
  void *v117[2]; // [rsp+280h] [rbp-168h]
  __int64 v118; // [rsp+290h] [rbp-158h]
  __int64 v119; // [rsp+298h] [rbp-150h]
  __int64 v120; // [rsp+2A0h] [rbp-148h]
  __int64 v121; // [rsp+2A8h] [rbp-140h]
  int v122; // [rsp+2B0h] [rbp-138h]
  __int64 v123; // [rsp+2B8h] [rbp-130h]
  __int64 v124; // [rsp+2C0h] [rbp-128h]
  void *v125; // [rsp+2C8h] [rbp-120h]
  __int64 v126; // [rsp+2D0h] [rbp-118h]
  _BYTE v127[32]; // [rsp+2D8h] [rbp-110h] BYREF
  void *v128; // [rsp+2F8h] [rbp-F0h]
  __int64 v129; // [rsp+300h] [rbp-E8h]
  _BYTE v130[32]; // [rsp+308h] [rbp-E0h] BYREF
  void *v131; // [rsp+328h] [rbp-C0h]
  __int64 v132; // [rsp+330h] [rbp-B8h]
  __int64 v133; // [rsp+338h] [rbp-B0h] BYREF
  void *v134; // [rsp+340h] [rbp-A8h]
  __int64 v135; // [rsp+348h] [rbp-A0h]
  _BYTE v136[12]; // [rsp+350h] [rbp-98h] BYREF
  __int128 v137; // [rsp+35Ch] [rbp-8Ch]
  void *v138; // [rsp+370h] [rbp-78h]
  __int64 v139; // [rsp+378h] [rbp-70h]
  __int64 v140; // [rsp+380h] [rbp-68h] BYREF
  void *v141; // [rsp+388h] [rbp-60h]
  __int64 v142; // [rsp+390h] [rbp-58h]
  _QWORD v143[10]; // [rsp+398h] [rbp-50h] BYREF

  m128i_i32 = a1[1].m128i_i32;
  v9 = a1->m128i_i64[1];
  v89 = *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 232) + 64LL);
  if ( *(_DWORD *)(v9 + 1012) )
  {
    v10 = operator new[](0x18u);
    v11 = _mm_loadu_si128(a1 + 1);
    *(_DWORD *)(v10 + 16) = a1[2].m128i_i32[0];
    *(__m128i *)v10 = v11;
    sub_14368B0(v9, (char *)v10, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)v9);
    v29 = *(unsigned int *)(v9 + 2912);
    v30 = v9 + 2904;
    v31 = *(_QWORD *)(v9 + 2904);
    v32 = 3 * v29;
    v33 = v29 + 1;
    v34 = 24LL * *(_QWORD *)(v9 + 2944);
    v35 = 8 * v32;
    v36 = (__m128i *)(v31 + v34);
    v37 = (__m128i *)(v31 + v35);
    if ( v31 + v34 == v31 + v35 )
    {
      v74 = (const __m128i *)m128i_i32;
      if ( v33 > *(unsigned int *)(v9 + 2916) )
      {
        v77 = v9 + 2920;
        if ( v31 <= (unsigned __int64)m128i_i32 && v37 > (__m128i *)m128i_i32 )
        {
          v78 = (char *)m128i_i32 - v31;
          sub_2237220(v30, v77, v33, 24);
          v79 = *(_QWORD *)(v9 + 2904);
          v74 = (const __m128i *)&v78[v79];
          v37 = (__m128i *)(v79 + 24LL * *(unsigned int *)(v9 + 2912));
        }
        else
        {
          sub_2237220(v30, v77, v33, 24);
          v37 = (__m128i *)(*(_QWORD *)(v9 + 2904) + 24LL * *(unsigned int *)(v9 + 2912));
        }
      }
      *v37 = _mm_loadu_si128(v74);
      v37[1].m128i_i64[0] = v74[1].m128i_i64[0];
      ++*(_DWORD *)(v9 + 2912);
    }
    else
    {
      v38 = (unsigned __int64)m128i_i32;
      v39 = (const __m128i *)m128i_i32;
      if ( v33 > *(unsigned int *)(v9 + 2916) )
      {
        v75 = v9 + 2920;
        if ( v31 > (unsigned __int64)m128i_i32 || v37 <= (__m128i *)m128i_i32 )
        {
          v86 = 24LL * *(_QWORD *)(v9 + 2944);
          sub_2237220(v30, v75, v33, 24);
          v39 = (const __m128i *)m128i_i32;
          v31 = *(_QWORD *)(v9 + 2904);
          v38 = (unsigned __int64)m128i_i32;
          v35 = 24LL * *(unsigned int *)(v9 + 2912);
          v36 = (__m128i *)(v31 + v86);
          v37 = (__m128i *)(v31 + v35);
        }
        else
        {
          v83 = 24LL * *(_QWORD *)(v9 + 2944);
          v76 = (char *)m128i_i32 - v31;
          sub_2237220(v30, v75, v33, 24);
          v31 = *(_QWORD *)(v9 + 2904);
          v39 = (const __m128i *)&v76[v31];
          v35 = 24LL * *(unsigned int *)(v9 + 2912);
          v36 = (__m128i *)(v31 + v83);
          v38 = (unsigned __int64)v39;
          v37 = (__m128i *)(v31 + v35);
        }
      }
      *v37 = _mm_loadu_si128((const __m128i *)(v31 + v35 - 24));
      v37[1].m128i_i64[0] = *(_QWORD *)(v31 + v35 - 8);
      v40 = *(_QWORD *)(v9 + 2904);
      v41 = *(_DWORD *)(v9 + 2912);
      v42 = 24LL * v41;
      if ( v36 != (__m128i *)(v40 + v42 - 24) )
      {
        v85 = v38;
        v82 = v39;
        memmove(&v36[1].m128i_u64[1], v36, v40 + v42 - 24 - (_QWORD)v36);
        v41 = *(_DWORD *)(v9 + 2912);
        v40 = *(_QWORD *)(v9 + 2904);
        v38 = v85;
        v39 = v82;
      }
      v43 = v41 + 1;
      *(_DWORD *)(v9 + 2912) = v43;
      if ( (unsigned __int64)v36 <= v38 && v40 + 24 * v43 > v38 )
        v39 = (const __m128i *)((char *)v39 + 24);
      *v36 = _mm_loadu_si128(v39);
      v36[1].m128i_i32[0] = v39[1].m128i_i32[0];
    }
  }
  v12 = (_QWORD *)a2;
  sub_14368B0(a1->m128i_i64[1], *(char **)a3, *(unsigned int *)(a3 + 8), 1u, 0, 1u);
  sub_149F520((__int64)a1, 1);
  sub_149F520((__int64)a1, 1);
  v96 = a1;
  v98 = a1;
  v99 = 0;
  v100 = 0;
  v115[0] = (void *)a2;
  if ( (a2 & 1) != 0 )
  {
    v12 = *(_QWORD **)((a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else if ( !a2 )
  {
    BUG();
  }
  v13 = 0;
  v14 = v12[2];
  if ( (*((_BYTE *)v12 + 28) & 0x7Fu) - 18 <= 0x3F )
    v13 = (__int64)v12;
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 4) != 0 )
    v15 = *(_QWORD *)v15;
  if ( v15 )
  {
    v16 = *(_BYTE *)(v15 + 8);
    v15 -= 64LL;
    if ( (v16 & 0x7Fu) - 58 >= 4 )
      v15 = 0;
  }
  v17 = a1[6].m128i_i64[0];
  v18 = 0;
  if ( v13 )
    v18 = (unsigned __int8)sub_B72F20(v13);
  v80 = v18;
  v19 = (void *)operator new(0x18u);
  v20 = v80;
  v81 = v19;
  sub_19A2CD0(v19, v17, v15, 0, v20);
  v97 = v81;
  sub_154D3C0(a1, &v98, v12);
  v21 = *((_BYTE *)v12 + 28) & 0x7F;
  if ( ((v21 + 94) & 0x7Fu) <= 5 || v21 == 71 )
  {
    v100 = 1;
    sub_1564E40(v98, 4194313);
    v28 = *(_QWORD *)(v17 + 608);
    ++v99;
    sub_17A2FE0(v17, v28, v12);
  }
  v22 = a1[6].m128i_i64[0];
  v93 = 0;
  sub_18C74E0(v22, 0, 0, 4);
  v23 = sub_20EAB70(16, v89);
  v91 = sub_1509090(a1, v23, a5, v24, &v93, 1u);
  sub_190D5E0(v22);
  if ( v91 <= 1 )
  {
    if ( a1[2].m128i_i16[0] != 449 )
    {
      do
        LOWORD(v115[0]) = 449;
      while ( !(unsigned __int8)sub_15680D0(a1, v115, 1, 2) );
    }
    v25 = a1[1].m128i_i32[1];
    v26 = (__int64 *)a1->m128i_i64[1];
    if ( !v25 )
      v25 = a1[1].m128i_i32[0];
    a1[2].m128i_i32[2] = v25;
    sub_14634E0(v26, m128i_i32);
    goto LABEL_22;
  }
  v88 = nullptr;
  v44 = a1[6].m128i_i64[0];
  v45 = *(_QWORD *)(v44 + 760);
  v46 = *(unsigned int *)(v45 + 264);
  if ( (_DWORD)v46 )
    v88 = *(unsigned int ***)(*(_QWORD *)(v45 + 256) + 40 * v46 - 40);
  v47 = sub_A86E90(*(_QWORD *)(v44 + 248));
  v48 = a1[2].m128i_i16[0];
  v87 = v47;
  v101 = v103;
  v102 = 0x600000000LL;
  v105 = 0x600000000LL;
  v108 = 0x600000000LL;
  v104 = v106;
  v112 = v114;
  ptr = v109;
  v113 = 0x300000000LL;
  v90 = 0;
  if ( v48 == 449 )
  {
    sub_1564820(v115, a1, a1[1].m128i_u32[0], 1792);
    sub_1503AF0((unsigned __int8 **)v115, *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x32u);
    sub_AEA040((__int64)v115);
    v48 = a1[2].m128i_i16[0];
  }
  v92 = a2;
  v49 = 0;
LABEL_45:
  if ( v48 == 449 )
  {
LABEL_73:
    sub_1B1C8B0(
      (unsigned int)v115,
      *(_QWORD *)(a1[6].m128i_i64[0] + 760),
      v92,
      v91 & 0xFFFFFFFE,
      v87,
      v113,
      a4 | ((unsigned __int64)a1[1].m128i_u32[0] << 32));
    v59 = a1[1].m128i_u32[0];
    if ( (_BYTE)v116 && *(_DWORD *)(v87 + 8) )
    {
      sub_1B1FD20(
        *(_QWORD *)(a1[6].m128i_i64[0] + 760),
        v115[0],
        v115[1],
        v87,
        (_DWORD)v101,
        v102,
        (__int64)v104,
        (unsigned int)v105,
        (__int64)ptr,
        (unsigned int)v108,
        (__int64)v112,
        (unsigned int)v113,
        v49,
        v90,
        (v59 << 32) | a4);
      LODWORD(v59) = a1[1].m128i_i32[0];
    }
    v60 = a1[1].m128i_i32[1];
    v61 = (__int64 *)a1->m128i_i64[1];
    if ( !v60 )
      v60 = v59;
    a1[2].m128i_i32[2] = v60;
    sub_14634E0(v61, m128i_i32);
    v62 = (__int64)v112;
    v63 = &v112[56 * (unsigned int)v113];
    if ( v112 != (_BYTE *)v63 )
    {
      do
      {
        while ( 1 )
        {
          v63 -= 7;
          v64 = (_QWORD *)v63[1];
          if ( v64 == v63 + 3 )
            break;
          free(v64);
          if ( (_QWORD *)v62 == v63 )
            goto LABEL_81;
        }
      }
      while ( (_QWORD *)v62 != v63 );
LABEL_81:
      v63 = v112;
    }
    if ( v63 != (_QWORD *)v114 )
      free(v63);
    if ( ptr != v109 )
      free(ptr);
    if ( v104 != v106 )
      free(v104);
    if ( v101 != v103 )
      free(v101);
    if ( v100 )
      sub_17A3230(v96[6].m128i_i64[0]);
    v65 = v97;
    if ( v97 )
    {
      sub_19A2DA0(v97);
      operator delete(v65, 0x18u);
    }
    for ( ; v99; --v99 )
      sub_1564F70(v98);
    return;
  }
  while ( 1 )
  {
    v50 = !sub_10CCDE0(v48);
    v51 = a1->m128i_i64[1];
    if ( !v50 )
    {
      sub_20EC3B0(16, 106, *(unsigned int *)(*(_QWORD *)(v51 + 56) + 64LL));
LABEL_48:
      sub_1564820(v115, a1, a1[1].m128i_u32[0], 1792);
      sub_1503AF0((unsigned __int8 **)v115, *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL) > 0x32u);
      sub_AEA040((__int64)v115);
      goto LABEL_49;
    }
    sub_13D35F0((__int64)v115, (__int64)m128i_i32, *(_QWORD *)(v51 + 88), *(_QWORD *)(v51 + 56), nullptr);
    v94 = sub_20EF010(v115[0], v115[1]);
    v57 = v94;
    v95 = v58;
    if ( v115[0] != &v116 )
      operator delete(v115[0]);
    if ( !(unsigned __int8)sub_20EC3B0(16, v57, *(unsigned int *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 64LL)) )
      goto LABEL_48;
    if ( v57 == 9 )
      break;
    if ( v57 == 56 )
    {
      LOBYTE(v57) = sub_1519770((__int64)a1, a4, v87, v88);
      goto LABEL_70;
    }
    if ( v57 != 3 )
      goto LABEL_120;
    v49 = a1[1].m128i_i32[0];
    v66 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v49;
    sub_14634E0(v66, m128i_i32);
    a5 = 0;
    *(_OWORD *)v115 = 0;
    v116 = 0;
    *(_OWORD *)v117 = 0;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v124 = 0xFFFFFFFFLL;
    v125 = v127;
    v128 = v130;
    v131 = &v133;
    v134 = v136;
    v138 = &v140;
    v141 = v143;
    v126 = 0x700000000LL;
    v129 = 0x700000000LL;
    v110[0] = v111;
    v132 = 0x200000000LL;
    v135 = 0x200000000LL;
    v136[8] = 0;
    v137 = 0;
    v139 = 0x200000000LL;
    v142 = 0x200000000LL;
    v143[1] = 0;
    v110[1] = (void *)0x600000000LL;
    LOBYTE(v57) = sub_150CE00(a1, 0x10u, 3u, (__int64)v110, (__int64)v115, (__m128i)0LL, (__m128)0LL);
    if ( !(_BYTE)v57 )
    {
      if ( (_DWORD)v124 == 1 )
      {
        sub_15063B0((__int64)&v104, (__int64)v110);
        goto LABEL_102;
      }
      if ( (_DWORD)v124 != 2 )
      {
LABEL_120:
        sub_15063B0((__int64)&v101, (__int64)v110);
        goto LABEL_102;
      }
      sub_15063B0((__int64)&ptr, (__int64)v110);
    }
LABEL_102:
    if ( v110[0] != v111 )
      free(v110[0]);
    if ( v141 != v143 )
      free(v141);
    if ( v138 != &v140 )
      free(v138);
    if ( v134 != v136 )
      free(v134);
    if ( v131 != &v133 )
      free(v131);
    if ( v128 != v130 )
      free(v128);
    if ( v125 != v127 )
      free(v125);
    if ( HIDWORD(v118) )
      free(v117[1]);
LABEL_70:
    if ( (_BYTE)v57 )
      goto LABEL_49;
    v48 = a1[2].m128i_i16[0];
    if ( v48 == 66 )
    {
      v73 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v73, m128i_i32);
      v48 = a1[2].m128i_i16[0];
      goto LABEL_45;
    }
    if ( v48 == 449 )
      goto LABEL_73;
  }
  if ( !(_DWORD)v113 )
  {
    v67 = a1[1].m128i_i32[0];
    v68 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v67;
    v90 = v67;
    sub_14634E0(v68, m128i_i32);
    LOBYTE(v57) = sub_1515C40(a1, (__int64)&v112, a5);
    goto LABEL_70;
  }
  sub_1564820(v115, a1, v90, 45);
  v69 = (_BYTE *)sub_20EAB70(16, v89);
  sub_AEC220((unsigned __int8 **)v115, v69, v70);
  v71 = (_BYTE *)sub_20EB760(9, 0);
  sub_AEC220((unsigned __int8 **)v115, v71, v72);
  sub_15038B0((unsigned __int8 **)v115);
  sub_AEA040((__int64)v115);
  do
LABEL_49:
    LOWORD(v115[0]) = 449;
  while ( !(unsigned __int8)sub_15680D0(a1, v115, 1, 2) );
  v52 = a1[1].m128i_i32[1];
  v53 = (__int64 *)a1->m128i_i64[1];
  if ( !v52 )
    v52 = a1[1].m128i_i32[0];
  a1[2].m128i_i32[2] = v52;
  sub_14634E0(v53, m128i_i32);
  v54 = (__int64)v112;
  v55 = &v112[56 * (unsigned int)v113];
  if ( v112 != (_BYTE *)v55 )
  {
    do
    {
      while ( 1 )
      {
        v55 -= 7;
        v56 = (_QWORD *)v55[1];
        if ( v56 == v55 + 3 )
          break;
        free(v56);
        if ( (_QWORD *)v54 == v55 )
          goto LABEL_55;
      }
    }
    while ( (_QWORD *)v54 != v55 );
LABEL_55:
    v55 = v112;
  }
  if ( v55 != (_QWORD *)v114 )
    free(v55);
  if ( ptr != v109 )
    free(ptr);
  if ( v104 != v106 )
    free(v104);
  if ( v101 != v103 )
    free(v101);
LABEL_22:
  if ( v100 )
    sub_17A3230(v96[6].m128i_i64[0]);
  v27 = v97;
  if ( v97 )
  {
    sub_19A2DA0(v97);
    operator delete(v27, 0x18u);
  }
  for ( ; v99; --v99 )
    sub_1564F70(v98);
}
