unsigned __int64 __fastcall sub_1151BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  void **v8; // r13
  void **v9; // r14
  void *v10; // r15
  void **v11; // rdx
  __int64 v12; // rsi
  const char *v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r13
  _QWORD *v19; // r14
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // r13
  _QWORD *v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r13
  _QWORD *v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r13
  _QWORD *v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r13
  _QWORD *v35; // r14
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // r13
  _QWORD *v39; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // r13
  _QWORD *v43; // r14
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // r13
  _QWORD *v47; // r14
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // r13
  _QWORD *v51; // r14
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // r13
  _QWORD *v55; // r14
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // r13
  _QWORD *v59; // r14
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // r13
  _QWORD *v63; // r14
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // r13
  _QWORD *v67; // r14
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r13
  _QWORD *v71; // r14
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 result; // rax
  _QWORD *v76; // rbp
  _QWORD *v77; // r13
  void *v78; // r15
  _BYTE *v79; // rax
  void **v80; // r13
  void **v81; // r8
  void **v82; // rdx
  __int64 v83; // rsi
  char v84; // al
  __int64 v85; // rax
  char *v86; // rsi
  char *v87; // rsi
  __int64 v88; // rax
  char *v89; // rsi
  char *v90; // rsi
  __int64 v91; // rax
  char *v92; // rsi
  char *v93; // rsi
  __int64 v94; // rax
  char *v95; // rsi
  char *v96; // rsi
  __int64 v97; // rax
  char *v98; // rsi
  char *v99; // rsi
  __int64 v100; // rax
  char *v101; // rsi
  char *v102; // rsi
  __int64 v103; // rax
  char *v104; // rsi
  char *v105; // rsi
  __int64 v106; // rax
  char *v107; // rsi
  char *v108; // rsi
  __int64 v109; // rax
  char *v110; // rsi
  char *v111; // rsi
  __int64 v112; // rax
  char *v113; // rsi
  char *v114; // rsi
  __int64 v115; // rax
  char *v116; // rsi
  char *v117; // rsi
  __int64 v118; // rax
  char *v119; // rsi
  char *v120; // rsi
  __int64 v121; // rax
  char *v122; // rsi
  char *v123; // rsi
  __int64 v124; // rax
  char *v125; // rsi
  char *v126; // rsi
  __int64 v127; // rax
  char *v128; // rsi
  char *v129; // rsi
  char *v130; // rax
  char *v131; // rsi
  char *v132; // rax
  char *v133; // rax
  void **v134; // [rsp+8h] [rbp-80h] BYREF
  void **v135; // [rsp+10h] [rbp-78h]
  char *v136; // [rsp+18h] [rbp-70h]
  _QWORD v137[2]; // [rsp+20h] [rbp-68h] BYREF
  void *v138[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v139; // [rsp+40h] [rbp-48h] BYREF
  int v140; // [rsp+48h] [rbp-40h]

  v138[0] = (void *)0x96200000B3ALL;
  LODWORD(v138[1]) = 2217;
  v6 = sub_21B6DA0(a3, v138, 3);
  v7 = *(_QWORD *)(a3 + 8);
  v139 = 0x96200000B3ALL;
  v140 = 2217;
  v8 = (void **)(v7 + 8LL * (unsigned int)v6);
  v9 = (void **)(v7 + 8 * HIDWORD(v6));
  v134 = v9;
  *(__m128 *)v138 = _mm_loadh_ps((const double *)&v134);
  if ( v8 != v9 )
  {
    v135 = (void **)((char *)&v138[1] + 4);
    do
    {
      v10 = *v8;
      v11 = v138;
      if ( *v8 )
      {
        do
        {
          v12 = *((unsigned int *)v11 + 4);
          v134 = v11;
          if ( !(_DWORD)v12 )
            break;
          if ( (unsigned __int8)sub_21B9810(v10, v12) )
          {
            v134 = v9;
            v139 = 0x96200000B3ALL;
            v140 = 2217;
            *(__m128 *)v138 = _mm_loadh_ps((const double *)&v134);
            if ( v9 == v8 )
              goto LABEL_8;
            v136 = (char *)&v138[1] + 4;
LABEL_78:
            v78 = *v8;
            v79 = *((_BYTE **)*v8 + 2);
            if ( !v79 )
              v79 = *v8;
            v80 = v8 + 1;
            v79[44] |= 1u;
            for ( v138[0] = v80; v9 != v80; v138[0] = v80 )
            {
              v81 = (void **)*v80;
              v82 = v138;
              if ( *v80 )
              {
                do
                {
                  v83 = *((unsigned int *)v82 + 4);
                  v135 = v82;
                  if ( !(_DWORD)v83 )
                    break;
                  v134 = v81;
                  v84 = sub_21B9810(v81, v83);
                  v81 = v134;
                  if ( v84 )
                  {
                    v8 = (void **)v138[0];
                    if ( v9 != v138[0] )
                      goto LABEL_78;
                    goto LABEL_86;
                  }
                  v82 = (void **)((char *)v135 + 4);
                }
                while ( (char *)v135 + 4 != v136 );
              }
              ++v80;
            }
LABEL_86:
            if ( (unsigned __int8)sub_21B9810(v78, 2874) )
            {
              v130 = *(char **)(a4 + 8);
              v131 = *(char **)(a4 + 16);
              v138[1] = byte_9 + 1;
              v138[0] = "-isa-68881";
              if ( v130 == v131 )
              {
                sub_1075D80(a4, v131, v138);
                v131 = *(char **)(a4 + 16);
                v132 = *(char **)(a4 + 8);
              }
              else
              {
                *(_QWORD *)v130 = "-isa-68881";
                v132 = v130 + 16;
                *((_QWORD *)v132 - 1) = 10;
                *(_QWORD *)(a4 + 8) = v132;
              }
              v138[1] = byte_9 + 1;
              v138[0] = "-isa-68882";
              if ( v132 == v131 )
              {
                sub_1075D80(a4, v132, v138);
              }
              else
              {
                *(_QWORD *)v132 = "-isa-68882";
                v133 = v132 + 16;
                *((_QWORD *)v133 - 1) = 10;
                *(_QWORD *)(a4 + 8) = v133;
              }
              goto LABEL_15;
            }
            sub_11506D0((__int64)v138, a3);
            if ( !sub_9B4AA0((__int64)v138, "M68000") || !sub_9B4AA0((__int64)v138, "M68010") )
              goto LABEL_10;
            goto LABEL_9;
          }
          v11 = (void **)((char *)v134 + 4);
        }
        while ( v135 != (void **)((char *)v134 + 4) );
      }
      v138[0] = ++v8;
    }
    while ( v9 != v8 );
  }
LABEL_8:
  sub_11506D0((__int64)v138, a3);
LABEL_9:
  if ( !sub_9B4AA0((__int64)v138, "M68020") )
  {
LABEL_10:
    v13 = "+isa-68881";
    goto LABEL_11;
  }
  if ( !sub_9B4AA0((__int64)v138, "M68030")
    || !sub_9B4AA0((__int64)v138, "M68040")
    || !sub_9B4AA0((__int64)v138, "M68060") )
  {
    v13 = "+isa-68882";
LABEL_11:
    v137[0] = v13;
    v14 = *(char **)(a4 + 8);
    v137[1] = 10;
    if ( v14 == *(char **)(a4 + 16) )
    {
      sub_1075D80(a4, v14, v137);
    }
    else
    {
      *(_QWORD *)v14 = v13;
      v15 = v14 + 16;
      *((_QWORD *)v15 - 1) = 10;
      *(_QWORD *)(a4 + 8) = v15;
    }
  }
  if ( v138[0] != &v139 )
    operator delete(v138[0]);
LABEL_15:
  LODWORD(v138[0]) = 704;
  v16 = sub_21B6DA0(a3, v138, 1);
  v17 = *(_QWORD *)(a3 + 8);
  v18 = (_QWORD *)(v17 + 8LL * (unsigned int)v16);
  v19 = (_QWORD *)(v17 + 8 * HIDWORD(v16));
  if ( v18 != v19 )
  {
    while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 704) )
    {
      if ( v19 == ++v18 )
        goto LABEL_19;
    }
    if ( v19 != v18 )
    {
      do
      {
        v85 = *v18;
        if ( *(_QWORD *)(*v18 + 16LL) )
          v85 = *(_QWORD *)(*v18 + 16LL);
        ++v18;
        *(_BYTE *)(v85 + 44) |= 1u;
        if ( v18 == v19 )
          break;
        while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 704) )
        {
          if ( v19 == ++v18 )
            goto LABEL_99;
        }
      }
      while ( v19 != v18 );
