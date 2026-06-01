__int64 __fastcall sub_99F230(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rbx
  void *v36; // rbx
  void *v37; // rbx
  _QWORD *v38; // rbx
  _QWORD *v39; // r12
  _QWORD *v40; // rdi
  __int64 result; // rax
  unsigned int v42; // esi
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  __int64 *v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  char *v56; // r13
  _QWORD *v57; // rcx
  unsigned __int64 v58; // r12
  __int64 v59; // r8
  __int64 v60; // r15
  __int64 v61; // rdi
  __int64 v62; // rdx
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // r10d
  unsigned __int64 v70; // r11
  int v71; // ecx
  bool v72; // zf
  __int64 v73; // rdi
  __m128 v74; // [rsp+10h] [rbp-328h] BYREF
  __m128 *v75; // [rsp+20h] [rbp-318h]
  __int64 v76; // [rsp+28h] [rbp-310h]
  __int64 v77; // [rsp+30h] [rbp-308h]
  __int64 v78; // [rsp+38h] [rbp-300h]
  __int64 v79; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v80; // [rsp+48h] [rbp-2F0h]
  int *v81; // [rsp+50h] [rbp-2E8h]
  __int64 *v82; // [rsp+58h] [rbp-2E0h]
  __int64 *v83; // [rsp+68h] [rbp-2D0h] BYREF
  _QWORD v84[2]; // [rsp+70h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v86; // [rsp+88h] [rbp-2B0h]
  _BYTE v87[48]; // [rsp+90h] [rbp-2A8h] BYREF
  __m128 v88; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-268h]
  __int64 v90; // [rsp+D8h] [rbp-260h]
  int v91; // [rsp+E0h] [rbp-258h]
  unsigned __int64 v92; // [rsp+E8h] [rbp-250h]
  void *v93; // [rsp+F0h] [rbp-248h]
  __int64 v94; // [rsp+F8h] [rbp-240h]
  __int64 v95; // [rsp+100h] [rbp-238h]
  void *v96; // [rsp+108h] [rbp-230h]
  __int64 v97; // [rsp+110h] [rbp-228h]
  __int64 v98; // [rsp+118h] [rbp-220h]
  char v99; // [rsp+120h] [rbp-218h]
  __int64 v100; // [rsp+128h] [rbp-210h]
  __int64 v101; // [rsp+130h] [rbp-208h]
  int v102; // [rsp+138h] [rbp-200h]
  unsigned __int64 v103; // [rsp+140h] [rbp-1F8h]
  void *v104; // [rsp+148h] [rbp-1F0h]
  __int64 v105; // [rsp+150h] [rbp-1E8h]
  __int64 v106; // [rsp+158h] [rbp-1E0h]
  void *v107; // [rsp+160h] [rbp-1D8h]
  __int64 v108; // [rsp+168h] [rbp-1D0h]
  __int64 v109; // [rsp+170h] [rbp-1C8h]
  char v110; // [rsp+178h] [rbp-1C0h]
  __m128i v111; // [rsp+180h] [rbp-1B8h]
  __int64 v112; // [rsp+190h] [rbp-1A8h]
  __int64 v113; // [rsp+198h] [rbp-1A0h]
  unsigned int v114; // [rsp+1A0h] [rbp-198h]
  __int64 v115; // [rsp+1A8h] [rbp-190h]
  __int64 v116; // [rsp+1B0h] [rbp-188h]
  unsigned int v117; // [rsp+1B8h] [rbp-180h]
  int v118; // [rsp+1C0h] [rbp-178h] BYREF
  void *v119; // [rsp+1C8h] [rbp-170h]
  __int64 v120; // [rsp+1D0h] [rbp-168h]
  _DWORD v121[14]; // [rsp+1D8h] [rbp-160h] BYREF
  void *v122; // [rsp+210h] [rbp-128h]
  __int64 v123; // [rsp+218h] [rbp-120h]
  _QWORD v124[8]; // [rsp+220h] [rbp-118h] BYREF
  int v125; // [rsp+260h] [rbp-D8h]
  __int64 v126; // [rsp+268h] [rbp-D0h]
  __int64 v127; // [rsp+270h] [rbp-C8h]
  int v128; // [rsp+278h] [rbp-C0h]
  _QWORD *v129; // [rsp+280h] [rbp-B8h]
  __int64 v130; // [rsp+288h] [rbp-B0h]
  unsigned int v131; // [rsp+290h] [rbp-A8h]
  __int128 v132; // [rsp+298h] [rbp-A0h]
  _QWORD *v133; // [rsp+2A8h] [rbp-90h]
  __int64 v134; // [rsp+2B0h] [rbp-88h]
  _QWORD v135[6]; // [rsp+2B8h] [rbp-80h] BYREF
  __m128i si128; // [rsp+2E8h] [rbp-50h] BYREF

  v78 = a2;
  v4 = &v118;
  v79 = a3;
  v76 = sub_2226C50("LifetimeSafetyAnalysis", 22, 0, 0);
  v119 = v121;
  v120 = 0x200000000LL;
  v122 = v124;
  v123 = 0x300000000LL;
  v133 = v135;
  v134 = 0x400000000LL;
  v135[4] = &si128;
  v132 = 0;
  ptr = v87;
  si128 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v84[1] = a3;
  v118 = 0;
  v121[12] = 0;
  v124[6] = 0;
  v124[7] = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v129 = nullptr;
  v130 = 0;
  v131 = 0;
  v135[5] = 0;
  v84[0] = &v118;
  v86 = 0x600000000LL;
  v74.m128_u64[0] = sub_2226C50("FactGenerator", 13, 0, 0);
  v5 = sub_9A10D0();
  v10 = sub_9611A0(a3, v5, v6, v7, v8, v9);
  v12 = *v10;
  v13 = v10;
  v75 = &v88;
  if ( !v12 )
  {
    sub_9A1FA0(&v88, a3);
    v12 = v88.m128_u64[0];
    v73 = *v13;
    v88.m128_u64[0] = 0;
    *v13 = v12;
    if ( v73 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
      if ( v88.m128_u64[0] )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v88.m128_u64[0] + 8LL))(v88.m128_u64[0]);
      v12 = *v13;
    }
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = *(_QWORD *)(v12 + 16);
  v82 = (__int64 *)&v83;
  v77 = v14;
  if ( v15 != v14 )
  {
    v81 = &v118;
    v16 = v15;
    while ( 1 )
    {
      v17 = *(__int64 **)(v16 - 8);
      LODWORD(v86) = 0;
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
            v58 = v23 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v58 )
            {
              v59 = *(_QWORD *)(v84[0] + 8LL);
              if ( v59 != v59 + 24LL * *(unsigned int *)(v84[0] + 16LL) )
              {
                v80 = v59 + 24LL * *(unsigned int *)(v84[0] + 16LL);
                v60 = v59;
                do
                {
                  while ( v58 != *(_QWORD *)(v60 + 8) )
                  {
                    v60 += 24;
                    if ( v80 == v60 )
                      goto LABEL_81;
                  }
                  v61 = v84[0];
                  v62 = *(_QWORD *)(v84[0] + 216LL);
                  *(_QWORD *)(v84[0] + 296LL) += 16LL;
                  v63 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(_QWORD *)(v61 + 224) >= v63 + 16 && v62 )
                  {
                    *(_QWORD *)(v61 + 216) = v63 + 16;
                    v64 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v64 = sub_962430(v61 + 216, 16, 16, 3, v59, v11);
                    v63 = v64;
                  }
                  v65 = *(_DWORD *)v60;
                  *(_BYTE *)(v64 + 8) = 1;
                  *(_QWORD *)v64 = off_2B16560;
                  *(_DWORD *)(v64 + 12) = v65;
                  v66 = (unsigned int)v86;
                  v67 = (unsigned int)v86 + 1LL;
                  if ( v67 > HIDWORD(v86) )
                  {
                    sub_22134E0(&ptr, v87, v67, 8);
                    v66 = (unsigned int)v86;
                  }
                  v60 += 24;
                  *((_QWORD *)ptr + v66) = v63;
                  LODWORD(v86) = v86 + 1;
                }
                while ( v80 != v60 );
LABEL_81:
                v19 = *v17;
                v18 = v17[1];
              }
            }
          }
        }
        else
        {
          sub_9957E0((__int64)v84, v23 & 0xFFFFFFFFFFFFFFFCLL, v19, v18);
          v19 = *v17;
          v18 = v17[1];
        }
        v20 = (v18 - v19) >> 4;
      }
      v25 = (unsigned int)v86;
      v26 = v84[0];
      v83 = v17;
      v27 = (char *)ptr;
      if ( !(_DWORD)v86 )
        goto LABEL_12;
      v42 = *(_DWORD *)(v84[0] + 208LL);
      if ( !v42 )
        break;
      v11 = v42 - 1;
      v43 = *(_QWORD *)(v84[0] + 192LL);
      LODWORD(v44) = v11 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v45 = v43 + 72LL * (unsigned int)v44;
      v46 = *(__int64 **)v45;
      if ( v17 != *(__int64 **)v45 )
      {
        v69 = 1;
        v70 = 0;
        if ( v46 == (__int64 *)-4096LL )
        {
LABEL_87:
          v71 = *(_DWORD *)(v84[0] + 200LL);
          v88.m128_u64[0] = v45;
          v19 = (unsigned int)(v71 + 1);
          v18 = 3 * v42;
          if ( 4 * (int)v19 < (unsigned int)v18 )
          {
            v18 = v42 - *(_DWORD *)(v84[0] + 204LL) - (unsigned int)v19;
            if ( (unsigned int)v18 > v42 >> 3 )
            {
LABEL_89:
              v72 = *(_QWORD *)v45 == -4096;
              *(_DWORD *)(v26 + 200) = v19;
              if ( !v72 )
                --*(_DWORD *)(v26 + 204);
              *(_QWORD *)v45 = v17;
              v48 = v45 + 8;
              *(_QWORD *)(v45 + 16) = 0x600000000LL;
              v47 = 6;
              *(_QWORD *)(v45 + 8) = v45 + 24;
              goto LABEL_61;
            }
LABEL_94:
            v80 = v84[0] + 192LL;
            sub_991F00(v84[0] + 192LL, v42, v19, v18, v84[0] + 192LL, v11);
            sub_9917D0((__int64 *)(v26 + 192), v82, v75);
            v17 = v83;
            LODWORD(v19) = *(_DWORD *)(v26 + 200) + 1;
            v45 = v88.m128_u64[0];
            goto LABEL_89;
          }
LABEL_93:
          v42 *= 2;
          goto LABEL_94;
        }
        while ( 1 )
        {
          if ( v46 == (__int64 *)-8192LL && !v70 )
            v70 = v45;
          v44 = (unsigned int)v11 & ((_DWORD)v44 + v69);
          v45 = v43 + 72 * v44;
          v46 = *(__int64 **)v45;
          if ( v17 == *(__int64 **)v45 )
            break;
          if ( v46 == (__int64 *)-4096LL )
          {
            if ( v70 )
              v45 = v70;
            goto LABEL_87;
          }
          ++v69;
        }
      }
      v47 = *(unsigned int *)(v45 + 20);
      v48 = v45 + 8;
