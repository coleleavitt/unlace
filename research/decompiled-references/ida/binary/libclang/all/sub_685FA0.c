__int64 __fastcall sub_685FA0(__m128i *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _BOOL4 v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // edx
  __int128 si128; // xmm0
  unsigned int v10; // eax
  __m128i **v11; // rbp
  unsigned int v12; // r12d
  bool v13; // zf
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  char v21; // dl
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rdi
  int v25; // edx
  __int64 v26; // r12
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rax
  __m128i **v32; // rdi
  __m128i *v33; // r13
  __m128i *v34; // rbx
  __m128i **v35; // rdi
  __m128i **v36; // rdi
  __m128i *v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // r13
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  _QWORD *v44; // r14
  _DWORD *v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  _QWORD *v48; // rsi
  __int64 *v49; // rsi
  __int64 v50; // rax
  _BOOL4 v51; // edx
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rax
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rax
  char v58; // dl
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // edx
  __int128 v62; // xmm0
  char *v63; // rbp
  __m128i **v64; // r13
  __m128i **v65; // rdi
  __m128i *v66; // r15
  __m128i *v67; // r14
  __m128i **v68; // rdi
  __m128i **v69; // rdi
  __m128i *v70; // r14
  __int64 v71; // rax
  __int64 v72; // r13
  __int64 i; // r15
  __int64 v74; // rax
  _QWORD *v75; // rdx
  _QWORD *v76; // r15
  _QWORD *v77; // r13
  __int64 v78; // rbp
  __int64 v79; // r13
  __int64 v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _QWORD *v83; // rbp
  _QWORD *v84; // r14
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  _QWORD *v87; // rdx
  __int64 v88; // r13
  __int64 v89; // rax
  _DWORD *v90; // rdx
  __int64 v91; // r12
  __int64 v92; // rdx
  unsigned __int64 v93; // rcx
  _QWORD *v94; // rdx
  __int64 v95; // r13
  __int64 v96; // rax
  _DWORD *v97; // rdx
  __int64 v98; // rdi
  int v99; // eax
  __int64 v100; // rdi
  int v101; // eax
  __int64 v102; // rdi
  int v103; // eax
  __int64 v104; // rdi
  int v105; // eax
  unsigned __int64 v106; // [rsp+28h] [rbp-540h]
  char *v107; // [rsp+28h] [rbp-540h]
  __m128i *v108; // [rsp+38h] [rbp-530h] BYREF
  __int64 v109; // [rsp+40h] [rbp-528h] BYREF
  int v110; // [rsp+48h] [rbp-520h]
  __int64 v111; // [rsp+50h] [rbp-518h]
  __m128i v112; // [rsp+60h] [rbp-508h] BYREF
  __m128i v113; // [rsp+70h] [rbp-4F8h] BYREF
  __int128 v114; // [rsp+80h] [rbp-4E8h] BYREF
  __int128 v115; // [rsp+90h] [rbp-4D8h] BYREF
  __int128 v116[5]; // [rsp+A0h] [rbp-4C8h] BYREF
  _BOOL4 v117; // [rsp+F0h] [rbp-478h]
  __int64 v118; // [rsp+F4h] [rbp-474h]
  __int64 v119; // [rsp+100h] [rbp-468h]
  __int64 v120; // [rsp+110h] [rbp-458h]
  __int64 v121; // [rsp+118h] [rbp-450h]
  int v122; // [rsp+120h] [rbp-448h]
  __int128 v123; // [rsp+138h] [rbp-430h]
  __int64 v124; // [rsp+168h] [rbp-400h]
  int v125; // [rsp+170h] [rbp-3F8h]
  __m128i **v126; // [rsp+188h] [rbp-3E0h]
  __int128 *v127; // [rsp+220h] [rbp-348h]
  int v128; // [rsp+228h] [rbp-340h]
  void *v129; // [rsp+230h] [rbp-338h]
  int v130; // [rsp+238h] [rbp-330h]
  __m128i v131; // [rsp+240h] [rbp-328h] BYREF
  char v132; // [rsp+250h] [rbp-318h] BYREF
  __int128 v133; // [rsp+280h] [rbp-2E8h]
  _BOOL4 v134; // [rsp+290h] [rbp-2D8h]
  __int64 v135; // [rsp+294h] [rbp-2D4h]
  __int64 v136; // [rsp+2A0h] [rbp-2C8h]
  __int64 v137; // [rsp+2B0h] [rbp-2B8h]
  __int64 v138; // [rsp+2B8h] [rbp-2B0h]
  int v139; // [rsp+2C0h] [rbp-2A8h]
  __int128 v140; // [rsp+2D8h] [rbp-290h]
  __int64 v141; // [rsp+308h] [rbp-260h]
  int v142; // [rsp+310h] [rbp-258h]
  __int64 v143; // [rsp+328h] [rbp-240h]
  char *v144; // [rsp+350h] [rbp-218h]
  int v145; // [rsp+358h] [rbp-210h]
  char v146; // [rsp+360h] [rbp-208h] BYREF
  __m128i *v147; // [rsp+3C0h] [rbp-1A8h]
  int v148; // [rsp+3C8h] [rbp-1A0h]
  void *ptr; // [rsp+500h] [rbp-68h]
  int v150; // [rsp+508h] [rbp-60h]
  char v151; // [rsp+510h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    if ( v4 > 7 )
      goto LABEL_3;
    if ( (a1[2].m128i_i8[0] & 1) == 0 )
      goto LABEL_13;
LABEL_10:
    v12 = 0;
    if ( (unsigned __int8)sub_67E0B0((__int64)a1, a2, *(_DWORD *)(a2 + 24)) )
      return v12;
    v4 = *(_QWORD *)(a2 + 104);
    v15 = v4;
    if ( v4 )
    {
LABEL_12:
      if ( v15 > 7 )
        goto LABEL_5;
LABEL_13:
      v16 = *(_QWORD *)(a2 + 88);
      if ( (v16 & 1) != 0 || (v16 & 2) != 0 )
        goto LABEL_62;
      if ( (v16 & 1) != 0 )
      {
        v21 = v16 & 0xFE;
      }
      else
      {
        if ( (v16 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          goto LABEL_62;
        if ( ((v16 >> 1) & 1) == 0 )
          goto LABEL_5;
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        v18 = v17[2275];
        if ( v18 )
        {
          v19 = v17[274];
          v17[284] += 24LL;
          v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17[275] >= v20 + 24 && v19 )
            v17[274] = v20 + 24;
          else
            v20 = sub_67A630((__int64)(v17 + 274), 24, 3);
          *(_QWORD *)v20 = v18;
          v16 = v20 | 5;
          *(_DWORD *)(v20 + 8) = 0;
          *(_QWORD *)(v20 + 16) = a2;
          *(_QWORD *)(a2 + 88) = v20 | 5;
          v21 = v20 & 0xFA | 4;
        }
        else
        {
          v16 = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(a2 + 88) = v16;
          v21 = a2 & 0xFA;
          if ( (a2 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            goto LABEL_62;
        }
      }
      v22 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      v23 = v22;
      if ( (v21 & 4) == 0 )
      {
LABEL_28:
        v5 = v23 != 0;
        goto LABEL_6;
      }
      if ( v22 )
      {
        v24 = *(_QWORD **)v22;
        v25 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
        if ( *(_DWORD *)(v22 + 8) != v25 )
        {
          *(_DWORD *)(v22 + 8) = v25;
          v106 = v22;
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, unsigned __int64))(*v24 + 144LL))(v24, a2, *v24, v22);
          v22 = v106;
        }
        v23 = *(_QWORD *)(v22 + 16);
        goto LABEL_28;
      }
LABEL_62:
      v5 = 0;
      goto LABEL_6;
    }
    goto LABEL_60;
  }
  v26 = *(_QWORD *)(a2 + 96);
  v27 = *(_QWORD *)(v26 + 88);
  v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v27 & 1) != 0 )
  {
    if ( v28 )
      goto LABEL_54;
LABEL_117:
    if ( (a1[2].m128i_i8[0] & 1) == 0 )
    {
LABEL_118:
      v85 = *(_QWORD *)(v26 + 88);
      v86 = v85 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v85 & 1) != 0 )
      {
        if ( !v86 )
          goto LABEL_13;
      }
      else
      {
        if ( v86 <= 3 )
        {
          if ( !v86 )
            goto LABEL_13;
          goto LABEL_130;
        }
        if ( (v85 & 2) == 0 )
          goto LABEL_13;
        v87 = (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFCLL);
        v88 = v87[2275];
        if ( !v88 )
        {
          *(_QWORD *)(v26 + 88) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
          if ( (v26 & 0xFFFFFFFFFFFFFFFALL) == 0 )
          {
LABEL_146:
            v15 = *(_QWORD *)(a2 + 104);
            goto LABEL_12;
          }
          goto LABEL_129;
        }
        v89 = v87[274];
        v87[284] += 24LL;
        v86 = (v89 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v87[275] >= v86 + 24 && v89 )
          v87[274] = v86 + 24;
        else
          v86 = sub_67A630((__int64)(v87 + 274), 24, 3);
        *(_QWORD *)v86 = v88;
        *(_DWORD *)(v86 + 8) = 0;
        v85 = v86 | 5;
        *(_QWORD *)(v86 + 16) = v26;
        *(_QWORD *)(v26 + 88) = v86 | 5;
        LOBYTE(v86) = v86 & 0xFA | 4;
      }
      if ( (v86 & 4) != 0 )
      {
        v90 = (_DWORD *)(v85 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v90 )
        {
          v100 = *(_QWORD *)v90;
          v101 = *(_DWORD *)(*(_QWORD *)v90 + 12LL);
          if ( v90[2] != v101 )
          {
            v90[2] = v101;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v100 + 144LL))(v100, v26);
            goto LABEL_146;
          }
        }
      }
