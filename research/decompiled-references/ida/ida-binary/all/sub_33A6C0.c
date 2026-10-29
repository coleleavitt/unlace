__int64 __fastcall sub_33A6C0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  QT::QWidget *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r12d
  const char *v23; // rsi
  __int64 p_ptr; // rsi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  int max_strlit_length; // r13d
  void *v31; // rax
  QT::QWidget *v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned __int64 tinfo_size; // rax
  int v36; // r8d
  int v37; // eax
  const char *v38; // r9
  const char *v39; // rsi
  __int64 v40; // rdx
  _QWORD *v41; // r12
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // r13
  unsigned __int64 v46; // rsi
  QT::QMenu *v47; // rbx
  QT::QAction *v48; // r12
  QT::QWidget *v49; // r12
  QT::QAction *v50; // rax
  int v51; // ecx
  int v52; // r12d
  double v53; // xmm4_8
  double v54; // xmm5_8
  __int64 v55; // rax
  __int128 *v56; // rax
  const char *i; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // r12d
  unsigned __int8 aflags; // al
  double v64; // xmm4_8
  double v65; // xmm5_8
  __int64 v66; // rcx
  const char *v67; // rsi
  const char *v68; // rbx
  __int64 *v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rcx
  double v73; // xmm4_8
  double v74; // xmm5_8
  int v75; // edx
  __int64 v76; // rax
  __int64 v78; // rdi
  int v79; // edx
  __int128 *v80; // rax
  __int64 v81; // r12
  __int64 func; // rbx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r12
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // rsi
  int v94; // r12d
  int last_pfxlen; // ebx
  double v96; // xmm4_8
  double v97; // xmm5_8
  int v98; // r12d
  void *v99; // rax
  QT::QWidget *v100; // rdi
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  int v105; // ebx
  unsigned int v106; // r12d
  char v107; // al
  const char *v108; // r9
  unsigned int v109; // eax
  __int64 v110; // rdx
  const char *v111; // rsi
  const char *v112; // rcx
  const char *v113; // rdx
  const char *v114; // rdx
  int v115; // r12d
  const char *v116; // r9
  __int64 wide_word; // rax
  __int64 wide_dword; // rax
  __int64 v119; // r10
  __int64 qword; // rax
  void *v121; // rax
  QT::QWidget *v122; // rdi
  int v123; // eax
  __int64 bytes; // rax
  __int64 wide_byte; // rax
  __int64 v126; // rax
  int v127; // ecx
  int v128; // r8d
  int v129; // r9d
  __int64 v130; // rax
  int v131; // r8d
  int v132; // r9d
  QT::QAction *v133; // rbx
  QT::QObject *v134; // rax
  const char *v135; // rsi
  __int64 v136; // rdx
  __int64 v137; // rbx
  __int64 v138; // r12
  __int64 *v139; // rax
  __int64 v140; // rdi
  __int64 v141; // rcx
  __int64 v142; // rbx
  __int64 v143; // r12
  __int64 *v144; // rax
  __int64 v145; // rdi
  QT::QAction *v146; // rbx
  QT::QObject *v147; // rax
  struct _Unwind_Exception *v148; // rbx
  __int64 v149; // [rsp-8h] [rbp-6C8h]
  char v150; // [rsp+3h] [rbp-6BDh]
  int v151; // [rsp+4h] [rbp-6BCh]
  int v152; // [rsp+8h] [rbp-6B8h]
  char v153; // [rsp+10h] [rbp-6B0h]
  int v154; // [rsp+10h] [rbp-6B0h]
  unsigned __int64 v155; // [rsp+18h] [rbp-6A8h]
  const char *v156; // [rsp+18h] [rbp-6A8h]
  __int64 v157; // [rsp+20h] [rbp-6A0h]
  unsigned int v158; // [rsp+28h] [rbp-698h]
  char v159; // [rsp+2Ch] [rbp-694h]
  bool v160; // [rsp+2Dh] [rbp-693h]
  unsigned __int8 v161; // [rsp+2Eh] [rbp-692h]
  char v162; // [rsp+2Fh] [rbp-691h]
  __int64 v163; // [rsp+30h] [rbp-690h]
  int v164; // [rsp+30h] [rbp-690h]
  QT::QAction *v165; // [rsp+30h] [rbp-690h]
  unsigned __int64 v166; // [rsp+38h] [rbp-688h]
  unsigned __int64 v167; // [rsp+38h] [rbp-688h]
  int v168; // [rsp+38h] [rbp-688h]
  __int64 v170; // [rsp+48h] [rbp-678h]
  int ordinal_limit; // [rsp+48h] [rbp-678h]
  __int64 *v172; // [rsp+48h] [rbp-678h]
  __int64 v173; // [rsp+48h] [rbp-678h]
  __int128 *v174; // [rsp+48h] [rbp-678h]
  __int64 *v175; // [rsp+48h] [rbp-678h]
  const char *v176; // [rsp+58h] [rbp-668h] BYREF
  __int64 v177; // [rsp+60h] [rbp-660h] BYREF
  __int64 v178; // [rsp+68h] [rbp-658h] BYREF
  QT::QWidget *v179[2]; // [rsp+70h] [rbp-650h] BYREF
  const char *v180; // [rsp+80h] [rbp-640h] BYREF
  __int128 v181; // [rsp+88h] [rbp-638h]
  void *ptr; // [rsp+A0h] [rbp-620h] BYREF
  __int128 v183; // [rsp+A8h] [rbp-618h]
  char v184; // [rsp+B8h] [rbp-608h]
  __int64 v185; // [rsp+C0h] [rbp-600h]
  __int128 v186; // [rsp+C8h] [rbp-5F8h]
  __int64 v187; // [rsp+D8h] [rbp-5E8h]
  __int128 v188; // [rsp+E0h] [rbp-5E0h]
  __int128 v189; // [rsp+F0h] [rbp-5D0h] BYREF
  __int64 v190; // [rsp+100h] [rbp-5C0h]
  __int64 v191; // [rsp+108h] [rbp-5B8h]
  __int64 v192; // [rsp+110h] [rbp-5B0h]
  __int128 v193; // [rsp+118h] [rbp-5A8h] BYREF
  __m128i si128; // [rsp+128h] [rbp-598h] BYREF
  int v195; // [rsp+138h] [rbp-588h]
  char v196; // [rsp+140h] [rbp-580h]
  __int64 v197; // [rsp+148h] [rbp-578h]
  int v198; // [rsp+150h] [rbp-570h]
  __int64 v199; // [rsp+158h] [rbp-568h]
  __int128 v200; // [rsp+160h] [rbp-560h]
  __int64 v201; // [rsp+170h] [rbp-550h]
  char v202; // [rsp+178h] [rbp-548h]
  _BYTE v203[8]; // [rsp+258h] [rbp-468h] BYREF
  _BYTE v204[32]; // [rsp+260h] [rbp-460h] BYREF
  char v205[1032]; // [rsp+280h] [rbp-440h] BYREF
  unsigned __int64 v206; // [rsp+688h] [rbp-38h]

  v206 = __readfsqword(0x28u);
  if ( (unsigned int)sub_1EB590((__int64)a1, a2, a3, a4, a5) == 2 && (v78 = a1[112]) != 0
    || (unsigned int)sub_1EB590((__int64)a1, a2, v13, v14, a5) == 3 && (v78 = a1[113]) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v78 + 688LL))(v78, a2) )
      return sub_3348E0((__int64)a1, (QT::QWidget **)a2, a5);
  }
  v15 = xmmword_8CC820;
  v162 = sub_1F09E0((__int64)a1, (__int64 *)&v176, &v177);
  if ( !v162 )
  {
    v177 = -1;
    v176 = (const char *)xmmword_8CC810;
  }
  v160 = sub_1EC200((__int64)a1);
  if ( v160 )
  {
    sub_5399B0(a2, unk_8CA580, 0, 1);
    sub_5399B0(a2, qword_8CA588, 0, 1);
    if ( (segtype(v176) & 0xFD) == 0 )
      sub_338120((QT::QObject **)a2, 0, 12, qword_8C9A90, (__int64)"Analyze selected area");
  }
  else
  {
    sub_5399B0(a2, unk_8C9B78, 0, 1);
  }
  v16 = *(QT::QWidget **)a2;
  v179[1] = nullptr;
  v179[0] = v16;
  sub_314AC0((__int64)qword_8CD748, v179);
  v161 = sub_330EE0((__int64)a1, 0, byte_5E7EC0, v17, a5);
  sub_5392E0(a2, 0, 1);
  v159 = v160;
  if ( v161 != 19 )
  {
    v20 = sub_192350(a2, 0, v18, v19);
    v193 = 0;
    v170 = v20;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
    a5 = 0.0;
    LODWORD(v189) = 0;
    *((_QWORD *)&v189 + 1) = 0;
    v190 = -1;
    LODWORD(v191) = -1;
    v192 = 0;
    v195 = -1;
    v196 = 0;
    v197 = -1;
    v198 = -2;
    v199 = -1;
    v201 = 0xFFFFFFFFLL;
    v202 = 0;
    v200 = 0;
    sub_1ED900((__int64)a1, &v189, 2, v21, 0.0);
    v22 = v189;
    v159 = is_mapped(v170) | (v22 == 5);
    if ( v159 )
    {
      sub_5399B0(a2, unk_8C9E90, 0, 1);
      sub_5399B0(a2, unk_8C9E98, 0, 1);
      sub_5399B0(a2, unk_8CA1A0, 0, 1);
    }
    else
    {
      v159 = v160;
    }
    v23 = &byte_4;
    if ( (get_flags_ex(v170, 4) & 0x1000) != 0 )
    {
      v23 = (const char *)unk_8C9F08;
      sub_5399B0(a2, unk_8C9F08, 0, 1);
      v159 = 1;
    }
    if ( v198 >= -1 && v199 )
    {
      *(_QWORD *)&v200 = 0;
      a5 = qfree(v199, v23);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    if ( v192 )
    {
      *(_QWORD *)&v193 = 0;
      a5 = qfree(v192, v23);
    }
  }
  if ( v15 == -1 )
  {
    sub_5399B0(a2, unk_8C9DB8, 0, 1);
    sub_5399B0(a2, unk_8C9938, 0, 1);
    sub_3348E0((__int64)a1, (QT::QWidget **)a2, a5);
    return v206 - __readfsqword(0x28u);
  }
  if ( (BYTE9(xmmword_8CC820) & 0x10) != 0 )
    sub_5399B0(a2, unk_8C9EF8, 0, 1);
  if ( get_first_fcref_from(xmmword_8CC810, a5) != -1 || get_first_dref_from(xmmword_8CC810) != -1 )
    sub_5399B0(a2, unk_8C9F00, 0, 1);
  p_ptr = 0;
  sub_5392E0(a2, 0, 1);
  if ( v161 == 19 )
  {
    v98 = 1024;
    sub_5399B0(a2, unk_8C9EB8, 0, 1);
    sub_5399B0(a2, unk_8C9F28, 0, 1);
    v99 = (void *)QT::QCursor::pos((QT::QCursor *)a2);
    v100 = *(QT::QWidget **)(a2 + 8);
    ptr = v99;
    v101 = sub_1C8070(v100, (__int64)&ptr);
    p_ptr = *(_QWORD *)(a2 + 8);
    a5 = 0.0;
    v164 = v101;
    if ( v101 <= 1024 )
      v98 = v101;
    v183 = 0;
    ptr = nullptr;
    v168 = v98;
    v175 = (__int64 *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, (const QT::QObject *)p_ptr);
    if ( !v175 )
    {
      if ( !under_debugger )
      {
        v148 = (struct _Unwind_Exception *)interr(40685, p_ptr, v102, v103, 0.0);
        if ( v180 )
        {
          *(_QWORD *)&v181 = 0;
          qfree(v180, (const char *)p_ptr);
        }
        _Unwind_Resume(v148);
      }
      BUG();
    }
    v104 = (unsigned int)v164;
    v105 = 0;
    if ( v164 > 0 )
    {
      while ( 1 )
      {
        p_ptr = (__int64)&ptr;
        if ( !(unsigned __int8)sub_1F97A0(v175, (__int64)&ptr, (unsigned int)v105, v103) )
          break;
        if ( v98 <= ++v105 )
        {
          v165 = (QT::QAction *)unk_8C9F30;
          if ( v105 > 5 )
            goto LABEL_196;
LABEL_163:
          p_ptr = (__int64)&ptr;
          if ( (unsigned __int8)sub_1F97A0(v175, (__int64)&ptr, 0, v103) )
          {
            sub_5392E0(a2, 0, 1);
            v106 = 0;
            LODWORD(v103) = 0;
            do
            {
              v108 = &s1;
              if ( (_QWORD)v183 )
                v108 = (const char *)ptr;
              p_ptr = 0;
              sub_338120((QT::QObject **)a2, 0, (unsigned int)(v103 + 400079), v165, (__int64)"Jump to [%s]", v108);
              if ( ++v106 == v105 )
                break;
              p_ptr = (__int64)&ptr;
              v107 = sub_1F97A0(v175, (__int64)&ptr, v106, v103);
              v103 = v106;
            }
            while ( v107 );
          }
          goto LABEL_169;
        }
      }
      v165 = (QT::QAction *)unk_8C9F30;
      if ( v105 <= 5 )
      {
        if ( !v105 )
          goto LABEL_169;
        goto LABEL_163;
      }
LABEL_196:
      sub_5392E0(a2, 0, 1);
      sub_336830((QT::QObject **)a2, v165, "Jump to...", nullptr, 0.0);
      v115 = 0;
      while ( 1 )
      {
        p_ptr = (__int64)&ptr;
        if ( !(unsigned __int8)sub_1F97A0(v175, (__int64)&ptr, (unsigned int)v115, v103) )
          break;
        v116 = &s1;
        if ( (_QWORD)v183 )
          v116 = (const char *)ptr;
        p_ptr = 1;
        sub_338120((QT::QObject **)a2, 1, (unsigned int)(v115 + 400079), v165, (__int64)"%s", v116);
        if ( ++v115 >= v168 - 1 )
          break;
        if ( v115 == v105 )
          goto LABEL_169;
      }
      if ( v115 < v105 )
      {
        v133 = (QT::QAction *)unk_8C9F30;
        v134 = sub_337FF0(*(QT::QWidget **)a2);
        p_ptr = (__int64)v133;
        sub_336830((QT::QObject **)a2, v133, "More...", v134, 0.0);
      }
    }
LABEL_169:
    if ( ptr )
    {
      *(_QWORD *)&v183 = 0;
      a5 = qfree(ptr, (const char *)p_ptr, v104, v103, 0.0);
    }
  }
  else if ( v161 > 0x13u )
  {
    if ( v161 == 21 )
    {
      sub_5399B0(a2, unk_8C9C30, 0, 1);
      p_ptr = unk_8C9C38;
      sub_5399B0(a2, unk_8C9C38, 0, 1);
    }
  }
  else if ( (unsigned __int8)(v161 - 2) <= 2u )
  {
    sub_5399B0(a2, unk_8C9C20, 0, 1);
    p_ptr = unk_8C9C28;
    sub_5399B0(a2, unk_8C9C28, 0, 1);
  }
  v163 = WORD4(xmmword_8CC820) & 0x600;
  if ( (WORD4(xmmword_8CC820) & 0x600) != 0 )
    goto LABEL_73;
  if ( v162 )
  {
    v25 = v177;
  }
  else
  {
    p_ptr = 15;
    v25 = calc_max_item_end(v176, 15);
  }
  v166 = v25 - (_QWORD)v176;
  v26 = segtype(v176);
  if ( (unsigned __int8)v26 > 0xCu || (v28 = -4617, _bittest64(&v28, v26)) )
  {
    v190 = -1;
    p_ptr = (__int64)v176;
    v80 = &v193;
    v189 = -1;
    a5 = 0.0;
    v191 = 0;
    v192 = 0;
    do
    {
      *(_WORD *)v80 = 0;
      v80 = (__int128 *)((char *)v80 + 40);
      *((_WORD *)v80 - 19) = 0;
      *((_WORD *)v80 - 18) = 0;
      *((_DWORD *)v80 - 2) = 0;
      *((_WORD *)v80 - 17) = 0;
      *(v80 - 2) = 0;
      *((_QWORD *)v80 - 2) = 0;
    }
    while ( v203 != (_BYTE *)v80 );
    if ( (int)decode_insn(&v189, p_ptr, v203, v27, 0, 0, 0.0) > 0 )
    {
      p_ptr = (__int64)qword_8C9A90;
      sub_5399B0(a2, qword_8C9A90, 0, 1);
    }
  }
  v29 = (__int64)v176;
  if ( v162 )
  {
    if ( v177 == -1 )
    {
      p_ptr = (unsigned int)getinf(52);
      max_strlit_length = get_max_strlit_length(v29, p_ptr, 4);
      if ( max_strlit_length <= 3 )
      {
LABEL_34:
        if ( (~WORD4(xmmword_8CC820) & 0x600) != 0 )
        {
          p_ptr = unk_8C9E08;
          sub_5399B0(a2, unk_8C9E08, 0, 1);
        }
        goto LABEL_36;
      }
    }
    else
    {
      max_strlit_length = v177 - (_DWORD)v176;
      if ( (int)v177 - (int)v176 <= 3 )
        goto LABEL_34;
    }
    goto LABEL_174;
  }
  v172 = (__int64 *)a1[26];
  v41 = (_QWORD *)v172[1];
  v42 = getinf(55);
  v45 = v42;
  if ( v166 )
  {
    if ( (v42 & 1) != 0 && v41[10] )
    {
      wide_byte = get_wide_byte(v29, p_ptr, v43);
      btoa64(v205, 1024, wide_byte, 0, a5);
      sub_338120((QT::QObject **)a2, 0, 2, qword_8C9A98, (__int64)"Byte %s", v205);
    }
    if ( v166 != 1 )
    {
      if ( (v45 & 2) != 0 && v41[11] )
      {
        wide_word = get_wide_word(v29, a5);
        btoa64(v205, 1024, wide_word, 0, a5);
        sub_338120((QT::QObject **)a2, 0, 3, qword_8C9A98, (__int64)"Word %s", v205);
      }
      if ( v166 > 3 )
      {
        if ( (v45 & 4) != 0 && v41[12] )
        {
          wide_dword = get_wide_dword(v29, a5);
          btoa64(v205, 1024, wide_dword, 0, a5);
          sub_338120((QT::QObject **)a2, 0, 4, qword_8C9A98, (__int64)"Double word %s", v205);
        }
        v119 = v45 & 8;
        if ( v166 <= 7 )
        {
          if ( (v45 & 8) == 0
            || !v41[15]
            || get_bytes(v204, 4, v29, 0, 0) != 4
            || !(unsigned __int8)print_fpval(v205, 1024, v204, 4) )
          {
            goto LABEL_61;
          }
        }
        else
        {
          if ( (v45 & 0x10) != 0 && v41[13] )
          {
            qword = get_qword(v29);
            btoa64(v205, 1024, qword, 0, a5);
            sub_338120((QT::QObject **)a2, 0, 5, qword_8C9A98, (__int64)"Quadro word %s", v205);
            v119 = v45 & 8;
          }
          if ( !v119
            || !v41[15]
            || get_bytes(v204, 4, v29, 0, 0) != 4
            || !(unsigned __int8)print_fpval(v205, 1024, v204, 4) )
          {
LABEL_218:
            if ( (v45 & 0x20) != 0
              && v41[16]
              && get_bytes(v204, 8, v29, 0, 0) == 8
              && (unsigned __int8)print_fpval(v205, 1024, v204, 8) )
            {
              sub_338120((QT::QObject **)a2, 0, 7, qword_8C9A98, (__int64)"Double %s", v205);
            }
            goto LABEL_61;
          }
        }
        sub_338120((QT::QObject **)a2, 0, 6, qword_8C9A98, (__int64)"Float %s", v205);
        if ( v166 <= 7 )
          goto LABEL_61;
        goto LABEL_218;
      }
    }
  }
LABEL_61:
  v173 = *v172;
  v46 = *(_QWORD *)(v173 + 120);
  if ( v166 >= v46 && (v45 & 0x40) != 0 )
  {
    if ( v41[17] )
    {
      bytes = get_bytes(v204, v46, v29, 0, 0);
      v44 = v173;
      if ( bytes == *(_QWORD *)(v173 + 120) )
      {
        v46 = 1024;
        if ( (unsigned __int8)print_fpval(v205, 1024, v204, (unsigned int)bytes) )
        {
          v46 = 0;
          sub_338120((QT::QObject **)a2, 0, 8, qword_8C9A98, (__int64)"Long double %s", v205);
        }
      }
    }
  }
  v29 = (__int64)v176;
  if ( v177 == -1 )
  {
    p_ptr = (unsigned int)getinf(52);
    max_strlit_length = get_max_strlit_length(v29, p_ptr, 4);
    if ( max_strlit_length <= 3 )
    {
LABEL_36:
      v29 = (__int64)v176;
      v157 = v177;
      ordinal_limit = get_ordinal_limit(0, p_ptr, v28, v27);
      v158 = ordinal_limit - 1;
      if ( (unsigned int)(ordinal_limit - 1) > 0xFFFFFFFD )
        goto LABEL_66;
      v31 = (void *)QT::QCursor::pos(nullptr);
      v32 = *(QT::QWidget **)(a2 + 8);
      ptr = v31;
      v151 = sub_1C8070(v32, (__int64)&ptr);
      v33 = v157;
      if ( v157 == -1 )
        v33 = calc_max_item_end(v29, 4);
      goto LABEL_39;
    }
    goto LABEL_174;
  }
  max_strlit_length = v177 - (_DWORD)v176;
  if ( (int)v177 - (int)v176 > 3 )
  {
LABEL_174:
    v180 = nullptr;
    v178 = 39;
    v181 = 0;
    v109 = getinf(52);
    get_strlit_contents(&v180, v29, max_strlit_length, v109, &v178, 0);
    a5 = 0.0;
    v110 = 0;
    v111 = &s1;
    ptr = nullptr;
    v183 = 0;
    if ( (_QWORD)v181 )
    {
      v111 = v180;
      v110 = (unsigned int)(v181 - 1);
    }
    qstr2user(&ptr, v111, v110);
    v112 = (const char *)&unk_5C2F25;
    if ( !v178 )
      v112 = "...";
    v113 = &s1;
    if ( (_QWORD)v183 )
      v113 = (const char *)ptr;
    sub_169A50((__int64 *)&v180, (__int64)"\"%s\"%s", v113, v112);
    v114 = &s1;
    if ( (_QWORD)v181 )
      v114 = v180;
    p_ptr = (__int64)qword_8C9AA8;
    sub_336830((QT::QObject **)a2, qword_8C9AA8, v114, nullptr, 0.0);
    if ( ptr )
    {
      *(_QWORD *)&v183 = 0;
      a5 = qfree(ptr, (const char *)p_ptr);
    }
    if ( v180 )
    {
      *(_QWORD *)&v181 = 0;
      a5 = qfree(v180, (const char *)p_ptr, a5);
    }
    if ( !v162 )
      goto LABEL_36;
    goto LABEL_34;
  }
  v157 = v177;
  ordinal_limit = get_ordinal_limit(0, v46, v177, v44);
  v158 = ordinal_limit - 1;
  if ( (unsigned int)(ordinal_limit - 1) > 0xFFFFFFFD )
    goto LABEL_66;
  v121 = (void *)QT::QCursor::pos(nullptr);
  v122 = *(QT::QWidget **)(a2 + 8);
  ptr = v121;
  v123 = sub_1C8070(v122, (__int64)&ptr);
  v33 = v157;
  v151 = v123;
LABEL_39:
  v155 = v33 - v29;
  if ( ordinal_limit == 1 )
    goto LABEL_66;
  v153 = 0;
  v34 = 1;
  while ( (unsigned int)get_alias_target(0, v34) != v34 )
  {
LABEL_41:
    if ( ++v34 == ordinal_limit )
      goto LABEL_66;
  }
  v180 = nullptr;
  WORD4(v183) = 257;
  *(_QWORD *)&v183 = v34;
  ptr = (void *)get_idati(0);
  if ( !(unsigned __int8)create_tinfo(&v180, 61, 189, &ptr)
    || (get_tinfo_property(v180, 2) & 0x2F) != 0xD
    || v157 == -1 && get_tinfo_property(v180, 286)
    || (tinfo_size = get_tinfo_size(0, v180, 0), tinfo_size == -1)
    || (v152 = tinfo_size, v155 < tinfo_size)
    || (get_tinfo_pdata(&ptr, v180, 3), (v150 = is_type_choosable(ptr, v34)) == 0) )
  {
    clear_tinfo_t(&v180);
    goto LABEL_41;
  }
  v36 = v152;
  if ( !v153 )
  {
    sub_336830((QT::QObject **)a2, qword_8C9AA0, "Structure", nullptr, a5);
    v36 = v152;
  }
  a5 = 0.0;
  v37 = v36;
  ptr = nullptr;
  v183 = 0;
  v38 = &s1;
  if ( ((unsigned __int16)v180 & 0x100) != 0 )
  {
    v154 = v36;
    get_tinfo_pdata(&ptr, v180, 0);
    v37 = v154;
    if ( (_QWORD)v183 )
      v38 = (const char *)ptr;
    else
      v38 = &s1;
  }
  v39 = (_BYTE *)(&dword_0 + 1);
  sub_338120((QT::QObject **)a2, 1, v34 + 100078, qword_8C9AA0, (__int64)"%s (sizeof %d)", v38, v37);
  v40 = v149;
  if ( ++v163 < (unsigned __int64)(v151 - 1) )
  {
    if ( ptr )
    {
      *(_QWORD *)&v183 = 0;
      a5 = qfree(ptr, (_BYTE *)&dword_0 + 1);
    }
    clear_tinfo_t(&v180);
    v153 = v150;
    goto LABEL_41;
  }
  if ( v34 < v158 )
  {
    v146 = qword_8C9AA0;
    v147 = sub_337FF0(*(QT::QWidget **)a2);
    v39 = (const char *)v146;
    sub_336830((QT::QObject **)a2, v146, "More...", v147, 0.0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v183 = 0;
    a5 = qfree(ptr, v39, v40);
  }
  clear_tinfo_t(&v180);
LABEL_66:
  if ( (unsigned __int8)sub_32E680((__int64)v176, (__int64)&v176[v166], (int *)&v178, (int *)&v180) )
  {
    v47 = (QT::QMenu *)operator new(0x28u);
    sub_2DE620(v47, *(QT::QWidget **)a2);
    v48 = (QT::QAction *)QT::QMenu::menuAction(v47);
    a5 = QT::QString::fromUtf8(&ptr, 9, "Alignment");
    QT::QAction::setText(v48, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v49 = *(QT::QWidget **)a2;
    v50 = (QT::QAction *)QT::QMenu::menuAction(v47);
    QT::QWidget::addAction(v49, v50);
    if ( (int)v180 >= (int)v178 )
    {
      v51 = v178;
      do
      {
        v52 = v51 + 1;
        sub_338120(
          (QT::QObject **)a2,
          1,
          (unsigned int)(v51 + 15),
          qword_8C9A98,
          (__int64)"%u (0x%X) bytes",
          1 << v51,
          1 << v51);
        LODWORD(v178) = v52;
        v51 = v52;
      }
      while ( v52 <= (int)v180 );
    }
  }
LABEL_73:
  if ( sub_1EC200((__int64)a1) )
  {
    if ( v177 == -1 )
    {
      v167 = (unsigned __int64)(v176 + 1);
    }
    else
    {
      v55 = (__int64)(v176 + 1024);
      if ( (unsigned __int64)(v177 - (_QWORD)v176) <= 0x400 )
        v55 = v177;
      v167 = v55;
    }
    v56 = &v193;
    v190 = -1;
    v191 = 0;
    v192 = 0;
    v189 = -1;
    a5 = 0.0;
    do
    {
      *(_WORD *)v56 = 0;
      v56 = (__int128 *)((char *)v56 + 40);
      *((_WORD *)v56 - 19) = 0;
      *((_WORD *)v56 - 18) = 0;
      *((_DWORD *)v56 - 2) = 0;
      *((_WORD *)v56 - 17) = 0;
      *(v56 - 2) = 0;
      *((_QWORD *)v56 - 2) = 0;
    }
    while ( v203 != (_BYTE *)v56 );
    for ( i = v176; (unsigned __int64)i < v167; i = (const char *)next_head(i, v167) )
    {
      if ( (~((unsigned __int16)get_flags_ex(i, 4) >> 8) & 6) == 0 )
      {
        v62 = 0;
        decode_insn(&v189, i, v58, v59, v60, v61, a5);
        v174 = &v193;
        while ( *((_BYTE *)v174 + 1) )
        {
          if ( sub_330C00((__int64)v174, 0) )
          {
            qword_8CEC20 = get_dtype_size(*((unsigned __int8 *)v174 + 5));
            if ( (unsigned __int8)sub_331AD0(&qword_8CEC00, (__int64)i, v62, (__int64)&v189, 0) )
            {
              aflags = get_aflags(i);
              a5 = 0.0;
              ptr = (void *)-1LL;
              v183 = (unsigned __int64)qword_8CEC00;
              v184 = aflags >> 7;
              v185 = 0;
              v187 = 0;
              v186 = 0;
              v188 = 0;
              sub_1AD2D0(
                (__int64 *)&ptr,
                (__int64)i,
                qword_8CEC00,
                (__int64)&qword_8CEC00,
                0.0,
                a6,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64,
                v64,
                v65,
                a11,
                a12);
              if ( (_QWORD)v188 )
              {
                v135 = (const char *)qword_8C9BA0;
                sub_336830((QT::QObject **)a2, qword_8C9BA0, "Structure offset", nullptr, 0.0);
                v136 = v187;
                if ( v187 )
                {
                  if ( (_QWORD)v188 )
                  {
                    v137 = 0;
                    v138 = v188;
                    do
                    {
                      v139 = (__int64 *)(v136 + 24 * v137);
                      v140 = *v139;
                      if ( *v139 )
                      {
                        v139[1] = 0;
                        qfree(v140, v135);
                        v136 = v187;
                      }
                      ++v137;
                    }
                    while ( v138 != v137 );
                  }
                  *(_QWORD *)&v188 = 0;
                  a5 = qfree(v136, v135);
                }
                v141 = v185;
                if ( v185 )
                {
                  if ( (_QWORD)v186 )
                  {
                    v142 = 0;
                    v143 = v186;
                    do
                    {
                      v144 = (__int64 *)(v141 + 24 * v142);
                      v145 = *v144;
                      if ( *v144 )
                      {
                        v144[1] = 0;
                        a5 = qfree(v145, v135, a5);
                        v141 = v185;
                      }
                      ++v142;
                    }
                    while ( v143 != v142 );
                  }
                  *(_QWORD *)&v186 = 0;
                  a5 = qfree(v141, v135, a5);
                }
                goto LABEL_101;
              }
              if ( v187 )
                a5 = qfree(v187, i);
              v66 = v185;
              if ( v185 )
              {
                v67 = (const char *)v186;
                if ( (_QWORD)v186 )
                {
                  v156 = i;
                  v68 = nullptr;
                  do
                  {
                    v69 = (__int64 *)(v66 + 24LL * (_QWORD)v68);
                    v70 = *v69;
                    if ( *v69 )
                    {
                      v69[1] = 0;
                      qfree(v70, v67);
                      v66 = v185;
                    }
                    ++v68;
                  }
                  while ( v67 != v68 );
                  i = v156;
                }
                *(_QWORD *)&v186 = 0;
                a5 = qfree(v66, v67);
              }
            }
          }
          ++v62;
          v174 = (__int128 *)((char *)v174 + 40);
          if ( v62 == 8 )
            break;
        }
      }
    }
  }
  else if ( (~WORD4(xmmword_8CC820) & 0x600) == 0 )
  {
    if ( (unsigned __int8)(v161 - 41) <= 7u )
      sub_3383C0(
        (QT::QCursor *)a2,
        (__int64)a1,
        xmmword_8CC810,
        v161 - 41,
        a5,
        a6,
        *(double *)a7.m128_u64,
        *(double *)a8.m128_u64,
        v53,
        v54,
        a11,
        a12);
    v81 = xmmword_8CC810;
    func = get_func(xmmword_8CC810);
    if ( func )
    {
      sub_5399B0(a2, unk_8C9E20, 0, 1);
      if ( v81 == *(_QWORD *)func )
        sub_5399B0(a2, unk_8C9E60, 0, 1);
      v83 = 4;
      if ( (unsigned __int8)getinf_flag(48, 4) )
      {
        v83 = unk_8C9E50;
        sub_5399B0(a2, unk_8C9E50, 0, 1);
      }
      v86 = qword_8CD7E8;
      if ( (unsigned int)sub_1EB590(qword_8CD7E8, v83, v84, v85, a5) == 2 && *(_QWORD *)(v86 + 896) )
      {
        v126 = sub_534430("Hide");
        if ( v126 )
        {
          v83 = 5;
          if ( (unsigned __int8)sub_533460(v126, 5, (unsigned int)&ptr, v127, v128, v129) )
          {
            if ( (int)ptr <= 3 )
            {
              v83 = unk_8CA140;
              sub_5399B0(a2, unk_8CA140, 0, 1);
            }
          }
        }
        v130 = sub_534430("UnHide");
        if ( v130 )
        {
          v83 = 5;
          if ( (unsigned __int8)sub_533460(v130, 5, (unsigned int)&ptr, v88, v131, v132) )
          {
            if ( (int)ptr <= 3 )
            {
              v83 = unk_8CA148;
              sub_5399B0(a2, unk_8CA148, 0, 1);
            }
          }
        }
      }
      else
      {
        v83 = unk_8CA148;
        if ( (*(_BYTE *)(func + 16) & 0x40) == 0 )
          v83 = unk_8CA140;
        sub_5399B0(a2, v83, 0, 1);
      }
      v89 = qword_8CD7E8;
      if ( (unsigned int)sub_1EB590(qword_8CD7E8, v83, v87, v88, a5) == 3 && *(_QWORD *)(v89 + 904) )
      {
        sub_5399B0(a2, unk_8CA458, 0, 1);
        sub_5399B0(a2, unk_8CA4D8, 0, 1);
        sub_5399B0(a2, unk_8CA470, 0, 1);
      }
      else
      {
        v92 = qword_8CD7E8;
        if ( (unsigned int)sub_1EB590(qword_8CD7E8, v83, v90, v91, a5) == 2 && *(_QWORD *)(v92 + 896) )
          v93 = unk_8CA458;
        else
          v93 = unk_8CA4D8;
        sub_5399B0(a2, v93, 0, 1);
        sub_5399B0(a2, unk_8CA468, 0, 1);
      }
    }
    else
    {
      sub_5399B0(a2, unk_8C9E18, 0, 1);
    }
  }
LABEL_101:
  v71 = unk_8C9B70;
  sub_5399B0(a2, unk_8C9B70, 0, 1);
  v75 = DWORD2(xmmword_8CC820);
  v76 = WORD4(xmmword_8CC820) & 0x600;
  if ( v76 == 1024 )
  {
    if ( !v161 )
    {
      v94 = *(__int16 *)(sub_1EA6A0((__int64)(a1 + 48), v71, *((__int64 *)&xmmword_8CC820 + 1), v72, a5) + 28);
      last_pfxlen = get_last_pfxlen(a1 + 48, v71);
      if ( last_pfxlen + (unsigned __int8)getinf(40) + 2 < v94 )
        sub_3383C0(
          (QT::QCursor *)a2,
          (__int64)a1,
          (__int64)v176,
          0,
          a5,
          a6,
          *(double *)a7.m128_u64,
          *(double *)a8.m128_u64,
          v96,
          v97,
          a11,
          a12);
      v75 = DWORD2(xmmword_8CC820);
      if ( (WORD4(xmmword_8CC820) & 0x600) != 0x400 )
        goto LABEL_119;
    }
    if ( (v75 & 0xF0000000) != 0xB0000000LL )
    {
LABEL_119:
      sub_5399B0(a2, unk_8C9AF8, 0, 1);
      sub_5399B0(a2, qword_8C9A98, 0, 1);
      v79 = DWORD2(xmmword_8CC820);
      v76 = WORD4(xmmword_8CC820) & 0x600;
      if ( v76 != 0 && v76 != 1536 && v162 )
        goto LABEL_194;
      goto LABEL_121;
    }
    v79 = DWORD2(xmmword_8CC820);
    if ( (WORD4(xmmword_8CC820) & 0x600) != 1536 && (WORD4(xmmword_8CC820) & 0x600) != 0 && v162 )
      goto LABEL_194;
  }
  else
  {
    if ( v76 == 0 || v76 == 1536 || !v162 )
    {
LABEL_104:
      if ( !v76 )
        goto LABEL_105;
      goto LABEL_128;
    }
LABEL_194:
    sub_5399B0(a2, unk_8C9E08, 0, 1);
    v79 = DWORD2(xmmword_8CC820);
    v76 = WORD4(xmmword_8CC820) & 0x600;
LABEL_121:
    if ( v76 != 1024 )
      goto LABEL_104;
  }
  if ( (v79 & 0xF0000000) == 0x60000000 )
  {
    sub_5399B0(a2, unk_8C9E10, 0, 1);
    v76 = WORD4(xmmword_8CC820) & 0x600;
    goto LABEL_104;
  }
LABEL_128:
  sub_5399B0(a2, unk_8C9B00, 0, 1);
LABEL_105:
  sub_3347B0(a2, a5, a6, a7, a8, v73, v74, a11, a12);
  if ( (~WORD4(xmmword_8CC820) & 0x600) == 0 )
  {
    sub_5399B0(a2, unk_8C9DB0, 0, 1);
    sub_5399B0(a2, unk_8C9DA0, 0, 1);
    sub_5399B0(a2, unk_8C9DA8, 0, 1);
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(sub_30ED90((__int64)qword_8CD748) + 48) + 32LL) + 9LL) < 0 )
  {
    sub_5392E0(a2, 0, 1);
    if ( v159 )
      sub_5399B0(a2, unk_8CA5C8, 0, 1);
    if ( v160 )
      sub_5399B0(a2, unk_8CA5D0, 0, 1);
  }
  sub_336930((QT::QObject **)a2, a5);
  sub_3348E0((__int64)a1, (QT::QWidget **)a2, a5);
  return v206 - __readfsqword(0x28u);
}
