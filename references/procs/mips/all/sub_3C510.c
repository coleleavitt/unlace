__int64 __fastcall sub_3C510(_QWORD *a1, const char *a2, unsigned int a3, __int64 *a4, int a5)
{
  char **v6; // rbx
  void *v7; // r14
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned __int64 v10; // rax
  const char *v11; // r14
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // r15
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  void **v18; // rbx
  _DWORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  unsigned __int64 v24; // rax
  void **v25; // rbx
  _BYTE *v26; // rax
  unsigned __int64 v27; // rsi
  void *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  __m128i v31; // xmm0
  unsigned __int64 v32; // rax
  void **v33; // rbx
  void *v34; // r13
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  __m128i v38; // xmm0
  unsigned __int64 v39; // rax
  int v40; // ebx
  const char **v41; // r15
  __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r15
  __int64 *v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r14
  __int64 *v51; // rax
  __int64 v52; // rdi
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  unsigned __int64 v56; // rax
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  unsigned __int64 v59; // rax
  void *v60; // r13
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r14
  _QWORD *v67; // r14
  const char *v68; // rbx
  _QWORD *v69; // r14
  char v70; // cl
  __int16 v71; // dx
  __int16 v72; // ax
  __int16 v73; // cx
  __int16 v74; // ax
  _QWORD *v75; // r14
  __int16 v76; // cx
  __int16 v77; // cx
  __int16 v78; // ax
  __int16 v79; // cx
  __int16 v80; // cx
  __int16 v81; // ax
  __int16 v82; // cx
  __int64 v83; // rsi
  __int16 v84; // cx
  __int16 v85; // ax
  __int16 v86; // cx
  __int16 v87; // cx
  __int16 v88; // ax
  __int16 v89; // cx
  __int16 v90; // cx
  __int16 v91; // ax
  __int16 v92; // cx
  __int16 v93; // cx
  __int16 v94; // ax
  __int16 v95; // cx
  __int16 v96; // cx
  __int16 v97; // ax
  __int16 v98; // cx
  __int16 v99; // cx
  __int16 v100; // ax
  __int16 v101; // cx
  char v102; // dl
  int v103; // eax
  bool v104; // zf
  unsigned __int8 v105; // al
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  const char *v109; // rsi
  __m128i v110; // [rsp+0h] [rbp-D0h] BYREF
  __int64 *v111; // [rsp+10h] [rbp-C0h]
  unsigned int v112; // [rsp+18h] [rbp-B8h]
  int v113; // [rsp+1Ch] [rbp-B4h]
  _QWORD *v114; // [rsp+20h] [rbp-B0h]
  void **v115; // [rsp+28h] [rbp-A8h]
  __int16 v116; // [rsp+36h] [rbp-9Ah] BYREF
  int v117; // [rsp+38h] [rbp-98h] BYREF
  int v118; // [rsp+3Ch] [rbp-94h] BYREF
  unsigned __int64 v119; // [rsp+40h] [rbp-90h] BYREF
  __int128 v120; // [rsp+48h] [rbp-88h]
  unsigned __int64 v121; // [rsp+60h] [rbp-70h] BYREF
  __int128 v122; // [rsp+68h] [rbp-68h]
  void *v123; // [rsp+80h] [rbp-50h] BYREF
  __m128i v124; // [rsp+88h] [rbp-48h] BYREF
  unsigned __int64 v125; // [rsp+98h] [rbp-38h]

  v6 = &off_73540;
  v114 = a1;
  v112 = a3;
  v111 = a4;
  v113 = a5;
  v125 = __readfsqword(0x28u);
  v120 = 0;
  v119 = 0;
  v115 = &v123;
  do
  {
    while ( 1 )
    {
      v11 = *v6;
      v123 = nullptr;
      v124 = 0;
      if ( v11 )
      {
        v12 = strlen(v11);
        v13 = v12 + 1;
        v14 = v12;
        v123 = (void *)qvector_reserve(v115, 0, v12 + 1, 1);
        v124.m128i_i64[0] = v13;
        memmove(v123, v11, v14);
        *((_BYTE *)v123 + v14) = 0;
      }
      v65 = v120;
      v64 = v119;
      v15 = v120 + 1;
      if ( (unsigned __int64)v115 < v119 || (unsigned __int64)v115 >= v119 + 24LL * *((_QWORD *)&v120 + 1) )
        break;
      v7 = v123;
      v8 = _mm_loadl_epi64(&v124);
      v123 = nullptr;
      v9 = _mm_loadl_epi64((const __m128i *)&v124.m128i_u64[1]);
      v124 = 0;
      if ( *((_QWORD *)&v120 + 1) < v15 )
      {
        v110.m128i_i64[0] = v9.m128i_i64[0];
        v110.m128i_i64[1] = v8.m128i_i64[0];
        v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
        v64 = v119;
        v9 = _mm_loadl_epi64(&v110);
        v8 = _mm_loadl_epi64((const __m128i *)&v110.m128i_u64[1]);
        v65 = v120;
      }
      v10 = v64 + 24 * v65;
      *(_QWORD *)v10 = v7;
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v8, v9);
      *(_QWORD *)&v120 = v120 + 1;
      if ( v123 )
      {
        v124.m128i_i64[0] = 0;
        qfree(v123);
      }
      v6 += 4;
      if ( &off_73600 == v6 )
        goto LABEL_14;
    }
    if ( *((_QWORD *)&v120 + 1) < v15 )
    {
      v119 = qvector_reserve(&v119, v119, v120 + 1, 24);
      v64 = v119;
      v65 = v120;
    }
    v16 = _mm_loadu_si128(&v124);
    v6 += 4;
    v17 = v64 + 24 * v65;
    *(_QWORD *)v17 = v123;
    *(__m128i *)(v17 + 8) = v16;
    *(_QWORD *)&v120 = v120 + 1;
  }
  while ( &off_73600 != v6 );