LABEL_99:
      v86 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a0";
      if ( v86 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v86, v138);
      }
      else
      {
        *(_QWORD *)v86 = "+reserve-a0";
        v87 = v86 + 16;
        *((_QWORD *)v87 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v87;
      }
    }
  }
LABEL_19:
  LODWORD(v138[0]) = 705;
  v20 = sub_21B6DA0(a3, v138, 1);
  v21 = *(_QWORD *)(a3 + 8);
  v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
  v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
  if ( v22 != v23 )
  {
    while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 705) )
    {
      if ( v23 == ++v22 )
        goto LABEL_23;
    }
    if ( v22 != v23 )
    {
      do
      {
        v88 = *v22;
        if ( *(_QWORD *)(*v22 + 16LL) )
          v88 = *(_QWORD *)(*v22 + 16LL);
        ++v22;
        *(_BYTE *)(v88 + 44) |= 1u;
        if ( v22 == v23 )
          break;
        while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 705) )
        {
          if ( v23 == ++v22 )
            goto LABEL_110;
        }
      }
      while ( v22 != v23 );
LABEL_110:
      v89 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a1";
      if ( v89 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v89, v138);
      }
      else
      {
        *(_QWORD *)v89 = "+reserve-a1";
        v90 = v89 + 16;
        *((_QWORD *)v90 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v90;
      }
    }
  }
