__int64 __fastcall sub_744F00(__int64 *a1, size_t a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  char **exception; // r15
  char **v6; // r15
  char **v7; // r15
  char **v8; // r15
  char **v9; // r15
  char **v10; // r15
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // r12
  unsigned int v16; // ebx
  size_t *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  _QWORD *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r15
  __int64 *v28; // r13
  __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  size_t v42; // r13
  __int64 v43; // rax
  int *v44; // rax
  int v45; // ecx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // r13
  __int64 *v50; // rbx
  unsigned __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // r15
  _QWORD *v54; // rax
  _DWORD *v55; // r14
  int v56; // r9d
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  int *v64; // rdi
  size_t *v65; // r14
  unsigned __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rax
  void *v69; // r15
  __int64 v70; // r14
  __int64 v71; // r15
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  _QWORD *v75; // rdx
  unsigned int v76; // edx
  unsigned int *v77; // rax
  unsigned int v78; // r15d
  unsigned int *v79; // rax
  _QWORD *v80; // rax
  int v83; // [rsp+10h] [rbp-360h]
  unsigned int v84; // [rsp+14h] [rbp-35Ch]
  int v85; // [rsp+18h] [rbp-358h]
  unsigned int v86; // [rsp+1Ch] [rbp-354h]
  _QWORD *v87; // [rsp+20h] [rbp-350h]
  size_t v88; // [rsp+28h] [rbp-348h]
  unsigned int v89; // [rsp+38h] [rbp-338h]
  unsigned int v90; // [rsp+3Ch] [rbp-334h]
  __int64 v91; // [rsp+48h] [rbp-328h]
  int v92; // [rsp+50h] [rbp-320h]
  __int64 v93; // [rsp+50h] [rbp-320h]
  _QWORD *v94; // [rsp+60h] [rbp-310h]
  __m128i v96; // [rsp+70h] [rbp-300h] BYREF
  __int64 v97; // [rsp+80h] [rbp-2F0h]
  _QWORD v98[2]; // [rsp+90h] [rbp-2E0h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-2D0h] BYREF
  void *ptr; // [rsp+A8h] [rbp-2C8h]
  __int64 v101; // [rsp+B0h] [rbp-2C0h]
  int v102; // [rsp+B8h] [rbp-2B8h]
  __int64 v103; // [rsp+C0h] [rbp-2B0h]
  int v104; // [rsp+C8h] [rbp-2A8h]
  int v105; // [rsp+CCh] [rbp-2A4h]
  size_t v106; // [rsp+D0h] [rbp-2A0h] BYREF
  int *v107; // [rsp+D8h] [rbp-298h] BYREF
  _QWORD v108[19]; // [rsp+E0h] [rbp-290h] BYREF
  __int64 v109; // [rsp+178h] [rbp-1F8h]
  int *v110; // [rsp+180h] [rbp-1F0h] BYREF
  int *v111; // [rsp+220h] [rbp-150h] BYREF
  __int64 v112; // [rsp+2B8h] [rbp-B8h]
  __int64 v113; // [rsp+2C0h] [rbp-B0h]
  __int64 v114; // [rsp+2C8h] [rbp-A8h]
  __int64 v115; // [rsp+2D0h] [rbp-A0h]
  __int64 v116; // [rsp+2D8h] [rbp-98h]
  __int64 v117; // [rsp+2E0h] [rbp-90h]
  __int64 v118; // [rsp+2E8h] [rbp-88h]
  __int64 v119; // [rsp+300h] [rbp-70h]
  void *v120; // [rsp+308h] [rbp-68h]
  __int64 v121; // [rsp+320h] [rbp-50h]
  char v122[64]; // [rsp+330h] [rbp-40h] BYREF

  v88 = a2;
  if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2 )
    return 0;
  v12 = a1[13];
  if ( v12 )
    v83 = *(_DWORD *)(v12 - 4);
  else
    v83 = 0;
  v99 = 0;
  v90 = *(_DWORD *)(a2 + 20);
  v13 = (_QWORD *)sub_186B270(0xC0u);
  *v13 = 0;
  v13[1] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[6] = 0;
  v13[7] = 0;
  v13[9] = 0;
  v13[10] = 0;
  v13[12] = 0;
  v13[13] = 0;
  v13[15] = 0;
  v13[16] = 0;
  v13[18] = 0;
  v13[19] = 0;
  v13[21] = 0;
  v13[22] = 0;
  *((_DWORD *)v13 + 4) = 0;
  *((_DWORD *)v13 + 10) = 0;
  *((_DWORD *)v13 + 16) = 0;
  *((_DWORD *)v13 + 22) = 0;
  *((_DWORD *)v13 + 28) = 0;
  *((_DWORD *)v13 + 34) = 0;
  *((_DWORD *)v13 + 40) = 0;
  *((_DWORD *)v13 + 46) = 0;
  ptr = v13;
  v101 = 8;
  v102 = 0;
  v103 = 0;
  v105 = 0;
  if ( v99 )
    *(_DWORD *)(v99 - 4) = 0;
  v14 = &v99;
  v104 = -1;
  sub_1662C60(&v99, a2, 0);
  if ( v99 )
    v89 = *(_DWORD *)(v99 - 4);
  else
    v89 = 0;
  v15 = *a1;
  v96 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)*a1);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v16 = v90 - 1;
  if ( v90 )
  {
    v94 = nullptr;
    v17 = (size_t *)(a2 + 8LL * v16 + 80);
    do
    {
      if ( a1[9] < (unsigned __int64)v94 )
      {
        v15 = *a1;
        a3 = v96.m128i_i64[0];
        goto LABEL_14;
      }
      if ( a1[10] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v14, a2) )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_743560((__int64 *)&v106, off_1C7E178);
        *exception = (char *)off_1C63670;
        sub_2333C0(exception + 1, &v106);
        sub_233E40((__int64)&v106);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      v42 = *v17;
      a2 = *v17;
      v14 = a1 + 2;
      v91 = *a1;
      v97 = *a1;
      if ( (unsigned __int8)sub_1673B10(a1 + 2, a2) )
      {
        v43 = *(_QWORD *)(*(_QWORD *)(v42 + 24) + 8LL);
        if ( *(_BYTE *)(v43 + 8) )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        if ( *((_DWORD *)a1 + 16) >= *(_DWORD *)v43 && a1[9] >= (unsigned __int64)v94 )
        {
          if ( a1[10] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v14, a2) )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560((__int64 *)&v106, off_1C7E178);
            *v6 = (char *)off_1C63670;
            sub_2333C0(v6 + 1, &v106);
            sub_233E40((__int64)&v106);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
          }
          v44 = *(int **)(*(_QWORD *)(v42 + 24) + 8LL);
          if ( *((_BYTE *)v44 + 8) )
            sub_A8ADA((__int64)"std::get: wrong index for variant");
          v45 = *v44;
          v86 = *v44;
          if ( (unsigned int)*v44 <= 0x1E )
          {
            v85 = 1 << v45;
            v46 = (unsigned int)(1 << v45);
            v47 = a1[9];
            if ( v47 >= v46 )
            {
              v48 = v94;
              if ( v47 >= (unsigned __int64)v94 + v46 )
              {
                v92 = 0;
                v49 = nullptr;
                while ( v47 >= (unsigned __int64)v94 )
                {
                  if ( a1[10] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v48, a2) )
                  {
                    v7 = (char **)__cxa_allocate_exception(0x28u);
                    sub_743560((__int64 *)&v106, off_1C7E178);
                    *v7 = (char *)off_1C63670;
                    sub_2333C0(v7 + 1, &v106);
                    sub_233E40((__int64)&v106);
                    __cxa_throw(v7, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
                  }
                  v67 = *a1;
                  v107 = nullptr;
                  BYTE4(v106) &= 0xFCu;
                  v87 = (_QWORD *)v67;
                  v108[0] = 1;
                  v108[1] = 0;
                  LODWORD(v106) = v92;
                  sub_182CBA0(qword_1C7F2C0, v108);
                  LODWORD(v108[0]) = 1;
                  BYTE4(v108[0]) &= ~1u;
                  v68 = sub_1674520(a1 + 2, &v106, v86);
                  v69 = qword_1C7F2C0;
                  v70 = v68;
                  sub_182CBA0(qword_1C7F2C0, &v106);
                  sub_182CBA0(v69, v108);
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  v48 = v98;
                  a2 = (size_t)a1;
                  sub_744930(v98, a1, v90, v89, v16, v96.m128i_i32[0], v70);
                  v71 = v98[0];
                  if ( v49 )
                  {
                    v72 = *((_DWORD *)v49 - 1);
                    if ( v72 == *((_DWORD *)v49 - 2) )
                    {
                      v76 = (3 * v72 + 1) >> 1;
                      a2 = 8 * v76 + 8;
                      if ( 8 * v72 + 8 >= (unsigned int)a2 || v72 >= v76 )
                      {
                        v10 = (char **)__cxa_allocate_exception(0x28u);
                        sub_743560((__int64 *)&v106, "Overflow encountered when expanding vector");
                        *v10 = (char *)off_1C63128;
                        sub_2333C0(v10 + 1, &v106);
                        sub_233E40((__int64)&v106);
                        __cxa_throw(
                          v10,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v48 = v49 - 1;
                      v84 = (3 * v72 + 1) >> 1;
                      v77 = (unsigned int *)sub_186B300(v49 - 1, a2);
                      v49 = v77 + 2;
                      *v77 = v84;
                      LODWORD(v77) = v77[1];
                      v75 = &v49[(unsigned int)v77];
                      v74 = (_DWORD)v77 + 1;
                    }
                    else
                    {
                      v73 = v72;
                      v74 = v72 + 1;
                      v75 = &v49[v73];
                    }
                  }
                  else
                  {
                    v48 = &qword_18;
                    v80 = (_QWORD *)sub_186B270(0x18u);
                    v49 = v80 + 1;
                    *v80 = 2;
                    v75 = v80 + 1;
                    v74 = 1;
                  }
                  *v75 = v71;
                  v94 = (_QWORD *)((char *)v94 + 1);
                  *((_DWORD *)v49 - 1) = v74;
                  if ( v70 )
                  {
                    v22 = (*(_DWORD *)(v70 + 8))-- == 1;
                    if ( v22 )
                    {
                      v48 = v87;
                      a2 = v70;
                      sub_15D7BC0(v87, v70);
                    }
                  }
                  ++v92;
                  v47 = a1[9];
                  if ( v85 == v92 )
                    goto LABEL_86;
                }
                if ( v49 )
                {
LABEL_73:
                  v50 = v49;
                  if ( v49 < &v49[*((unsigned int *)v49 - 1)] )
                  {
                    v51 = (unsigned __int64)&v49[*((unsigned int *)v49 - 1)];
                    do
                    {
                      while ( 1 )
                      {
                        v52 = *v50;
                        if ( *v50 )
                        {
                          v22 = (*(_DWORD *)(v52 + 8))-- == 1;
                          if ( v22 )
                            break;
                        }
                        if ( (unsigned __int64)++v50 >= v51 )
                          goto LABEL_79;
                      }
                      ++v50;
                      sub_15D7BC0(v91, v52);
                    }
                    while ( (unsigned __int64)v50 < v51 );
                  }
LABEL_79:
                  sub_186B220(v49 - 1);
                }
              }
            }
          }
          v37 = 0;
          goto LABEL_51;
        }
      }
      if ( *(_QWORD *)(*a1 + 840) == v42 )
      {
        sub_744930(&v106, a1, v90, v89, v16, v96.m128i_i32[0], *(_QWORD *)(*a1 + 856));
        v53 = v106;
        v54 = (_QWORD *)sub_186B270(0x18u);
        v54[1] = v53;
        v55 = v54;
        v49 = v54 + 1;
        a2 = (size_t)a1;
        v48 = v98;
        v56 = v96.m128i_i32[0];
        *v54 = 0x100000002LL;
        sub_744930(v98, (__int64 *)a2, v90, v89, v16, v56, *(_QWORD *)(*(_QWORD *)a2 + 864LL));
        v57 = v55[1];
        v58 = v98[0];
        if ( v57 == *v55 )
        {
          v78 = (3 * v57 + 1) >> 1;
          a2 = 8 * v78 + 8;
          if ( 8 * v57 + 8 >= (unsigned int)a2 || v57 >= v78 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_743560((__int64 *)&v106, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, &v106);
            sub_233E40((__int64)&v106);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v48 = v55;
          v93 = v98[0];
          v79 = (unsigned int *)sub_186B300(v55, a2);
          *v79 = v78;
          v49 = v79 + 2;
          v58 = v93;
          v57 = v79[1];
        }
        v49[v57] = v58;
        *((_DWORD *)v49 - 1) = v57 + 1;
LABEL_86:
        if ( a1[9] < (unsigned __int64)v94 )
          goto LABEL_73;
        if ( a1[10] < (unsigned __int64)Z3_get_estimated_alloc_size_0(v48, a2) )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_743560((__int64 *)&v106, off_1C7E178);
          *v8 = (char *)off_1C63670;
          sub_2333C0(v8 + 1, &v106);
          sub_233E40((__int64)&v106);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        v59 = sub_15E1AF0(*a1);
        v60 = v59;
        if ( v59 )
          ++*(_DWORD *)(v59 + 8);
        v61 = v96.m128i_i64[0];
        if ( v96.m128i_i64[0] )
        {
          v62 = v96.m128i_i64[1];
          v22 = (*(_DWORD *)(v96.m128i_i64[0] + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v62, v61);
        }
        v96.m128i_i64[0] = v60;
        v63 = *a1;
        v106 = 0;
        v107 = (int *)v63;
        sub_14BB8A0(a1 + 5, v60, &v96, &v106);
        a2 = v106;
        ++a1[14];
        if ( a2 )
        {
          v64 = v107;
          v22 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v64, a2);
        }
        v65 = v49;
        v66 = (unsigned __int64)&v49[*((unsigned int *)v49 - 1)];
        if ( (unsigned __int64)v49 < v66 )
        {
          do
          {
            while ( 1 )
            {
              a2 = *v65;
              if ( *v65 )
              {
                v22 = (*(_DWORD *)(a2 + 8))-- == 1;
                if ( v22 )
                  break;
              }
              if ( (unsigned __int64)++v65 >= v66 )
                goto LABEL_102;
            }
            ++v65;
            sub_15D7BC0(v91, a2);
          }
          while ( (unsigned __int64)v65 < v66 );
        }
LABEL_102:
        v14 = v49 - 1;
        sub_186B220(v49 - 1);
      }
      --v16;
      --v17;
    }
    while ( v16 != -1 );
    a3 = v96.m128i_i64[0];
    v15 = *a1;
  }
