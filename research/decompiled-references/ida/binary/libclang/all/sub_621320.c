void __fastcall sub_621320(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // ecx
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  bool v12; // al
  int v13; // ecx
  _DWORD *v14; // rsi
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  int v18; // r8d
  unsigned int v19; // r10d
  _DWORD *v20; // rdx
  _DWORD *v21; // rax
  int v22; // r8d
  _DWORD *v23; // rsi
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rax
  int v28; // edx
  bool v29; // r15
  __int64 v30; // r11
  int v31; // r9d
  unsigned int v32; // r10d
  int v33; // r8d
  __int64 v34; // r12
  __int64 v35; // rax
  int v36; // esi
  __int64 v37; // rdx
  __int64 v38; // rdx
  _DWORD *v39; // rax
  __int64 v40; // rax
  const __m128i *v41; // r15
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __m128i *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  char v47; // al
  int v48; // eax
  unsigned __int64 v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // r9
  __int64 v52; // rax
  _DWORD *v53; // rax
  unsigned __int64 v54; // r14
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // r14
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  _QWORD *v63; // r14
  unsigned __int64 v64; // r9
  __int64 v65; // rax
  _QWORD *v66; // r11
  __int64 v67; // rax
  _DWORD *v68; // rax
  unsigned __int64 v69; // r14
  __int64 v70; // rax
  _QWORD *v71; // r8
  __int64 v72; // rax
  char *v73; // r15
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  int v76; // edx
  char v77; // dl
  unsigned __int64 v78; // rdi
  __int64 v79; // rax
  _QWORD *v80; // r14
  __int64 *v81; // rdi
  __int64 v82; // rdx
  _DWORD *v83; // rax
  _DWORD *v84; // rdx
  __int64 *v85; // rdi
  __int64 v86; // rsi
  _DWORD *v87; // rdx
  _DWORD *v88; // rsi
  __int64 *v89; // rdi
  __int64 v90; // rsi
  _DWORD *v91; // rdx
  _DWORD *v92; // rsi
  __int64 *v93; // rdi
  __int64 v94; // rsi
  _DWORD *v95; // rax
  _DWORD *v96; // rdx
  __int64 *v97; // rdi
  __int64 v98; // rdx
  _DWORD *v99; // rax
  _DWORD *v100; // rdx
  __int64 *v101; // rdi
  __int64 v102; // rdx
  _DWORD *v103; // rax
  _DWORD *v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  _DWORD *v107; // rax
  _DWORD *v108; // rdx
  __int64 v109; // [rsp-8h] [rbp-190h]
  unsigned int v110; // [rsp+8h] [rbp-180h]
  int v111; // [rsp+8h] [rbp-180h]
  __int64 v112; // [rsp+8h] [rbp-180h]
  int v113; // [rsp+8h] [rbp-180h]
  unsigned int v114; // [rsp+8h] [rbp-180h]
  int v115; // [rsp+8h] [rbp-180h]
  unsigned int v116; // [rsp+8h] [rbp-180h]
  unsigned int v117; // [rsp+8h] [rbp-180h]
  char v118; // [rsp+8h] [rbp-180h]
  _QWORD *v119; // [rsp+8h] [rbp-180h]
  unsigned int v120; // [rsp+8h] [rbp-180h]
  int v121; // [rsp+10h] [rbp-178h]
  unsigned int v122; // [rsp+10h] [rbp-178h]
  unsigned int v123; // [rsp+10h] [rbp-178h]
  int v124; // [rsp+10h] [rbp-178h]
  int v125; // [rsp+10h] [rbp-178h]
  int v126; // [rsp+10h] [rbp-178h]
  int v127; // [rsp+10h] [rbp-178h]
  _QWORD *v128; // [rsp+10h] [rbp-178h]
  char v129; // [rsp+10h] [rbp-178h]
  int v130; // [rsp+10h] [rbp-178h]
  int v131; // [rsp+10h] [rbp-178h]
  _QWORD *v132; // [rsp+10h] [rbp-178h]
  int v133; // [rsp+18h] [rbp-170h]
  int v134; // [rsp+18h] [rbp-170h]
  _QWORD *v135; // [rsp+18h] [rbp-170h]
  int v136; // [rsp+18h] [rbp-170h]
  int v137; // [rsp+18h] [rbp-170h]
  int v138; // [rsp+18h] [rbp-170h]
  unsigned int v139; // [rsp+24h] [rbp-164h]
  int v140; // [rsp+24h] [rbp-164h]
  int v141; // [rsp+24h] [rbp-164h]
  unsigned int v142; // [rsp+24h] [rbp-164h]
  __int64 v143; // [rsp+28h] [rbp-160h]
  __int64 v144; // [rsp+28h] [rbp-160h]
  bool v145; // [rsp+3Fh] [rbp-149h] BYREF
  _QWORD v146[2]; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int16 v147; // [rsp+50h] [rbp-138h]
  int v148; // [rsp+60h] [rbp-128h] BYREF
  __int64 v149; // [rsp+64h] [rbp-124h]
  int v150; // [rsp+6Ch] [rbp-11Ch]
  _DWORD *v151; // [rsp+70h] [rbp-118h]
  _BYTE v152[64]; // [rsp+80h] [rbp-108h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h]
  _BYTE v154[72]; // [rsp+D0h] [rbp-B8h] BYREF
  unsigned __int64 v155; // [rsp+118h] [rbp-70h]

  v5 = a2 & 0x7FFFFFFF;
  v7 = a1[4];
  v8 = *(int *)(v7 + 408);
  v9 = v8 + 1;
  if ( (unsigned int)(v8 + 1) <= 1 )
  {
    v10 = *(_DWORD **)(v7 + 184);
    if ( v5 < (*v10 & 0x7FFFFFFFu) )
      goto LABEL_55;
    goto LABEL_4;
  }
  if ( (int)v8 >= 0 )
  {
    v10 = *(_DWORD **)(v7 + 184);
    if ( v5 < (v10[6 * v8] & 0x7FFFFFFFu) )
    {
LABEL_55:
      v13 = sub_CA9700(v7, v5);
      goto LABEL_9;
    }
LABEL_4:
    if ( *(_DWORD *)(v7 + 192) != v9 )
    {
      v11 = &v10[6 * v9];
LABEL_6:
      v12 = v5 < (*v11 & 0x7FFFFFFFu);
      goto LABEL_7;
    }
    goto LABEL_56;
  }
  v49 = (unsigned int)(-2 - v8);
  v50 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v8) >> 6));
  if ( _bittest64(&v50, v49) )
  {
    v51 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v49 >> 5));
    v52 = *v51;
    if ( !*v51 )
    {
      v93 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v94 = *v93;
      v93[10] += 768;
      v95 = (_DWORD *)((v94 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v93[1] >= (unsigned __int64)(v95 + 192) && v94 )
      {
        *v93 = (__int64)(v95 + 192);
      }
      else
      {
        v128 = v51;
        v95 = (_DWORD *)sub_5F8390((__int64)v93, 768, 3);
        v9 = v8 + 1;
        v51 = v128;
        LOBYTE(v49) = -2 - v8;
      }
      *v51 = v95;
      v96 = v95 + 192;
      do
      {
        *v95 = 0;
        v95 += 6;
        *((_OWORD *)v95 - 1) = 0;
      }
      while ( v96 != v95 );
      v52 = *v51;
    }
    v53 = (_DWORD *)(v52 + 24 * (v49 & 0x1F));
  }
  else
  {
    v53 = (_DWORD *)sub_CA9380(a1[4], (unsigned int)v49, 0);
    v9 = v8 + 1;
  }
  if ( v5 < (*v53 & 0x7FFFFFFFu) )
    goto LABEL_55;
  if ( (_DWORD)v8 == -2 )
    goto LABEL_8;
  if ( *(_DWORD *)(v7 + 192) != v9 )
  {
    v54 = (unsigned int)(-2 - v9);
    v55 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v9) >> 6));
    if ( _bittest64(&v55, v54) )
    {
      v56 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v54 >> 5));
      v57 = *v56;
      if ( !*v56 )
      {
        v97 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v98 = *v97;
        v97[10] += 768;
        v99 = (_DWORD *)((v98 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v97[1] >= (unsigned __int64)(v99 + 192) && v98 )
        {
          *v97 = (__int64)(v99 + 192);
        }
        else
        {
          v119 = v56;
          v99 = (_DWORD *)sub_5F8390((__int64)v97, 768, 3);
          v56 = v119;
        }
        *v56 = v99;
        v100 = v99 + 192;
        do
        {
          *v99 = 0;
          v99 += 6;
          *((_OWORD *)v99 - 1) = 0;
        }
        while ( v99 != v100 );
        v57 = *v56;
      }
      v11 = (_DWORD *)(v57 + 24 * (v54 & 0x1F));
    }
    else
    {
      v11 = (_DWORD *)sub_CA9380(v7, (unsigned int)v54, 0);
    }
    goto LABEL_6;
  }