LABEL_23:
  LODWORD(v138[0]) = 706;
  v24 = sub_21B6DA0(a3, v138, 1);
  v25 = *(_QWORD *)(a3 + 8);
  v26 = (_QWORD *)(v25 + 8LL * (unsigned int)v24);
  v27 = (_QWORD *)(v25 + 8 * HIDWORD(v24));
  if ( v26 != v27 )
  {
    while ( !*v26 || !(unsigned __int8)sub_21B9810(*v26, 706) )
    {
      if ( v27 == ++v26 )
        goto LABEL_27;
    }
    if ( v26 != v27 )
    {
      do
      {
        v91 = *v26;
        if ( *(_QWORD *)(*v26 + 16LL) )
          v91 = *(_QWORD *)(*v26 + 16LL);
        ++v26;
        *(_BYTE *)(v91 + 44) |= 1u;
        if ( v26 == v27 )
          break;
        while ( !*v26 || !(unsigned __int8)sub_21B9810(*v26, 706) )
        {
          if ( v27 == ++v26 )
            goto LABEL_121;
        }
      }
      while ( v26 != v27 );
LABEL_121:
      v92 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a2";
      if ( v92 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v92, v138);
      }
      else
      {
        *(_QWORD *)v92 = "+reserve-a2";
        v93 = v92 + 16;
        *((_QWORD *)v93 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v93;
      }
    }
  }
LABEL_27:
  LODWORD(v138[0]) = 707;
  v28 = sub_21B6DA0(a3, v138, 1);
  v29 = *(_QWORD *)(a3 + 8);
  v30 = (_QWORD *)(v29 + 8LL * (unsigned int)v28);
  v31 = (_QWORD *)(v29 + 8 * HIDWORD(v28));
  if ( v30 != v31 )
  {
    while ( !*v30 || !(unsigned __int8)sub_21B9810(*v30, 707) )
    {
      if ( v31 == ++v30 )
        goto LABEL_31;
    }
    if ( v31 != v30 )
    {
      do
      {
        v94 = *v30;
        if ( *(_QWORD *)(*v30 + 16LL) )
          v94 = *(_QWORD *)(*v30 + 16LL);
        ++v30;
        *(_BYTE *)(v94 + 44) |= 1u;
        if ( v30 == v31 )
          break;
        while ( !*v30 || !(unsigned __int8)sub_21B9810(*v30, 707) )
        {
          if ( v31 == ++v30 )
            goto LABEL_132;
        }
      }
      while ( v31 != v30 );
LABEL_132:
      v95 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a3";
      if ( v95 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v95, v138);
      }
      else
      {
        *(_QWORD *)v95 = "+reserve-a3";
        v96 = v95 + 16;
        *((_QWORD *)v96 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v96;
      }
    }
  }
