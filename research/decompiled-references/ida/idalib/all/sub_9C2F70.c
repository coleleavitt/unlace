__int64 __fastcall sub_9C2F70(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int i; // r13d
  __int64 *v22; // rax
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // r12
  char *v27; // r13
  __int64 *v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // rbx
  void *v38; // rbx
  void *v39; // rbx
  __int64 v40; // rax
  _QWORD *v41; // rbx
  _QWORD *v42; // r12
  _QWORD *v43; // rdi
  __int64 result; // rax
  unsigned int v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 *v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  char *v59; // r13
  _QWORD *v60; // rcx
  unsigned __int64 v61; // r12
  __int64 v62; // r8
  __int64 v63; // r15
  __int64 v64; // rdi
  __int64 v65; // rdx
  unsigned __int64 v66; // rbp
  unsigned __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  int v72; // r10d
  unsigned __int64 v73; // r11
  int v74; // ecx
  bool v75; // zf
  __int64 v76; // rdi
  __m128 v77; // [rsp+10h] [rbp-328h] BYREF
  __m128 *v78; // [rsp+20h] [rbp-318h]
  __int64 v79; // [rsp+28h] [rbp-310h]
  __int64 v80; // [rsp+30h] [rbp-308h]
  __int64 v81; // [rsp+38h] [rbp-300h]
  __int64 v82; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v83; // [rsp+48h] [rbp-2F0h]
  int *v84; // [rsp+50h] [rbp-2E8h]
  __int64 *v85; // [rsp+58h] [rbp-2E0h]
  __int64 *v86; // [rsp+68h] [rbp-2D0h] BYREF
  _QWORD v87[2]; // [rsp+70h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v89; // [rsp+88h] [rbp-2B0h]
  _BYTE v90[48]; // [rsp+90h] [rbp-2A8h] BYREF
  __m128 v91; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-268h]
  __int64 v93; // [rsp+D8h] [rbp-260h]
  unsigned int v94; // [rsp+E0h] [rbp-258h]
  unsigned __int64 v95; // [rsp+E8h] [rbp-250h]
  void *v96; // [rsp+F0h] [rbp-248h]
  __int64 v97; // [rsp+F8h] [rbp-240h]
  __int64 v98; // [rsp+100h] [rbp-238h]
  void *v99; // [rsp+108h] [rbp-230h]
  __int64 v100; // [rsp+110h] [rbp-228h]
  __int64 v101; // [rsp+118h] [rbp-220h]
  char v102; // [rsp+120h] [rbp-218h]
  __int64 v103; // [rsp+128h] [rbp-210h]
  __int64 v104; // [rsp+130h] [rbp-208h]
  unsigned int v105; // [rsp+138h] [rbp-200h]
  unsigned __int64 v106; // [rsp+140h] [rbp-1F8h]
  void *v107; // [rsp+148h] [rbp-1F0h]
  __int64 v108; // [rsp+150h] [rbp-1E8h]
  __int64 v109; // [rsp+158h] [rbp-1E0h]
  void *v110; // [rsp+160h] [rbp-1D8h]
  __int64 v111; // [rsp+168h] [rbp-1D0h]
  __int64 v112; // [rsp+170h] [rbp-1C8h]
  char v113; // [rsp+178h] [rbp-1C0h]
  __m128i v114; // [rsp+180h] [rbp-1B8h]
  __int64 v115; // [rsp+190h] [rbp-1A8h]
  __int64 v116; // [rsp+198h] [rbp-1A0h]
  unsigned int v117; // [rsp+1A0h] [rbp-198h]
  __int64 v118; // [rsp+1A8h] [rbp-190h]
  __int64 v119; // [rsp+1B0h] [rbp-188h]
  unsigned int v120; // [rsp+1B8h] [rbp-180h]
  int v121; // [rsp+1C0h] [rbp-178h] BYREF
  void *v122; // [rsp+1C8h] [rbp-170h]
  __int64 v123; // [rsp+1D0h] [rbp-168h]
  _DWORD v124[14]; // [rsp+1D8h] [rbp-160h] BYREF
  void *v125; // [rsp+210h] [rbp-128h]
  __int64 v126; // [rsp+218h] [rbp-120h]
  __int64 v127; // [rsp+220h] [rbp-118h] BYREF
  __int64 v128; // [rsp+250h] [rbp-E8h]
  __int64 v129; // [rsp+258h] [rbp-E0h]
  unsigned int v130; // [rsp+260h] [rbp-D8h]
  __int64 v131; // [rsp+268h] [rbp-D0h]
  __int64 v132; // [rsp+270h] [rbp-C8h]
  unsigned int v133; // [rsp+278h] [rbp-C0h]
  _QWORD *v134; // [rsp+280h] [rbp-B8h]
  __int64 v135; // [rsp+288h] [rbp-B0h]
  unsigned int v136; // [rsp+290h] [rbp-A8h]
  __int128 v137; // [rsp+298h] [rbp-A0h]
  _QWORD *v138; // [rsp+2A8h] [rbp-90h]
  __int64 v139; // [rsp+2B0h] [rbp-88h]
  _QWORD v140[6]; // [rsp+2B8h] [rbp-80h] BYREF
  __m128i si128; // [rsp+2E8h] [rbp-50h] BYREF

  v81 = a2;
  v4 = &v121;
  v82 = a3;
  v79 = sub_224A990("LifetimeSafetyAnalysis", 22, 0, 0);
  v122 = v124;
  v123 = 0x200000000LL;
  v125 = &v127;
  v126 = 0x300000000LL;
  v138 = v140;
  v139 = 0x400000000LL;
  v140[4] = &si128;
  v137 = 0;
  ptr = v90;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v87[1] = a3;
  v121 = 0;
  v124[12] = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = nullptr;
  v135 = 0;
  v136 = 0;
  v140[5] = 0;
  v87[0] = &v121;
  v89 = 0x600000000LL;
  v77.m128_u64[0] = sub_224A990("FactGenerator", 13, 0, 0);
  v5 = sub_9C4E10();
  v10 = sub_984EE0(a3, v5, v6, v7, v8, v9);
  v12 = *v10;
  v13 = v10;
  v78 = &v91;
  if ( !v12 )
  {
    sub_9C5CE0(&v91, a3);
    v12 = v91.m128_u64[0];
    v76 = *v13;
    v91.m128_u64[0] = 0;
    *v13 = v12;
    if ( v76 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
      if ( v91.m128_u64[0] )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v91.m128_u64[0] + 8LL))(v91.m128_u64[0]);
      v12 = *v13;
    }
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_QWORD *)(v12 + 16);
  v85 = (__int64 *)&v86;
  v80 = v14;
  if ( v15 != v14 )
  {
    v84 = &v121;
    v16 = v15;
    while ( 1 )
    {
      v17 = *(__int64 **)(v16 - 8);
      LODWORD(v89) = 0;
      v18 = v17[1];
      v19 = *v17;
      v20 = (v18 - *v17) >> 4;
      if ( !v20 )
        goto LABEL_12;
      for ( i = 0; i < v20; ++i )
      {
        v22 = (__int64 *)(v19 + 16LL * (v20 - 1 - i));
        v23 = *v22;
        v24 = *(_DWORD *)v22 & 3 | (4 * (v22[1] & 3));
        if ( v24 > 8 || (unsigned int)v24 <= 5 )
        {
          if ( v24 == 9 )
          {
            v61 = v23 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v61 )
            {
              v62 = *(_QWORD *)(v87[0] + 8LL);
              if ( v62 != v62 + 24LL * *(unsigned int *)(v87[0] + 16LL) )
              {
                v83 = v62 + 24LL * *(unsigned int *)(v87[0] + 16LL);
                v63 = v62;
                do
                {
                  while ( v61 != *(_QWORD *)(v63 + 8) )
                  {
                    v63 += 24;
                    if ( v83 == v63 )
                      goto LABEL_84;
                  }
                  v64 = v87[0];
                  v65 = *(_QWORD *)(v87[0] + 216LL);
                  *(_QWORD *)(v87[0] + 296LL) += 16LL;
                  v66 = (v65 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(_QWORD *)(v64 + 224) >= v66 + 16 && v65 )
                  {
                    *(_QWORD *)(v64 + 216) = v66 + 16;
                    v67 = (v65 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v67 = sub_986170(v64 + 216, 16, 16, 3, v62, v11);
                    v66 = v67;
                  }
                  v68 = *(_DWORD *)v63;
                  *(_BYTE *)(v67 + 8) = 1;
                  *(_QWORD *)v67 = off_2B40500;
                  *(_DWORD *)(v67 + 12) = v68;
                  v69 = (unsigned int)v89;
                  v70 = (unsigned int)v89 + 1LL;
                  if ( v70 > HIDWORD(v89) )
                  {
                    sub_2237220(&ptr, v90, v70, 8);
                    v69 = (unsigned int)v89;
                  }
                  v63 += 24;
                  *((_QWORD *)ptr + v69) = v66;
                  LODWORD(v89) = v89 + 1;
                }
                while ( v83 != v63 );
LABEL_84:
                v19 = *v17;
                v18 = v17[1];
              }
            }
          }
        }
        else
        {
          sub_9B9520((__int64)v87, v23 & 0xFFFFFFFFFFFFFFFCLL, v19, v18);
          v19 = *v17;
          v18 = v17[1];
        }
        v20 = (v18 - v19) >> 4;
      }
      v25 = (unsigned int)v89;
      v26 = v87[0];
      v86 = v17;
      v27 = (char *)ptr;
      if ( !(_DWORD)v89 )
        goto LABEL_12;
      v45 = *(_DWORD *)(v87[0] + 208LL);
      if ( !v45 )
        break;
      v11 = v45 - 1;
      v46 = *(_QWORD *)(v87[0] + 192LL);
      LODWORD(v47) = v11 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v48 = v46 + 72LL * (unsigned int)v47;
      v49 = *(__int64 **)v48;
      if ( v17 != *(__int64 **)v48 )
      {
        v72 = 1;
        v73 = 0;
        if ( v49 == (__int64 *)-4096LL )
        {
LABEL_90:
          v74 = *(_DWORD *)(v87[0] + 200LL);
          v91.m128_u64[0] = v48;
          v19 = (unsigned int)(v74 + 1);
          v18 = 3 * v45;
          if ( 4 * (int)v19 < (unsigned int)v18 )
          {
            v18 = v45 - *(_DWORD *)(v87[0] + 204LL) - (unsigned int)v19;
            if ( (unsigned int)v18 > v45 >> 3 )
            {
LABEL_92:
              v75 = *(_QWORD *)v48 == -4096;
              *(_DWORD *)(v26 + 200) = v19;
              if ( !v75 )
                --*(_DWORD *)(v26 + 204);
              *(_QWORD *)v48 = v17;
              v51 = v48 + 8;
              *(_QWORD *)(v48 + 16) = 0x600000000LL;
              v50 = 6;
              *(_QWORD *)(v48 + 8) = v48 + 24;
              goto LABEL_64;
            }
LABEL_97:
            v83 = v87[0] + 192LL;
            sub_9B5C40(v87[0] + 192LL, v45, v19, v18, v87[0] + 192LL, v11);
            sub_9B5510((__int64 *)(v26 + 192), v85, v78);
            v17 = v86;
            LODWORD(v19) = *(_DWORD *)(v26 + 200) + 1;
            v48 = v91.m128_u64[0];
            goto LABEL_92;
          }
LABEL_96:
          v45 *= 2;
          goto LABEL_97;
        }
        while ( 1 )
        {
          if ( v49 == (__int64 *)-8192LL && !v73 )
            v73 = v48;
          v47 = (unsigned int)v11 & ((_DWORD)v47 + v72);
          v48 = v46 + 72 * v47;
          v49 = *(__int64 **)v48;
          if ( v17 == *(__int64 **)v48 )
            break;
          if ( v49 == (__int64 *)-4096LL )
          {
            if ( v73 )
              v48 = v73;
            goto LABEL_90;
          }
          ++v72;
        }
      }
      v50 = *(unsigned int *)(v48 + 20);
      v51 = v48 + 8;
LABEL_64:
      *(_DWORD *)(v51 + 8) = 0;
      v52 = 8 * v25;
      v53 = 0;
      v54 = v52 >> 3;
      v55 = v52 >> 3;
      if ( v50 < v52 >> 3 )
      {
        sub_2237220(v51, v51 + 16, v55, 8);
        v55 = *(unsigned int *)(v51 + 8);
        v53 = 8 * v55;
        LODWORD(v55) = v54 + v55;
      }
      v56 = *(_QWORD *)v51 + v53;
      if ( (v56 >= (unsigned __int64)(v27 + 16) || (unsigned __int64)v27 >= v56 + 16) && v54 - 1 > 3 )
      {
        v57 = 0;
        do
        {
          *(__m128i *)(v56 + v57) = _mm_loadu_si128((const __m128i *)&v27[v57]);
          v57 += 16;
        }
        while ( 16 * (v54 >> 1) != v57 );
        v58 = 8 * (v54 & 0xFFFFFFFFFFFFFFFELL);
        v59 = &v27[v58];
        v60 = (_QWORD *)(v58 + v56);
        if ( v54 != (v54 & 0xFFFFFFFFFFFFFFFELL) )
          *v60 = *(_QWORD *)v59;
      }
      else
      {
        v71 = 0;
        do
        {
          *(_QWORD *)(v56 + v71) = *(_QWORD *)&v27[v71];
          v71 += 8;
        }
        while ( v52 != v71 );
      }
      *(_DWORD *)(v51 + 8) = v55;
LABEL_12:
      v16 -= 8;
      if ( v80 == v16 )
      {
        v4 = v84;
        goto LABEL_14;
      }
    }
    v91.m128_u64[0] = 0;
    goto LABEL_96;
  }