LABEL_56:
  v12 = v5 < *(_DWORD *)(v7 + 248);
LABEL_7:
  if ( !v12 )
    goto LABEL_55;
LABEL_8:
  v13 = *(_DWORD *)(v7 + 408);
LABEL_9:
  v152[0] = 0;
  if ( (unsigned int)(v13 + 1) <= 1 )
    goto LABEL_51;
  if ( v13 >= 0 )
  {
    v14 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * v13);
    goto LABEL_12;
  }
  v61 = (unsigned int)(-2 - v13);
  v62 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v13) >> 6));
  if ( _bittest64(&v62, v61) )
  {
    v63 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v61 >> 5));
    if ( *v63 )
    {
      v14 = (_DWORD *)(*v63 + 24LL * ((-2 - (_BYTE)v13) & 0x1F));
      goto LABEL_12;
    }
    v85 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v86 = *v85;
    v85[10] += 768;
    v87 = (_DWORD *)((v86 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v85[1] >= (unsigned __int64)(v87 + 192) && v86 )
    {
      *v85 = (__int64)(v87 + 192);
      v47 = 0;
    }
    else
    {
      v130 = v13;
      v118 = -2 - v13;
      v106 = sub_5F8390((__int64)v85, 768, 3);
      v13 = v130;
      LOBYTE(v61) = v118;
      v87 = (_DWORD *)v106;
      v47 = v152[0];
    }
    *v63 = v87;
    v88 = v87 + 192;
    do
    {
      *v87 = 0;
      v87 += 6;
      *((_OWORD *)v87 - 1) = 0;
    }
    while ( v88 != v87 );
    v14 = (_DWORD *)(*v63 + 24 * (v61 & 0x1F));
  }
  else
  {
    v113 = v13;
    v46 = sub_CA9380(v7, (unsigned int)v61, v152);
    v13 = v113;
    v14 = (_DWORD *)v46;
    v47 = v152[0];
  }
  if ( v47 || !v14 )
  {
LABEL_51:
    LODWORD(v15) = 0;
    v13 = 0;
    goto LABEL_14;
  }
