__int64 __fastcall sub_3B1DA0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  char **v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  char *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  char *v14; // rax
  char *v15; // rdx
  unsigned int v16; // r12d
  size_t v17; // rbp
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  size_t v21; // rdi
  size_t v22; // rsi
  int v23; // ecx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  unsigned int v26; // r12d
  size_t v27; // rbp
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  _OWORD *v30; // rdx
  __int64 *v31; // rbp
  __int64 v32; // rbx
  unsigned int v33; // edx
  unsigned int v34; // eax
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // rsi
  unsigned int v39; // eax
  unsigned int v40; // r8d
  size_t v41; // rsi
  unsigned int v42; // ebp
  unsigned int *v43; // rax
  __int64 v44; // rsi
  int v45; // eax
  __int64 v46; // rdx
  size_t v47; // r12
  _QWORD *v48; // rdi
  __int16 v49; // ax
  __int64 v50; // rbp
  char *v52; // rsi
  _QWORD *v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rbx
  __int64 v56; // rax
  unsigned int v57; // r14d
  __int64 i; // rax
  _QWORD *v59; // r13
  __int64 v60; // rax
  unsigned int j; // ebp
  __int64 v62; // rax
  _QWORD *v63; // rax
  int v64; // eax
  _DWORD *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rbp
  int v68; // edx
  __int64 v69; // rax
  size_t v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 *v77; // rbx
  __int64 *v78; // r12
  __int64 v79; // rsi
  __int64 *v80; // rax
  _QWORD *v81; // rax
  int v82; // eax
  int v83; // edx
  size_t v84; // r14
  size_t v85; // r13
  __int16 v86; // ax
  __int16 v87; // dx
  __int64 v88; // rdx
  char v89; // dl
  __int16 v90; // ax
  size_t v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // r12
  __int64 v94; // rbx
  __int64 v95; // rax
  unsigned int v96; // r14d
  __int64 k; // rax
  _QWORD *v98; // r13
  __int64 v99; // rax
  unsigned int m; // ebp
  __int64 v101; // rax
  __int64 v102; // rax
  char v103; // al
  size_t v104; // r9
  __int64 v105; // rax
  __int64 *v106; // [rsp+0h] [rbp-1B8h]
  __int64 v107; // [rsp+0h] [rbp-1B8h]
  __int64 v108; // [rsp+0h] [rbp-1B8h]
  __int64 *v109; // [rsp+8h] [rbp-1B0h]
  __int64 v110; // [rsp+8h] [rbp-1B0h]
  __int64 v111; // [rsp+8h] [rbp-1B0h]
  _QWORD *v112; // [rsp+10h] [rbp-1A8h]
  size_t v113; // [rsp+20h] [rbp-198h]
  size_t v114; // [rsp+20h] [rbp-198h]
  unsigned int v115; // [rsp+28h] [rbp-190h]
  char *v116; // [rsp+30h] [rbp-188h]
  unsigned int v117; // [rsp+48h] [rbp-170h] BYREF
  unsigned int v118; // [rsp+4Ch] [rbp-16Ch] BYREF
  __int64 v119[2]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v120[32]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v121[312]; // [rsp+80h] [rbp-138h] BYREF

  v6 = *(_QWORD **)(a1 + 48);
  sub_64C320(*v6);
  v7 = *v6;
  sub_654110(*v6, a2);
  v116 = (char *)(v7 + 2360);
  sub_632080(v6[2], a2, v7 + 2360);
  v8 = *v6;
  sub_63D370(v121, *v6);
  if ( (unsigned int)sub_180B130(v121) > 9 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v9 = sub_180B150(v121, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v9, "(ddnf.preprocess)\n");
    }
    else
    {
      sub_180B150(v121, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v112 = v6 + 7;
  sub_15D08E0(v6 + 7);
  v10 = v6[6];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  if ( *((_DWORD *)v6 + 59) || *((_DWORD *)v6 + 60) )
  {
    v11 = (char *)v6[28];
    v12 = 0;
    v13 = *((unsigned int *)v6 + 58);
    v14 = v11;
    v15 = &v11[16 * v13];
    if ( v11 == v15 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)v14 )
      {
        *(_QWORD *)v14 = 0;
        v14 += 16;
        if ( v15 == v14 )
          goto LABEL_13;
      }
      v14 += 16;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_13:
    if ( (unsigned int)v13 <= 0x10 || 3 * (int)v13 >= (unsigned int)(4 * v12) )
      goto LABEL_21;
    if ( v11 )
    {
      sub_186B220(v11);
      v16 = *((_DWORD *)v6 + 58);
      v6[28] = 0;
      v16 >>= 1;
      *((_DWORD *)v6 + 58) = v16;
      v17 = v16;
      v18 = (_OWORD *)sub_186B270(v17 * 16);
      if ( !v16 )
      {
LABEL_20:
        v6[28] = v18;
LABEL_21:
        *(_QWORD *)((char *)v6 + 236) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      v6[28] = 0;
      v91 = (unsigned int)v13 >> 1;
      *((_DWORD *)v6 + 58) = v91;
      v17 = v91;
      v18 = (_OWORD *)sub_186B270(16 * v91);
    }
    v19 = &v18[v17];
    v20 = v18;
    if ( ((v17 * 16) & 0x10) == 0 || (v20 = v18 + 1, *v18 = 0, v18 + 1 != v19) )
    {
      do
      {
        *v20 = 0;
        v20 += 2;
        *(v20 - 1) = 0;
      }
      while ( v20 != v19 );
    }
    goto LABEL_20;
  }
LABEL_22:
  v21 = *((unsigned int *)v6 + 53);
  if ( !(_DWORD)v21 )
  {
    v22 = *((unsigned int *)v6 + 54);
    if ( !(_DWORD)v22 )
      goto LABEL_38;
  }
  v21 = v6[25];
  v23 = 0;
  v22 = *((unsigned int *)v6 + 52);
  v24 = (_QWORD *)v21;
  v25 = (_QWORD *)(v21 + 16 * v22);
  if ( (_QWORD *)v21 != v25 )
  {
    do
    {
      while ( *v24 )
      {
        *v24 = 0;
        v24 += 2;
        if ( v25 == v24 )
          goto LABEL_29;
      }
      v24 += 2;
      ++v23;
    }
    while ( v25 != v24 );
LABEL_29:
    if ( (unsigned int)v22 > 0x10 && 3 * (int)v22 < (unsigned int)(4 * v23) )
    {
      if ( v21 )
      {
        sub_186B220((void *)v21);
        v26 = *((_DWORD *)v6 + 52);
        v6[25] = 0;
        v26 >>= 1;
        *((_DWORD *)v6 + 52) = v26;
        v27 = 16LL * v26;
        v21 = v27;
        v28 = (_OWORD *)sub_186B270(v27);
        if ( !v26 )
        {
LABEL_36:
          v6[25] = v28;
          goto LABEL_37;
        }
      }
      else
      {
        v6[25] = 0;
        v92 = (unsigned int)v22 >> 1;
        *((_DWORD *)v6 + 52) = v92;
        v22 = 16 * v92;
        v21 = v22;
        v27 = v22;
        v28 = (_OWORD *)sub_186B270(v22);
      }
      v29 = (_OWORD *)((char *)v28 + v27);
      v30 = v28;
      if ( (v27 & 0x10) == 0 || (v30 = v28 + 1, *v28 = 0, v29 != v28 + 1) )
      {
        do
        {
          *v30 = 0;
          v30 += 2;
          *(v30 - 1) = 0;
        }
        while ( v29 != v30 );
      }
      goto LABEL_36;
    }
  }
LABEL_37:
  *(_QWORD *)((char *)v6 + 212) = 0;
LABEL_38:
  v31 = *(__int64 **)(v7 + 2384);
  if ( !v31 )
    goto LABEL_62;
  v109 = &v31[*((unsigned int *)v31 - 1)];
  if ( v31 == v109 )
    goto LABEL_62;
  v106 = *(__int64 **)(v7 + 2384);
  v21 = v6[6];
  do
  {
    v32 = *v106;
    v33 = *(_DWORD *)(*v106 + 68);
    v34 = *(_DWORD *)(*v106 + 56);
    if ( v33 >= v34 )
      goto LABEL_51;
    v35 = v32 + 8LL * v33;
    v36 = v32 + 8 * (v33 + (unsigned __int64)(v34 - 1 - v33)) + 8;
    v37 = *(_QWORD *)(v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v21 )
    {
      v63 = (_QWORD *)sub_186B270(0x18u);
      v21 = (size_t)(v63 + 1);
      v22 = v21;
      *v63 = 2;
      v64 = 1;
      v6[6] = v21;
      goto LABEL_45;
    }
    while ( 1 )
    {
      v39 = *(_DWORD *)(v21 - 4);
      if ( v39 != *(_DWORD *)(v21 - 8) )
      {
        v38 = v39;
        v64 = v39 + 1;
        v22 = v21 + 8 * v38;
LABEL_45:
        v35 += 8;
        *(_QWORD *)v22 = v37;
        *(_DWORD *)(v21 - 4) = v64;
        if ( v36 == v35 )
          break;
        goto LABEL_46;
      }
      v40 = (3 * v39 + 1) >> 1;
      v41 = 8 * v40 + 8;
      v42 = v40;
      if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v119, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v119);
        sub_233E40((__int64)v119);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v43 = (unsigned int *)sub_186B300((void *)(v21 - 8), v41);
      v44 = v43[1];
      v21 = (size_t)(v43 + 2);
      v35 += 8;
      v6[6] = v43 + 2;
      *v43 = v42;
      LODWORD(v43) = v44;
      v22 = v21 + 8 * v44;
      *(_QWORD *)v22 = v37;
      *(_DWORD *)(v21 - 4) = (_DWORD)v43 + 1;
      if ( v36 == v35 )
        break;
LABEL_46:
      v37 = *(_QWORD *)(v35 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    }
LABEL_51:
    while ( v21 )
    {
      v45 = *(_DWORD *)(v21 - 4);
      if ( !v45 )
        break;
      v46 = (unsigned int)(v45 - 1);
      v47 = *(_QWORD *)(v21 + 8 * v46);
      *(_DWORD *)(v21 - 4) = v46;
      v22 = v47;
      if ( (unsigned __int8)sub_15D37A0(v112, v47) )
        goto LABEL_85;
      v48 = v6 + 7;
      v22 = v47;
      sub_15D0A90(v112, v47, 1);
      v49 = *(_WORD *)(v47 + 4);
      if ( v49 == 1 )
        goto LABEL_85;
      if ( v49 == 2 )
        goto LABEL_59;
      if ( v49 )
      {
LABEL_57:
        sub_180B130(v48);
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v50 = sub_180B150(v48, v22);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v119, v47, v6[1], 0, 0, 0);
          sub_160E8B0(v50, v119);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v120);
          sub_186A500(v120, "\n");
        }
        else
        {
          v67 = sub_180B150(v48, v22);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v119, v47, v6[1], 0, 0, 0);
          sub_160E8B0(v67, v119);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(v120);
        }
LABEL_59:
        sub_62AAE0(v32, *v6, &std::cout, 0);
        goto LABEL_60;
      }
      v65 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
      if ( !v65 )
      {
LABEL_84:
        if ( (*(_BYTE *)(v47 + 30) & 1) == 0 )
          goto LABEL_57;
        goto LABEL_85;
      }
      if ( *v65 )
        goto LABEL_178;
      v68 = v65[1];
      if ( v68 == 5 || v68 == 6 )
        goto LABEL_94;
      if ( v65[1] != 2 )
      {
LABEL_178:
        if ( *v65 )
          goto LABEL_84;
        goto LABEL_116;
      }
      v22 = *(_QWORD *)(v47 + 32);
      v48 = (_QWORD *)v6[1];
      if ( (unsigned __int8)sub_15D2CB0(v48, v22) )
      {
LABEL_94:
        v69 = *(unsigned int *)(v47 + 24);
        v21 = v6[6];
        if ( (_DWORD)v69 )
        {
          v70 = v47 + 8 * v69;
          if ( !v21 )
          {
            v114 = v47 + 8 * v69;
            v81 = (_QWORD *)sub_186B270(0x18u);
            v21 = (size_t)(v81 + 1);
            *v81 = 2;
            v70 = v114;
            v82 = 1;
            v6[6] = v21;
            v22 = v21;
            goto LABEL_98;
          }
          do
          {
            v73 = *(_DWORD *)(v21 - 4);
            if ( v73 == *(_DWORD *)(v21 - 8) )
            {
              v74 = (3 * v73 + 1) >> 1;
              v75 = 8 * v74 + 8;
              if ( 8 * v73 + 8 >= (unsigned int)v75 || v73 >= v74 )
              {
                v4 = (char **)__cxa_allocate_exception(0x28u);
                sub_C7E7E(v119, "Overflow encountered when expanding vector", v5);
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v119);
                sub_233E40((__int64)v119);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v115 = (3 * v73 + 1) >> 1;
              v113 = v70;
              v76 = (unsigned int *)sub_186B300((void *)(v21 - 8), v75);
              v21 = (size_t)(v76 + 2);
              v70 = v113;
              v6[6] = v76 + 2;
              *v76 = v115;
              LODWORD(v76) = v76[1];
              v22 = v21 + 8LL * (unsigned int)v76;
              v82 = (_DWORD)v76 + 1;
            }
            else
            {
              v71 = v73;
              v82 = v73 + 1;
              v22 = v21 + 8 * v71;
            }
LABEL_98:
            v72 = *(_QWORD *)(v47 + 32);
            v47 += 8LL;
            *(_QWORD *)v22 = v72;
            *(_DWORD *)(v21 - 4) = v82;
          }
          while ( v70 != v47 );
        }
      }
      else
      {
        if ( *(_WORD *)(v47 + 4) )
          goto LABEL_57;
        v65 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
        if ( !v65 || *v65 )
          goto LABEL_84;
LABEL_116:
        v83 = v65[1];
        if ( v83 == 8 || v83 == 9 )
          goto LABEL_94;
        if ( (*(_BYTE *)(v47 + 30) & 1) != 0 )
          goto LABEL_85;
        if ( v65[1] != 2 )
          goto LABEL_57;
        if ( *(_DWORD *)(v47 + 24) != 2 )
          goto LABEL_57;
        v84 = *(_QWORD *)(v47 + 32);
        v85 = *(_QWORD *)(v47 + 40);
        v22 = sub_15D1F10(v84);
        v48 = v6 + 3;
        if ( !(unsigned __int8)sub_1673B10(v6 + 3, v22) )
          goto LABEL_57;
        v86 = *(_WORD *)(v84 + 4);
        v87 = *(_WORD *)(v85 + 4);
        if ( v86 == 1 )
        {
          if ( !v87 && (*(_BYTE *)(v85 + 30) & 1) != 0 )
          {
            v102 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v84) + 24) + 8LL);
            if ( *(_BYTE *)(v102 + 8) )
              sub_A8ADA((__int64)"std::get: wrong index for variant");
            v22 = v47;
            v48 = v6;
            v103 = sub_3B7060(v6, v47, v84, (unsigned int)(*(_DWORD *)v102 - 1), 0, v85);