LABEL_31:
  LODWORD(v138[0]) = 708;
  v32 = sub_21B6DA0(a3, v138, 1);
  v33 = *(_QWORD *)(a3 + 8);
  v34 = (_QWORD *)(v33 + 8LL * (unsigned int)v32);
  v35 = (_QWORD *)(v33 + 8 * HIDWORD(v32));
  if ( v34 != v35 )
  {
    while ( !*v34 || !(unsigned __int8)sub_21B9810(*v34, 708) )
    {
      if ( v35 == ++v34 )
        goto LABEL_35;
    }
    if ( v35 != v34 )
    {
      do
      {
        v97 = *v34;
        if ( *(_QWORD *)(*v34 + 16LL) )
          v97 = *(_QWORD *)(*v34 + 16LL);
        ++v34;
        *(_BYTE *)(v97 + 44) |= 1u;
        if ( v34 == v35 )
          break;
        while ( !*v34 || !(unsigned __int8)sub_21B9810(*v34, 708) )
        {
          if ( v35 == ++v34 )
            goto LABEL_143;
        }
      }
      while ( v34 != v35 );
LABEL_143:
      v98 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a4";
      if ( v98 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v98, v138);
      }
      else
      {
        *(_QWORD *)v98 = "+reserve-a4";
        v99 = v98 + 16;
        *((_QWORD *)v99 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v99;
      }
    }
  }
LABEL_35:
  LODWORD(v138[0]) = 709;
  v36 = sub_21B6DA0(a3, v138, 1);
  v37 = *(_QWORD *)(a3 + 8);
  v38 = (_QWORD *)(v37 + 8LL * (unsigned int)v36);
  v39 = (_QWORD *)(v37 + 8 * HIDWORD(v36));
  if ( v38 != v39 )
  {
    while ( !*v38 || !(unsigned __int8)sub_21B9810(*v38, 709) )
    {
      if ( v39 == ++v38 )
        goto LABEL_39;
    }
    if ( v39 != v38 )
    {
      do
      {
        v100 = *v38;
        if ( *(_QWORD *)(*v38 + 16LL) )
          v100 = *(_QWORD *)(*v38 + 16LL);
        ++v38;
        *(_BYTE *)(v100 + 44) |= 1u;
        if ( v38 == v39 )
          break;
        while ( !*v38 || !(unsigned __int8)sub_21B9810(*v38, 709) )
        {
          if ( v39 == ++v38 )
            goto LABEL_154;
        }
      }
      while ( v38 != v39 );
LABEL_154:
      v101 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a5";
      if ( v101 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v101, v138);
      }
      else
      {
        *(_QWORD *)v101 = "+reserve-a5";
        v102 = v101 + 16;
        *((_QWORD *)v102 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v102;
      }
    }
  }
