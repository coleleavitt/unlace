void __fastcall sub_65A2A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // r13
  unsigned __int64 v6; // rax
  unsigned int *v7; // r13
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *v19; // r12
  __int64 v20; // r13
  const char *v21; // rt0
  __int64 v22; // rbx
  __m128i v23; // rax
  void *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned int *v28; // rax
  size_t v29; // rdi
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  _QWORD *v35; // r15
  __int64 v36; // rax
  __m128i v37; // xmm1
  __m128i v38; // xmm1
  __int64 v39; // rax
  __m128i v40; // xmm1
  __m128i v41; // xmm1
  __m128i v42; // xmm1
  __m128i v43; // xmm1
  __int64 v44; // rdx
  char v45; // r14
  __int64 *v46; // rax
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  void (__fastcall ***v50)(_QWORD); // rdi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __m128 v56; // xmm1
  __m128i *v57; // rdi
  void *v58; // rax
  __m128i *v59; // rbx
  __int64 v60; // rax
  __m128i si128; // [rsp+90h] [rbp-4F8h] BYREF
  __m128i v62; // [rsp+A0h] [rbp-4E8h] BYREF
  _BYTE *v63; // [rsp+B0h] [rbp-4D8h]
  __m128i *v64; // [rsp+B8h] [rbp-4D0h]
  __m128i *v65; // [rsp+C0h] [rbp-4C8h]
  __m128i *v66; // [rsp+C8h] [rbp-4C0h]
  __int64 v67; // [rsp+D0h] [rbp-4B8h]
  __int64 v68; // [rsp+D8h] [rbp-4B0h]
  __int64 v69; // [rsp+E0h] [rbp-4A8h]
  __int64 v70; // [rsp+E8h] [rbp-4A0h]
  __int64 v71; // [rsp+F0h] [rbp-498h]
  __int64 v72; // [rsp+F8h] [rbp-490h]
  __int64 v73; // [rsp+100h] [rbp-488h]
  __int64 v74; // [rsp+108h] [rbp-480h]
  __int64 v75; // [rsp+110h] [rbp-478h]
  __int64 v76; // [rsp+118h] [rbp-470h]
  _BYTE *v77; // [rsp+120h] [rbp-468h]
  __m128i *v78; // [rsp+128h] [rbp-460h]
  __int64 *v79; // [rsp+130h] [rbp-458h]
  __int64 *v80; // [rsp+138h] [rbp-450h]
  __m128i v81; // [rsp+140h] [rbp-448h] BYREF
  __int64 v82; // [rsp+150h] [rbp-438h]
  __m128i v83; // [rsp+160h] [rbp-428h] BYREF
  __int64 v84; // [rsp+170h] [rbp-418h]
  __m128i v85; // [rsp+180h] [rbp-408h] BYREF
  __int64 v86; // [rsp+190h] [rbp-3F8h]
  __m128i v87; // [rsp+1A0h] [rbp-3E8h] BYREF
  __int64 v88; // [rsp+1B0h] [rbp-3D8h]
  __int64 v89; // [rsp+1C0h] [rbp-3C8h] BYREF
  char v90; // [rsp+1D0h] [rbp-3B8h]
  __m128i v91; // [rsp+1E0h] [rbp-3A8h] BYREF
  __int64 v92; // [rsp+1F0h] [rbp-398h]
  __m128i v93; // [rsp+200h] [rbp-388h] BYREF
  __int64 v94; // [rsp+210h] [rbp-378h]
  __m128i v95; // [rsp+220h] [rbp-368h] BYREF
  __int64 v96; // [rsp+230h] [rbp-358h]
  __int64 v97[4]; // [rsp+240h] [rbp-348h] BYREF
  __int64 v98[4]; // [rsp+260h] [rbp-328h] BYREF
  char *v99[2]; // [rsp+280h] [rbp-308h] BYREF
  char v100[16]; // [rsp+290h] [rbp-2F8h] BYREF
  _QWORD v101[8]; // [rsp+2A0h] [rbp-2E8h] BYREF
  __m128i v102; // [rsp+2E0h] [rbp-2A8h] BYREF
  __m128i v103; // [rsp+2F0h] [rbp-298h] BYREF
  __m128i v104; // [rsp+300h] [rbp-288h] BYREF
  __int64 v105; // [rsp+310h] [rbp-278h]
  __m128i v106; // [rsp+320h] [rbp-268h] BYREF
  __m128i v107; // [rsp+330h] [rbp-258h] BYREF
  __m128i v108; // [rsp+340h] [rbp-248h] BYREF
  __int64 v109; // [rsp+350h] [rbp-238h]
  void *ptr[2]; // [rsp+360h] [rbp-228h] BYREF
  void *v111; // [rsp+370h] [rbp-218h]
  char v112; // [rsp+378h] [rbp-210h] BYREF
  __m128i v113; // [rsp+398h] [rbp-1F0h] BYREF
  __m128i v114; // [rsp+3A8h] [rbp-1E0h] BYREF
  __m128i v115; // [rsp+3B8h] [rbp-1D0h] BYREF
  __int16 v116; // [rsp+3C8h] [rbp-1C0h]
  char v117; // [rsp+3CAh] [rbp-1BEh]
  _BYTE v118[24]; // [rsp+3D0h] [rbp-1B8h] BYREF
  _BYTE v119[32]; // [rsp+3E8h] [rbp-1A0h] BYREF
  __m128i v120; // [rsp+408h] [rbp-180h] BYREF
  __m128i v121; // [rsp+418h] [rbp-170h] BYREF
  __m128i v122; // [rsp+428h] [rbp-160h] BYREF
  __int16 v123; // [rsp+438h] [rbp-150h]
  char v124; // [rsp+43Ah] [rbp-14Eh]
  void *v125[3]; // [rsp+440h] [rbp-148h] BYREF
  _BYTE v126[32]; // [rsp+458h] [rbp-130h] BYREF
  __m128i v127; // [rsp+478h] [rbp-110h]
  __m128i v128; // [rsp+488h] [rbp-100h]
  __m128i v129; // [rsp+498h] [rbp-F0h]
  __int16 v130; // [rsp+4A8h] [rbp-E0h]
  char v131; // [rsp+4AAh] [rbp-DEh]
  void *v132; // [rsp+4B0h] [rbp-D8h] BYREF
  __m128i v133; // [rsp+4B8h] [rbp-D0h]
  _BYTE v134[192]; // [rsp+4C8h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x40 || sub_79AA10(a2, 0) )
    return;
  v3 = *(_QWORD *)(a2 + 40);
  v4 = 0;
  v5 = &byte_3B9466E;
  if ( (v3 & 7) == 0 )
  {
    v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
    v4 = v6;
    if ( v6 )
    {
      v7 = *(unsigned int **)(v6 + 16);
      v4 = *v7;
      v5 = (const char *)(v7 + 4);
    }
  }
  v8 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v9 = v8[1];
  else
    v9 = *v8;
  v10 = sub_B0D8A0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v10;
  if ( !v10 )
    goto LABEL_11;
  v12 = *(_BYTE *)(v10 + 74);
  if ( (v12 & 4) == 0 || (v12 & 1) == 0 )
    goto LABEL_11;
  v25 = *(_QWORD *)(a2 + 40);
  v26 = *(_QWORD *)(v11 + 40);
  if ( (v26 & 7) != 0 || (v27 = v26 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( (v25 & 7) == 0 )
    {
      v54 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v54 )
      {
        if ( **(_DWORD **)(v54 + 16) )
          goto LABEL_11;
      }
    }
  }
  else
  {
    v28 = *(unsigned int **)(v27 + 16);
    v29 = *v28;
    if ( (v25 & 7) != 0 || (v30 = v25 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( *v28 )
      {
LABEL_11:
        v63 = v134;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
        goto LABEL_12;
      }
    }
    else
    {
      v31 = *(_DWORD **)(v30 + 16);
      if ( v29 != *v31 || *v28 && memcmp(v31 + 4, v28 + 4, v29) )
        goto LABEL_11;
    }
  }
  v63 = v134;
  v132 = v134;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v133 = si128;
  sub_11240B0(v11, &v132);
  v53 = sub_FC8D80(a1[1], v132, v133.m128i_i64[0]);
  if ( v53 )
  {
    si128.m128i_i64[0] = v53;
    v62.m128i_i64[0] = (__int64)&v106;
    v79 = (__int64 *)v118;
    *(_OWORD *)ptr = 0;
    *(_QWORD *)v118 = "typedef";
    v111 = nullptr;
    *(_QWORD *)&v118[8] = 7;
    v102.m128i_i32[0] = 1;
    v125[0] = (void *)&byte_3B9466E;
    v125[1] = nullptr;
    v106.m128i_i64[0] = 0;
    sub_63EEE0((__int64)ptr, (unsigned __int8 **)v118, v102.m128i_i32, (unsigned __int8 **)v125, v106.m128i_i64);
    sub_FCE4A0(ptr);
    v55 = sub_FCAA40(si128.m128i_i64[0] + 264);
    si128.m128i_i64[0] = (__int64)v125;
    v56 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v57 = (__m128i *)v55;
    v58 = v111;
    *(_OWORD *)ptr = 0;
    memset(v118, 0, sizeof(v118));
    *(__m128 *)v125 = v56;
    v111 = nullptr;
    v125[2] = v58;
    v59 = sub_644230(v57, v57->m128i_i64[0], (__int64 *)v125, 0.0, v56);
    sub_6441A0((__int64 *)v125);
    v125[0] = (void *)&byte_3B9466E;
    v125[1] = nullptr;
    v60 = v59->m128i_i64[1];
    v106.m128i_i64[0] = (__int64)" { ... } ";
    v106.m128i_i64[1] = 9;
    LODWORD(v101[0]) = 10;
    v102.m128i_i64[0] = 0;
    if ( v60 != v59->m128i_i64[0] && *(_DWORD *)(v60 - 48) == 10 )
    {
      if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(v60 - 72)) <= 8 )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append();
    }
    else
    {
      v64 = (__m128i *)v101;
      sub_63EEE0(
        (__int64)v59,
        (unsigned __int8 **)v62.m128i_i64[0],
        (int *)v101,
        (unsigned __int8 **)si128.m128i_i64[0],
        v102.m128i_i64);
    }
    v106.m128i_i64[0] = (__int64)v5;
    v106.m128i_i64[1] = v4;
    LODWORD(v101[0]) = 5;
    v125[0] = (void *)&byte_3B9466E;
    v125[1] = nullptr;
    v102.m128i_i64[0] = 0;
    sub_63EEE0(
      (__int64)v59,
      (unsigned __int8 **)v62.m128i_i64[0],
      (int *)v101,
      (unsigned __int8 **)si128.m128i_i64[0],
      v102.m128i_i64);
    sub_FCDC20(v59);
    sub_6441A0(v79);
    sub_6441A0((__int64 *)ptr);
    v24 = v132;
    if ( v132 != v63 )
      goto LABEL_22;
    return;
  }
  if ( v132 != v63 )
    free(v132);