LABEL_12:
  LODWORD(v15) = v5 - (*v14 & 0x7FFFFFFF);
  if ( (a2 & 0x80000000) != 0LL )
  {
    v74 = sub_CAAEF0(v7, v14, (unsigned int)v15);
    v13 = v74;
    v15 = HIDWORD(v74);
  }
LABEL_14:
  v16 = *(int *)(v7 + 408);
  v17 = HIDWORD(a2);
  v18 = v16 + 1;
  v19 = v17 & 0x7FFFFFFF;
  if ( (unsigned int)(v16 + 1) <= 1 )
  {
    v20 = *(_DWORD **)(v7 + 184);
    if ( v19 < (*v20 & 0x7FFFFFFFu) )
      goto LABEL_53;
LABEL_17:
    if ( *(_DWORD *)(v7 + 192) != v18 )
    {
      v21 = &v20[6 * v18];
      goto LABEL_19;
    }
    goto LABEL_69;
  }
  if ( (int)v16 >= 0 )
  {
    v20 = *(_DWORD **)(v7 + 184);
    if ( v19 < (v20[6 * v16] & 0x7FFFFFFFu) )
      goto LABEL_53;
    goto LABEL_17;
  }
  v64 = (unsigned int)(-2 - v16);
  v65 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v16) >> 6));
  if ( _bittest64(&v65, v64) )
  {
    v66 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v64 >> 5));
    v67 = *v66;
    if ( !*v66 )
    {
      v81 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v82 = *v81;
      v81[10] += 768;
      v83 = (_DWORD *)((v82 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v81[1] >= (unsigned __int64)(v83 + 192) && v82 )
      {
        *v81 = (__int64)(v83 + 192);
      }
      else
      {
        v140 = v13;
        v135 = v66;
        v83 = (_DWORD *)sub_5F8390((__int64)v81, 768, 3);
        v18 = v16 + 1;
        v13 = v140;
        v66 = v135;
        LOBYTE(v64) = -2 - v16;
        v19 = v17 & 0x7FFFFFFF;
      }
      *v66 = v83;
      v84 = v83 + 192;
      do
      {
        *v83 = 0;
        v83 += 6;
        *((_OWORD *)v83 - 1) = 0;
      }
      while ( v84 != v83 );
      v67 = *v66;
    }
    v68 = (_DWORD *)(v67 + 24 * (v64 & 0x1F));
  }
  else
  {
    v125 = v13;
    v68 = (_DWORD *)sub_CA9380(v7, (unsigned int)v64, 0);
    v19 = v17 & 0x7FFFFFFF;
    v13 = v125;
    v18 = v16 + 1;
  }
  if ( v19 < (*v68 & 0x7FFFFFFFu) )
    goto LABEL_53;
  if ( (_DWORD)v16 == -2 )
    goto LABEL_20;
  if ( *(_DWORD *)(v7 + 192) == v18 )
  {
LABEL_69:
    if ( v19 < *(_DWORD *)(v7 + 248) )
      goto LABEL_20;
LABEL_53:
    v124 = v13;
    v114 = v19;
    v48 = sub_CA9700(v7, v19);
    v19 = v114;
    v13 = v124;
    v22 = v48;
    goto LABEL_21;
  }
  v69 = (unsigned int)(-2 - v18);
  v70 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v18) >> 6));
  if ( _bittest64(&v70, v69) )
  {
    v71 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v69 >> 5));
    v72 = *v71;
    if ( !*v71 )
    {
      v101 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v102 = *v101;
      v101[10] += 768;
      v103 = (_DWORD *)((v102 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v101[1] >= (unsigned __int64)(v103 + 192) && v102 )
      {
        *v101 = (__int64)(v103 + 192);
      }
      else
      {
        v138 = v13;
        v132 = v71;
        v120 = v19;
        v103 = (_DWORD *)sub_5F8390((__int64)v101, 768, 3);
        v13 = v138;
        v71 = v132;
        v19 = v120;
      }
      *v71 = v103;
      v104 = v103 + 192;
      do
      {
        *v103 = 0;
        v103 += 6;
        *((_OWORD *)v103 - 1) = 0;
      }
      while ( v104 != v103 );
      v72 = *v71;
    }
    v21 = (_DWORD *)(v72 + 24 * (v69 & 0x1F));
  }
  else
  {
    v126 = v13;
    v116 = v19;
    v21 = (_DWORD *)sub_CA9380(v7, (unsigned int)v69, 0);
    v19 = v116;
    v13 = v126;
  }