LABEL_129:
      v4 = *(_QWORD *)(a2 + 104);
LABEL_130:
      v15 = v4;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ( v28 <= 3 )
  {
    if ( v28 )
    {
LABEL_58:
      if ( (a1[2].m128i_i8[0] & 1) == 0 )
      {
        if ( v4 )
          goto LABEL_13;
LABEL_60:
        v26 = *(_QWORD *)(a2 + 96);
        goto LABEL_118;
      }
      goto LABEL_10;
    }
    goto LABEL_117;
  }
  if ( (v27 & 2) == 0 )
    goto LABEL_117;
  v29 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
  v30 = v29[2275];
  if ( !v30 )
  {
    *(_QWORD *)(v26 + 88) = v26 & 0xFFFFFFFFFFFFFFFALL | 1;
    v4 = *(_QWORD *)(a2 + 104);
    goto LABEL_57;
  }
  v31 = v29[274];
  v29[284] += 24LL;
  v28 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v29[275] >= v28 + 24 && v31 )
    v29[274] = v28 + 24;
  else
    v28 = sub_67A630((__int64)(v29 + 274), 24, 3);
  *(_QWORD *)v28 = v30;
  *(_DWORD *)(v28 + 8) = 0;
  v27 = v28 | 5;
  *(_QWORD *)(v28 + 16) = v26;
  *(_QWORD *)(v26 + 88) = v28 | 5;
  LOBYTE(v28) = v28 & 0xFA | 4;
