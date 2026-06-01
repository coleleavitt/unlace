__int64 __fastcall sub_6877E0(__m128i *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _BOOL4 v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // edx
  __int128 v9; // xmm1
  __int128 si128; // xmm0
  unsigned int v11; // eax
  __m128i **v12; // rbp
  unsigned int v13; // r12d
  bool v14; // zf
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  char v22; // dl
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdi
  int v26; // edx
  __int64 v27; // r12
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // r13
  __int64 v32; // rax
  __m128i **v33; // rdi
  __m128i *v34; // r13
  __m128i *v35; // rbx
  __m128i **v36; // rdi
  __m128i **v37; // rdi
  __m128i *v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // r13
  __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  _QWORD *v45; // r14
  _DWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r12
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // r13d
  __m128i v52; // xmm0
  __m128i *v53; // rax
  __m128i v54; // xmm0
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 *v58; // rsi
  __int64 v59; // rax
  _BOOL4 v60; // edx
  unsigned __int64 v61; // rdx
  _QWORD *v62; // rax
  unsigned __int64 v63; // r12
  __int64 v64; // rsi
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rax
  char v67; // dl
  unsigned __int64 v68; // rax
  __m128i **v69; // rax
  __int64 v70; // rdx
  int v71; // edx
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  char *v74; // rbp
  __m128i **v75; // r13
  __m128i **v76; // rdi
  __m128i *v77; // r15
  __m128i *v78; // r14
  __m128i **v79; // rdi
  __m128i **v80; // rdi
  __m128i *v81; // r14
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 i; // r15
  __int64 v85; // rax
  _QWORD *v86; // rdx
  _QWORD *v87; // r15
  _QWORD *v88; // r13
  __int64 v89; // rbp
  __int64 v90; // r13
  __int64 v91; // rdx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rbp
  _QWORD *v95; // r14
  __int64 v96; // rdx
  unsigned __int64 v97; // rcx
  _QWORD *v98; // rdx
  __int64 v99; // r13
  __int64 v100; // rax
  _DWORD *v101; // rdx
  __int64 v102; // r12
  __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  _QWORD *v105; // rdx
  __int64 v106; // r13
  __int64 v107; // rax
  _DWORD *v108; // rdx
  __int64 v109; // rdi
  int v110; // eax
  __int64 v111; // rdi
  int v112; // eax
  __int64 v113; // rdi
  int v114; // eax
  __int64 v115; // rdi
  int v116; // eax
  unsigned __int64 v117; // [rsp+28h] [rbp-630h]
  char *v118; // [rsp+28h] [rbp-630h]
  __m128i v119; // [rsp+30h] [rbp-628h] BYREF
  __m128i v120; // [rsp+40h] [rbp-618h] BYREF
  __m128i *v121; // [rsp+58h] [rbp-600h] BYREF
  __int64 v122; // [rsp+60h] [rbp-5F8h] BYREF
  int v123; // [rsp+68h] [rbp-5F0h]
  __int64 v124; // [rsp+70h] [rbp-5E8h]
  __m128i v125; // [rsp+80h] [rbp-5D8h] BYREF
  __m128i v126[3]; // [rsp+90h] [rbp-5C8h] BYREF
  __m128i *v127; // [rsp+C0h] [rbp-598h] BYREF
  __m128i v128; // [rsp+C8h] [rbp-590h]
  __m128i v129; // [rsp+D8h] [rbp-580h]
  __m128i *v130; // [rsp+E8h] [rbp-570h]
  __int64 v131; // [rsp+F0h] [rbp-568h]
  int v132; // [rsp+F8h] [rbp-560h]
  __m128i v133; // [rsp+100h] [rbp-558h] BYREF
  __m128i v134[3]; // [rsp+110h] [rbp-548h] BYREF
  __int64 v135; // [rsp+140h] [rbp-518h]
  int v136; // [rsp+148h] [rbp-510h]
  __m128i **v137; // [rsp+160h] [rbp-4F8h]
  _OWORD v138[5]; // [rsp+170h] [rbp-4E8h] BYREF
  _BOOL4 v139; // [rsp+1C0h] [rbp-498h]
  __int64 v140; // [rsp+1C4h] [rbp-494h]
  __int64 v141; // [rsp+1D0h] [rbp-488h]
  __int64 v142; // [rsp+1E0h] [rbp-478h]
  __int64 v143; // [rsp+1E8h] [rbp-470h]
  int v144; // [rsp+1F0h] [rbp-468h]
  __int128 v145; // [rsp+208h] [rbp-450h]
  __int64 v146; // [rsp+238h] [rbp-420h]
  int v147; // [rsp+240h] [rbp-418h]
  __m128i **v148; // [rsp+258h] [rbp-400h]
  _OWORD *v149; // [rsp+2F0h] [rbp-368h] BYREF
  int v150; // [rsp+2F8h] [rbp-360h]
  _QWORD *v151; // [rsp+300h] [rbp-358h]
  __m128i **v152; // [rsp+308h] [rbp-350h]
  void **v153; // [rsp+310h] [rbp-348h]
  void *v154; // [rsp+318h] [rbp-340h] BYREF
  int v155; // [rsp+320h] [rbp-338h]
  __m128i v156; // [rsp+330h] [rbp-328h] BYREF
  char v157; // [rsp+340h] [rbp-318h] BYREF
  __int128 v158; // [rsp+370h] [rbp-2E8h]
  _BOOL4 v159; // [rsp+380h] [rbp-2D8h]
  __int64 v160; // [rsp+384h] [rbp-2D4h]
  __int64 v161; // [rsp+390h] [rbp-2C8h]
  __int64 v162; // [rsp+3A0h] [rbp-2B8h]
  __int64 v163; // [rsp+3A8h] [rbp-2B0h]
  int v164; // [rsp+3B0h] [rbp-2A8h]
  __int128 v165; // [rsp+3C8h] [rbp-290h]
  __int64 v166; // [rsp+3F8h] [rbp-260h]
  int v167; // [rsp+400h] [rbp-258h]
  __int64 v168; // [rsp+418h] [rbp-240h]
  char *v169; // [rsp+440h] [rbp-218h]
  int v170; // [rsp+448h] [rbp-210h]
  char v171; // [rsp+450h] [rbp-208h] BYREF
  __m128i *v172; // [rsp+4B0h] [rbp-1A8h]
  int v173; // [rsp+4B8h] [rbp-1A0h]
  void *ptr; // [rsp+5F0h] [rbp-68h]
  int v175; // [rsp+5F8h] [rbp-60h]
  char v176; // [rsp+600h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 120);
  if ( v4 )
  {
    if ( v4 > 7 )
      goto LABEL_3;
    if ( (a1[2].m128i_i8[0] & 1) == 0 )
      goto LABEL_13;
LABEL_10:
    v13 = 0;
    if ( (unsigned __int8)sub_67E0B0((__int64)a1, a2, *(_DWORD *)(a2 + 24)) )
      return v13;
    v4 = *(_QWORD *)(a2 + 120);
    v16 = v4;
    if ( v4 )
    {
LABEL_12:
      if ( v16 > 7 )
        goto LABEL_5;
LABEL_13:
      v17 = *(_QWORD *)(a2 + 88);
      if ( (v17 & 1) != 0 || (v17 & 2) != 0 )
        goto LABEL_62;
      if ( (v17 & 1) != 0 )
      {
        v22 = v17 & 0xFE;
      }
      else
      {
        if ( (v17 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          goto LABEL_62;
        if ( ((v17 >> 1) & 1) == 0 )
          goto LABEL_5;
        v18 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
        v19 = v18[2275];
        if ( v19 )
        {
          v20 = v18[274];
          v18[284] += 24LL;
          v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18[275] >= v21 + 24 && v20 )
            v18[274] = v21 + 24;
          else
            v21 = sub_67A630((__int64)(v18 + 274), 24, 3);
          *(_QWORD *)v21 = v19;
          v17 = v21 | 5;
          *(_DWORD *)(v21 + 8) = 0;
          *(_QWORD *)(v21 + 16) = a2;
          *(_QWORD *)(a2 + 88) = v21 | 5;
          v22 = v21 & 0xFA | 4;
        }
        else
        {
          v17 = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(a2 + 88) = v17;
          v22 = a2 & 0xFA;
          if ( (a2 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            goto LABEL_62;
        }
      }
      v23 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v23;
      if ( (v22 & 4) == 0 )
      {
LABEL_28:
        v5 = v24 != 0;
        goto LABEL_6;
      }
      if ( v23 )
      {
        v25 = *(_QWORD **)v23;
        v26 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
        if ( *(_DWORD *)(v23 + 8) != v26 )
        {
          *(_DWORD *)(v23 + 8) = v26;
          v117 = v23;
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, unsigned __int64))(*v25 + 144LL))(v25, a2, *v25, v23);
          v23 = v117;
        }
        v24 = *(_QWORD *)(v23 + 16);
        goto LABEL_28;
      }
LABEL_62:
      v5 = 0;
      goto LABEL_6;
    }
    goto LABEL_60;
  }
  v27 = *(_QWORD *)(a2 + 96);
  v28 = *(_QWORD *)(v27 + 88);
  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v28 & 1) != 0 )
  {
    if ( v29 )
      goto LABEL_54;
LABEL_124:
    if ( (a1[2].m128i_i8[0] & 1) == 0 )
    {
LABEL_125:
      v96 = *(_QWORD *)(v27 + 88);
      v97 = v96 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v96 & 1) != 0 )
      {
        if ( !v97 )
          goto LABEL_13;
      }
      else
      {
        if ( v97 <= 3 )
        {
          if ( !v97 )
            goto LABEL_13;
          goto LABEL_137;
        }
        if ( (v96 & 2) == 0 )
          goto LABEL_13;
        v98 = (_QWORD *)(v96 & 0xFFFFFFFFFFFFFFFCLL);
        v99 = v98[2275];
        if ( !v99 )
        {
          *(_QWORD *)(v27 + 88) = v27 & 0xFFFFFFFFFFFFFFFALL | 1;
          if ( (v27 & 0xFFFFFFFFFFFFFFFALL) == 0 )
          {
LABEL_155:
            v16 = *(_QWORD *)(a2 + 120);
            goto LABEL_12;
          }
          goto LABEL_136;
        }
        v100 = v98[274];
        v98[284] += 24LL;
        v97 = (v100 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v98[275] >= v97 + 24 && v100 )
          v98[274] = v97 + 24;
        else
          v97 = sub_67A630((__int64)(v98 + 274), 24, 3);
        *(_QWORD *)v97 = v99;
        *(_DWORD *)(v97 + 8) = 0;
        v96 = v97 | 5;
        *(_QWORD *)(v97 + 16) = v27;
        *(_QWORD *)(v27 + 88) = v97 | 5;
        LOBYTE(v97) = v97 & 0xFA | 4;
      }
      if ( (v97 & 4) != 0 )
      {
        v101 = (_DWORD *)(v96 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v101 )
        {
          v111 = *(_QWORD *)v101;
          v112 = *(_DWORD *)(*(_QWORD *)v101 + 12LL);
          if ( v101[2] != v112 )
          {
            v101[2] = v112;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v111 + 144LL))(v111, v27);
            goto LABEL_155;
          }
        }
      }