LABEL_39:
  LODWORD(v138[0]) = 710;
  v40 = sub_21B6DA0(a3, v138, 1);
  v41 = *(_QWORD *)(a3 + 8);
  v42 = (_QWORD *)(v41 + 8LL * (unsigned int)v40);
  v43 = (_QWORD *)(v41 + 8 * HIDWORD(v40));
  if ( v42 != v43 )
  {
    while ( !*v42 || !(unsigned __int8)sub_21B9810(*v42, 710) )
    {
      if ( v43 == ++v42 )
        goto LABEL_43;
    }
    if ( v43 != v42 )
    {
      do
      {
        v103 = *v42;
        if ( *(_QWORD *)(*v42 + 16LL) )
          v103 = *(_QWORD *)(*v42 + 16LL);
        ++v42;
        *(_BYTE *)(v103 + 44) |= 1u;
        if ( v42 == v43 )
          break;
        while ( !*v42 || !(unsigned __int8)sub_21B9810(*v42, 710) )
        {
          if ( v43 == ++v42 )
            goto LABEL_165;
        }
      }
      while ( v42 != v43 );
LABEL_165:
      v104 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-a6";
      if ( v104 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v104, v138);
      }
      else
      {
        *(_QWORD *)v104 = "+reserve-a6";
        v105 = v104 + 16;
        *((_QWORD *)v105 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v105;
      }
    }
  }
LABEL_43:
  LODWORD(v138[0]) = 711;
  v44 = sub_21B6DA0(a3, v138, 1);
  v45 = *(_QWORD *)(a3 + 8);
  v46 = (_QWORD *)(v45 + 8LL * (unsigned int)v44);
  v47 = (_QWORD *)(v45 + 8 * HIDWORD(v44));
  if ( v46 != v47 )
  {
    while ( !*v46 || !(unsigned __int8)sub_21B9810(*v46, 711) )
    {
      if ( v47 == ++v46 )
        goto LABEL_47;
    }
    if ( v46 != v47 )
    {
      do
      {
        v106 = *v46;
        if ( *(_QWORD *)(*v46 + 16LL) )
          v106 = *(_QWORD *)(*v46 + 16LL);
        ++v46;
        *(_BYTE *)(v106 + 44) |= 1u;
        if ( v46 == v47 )
          break;
        while ( !*v46 || !(unsigned __int8)sub_21B9810(*v46, 711) )
        {
          if ( v47 == ++v46 )
            goto LABEL_176;
        }
      }
      while ( v46 != v47 );
LABEL_176:
      v107 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d0";
      if ( v107 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v107, v138);
      }
      else
      {
        *(_QWORD *)v107 = "+reserve-d0";
        v108 = v107 + 16;
        *((_QWORD *)v108 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v108;
      }
    }
  }
LABEL_47:
  LODWORD(v138[0]) = 712;
  v48 = sub_21B6DA0(a3, v138, 1);
  v49 = *(_QWORD *)(a3 + 8);
  v50 = (_QWORD *)(v49 + 8LL * (unsigned int)v48);
  v51 = (_QWORD *)(v49 + 8 * HIDWORD(v48));
  if ( v50 != v51 )
  {
    while ( !*v50 || !(unsigned __int8)sub_21B9810(*v50, 712) )
    {
      if ( v51 == ++v50 )
        goto LABEL_51;
    }
    if ( v50 != v51 )
    {
      do
      {
        v109 = *v50;
        if ( *(_QWORD *)(*v50 + 16LL) )
          v109 = *(_QWORD *)(*v50 + 16LL);
        ++v50;
        *(_BYTE *)(v109 + 44) |= 1u;
        if ( v50 == v51 )
          break;
        while ( !*v50 || !(unsigned __int8)sub_21B9810(*v50, 712) )
        {
          if ( v51 == ++v50 )
            goto LABEL_187;
        }
      }
      while ( v51 != v50 );
LABEL_187:
      v110 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d1";
      if ( v110 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v110, v138);
      }
      else
      {
        *(_QWORD *)v110 = "+reserve-d1";
        v111 = v110 + 16;
        *((_QWORD *)v111 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v111;
      }
    }
  }