LABEL_61:
      *(_DWORD *)(v48 + 8) = 0;
      v49 = 8 * v25;
      v50 = 0;
      v51 = v49 >> 3;
      v52 = v49 >> 3;
      if ( v47 < v49 >> 3 )
      {
        sub_22134E0(v48, v48 + 16, v52, 8);
        v52 = *(unsigned int *)(v48 + 8);
        v50 = 8 * v52;
        LODWORD(v52) = v51 + v52;
      }
      v53 = *(_QWORD *)v48 + v50;
      if ( (v53 >= (unsigned __int64)(v27 + 16) || (unsigned __int64)v27 >= v53 + 16) && v51 - 1 > 3 )
      {
        v54 = 0;
        do
        {
          *(__m128i *)(v53 + v54) = _mm_loadu_si128((const __m128i *)&v27[v54]);
          v54 += 16;
        }
        while ( 16 * (v51 >> 1) != v54 );
        v55 = 8 * (v51 & 0xFFFFFFFFFFFFFFFELL);
        v56 = &v27[v55];
        v57 = (_QWORD *)(v55 + v53);
        if ( v51 != (v51 & 0xFFFFFFFFFFFFFFFELL) )
          *v57 = *(_QWORD *)v56;
      }
      else
      {
        v68 = 0;
        do
        {
          *(_QWORD *)(v53 + v68) = *(_QWORD *)&v27[v68];
          v68 += 8;
        }
        while ( v49 != v68 );
      }
      *(_DWORD *)(v48 + 8) = v52;