LABEL_136:
      v4 = *(_QWORD *)(a2 + 120);
LABEL_137:
      v16 = v4;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ( v29 <= 3 )
  {
    if ( v29 )
    {
LABEL_58:
      if ( (a1[2].m128i_i8[0] & 1) == 0 )
      {
        if ( v4 )
          goto LABEL_13;
LABEL_60:
        v27 = *(_QWORD *)(a2 + 96);
        goto LABEL_125;
      }
      goto LABEL_10;
    }
    goto LABEL_124;
  }
  if ( (v28 & 2) == 0 )
    goto LABEL_124;
  v30 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
  v31 = v30[2275];
  if ( !v31 )
  {
    *(_QWORD *)(v27 + 88) = v27 & 0xFFFFFFFFFFFFFFFALL | 1;
    v4 = *(_QWORD *)(a2 + 120);
    goto LABEL_57;
  }
  v32 = v30[274];
  v30[284] += 24LL;
  v29 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v30[275] >= v29 + 24 && v32 )
    v30[274] = v29 + 24;
  else
    v29 = sub_67A630((__int64)(v30 + 274), 24, 3);
  *(_QWORD *)v29 = v31;
  *(_DWORD *)(v29 + 8) = 0;
  v28 = v29 | 5;
  *(_QWORD *)(v29 + 16) = v27;
  *(_QWORD *)(v27 + 88) = v29 | 5;
  LOBYTE(v29) = v29 & 0xFA | 4;
