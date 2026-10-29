double __fastcall sub_C9CF70(int a1, __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *exception; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  char v18; // al
  int v19; // edx
  _QWORD *v20; // rbp
  __int64 *v21; // rbp
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  __int64 *v24; // r15
  unsigned int v25; // ebp
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // r13
  char v29; // al
  int v30; // edx
  _QWORD *v31; // r8
  unsigned __int16 v32; // ax
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  int *v35; // rax
  int v36; // edx
  _DWORD *v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // rdx
  unsigned int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // r12
  char v44; // dl
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 *v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  int v50; // edx
  _QWORD *v51; // rbp
  __int64 v52; // rdx
  __int64 *v53; // rdx
  __int64 v54; // r12
  char *v55; // rax
  char *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // rbx
  char *v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rbx
  char *v64; // rax
  char *v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rbx
  char *v69; // rdi
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  void *v72; // rdi
  char *v73; // rcx
  bool v74; // si
  char *v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  _DWORD *v78; // rax
  int *v79; // rax
  int v80; // edx
  __int64 v81; // rax
  int v82; // edx
  __int64 *v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // r10
  __int64 v86; // rax
  _DWORD *v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 *v91; // rax
  int v92; // eax
  _DWORD *v93; // rax
  __int64 v94; // r12
  char *v95; // rax
  char *v96; // rdi
  unsigned __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v100; // rax
  _DWORD *v101; // rax
  __int64 v102; // rbx
  char *v103; // rdi
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  unsigned __int64 v106; // rax
  __int64 v107; // rsi
  __int64 i; // [rsp+8h] [rbp-230h]
  _QWORD *v110; // [rsp+20h] [rbp-218h]
  __int64 v111; // [rsp+28h] [rbp-210h]
  __int64 v112; // [rsp+30h] [rbp-208h]
  char v113[16]; // [rsp+38h] [rbp-200h] BYREF
  unsigned int v114[4]; // [rsp+48h] [rbp-1F0h] BYREF
  __int16 v115; // [rsp+58h] [rbp-1E0h]
  void *v116; // [rsp+60h] [rbp-1D8h]
  __int64 v117; // [rsp+68h] [rbp-1D0h]
  _BYTE v118[128]; // [rsp+70h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+F0h] [rbp-148h]
  __int64 v120; // [rsp+F8h] [rbp-140h]
  __int64 v121; // [rsp+100h] [rbp-138h] BYREF
  int v122; // [rsp+108h] [rbp-130h]

  v12 = *a2;
  v112 = *a2;
  sub_16669D0(v113, *a2);
  sub_1684300(v114, v12);
  v13 = a2[9];
  v116 = v118;
  v115 = 1;
  v117 = 0x1000000000LL;
  if ( !v13 )
    return 1.0;
  v14 = *(_BYTE *)(v13 + 3) >> 6;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
LABEL_4:
      if ( v14 == 2 )
        v15 = (unsigned int)(*(_DWORD *)(v13 + 4) - 1);
      else
        v15 = *(unsigned int *)(v13 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v13 = *(_QWORD *)(v13 + 16);
      v14 = *(_BYTE *)(v13 + 3) >> 6;
    }
    while ( !v14 );
    if ( v14 != 1 )
      goto LABEL_4;
  }
  v15 = (unsigned int)(*(_DWORD *)(v13 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v15 )
    return 1.0;
  v111 = v15;
  for ( i = 0; i != v111; ++i )
  {
    v16 = *a2;
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v17 = *(_QWORD *)(v16 + 864);
      goto LABEL_10;
    }
    v81 = a2[9];
    v82 = 17;
    while ( 1 )
    {
      if ( *(char *)(v81 + 3) < 0 )
      {
        if ( *(_BYTE *)(v81 + 3) >> 6 != 2 )
        {
          v83 = (__int64 *)(*(_QWORD *)(v81 + 16) + 8 * i);
          goto LABEL_144;
        }
        goto LABEL_146;
      }
      if ( *(_DWORD *)(v81 + 4) == (_DWORD)i )
        break;
LABEL_146:
      v81 = *(_QWORD *)(v81 + 16);
      if ( !--v82 )
      {
        sub_233F80((__int64 *)(v16 + 616), (_DWORD *)a2 + 18);
        v83 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * i);
        goto LABEL_144;
      }
    }
    v83 = (__int64 *)(v81 + 8);
LABEL_144:
    v17 = *v83;