LABEL_51:
  LODWORD(v138[0]) = 713;
  v52 = sub_21B6DA0(a3, v138, 1);
  v53 = *(_QWORD *)(a3 + 8);
  v54 = (_QWORD *)(v53 + 8LL * (unsigned int)v52);
  v55 = (_QWORD *)(v53 + 8 * HIDWORD(v52));
  if ( v54 != v55 )
  {
    while ( !*v54 || !(unsigned __int8)sub_21B9810(*v54, 713) )
    {
      if ( v55 == ++v54 )
        goto LABEL_55;
    }
    if ( v55 != v54 )
    {
      do
      {
        v112 = *v54;
        if ( *(_QWORD *)(*v54 + 16LL) )
          v112 = *(_QWORD *)(*v54 + 16LL);
        ++v54;
        *(_BYTE *)(v112 + 44) |= 1u;
        if ( v54 == v55 )
          break;
        while ( !*v54 || !(unsigned __int8)sub_21B9810(*v54, 713) )
        {
          if ( v55 == ++v54 )
            goto LABEL_198;
        }
      }
      while ( v55 != v54 );
LABEL_198:
      v113 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d2";
      if ( v113 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v113, v138);
      }
      else
      {
        *(_QWORD *)v113 = "+reserve-d2";
        v114 = v113 + 16;
        *((_QWORD *)v114 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v114;
      }
    }
  }
LABEL_55:
  LODWORD(v138[0]) = 714;
  v56 = sub_21B6DA0(a3, v138, 1);
  v57 = *(_QWORD *)(a3 + 8);
  v58 = (_QWORD *)(v57 + 8LL * (unsigned int)v56);
  v59 = (_QWORD *)(v57 + 8 * HIDWORD(v56));
  if ( v58 != v59 )
  {
    while ( !*v58 || !(unsigned __int8)sub_21B9810(*v58, 714) )
    {
      if ( v59 == ++v58 )
        goto LABEL_59;
    }
    if ( v59 != v58 )
    {
      do
      {
        v115 = *v58;
        if ( *(_QWORD *)(*v58 + 16LL) )
          v115 = *(_QWORD *)(*v58 + 16LL);
        ++v58;
        *(_BYTE *)(v115 + 44) |= 1u;
        if ( v58 == v59 )
          break;
        while ( !*v58 || !(unsigned __int8)sub_21B9810(*v58, 714) )
        {
          if ( v59 == ++v58 )
            goto LABEL_209;
        }
      }
      while ( v59 != v58 );
LABEL_209:
      v116 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d3";
      if ( v116 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v116, v138);
      }
      else
      {
        *(_QWORD *)v116 = "+reserve-d3";
        v117 = v116 + 16;
        *((_QWORD *)v117 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v117;
      }
    }
  }
LABEL_59:
  LODWORD(v138[0]) = 715;
  v60 = sub_21B6DA0(a3, v138, 1);
  v61 = *(_QWORD *)(a3 + 8);
  v62 = (_QWORD *)(v61 + 8LL * (unsigned int)v60);
  v63 = (_QWORD *)(v61 + 8 * HIDWORD(v60));
  if ( v62 != v63 )
  {
    while ( !*v62 || !(unsigned __int8)sub_21B9810(*v62, 715) )
    {
      if ( v63 == ++v62 )
        goto LABEL_63;
    }
    if ( v63 != v62 )
    {
      do
      {
        v118 = *v62;
        if ( *(_QWORD *)(*v62 + 16LL) )
          v118 = *(_QWORD *)(*v62 + 16LL);
        ++v62;
        *(_BYTE *)(v118 + 44) |= 1u;
        if ( v62 == v63 )
          break;
        while ( !*v62 || !(unsigned __int8)sub_21B9810(*v62, 715) )
        {
          if ( v63 == ++v62 )
            goto LABEL_220;
        }
      }
      while ( v63 != v62 );
LABEL_220:
      v119 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d4";
      if ( v119 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v119, v138);
      }
      else
      {
        *(_QWORD *)v119 = "+reserve-d4";
        v120 = v119 + 16;
        *((_QWORD *)v120 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v120;
      }
    }
  }