LABEL_14:
  v18 = sub_15DBB60(v15, v88, a3);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  sub_157C5B0(&v106, *a1, a1 + 1);
  sub_157CAA0(v98, &v106, v19);
  v20 = *a4;
  *a4 = v98[0];
  v98[0] = v20;
  if ( v20 && (v21 = v98[1], v22 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v22) )
  {
    sub_15D7BC0(v21, v20);
    v23 = a5;
    v24 = *a5;
    if ( *a5 )
    {
LABEL_19:
      v25 = v23[1];
      v22 = (*(_DWORD *)(v24 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v25, v24);
    }
  }
  else
  {
    v23 = a5;
    v24 = *a5;
    if ( *a5 )
      goto LABEL_19;
  }
  *a5 = 0;
  v26 = a1[13];
  if ( v26 )
  {
    v27 = v26 + 8LL * *(unsigned int *)(v26 - 4);
    v28 = (__int64 *)(v26 + 8LL * (v83 - v90));
    if ( (unsigned __int64)v28 >= v27 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v29 = *v28;
        if ( *v28 )
        {
          v30 = a1[12];
          v22 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( (unsigned __int64)++v28 >= v27 )
          goto LABEL_28;
      }
      sub_15D7BC0(v30, v29);
      ++v28;
    }
    while ( (unsigned __int64)v28 < v27 );
LABEL_28:
    v26 = a1[13];
    if ( v26 )
LABEL_29:
      *(_DWORD *)(v26 - 4) = v83 - v90;
  }
  sub_18572D0(v122);
  if ( v121 )
    sub_186B220((void *)(v121 - 8));
  if ( v120 )
    sub_186B220(v120);
  if ( v119 )
    sub_186B220((void *)(v119 - 8));
  v107 = &off_1C4CA60;
  if ( v118 )
    sub_186B220((void *)(v118 - 8));
  v31 = v116;
  if ( v116 && (v32 = v117, v22 = *(_DWORD *)(v116 + 8) == 1, --*(_DWORD *)(v116 + 8), v22) )
  {
    sub_15D7BC0(v32, v31);
    v33 = v114;
    if ( !v114 )
    {
LABEL_42:
      v35 = v112;
      if ( v112 )
        goto LABEL_43;
      goto LABEL_45;
    }
  }
  else
  {
    v33 = v114;
    if ( !v114 )
      goto LABEL_42;
  }
  v34 = v115;
  v22 = (*(_DWORD *)(v33 + 8))-- == 1;
  if ( !v22 )
    goto LABEL_42;
  sub_15D7BC0(v34, v33);
  v35 = v112;
  if ( v112 )
  {
LABEL_43:
    v36 = v113;
    v22 = (*(_DWORD *)(v35 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v36, v35);
  }
LABEL_45:
  v111 = &qword_1C637E8;
  sub_15841B0(&v111);
  v110 = &qword_1C637E8;
  sub_15841B0(&v110);
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  sub_15841B0(&v107);
  if ( v19 )
  {
    v22 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v15, v19);
  }
  v37 = 1;
LABEL_51:
  v38 = v96.m128i_i64[0];
  if ( v96.m128i_i64[0] )
  {
    v39 = v96.m128i_i64[1];
    v22 = (*(_DWORD *)(v96.m128i_i64[0] + 8))-- == 1;
    if ( v22 )
    {
      sub_15D7BC0(v39, v38);
      v40 = v103;
      if ( !v103 )
        goto LABEL_55;
      goto LABEL_54;
    }
  }
  v40 = v103;
  if ( v103 )
LABEL_54:
    sub_186B220((void *)(v40 - 8));
LABEL_55:
  if ( ptr )
    sub_186B220(ptr);
  if ( v99 )
    sub_186B220((void *)(v99 - 8));
  return v37;
}