LABEL_54:
  if ( (v28 & 4) != 0 )
  {
    v45 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v45 )
    {
      v98 = *(_QWORD *)v45;
      v99 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
      if ( v45[2] != v99 )
      {
        v45[2] = v99;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 144LL))(v98, v26);
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 104);
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
      v140 = 0;
      v133 = 0;
      v139 = 1;
      v143 = 0;
      v141 = 0;
      v142 = 0;
      v134 = v5;
      v135 = 0;
      v137 = 0;
      v136 = 0;
      v138 = 0;
      v148 = 0;
      sub_639C30(&v114, a2, v6, v7);
      v8 = *(_DWORD *)(a2 + 24);
      si128 = (__int128)_mm_load_si128((const __m128i *)&v115);
      v116[0] = (__int128)_mm_load_si128((const __m128i *)&v114);
      v116[1] = si128;
      v147 = &v131;
      v10 = sub_680210(a1, a2, v8, (__int64)&v131, 0, nullptr, v116[0], si128);
      v11 = (__m128i **)v143;
      v12 = v10;
      if ( v143 )
      {
        v13 = (*(_DWORD *)(v143 + 712))-- == 1;
        if ( v13 )
        {
          v32 = (__m128i **)v11[85];
          if ( v32 != v11 + 87 )
            free(v32);
          v33 = v11[21];
          v34 = (__m128i *)((char *)v33 + 248 * *((unsigned int *)v11 + 44));
          if ( v33 != v34 )
          {
            do
            {
              v35 = (__m128i **)v34[-5].m128i_i64[0];
              v34 = (__m128i *)((char *)v34 - 248);
              sub_67AA40(v35);
            }
            while ( v33 != v34 );
            v34 = v11[21];
          }
          if ( v34 != (__m128i *)(v11 + 23) )
            free(v34);
          v36 = (__m128i **)v11[1];
          if ( v36 != v11 + 3 )
            free(v36);
          --(*v11)[15].m128i_i32[0];
          v37 = *v11;
          if ( !v37[15].m128i_i32[0] )
          {
            v38 = v37[13].m128i_i64[0];
            v39 = v38 + 16LL * v37[13].m128i_u32[2];
            while ( v39 != v38 )
            {
              v38 += 16;
              operator delete();
            }
            v37[13].m128i_i32[2] = 0;
            v40 = v37[10].m128i_u32[2];
            if ( (_DWORD)v40 )
            {
              v41 = (_QWORD *)v37[10].m128i_i64[0];
              v42 = v40;
              v37[14].m128i_i64[0] = 0;
              v43 = &v41[v42];
              v44 = v41 + 1;
              v37[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v41, (__m128i)(unsigned __int64)(*v41 + 4096LL));
              if ( v42 != 1 )
              {
                do
                {
                  ++v44;
                  operator delete();
                }
                while ( v43 != v44 );
              }
              v37[10].m128i_i32[2] = 1;
            }
          }
        }
      }
      return v12;
    }
    goto LABEL_10;
  }
  ++a1[15].m128i_i32[0];
  v46 = *(_QWORD *)(a2 + 104);
  v108 = a1;
  v109 = 0;
  v47 = v46;
  v110 = 0;
  v111 = 0;
  if ( !v46 )
  {
    v91 = *(_QWORD *)(a2 + 96);
    v92 = *(_QWORD *)(v91 + 88);
    v93 = v92 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v92 & 1) != 0 )
    {
      if ( !v93 )
        goto LABEL_66;
    }
    else
    {
      if ( v93 <= 3 )
      {
        if ( !v93 )
          goto LABEL_66;
        goto LABEL_142;
      }
      if ( (v92 & 2) == 0 )
        goto LABEL_66;
      v94 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
      v95 = v94[2275];
      if ( !v95 )
      {
        *(_QWORD *)(v91 + 88) = v91 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v91 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_161:
          v47 = *(_QWORD *)(a2 + 104);
          goto LABEL_64;
        }
        goto LABEL_141;
      }
      v96 = v94[274];
      v94[284] += 24LL;
      v93 = (v96 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v94[275] >= v93 + 24 && v96 )
        v94[274] = v93 + 24;
      else
        v93 = sub_67A630((__int64)(v94 + 274), 24, 3);
      *(_QWORD *)v93 = v95;
      v92 = v93 | 5;
      *(_DWORD *)(v93 + 8) = 0;
      *(_QWORD *)(v93 + 16) = v91;
      *(_QWORD *)(v91 + 88) = v93 | 5;
      LOBYTE(v93) = v93 & 0xFA | 4;
    }
    if ( (v93 & 4) != 0 )
    {
      v97 = (_DWORD *)(v92 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v97 )
      {
        v102 = *(_QWORD *)v97;
        v103 = *(_DWORD *)(*(_QWORD *)v97 + 12LL);
        if ( v97[2] != v103 )
        {
          v97[2] = v103;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 144LL))(v102, v91);
          goto LABEL_161;
        }
      }
    }
