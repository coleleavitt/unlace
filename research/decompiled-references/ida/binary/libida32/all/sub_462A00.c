unsigned __int64 __fastcall sub_462A00(__int64 a1, signed int a2, signed int a3, __int64 a4, char a5)
{
  unsigned __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // ecx
  void *flags; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  int v19; // r12d
  char v20; // r14
  __int64 *v21; // r12
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rax
  char v25; // r12
  int *v26; // rbx
  int *v27; // rax
  unsigned __int64 v28; // r13
  void *v29; // rdi
  unsigned int v31; // r12d
  unsigned int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int8 *v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r13d
  bool v38; // bl
  int v39; // r12d
  char v40; // r13
  __int64 v41; // r13
  __int64 v42; // rbx
  void *v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // ebx
  unsigned int v46; // r14d
  unsigned int v47; // r14d
  _BYTE *v48; // rax
  __m128i si128; // xmm0
  __m128i v50; // xmm0
  int v51; // eax
  char v52; // bl
  int v53; // r14d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rbx
  int v59; // r14d
  __int64 v60; // rdi
  _DWORD *ph; // rax
  __int64 v62; // r9
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _BYTE *v69; // rbx
  __m128i v70; // xmm0
  unsigned __int32 v71; // [rsp+8h] [rbp-418h]
  char v72; // [rsp+Fh] [rbp-411h]
  __int64 v73; // [rsp+10h] [rbp-410h]
  unsigned int v74; // [rsp+10h] [rbp-410h]
  _QWORD *v77; // [rsp+20h] [rbp-400h]
  unsigned int v78; // [rsp+28h] [rbp-3F8h]
  __int64 v79; // [rsp+30h] [rbp-3F0h]
  int v80; // [rsp+38h] [rbp-3E8h]
  unsigned int v82; // [rsp+4Ch] [rbp-3D4h]
  unsigned __int64 v83; // [rsp+50h] [rbp-3D0h]
  _QWORD *v84; // [rsp+50h] [rbp-3D0h]
  unsigned int v85; // [rsp+58h] [rbp-3C8h]
  unsigned int v86; // [rsp+58h] [rbp-3C8h]
  unsigned __int32 v87; // [rsp+58h] [rbp-3C8h]
  int v88; // [rsp+68h] [rbp-3B8h] BYREF
  int v89; // [rsp+6Ch] [rbp-3B4h] BYREF
  int v90[2]; // [rsp+70h] [rbp-3B0h] BYREF
  void *v91; // [rsp+78h] [rbp-3A8h] BYREF
  int v92; // [rsp+80h] [rbp-3A0h] BYREF
  void *v93; // [rsp+88h] [rbp-398h]
  __int128 v94; // [rsp+90h] [rbp-390h]
  void *v95; // [rsp+A0h] [rbp-380h]
  __int128 v96; // [rsp+A8h] [rbp-378h]
  void *v97; // [rsp+C0h] [rbp-360h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-358h]
  void *ptr; // [rsp+D8h] [rbp-348h]
  __int128 v100; // [rsp+E0h] [rbp-340h]
  char v101; // [rsp+F0h] [rbp-330h]
  unsigned int v102; // [rsp+100h] [rbp-320h]
  __int64 v103; // [rsp+108h] [rbp-318h]
  signed int v104; // [rsp+110h] [rbp-310h]
  unsigned int v105; // [rsp+114h] [rbp-30Ch]
  unsigned int v106; // [rsp+118h] [rbp-308h]
  __m128i v107[8]; // [rsp+11Ch] [rbp-304h] BYREF
  char v108; // [rsp+1A4h] [rbp-27Ch]
  __m128i v109; // [rsp+1B0h] [rbp-270h] BYREF
  __m128i v110; // [rsp+1C0h] [rbp-260h] BYREF
  __m128i v111; // [rsp+1D0h] [rbp-250h]
  __m128i v112; // [rsp+1E0h] [rbp-240h]
  __m128i v113; // [rsp+1F0h] [rbp-230h]
  __m128i v114; // [rsp+200h] [rbp-220h]
  __m128i v115; // [rsp+210h] [rbp-210h]
  __m128i v116; // [rsp+220h] [rbp-200h]
  __m128i v117; // [rsp+230h] [rbp-1F0h]
  __m128i v118; // [rsp+240h] [rbp-1E0h]
  __m128i v119; // [rsp+250h] [rbp-1D0h]
  __m128i v120; // [rsp+260h] [rbp-1C0h]
  __m128i v121; // [rsp+270h] [rbp-1B0h]
  __int64 v122; // [rsp+280h] [rbp-1A0h]
  char v123[8]; // [rsp+288h] [rbp-198h] BYREF
  __m128i v124; // [rsp+290h] [rbp-190h] BYREF
  _BYTE v125[24]; // [rsp+2A0h] [rbp-180h] BYREF
  char v126; // [rsp+2B8h] [rbp-168h] BYREF
  __m128i v127; // [rsp+2C0h] [rbp-160h] BYREF
  __m128i v128; // [rsp+2D0h] [rbp-150h] BYREF
  __m128i v129; // [rsp+2E0h] [rbp-140h] BYREF
  __m128i v130; // [rsp+2F0h] [rbp-130h] BYREF
  __m128i v131; // [rsp+300h] [rbp-120h] BYREF
  __m128i v132; // [rsp+310h] [rbp-110h] BYREF
  __m128i v133; // [rsp+320h] [rbp-100h] BYREF
  __m128i v134; // [rsp+330h] [rbp-F0h] BYREF
  __m128i v135; // [rsp+340h] [rbp-E0h] BYREF
  __m128i v136; // [rsp+350h] [rbp-D0h] BYREF
  __int64 v137; // [rsp+360h] [rbp-C0h]
  _BYTE v138[16]; // [rsp+368h] [rbp-B8h] BYREF
  int v139; // [rsp+378h] [rbp-A8h] BYREF
  __int64 v140; // [rsp+380h] [rbp-A0h]
  __m128i v141; // [rsp+388h] [rbp-98h]
  __int64 v142; // [rsp+398h] [rbp-88h]
  unsigned __int64 v143; // [rsp+3A0h] [rbp-80h]
  __int64 v144; // [rsp+3A8h] [rbp-78h]
  unsigned __int64 v145; // [rsp+3B0h] [rbp-70h]
  void *v146; // [rsp+3B8h] [rbp-68h]
  __int128 v147; // [rsp+3C0h] [rbp-60h]
  char v148; // [rsp+3D8h] [rbp-48h]
  __int64 v149; // [rsp+3D9h] [rbp-47h]
  __int16 v150; // [rsp+3E1h] [rbp-3Fh]
  char v151; // [rsp+3E3h] [rbp-3Dh]
  unsigned __int64 v152; // [rsp+3E8h] [rbp-38h]

  v79 = a4;
  v152 = __readfsqword(0x28u);
  *(_QWORD *)v90 = a4;
  v82 = a4;
  v5 = sub_458D90(a1, (unsigned int *)&v88, a4, a3, 1);
  v83 = v5 & 0x600;
  if ( v83 == 512 )
  {
    if ( !under_debugger )
      interr(2104);
    goto LABEL_186;
  }
  v6 = qword_2CA1698;
  if ( v83 != 1536 )
  {
LABEL_3:
    v7 = sub_458D90(a1, (unsigned int *)&v89, v82, a2, 0);
    v9 = &qword_2CA1698;
    v91 = (void *)v7;
    v10 = qword_2CA1698;
    if ( (v7 & 0x600) == 0x200 || (v11 = (unsigned int)v88, v89 != v88) || !v83 )
    {
      v12 = 2;
      goto LABEL_7;
    }
LABEL_93:
    v108 = 0;
    v106 = -1;
    v14 = (unsigned __int64)v91;
    v102 = v82;
    v103 = a1;
    v104 = a2;
    v105 = a3;
    goto LABEL_8;
  }
  if ( (sub_3B9AA0(*(_QWORD *)(qword_2CA1698 + 1480), v82, 1) & 0x100) == 0 )
  {
    v5 = 0;
    sub_457D00(a1, a3, v82, 2);
    v83 = 0;
    goto LABEL_3;
  }
  v91 = (void *)sub_458D90(a1, (unsigned int *)&v89, v82, a2, 0);
  v10 = qword_2CA1698;
  if ( ((unsigned __int16)v91 & 0x600) == 0x200 )
  {
    v12 = 38;
  }
  else
  {
    v11 = (unsigned int)v88;
    if ( v88 == v89 )
      goto LABEL_93;
    v12 = 38;
  }
LABEL_7:
  sub_457D00(a1, a2, v82, v12);
  flags = (void *)get_flags_ex(v82, 0);
  v102 = v82;
  v91 = flags;
  v14 = (unsigned __int64)flags;
  v106 = -1;
  v103 = a1;
  v108 = 0;
  v104 = a2;
  v105 = a3;
  if ( !v83 )
  {
    v72 = 0;
    if ( (~(_WORD)flags & 0x600) == 0 )
      goto LABEL_75;
    goto LABEL_41;
  }
LABEL_8:
  if ( v83 == 1536 )
  {
    if ( (~(_WORD)v14 & 0x600) == 0 && v89 == v88 )
    {
      v72 = 0;
      v80 = 8;
      goto LABEL_11;
    }
    v110.m128i_i64[0] = 0;
    v109.m128i_i64[0] = -1;
    v109.m128i_i64[1] = 0xFFFFFFFFLL;
    v35 = &v110.m128i_i8[8];
    do
    {
      *(_WORD *)v35 = 0;
      v35 += 24;
      *((_WORD *)v35 - 11) = 0;
      *((_WORD *)v35 - 10) = 0;
      *((_DWORD *)v35 - 1) = 0;
      *((_WORD *)v35 - 9) = 0;
      *((_QWORD *)v35 - 2) = 0;
      *((_DWORD *)v35 - 2) = 0;
    }
    while ( v123 != v35 );
    if ( !(unsigned int)decode_insn(&v109, v82, v123, v9, v11, v8) )
    {
      v59 = v88;
      if ( !(unsigned __int8)sub_4592C0(&v109, v82, v88, a1, a2, a3) )
      {
        if ( !(unsigned __int8)sub_457FC0(a1, a2, a3, v82, (unsigned int)v89, v59) )
        {
          if ( !under_debugger )
            interr(1850);
          goto LABEL_186;
        }
LABEL_158:
        v60 = *(_QWORD *)(v6 + 1480);
        v91 = nullptr;
        v5 = sub_3B9AA0(v60, v82, 0);
        v72 = 1;
        LODWORD(v14) = (_DWORD)v91;
LABEL_39:
        if ( (~(_WORD)v14 & 0x600) == 0 )
          goto LABEL_75;
        goto LABEL_40;
      }
    }
    v37 = v88;
    if ( v109.m128i_u16[7] == v88 )
      goto LABEL_87;
    v47 = v88 + v82;
    if ( v82 + 1 < v88 + v82 )
    {
      v86 = v82 + 1;
      do
        sub_3DDE70(*(_QWORD **)(v10 + 1480), v86++);
      while ( v86 < v47 );
    }
    *(_QWORD *)v125 = 0;
    v124.m128i_i64[0] = -1;
    v124.m128i_i64[1] = 0xFFFFFFFFLL;
    v48 = &v125[8];
    do
    {
      *(_WORD *)v48 = 0;
      v48 += 24;
      *((_WORD *)v48 - 11) = 0;
      *((_WORD *)v48 - 10) = 0;
      *((_DWORD *)v48 - 1) = 0;
      *((_WORD *)v48 - 9) = 0;
      *((_QWORD *)v48 - 2) = 0;
      *((_DWORD *)v48 - 2) = 0;
    }
    while ( v48 != v138 );
    v109 = _mm_load_si128(&v124);
    si128 = _mm_load_si128((const __m128i *)v125);
    v122 = v137;
    v110 = si128;
    v111 = _mm_load_si128((const __m128i *)&v125[16]);
    v112 = _mm_load_si128(&v127);
    v113 = _mm_load_si128(&v128);
    v114 = _mm_load_si128(&v129);
    v115 = _mm_load_si128(&v130);
    v116 = _mm_load_si128(&v131);
    v117 = _mm_load_si128(&v132);
    v118 = _mm_load_si128(&v133);
    v119 = _mm_load_si128(&v134);
    v120 = _mm_load_si128(&v135);
    v50 = _mm_load_si128(&v136);
    v121 = v50;
    decode_insn(&v109, v82, v36, 0, 0, 0);
    if ( v37 == v109.m128i_u16[7] || (sub_4592C0(&v109, v82, v37, a1, a2, a3), v37 == v109.m128i_u16[7]) )
    {
LABEL_87:
      v72 = sub_458110(a1, a2, (__int64)&v109);
      if ( v72 )
      {
        v80 = 8;
        v91 = (void *)get_flags_ex(v82, 0);
        v14 = (unsigned __int64)v91;
        goto LABEL_11;
      }
      if ( !under_debugger )
        interr(1851);
LABEL_186:
      BUG();
    }
    if ( (unsigned __int8)sub_4647C0(a1, (int)v90) || (unsigned __int8)sub_4647C0(a1, (int)v90) )
      return *(_QWORD *)v90;
    if ( (unsigned __int8)sub_457FC0(a1, a2, a3, v82, (unsigned int)v89, v37) )
      goto LABEL_158;
    v51 = v109.m128i_u16[7];
    if ( v37 >= v109.m128i_u16[7] )
    {
LABEL_131:
      if ( v37 != v51 )
      {
        v109.m128i_i32[2] = -1;
        LODWORD(v97) = -1;
        v52 = v110.m128i_i8[6] & 1;
        v53 = *(_DWORD *)(a1 + 4LL * a3 + 16);
        if ( get_dbctx_qty() )
          LODWORD(v97) = get_dbctx_id();
        *(_QWORD *)&v98 = switch_dbctx(v53);
        if ( *(char *)(v6 + 770) >= 0
          || v37 != (unsigned int)decode_insn(&v109, v82, v54, v55, v56, v57)
          || v52 == (v110.m128i_i8[6] & 1) )
        {
          sub_375320(
            (__int64)"The item at %a is marked as code, but its length (%d) differs from the instruction length (%d)\n"
                     "(in %s).\n"
                     "Please fix this issue and rerun merge\n",
            *(double *)v50.m128i_i64,
            v82,
            v37,
            (const char *)v109.m128i_u16[7]);
        }
        v58 = (int)v97;
        if ( (_DWORD)v97 != -1 && v58 < get_dbctx_qty() && (unsigned __int8)sub_3E8690() )
          switch_dbctx((int)v97);
      }
      goto LABEL_87;
    }
    v77 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a3 + 16)) + 1480);
    ph = (_DWORD *)get_ph();
    v62 = v47;
    v63 = ph[1];
    if ( v63 != 13 )
    {
      if ( v63 == 12 )
      {
        v64 = ph[18] - 1;
LABEL_166:
        v74 = v64;
        if ( v64 != -1 )
        {
          v65 = sub_458A90(v77, v47, 0);
          LODWORD(v97) = v37 + v82;
          HIDWORD(v97) = v47 + v65;
          sub_504030(a1, (unsigned int)a2, (unsigned int)a3, v74, &v97);
          v62 = v47;
        }
        goto LABEL_168;
      }
      if ( v63 != 15 )
      {
LABEL_168:
        *(_QWORD *)v90 = sub_462A00(a1, (unsigned int)a2, (unsigned int)a3, v62, 1);
        switch_dbctx(*(int *)(a1 + 4LL * a2 + 16));
        *(_QWORD *)v125 = 0;
        v69 = &v125[8];
        v124.m128i_i64[0] = -1;
        v124.m128i_i64[1] = 0xFFFFFFFFLL;
        do
        {
          *(_WORD *)v69 = 0;
          v69 += 24;
          *((_WORD *)v69 - 11) = 0;
          *((_WORD *)v69 - 10) = 0;
          *((_DWORD *)v69 - 1) = 0;
          *((_WORD *)v69 - 9) = 0;
          *((_QWORD *)v69 - 2) = 0;
          *((_DWORD *)v69 - 2) = 0;
        }
        while ( v138 != v69 );
        v109 = _mm_load_si128(&v124);
        v70 = _mm_load_si128((const __m128i *)v125);
        v122 = v137;
        v110 = v70;
        v111 = _mm_load_si128((const __m128i *)&v125[16]);
        v112 = _mm_load_si128(&v127);
        v113 = _mm_load_si128(&v128);
        v114 = _mm_load_si128(&v129);
        v115 = _mm_load_si128(&v130);
        v116 = _mm_load_si128(&v131);
        v117 = _mm_load_si128(&v132);
        v118 = _mm_load_si128(&v133);
        v119 = _mm_load_si128(&v134);
        v120 = _mm_load_si128(&v135);
        v50 = _mm_load_si128(&v136);
        v121 = v50;
        decode_insn(&v109, v82, 0, v66, v67, v68);
        v51 = v109.m128i_u16[7];
        goto LABEL_131;
      }
    }
    v64 = ph[17];
    goto LABEL_166;
  }
  if ( v83 == 1024 )
  {
    v38 = 1;
    if ( (v14 & 0x600) == 0x400 )
      v38 = v89 != v88;
    v106 = 0;
    v39 = *(_DWORD *)(qword_2CA1698 + 88);
    if ( (unsigned __int8)sub_455D20(v107, a1, a3, v82, 0, v5) )
    {
      v40 = sub_461060(v103, v107[0].m128i_i16, v5, v106, v105, v104, 1);
      if ( v40 )
      {
        if ( (v5 & 0xF0000000) != 0x60000000 && !(unsigned __int8)is_enum(v5, 0)
          || (v87 = v107[0].m128i_i32[0], v107[0].m128i_i32[0] == -1) )
        {
LABEL_105:
          v108 = v40;
          switch_dbctx(v39);
          if ( !v38 && (((unsigned int)v5 ^ (unsigned int)v14) & 0xF0000600) == 0 )
          {
            v41 = (__int64)v91;
            v42 = *(int *)(qword_2CA1698 + 88);
            v72 = sub_455D20(&v124, v103, v104, v102, v106, (__int64)v91);
            if ( v72 == v108 )
            {
              if ( !v72 )
              {
                switch_dbctx(v42);
                v14 = (unsigned __int64)v91;
                v80 = 1;
                goto LABEL_11;
              }
              if ( !sub_3C03F0(v124.m128i_i32, v107, v41, v106) )
              {
                switch_dbctx(v42);
                v72 = 0;
                v14 = (unsigned __int64)v91;
                v80 = 1;
                goto LABEL_11;
              }
            }
            switch_dbctx(v42);
          }
          v43 = (void *)(v5 & 0xFFFFFFFFFF0FFFFFLL);
          v44 = (unsigned int)v5 & 0xF0000000;
          v91 = (void *)(v5 & 0xFFFFFFFFFF0FFFFFLL);
          if ( v108 )
          {
            v45 = v107[0].m128i_i32[0];
            if ( v44 != 1610612736 )
            {
              v45 = v107[0].m128i_i32[0];
              if ( v44 == 1342177280 )
                goto LABEL_113;
              v45 = -1;
              if ( v44 != 3489660928LL )
                goto LABEL_113;
              v45 = v107[0].m128i_u16[0] | 0xFFFF0000;
            }
            if ( v45 != -1 )
            {
LABEL_113:
              v46 = v88;
              if ( (unsigned __int8)sub_4583D0(a1, a2, v82, v43, v88, v45)
                || (sub_457D00(a1, a2, v82, 6), (unsigned __int8)sub_4583D0(a1, a2, v82, v91, v46, v45)) )
              {
                v72 = 1;
                v91 = (void *)get_flags_ex(v82, 0);
                v14 = (unsigned __int64)v91;
                v80 = 1;
                goto LABEL_11;
              }
              if ( !under_debugger )
                interr(1852);
              goto LABEL_186;
            }
          }
          else if ( v44 != 3489660928LL && v44 != 1610612736 )
          {
            goto LABEL_144;
          }
          v43 = (void *)(v5 & 0xF0FFFFF);
          v91 = v43;
LABEL_144:
          v45 = -1;
          goto LABEL_113;
        }
        switch_dbctx(*(int *)(v103 + 4LL * v104 + 16));
        v97 = nullptr;
        if ( (unsigned __int8)get_type_by_tid(&v97, v87) && get_tinfo_size(0, v97, 0) != -1 )
        {
          clear_tinfo_t(&v97);
          goto LABEL_105;
        }
        clear_tinfo_t(&v97);
      }
    }
    v40 = 0;
    goto LABEL_105;
  }
  v80 = 1;
  v72 = v88 != v89;