LABEL_161:
            if ( !v103 )
              goto LABEL_57;
            goto LABEL_85;
          }
        }
        else if ( v87 == 1 && !v86 && (*(_BYTE *)(v84 + 30) & 1) != 0 )
        {
          v105 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v85) + 24) + 8LL);
          if ( *(_BYTE *)(v105 + 8) )
            sub_A8ADA((__int64)"std::get: wrong index for variant");
          v22 = v47;
          v48 = v6;
          v103 = sub_3B7060(v6, v47, v85, (unsigned int)(*(_DWORD *)v105 - 1), 0, v84);
          goto LABEL_161;
        }
        if ( (unsigned __int8)sub_1674350(v6 + 3, v84, &v117, &v118, v119) )
        {
          v88 = v119[0];
          if ( *(_WORD *)(v119[0] + 4) == 1 && !*(_WORD *)(v85 + 4) && (*(_BYTE *)(v85 + 30) & 1) != 0 )
          {
            v104 = v85;
LABEL_166:
            v22 = v47;
            v48 = v6;
            v103 = sub_3B7060(v6, v47, v88, v118, v117, v104);
            goto LABEL_161;
          }
        }
        v22 = v85;
        v48 = v6 + 3;
        v89 = sub_1674350(v6 + 3, v85, &v117, &v118, v119);
        v90 = *(_WORD *)(v84 + 4);
        if ( v89 )
        {
          v88 = v119[0];
          if ( *(_WORD *)(v119[0] + 4) == 1 && !v90 )
          {
            if ( (*(_BYTE *)(v84 + 30) & 1) == 0 )
              goto LABEL_57;
            v104 = v84;
            goto LABEL_166;
          }
        }
        if ( v90 != 1 || *(_WORD *)(v85 + 4) != 1 )
          goto LABEL_57;