LABEL_12:
  sub_CAE550(&v81, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
  v133 = _mm_load_si128(&si128);
  v132 = v63;
  sub_11240B0(a2, &v132);
  v84 = 0;
  v83 = 0;
  v13 = sub_63DC30(a1, a2);
  si128.m128i_i64[0] = (__int64)v125;
  if ( v13 )
  {
    v14 = sub_6BB140(*a1, a2);
    sub_AA92F0(v118, v13, *(_QWORD *)(*a1 + 2152), v14);
    v15 = _mm_load_si128((const __m128i *)v118);
    memset(v125, 0, sizeof(v125));
    v84 = *(_QWORD *)&v118[16];
    v83 = v15;
    memset(v118, 0, sizeof(v118));
    sub_646A80((__int64 *)si128.m128i_i64[0]);
    sub_646A80((__int64 *)v118);
  }
  v16 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v17 = v16[1];
  else
    v17 = *v16;
  v18 = a1[1];
  v21 = v5;
  v20 = v4;
  v19 = v21;
  v125[0] = (void *)*a1;
  sub_FE82C0(v101, si128.m128i_i64[0], v17, v18);
  v22 = a1[1];
  LOBYTE(v66) = sub_63DE20(*a1, *(_DWORD *)(a2 + 24));
  v65 = &v87;
  sub_FCD270(&v87, a2);
  v64 = &v85;
  sub_FD2660(&v85, a2);
  sub_766420(ptr, a2);
  sub_63E5A0((__int64)&v102, (__int64)a1, a2);
  v23.m128i_i64[0] = sub_FC8E80(v22, v132, v133.m128i_i64[0]);
  v125[2] = nullptr;
  v62 = v23;
  *(__m128i *)v125 = _mm_load_si128(&v62);
  sub_64F120((__int64)&v89, v22 + 160, (__m128i *)si128.m128i_i64[0], (__int64 *)&v125[2]);
  v67 = v89;
  if ( v125[2] )
    (**(void (__fastcall ***)(void *))v125[2])(v125[2]);
  if ( v90 )
  {
    v32 = sub_63DDF0(v22, 424, 4);
    v33 = _mm_load_si128(&v87);
    v34 = _mm_load_si128(&v85);
    v35 = (_QWORD *)v32;
    v36 = v88;
    v88 = 0;
    v91 = v33;
    v92 = v36;
    v87 = 0;
    v94 = v86;
    v85 = 0;
    v79 = (__int64 *)v118;
    v86 = 0;
    v77 = v119;
    *(_QWORD *)v118 = v119;
    v93 = v34;
    *(__m128i *)&v118[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( ptr[1] )
      sub_63DE60((__int64)v79, (unsigned __int8 **)ptr);
    v120 = _mm_loadu_si128(&v113);
    v37 = _mm_loadu_si128(&v114);
    v123 = v116;
    v121 = v37;
    v38 = _mm_loadu_si128(&v115);
    v124 = v117;
    v122 = v38;
    v39 = sub_FC8E80(v22, v19, v20);
    v40 = _mm_load_si128(&v102);
    strcpy(v100, "public");
    v75 = v39;
    v106 = v40;
    v41 = _mm_load_si128(&v103);
    v109 = v105;
    v107 = v41;
    v42 = _mm_load_si128(&v104);
    v96 = v82;
    v108 = v42;
    v43 = _mm_load_si128(&v81);
    v74 = v101[0];
    v76 = v44;
    v72 = v101[1];
    v95 = v43;
    v68 = v101[2];
    v99[1] = &byte_6;
    v73 = v101[3];
    v69 = v101[4];
    v70 = v101[5];
    v71 = v101[6];
    v99[0] = v100;
    v45 = (char)v66;
    v78 = &v91;
    sub_644390((__int64)v98, v91.m128i_i64);
    v66 = &v93;
    sub_644390((__int64)v97, v93.m128i_i64);
    v46 = (__int64 *)v126;
    v125[0] = v126;
    *(__m128i *)&v125[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( *(_QWORD *)&v118[8] )
    {
      v80 = (__int64 *)v126;
      sub_63DE60(si128.m128i_i64[0], (unsigned __int8 **)v79);
      v46 = v80;
    }
    v47 = _mm_loadu_si128(&v120);
    v79 = v46;
    v127 = v47;
    v48 = _mm_loadu_si128(&v121);
    v130 = v123;
    v128 = v48;
    v49 = _mm_loadu_si128(&v122);
    v131 = v124;
    v129 = v49;
    sub_644570(
      (__int64)v35,
      0x28u,
      v62.m128i_i64[0],
      v62.m128i_i64[1],
      v75,
      v76,
      (__int128)_mm_load_si128(&v106),
      (__int128)_mm_load_si128(&v107),
      (__int128)_mm_load_si128(&v108),
      v109,
      (__int128)_mm_load_si128(&v95),
      v96,
      si128.m128i_i64[0],
      22,
      v83.m128i_i64,
      v97,
      v98,
      v45,
      v99);
    if ( v125[0] != v79 )
      free(v125[0]);
    sub_6441A0(v97);
    sub_6441A0(v98);
    std::string::_M_dispose();
    *v35 = &off_4993338;
    v35[46] = v74;
    v35[47] = v72;
    v35[48] = v68;
    v35[49] = v73;
    v35[50] = v69;
    v35[51] = v70;
    v35[52] = v71;
    if ( *(_BYTE **)v118 != v77 )
      free(*(void **)v118);
    sub_6441A0(v66->m128i_i64);
    sub_6441A0(v78->m128i_i64);
    v50 = *(void (__fastcall ****)(_QWORD))(v67 + 16);
    *(_QWORD *)(v67 + 16) = v35;
    if ( v50 )
      (**v50)(v50);
    v51 = v35[11];
    if ( v51 && (unsigned int)(*(_DWORD *)(v51 + 356) - 2) <= 0x13 && (v52 = sub_FC8C50()) != 0 )
      sub_FC8D50(v52, v35);
    else
      sub_64B900(v22 + 184, (__int64)v35);
  }
  if ( ptr[0] != &v112 )
    free(ptr[0]);
  sub_6441A0(v64->m128i_i64);
  sub_6441A0(v65->m128i_i64);
  sub_646A80(v83.m128i_i64);
  v24 = v132;
  if ( v132 != v63 )
LABEL_22:
    free(v24);
}