LABEL_141:
    v46 = *(_QWORD *)(a2 + 104);
LABEL_142:
    v47 = v46;
  }
LABEL_64:
  if ( v47 > 7 )
  {
    v48 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
    if ( a2 == *v48 )
    {
      v49 = v48 + 1;
      goto LABEL_67;
    }
  }
LABEL_66:
  v49 = &v109;
LABEL_67:
  sub_685B80(&v131, (__int64)v49, (__int64)a1, (__int64)&v108);
  v50 = *(_QWORD *)(a2 + 88);
  v51 = 0;
  if ( (v50 & 1) != 0 || (v50 & 2) != 0 )
    goto LABEL_80;
  v52 = v50 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v50 & 1) != 0 )
    goto LABEL_157;
  if ( v52 <= 3 )
  {
    v54 = 0;
    goto LABEL_79;
  }
  v51 = 1;
  if ( ((v50 >> 1) & 1) != 0 )
  {
    v53 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
    v54 = v53[2275];
    if ( v54 )
    {
      v55 = v53[274];
      v53[284] += 24LL;
      v56 = ((v55 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
      if ( v53[275] >= v56 && v55 )
      {
        v53[274] = v56;
        v57 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v57 = sub_67A630((__int64)(v53 + 274), 24, 3);
      }
      *(_QWORD *)v57 = v54;
      *(_DWORD *)(v57 + 8) = 0;
      *(_QWORD *)(v57 + 16) = a2;
      *(_QWORD *)(a2 + 88) = v57 | 5;
      v58 = v57;
      v59 = v57 & 0xFFFFFFFFFFFFFFF8LL;
      v54 = v59;
      LOBYTE(v52) = v58 & 0xFA | 4;
LABEL_77:
      if ( (v52 & 4) != 0 && v59 )
      {
        v104 = *(_QWORD *)v54;
        v105 = *(_DWORD *)(*(_QWORD *)v54 + 12LL);
        if ( *(_DWORD *)(v54 + 8) != v105 )
        {
          *(_DWORD *)(v54 + 8) = v105;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v104 + 144LL))(v104, a2);
        }
        v51 = *(_QWORD *)(v54 + 16) != 0;
        goto LABEL_80;
      }
      goto LABEL_79;
    }
    *(_QWORD *)(a2 + 88) = a2 & 0xFFFFFFFFFFFFFFFALL | 1;
    LOBYTE(v52) = a2 & 0xFA;
    if ( (a2 & 0xFFFFFFFFFFFFFFFALL) != 0 )
    {
      v50 = a2;
LABEL_157:
      v59 = v50 & 0xFFFFFFFFFFFFFFF8LL;
      v54 = v59;
      goto LABEL_77;
    }
LABEL_79:
    v51 = v54 != 0;
  }