LABEL_85:
        v21 = v6[6];
      }
    }
    ++v106;
  }
  while ( v109 != v106 );
LABEL_62:
  if ( (unsigned int)sub_180B130(v21) > 9 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v66 = sub_180B150(v21, v22);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v66, "(ddnf.compile)\n");
    }
    else
    {
      sub_180B150(v21, v22);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v52 = v116;
  v53 = v6;
  sub_3BBC80(v6, v116, v121);
  if ( (unsigned int)sub_180B130(v6) > 0xE )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v54 = sub_180B150(v6, v116);
      v55 = v6[21];
      v56 = v55 + 24LL * *((unsigned int *)v6 + 44);
      v110 = v56;
      if ( v55 != v56 )
      {
        while ( *(_DWORD *)(v55 + 4) != 2 )
        {
          v55 += 24;
          if ( v56 == v55 )
            goto LABEL_103;
        }
        while ( v110 != v55 )
        {
          v57 = 0;
          v107 = *(_QWORD *)(v55 + 16);
          for ( i = *(_QWORD *)(v107 + 16); i; i = *(_QWORD *)(v107 + 16) )
          {
            if ( v57 >= *(_DWORD *)(i - 4) )
              break;
            v59 = *(_QWORD **)(i + 8LL * v57);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_182A9A0(*v59, v54, v59[1]);
            v60 = v59[3];
            for ( j = 0; v60; ++j )
            {
              if ( j >= *(_DWORD *)(v60 - 4) )
                break;
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              v60 = v59[3];
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            v52 = "\n";
            v53 = (_QWORD *)v54;
            std::__ostream_insert<char,std::char_traits<char>>();
            ++v57;
          }
          v62 = v55 + 24;
          if ( v110 == v55 + 24 )
            break;
          while ( 1 )
          {
            v55 = v62;
            if ( *(_DWORD *)(v62 + 4) == 2 )
              break;
            v62 += 24;
            if ( v110 == v62 )
              goto LABEL_103;
          }
        }
      }
LABEL_103:
      sub_186A500(v53, v52);
    }
    else
    {
      v93 = sub_180B150(v6, v116);
      v94 = v6[21];
      v95 = v94 + 24LL * *((unsigned int *)v6 + 44);
      v111 = v95;
      if ( v94 != v95 )
      {
        while ( *(_DWORD *)(v94 + 4) != 2 )
        {
          v94 += 24;
          if ( v95 == v94 )
            goto LABEL_104;
        }
        if ( v94 != v95 )
        {
          do
          {
            v96 = 0;
            v108 = *(_QWORD *)(v94 + 16);
            for ( k = *(_QWORD *)(v108 + 16); k; k = *(_QWORD *)(v108 + 16) )
            {
              if ( v96 >= *(_DWORD *)(k - 4) )
                break;
              v98 = *(_QWORD **)(k + 8LL * v96);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_182A9A0(*v98, v93, v98[1]);
              v99 = v98[3];
              for ( m = 0; v99; ++m )
              {
                if ( m >= *(_DWORD *)(v99 - 4) )
                  break;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                v99 = v98[3];
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              ++v96;
            }
            v101 = v94 + 24;
            if ( v111 == v94 + 24 )
              break;
            while ( 1 )
            {
              v94 = v101;
              if ( *(_DWORD *)(v101 + 4) == 2 )
                break;
              v101 += 24;
              if ( v111 == v101 )
                goto LABEL_104;
            }
          }
          while ( v111 != v101 );
        }
      }
    }
  }
LABEL_104:
  sub_64CDB0(v6 + 33);
  v77 = *(__int64 **)(*v6 + 2288LL);
  v78 = &v77[*(unsigned int *)(*v6 + 2296LL)];
  if ( v77 != v78 )
  {
    while ( (unsigned __int64)*v77 <= 1 )
    {
      if ( v78 == ++v77 )
        goto LABEL_115;
    }
    if ( v77 != v78 )
    {
      v79 = *v77;
      do
      {
        sub_6511B0(v6 + 33, v79, 0);
        v80 = v77 + 1;
        if ( v78 == v77 + 1 )
          break;
        while ( 1 )
        {
          v79 = *v80;
          v77 = v80;
          if ( (unsigned __int64)*v80 > 1 )
            break;
          if ( v78 == ++v80 )
            goto LABEL_115;
        }
      }
      while ( v80 != v78 );
    }
  }
LABEL_115:
  sub_64C320(v6 + 33);
  sub_64C430(v6 + 33, v121);
  sub_64DCE0(v6 + 33);
  sub_6516E0(v6 + 33, 0, 0, &std::cout);
LABEL_60:
  sub_63D960(v121);
  return 0;
}