LABEL_14:
  v18 = v115;
  v121 = 0;
  v123 = nullptr;
  v122 = 0;
  v124 = 0;
  v19 = (_DWORD *)qvector_reserve(v115, 0, 8, 1);
  v123 = v19;
  v124.m128i_i64[0] = 8;
  *v19 = 1397770573;
  *(_DWORD *)((char *)v19 + 3) = 1698050387;
  *((_BYTE *)v123 + 7) = 0;
  v20 = v122;
  v21 = v121;
  v22 = v122 + 1;
  if ( (unsigned __int64)v18 >= v121 && (unsigned __int64)v115 < v121 + 24LL * *((_QWORD *)&v122 + 1) )
  {
    v60 = v123;
    v61 = _mm_loadl_epi64(&v124);
    v123 = nullptr;
    v62 = _mm_loadl_epi64((const __m128i *)&v124.m128i_u64[1]);
    v124 = 0;
    if ( *((_QWORD *)&v122 + 1) < v22 )
    {
      v110.m128i_i64[0] = v62.m128i_i64[0];
      v110.m128i_i64[1] = v61.m128i_i64[0];
      v106 = qvector_reserve(&v121, v121, v122 + 1, 24);
      v62 = _mm_loadl_epi64(&v110);
      v121 = v106;
      v21 = v106;
      v61 = _mm_loadl_epi64((const __m128i *)&v110.m128i_u64[1]);
      v20 = v122;
    }
    v63 = v21 + 24 * v20;
    *(_QWORD *)v63 = v60;
    *(__m128i *)(v63 + 8) = _mm_unpacklo_epi64(v61, v62);
    *(_QWORD *)&v122 = v122 + 1;
    if ( v123 )
    {
      v124.m128i_i64[0] = 0;
      qfree(v123);
    }
  }
  else
  {
    if ( *((_QWORD *)&v122 + 1) < v22 )
    {
      v121 = qvector_reserve(&v121, v121, v122 + 1, 24);
      v21 = v121;
      v20 = v122;
    }
    v23 = _mm_loadu_si128(&v124);
    v24 = v21 + 24 * v20;
    *(_QWORD *)v24 = v123;
    *(__m128i *)(v24 + 8) = v23;
    *(_QWORD *)&v122 = v122 + 1;
  }
  v25 = v115;
  v123 = nullptr;
  v124 = 0;
  v26 = (_BYTE *)qvector_reserve(v115, 0, 10, 1);
  v123 = v26;
  v124.m128i_i64[0] = 10;
  *(_QWORD *)v26 = 0x50494D6F7263696DLL;
  v27 = v121;
  v26[8] = 83;
  v28 = v123;
  *((_BYTE *)v123 + 9) = 0;
  v29 = v122;
  v30 = v122 + 1;
  if ( (unsigned __int64)v25 >= v27 && (unsigned __int64)v115 < v27 + 24LL * *((_QWORD *)&v122 + 1) )
  {
    v57 = _mm_loadl_epi64(&v124);
    v58 = _mm_loadl_epi64((const __m128i *)&v124.m128i_u64[1]);
    v123 = nullptr;
    v124 = 0;
    if ( *((_QWORD *)&v122 + 1) < v30 )
    {
      v110.m128i_i64[0] = v58.m128i_i64[0];
      v110.m128i_i64[1] = v57.m128i_i64[0];
      v107 = qvector_reserve(&v121, v27, v122 + 1, 24);
      v58 = _mm_loadl_epi64(&v110);
      v121 = v107;
      v27 = v107;
      v57 = _mm_loadl_epi64((const __m128i *)&v110.m128i_u64[1]);
      v29 = v122;
    }
    v59 = v27 + 24 * v29;
    *(_QWORD *)v59 = v28;
    *(__m128i *)(v59 + 8) = _mm_unpacklo_epi64(v57, v58);
    *(_QWORD *)&v122 = v122 + 1;
    if ( v123 )
    {
      v124.m128i_i64[0] = 0;
      qfree(v123);
    }
  }
  else
  {
    if ( *((_QWORD *)&v122 + 1) < v30 )
    {
      v121 = qvector_reserve(&v121, v27, v122 + 1, 24);
      v27 = v121;
      v28 = v123;
      v29 = v122;
    }
    v31 = _mm_loadu_si128(&v124);
    v32 = v27 + 24 * v29;
    *(_QWORD *)v32 = v28;
    *(__m128i *)(v32 + 8) = v31;
    *(_QWORD *)&v122 = v122 + 1;
  }
  v33 = v115;
  v123 = nullptr;
  v124 = 0;
  v123 = (void *)qvector_reserve(v115, 0, 9, 1);
  v124.m128i_i64[0] = 9;
  strcpy((char *)v123, "nanoMIPS");
  v34 = v123;
  v35 = v121;
  v36 = v122;
  v37 = v122 + 1;
  if ( (unsigned __int64)v33 >= v121 && (unsigned __int64)v115 < v121 + 24LL * *((_QWORD *)&v122 + 1) )
  {
    v54 = _mm_loadl_epi64(&v124);
    v55 = _mm_loadl_epi64((const __m128i *)&v124.m128i_u64[1]);
    v123 = nullptr;
    v124 = 0;
    if ( *((_QWORD *)&v122 + 1) < v37 )
    {
      v110.m128i_i64[0] = v55.m128i_i64[0];
      v110.m128i_i64[1] = v54.m128i_i64[0];
      v108 = qvector_reserve(&v121, v121, v122 + 1, 24);
      v55 = _mm_loadl_epi64(&v110);
      v121 = v108;
      v35 = v108;
      v54 = _mm_loadl_epi64((const __m128i *)&v110.m128i_u64[1]);
      v36 = v122;
    }
    v56 = v35 + 24 * v36;
    *(_QWORD *)v56 = v34;
    *(__m128i *)(v56 + 8) = _mm_unpacklo_epi64(v54, v55);
    *(_QWORD *)&v122 = v122 + 1;
    if ( v123 )
    {
      v124.m128i_i64[0] = 0;
      qfree(v123);
    }
  }
  else
  {
    if ( *((_QWORD *)&v122 + 1) < v37 )
    {
      v121 = qvector_reserve(&v121, v121, v122 + 1, 24);
      v35 = v121;
      v34 = v123;
      v36 = v122;
    }
    v38 = _mm_loadu_si128(&v124);
    v39 = v35 + 24 * v36;
    *(_QWORD *)v39 = v34;
    *(__m128i *)(v39 + 8) = v38;
    *(_QWORD *)&v122 = v122 + 1;
  }
  v40 = 0;
  v41 = (const char **)&off_73400;
  if ( !a2 )
  {
    v69 = v114;
    LOWORD(v112) = *((_WORD *)v114 + 94);
    v116 = v112 & 3;
    v70 = getinf_flag(11, 4);
    v71 = *((_WORD *)v69 + 94);
    if ( v70 || (v71 & 4) != 0 )
      v72 = v116 | 4;
    else
      v72 = v116 & 0xFFFB;
    v73 = v72;
    v74 = v72 & 0xFFF7;
    v75 = v114;
    v76 = v73 | 8;
    if ( (v71 & 0x10) != 0 )
      v74 = v76;
    v77 = v74;
    v78 = v74 & 0xFFEF;
    v79 = v77 | 0x10;
    if ( (v71 & 0x20) != 0 )
      v78 = v79;
    v80 = v78;
    v81 = v78 & 0xFFDF;
    v82 = v80 | 0x20;
    if ( (v71 & 0x40) != 0 )
      v81 = v82;
    v116 = v81;
    v123 = (void *)v114[44];
    v117 = *((_DWORD *)v114 + 30);
    v118 = *((_DWORD *)v114 + 65);
    if ( (unsigned int)sub_3ACF0(
                         (__int64)"HELP\n"
                                  "MIPS specific options\n"
                                  "\n"
                                  " Use mnemonic register names\n"
                                  "\n"
                                  "       If checked, IDA will use mnemonic names of the registers,\n"
                                  "       like a0, a1, t0, v0...\n"
                                  "\n"
                                  " Strictly adhere to instruction formats\n"
                                  "\n"
                                  "       If this option is on, IDA will check that unused fields\n"
                                  "       of instructions are filled by zeroes. If they are not,\n"
                                  "       it will refuse to disassemble the instruction.\n"
                                  "\n"
                                  " Simplify instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will simplify instructions and replace\n"
                                  "       them by clearer pseudo-instructions\n"
                                  "       For example,\n"
                                  "\n"
                                  "               or      r5, r0, r4\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               move    r5, r4\n"
                                  "\n"
                                  "       NOTE: the move macro instruction is architecture dependent.\n"
                                  "       For mipsl and mipsb processors, 32-bit macro definition is used.\n"
                                  "       For other processors, 64-bit macro definition is used.\n"
                                  "       If macros are enabled, this options should be turned on.\n"
                                  "\n"
                                  " Prudently search for 'lui'\n"
                                  "\n"
                                  "       When looking back for the 'lui' instruction,\n"
                                  "       stop when an xrefed instruction is found.\n"
                                  "\n"
                                  " Allow hidden $at modifications\n"
                                  "\n"
                                  "       Allow hidden modification of $at ($1) register in macros\n"
                                  "\n"
                                  " Simplify $gp expressions\n"
                                  "\n"
                                  "       Expressions that use $gp to load addresses will be simplified.\n"
                                  "       For example,\n"
                                  "\n"
                                  "               lw         $t9, (signal_ptr - 0x46D120)($gp)\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               la         $t9, signal\n"
                                  "\n"
                                  "       This options requires $gp value to be valid.\n"
                                  "\n"
                                  "$gp value\n"
                                  "\n"
                                  "       If the $gp value is not 0xFFFFFFFF, then IDA will\n"
                                  "       convert all $gp-based expressions to nice offsets\n"
                                  "\n"
                                  "default ABI\n"
                                  "\n"
                                  "       Default ABI used for the plain binary files\n"
                                  "       (affects register names, type sizes, registers \n"
                                  "       tracked across functions, etc.)\n"
                                  "\n"
                                  "Encoding\n"
                                  "\n"
                                  "       Which compact ASE to decode (no-op if the binary contains no \n"
                                  "       compact instructions)\n"
                                  "ENDHELP\n"
                                  "MIPS specific options\n"
                                  "%/\n"
                                  " <Use m~n~emonic register names:C1>\n"
                                  " <St~r~ictly adhere to instruction formats:C2>\n"
                                  " <~S~implify instructions:C3>\n"
                                  " <~P~rudently search for 'lui':C5>\n"
                                  " <Allow ~h~idden $at modifications:C6>\n"
                                  " <Simplify $~g~p expressions:C7>>\n"
                                  "\n"
                                  " <$gp value:N::18::>\n"
                                  "\n"
                                  " <default ABI:b:0:::>\n"
                                  " <Encoding:b:0:::>\n"
                                  "\n",
                         sub_3AB90,
                         &v116,
                         v115,
                         &v119,
                         &v117,
                         &v121,
                         &v118) )
    {
      v83 = (__int64)v123;
      v84 = *((_WORD *)v75 + 94);
      v85 = v84 & 0xFFFE;
      v86 = v84 | 1;
      if ( (v116 & 1) != 0 )
        v85 = v86;
      v87 = v85;
      v88 = v85 & 0xFFFD;
      v89 = v87 | 2;
      if ( (v116 & 2) != 0 )
        v88 = v89;
      v90 = v88;
      v91 = v88 & 0xFFFB;
      v92 = v90 | 4;
      if ( (v116 & 4) != 0 )
        v91 = v92;
      v93 = v91;
      v94 = v91 & 0xFFEF;
      v95 = v93 | 0x10;
      if ( (v116 & 8) != 0 )
        v94 = v95;
      v96 = v94;
      v97 = v94 & 0xFFDF;
      v98 = v96 | 0x20;
      if ( (v116 & 0x10) != 0 )
        v97 = v98;
      v99 = v97;
      v100 = v97 & 0xFFBF;
      v101 = v99 | 0x40;
      v102 = v113;
      if ( (v116 & 0x20) != 0 )
        v100 = v101;
      *((_WORD *)v75 + 94) = v100;
      sub_3B440(v75, v83, v102);
      v103 = v117;
      v104 = (_BYTE)v113 == 0;
      *((_BYTE *)v75 + 312) = 1;
      *((_DWORD *)v75 + 30) = v103;
      *((_DWORD *)v75 + 65) = v118;
      if ( v104 )
        goto LABEL_72;
      goto LABEL_95;
    }
LABEL_71:
    if ( !(_BYTE)v113 )
    {
LABEL_72:
      v42 = 0;
      goto LABEL_35;
    }
LABEL_95:
    v105 = getinf(8);
    sub_3B640((__int64)v114, v105, 1);
    v42 = 0;
    goto LABEL_35;
  }
  do
  {
    if ( !strcmp(*v41, a2) )
    {
      v66 = v40;
      v42 = cfgopt_t__apply3(&(&off_73400)[5 * v40], 0, v112, v111, v114);
      if ( v42 )
        goto LABEL_35;
      if ( ((__int64)(&off_73400)[5 * v66 + 2] & 0xF) == 1 )
      {
        if ( !strcmp(a2, "MIPS_DEFAULT_ABI") )
        {
          v109 = byte_51ACD;
          if ( v114[34] )
            v109 = (const char *)v114[33];
          if ( (unsigned __int8)sub_3C160((__int64)v114, v109) )
          {
            *((_BYTE *)v114 + 312) = 1;
            goto LABEL_71;
          }
          goto LABEL_103;
        }
        if ( strcmp(a2, "MIPS_ENCODING") )
          goto LABEL_71;
        v67 = v114;
        if ( !v114[37] )
        {
LABEL_103:
          v42 = 3;
          goto LABEL_35;
        }
        v68 = (const char *)v114[36];
        if ( !strcmp(v68, "MIPS16e") )
        {
          *((_DWORD *)v67 + 65) = 0;
        }
        else
        {
          if ( strcmp(v68, "microMIPS") )
          {
            if ( !strcmp(v68, "nanoMIPS") )
            {
              *((_DWORD *)v114 + 65) = 2;
              goto LABEL_71;
            }
            goto LABEL_103;
          }
          *((_DWORD *)v114 + 65) = 1;
        }
      }
      goto LABEL_71;
    }
    ++v40;
    v41 += 5;
  }
  while ( v40 != 8 );
  if ( !strcmp(a2, "MIPS_GP") )
  {
    v42 = 2;
    if ( v112 == 2 )
    {
      sub_3B440(v114, *v111, v113);
      v42 = 0;
    }
  }
  else
  {
    v42 = 1;
  }
LABEL_35:
  v43 = v121;
  if ( v121 )
  {
    v44 = v122;
    if ( (_QWORD)v122 )
    {
      v45 = 0;
      do
      {
        v46 = (__int64 *)(v43 + 24 * v45);
        v47 = *v46;
        if ( *v46 )
        {
          v46[1] = 0;
          qfree(v47);
          v43 = v121;
        }
        ++v45;
      }
      while ( v44 != v45 );
    }
    *(_QWORD *)&v122 = 0;
    qfree(v43);
  }
  v48 = v119;
  if ( v119 )
  {
    v49 = v120;
    if ( (_QWORD)v120 )
    {
      v50 = 0;
      do
      {
        v51 = (__int64 *)(v48 + 24 * v50);
        v52 = *v51;
        if ( *v51 )
        {
          v51[1] = 0;
          qfree(v52);
          v48 = v119;
        }
        ++v50;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v120 = 0;
    qfree(v48);
  }
  return v42;
}