LABEL_63:
  LODWORD(v138[0]) = 716;
  v64 = sub_21B6DA0(a3, v138, 1);
  v65 = *(_QWORD *)(a3 + 8);
  v66 = (_QWORD *)(v65 + 8LL * (unsigned int)v64);
  v67 = (_QWORD *)(v65 + 8 * HIDWORD(v64));
  if ( v66 != v67 )
  {
    while ( !*v66 || !(unsigned __int8)sub_21B9810(*v66, 716) )
    {
      if ( v67 == ++v66 )
        goto LABEL_67;
    }
    if ( v67 != v66 )
    {
      do
      {
        v121 = *v66;
        if ( *(_QWORD *)(*v66 + 16LL) )
          v121 = *(_QWORD *)(*v66 + 16LL);
        ++v66;
        *(_BYTE *)(v121 + 44) |= 1u;
        if ( v66 == v67 )
          break;
        while ( !*v66 || !(unsigned __int8)sub_21B9810(*v66, 716) )
        {
          if ( v67 == ++v66 )
            goto LABEL_231;
        }
      }
      while ( v66 != v67 );
LABEL_231:
      v122 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d5";
      if ( v122 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v122, v138);
      }
      else
      {
        *(_QWORD *)v122 = "+reserve-d5";
        v123 = v122 + 16;
        *((_QWORD *)v123 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v123;
      }
    }
  }
LABEL_67:
  LODWORD(v138[0]) = 717;
  v68 = sub_21B6DA0(a3, v138, 1);
  v69 = *(_QWORD *)(a3 + 8);
  v70 = (_QWORD *)(v69 + 8LL * (unsigned int)v68);
  v71 = (_QWORD *)(v69 + 8 * HIDWORD(v68));
  if ( v70 != v71 )
  {
    while ( !*v70 || !(unsigned __int8)sub_21B9810(*v70, 717) )
    {
      if ( v71 == ++v70 )
        goto LABEL_71;
    }
    if ( v70 != v71 )
    {
      do
      {
        v124 = *v70;
        if ( *(_QWORD *)(*v70 + 16LL) )
          v124 = *(_QWORD *)(*v70 + 16LL);
        ++v70;
        *(_BYTE *)(v124 + 44) |= 1u;
        if ( v70 == v71 )
          break;
        while ( !*v70 || !(unsigned __int8)sub_21B9810(*v70, 717) )
        {
          if ( v71 == ++v70 )
            goto LABEL_242;
        }
      }
      while ( v71 != v70 );
LABEL_242:
      v125 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d6";
      if ( v125 == *(char **)(a4 + 16) )
      {
        sub_1075D80(a4, v125, v138);
      }
      else
      {
        *(_QWORD *)v125 = "+reserve-d6";
        v126 = v125 + 16;
        *((_QWORD *)v126 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v126;
      }
    }
  }
LABEL_71:
  LODWORD(v138[0]) = 718;
  v72 = sub_21B6DA0(a3, v138, 1);
  v73 = *(_QWORD *)(a3 + 8);
  v74 = (unsigned int)v72;
  result = HIDWORD(v72);
  v76 = (_QWORD *)(v73 + 8 * v74);
  v77 = (_QWORD *)(v73 + 8 * result);
  if ( v76 != v77 )
  {
    while ( 1 )
    {
      if ( *v76 )
      {
        result = sub_21B9810(*v76, 718);
        if ( (_BYTE)result )
          break;
      }
      if ( v77 == ++v76 )
        return result;
    }
    if ( v76 != v77 )
    {
      do
      {
        v127 = *v76;
        if ( *(_QWORD *)(*v76 + 16LL) )
          v127 = *(_QWORD *)(*v76 + 16LL);
        ++v76;
        *(_BYTE *)(v127 + 44) |= 1u;
        if ( v76 == v77 )
          break;
        while ( !*v76 || !(unsigned __int8)sub_21B9810(*v76, 718) )
        {
          if ( v77 == ++v76 )
            goto LABEL_253;
        }
      }
      while ( v77 != v76 );
LABEL_253:
      result = (unsigned __int64)"+reserve-d7";
      v128 = *(char **)(a4 + 8);
      v138[1] = byte_9 + 2;
      v138[0] = "+reserve-d7";
      if ( v128 == *(char **)(a4 + 16) )
      {
        return sub_1075D80(a4, v128, v138);
      }
      else
      {
        *(_QWORD *)v128 = "+reserve-d7";
        v129 = v128 + 16;
        *((_QWORD *)v129 - 1) = 11;
        *(_QWORD *)(a4 + 8) = v129;
      }
    }
  }
  return result;
}
