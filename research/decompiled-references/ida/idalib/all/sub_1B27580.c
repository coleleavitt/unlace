unsigned __int64 __fastcall sub_1B27580(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rcx
  __int64 *v9; // rbp
  __m128i *v10; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _WORD *v21; // rbx
  __int16 v22; // r13
  unsigned int v23; // r15d
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rbp
  void *v29; // rbp
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v33; // rsi
  int v34; // edx
  _QWORD *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  _QWORD *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  size_t v56; // r8
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  char v59; // cl
  unsigned __int64 j; // rdx
  unsigned int v61; // eax
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r13
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  char v72; // si
  unsigned __int64 i; // rcx
  unsigned int v74; // eax
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // eax
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r15
  unsigned int v89; // eax
  __int64 v90; // r15
  unsigned int v91; // r13d
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // [rsp-10h] [rbp-2C8h]
  __int64 v95; // [rsp-8h] [rbp-2C0h]
  __int64 *v96; // [rsp+0h] [rbp-2B8h]
  __int128 v97; // [rsp+0h] [rbp-2B8h]
  __int128 v98; // [rsp+10h] [rbp-2A8h]
  __int128 v99; // [rsp+40h] [rbp-278h]
  __int64 v100; // [rsp+40h] [rbp-278h]
  size_t v101; // [rsp+40h] [rbp-278h]
  int v102; // [rsp+40h] [rbp-278h]
  _QWORD *v103; // [rsp+40h] [rbp-278h]
  char v104; // [rsp+50h] [rbp-268h]
  size_t v105; // [rsp+50h] [rbp-268h]
  __int64 v106; // [rsp+50h] [rbp-268h]
  int v108; // [rsp+60h] [rbp-258h]
  unsigned __int64 v110; // [rsp+78h] [rbp-240h] BYREF
  _QWORD v111[2]; // [rsp+80h] [rbp-238h] BYREF
  __m128i v112; // [rsp+90h] [rbp-228h] BYREF
  char v113; // [rsp+A0h] [rbp-218h] BYREF
  void *v114; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-200h]
  _BYTE v116[64]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v117; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v118; // [rsp+108h] [rbp-1B0h]
  _BYTE v119[64]; // [rsp+110h] [rbp-1A8h] BYREF
  void *v120; // [rsp+150h] [rbp-168h] BYREF
  __int64 v121; // [rsp+158h] [rbp-160h]
  _BYTE v122[64]; // [rsp+160h] [rbp-158h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-118h] BYREF
  __int64 v124; // [rsp+1A8h] [rbp-110h]
  _BYTE v125[64]; // [rsp+1B0h] [rbp-108h] BYREF
  __m128 v126; // [rsp+1F0h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+200h] [rbp-B8h]
  unsigned __int8 *v128; // [rsp+210h] [rbp-A8h] BYREF
  char v129; // [rsp+268h] [rbp-50h]
  unsigned int v130; // [rsp+270h] [rbp-48h]
  char v131; // [rsp+274h] [rbp-44h]

  v117 = v119;
  v114 = v116;
  v120 = v122;
  v115 = 0x800000000LL;
  v118 = 0x800000000LL;
  v121 = 0x800000000LL;
  v8 = (__int64)v125;
  v124 = 0x800000000LL;
  v108 = a5;
  ptr = v125;
  v96 = &a2[a3];
  if ( a2 == v96 )
  {
    v28 = 0;
    goto LABEL_25;
  }
  v9 = a2;
  v10 = (__m128i *)v111;
  do
  {
    while ( 1 )
    {
      v21 = (_WORD *)*v9;
      v22 = *(_WORD *)*v9 & 0x1FF;
      if ( v22 == 69 )
      {
        v10 = (__m128i *)*v9;
        sub_14B7B40((__int64)&v114, *v9);
        goto LABEL_8;
      }
      v23 = sub_C00A40(*v9, (__int64)v10, a3, v8, a5);
      if ( v22 != 71 )
        break;
      v12 = *((_QWORD *)v21 + 2);
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 > 6 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 6) == 0 )
      {
        v33 = a1[1];
        v100 = *(_QWORD *)(v12 + 48);
        sub_1AFBE90((__int64)&v126, v33, *((_QWORD *)v21 + 2));
        v104 = sub_FFEF60(v126.m128_i32[1], v33, v34);
        if ( v104 )
        {
          v35 = nullptr;
          v36 = sub_168B6C0((__int64)a1);
          v126.m128_u64[0] = sub_A71450(v36, v100);
          v112.m128i_i64[0] = sub_C1BEF0((__int64)&v126, v100, v37, v38);
          if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
            v35 = sub_B8C3D0(v12, v100, v39, v40, v41, v42);
          v101 = j__strlen(".copyin.src");
          v43 = sub_6D5440(&v112);
          if ( (*(_QWORD *)v21 & 0x80000LL) != 0 )
          {
            v70 = *((_QWORD *)v21 + 4);
            if ( v70 )
            {
              v110 = *((_QWORD *)v21 + 5);
              a7 = _mm_loadh_ps((const double *)&v110);
              v126 = a7;
              v71 = *(_QWORD *)(v70 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v71 )
              {
                v126.m128_u64[0] = v71;
                v72 = 0;
                for ( i = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
                {
                  v71 = i;
                  v72 = v104;
                }
                if ( v72 )
                  v126.m128_u64[0] = v71;
              }
              v110 = v43;
              v74 = sub_E90530((__int64 *)&v126);
              v43 = v110;
              v44 = v74;
            }
            else
            {
              v44 = 0;
            }
          }
          else
          {
            v44 = *((unsigned int *)v21 + 1);
          }
          v45 = sub_1AFEAF0((_QWORD *)*a1, v44, v43, ".copyin.src", v101, (__int64)v35);
          v102 = sub_C00A40((unsigned __int64)v21, v44, v46, v47, v48);
          v49 = sub_6D5440(&v112);
          v50 = v45;
          v51 = nullptr;
          v103 = (_QWORD *)sub_1AE9760(*a1, v50, v49, v102);
          if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
            v51 = sub_B8C3D0(v12, v50, v52, v53, v54, v55);
          v56 = j__strlen(".copyin.dst");
          if ( (*(_QWORD *)v21 & 0x80000LL) != 0 )
          {
            v57 = *((_QWORD *)v21 + 4);
            if ( v57 )
            {
              v110 = *((_QWORD *)v21 + 5);
              a7 = _mm_loadh_ps((const double *)&v110);
              v126 = a7;
              v58 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v58 )
              {
                v126.m128_u64[0] = v58;
                v59 = 0;
                for ( j = *(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL; j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
                {
                  v58 = j;
                  v59 = v104;
                }
                if ( v59 )
                  v126.m128_u64[0] = v58;
              }
              v105 = v56;
              v61 = sub_E90530((__int64 *)&v126);
              v56 = v105;
              v62 = v61;
            }
            else
            {
              v62 = 0;
            }
          }
          else
          {
            v62 = *((unsigned int *)v21 + 1);
          }
          v75 = sub_1AFEAF0((_QWORD *)*a1, v62, v112.m128i_i64[0], ".copyin.dst", v56, (__int64)v51);
          v79 = sub_C00A40((unsigned __int64)v21, v62, v76, v77, v78);
          v80 = v75;
          v81 = sub_1AE9760(*a1, v75, v112.m128i_i64[0], v79);
          v82 = *a1;
          v106 = v81;
          v86 = sub_C00A40((unsigned __int64)v21, v80, v83, v84, v85);
          v87 = sub_1929BB0(v82, 0, v86, 0x15u, v106, v103, a7, a8, 0);
          v8 = v94;
          v10 = (__m128i *)v95;
          v88 = v87;
          if ( v87 != 1 )
          {
            v110 = *a1;
            v89 = sub_C00A40((unsigned __int64)v21, v95, a3, v94, a5);
            v10 = (__m128i *)(v88 & 0xFFFFFFFFFFFFFFFELL);
            v90 = sub_19B4A30(v110, v88 & 0xFFFFFFFFFFFFFFFELL, v89, 0, 0, 0, a7, a8);
            if ( v90 != 1 )
            {
              sub_1AEF810(a1[1], v12, (__int64)v21, 0x13u, 0, 0, 0);
              sub_14B7B40((__int64)&v114, (__int64)v21);
              sub_14B7B40((__int64)&v117, (__int64)v103);
              sub_14B7B40((__int64)&v120, v106);
              v10 = (__m128i *)(v90 & 0xFFFFFFFFFFFFFFFELL);
              sub_14B7B40((__int64)&ptr, v90 & 0xFFFFFFFFFFFFFFFELL);
              a3 = v95;
            }
          }
        }
        else
        {
          v91 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
          sub_168B9F0((__int64)&v126, a1, v23, 0x11F7u, 0);
          sub_1AF81E0(&v112, 0x13u);
          v92 = sub_1682AF0((__int64)&v126, (__int64)&v112);
          v10 = (__m128i *)v111;
          v111[0] = sub_20EAB70(101, v91);
          v111[1] = v93;
          sub_166BAF0(v92, (__int64)v111);
          if ( (char *)v112.m128i_i64[0] != &v113 )
            operator delete((void *)v112.m128i_i64[0]);
          sub_15F7200(&v126);
        }
        goto LABEL_15;
      }
      v13 = (unsigned int)v115;
      v14 = (unsigned int)v115 + 1LL;
      if ( v14 > HIDWORD(v115) )
      {
        v10 = (__m128i *)v116;
        sub_2237220(&v114, v116, v14, 8);
        v13 = (unsigned int)v115;
      }
      *((_QWORD *)v114 + v13) = v21;
      LODWORD(v115) = v115 + 1;
LABEL_8:
      v15 = (unsigned int)v118;
      v16 = (unsigned int)v118 + 1LL;
      if ( v16 > HIDWORD(v118) )
      {
        v10 = (__m128i *)v119;
        sub_2237220(&v117, v119, v16, 8);
        v15 = (unsigned int)v118;
      }
      *((_QWORD *)v117 + v15) = 0;
      v17 = (unsigned int)v121;
      LODWORD(v118) = v118 + 1;
      v18 = (unsigned int)v121 + 1LL;
      if ( v18 > HIDWORD(v121) )
      {
        v10 = (__m128i *)v122;
        sub_2237220(&v120, v122, v18, 8);
        v17 = (unsigned int)v121;
      }
      *((_QWORD *)v120 + v17) = 0;
      v19 = (unsigned int)v124;
      v8 = HIDWORD(v124);
      LODWORD(v121) = v121 + 1;
      v20 = (unsigned int)v124 + 1LL;
      if ( v20 > HIDWORD(v124) )
      {
        v10 = (__m128i *)v125;
        sub_2237220(&ptr, v125, v20, 8);
        v19 = (unsigned int)v124;
      }
      a3 = (__int64)ptr;
      *((_QWORD *)ptr + v19) = 0;
      LODWORD(v124) = v124 + 1;
LABEL_15:
      if ( v96 == ++v9 )
        goto LABEL_21;
    }
    v24 = (__int64)a1;
    sub_168B9F0((__int64)&v126, a1, v23, 0x118Eu, 0);
    if ( v129 )
    {
      v24 = 0;
      sub_AE9DF0(&v128, 0, 2u);
    }
    else if ( v131 )
    {
      v67 = sub_168B9E0(&v126);
      v68 = v127;
      if ( v127 )
        v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v127 + 32LL))(v127);
      v112.m128i_i64[0] = v68;
      v69 = sub_1587BC0(v67, v112.m128i_i64, v63, v64, v65, v66);
      v24 = 0;
      sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v130 + 8), 0, 2u);
    }
    ++v9;
    v25 = sub_EEC8C0((unsigned __int64)v21, v24, *(double *)a7.m128_u64);
    v10 = &v112;
    v112.m128i_i64[0] = v25;
    sub_1587DB0((__int64)&v126, v112.m128i_i64);
    sub_15F7200(&v126);
  }
  while ( v96 != v9 );
LABEL_21:
  v26 = (unsigned int)v115;
  v27 = ptr;
  v28 = 0;
  if ( (_DWORD)v115 )
  {
    *(_QWORD *)&v99 = ptr;
    v29 = v114;
    *((_QWORD *)&v99 + 1) = (unsigned int)v124;
    *(_QWORD *)&v98 = v120;
    *((_QWORD *)&v98 + 1) = (unsigned int)v121;
    *(_QWORD *)&v97 = v117;
    *((_QWORD *)&v97 + 1) = (unsigned int)v118;
    v30 = sub_168B6C0((__int64)a1);
    v31 = sub_EBDFB0(v30, a4, v108, a6, (__int64)v29, v26, v97, v98, v99);
    v27 = ptr;
    v28 = v31;
  }
  if ( v27 != v125 )
    free(v27);
LABEL_25:
  if ( v120 != v122 )
    free(v120);
  if ( v117 != v119 )
    free(v117);
  if ( v114 != v116 )
    free(v114);
  return v28;
}