LABEL_10:
    if ( *(_DWORD *)(v17 + 8) <= 1u )
    {
LABEL_15:
      v21 = &v121;
      v121 = v17;
      ptr = &v121;
      v122 = 0;
      v120 = 0x1000000001LL;
      LODWORD(v22) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *(_WORD *)(v17 + 4);
          v24 = &v21[2 * (unsigned int)v22];
          if ( v23 == 2 )
            break;
          if ( v23 > 2u )
          {
            sub_1872CE0("");
            sub_1873130(114, 100);
          }
          if ( v23 )
            sub_161DC8();
          v25 = *(_DWORD *)(v17 + 24);
          v26 = *((_DWORD *)v24 + 2);
          if ( v26 < v25 )
          {
            while ( 1 )
            {
              v27 = v26++;
              v28 = *(_QWORD *)(v17 + 8 * v27 + 32);
              *((_DWORD *)v24 + 2) = v26;
              if ( *(_DWORD *)(v28 + 8) <= 1u )
                goto LABEL_25;
              v29 = *(_BYTE *)(v28 + 6);
              if ( (v29 & 1) == 0 )
                break;
LABEL_43:
              if ( v26 >= v25 )
              {
                LODWORD(v22) = v120 - 1;
                goto LABEL_45;
              }
            }
            *(_BYTE *)(v28 + 6) = v29 | 1;
            v30 = v117;
            if ( (unsigned int)v117 >= HIDWORD(v117) )
            {
              v54 = (unsigned int)(2 * HIDWORD(v117));
              v55 = (char *)sub_186B270(8 * v54);
              v30 = v117;
              v56 = (char *)v116;
              v31 = v55;
              if ( (_DWORD)v117 )
              {
                if ( (unsigned int)(v117 - 1) <= 2 || v55 == (char *)v116 + 8 )
                {
                  v84 = 0;
                  v85 = 8LL * (unsigned int)v117;
                  do
                  {
                    v31[v84 / 8] = *(_QWORD *)&v56[v84];
                    v84 += 8LL;
                  }
                  while ( v85 != v84 );
                }
                else
                {
                  v57 = 0;
                  v58 = 16LL * ((unsigned int)v117 >> 1);
                  do
                  {
                    *(__m128i *)&v31[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57]);
                    v57 += 16LL;
                  }
                  while ( v58 != v57 );
                  if ( (v30 & 1) != 0 )
                    v31[v30 & 0xFFFFFFFE] = *(_QWORD *)&v56[8 * (v30 & 0xFFFFFFFE)];
                }
              }
              if ( v56 != v118 && v56 )
              {
                v110 = v31;
                sub_186B220(v56);
                v30 = v117;
                v31 = v110;
              }
              v116 = v31;
              HIDWORD(v117) = v54;
            }
            else
            {
              v31 = v116;
            }
            v31[v30] = v28;
            LODWORD(v117) = v30 + 1;
LABEL_25:
            v32 = *(_WORD *)(v28 + 4);
            if ( v32 == 2 )
            {
              v52 = (unsigned int)v120;
              if ( (unsigned int)v120 >= HIDWORD(v120) )
              {
                v68 = (unsigned int)(2 * HIDWORD(v120));
                v21 = (__int64 *)sub_186B270(16 * v68);
                v69 = (char *)ptr;
                v70 = 0;
                v52 = (unsigned int)v120;
                v71 = 16LL * (unsigned int)v120;
                if ( (_DWORD)v120 )
                {
                  do
                  {
                    *(__m128i *)&v21[v70 / 8] = _mm_loadu_si128((const __m128i *)&v69[v70]);
                    v70 += 16LL;
                  }
                  while ( v71 != v70 );
                }
                if ( v69 != (char *)&v121 && v69 )
                {
                  sub_186B220(v69);
                  v52 = (unsigned int)v120;
                }
                ptr = v21;
                HIDWORD(v120) = v68;
              }
              else
              {
                v21 = (__int64 *)ptr;
              }
              v53 = &v21[2 * v52];
              *v53 = v28;
              *((_DWORD *)v53 + 2) = 0;
              v48 = (unsigned int)v120;
              v49 = v120 + 1;
              goto LABEL_68;
            }
            if ( v32 > 2u )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v32 )
              sub_161DC8();
            if ( *(_DWORD *)(v28 + 24) )
            {
              v90 = (unsigned int)v120;
              if ( (unsigned int)v120 >= HIDWORD(v120) )
              {
                v102 = (unsigned int)(2 * HIDWORD(v120));
                v21 = (__int64 *)sub_186B270(16 * v102);
                v103 = (char *)ptr;
                v104 = 0;
                v90 = (unsigned int)v120;
                v105 = 16LL * (unsigned int)v120;
                if ( (_DWORD)v120 )
                {
                  do
                  {
                    *(__m128i *)&v21[v104 / 8] = _mm_loadu_si128((const __m128i *)&v103[v104]);
                    v104 += 16LL;
                  }
                  while ( v105 != v104 );
                }
                if ( v103 != (char *)&v121 && v103 )
                {
                  sub_186B220(v103);
                  v90 = (unsigned int)v120;
                }
                ptr = v21;
                HIDWORD(v120) = v102;
              }
              else
              {
                v21 = (__int64 *)ptr;
              }
              v91 = &v21[2 * v90];
              *((_DWORD *)v91 + 2) = 0;
              v48 = (unsigned int)v120;
              *v91 = v28;
              v49 = v48 + 1;
              goto LABEL_68;
            }
            if ( !(unsigned __int8)sub_15D2CB0(v112, v28) )
            {
              if ( (_BYTE)v115 )
              {
                v78 = *(_DWORD **)(sub_15D1F10(v28) + 24);
                if ( v78 )
                {
                  if ( *v78 == 5 && v78[1] == 1 )
                  {
                    v35 = *(int **)(*(_QWORD *)(v28 + 16) + 24LL);
                    if ( !v35 )
                      goto LABEL_129;
LABEL_38:
                    v36 = *v35;
                    if ( *v35 )
                    {
                      if ( v36 == 5 )
                      {
                        v77 = v35[1];
                        if ( v77 == 9 )
                        {
                          if ( *(_DWORD *)(v28 + 24) != 2 )
                          {
                            exception = __cxa_allocate_exception(8u);
                            *exception = &off_1C74AD8;
                            __cxa_throw(
                              exception,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                              (void (*)(void *))sub_C98520);
                          }
                          v86 = *(_QWORD *)(v28 + 32);
                          if ( *(_WORD *)(v86 + 4)
                            || (v87 = *(_DWORD **)(*(_QWORD *)(v86 + 16) + 24LL)) == nullptr
                            || *v87 != 5
                            || v87[1] )
                          {
                            v10 = __cxa_allocate_exception(8u);
                            *v10 = &off_1C74AD8;
                            __cxa_throw(
                              v10,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                              (void (*)(void *))sub_C98520);
                          }
                        }
                        else if ( v77 > 9 )
                        {
                          if ( v77 != 18 )
                            goto LABEL_225;
                          if ( !HIBYTE(v115) )
                          {
                            v9 = __cxa_allocate_exception(8u);
                            *v9 = &off_1C74AD8;
                            __cxa_throw(
                              v9,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                              (void (*)(void *))sub_C98520);
                          }
                        }
                        else if ( v77 && (unsigned int)(v77 - 2) > 4 )
                        {
LABEL_225:
                          v7 = __cxa_allocate_exception(8u);
                          *v7 = &off_1C74AD8;
                          __cxa_throw(
                            v7,
                            (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                            (void (*)(void *))sub_C98520);
                        }
                      }
                      else if ( *(_WORD *)(v28 + 4) || v36 != -1 )
                      {
LABEL_222:
                        v3 = __cxa_allocate_exception(8u);
                        *v3 = &off_1C74AD8;
                        __cxa_throw(
                          v3,
                          (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                          (void (*)(void *))sub_C98520);
                      }
                    }
                    goto LABEL_42;
                  }
                }
              }
              if ( !HIBYTE(v115) || (v33 = *(_DWORD **)(sub_15D1F10(v28) + 24)) == nullptr || *v33 != 5 || v33[1] )
              {
                v34 = *(_DWORD **)(sub_15D1F10(v28) + 24);
                if ( !v34 || v114[0] != *v34 || v34[1] )
                  ((void (__noreturn *)(void))sub_161D44)();
              }
            }
            v35 = *(int **)(*(_QWORD *)(v28 + 16) + 24LL);
            if ( v35 )
              goto LABEL_38;
LABEL_129:
            if ( *(_WORD *)(v28 + 4) )
              goto LABEL_222;
LABEL_42:
            v26 = *((_DWORD *)v24 + 2);
            goto LABEL_43;
          }
LABEL_45:
          LODWORD(v120) = v22;
          if ( !(unsigned __int8)sub_15D2CB0(v112, v17)
            && (!(_BYTE)v115 || (v93 = *(_DWORD **)(sub_15D1F10(v17) + 24)) == nullptr || *v93 != 5 || v93[1] != 1)
            && (!HIBYTE(v115) || (v37 = *(_DWORD **)(sub_15D1F10(v17) + 24)) == nullptr || *v37 != 5 || v37[1]) )
          {
            v38 = *(_DWORD **)(sub_15D1F10(v17) + 24);
            v39 = v114[0];
            if ( !v38 || v114[0] != *v38 || (v39 = (unsigned int)v38[1], (_DWORD)v39) )
              sub_161D44(v17, v17, v39);
          }
          v79 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
          if ( v79 )
          {
            v80 = *v79;
            if ( *v79 )
            {
              if ( v80 == 5 )
              {
                v92 = v79[1];
                if ( v92 == 9 )
                {
                  if ( *(_DWORD *)(v17 + 24) != 2 )
                  {
                    v8 = __cxa_allocate_exception(8u);
                    *v8 = &off_1C74AD8;
                    __cxa_throw(
                      v8,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                      (void (*)(void *))sub_C98520);
                  }
                  v100 = *(_QWORD *)(v17 + 32);
                  if ( *(_WORD *)(v100 + 4)
                    || (v101 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL)) == nullptr
                    || *v101 != 5
                    || v101[1] )
                  {
                    v4 = __cxa_allocate_exception(8u);
                    *v4 = &off_1C74AD8;
                    __cxa_throw(
                      v4,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                      (void (*)(void *))sub_C98520);
                  }
                }
                else if ( v92 <= 9 )
                {
                  if ( v92 && (unsigned int)(v92 - 2) > 4 )
                  {
LABEL_221:
                    v2 = __cxa_allocate_exception(8u);
                    *v2 = &off_1C74AD8;
                    __cxa_throw(
                      v2,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                      (void (*)(void *))sub_C98520);
                  }
                }
                else
                {
                  if ( v92 != 18 )
                    goto LABEL_221;
                  if ( !HIBYTE(v115) )
                  {
                    v5 = __cxa_allocate_exception(8u);
                    *v5 = &off_1C74AD8;
                    __cxa_throw(
                      v5,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                      (void (*)(void *))sub_C98520);
                  }
                }
              }
              else if ( *(_WORD *)(v17 + 4) || v80 != -1 )
              {
LABEL_224:
                v6 = __cxa_allocate_exception(8u);
                *v6 = &off_1C74AD8;
                __cxa_throw(
                  v6,
                  (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qfauflira_functor::found,
                  (void (*)(void *))sub_C98520);
              }
            }
          }
          else if ( *(_WORD *)(v17 + 4) )
          {
            goto LABEL_224;
          }
          v21 = (__int64 *)ptr;
          if ( !(_DWORD)v120 )
          {
            if ( ptr != &v121 && ptr )
              sub_186B220(ptr);
            goto LABEL_113;
          }
          v22 = (unsigned int)(v120 - 1);
          v17 = *((_QWORD *)ptr + 2 * v22);
        }
        v40 = *(_DWORD *)(v17 + 72);
        v41 = *((_DWORD *)v24 + 2);
        v42 = v40 + *(_DWORD *)(v17 + 76) + 1;
        if ( v41 >= v42 )
          goto LABEL_229;
        if ( v41 )
          goto LABEL_62;
        v43 = *(_QWORD *)(v17 + 24);
        v41 = 1;
        *((_DWORD *)v24 + 2) = 1;
        if ( *(_DWORD *)(v43 + 8) > 1u )
          break;