LABEL_80:
  v117 = v51;
  v60 = a1[2].m128i_i64[1];
  v118 = 0x100000001LL;
  v123 = 0;
  v129 = ptr;
  v116[4] = 0;
  v122 = 3;
  v126 = nullptr;
  v124 = 0;
  v125 = 0;
  v120 = 0;
  v119 = 0;
  v121 = 0;
  v128 = 1;
  v130 = v150;
  sub_639160((__int64)&v112, a2, v60, 0, 1u);
  v61 = *(_DWORD *)(a2 + 24);
  v62 = (__int128)_mm_load_si128(&v113);
  v114 = (__int128)_mm_load_si128(&v112);
  v115 = v62;
  v127 = v116;
  v12 = sub_680210(a1, a2, v61, (__int64)v116, 0, nullptr, v114, v62);
  sub_67AA40(v126);
  if ( ptr != &v151 )
    free(ptr);
  v107 = v144;
  v63 = &v144[104 * v145];
  if ( v144 != v63 )
  {
    do
    {
      v64 = *((__m128i ***)v63 - 1);
      v63 -= 104;
      if ( v64 )
      {
        v13 = (*((_DWORD *)v64 + 178))-- == 1;
        if ( v13 )
        {
          v65 = (__m128i **)v64[85];
          if ( v65 != v64 + 87 )
            free(v65);
          v66 = v64[21];
          v67 = (__m128i *)((char *)v66 + 248 * *((unsigned int *)v64 + 44));
          if ( v66 != v67 )
          {
            do
            {
              v68 = (__m128i **)v67[-5].m128i_i64[0];
              v67 = (__m128i *)((char *)v67 - 248);
              sub_67AA40(v68);
            }
            while ( v66 != v67 );
            v67 = v64[21];
          }
          if ( v67 != (__m128i *)(v64 + 23) )
            free(v67);
          v69 = (__m128i **)v64[1];
          if ( v69 != v64 + 3 )
            free(v69);
          --(*v64)[15].m128i_i32[0];
          v70 = *v64;
          if ( !(*v64)[15].m128i_i32[0] )
          {
            v71 = v70[13].m128i_i64[0];
            v72 = v71 + 16LL * v70[13].m128i_u32[2];
            for ( i = v71; v72 != i; i += 16 )
              operator delete();
            v74 = v70[10].m128i_u32[2];
            v70[13].m128i_i32[2] = 0;
            if ( (_DWORD)v74 )
            {
              v75 = (_QWORD *)v70[10].m128i_i64[0];
              v70[14].m128i_i64[0] = 0;
              v76 = v75 + 1;
              v77 = &v75[v74];
              v70[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v75, (__m128i)(unsigned __int64)(*v75 + 4096LL));
              if ( 8 * v74 != 8 )
              {
                do
                {
                  ++v76;
                  operator delete();
                }
                while ( v77 != v76 );
              }
              v70[10].m128i_i32[2] = 1;
            }
          }
        }
      }
    }
    while ( v107 != v63 );
    v63 = v144;
  }
  if ( v63 != &v146 )
    free(v63);
  if ( (char *)v131.m128i_i64[0] != &v132 )
    free((void *)v131.m128i_i64[0]);
  v13 = a1[15].m128i_i32[0]-- == 1;
  if ( v13 )
  {
    v78 = a1[13].m128i_i64[0];
    v79 = v78 + 16LL * a1[13].m128i_u32[2];
    while ( v79 != v78 )
    {
      v78 += 16;
      operator delete();
    }
    a1[13].m128i_i32[2] = 0;
    v80 = a1[10].m128i_u32[2];
    if ( (_DWORD)v80 )
    {
      v81 = (_QWORD *)a1[10].m128i_i64[0];
      v82 = v80;
      a1[14].m128i_i64[0] = 0;
      v83 = &v81[v82];
      v84 = v81 + 1;
      a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v81, (__m128i)(unsigned __int64)(*v81 + 4096LL));
      if ( v82 != 1 )
      {
        do
        {
          ++v84;
          operator delete();
        }
        while ( v83 != v84 );
      }
      a1[10].m128i_i32[2] = 1;
    }
  }
  return v12;
}

