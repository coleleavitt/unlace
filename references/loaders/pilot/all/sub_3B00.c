unsigned __int64 __fastcall sub_3B00(
        __int64 a1,
        char a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128 v14; // xmm0
  __int64 v15; // rsi
  __int64 segm_by_sel; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // ecx
  char v23; // al
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // r13
  int dword; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbp
  int v44; // ebx
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v67; // rax
  const char *v68; // r12
  __int16 v69; // dx
  __int64 v70; // r13
  int v71; // eax
  int v72; // r13d
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // r14
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rsi
  __int64 v79; // rbx
  int v80; // r12d
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned int v83; // r12d
  __int64 v84; // rax
  __int64 v85; // rbp
  unsigned __int64 v86; // r12
  __int64 *v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned __int64 v90; // r14
  char *v91; // rbp
  __int64 v92; // r8
  unsigned int v93; // eax
  __int64 v94; // r14
  signed __int32 v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __m128 v100; // xmm4
  __m128 v101; // xmm5
  __int64 v102; // rbp
  unsigned int v103; // ecx
  unsigned int v104; // eax
  char *v105; // rbp
  signed __int32 v106; // edx
  unsigned __int64 v107; // r14
  _BYTE *v108; // rax
  unsigned __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  unsigned __int64 v112; // rcx
  unsigned int v113; // edx
  _BYTE *v114; // rax
  unsigned int v115; // edx
  unsigned int *v116; // rax
  char *v117; // rax
  int v118; // eax
  unsigned int *v119; // rdi
  unsigned int *v120; // rdi
  unsigned int *v121; // rdi
  unsigned int *v122; // rdi
  __int64 v123; // [rsp+0h] [rbp-228h]
  char v124; // [rsp+0h] [rbp-228h]
  char v125; // [rsp+0h] [rbp-228h]
  __int64 v126; // [rsp+8h] [rbp-220h]
  __int64 v127; // [rsp+8h] [rbp-220h]
  __int64 v128; // [rsp+10h] [rbp-218h]
  __int64 v129; // [rsp+10h] [rbp-218h]
  _BYTE *v130; // [rsp+18h] [rbp-210h]
  __int64 v131; // [rsp+18h] [rbp-210h]
  __int64 v132; // [rsp+20h] [rbp-208h]
  unsigned int v133; // [rsp+20h] [rbp-208h]
  unsigned __int64 v134; // [rsp+28h] [rbp-200h]
  __int16 v135; // [rsp+32h] [rbp-1F6h]
  bool v136; // [rsp+34h] [rbp-1F4h]
  char v137; // [rsp+35h] [rbp-1F3h]
  unsigned __int16 v138; // [rsp+36h] [rbp-1F2h]
  __int64 v139; // [rsp+38h] [rbp-1F0h]
  __int64 v140; // [rsp+40h] [rbp-1E8h]
  __int64 v141; // [rsp+48h] [rbp-1E0h]
  __int64 v142; // [rsp+50h] [rbp-1D8h]
  __int64 v143; // [rsp+60h] [rbp-1C8h] BYREF
  unsigned __int64 v144; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned __int64 v145; // [rsp+70h] [rbp-1B8h] BYREF
  unsigned __int64 v146; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v147; // [rsp+80h] [rbp-1A8h] BYREF
  __int128 v148; // [rsp+88h] [rbp-1A0h]
  __int64 v149; // [rsp+A0h] [rbp-188h] BYREF
  __int128 v150; // [rsp+A8h] [rbp-180h]
  _BYTE v151[34]; // [rsp+C0h] [rbp-168h] BYREF
  unsigned __int16 v152; // [rsp+E2h] [rbp-146h]
  char v153[4]; // [rsp+FCh] [rbp-12Ch] BYREF
  char v154[12]; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int16 v155; // [rsp+10Ch] [rbp-11Ch]
  _QWORD v156[2]; // [rsp+110h] [rbp-118h] BYREF
  __int128 v157; // [rsp+120h] [rbp-108h]
  __int64 v158; // [rsp+130h] [rbp-F8h]
  __int64 v159; // [rsp+138h] [rbp-F0h]
  __int64 v160; // [rsp+140h] [rbp-E8h]
  __int128 v161; // [rsp+148h] [rbp-E0h]
  __int128 v162; // [rsp+158h] [rbp-D0h]
  __int128 v163; // [rsp+168h] [rbp-C0h]
  __int128 v164; // [rsp+178h] [rbp-B0h]
  __int128 v165; // [rsp+188h] [rbp-A0h]
  __int128 v166; // [rsp+198h] [rbp-90h]
  __int128 v167; // [rsp+1A8h] [rbp-80h]
  __int128 v168; // [rsp+1B8h] [rbp-70h]
  unsigned __int64 v169; // [rsp+1C8h] [rbp-60h]
  _BYTE v170[10]; // [rsp+1DEh] [rbp-4Ah] BYREF
  unsigned __int64 v171; // [rsp+1E8h] [rbp-40h]

  v126 = a1;
  v171 = __readfsqword(0x28u);
  HIDWORD(v128) = strcmp(a3, "PalmPilot program file (ARM)");
  v138 = a2 & 8;
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  if ( HIDWORD(v128) )
  {
    set_processor_type("68K", 1);
    v12 = 2;
  }
  else
  {
    set_processor_type("ARM", 1);
    v12 = 0;
  }
  set_target_assembler(v12);
  lread(v126, v151, 78);
  sub_2520((__int64)v151);
  v13 = v155;
  v14 = 0;
  v15 = 0;
  v147 = 0;
  v148 = 0;
  if ( v155 )
  {
    v147 = qvector_reserve(&v147, 0, v155, 10);
    memset((void *)(v147 + 10 * v148), 0, 10 * (v13 - v148));
    *(_QWORD *)&v148 = v13;
    v15 = v147;
    v13 = v155;
  }
  segm_by_sel = v126;
  lread(v126, v15, 10 * v13);
  if ( v155 )
  {
    segm_by_sel = 0;
    LODWORD(v15) = 0;
    do
    {
      v15 = (unsigned int)(v15 + 1);
      v20 = segm_by_sel + v147;
      segm_by_sel += 10;
      v21 = *(_DWORD *)(v20 + 6);
      *(_WORD *)(v20 + 4) = __ROL2__(*(_WORD *)(v20 + 4), 8);
      *(_DWORD *)(v20 + 6) = _byteswap_ulong(v21);
      v22 = v155;
      v17 = v155;
    }
    while ( v155 > (int)v15 );
    v143 = 0;
    if ( !HIDWORD(v128) )
    {
      v137 = (v138 >> 3) ^ 1;
      if ( !v155 )
        goto LABEL_37;
LABEL_10:
      v139 = -1;
      v23 = a2;
      v24 = 0;
      v141 = -1;
      v135 = v23 & 2;
      v142 = -1;
      v140 = -1;
      v134 = -1;
      if ( (v23 & 2) == 0 )
      {
        v15 = v147;
        v34 = 0;
        goto LABEL_21;
      }
      while ( 1 )
      {
        if ( HIDWORD(v128) )
        {
          v15 = v147;
          while ( 1 )
          {
            v71 = *(_DWORD *)(v15 + 10LL * v24);
            if ( v71 != 1129140801 )
            {
LABEL_60:
              if ( v71 != 1668117089 )
                goto LABEL_12;
            }
LABEL_61:
            v22 = v155;
            if ( v155 <= ++v24 )
              goto LABEL_23;
            if ( !v135 )
              goto LABEL_20;
          }
        }
        while ( 1 )
        {
LABEL_12:
          v25 = (unsigned int)(v22 - 1);
          if ( (_DWORD)v25 == v24 )
          {
            v84 = qlsize(v126);
            v26 = v147;
            v27 = v84;
          }
          else
          {
            v26 = v147;
            v27 = *(unsigned int *)(v147 + 10LL * (v24 + 1) + 6);
          }
          v28 = 10LL * v24;
          v29 = *(unsigned int *)(v26 + v28 + 6);
          if ( v27 < v29 )
            sub_2EA0((__int64)"Invalid file structure");
          v30 = v27 - v29;
          v31 = (getinf(20, v15, v26, v25, v18, v19, v123, v126, v128, v130) + 15) & 0xFFFFFFFFFFFFFFF0LL;
          v32 = v30 + v31;
          v130 = v170;
          segm_by_sel = (__int64)v170;
          qsnprintf(v170, 10, "%4.4s%04X", (const char *)(v28 + v147), *(unsigned __int16 *)(v28 + v147 + 4));
          v15 = v147;
          v33 = v147 + v28;
          v17 = *(unsigned int *)(v147 + 10LL * v24);
          if ( HIDWORD(v128) )
            break;
          if ( (_DWORD)v17 == 1129140801 || (_DWORD)v17 == 1668117089 )
          {
            v136 = sub_3A80(v126, *(_DWORD *)(v33 + 6));
            file2base(v126, *(unsigned int *)(v147 + v28 + 6), v31, v32, 1);
            v72 = v24 + 1;
            if ( v136 )
            {
              v132 = v72;
              if ( v137 )
              {
                v73 = v24 - (__int64)v72;
                v74 = 10LL * v72;
                v75 = 10 * v73;
                while ( v155 - 1 > v24 )
                {
                  v80 = v24 + 1;
                  v81 = v147 + v74 + v75;
                  v82 = v74 + v147;
                  if ( *(_DWORD *)v81 != *(_DWORD *)(v74 + v147)
                    || *(unsigned __int16 *)(v81 + 4) + 1 != *(unsigned __int16 *)(v82 + 4)
                    || sub_3A80(v126, *(_DWORD *)(v82 + 6)) )
                  {
                    break;
                  }
                  if ( v155 - 1 == v80 )
                  {
                    v77 = qlsize(v126);
                    v76 = v147;
                  }
                  else
                  {
                    v76 = v147;
                    v77 = *(unsigned int *)(v147 + 10LL * (v24 + 2) + 6);
                  }
                  v78 = *(unsigned int *)(v76 + v74 + 6);
                  if ( v77 < v78 )
                    sub_2EA0((__int64)"Invalid file structure");
                  v79 = v77 + v32 - v78;
                  file2base(v126, v78, v32, v79, 1);
                  v32 = v79;
                  v74 += 10;
                  v24 = v80;
                }
              }
            }
            else
            {
              v132 = v72;
            }
            set_selector(v132, v31 >> 4);
            if ( !(unsigned __int8)add_segm(v132, v31, v32, v170, "CODE", 32) )
              sub_2EA0(0);
            v83 = str2reg("DS");
            segm_by_sel = get_segm_by_sel(v132);
            v15 = v83;
            set_default_sreg_value(segm_by_sel, v83, v132);
            if ( v136 )
            {
              v15 = v32;
              segm_by_sel = v31;
              sub_3770(v31, v32);
            }
            v22 = v155;
            if ( ++v24 >= v155 )
              goto LABEL_23;
            if ( !v135 )
            {
              v15 = v147;
              goto LABEL_20;
            }
          }
          else
          {
            v22 = v155;
            if ( v155 <= ++v24 )
              goto LABEL_23;
            if ( !v135 )
            {
LABEL_20:
              v34 = v24;
              goto LABEL_21;
            }
          }
        }
        if ( (_DWORD)v17 == 1701080931 )
        {
          v17 = *(unsigned __int16 *)(v33 + 4);
          v68 = "CODE";
          if ( !(_WORD)v17 )
          {
            if ( v138 )
              goto LABEL_55;
            goto LABEL_61;
          }
          if ( (_WORD)v17 != 1 )
            goto LABEL_55;
        }
        else
        {
          if ( (_DWORD)v17 != 1919052140 )
          {
            v68 = "RSC";
            if ( (_DWORD)v17 != 1651067975 )
              goto LABEL_51;
          }
          v68 = "CODE";
          if ( *(_WORD *)(v33 + 4) )
            goto LABEL_55;
        }
        setinf(14, v24 + 1);
        setinf(15, 0);
        v33 = v28 + v147;
        LODWORD(v17) = *(_DWORD *)(v28 + v147);
        v139 = v31;
LABEL_51:
        if ( (_DWORD)v17 != 1635017060 )
          goto LABEL_55;
        v69 = *(_WORD *)(v33 + 4);
        v70 = *(unsigned int *)(v33 + 6);
        if ( v69 )
        {
          if ( v69 != 1 || !v137 )
          {
LABEL_55:
            file2base(v126, *(unsigned int *)(v33 + 6), v31, v30 + v31, 1);
            v34 = ++v24;
            goto LABEL_56;
          }
          v145 = v30;
          if ( v30 > 0xB )
          {
            v150 = 0;
            v149 = 0;
            v149 = qvector_reserve(&v149, 0, v30, 1);
            memset((void *)(v149 + v150), 0, v30 - v150);
            *(_QWORD *)&v150 = v30;
            v102 = v149;
            qlseek(v126, v70, 0);
            lread(v126, v102, v30);
            v103 = *(_DWORD *)(v102 + 8);
            v104 = *(_DWORD *)(v102 + 4);
            v105 = (char *)(v102 + 12);
            v145 = v30 - 12;
            v106 = _byteswap_ulong(v103);
            v107 = (int)(_byteswap_ulong(v104) - v106);
            v140 = v31 - v106;
            if ( (v103 & 0x1000000) != 0 )
            {
              ++v107;
              v140 = v31 + 1 - v106;
            }
            v146 = v31;
            enable_flags(v31, v31 + v107, 0xFFFFFFFFLL);
            create_data(v140, 0, 1, -1);
            set_name(v140, "A4BASE", 33);
            set_cmt(v140, "A4 points here", 0);
            v108 = sub_2740(v105, (__int64 *)&v145, &v146, (__int64)&v105[v70 - v149]);
            if ( !v108 )
            {
LABEL_162:
              v32 = v31;
              goto LABEL_124;
            }
            v112 = v145;
            if ( v145 > 3 )
            {
              v113 = *(_DWORD *)v108;
              v145 -= 4LL;
              v146 = v140 + _byteswap_ulong(v113);
              v114 = sub_2740(v108 + 4, (__int64 *)&v145, &v146, (__int64)&v108[v70 + 4 - v149]);
              if ( !v114 )
                goto LABEL_162;
              v112 = v145;
              if ( v145 > 3 )
              {
                v115 = *(_DWORD *)v114;
                v145 -= 4LL;
                v146 = v140 + _byteswap_ulong(v115);
                v116 = (unsigned int *)sub_2740(v114 + 4, (__int64 *)&v145, &v146, (__int64)&v114[v70 + 4 - v149]);
                if ( !v116 )
                  goto LABEL_162;
                v109 = v146 - v31;
                v146 -= v31;
                if ( v146 >= v107 )
                  v107 = v109;
                if ( v145 )
                {
                  v120 = (unsigned int *)sub_2BA0(v116, (__int64 *)&v145, v140, v140, 0);
                  if ( !v120 )
                    goto LABEL_162;
                  if ( v145 )
                  {
                    v121 = (unsigned int *)sub_2BA0(v120, (__int64 *)&v145, v140, v134, 0);
                    if ( !v121 )
                      goto LABEL_162;
                    if ( v145 )
                    {
                      v122 = (unsigned int *)sub_2BA0(v121, (__int64 *)&v145, v140, v139, 1);
                      if ( !v122 || v145 && !sub_2BA0(v122, (__int64 *)&v145, v134, v140, 0) )
                        goto LABEL_162;
                    }
                  }
                }
                v32 = v31 + v107;
LABEL_124:
                if ( v149 )
                {
                  *(_QWORD *)&v150 = 0;
                  qfree(v149, &v145, v109, v110, v111);
                }
LABEL_137:
                ++v24;
                v68 = "DATA";
                v34 = v24;
                goto LABEL_56;
              }
            }
            if ( v149 )
            {
              *(_QWORD *)&v150 = 0;
              qfree(v149, &v145, v109, v112, v111);
            }
          }
          sub_2670((__int64)"Bad packed data");
          v32 = v31;
          goto LABEL_137;
        }
        v144 = v30;
        if ( v30 <= 3 )
          goto LABEL_131;
        v150 = 0;
        v149 = 0;
        v149 = qvector_reserve(&v149, 0, v30, 1);
        memset((void *)(v149 + v150), 0, v30 - v150);
        *(_QWORD *)&v150 = v30;
        v85 = v149;
        qlseek(v126, v70, 0);
        lread(v126, v85, v30);
        v86 = (unsigned int)(v143 + HIDWORD(v143));
        v87 = (__int64 *)(v31 + v86);
        enable_flags(v31, v31 + v86, 0xFFFFFFFFLL);
        v90 = v30 - 4;
        v91 = (char *)(v85 + 4);
        v92 = 0;
        v144 = v90;
        v134 = v31 + HIDWORD(v143);
        while ( 1 )
        {
          if ( v90 <= 3 )
          {
            if ( v149 )
            {
              *(_QWORD *)&v150 = 0;
              qfree(v149, v87, v88, v89, v92);
            }
LABEL_131:
            sub_2670((__int64)"Bad packed data");
            v32 = v31;
            goto LABEL_111;
          }
          v93 = *(_DWORD *)v91;
          v94 = v90 - 4;
          v144 = v94;
          v95 = _byteswap_ulong(v93);
          v88 = v95 + v134;
          v146 = v88;
          if ( v88 >= v31 )
          {
            v91 += 4;
            if ( !v94 )
              goto LABEL_100;
          }
          else
          {
            if ( (_DWORD)v92 )
              sub_2EA0((__int64)"Error while decompressing data 0");
            v146 = v31;
            v91 += 4;
            v134 = v31 - v95;
            if ( !v94 )
            {
              v92 = 1;
              goto LABEL_128;
            }
          }
          v87 = (__int64 *)&v144;
          v133 = v92;
          v117 = sub_2740(v91, (__int64 *)&v144, &v146, (__int64)&v91[v70 - v149]);
          v92 = v133;
          v91 = v117;
          if ( !v117 )
            goto LABEL_139;
LABEL_100:
          if ( v86 < v146 - v31 )
            v86 = v146 - v31;
          v92 = (unsigned int)(v92 + 1);
          if ( (_DWORD)v92 == 3 )
            break;
LABEL_128:
          v90 = v144;
        }
        if ( v31 + v86 - 1 < v134 )
        {
          enable_flags(v31 + v86, v31 + v86 + 1, 0xFFFFFFFFLL);
          ++v86;
        }
        create_data(v134, 0, 1, -1);
        if ( v31 != v134 )
          sub_25A0(
            (__int64)"A5 register does not point to the start of the data segment\n"
                     "The file should not be recompiled using Pila\n",
            0,
            v96,
            v97,
            v98,
            v99,
            (__m128)0LL,
            a5,
            a6,
            a7,
            v100,
            v101,
            a10,
            a11,
            v123);
        set_name(v134, "A5BASE", 33);
        v87 = (__int64 *)"A5 points here";
        set_cmt(v134, "A5 points here", 0);
        if ( !v144
          || (v87 = (__int64 *)&v144,
              (v119 = (unsigned int *)sub_2BA0((unsigned int *)v91, (__int64 *)&v144, v134, v134, 0)) != nullptr)
          && (!v144 || (v87 = (__int64 *)&v144, sub_2BA0(v119, (__int64 *)&v144, v134, v139, 1))) )
        {
          v32 = v31 + v86;
        }
        else
        {
LABEL_139:
          v32 = v31;
        }
        if ( v149 )
        {
          *(_QWORD *)&v150 = 0;
          qfree(v149, v87, v88, v89, v92);
        }
LABEL_111:
        ++v24;
        v142 = v31;
        v68 = "DATA";
        v34 = v24;
        v141 = v24;
LABEL_56:
        v157 = 0;
        v14 = (__m128)-1LL;
        v159 = 0x1000000;
        v158 = 0;
        v169 = 0xFFFFFFFF00000000LL;
        v156[0] = v31;
        v156[1] = v32;
        v160 = v34;
        v161 = -1;
        v162 = -1;
        v163 = -1;
        v164 = -1;
        v165 = -1;
        v166 = -1;
        v167 = -1;
        v168 = -1;
        set_selector(v34, v31 >> 4);
        segm_by_sel = (__int64)v156;
        if ( !(unsigned __int8)add_segm_ex(v156, v170, v68, 50) )
          sub_2EA0(0);
        v22 = v155;
        if ( v155 <= v24 )
        {
LABEL_23:
          v15 = HIDWORD(v128);
          if ( HIDWORD(v128) && v137 )
          {
            dword = get_dword(v139);
LABEL_26:
            if ( dword == 1 )
            {
              if ( (unsigned __int8)equal_bytes(v139, &unk_63C0, 255, 16, 1) )
                plan_to_apply_idasgn("cwpalm.sig");
              create_data(v139, 0x20000000, 4, -1);
              v15 = 4;
              setinf(15, 4);
            }
            segm_by_sel = 14;
            if ( getinf(14, v15, v36, v37, v38, v39, v123, v126, v128, v130) )
            {
              segm_by_sel = 14;
              v118 = getinf(14, v15, v17, v40, v41, v42, v123, v127, v129, v131);
              if ( *(_DWORD *)(v147 + 10LL * (v118 - 1)) == 1651067975 && v140 == -1 )
              {
                v140 = -1;
                if ( v142 != -1 )
                {
                  create_data(v142, 0, 1, -1);
                  set_name(v142, "A4BASE", 33);
                  v15 = (__int64)"A4 points here";
                  segm_by_sel = v142;
                  set_cmt(v142, "A4 points here", 0);
                  v140 = v142;
                }
              }
            }
            if ( v155 )
            {
              v43 = 0;
              v44 = 0;
              do
              {
                while ( 1 )
                {
                  ++v44;
                  if ( *(_DWORD *)(v43 + v147) == 1701080931 && *(_WORD *)(v43 + v147 + 4) > 1u )
                  {
                    segm_by_sel = v44;
                    v45 = (__int64 *)get_segm_by_sel(v44);
                    if ( v45 )
                      break;
                  }
                  v43 += 10;
                  if ( v155 <= v44 )
                    goto LABEL_35;
                }
                v15 = v45[1];
                segm_by_sel = *v45;
                sub_3390(*v45, v15, v44, v134, v140);
                v43 += 10;
              }
              while ( v155 > v44 );
            }
          }
LABEL_35:
          if ( v141 != -1 )
          {
            segm_by_sel = v141;
            set_default_dataseg(v141);
          }
          goto LABEL_37;
        }
        v15 = v147;
        if ( v135 )
        {
          v71 = *(_DWORD *)(v147 + 10 * v34);
          if ( v71 != 1129140801 )
            goto LABEL_60;
          goto LABEL_61;
        }
LABEL_21:
        segm_by_sel = *(unsigned int *)(v15 + 10 * v34);
        if ( sub_3140(segm_by_sel) )
        {
          if ( v155 <= ++v24 )
            goto LABEL_23;
          goto LABEL_20;
        }
      }
    }
    if ( v155 )
    {
      v67 = v147;
      v17 = v147 + 10LL * v155;
      while ( *(_DWORD *)v67 != 1701080931 || *(_WORD *)(v67 + 4) )
      {
        v67 += 10;
        if ( v67 == v17 )
        {
          v137 = (v138 >> 3) ^ 1;
          goto LABEL_10;
        }
      }
      qlseek(v126, *(unsigned int *)(v67 + 6), 0);
      v15 = (__int64)&v143;
      lread(v126, &v143, 8);
      segm_by_sel = (__int64)&v143;
      sub_2F50((unsigned int *)&v143);
      v22 = v155;
      v137 = (v138 >> 3) ^ 1;
      if ( v155 )
        goto LABEL_10;
    }
  }
  else
  {
    v143 = 0;
  }
  if ( !v138 && HIDWORD(v128) )
  {
    v141 = -1;
    v142 = -1;
    v134 = -1;
    v139 = -1;
    v140 = -1;
    dword = get_dword(-1);
    goto LABEL_26;
  }
LABEL_37:
  *(double *)v14.m128_u64 = create_filename_cmt(segm_by_sel, v15, v17);
  sub_25A0((__int64)"Version     : %04X", v152, v46, v47, v48, v49, v14, a5, a6, a7, v50, v51, a10, a11, v123);
  sub_25A0((__int64)"DatabaseType: %4.4s", (__int64)v153, v52, v53, v54, v55, v14, a5, a6, a7, v56, v57, a10, a11, v124);
  sub_25A0(
    (__int64)"\n appl \"%s\", '%4.4s'",
    (__int64)v151,
    (__int64)v154,
    v58,
    v59,
    v60,
    v14,
    a5,
    a6,
    a7,
    v61,
    v62,
    a10,
    a11,
    v125);
  exec_system_script("pilot.idc", 1);
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    qfree(v147, 1, v63, v64, v65);
  }
  return v171 - __readfsqword(0x28u);
}