LABEL_65:
        v46 = (unsigned int)v120;
        if ( (unsigned int)v120 >= HIDWORD(v120) )
        {
          v59 = (unsigned int)(2 * HIDWORD(v120));
          v21 = (__int64 *)sub_186B270(16 * v59);
          v60 = (char *)ptr;
          v61 = 0;
          v46 = (unsigned int)v120;
          v62 = 16LL * (unsigned int)v120;
          if ( (_DWORD)v120 )
          {
            do
            {
              *(__m128i *)&v21[v61 / 8] = _mm_loadu_si128((const __m128i *)&v60[v61]);
              v61 += 16LL;
            }
            while ( v62 != v61 );
          }
          if ( v60 != (char *)&v121 && v60 )
          {
            sub_186B220(v60);
            v46 = (unsigned int)v120;
          }
          ptr = v21;
          HIDWORD(v120) = v59;
        }
        else
        {
          v21 = (__int64 *)ptr;
        }
        v47 = &v21[2 * v46];
        *v47 = v43;
        *((_DWORD *)v47 + 2) = 0;
        v48 = (unsigned int)v120;
        v49 = v120 + 1;
LABEL_68:
        LODWORD(v120) = v49;
        LODWORD(v22) = v49 - 1;
        v17 = v21[2 * v48];
      }
      while ( 1 )
      {
        v44 = *(_BYTE *)(v43 + 6);
        if ( (v44 & 1) == 0 )
        {
          *(_BYTE *)(v43 + 6) = v44 | 1;
          v50 = v117;
          if ( (unsigned int)v117 >= HIDWORD(v117) )
          {
            v63 = (unsigned int)(2 * HIDWORD(v117));
            v64 = (char *)sub_186B270(8 * v63);
            v50 = v117;
            v65 = (char *)v116;
            v51 = v64;
            if ( (_DWORD)v117 )
            {
              if ( (unsigned int)(v117 - 1) <= 2 || v64 == (char *)v116 + 8 )
              {
                v88 = 0;
                v89 = 8LL * (unsigned int)v117;
                do
                {
                  v51[v88 / 8] = *(_QWORD *)&v65[v88];
                  v88 += 8LL;
                }
                while ( v89 != v88 );
              }
              else
              {
                v66 = 0;
                v67 = 16LL * ((unsigned int)v117 >> 1);
                do
                {
                  *(__m128i *)&v51[v66 / 8] = _mm_loadu_si128((const __m128i *)&v65[v66]);
                  v66 += 16LL;
                }
                while ( v67 != v66 );
                if ( (v50 & 1) != 0 )
                  v51[v50 & 0xFFFFFFFE] = *(_QWORD *)&v65[8 * (v50 & 0xFFFFFFFE)];
              }
            }
            if ( v65 != v118 && v65 )
            {
              sub_186B220(v65);
              v50 = v117;
            }
            v116 = v51;
            HIDWORD(v117) = v63;
          }
          else
          {
            v51 = v116;
          }
          v51[v50] = v43;
          LODWORD(v117) = v50 + 1;
          goto LABEL_65;
        }
        if ( v41 >= v42 )
        {
LABEL_229:
          LODWORD(v120) = v120 - 1;
          sub_161DC8();
        }
        v40 = *(_DWORD *)(v17 + 72);
LABEL_62:
        v45 = v41 - 1;
        if ( v40 < v41 )
          v45 = (unsigned int)v45 - v40;
        ++v41;
        v43 = *(_QWORD *)(16LL * *(unsigned int *)(v17 + 20) + v17 + 8 * v45 + 80);
        *((_DWORD *)v24 + 2) = v41;
        if ( *(_DWORD *)(v43 + 8) <= 1u )
          goto LABEL_65;
      }
    }
    v18 = *(_BYTE *)(v17 + 6);
    if ( (v18 & 1) == 0 )
    {
      *(_BYTE *)(v17 + 6) = v18 | 1;
      v19 = v117;
      if ( (unsigned int)v117 >= HIDWORD(v117) )
      {
        v94 = (unsigned int)(2 * HIDWORD(v117));
        v95 = (char *)sub_186B270(8 * v94);
        v19 = v117;
        v96 = (char *)v116;
        v20 = v95;
        if ( (_DWORD)v117 )
        {
          if ( (unsigned int)(v117 - 1) <= 2 || v95 == (char *)v116 + 8 )
          {
            v106 = 0;
            v107 = 8LL * (unsigned int)v117;
            do
            {
              v20[v106 / 8] = *(_QWORD *)&v96[v106];
              v106 += 8LL;
            }
            while ( v106 != v107 );
          }
          else
          {
            v97 = 0;
            v98 = 16LL * ((unsigned int)v117 >> 1);
            do
            {
              *(__m128i *)&v20[v97 / 8] = _mm_loadu_si128((const __m128i *)&v96[v97]);
              v97 += 16LL;
            }
            while ( v98 != v97 );
            if ( (v19 & 1) != 0 )
              v20[v19 & 0xFFFFFFFE] = *(_QWORD *)&v96[8 * (v19 & 0xFFFFFFFE)];
          }
        }
        if ( v96 != v118 && v96 )
        {
          sub_186B220(v96);
          v19 = v117;
        }
        v116 = v20;
        HIDWORD(v117) = v94;
      }
      else
      {
        v20 = v116;
      }
      v20[v19] = v17;
      LODWORD(v117) = v19 + 1;
      goto LABEL_15;
    }
LABEL_113:
    ;
  }
  v72 = v116;
  v73 = (char *)v116 + 8 * (unsigned int)v117;
  v74 = v116 == v118 || v116 == nullptr;
  if ( v116 != v73 )
  {
    v75 = (char *)v116;
    do
    {
      v76 = *(_QWORD *)v75;
      v75 += 8;
      *(_BYTE *)(v76 + 6) &= ~1u;
    }
    while ( v73 != v75 );
  }
  LODWORD(v117) = 0;
  if ( !v74 )
    sub_186B220(v72);
  return 1.0;
}