LABEL_54:
  if ( (v29 & 4) != 0 )
  {
    v46 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v46 )
    {
      v109 = *(_QWORD *)v46;
      v110 = *(_DWORD *)(*(_QWORD *)v46 + 12LL);
      if ( v46[2] != v110 )
      {
        v46[2] = v110;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v109 + 144LL))(v109, v27);
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 120);
LABEL_57:
  if ( v4 <= 7 )
    goto LABEL_58;
LABEL_3:
  if ( a2 != *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    if ( (a1[2].m128i_i8[0] & 1) == 0 )
    {
LABEL_5:
      v5 = 1;
LABEL_6:
      v6 = *(_DWORD *)(a2 + 24);
      v7 = a1[2].m128i_i64[1];
      v165 = 0;
      v158 = 0;
      v164 = 1;
      v168 = 0;
      v166 = 0;
      v167 = 0;
      v159 = v5;
      v160 = 0;
      v162 = 0;
      v161 = 0;
      v163 = 0;
      v173 = 0;
      sub_639C80((__int64)&v133, a2, v6, v7);
      v8 = *(_DWORD *)(a2 + 24);
      v9 = (__int128)_mm_load_si128(&v133);
      si128 = (__int128)_mm_load_si128(v134);
      v172 = &v156;
      v138[0] = v9;
      v138[1] = si128;
      v11 = sub_680210(a1, a2, v8, (__int64)&v156, 0, nullptr, v9, si128);
      v12 = (__m128i **)v168;
      v13 = v11;
      if ( v168 )
      {
        v14 = (*(_DWORD *)(v168 + 712))-- == 1;
        if ( v14 )
        {
          v33 = (__m128i **)v12[85];
          if ( v33 != v12 + 87 )
            free(v33);
          v34 = v12[21];
          v35 = (__m128i *)((char *)v34 + 248 * *((unsigned int *)v12 + 44));
          if ( v34 != v35 )
          {
            do
            {
              v36 = (__m128i **)v35[-5].m128i_i64[0];
              v35 = (__m128i *)((char *)v35 - 248);
              sub_67AA40(v36);
            }
            while ( v34 != v35 );
            v35 = v12[21];
          }
          if ( v35 != (__m128i *)(v12 + 23) )
            free(v35);
          v37 = (__m128i **)v12[1];
          if ( v37 != v12 + 3 )
            free(v37);
          --(*v12)[15].m128i_i32[0];
          v38 = *v12;
          if ( !v38[15].m128i_i32[0] )
          {
            v39 = v38[13].m128i_i64[0];
            v40 = v39 + 16LL * v38[13].m128i_u32[2];
            while ( v40 != v39 )
            {
              v39 += 16;
              operator delete();
            }
            v38[13].m128i_i32[2] = 0;
            v41 = v38[10].m128i_u32[2];
            if ( (_DWORD)v41 )
            {
              v42 = (_QWORD *)v38[10].m128i_i64[0];
              v43 = v41;
              v38[14].m128i_i64[0] = 0;
              v44 = &v42[v43];
              v45 = v42 + 1;
              v38[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v42, (__m128i)(unsigned __int64)(*v42 + 4096LL));
              if ( v43 != 1 )
              {
                do
                {
                  ++v45;
                  operator delete();
                }
                while ( v44 != v45 );
              }
              v38[10].m128i_i32[2] = 1;
            }
          }
        }
      }
      return v13;
    }
    goto LABEL_10;
  }
  ++a1[15].m128i_i32[0];
  v134[0] = 0;
  v121 = a1;
  v137 = nullptr;
  v135 = 0;
  v136 = 0;
  clang_getNullCursor(&v119);
  v128 = _mm_loadu_si128(&v119);
  v129 = _mm_loadu_si128(&v120);
  v47 = sub_7BACE0(a2);
  v48 = v47;
  if ( v47 )
  {
    sub_67F660((__int64)a1, v47, &v133, (__int64)&v121);
    v49 = sub_7BA050(a2);
    v50 = a1[2].m128i_i64[1];
    v51 = v49;
    v127 = &v133;
    sub_639BE0(&v119, v48, v49, v50);
    v52 = _mm_loadu_si128(&v119);
    v53 = nullptr;
    if ( v51 )
      v53 = a1;
    v132 = v51;
    v128 = v52;
    v54 = _mm_loadu_si128(&v120);
    v130 = v53;
    v131 = 0;
    v129 = v54;
    if ( (a1[2].m128i_i8[0] & 1) != 0 )
      sub_67E0B0((__int64)a1, v48, v51);
  }
  v55 = *(_QWORD *)(a2 + 120);
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v56 = v55;
  if ( !v55 )
  {
    v102 = *(_QWORD *)(a2 + 96);
    v103 = *(_QWORD *)(v102 + 88);
    v104 = v103 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v103 & 1) != 0 )
    {
      if ( v104 )
        goto LABEL_146;
    }
    else if ( v104 <= 3 )
    {
      if ( v104 )
        goto LABEL_149;
    }
    else if ( (v103 & 2) != 0 )
    {
      v105 = (_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
      v106 = v105[2275];
      if ( !v106 )
      {
        *(_QWORD *)(v102 + 88) = v102 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v102 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_170:
          v55 = *(_QWORD *)(a2 + 120);
          goto LABEL_69;
        }
        goto LABEL_148;
      }
      v107 = v105[274];
      v105[284] += 24LL;
      v104 = (v107 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v105[275] >= v104 + 24 && v107 )
        v105[274] = v104 + 24;
      else
        v104 = sub_67A630((__int64)(v105 + 274), 24, 3);
      *(_QWORD *)v104 = v106;
      v103 = v104 | 5;
      *(_DWORD *)(v104 + 8) = 0;
      *(_QWORD *)(v104 + 16) = v102;
      *(_QWORD *)(v102 + 88) = v104 | 5;
      LOBYTE(v104) = v104 & 0xFA | 4;
LABEL_146:
      if ( (v104 & 4) != 0 )
      {
        v108 = (_DWORD *)(v103 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v108 )
        {
          v113 = *(_QWORD *)v108;
          v114 = *(_DWORD *)(*(_QWORD *)v108 + 12LL);
          if ( v108[2] != v114 )
          {
            v108[2] = v114;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v113 + 144LL))(v113, v102);
            goto LABEL_170;
          }
        }
      }
