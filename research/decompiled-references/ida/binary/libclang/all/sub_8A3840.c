__int64 __fastcall sub_8A3840(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v10; // xmm2
  __int64 v11; // rax
  __m128i v12; // xmm2
  __int64 v13; // rax
  __int32 v14; // edx
  _BYTE *v15; // r15
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  __m128i v19; // xmm0
  __int16 *v20; // rax
  __int64 v21; // rbx
  int v22; // ecx
  unsigned int v23; // ebp
  unsigned int v24; // r12d
  __int64 v25; // rdi
  unsigned __int64 *v26; // r13
  unsigned int v27; // r15d
  __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  char v32; // al
  __int16 *v33; // rax
  _DWORD *v34; // rdx
  unsigned int i; // eax
  unsigned int v36; // eax
  __int64 v37; // rax
  _DWORD *v38; // rcx
  _DWORD *v39; // rdx
  __int64 v40; // rbp
  char *v41; // r13
  __int64 v42; // rdx
  char *v43; // r14
  __m128i v44; // xmm7
  __m128i v45; // xmm5
  __m128i v46; // xmm0
  __m128 v47; // xmm1
  __m128i v48; // xmm0
  __int64 v49; // rsi
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  __int64 v52; // rdi
  void *v53; // rdi
  char *v54; // rbp
  char *v55; // r13
  _QWORD **v56; // rbp
  _QWORD **v57; // r12
  char v58; // al
  char v59; // cl
  _QWORD *v60; // rcx
  __int64 v61; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // r14
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // rdx
  _QWORD *v70; // rax
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  __m128i v73; // [rsp+0h] [rbp-668h] BYREF
  unsigned __int64 v74; // [rsp+10h] [rbp-658h]
  _OWORD *v75; // [rsp+18h] [rbp-650h]
  __m128i v76; // [rsp+20h] [rbp-648h] BYREF
  __m128i v77; // [rsp+30h] [rbp-638h] BYREF
  __int64 v78; // [rsp+40h] [rbp-628h]
  unsigned __int64 v79; // [rsp+48h] [rbp-620h]
  unsigned __int64 v80; // [rsp+50h] [rbp-618h]
  __int64 v81; // [rsp+58h] [rbp-610h]
  _OWORD *v82; // [rsp+60h] [rbp-608h]
  _BYTE *v83; // [rsp+68h] [rbp-600h]
  _BYTE *v84; // [rsp+70h] [rbp-5F8h]
  __int64 v85; // [rsp+78h] [rbp-5F0h] BYREF
  __int16 v86; // [rsp+80h] [rbp-5E8h] BYREF
  __int64 v87; // [rsp+88h] [rbp-5E0h]
  _QWORD v88[2]; // [rsp+90h] [rbp-5D8h] BYREF
  _QWORD *v89; // [rsp+A0h] [rbp-5C8h]
  __int64 v90; // [rsp+A8h] [rbp-5C0h]
  _QWORD v91[4]; // [rsp+B0h] [rbp-5B8h] BYREF
  _QWORD v92[3]; // [rsp+D0h] [rbp-598h] BYREF
  char v93; // [rsp+E8h] [rbp-580h]
  __int64 v94; // [rsp+F8h] [rbp-570h]
  void *ptr; // [rsp+100h] [rbp-568h]
  __int64 v96; // [rsp+108h] [rbp-560h]
  _BYTE v97[80]; // [rsp+110h] [rbp-558h] BYREF
  _OWORD v98[3]; // [rsp+160h] [rbp-508h] BYREF
  __int64 v99; // [rsp+190h] [rbp-4D8h]
  unsigned __int64 v100; // [rsp+198h] [rbp-4D0h]
  __int64 v101; // [rsp+1A0h] [rbp-4C8h]
  int v102; // [rsp+1B0h] [rbp-4B8h] BYREF
  __int64 v103; // [rsp+1B8h] [rbp-4B0h]
  int *v104; // [rsp+1C0h] [rbp-4A8h]
  int *v105; // [rsp+1C8h] [rbp-4A0h]
  __int64 v106; // [rsp+1D0h] [rbp-498h]
  int v107; // [rsp+1E0h] [rbp-488h] BYREF
  __int64 v108; // [rsp+1E8h] [rbp-480h]
  int *v109; // [rsp+1F0h] [rbp-478h]
  int *v110; // [rsp+1F8h] [rbp-470h]
  __int64 v111; // [rsp+200h] [rbp-468h]
  unsigned __int64 v112; // [rsp+208h] [rbp-460h]
  __int32 v113; // [rsp+210h] [rbp-458h]
  __int8 *v114; // [rsp+218h] [rbp-450h]
  __m128i si128; // [rsp+220h] [rbp-448h] BYREF
  int v116; // [rsp+230h] [rbp-438h]
  __int64 v117; // [rsp+238h] [rbp-430h]
  __int64 v118; // [rsp+240h] [rbp-428h]
  int v119; // [rsp+248h] [rbp-420h]
  __int64 v120; // [rsp+250h] [rbp-418h]
  char v121; // [rsp+258h] [rbp-410h]
  __int64 (__fastcall **v122)(); // [rsp+260h] [rbp-408h] BYREF
  char v123; // [rsp+268h] [rbp-400h]
  __int64 v124; // [rsp+270h] [rbp-3F8h]
  __int16 *v125; // [rsp+278h] [rbp-3F0h]
  _DWORD *v126; // [rsp+280h] [rbp-3E8h]
  __m128i v127; // [rsp+288h] [rbp-3E0h] BYREF
  _OWORD v128[3]; // [rsp+298h] [rbp-3D0h] BYREF
  __int64 v129; // [rsp+2C8h] [rbp-3A0h]
  __int64 v130; // [rsp+2D0h] [rbp-398h]
  __int64 v131; // [rsp+2D8h] [rbp-390h]
  int v132; // [rsp+2E8h] [rbp-380h] BYREF
  __int64 v133; // [rsp+2F0h] [rbp-378h]
  int *v134; // [rsp+2F8h] [rbp-370h]
  int *v135; // [rsp+300h] [rbp-368h]
  __int64 v136; // [rsp+308h] [rbp-360h]
  int v137; // [rsp+318h] [rbp-350h] BYREF
  __int64 v138; // [rsp+320h] [rbp-348h]
  int *v139; // [rsp+328h] [rbp-340h]
  int *v140; // [rsp+330h] [rbp-338h]
  __int64 v141; // [rsp+338h] [rbp-330h]
  __int64 v142; // [rsp+340h] [rbp-328h]
  int v143; // [rsp+348h] [rbp-320h]
  _DWORD *v144; // [rsp+350h] [rbp-318h]
  __int64 v145; // [rsp+358h] [rbp-310h]
  _DWORD v146[4]; // [rsp+360h] [rbp-308h] BYREF
  __int64 v147; // [rsp+370h] [rbp-2F8h]
  __int64 v148; // [rsp+378h] [rbp-2F0h]
  int v149; // [rsp+380h] [rbp-2E8h]
  __int64 v150; // [rsp+388h] [rbp-2E0h]
  char v151; // [rsp+390h] [rbp-2D8h]
  void *v152; // [rsp+398h] [rbp-2D0h]
  __int64 v153; // [rsp+3A0h] [rbp-2C8h]
  _BYTE v154[512]; // [rsp+3A8h] [rbp-2C0h] BYREF
  char v155[16]; // [rsp+5A8h] [rbp-C0h] BYREF
  int v156; // [rsp+5B8h] [rbp-B0h]
  __int128 v157; // [rsp+5C0h] [rbp-A8h]
  __int64 v158; // [rsp+5D0h] [rbp-98h]
  unsigned int v159; // [rsp+5D8h] [rbp-90h]
  int v160; // [rsp+5E8h] [rbp-80h] BYREF
  void *v161; // [rsp+5F0h] [rbp-78h]
  int *v162; // [rsp+5F8h] [rbp-70h]
  int *v163; // [rsp+600h] [rbp-68h]
  __int64 v164; // [rsp+608h] [rbp-60h]
  __int64 v165; // [rsp+610h] [rbp-58h]
  __int64 v166; // [rsp+618h] [rbp-50h]
  __int64 v167; // [rsp+620h] [rbp-48h]

  v80 = a1;
  v73.m128i_i64[1] = (__int64)&v122;
  v81 = a2;
  *(_QWORD *)&v98[0] = &v85;
  v10 = _mm_loadh_ps((const double *)&v73.m128i_i64[1]);
  v85 = a4;
  *((_QWORD *)&v98[0] + 1) = a3;
  v75 = v98;
  v76 = (__m128i)v10;
  v11 = sub_25E8DD0("EvaluateWithSubstitution", 0x18u);
  v12 = _mm_load_si128(&v76);
  v78 = v11;
  v122 = &off_47DA958;
  v125 = &v86;
  v13 = *(_QWORD *)(a3 + 2160);
  v86 = 0;
  v14 = *(_DWORD *)(v13 + 136);
  LOBYTE(v13) = *(_BYTE *)(v13 + 140);
  memset(&v128[1], 0, 32);
  v124 = a3;
  v15 = v97;
  v127.m128i_i8[12] = v13 & 1;
  v134 = &v132;
  v135 = &v132;
  v139 = &v137;
  v140 = &v137;
  v127.m128i_i32[2] = v14;
  v144 = v146;
  v128[0] = v12;
  v87 = 0;
  v123 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 1;
  v146[0] = 1;
  v82 = v128;
  v145 = 0x200000001LL;
  v127.m128i_i64[0] = 0x200000001LL;
  v83 = v154;
  v152 = v154;
  v126 = v128;
  v153 = 0x1000000000LL;
  v146[2] = 1;
  v149 = 0;
  v147 = 0;
  v148 = 0;
  v150 = 0;
  v151 = 0;
  sub_69F1C0((__int64)v155, 0, 0, 0);
  v93 |= 1u;
  v162 = &v160;
  v163 = &v160;
  v167 = 0x100000000LL;
  v157 = 0;
  v19 = 0;
  v156 = 0;
  v159 = 0;
  v158 = 0;
  v160 = 0;
  v161 = nullptr;
  v164 = 0;
  v165 = 0;
  v166 = -1;
  v123 = 1;
  memset(v92, 0, sizeof(v92));
  v94 = 0;
  ptr = v97;
  v96 = 0x800000000LL;
  v97[65] = 0;
  if ( a7 )
  {
    if ( (*(_BYTE *)(a7 + 2) & 2) != 0 )
    {
      v20 = v125;
    }
    else
    {
      v73.m128i_i64[0] = 0;
      v58 = sub_89DEE0(v73.m128i_i64[1], a7, (__int64)v92, v16, v17, v18);
      v19 = _mm_loadl_epi64(&v73);
      v59 = v58;
      v20 = v125;
      if ( v59 )
      {
        v60 = (_QWORD *)v19.m128i_i64[0];
        if ( !*(_BYTE *)v125 )
          v60 = v92;
        v19 = (__m128i)(unsigned __int64)v60;
      }
    }
    *(_BYTE *)v20 = 0;
  }
  v21 = v85;
  v22 = v126[52];
  v23 = v126[44];
  v77 = _mm_unpacklo_epi64(v19, (__m128i)(unsigned __int64)a7);
  v24 = v22 + 1;
  v126[52] = v22 + 1;
  v79 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v22 + 1)).m128i_u64[0];
  if ( a5 != &a5[a6] )
  {
    v73.m128i_i64[0] = (__int64)&a5[a6];
    v25 = v21;
    v26 = a5;
    v84 = v97;
    v27 = v23;
    while ( 1 )
    {
      v28 = v26 - a5;
      if ( (unsigned int)sub_77F620(v25) <= (unsigned int)v28 )
        break;
      v29 = *v26;
      v30 = *(_QWORD *)(v85 + 120);
      v31 = *(_QWORD *)(v30 + 8LL * (unsigned int)v28);
      if ( (*(_BYTE *)(*v26 + 2) & 2) != 0
        || (v74 = *(_QWORD *)(v30 + 8LL * (unsigned int)v28),
            v32 = sub_8990B0(v31, v29, v24, v73.m128i_i64[1], 0),
            v31 = v74,
            !v32)
        || (v33 = v125, *(_BYTE *)v125) )
      {
        v34 = v126;
        for ( i = v126[44]; v27 < i; i = v34[44] )
          v34 = *((_DWORD **)v34 + 2);
        if ( v27 == i )
        {
          if ( v21 )
          {
            v36 = (unsigned __int8)(*(_WORD *)(v31 + 98) >> 4);
            if ( v36 == 255 )
            {
              v74 = (unsigned __int64)v34;
              v36 = sub_77D6D0(v31);
              v34 = (_DWORD *)v74;
            }
            v31 = *(_QWORD *)(*(_QWORD *)(v21 + 120) + 8LL * v36);
          }
          v37 = *((_QWORD *)v34 + 11);
          v38 = v34 + 20;
          v39 = v34 + 20;
          if ( v37 )
          {
            do
            {
              while ( *(_QWORD *)(v37 + 32) >= v31 && (*(_QWORD *)(v37 + 32) != v31 || *(_DWORD *)(v37 + 40) >= v24) )
              {
                v39 = (_DWORD *)v37;
                v37 = *(_QWORD *)(v37 + 16);
                if ( !v37 )
                  goto LABEL_28;
              }
              v37 = *(_QWORD *)(v37 + 24);
            }
            while ( v37 );
LABEL_28:
            if ( v38 != v39 && *((_QWORD *)v39 + 4) == v31 && v24 == v39[10] )
            {
              v40 = (__int64)v75;
              BYTE4(v98[0]) &= ~1u;
              LODWORD(v98[0]) = 0;
              sub_6A01B0((__int64)(v39 + 12), (__int64)v75);
              if ( LODWORD(v98[0]) > 1 )
                sub_69F740(v40);
            }
          }
        }
        v33 = v125;
      }
      *(_BYTE *)v33 = 0;
      if ( ++v26 == (unsigned __int64 *)v73.m128i_i64[0] )
        break;
      v25 = v85;
    }
    v15 = v84;
  }
  v41 = (char *)v152;
  v42 = 32LL * (unsigned int)v153;
  v43 = (char *)v152 + v42;
  if ( v152 != (char *)v152 + v42 )
  {
    do
    {
      if ( (unsigned int)sub_B19900(*((_QWORD *)v41 + 3)) )
      {
        *(_BYTE *)v125 = 1;
        if ( HIDWORD(v167) <= 2 && !WORD1(v167) )
          break;
      }
      v41 += 32;
    }
    while ( v43 != v41 );
  }
  v44 = _mm_load_si128(&v76);
  LODWORD(v153) = 0;
  v45 = _mm_load_si128(&v77);
  *(_BYTE *)v125 = 0;
  v46 = _mm_cvtsi32_si128(*(_DWORD *)(v85 + 24));
  v99 = v21;
  v47 = _mm_loadh_ps((const double *)&v85);
  v101 = 0;
  v100 = v79;
  v98[1] = v47;
  v112 = _mm_shuffle_epi32(v46, 224).m128i_u64[0];
  v48 = _mm_loadl_epi64(&v127);
  v104 = &v102;
  v105 = &v102;
  v109 = &v107;
  v110 = &v107;
  v102 = 0;
  v113 = v127.m128i_i32[1];
  v114 = &si128.m128i_i8[8];
  v103 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v111 = 0;
  v98[0] = v44;
  v98[2] = v45;
  v119 = 0;
  v127.m128i_i64[0] = _mm_add_epi32(v48, _mm_loadl_epi64((const __m128i *)&qword_3C86E78)).m128i_u64[0];
  v49 = v73.m128i_i64[1];
  v117 = 0;
  v121 = 0;
  v50 = v153;
  v118 = 0;
  v120 = 0;
  v126 = v75;
  v116 = 2;
  si128 = _mm_load_si128((const __m128i *)byte_3C7E9B0);
  if ( !(unsigned __int8)sub_856400(v81, v73.m128i_i64[1], v80) )
  {
    if ( v50 != -1 )
    {
      v49 = 0;
      sub_8941C0(v73.m128i_i64[1], 0, v50);
    }
    goto LABEL_43;
  }
  v49 = 1;
  if ( !(unsigned __int8)sub_8941C0(v73.m128i_i64[1], 1, v50) )
  {
LABEL_43:
    v51 = 0;
    goto LABEL_44;
  }
  v51 = *(unsigned __int8 *)v125 ^ 1;
