__int64 __fastcall sub_1B8C590(__int64 *a1, __int64 a2, unsigned int a3, int a4, double a5, __m128 a6)
{
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax
  void **v12; // rax
  unsigned __int64 v13; // rbp
  void **v14; // r14
  void **v15; // r13
  _QWORD *v16; // r13
  _QWORD *v17; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int32 v23; // edx
  _QWORD *v24; // rax
  void *v25; // rcx
  void *v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  __m128 v29; // xmm0
  _QWORD *v30; // rdi
  void **v31; // rax
  __int64 v32; // rsi
  void *v33; // rdx
  void **v34; // rdi
  __int64 v35; // rax
  void **v36; // rsi
  unsigned int v37; // ecx
  _QWORD *v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r10
  __int16 v42; // ax
  void **v43; // rax
  int v44; // ecx
  void **v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // eax
  _QWORD *v49; // r11
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned int v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // r10
  void **v56; // r11
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r10
  void **v61; // r11
  void **v62; // r9
  __int64 v63; // rax
  unsigned __int16 *v64; // rsi
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  void **v67; // r11
  __int64 v68; // rax
  _QWORD *v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  void **v72; // r10
  void **v73; // r11
  void **v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rsi
  void **v77; // r8
  void **v78; // r10
  void **v79; // r11
  unsigned __int64 v80; // rdx
  void **v81; // r10
  void **v82; // r11
  __int64 v83; // rsi
  unsigned __int64 v84; // rbp
  unsigned int v85; // eax
  void *v86; // rsi
  unsigned __int64 v87; // rbp
  __int64 v88; // rbp
  void **v90; // [rsp+8h] [rbp-510h]
  unsigned __int64 v91; // [rsp+10h] [rbp-508h]
  void **p_ptr; // [rsp+18h] [rbp-500h]
  void **v93; // [rsp+20h] [rbp-4F8h]
  void **v94; // [rsp+28h] [rbp-4F0h]
  __int64 v95; // [rsp+30h] [rbp-4E8h]
  void **v96; // [rsp+38h] [rbp-4E0h]
  void **v97; // [rsp+40h] [rbp-4D8h]
  __int64 v98; // [rsp+48h] [rbp-4D0h]
  __int64 v99; // [rsp+50h] [rbp-4C8h]
  void **v100; // [rsp+58h] [rbp-4C0h]
  __int64 v101; // [rsp+60h] [rbp-4B8h]
  void **v102; // [rsp+68h] [rbp-4B0h]
  void **v103; // [rsp+70h] [rbp-4A8h]
  __int64 v104; // [rsp+78h] [rbp-4A0h]
  _QWORD *v105; // [rsp+80h] [rbp-498h]
  __int64 *v106; // [rsp+88h] [rbp-490h]
  unsigned __int64 v107; // [rsp+90h] [rbp-488h] BYREF
  __int64 v108; // [rsp+98h] [rbp-480h] BYREF
  void *v109; // [rsp+A0h] [rbp-478h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-470h]
  _QWORD *v111; // [rsp+C0h] [rbp-458h] BYREF
  __int64 v112; // [rsp+C8h] [rbp-450h]
  __int64 v113; // [rsp+D0h] [rbp-448h]
  unsigned int v114; // [rsp+D8h] [rbp-440h]
  void **v115; // [rsp+F0h] [rbp-428h]
  int v116; // [rsp+F8h] [rbp-420h]
  void **v117; // [rsp+100h] [rbp-418h] BYREF
  __int64 v118; // [rsp+108h] [rbp-410h]
  _BYTE v119[32]; // [rsp+110h] [rbp-408h] BYREF
  void *v120; // [rsp+130h] [rbp-3E8h] BYREF
  __int64 v121; // [rsp+138h] [rbp-3E0h]
  void *v122; // [rsp+160h] [rbp-3B8h] BYREF
  __int64 v123; // [rsp+168h] [rbp-3B0h]
  __int64 v124; // [rsp+170h] [rbp-3A8h] BYREF
  void *v125; // [rsp+1A0h] [rbp-378h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-370h]
  char v127; // [rsp+1B8h] [rbp-360h] BYREF
  void *ptr; // [rsp+200h] [rbp-318h] BYREF
  __m128 v129; // [rsp+208h] [rbp-310h]
  __int64 v130; // [rsp+218h] [rbp-300h] BYREF
  _QWORD *v131; // [rsp+260h] [rbp-2B8h] BYREF
  unsigned int v132; // [rsp+268h] [rbp-2B0h]
  int v133; // [rsp+26Ch] [rbp-2ACh]
  _QWORD v134[85]; // [rsp+270h] [rbp-2A8h] BYREF

  v9 = sub_168B6C0((__int64)a1);
  if ( !a2 )
    return 1;
  v10 = (_QWORD *)v9;
  v11 = *a1;
  v107 = 0;
  v12 = *(void ***)(v11 + 608);
  v133 = 1;
  v132 = 1;
  v90 = v12;
  v131 = v134;
  memset(v134, 0, 0x268u);
  v134[25] = &v134[27];
  v134[31] = &v134[33];
  v134[37] = &v134[39];
  v134[19] = &v134[21];
  v134[43] = &v134[45];
  v134[20] = 0x400000000LL;
  v134[26] = 0x400000000LL;
  v134[32] = 0x400000000LL;
  v134[38] = 0x400000000LL;
  v134[44] = 0x400000000LL;
  v134[49] = &v134[51];
  v134[50] = 0x400000000LL;
  v134[56] = 0x400000000LL;
  v134[62] = 0x400000000LL;
  v134[55] = &v134[57];
  v117 = (void **)v119;
  v134[61] = &v134[63];
  v118 = 0x200000000LL;
  if ( (unsigned __int8)sub_1AFD830((__int64)a1, 62, a2, 1, (__int64)&v131, (__int64)&v107, (__int64)&v117) )
  {
    if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
    {
      v13 = sub_EF6970((__int64)v10, a3, a4, a2, 1, 0);
    }
    else
    {
      v108 = 0;
      v91 = (unsigned __int64)v131;
      sub_1AE75D0(a2, (__int64)&v108, 1);
      v102 = &v122;
      v122 = &v124;
      v123 = 0x600000000LL;
      sub_1AF60D0(v10, v91, v108, *v117, *((unsigned int *)v117 + 2), (__int64)&v122);
      v19 = *(_QWORD *)(*(_QWORD *)v91 + 8LL);
      v97 = *(void ***)v91;
      v94 = (void **)v19;
      v98 = sub_A97D20((__int64)v10, *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL));
      p_ptr = **(void ****)(v91 + 152);
      LODWORD(v95) = sub_C00A40((unsigned __int64)p_ptr, v91, v20, v21, v22);
      LODWORD(v100) = sub_16C50A0((__int64)p_ptr);
      LODWORD(v101) = sub_BF7FE0((__int64)p_ptr);
      v23 = *((_DWORD *)p_ptr + 1);
      v24 = p_ptr[2];
      v93 = p_ptr;
      p_ptr = &ptr;
      v25 = (void *)v24[5];
      v26 = v93[3];
      v129.m128_i32[0] = v23;
      v103 = &v109;
      ptr = v25;
      v129.m128_u64[1] = (unsigned __int64)v26;
      sub_B87650((__int64)&v109, (__int64 *)&ptr);
      v27 = j__strlen(".forward.iv.");
      v96 = &v125;
      v125 = &v127;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      sub_A1FE50(&v125, ".forward.iv.", &aForwardIv[v27]);
      sub_A1FE50(&v125, v109, (_BYTE *)v109 + v110);
      v28 = j__strlen(".reversed.iv.");
      v29 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D70);
      v129 = v29;
      ptr = &v130;
      sub_A1FE50(&ptr, ".reversed.iv.", &aReversedIv[v28]);
      sub_A1FE50(&ptr, v109, (_BYTE *)v109 + v110);
      v30 = (_QWORD *)*a1;
      v112 = 0;
      v111 = v30;
      v113 = 0;
      v114 = 0;
      v31 = (void **)sub_1AFE760(v30, 0, (__int64)v94, v125, si128.m128i_u64[0], (__int64)v93);
      v32 = *a1;
      v93 = v31;
      v116 = v95;
      v33 = v97[2];
      v34 = *(void ***)(v32 + 240);
      v104 = v32;
      v99 = (__int64)v33;
      v97 = v34;
      v115 = v94;
      v35 = sub_6F3470((__int64)(v34 + 69), ptr, v129.m128_u64[0]);
      v36 = v93;
      v37 = v98;
      *(_QWORD *)(v99 + 40) = v35;
      v38 = v36[6];
      LODWORD(v121) = v37;
      if ( v37 > 0x40 )
      {
        v105 = v38;
        v97 = &v120;
        sub_2205470(&v120, 0, 0);
        v38 = v105;
      }
      else
      {
        v120 = nullptr;
        v97 = &v120;
      }
      v39 = sub_C0C5D0(v10, (__int64)v97, (__int64)v38, v95);
      if ( (unsigned int)v121 > 0x40 && v120 )
      {
        v95 = v39;
        operator delete[](v120);
        v39 = v95;
      }
      sub_17ED4C0(*a1, (__int64)v93, v39, 0, *(double *)v29.m128_u64, *(double *)a6.m128_u64);
      v41 = sub_EEE9A0(24, v10, 8u);
      v42 = *(_WORD *)v41 & 0xFE00;
      LOBYTE(v42) = -11;
      *(_WORD *)v41 = v42;
      if ( unk_2CD7484 )
      {
        v95 = v41;
        sub_EE9B50(245);
        v41 = v95;
      }
      v43 = v93;
      v95 = v41;
      *(_DWORD *)(v41 + 16) = (_DWORD)v100;
      v44 = v101;
      *(_QWORD *)(v41 + 8) = v43;
      *(_DWORD *)(v41 + 20) = v44;
      if ( v41 == 1 )
        goto LABEL_28;
      v45 = (void **)*a1;
      v106 = (__int64 *)&v111;
      v100 = v45;
      v105 = (_QWORD *)(sub_1B7CAD0(
                          (__int64 *)&v111,
                          *(unsigned __int16 **)(v91 + 16),
                          v29,
                          a6,
                          (__int64)&v111,
                          v91,
                          v40)
                      & 0xFFFFFFFFFFFFFFFELL);
      v101 = sub_1AE9760(v104, (__int64)v93, (__int64)v115, v116);
      v48 = sub_C00A40(*(_QWORD *)(v91 + 40), (__int64)v93, v46, v91, v47);
      v49 = (_QWORD *)sub_1929BB0((__int64)v100, (__int64)v90, v48, 0xAu, v101, v105, v29, a6, 0);
      if ( (unsigned __int64)v49 <= 1 )
        goto LABEL_28;
      v50 = *a1;
      v105 = v49;
      v101 = v95;
      v95 = v50;
      v100 = (void **)sub_1AE9760(v104, (__int64)v93, (__int64)v115, v116);
      v53 = sub_C00A40(*(_QWORD *)(v91 + 56), (__int64)v93, v51, v91, v52);
      v54 = sub_1925670(v95, (__int64)v90, v53, 2, v100, 0, v29, a6);
      v55 = v101;
      v56 = (void **)v105;
      v95 = v54;
      if ( v54 <= 1 )
        goto LABEL_28;
      LODWORD(v121) = v98;
      if ( (unsigned int)v98 > 0x40 )
      {
        sub_2205470(v97, 1, 0);
        v56 = (void **)v105;
        v55 = v101;
      }
      else
      {
        v120 = &dword_0 + 1;
      }
      v100 = v56;
      v98 = v55;
      v57 = sub_C0C5D0(v10, (__int64)v97, (__int64)v94, a3);
      v60 = v98;
      v61 = v100;
      v62 = (void **)v57;
      if ( (unsigned int)v121 > 0x40 && v120 )
      {
        v94 = (void **)v98;
        v98 = v57;
        operator delete[](v120);
        v61 = v100;
        v62 = (void **)v98;
        v60 = (__int64)v94;
      }
      v63 = *a1;
      v101 = (__int64)v61;
      v100 = v62;
      v64 = *(unsigned __int16 **)(v91 + 16);
      v98 = v60;
      v94 = (void **)v63;
      v65 = sub_1B7CAD0(v106, v64, v29, a6, v58, v91, v59);
      v66 = sub_1929BB0((__int64)v94, (__int64)v90, a3, 6u, v65 & 0xFFFFFFFFFFFFFFFELL, v100, v29, a6, 0);
      v67 = (void **)v101;
      if ( v66 <= 1 )
        goto LABEL_28;
      v101 = v66;
      v68 = *a1;
      v100 = v67;
      v94 = (void **)v68;
      v69 = (_QWORD *)sub_1AE9760(v104, (__int64)v93, (__int64)v115, v116);
      v70 = sub_1929BB0((__int64)v94, (__int64)v90, a3, 6u, v101 & 0xFFFFFFFFFFFFFFFELL, v69, v29, a6, 0);
      if ( v70 <= 1 )
        goto LABEL_28;
      v93 = v100;
      v90 = (void **)v98;
      v94 = (void **)v70;
      v71 = sub_EEE9A0(24, v10, 8u);
      v72 = (void **)v98;
      v73 = v100;
      v74 = (void **)v71;
      v75 = (__int64)v94;
      LOWORD(v71) = *(_WORD *)v71 & 0xFE00;
      LOBYTE(v71) = v71 | 0xF5;
      *(_WORD *)v74 = v71;
      if ( unk_2CD7484 )
      {
        v98 = v75;
        v94 = v73;
        v93 = v74;
        sub_EE9B50(245);
        v75 = v98;
        v73 = v94;
        v74 = v93;
        v72 = v90;
      }
      v76 = v99;
      v94 = v73;
      v93 = v72;
      v74[1] = (void *)v99;
      *((_DWORD *)v74 + 4) = a3;
      *((_DWORD *)v74 + 5) = a4;
      v90 = v74;
      if ( v74 == (void **)((char *)&dword_0 + 1) )
      {
LABEL_28:
        v13 = 1;
      }
      else
      {
        sub_17ED4C0(*a1, v76, v75 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)v29.m128_u64, *(double *)a6.m128_u64);
        v77 = v90;
        v78 = v93;
        v79 = v94;
        v120 = v97 + 2;
        v121 = 0x400000000LL;
        v80 = ((*(_WORD *)v108 & 0x1FF) == 252) + (unsigned __int64)*(unsigned int *)(v91 + 304) + 2;
        if ( v80 > 4 )
        {
          v93 = v90;
          v90 = v78;
          sub_2237220(v97, v97 + 2, v80, 8);
          v79 = v94;
          v77 = v93;
          v78 = v90;
        }
        v93 = v79;
        v90 = v78;
        sub_183F100((__int64)v97, (unsigned __int64)v77 & 0xFFFFFFFFFFFFFFFELL);
        sub_1AF6890((__int64)v97, v91 + 296);
        v81 = v90;
        v82 = v93;
        if ( (*(_WORD *)v108 & 0x1FF) == 0xFC )
        {
          sub_183F100((__int64)v97, *(_QWORD *)(v108 + 56));
          v82 = v93;
          v81 = v90;
        }
        v83 = v107;
        v99 = (__int64)v82;
        v98 = (__int64)v81;
        sub_183F100((__int64)v97, v107);
        v84 = v107;
        LODWORD(v90) = sub_EEC140(v107);
        v85 = sub_EEB7E0(v84, v83, *(double *)v29.m128_u64);
        v86 = v120;
        v90 = (void **)sub_EEF560(v10, v120, (unsigned int)v121, 0, v85, (unsigned int)v90);
        v87 = *(_QWORD *)(v91 + 48);
        LODWORD(v93) = sub_EEB7E0(v87, (__int64)v86, *(double *)v29.m128_u64);
        LODWORD(v94) = sub_EEB7E0(v87, (__int64)v86, *(double *)v29.m128_u64);
        LODWORD(v91) = sub_EEC140(*(_QWORD *)(v91 + 56));
        v88 = sub_EEE9A0(56, v10, 8u);
        sub_EEF330(
          v88,
          v10,
          v98 & 0xFFFFFFFFFFFFFFFELL,
          v99 & 0xFFFFFFFFFFFFFFFELL,
          0,
          v95 & 0xFFFFFFFFFFFFFFFELL,
          (__int64)v90,
          (unsigned int)v93,
          (int)v94,
          v91);
        sub_1AEC4E0(v10, (__int64 *)v122, (unsigned int)v123);
        v13 = sub_EF6970((__int64)v10, a3, a4, a2, 1, v88);
        if ( v120 != v97 + 2 )
          free(v120);
      }
      operator delete(v112, 16LL * v114, 8);
      if ( ptr != p_ptr + 3 )
        free(ptr);
      if ( v125 != v96 + 3 )
        free(v125);
      if ( v109 != v103 + 2 )
        operator delete(v109);
      if ( v122 != v102 + 2 )
        free(v122);
    }
  }
  else
  {
    v13 = 1;
  }
  v14 = v117;
  v15 = &v117[2 * (unsigned int)v118];
  if ( v117 != v15 )
  {
    do
    {
      while ( 1 )
      {
        v15 -= 2;
        if ( *v15 == v15 + 2 )
          break;
        free(*v15);
        if ( v14 == v15 )
          goto LABEL_7;
      }
    }
    while ( v14 != v15 );
LABEL_7:
    v15 = v117;
  }
  if ( v15 != (void **)v119 )
    free(v15);
  v16 = v131;
  v17 = &v131[77 * v132];
  if ( v131 != v17 )
  {
    do
    {
      v17 -= 77;
      sub_1AF4340(v17);
    }
    while ( v16 != v17 );
    v17 = v131;
  }
  if ( v17 != v134 )
    free(v17);
  return v13;
}