LABEL_11:
  v85 = 0;
  while ( 1 )
  {
    v15 = 15LL << (4 * ((unsigned __int8)v85 + ((int)v85 > 1) + 5));
    v16 = v14 & v15;
    v17 = v5 & v15;
    if ( v83 != 1024 || ((((unsigned int)v5 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFEFFFFFFFLL) != 0 )
    {
      v18 = (v5 | v14) & v15;
    }
    else
    {
      v18 = v14 & v15;
      v17 = 0;
    }
    if ( !v18 )
      goto LABEL_22;
    v106 = v85;
    v19 = *(_DWORD *)(qword_2CA1698 + 88);
    if ( (unsigned __int8)sub_455D20(v107, v103, v105, v102, v85, v5) )
    {
      v20 = sub_461060(v103, v107[0].m128i_i16, v5, v106, v105, v104, 1);
      if ( v20 )
      {
        if ( (v83 != 1024 || (v5 & 0xF0000000) != 0x60000000) && !(unsigned __int8)is_enum(v5, v85) )
          goto LABEL_17;
        v71 = v107[0].m128i_i32[0];
        if ( v107[0].m128i_i32[0] == -1 )
          goto LABEL_17;
        switch_dbctx(*(int *)(v103 + 4LL * v104 + 16));
        v97 = nullptr;
        if ( (unsigned __int8)get_type_by_tid(&v97, v71) && get_tinfo_size(0, v97, 0) != -1 )
        {
          clear_tinfo_t(&v97);
          goto LABEL_17;
        }
        clear_tinfo_t(&v97);
      }
    }
    v20 = 0;
LABEL_17:
    v108 = v20;
    switch_dbctx(v19);
    v21 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1480);
    if ( v17 == v16 )
    {
      v73 = (__int64)v91;
      v22 = *(int *)(qword_2CA1698 + 88);
      v23 = sub_455D20(&v124, v103, v104, v102, v106, (__int64)v91);
      if ( v23 == v108 && (!v23 || !sub_3C03F0(v124.m128i_i32, v107, v73, v106)) )
      {
        switch_dbctx(v22);
        goto LABEL_22;
      }
      switch_dbctx(v22);
    }
    if ( v17 )
    {
      if ( !(unsigned __int8)sub_3CFC30(*v21, v82, v17, v85) )
      {
        if ( !under_debugger )
          interr(1853);
        goto LABEL_186;
      }
    }
    else
    {
      sub_3CB3B0(v21, v82, v85);
    }
    if ( v108 )
      sub_3C5000(v21, v82, v85, v17, v107, 1);
LABEL_22:
    if ( v80 == ++v85 )
      break;
    v14 = (unsigned __int64)v91;
  }
  v24 = get_flags_ex(v82, 0);
  v14 = v24;
  if ( v83 != 1536 )
  {
    v91 = (void *)v24;
    goto LABEL_39;
  }
  v34 = v24 & 0x600;
  if ( (v5 & 0x40000000) != 0 )
  {
    v14 |= 0x40000000u;
    v91 = (void *)v14;
    if ( v34 != 1536 )
      goto LABEL_79;
LABEL_75:
    if ( (v14 & 0x10000000) != 0 )
    {
      v25 = 0;
      switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
      v92 = 0;
      v93 = nullptr;
      v95 = nullptr;
      v94 = 0;
      v96 = 0;
      goto LABEL_43;
    }
LABEL_40:
    if ( (~(_WORD)v5 & 0x600) == 0 )
      goto LABEL_79;
LABEL_41:
    switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
    v92 = 0;
    v93 = nullptr;
    v95 = nullptr;
    v94 = 0;
    v96 = 0;
  }
  else
  {
    v14 &= ~0x40000000uLL;
    v91 = (void *)v14;
    if ( v34 == 1536 )
      goto LABEL_75;
LABEL_79:
    switch_dbctx(*(int *)(a1 + 4LL * a3 + 16));
    v92 = 0;
    v93 = nullptr;
    v95 = nullptr;
    v94 = 0;
    v96 = 0;
    if ( (v5 & 0x10000000) != 0 )
    {
      v25 = 0;
      goto LABEL_43;
    }
  }
  sub_456A50(&v92, v82, v5);
  v25 = 1;
LABEL_43:
  v124.m128i_i32[0] = -1;
  v26 = &v139;
  memset(v125, 0, sizeof(v125));
  v27 = (int *)&v126;
  do
  {
    *(_QWORD *)v27 = 0;
    v27 += 6;
    *((_OWORD *)v27 - 1) = 0;
  }
  while ( v27 != &v139 );
  v148 = 0;
  v150 = 0;
  v143 = 0xFFFFFFFF00000000LL;
  v145 = 0xFFFFFFFF00000002LL;
  v151 = 0;
  v139 = -1;
  v140 = 0x800000;
  v142 = 0;
  v144 = 0;
  v146 = nullptr;
  *(__int64 *)((char *)v124.m128i_i64 + 4) = 0;
  v124.m128i_i32[3] = 0;
  v149 = 0;
  v141 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
  v147 = 0;
  sub_457330((__int64)&v124, v82, v5);
  v101 = 0;
  v97 = nullptr;
  ptr = nullptr;
  v98 = 0;
  v100 = 0;
  sub_3C09E0((__int64)&v97, v82, v5);
  v84 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1480);
  if ( v25 )
    sub_456BF0(&v92, (__int64 *)&v91, v82);
  sub_457660((__int64)&v124, (__int64 *)&v91, v82);
  sub_3CC660((__int64)&v97, (__int64 *)&v91, v82);
  sub_3CAE70(v84, v82, (__int64)v91);
  v78 = v88;
  v28 = v79 + (unsigned int)v88;
  if ( (BYTE1(v91) & 6) != 0 )
  {
    if ( !a5 )
      goto LABEL_49;
LABEL_71:
    sub_445720(a1, 6u, a2, a3, v82, v5, v78);
  }
  else
  {
    while ( 1 )
    {
      v33 = sub_4586A0(v84, v79, 1u, v28);
      LODWORD(v79) = v33;
      if ( v33 >= v28 )
        break;
      v31 = v33;
      v32 = ea2node((unsigned int)v33);
      netnode_supdel(v32, 15, 65);
      set_name(v31, (void *)&byte_22CD811);
      set_name(v31, (void *)&byte_22CD811);
      sub_3CB960(v31);
    }
    if ( a5 )
      goto LABEL_71;
LABEL_49:
    if ( v72 )
      goto LABEL_71;
  }
  if ( v28 < *(_QWORD *)v90 )
    v28 = *(_QWORD *)v90;
  if ( ptr )
  {
    *(_QWORD *)&v100 = 0;
    qfree(ptr);
  }
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree(v97);
  }
  if ( v146 )
  {
    *(_QWORD *)&v147 = 0;
    qfree(v146);
  }
  do
  {
    v29 = *((void **)v26 - 3);
    v26 -= 6;
    if ( v29 )
    {
      *((_QWORD *)v26 + 1) = 0;
      qfree(v29);
    }
  }
  while ( v26 != (int *)&v126 );
  if ( *(_QWORD *)v125 )
  {
    *(_QWORD *)&v125[8] = 0;
    qfree(*(void **)v125);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree(v93);
  }
  return v28;
}