LABEL_148:
      v56 = *(_QWORD *)(a2 + 120);
LABEL_149:
      v55 = v56;
      goto LABEL_69;
    }
LABEL_71:
    v58 = &v122;
    goto LABEL_72;
  }
LABEL_69:
  if ( v55 <= 7 )
    goto LABEL_71;
  v57 = v55 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != *(_QWORD *)v57 )
    goto LABEL_71;
  if ( (*(_BYTE *)(v57 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a2);
    v57 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v58 = (__int64 *)(v57 + 16);
LABEL_72:
  sub_685B80(&v156, (__int64)v58, (__int64)a1, (__int64)&v121);
  v59 = *(_QWORD *)(a2 + 88);
  v60 = 0;
  if ( (v59 & 1) != 0 || (v59 & 2) != 0 )
    goto LABEL_85;
  v61 = v59 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v59 & 1) != 0 )
    goto LABEL_166;
  if ( v61 <= 3 )
  {
    v63 = 0;
    goto LABEL_84;
  }
  v60 = 1;
  if ( ((v59 >> 1) & 1) != 0 )
  {
    v62 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
    v63 = v62[2275];
    if ( v63 )
    {
      v64 = v62[274];
      v62[284] += 24LL;
      v65 = ((v64 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
      if ( v62[275] >= v65 && v64 )
      {
        v62[274] = v65;
        v66 = (v64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v66 = sub_67A630((__int64)(v62 + 274), 24, 3);
      }
      *(_QWORD *)v66 = v63;
      *(_DWORD *)(v66 + 8) = 0;
      *(_QWORD *)(v66 + 16) = a2;
      *(_QWORD *)(a2 + 88) = v66 | 5;
      v67 = v66;
      v68 = v66 & 0xFFFFFFFFFFFFFFF8LL;
      v63 = v68;
      LOBYTE(v61) = v67 & 0xFA | 4;
LABEL_82:
      if ( (v61 & 4) != 0 && v68 )
      {
        v115 = *(_QWORD *)v63;
        v116 = *(_DWORD *)(*(_QWORD *)v63 + 12LL);
        if ( *(_DWORD *)(v63 + 8) != v116 )
        {
          *(_DWORD *)(v63 + 8) = v116;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v115 + 144LL))(v115, a2);
        }
        v60 = *(_QWORD *)(v63 + 16) != 0;
        goto LABEL_85;
      }
      goto LABEL_84;
    }
    *(_QWORD *)(a2 + 88) = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
    LOBYTE(v61) = a2 & 0xFA;
    if ( (a2 & 0xFFFFFFFFFFFFFFFALL) != 0 )
    {
      v59 = a2;
LABEL_166:
      v68 = v59 & 0xFFFFFFFFFFFFFFF8LL;
      v63 = v68;
      goto LABEL_82;
    }
LABEL_84:
    v60 = v63 != 0;
  }
LABEL_85:
  v139 = v60;
  v140 = 0x100000001LL;
  v145 = 0;
  v154 = ptr;
  v138[4] = 0;
  v155 = v175;
  v144 = 2;
  v148 = nullptr;
  v146 = 0;
  v147 = 0;
  v142 = 0;
  v141 = 0;
  v143 = 0;
  v150 = 1;
  v151 = &v149;
  v69 = (__m128i **)sub_7BACE0(a2);
  if ( v69 )
    v69 = &v127;
  v70 = a1[2].m128i_i64[1];
  v152 = v69;
  v153 = &v154;
  sub_639160((__int64)&v125, a2, v70, 0, 1u);
  v71 = *(_DWORD *)(a2 + 24);
  v72 = (__int128)_mm_load_si128(&v125);
  v149 = v138;
  v73 = (__int128)_mm_load_si128(v126);
  v126[1] = (__m128i)v72;
  v126[2] = (__m128i)v73;
  v13 = sub_680210(a1, a2, v71, (__int64)v138, 0, nullptr, v72, v73);
  sub_67AA40(v148);
  if ( ptr != &v176 )
    free(ptr);
  v118 = v169;
  v74 = &v169[104 * v170];
  if ( v169 != v74 )
  {
    do
    {
      v75 = *((__m128i ***)v74 - 1);
      v74 -= 104;
      if ( v75 )
      {
        v14 = (*((_DWORD *)v75 + 178))-- == 1;
        if ( v14 )
        {
          v76 = (__m128i **)v75[85];
          if ( v76 != v75 + 87 )
            free(v76);
          v77 = v75[21];
          v78 = (__m128i *)((char *)v77 + 248 * *((unsigned int *)v75 + 44));
          if ( v77 != v78 )
          {
            do
            {
              v79 = (__m128i **)v78[-5].m128i_i64[0];
              v78 = (__m128i *)((char *)v78 - 248);
              sub_67AA40(v79);
            }
            while ( v77 != v78 );
            v78 = v75[21];
          }
          if ( v78 != (__m128i *)(v75 + 23) )
            free(v78);
          v80 = (__m128i **)v75[1];
          if ( v80 != v75 + 3 )
            free(v80);
          --(*v75)[15].m128i_i32[0];
          v81 = *v75;
          if ( !(*v75)[15].m128i_i32[0] )
          {
            v82 = v81[13].m128i_i64[0];
            v83 = v82 + 16LL * v81[13].m128i_u32[2];
            for ( i = v82; v83 != i; i += 16 )
              operator delete();
            v85 = v81[10].m128i_u32[2];
            v81[13].m128i_i32[2] = 0;
            if ( (_DWORD)v85 )
            {
              v86 = (_QWORD *)v81[10].m128i_i64[0];
              v81[14].m128i_i64[0] = 0;
              v87 = v86 + 1;
              v88 = &v86[v85];
              v81[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v86, (__m128i)(unsigned __int64)(*v86 + 4096LL));
              if ( 8 * v85 != 8 )
              {
                do
                {
                  ++v87;
                  operator delete();
                }
                while ( v88 != v87 );
              }
              v81[10].m128i_i32[2] = 1;
            }
          }
        }
      }
    }
    while ( v118 != v74 );
    v74 = v169;
  }
  if ( v74 != &v171 )
    free(v74);
  if ( (char *)v156.m128i_i64[0] != &v157 )
    free((void *)v156.m128i_i64[0]);
  sub_67AA40(v137);
  v14 = a1[15].m128i_i32[0]-- == 1;
  if ( v14 )
  {
    v89 = a1[13].m128i_i64[0];
    v90 = v89 + 16LL * a1[13].m128i_u32[2];
    while ( v90 != v89 )
    {
      v89 += 16;
      operator delete();
    }
    a1[13].m128i_i32[2] = 0;
    v91 = a1[10].m128i_u32[2];
    if ( (_DWORD)v91 )
    {
      v92 = (_QWORD *)a1[10].m128i_i64[0];
      v93 = v91;
      a1[14].m128i_i64[0] = 0;
      v94 = &v92[v93];
      v95 = v92 + 1;
      a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v92, (__m128i)(unsigned __int64)(*v92 + 4096LL));
      if ( v93 != 1 )
      {
        do
        {
          ++v95;
          operator delete();
        }
        while ( v94 != v95 );
      }
      a1[10].m128i_i32[2] = 1;
    }
  }
  return v13;
}