LABEL_12:
      v16 -= 8;
      if ( v77 == v16 )
      {
        v4 = v81;
        goto LABEL_14;
      }
    }
    v88.m128_u64[0] = 0;
    goto LABEL_93;
  }
LABEL_14:
  if ( v74.m128_u64[0] )
    sub_2229990(v74.m128_u64[0]);
  v28 = (__int64 *)v75;
  v89 = 0;
  v90 = 0;
  v74.m128_u64[0] = (unsigned __int64)&v75[1];
  v88 = _mm_loadh_ps((const double *)&v79);
  v91 = 0;
  v74 = _mm_loadh_ps((const double *)v74.m128_u64);
  v29 = (_QWORD *)operator new(0x60u);
  v93 = nullptr;
  v94 = 0;
  memset(v29, 0, 0x60u);
  v29[3] = 0x400000000LL;
  v29[2] = v29 + 4;
  v29[8] = v29 + 10;
  v29[11] = 1;
  v92 = (unsigned __int64)v29;
  v95 = 0;
  v96 = nullptr;
  v97 = 0;
  v98 = 0;
  v99 = 1;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v30 = (_QWORD *)operator new(0x60u);
  v31 = _mm_load_si128((const __m128i *)&v74);
  v104 = nullptr;
  v105 = 0;
  memset(v30, 0, 0x60u);
  v30[3] = 0x400000000LL;
  v30[2] = v30 + 4;
  v30[8] = v30 + 10;
  v30[11] = 1;
  v103 = (unsigned __int64)v30;
  v106 = 0;
  v107 = nullptr;
  v108 = 0;
  v109 = 0;
  v110 = 1;
  v111 = v31;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  sub_99BF00(v28);
  if ( v117 )
  {
    v32 = v115;
    v33 = v115 + 16LL * v117;
    do
    {
      if ( *(_QWORD *)v32 != -4096 && *(_QWORD *)v32 != -8192 )
        sub_9946C0((_DWORD **)(v32 + 8));
      v32 += 16;
    }
    while ( v33 != v32 );
  }
  operator delete();
  if ( v114 )
  {
    v34 = v112;
    v35 = v112 + 16LL * v114;
    do
    {
      if ( *(_QWORD *)v34 != -8192 && *(_QWORD *)v34 != -4096 )
        sub_9946C0((_DWORD **)(v34 + 8));
      v34 += 16;
    }
    while ( v35 != v34 );
  }
  operator delete();
  if ( (v103 & 1) == 0 )
  {
    v36 = (void *)(v103 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v103 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_993350(v103 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v36, 0x60u);
    }
  }
  if ( v107 )
    operator delete(v107);
  if ( v104 )
    operator delete(v104);
  operator delete();
  if ( (v92 & 1) == 0 )
  {
    v37 = (void *)(v92 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v92 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_993350(v92 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v37, 0x60u);
    }
  }
  if ( v96 )
    operator delete(v96);
  if ( v93 )
    operator delete(v93);
  operator delete();
  if ( ptr != v87 )
    free(ptr);
  sub_993350((__int64)(v4 + 54));
  if ( v131 )
  {
    v38 = v129;
    v39 = &v129[9 * v131];
    do
    {
      if ( *v38 != -4096 && *v38 != -8192 )
      {
        v40 = (_QWORD *)v38[1];
        if ( v40 != v38 + 3 )
          free(v40);
      }
      v38 += 9;
    }
    while ( v39 != v38 );
  }
  operator delete();
  operator delete();
  operator delete();
  if ( v122 != v4 + 24 )
    free(v122);
  if ( v119 != v4 + 6 )
    free(v119);
  result = v76;
  if ( v76 )
    return sub_2229990(v76);
  return result;
}