LABEL_19:
  if ( v19 >= (*v21 & 0x7FFFFFFFu) )
    goto LABEL_53;
LABEL_20:
  v22 = *(_DWORD *)(v7 + 408);
LABEL_21:
  v152[0] = 0;
  if ( (unsigned int)(v22 + 1) <= 1 )
    goto LABEL_31;
  if ( v22 >= 0 )
  {
    v23 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * v22);
    goto LABEL_24;
  }
  v58 = (unsigned int)(-2 - v22);
  v59 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v22) >> 6));
  if ( _bittest64(&v59, v58) )
  {
    v60 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v58 >> 5));
    if ( *v60 )
    {
      v23 = (_DWORD *)(*v60 + 24LL * ((-2 - (_BYTE)v22) & 0x1F));
      goto LABEL_24;
    }
    v89 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v90 = *v89;
    v89[10] += 768;
    v91 = (_DWORD *)((v90 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v89[1] >= (unsigned __int64)(v91 + 192) && v90 )
    {
      *v89 = (__int64)(v91 + 192);
      v26 = 0;
    }
    else
    {
      v141 = v22;
      v136 = v13;
      v129 = -2 - v22;
      v117 = v19;
      v105 = sub_5F8390((__int64)v89, 768, 3);
      v22 = v141;
      v13 = v136;
      v91 = (_DWORD *)v105;
      LOBYTE(v58) = v129;
      v19 = v117;
      v26 = v152[0];
    }
    *v60 = v91;
    v92 = v91 + 192;
    do
    {
      *v91 = 0;
      v91 += 6;
      *((_OWORD *)v91 - 1) = 0;
    }
    while ( v92 != v91 );
    v23 = (_DWORD *)(*v60 + 24 * (v58 & 0x1F));
  }
  else
  {
    v133 = v22;
    v121 = v13;
    v110 = v19;
    v25 = sub_CA9380(v7, (unsigned int)v58, v152);
    v19 = v110;
    v13 = v121;
    v23 = (_DWORD *)v25;
    v22 = v133;
    v26 = v152[0];
  }
  if ( v26 || !v23 )
  {
LABEL_31:
    LODWORD(v24) = 0;
    if ( v13 )
      return;
LABEL_32:
    v122 = v24;
    v145 = 0;
    v111 = v13;
    v27 = sub_CAC050(v7, (unsigned int)v13, &v145);
    v29 = v145;
    v30 = v27;
    if ( v145 )
      return;
    v31 = v27 + v28;
    v32 = v122;
    v33 = v27 + v15;
    v34 = *(_QWORD *)(a1[10] + 2160LL);
    v152[0] = 0;
    if ( (unsigned int)(v111 + 1) <= 1 )
      goto LABEL_104;
    if ( v111 >= 0 )
    {
      v35 = *(_QWORD *)(v7 + 184) + 24LL * v111;
      goto LABEL_36;
    }
    v78 = (unsigned int)(-2 - v111);
    v79 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)v78 >> 6));
    if ( _bittest64(&v79, v78) )
    {
      v80 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v78 >> 5));
      if ( *v80 )
      {
        v35 = *v80 + 24LL * ((-2 - (_BYTE)v111) & 0x1F);
LABEL_36:
        if ( *(char *)(v35 + 3) >= 0 )
        {
          v36 = *(_DWORD *)v35 & 0x7FFFFFFF;
LABEL_38:
          v123 = v32;
          v112 = v30;
          sub_115E190((unsigned int)v152, v36, v34, v30, v33, v31, 1);
          v154[66] = 1;
          v37 = v109;
          while ( 1 )
          {
            sub_11681C0(v152, v146, v37);
            if ( v147 == 1 )
            {
LABEL_71:
              if ( ptr != v154 )
                free(ptr);
              return;
            }
            v150 = 0;
            v149 = v146[0];
            if ( v147 <= 0x13u )
            {
              v38 = 982656;
              if ( !_bittest64(&v38, v147) && ((v147 - 8) & 0xFFF7) != 0 )
              {
                if ( v147 == 6 )
                {
                  v39 = (_DWORD *)sub_11F40D0(a1[8], v146);
                  v76 = 1;
                  if ( ((unsigned __int16)((*v39 >> 9) - 1) > 0x19u || !v29) && v147 == 5 )
                    v76 = 2;
                  v148 = v76;
                  goto LABEL_41;
                }
                v45 = 4 * (v147 == 4);
                goto LABEL_47;
              }
            }
            else if ( ((v147 - 8) & 0xFFF7) != 0 )
            {
              v45 = 0;
LABEL_47:
              v148 = v45;
              v39 = nullptr;
              goto LABEL_41;
            }
            v148 = 3;
            v39 = (_DWORD *)v146[1];
LABEL_41:
            v151 = v39;
            v40 = *(unsigned int *)(a3 + 8);
            v41 = (const __m128i *)&v148;
            v42 = *(_QWORD *)a3;
            v43 = v40 + 1;
            if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v40 + 1) )
            {
              if ( (unsigned __int64)&v148 < v42 || (unsigned __int64)&v148 >= v42 + 24 * v40 )
              {
                sub_25D6060(a3, a3 + 16, v43, 24);
                v42 = *(_QWORD *)a3;
                v40 = *(unsigned int *)(a3 + 8);
              }
              else
              {
                v73 = (char *)&v148 - v42;
                sub_25D6060(a3, a3 + 16, v43, 24);
                v42 = *(_QWORD *)a3;
                v40 = *(unsigned int *)(a3 + 8);
                v41 = (const __m128i *)&v73[*(_QWORD *)a3];
              }
            }
            v44 = (__m128i *)(v42 + 24 * v40);
            *v44 = _mm_loadu_si128(v41);
            v37 = v41[1].m128i_i64[0];
            v44[1].m128i_i64[0] = v37;
            ++*(_DWORD *)(a3 + 8);
            v29 = v147 == 73;
            if ( v155 >= v112 + (unsigned __int64)v123 )
              goto LABEL_71;
          }
        }