LABEL_44:
  v52 = (__int64)v75;
  --v126[48];
  sub_822100(v52);
  v53 = ptr;
  if ( ptr != v15 )
    free(ptr);
  v54 = (char *)v152;
  v122 = &off_47DA958;
  v55 = (char *)v152 + 32 * (unsigned int)v153;
  if ( v152 != v55 )
  {
    do
    {
      v53 = *((void **)v54 + 3);
      if ( (unsigned int)sub_B19900(v53) )
      {
        *(_BYTE *)v125 = 1;
        if ( HIDWORD(v167) <= 2 && !WORD1(v167) )
          break;
      }
      v54 += 32;
    }
    while ( v55 != v54 );
  }
  v56 = (_QWORD **)v161;
  LODWORD(v153) = 0;
  if ( v161 )
  {
    while ( 1 )
    {
      sub_822210(v56[3]);
      v57 = (_QWORD **)v56[2];
      if ( *((_DWORD *)v56 + 10) > 1u )
        sub_69F740((__int64)(v56 + 5));
      v49 = 104;
      v53 = v56;
      operator delete(v56, 0x68u);
      if ( !v57 )
        break;
      v56 = v57;
    }
  }
  if ( !v159 )
  {
    v61 = 0;
    goto LABEL_63;
  }
  v63 = sub_69F620(v53, v49);
  v89 = nullptr;
  v88[0] = v63;
  v88[1] = v64;
  v90 = 0;
  v65 = sub_69F630(v53, v49);
  v66 = *((_QWORD **)&v157 + 1);
  v91[2] = 0;
  v91[0] = v65;
  v91[1] = v67;
  v91[3] = 0;
  v68 = *((_QWORD *)&v157 + 1) + 40LL * v159;
  if ( *((_QWORD *)&v157 + 1) != v68 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v66, v88) )
      {
        v69 = v66[3];
        if ( v69 == v90 )
        {
          v70 = (_QWORD *)v66[2];
          v71 = &v70[v69];
          v72 = v89;
          if ( v70 == v71 )
            goto LABEL_71;
          while ( *v70 == *v72 )
          {
            ++v70;
            ++v72;
            if ( v71 == v70 )
              goto LABEL_71;
          }
        }
      }
      sub_69F550(v66, v91);
LABEL_71:
      v66 += 5;
      if ( (_QWORD *)v68 == v66 )
      {
        v61 = 40LL * v159;
        goto LABEL_63;
      }
    }
  }
  v61 = 0;
LABEL_63:
  operator delete();
  if ( v152 != v83 )
    free(v152);
  sub_822100((__int64)v82);
  sub_A2CAF0(v73.m128i_i64[1], v61);
  if ( v78 )
    sub_25EA250(v78);
  return v51;
}