LABEL_14:
  if ( v77.m128_u64[0] )
    sub_224D6D0(v77.m128_u64[0]);
  v28 = (__int64 *)v78;
  v92 = 0;
  v93 = 0;
  v77.m128_u64[0] = (unsigned __int64)&v78[1];
  v91 = _mm_loadh_ps((const double *)&v82);
  v94 = 0;
  v77 = _mm_loadh_ps((const double *)v77.m128_u64);
  v29 = (_QWORD *)operator new(0x60u);
  v96 = nullptr;
  v97 = 0;
  memset(v29, 0, 0x60u);
  v29[3] = 0x400000000LL;
  v29[2] = v29 + 4;
  v29[8] = v29 + 10;
  v29[11] = 1;
  v95 = (unsigned __int64)v29;
  v98 = 0;
  v99 = nullptr;
  v100 = 0;
  v101 = 0;
  v102 = 1;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v30 = (_QWORD *)operator new(0x60u);
  v31 = _mm_load_si128((const __m128i *)&v77);
  v107 = nullptr;
  v108 = 0;
  memset(v30, 0, 0x60u);
  v30[3] = 0x400000000LL;
  v30[2] = v30 + 4;
  v30[8] = v30 + 10;
  v30[11] = 1;
  v106 = (unsigned __int64)v30;
  v109 = 0;
  v110 = nullptr;
  v111 = 0;
  v112 = 0;
  v113 = 1;
  v114 = v31;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  sub_9BFC40(v28);
  v32 = v120;
  if ( v120 )
  {
    v33 = v118;
    v34 = v118 + 16LL * v120;
    do
    {
      if ( *(_QWORD *)v33 != -4096 && *(_QWORD *)v33 != -8192 )
        sub_9B8400((_DWORD **)(v33 + 8));
      v33 += 16;
    }
    while ( v34 != v33 );
    v32 = v120;
  }
  operator delete(v118, 16 * v32, 8);
  v35 = v117;
  if ( v117 )
  {
    v36 = v115;
    v37 = v115 + 16LL * v117;
    do
    {
      if ( *(_QWORD *)v36 != -8192 && *(_QWORD *)v36 != -4096 )
        sub_9B8400((_DWORD **)(v36 + 8));
      v36 += 16;
    }
    while ( v37 != v36 );
    v35 = v117;
  }
  operator delete(v115, 16 * v35, 8);
  if ( (v106 & 1) == 0 )
  {
    v38 = (void *)(v106 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v106 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_9B7090(v106 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v38, 0x60u);
    }
  }
  if ( v110 )
    operator delete(v110);
  if ( v107 )
    operator delete(v107);
  operator delete(v103, 16LL * v105, 8);
  if ( (v95 & 1) == 0 )
  {
    v39 = (void *)(v95 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v95 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_9B7090(v95 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v39, 0x60u);
    }
  }
  if ( v99 )
    operator delete(v99);
  if ( v96 )
    operator delete(v96);
  operator delete(v92, 16LL * v94, 8);
  if ( ptr != v90 )
    free(ptr);
  sub_9B7090((__int64)(v4 + 54));
  v40 = v136;
  if ( v136 )
  {
    v41 = v134;
    v42 = &v134[9 * v136];
    do
    {
      if ( *v41 != -4096 && *v41 != -8192 )
      {
        v43 = (_QWORD *)v41[1];
        if ( v43 != v41 + 3 )
          free(v43);
      }
      v41 += 9;
    }
    while ( v42 != v41 );
    v40 = v136;
  }
  operator delete(v134, 72 * v40, 8);
  operator delete(v131, 16LL * v133, 8);
  operator delete(v128, 16LL * v130, 8);
  if ( v125 != v4 + 24 )
    free(v125);
  if ( v122 != v4 + 6 )
    free(v122);
  result = v79;
  if ( v79 )
    return sub_224D6D0(v79);
  return result;
}