LABEL_104:
        v36 = 0;
        goto LABEL_38;
      }
      v144 = v30;
      v142 = v122;
      v137 = v33;
      v131 = v31;
      v107 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
      v30 = v144;
      v32 = v142;
      *v80 = v107;
      v33 = v137;
      v108 = v107 + 192;
      v31 = v131;
      do
      {
        *v107 = 0;
        v107 += 6;
        *((_OWORD *)v107 - 1) = 0;
      }
      while ( v108 != v107 );
      v77 = v152[0];
      v35 = *v80 + 24LL * ((-2 - (_BYTE)v111) & 0x1F);
    }
    else
    {
      v143 = v30;
      v139 = v122;
      v134 = v33;
      v127 = v31;
      v35 = sub_CA9380(v7, (unsigned int)v78, v152);
      v31 = v127;
      v33 = v134;
      v77 = v152[0];
      v32 = v139;
      v30 = v143;
    }
    if ( v77 || !v35 )
      goto LABEL_104;
    goto LABEL_36;
  }
LABEL_24:
  LODWORD(v24) = v19 - (*v23 & 0x7FFFFFFF);
  if ( (v17 & 0x80000000) != 0LL )
  {
    v115 = v13;
    v75 = sub_CAAEF0(v7, v23, (unsigned int)v24);
    v13 = v115;
    v22 = v75;
    v24 = HIDWORD(v75);
  }
  if ( v13 == v22 )
    goto LABEL_32;
}

