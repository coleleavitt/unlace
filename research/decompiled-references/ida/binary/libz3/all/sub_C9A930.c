__int64 __fastcall sub_C9A930(__int64 *a1, __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *exception; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  char v18; // al
  int v19; // edx
  __int64 *v20; // rbp
  __int64 *v21; // rbp
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  __int64 *v24; // r14
  unsigned int v25; // ebp
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // r15
  char v29; // al
  int v30; // edx
  _BYTE *v31; // r8
  unsigned __int16 v32; // ax
  _DWORD *v33; // rax
  int *v34; // rax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // edx
  unsigned int v39; // eax
  unsigned int v40; // esi
  __int64 v41; // r12
  char v42; // dl
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 *v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  int v48; // edx
  __int64 *v49; // rbp
  __int64 v50; // rdx
  __int64 *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbx
  char *v55; // rdi
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  char *v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // rdx
  _DWORD *v68; // rax
  _DWORD *v69; // rax
  int *v70; // rax
  int v71; // edx
  int v72; // eax
  __int64 v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // rax
  int v76; // edx
  __int64 *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _DWORD *v84; // rax
  __int64 v85; // rax
  _DWORD *v86; // rax
  __int64 v87; // rbx
  char *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 i; // [rsp+0h] [rbp-208h]
  _BYTE *v94; // [rsp+20h] [rbp-1E8h]
  __int64 v95; // [rsp+28h] [rbp-1E0h]
  __int64 *v96; // [rsp+30h] [rbp-1D8h]
  __int64 v97; // [rsp+38h] [rbp-1D0h]
  _BYTE v98[128]; // [rsp+40h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-148h]
  __int64 v100; // [rsp+C8h] [rbp-140h]
  __int64 v101; // [rsp+D0h] [rbp-138h] BYREF
  int v102; // [rsp+D8h] [rbp-130h]

  v12 = a1[9];
  v96 = (__int64 *)v98;
  v97 = 0x1000000000LL;
  if ( !v12 )
    return 0;
  v14 = *(_BYTE *)(v12 + 3) >> 6;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
LABEL_4:
      if ( v14 == 2 )
        v15 = (unsigned int)(*(_DWORD *)(v12 + 4) - 1);
      else
        v15 = *(unsigned int *)(v12 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v12 = *(_QWORD *)(v12 + 16);
      v14 = *(_BYTE *)(v12 + 3) >> 6;
    }
    while ( !v14 );
    if ( v14 != 1 )
      goto LABEL_4;
  }
  v15 = (unsigned int)(*(_DWORD *)(v12 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v15 )
    return 0;
  v95 = v15;
  for ( i = 0; i != v95; ++i )
  {
    v16 = *a1;
    if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    {
      v17 = *(_QWORD *)(v16 + 864);
      goto LABEL_10;
    }
    v75 = a1[9];
    v76 = 17;
    while ( 1 )
    {
      if ( *(char *)(v75 + 3) < 0 )
      {
        if ( *(_BYTE *)(v75 + 3) >> 6 != 2 )
        {
          v77 = (__int64 *)(*(_QWORD *)(v75 + 16) + 8 * i);
          goto LABEL_151;
        }
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v75 + 4) == (_DWORD)i )
        break;
LABEL_153:
      v75 = *(_QWORD *)(v75 + 16);
      if ( !--v76 )
      {
        sub_233F80((__int64 *)(v16 + 616), (_DWORD *)a1 + 18);
        v77 = (__int64 *)(*(_QWORD *)(a1[9] + 16) + 8 * i);
        goto LABEL_151;
      }
    }
    v77 = (__int64 *)(v75 + 8);
LABEL_151:
    v17 = *v77;
LABEL_10:
    if ( *(_DWORD *)(v17 + 8) <= 1u )
    {
LABEL_15:
      v21 = &v101;
      v101 = v17;
      ptr = &v101;
      v102 = 0;
      v100 = 0x1000000001LL;
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
            sub_161DF4();
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
                LODWORD(v22) = v100 - 1;
                goto LABEL_45;
              }
            }
            *(_BYTE *)(v28 + 6) = v29 | 1;
            v30 = v97;
            if ( (unsigned int)v97 >= HIDWORD(v97) )
            {
              v52 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v97)));
              v30 = v97;
              v31 = (_BYTE *)v52;
              if ( (_DWORD)v97 )
              {
                if ( (unsigned int)(v97 - 1) <= 2 || (__int64 *)v52 == v96 + 1 )
                {
                  v78 = 0;
                  do
                  {
                    *(_QWORD *)&v31[v78 * 8] = v96[v78];
                    ++v78;
                  }
                  while ( (unsigned int)v97 != v78 );
                }
                else
                {
                  v53 = 0;
                  do
                  {
                    *(__m128i *)&v31[v53 * 8] = _mm_loadu_si128((const __m128i *)&v96[v53]);
                    v53 += 2;
                  }
                  while ( 2LL * ((unsigned int)v97 >> 1) != v53 );
                  if ( (v97 & 1) != 0 )
                    *(_QWORD *)&v31[8 * (v97 & 0xFFFFFFFE)] = v96[(unsigned int)v97 & 0xFFFFFFFE];
                }
              }
              if ( v96 != (__int64 *)v98 && v96 )
              {
                v94 = v31;
                sub_186B220(v96);
                v30 = v97;
                v31 = v94;
              }
              v96 = (__int64 *)v31;
              HIDWORD(v97) *= 2;
            }
            else
            {
              v31 = v96;
            }
            *(_QWORD *)&v31[8 * v30] = v28;
            LODWORD(v97) = v30 + 1;
LABEL_25:
            v32 = *(_WORD *)(v28 + 4);
            if ( v32 == 2 )
            {
              v50 = (unsigned int)v100;
              if ( (unsigned int)v100 >= HIDWORD(v100) )
              {
                v60 = (unsigned int)(2 * HIDWORD(v100));
                v21 = (__int64 *)sub_186B270(16 * v60);
                v61 = (char *)ptr;
                v62 = 0;
                v50 = (unsigned int)v100;
                v63 = 16LL * (unsigned int)v100;
                if ( (_DWORD)v100 )
                {
                  do
                  {
                    *(__m128i *)&v21[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                    v62 += 16LL;
                  }
                  while ( v63 != v62 );
                }
                if ( v61 != (char *)&v101 && v61 )
                {
                  sub_186B220(v61);
                  v50 = (unsigned int)v100;
                }
                ptr = v21;
                HIDWORD(v100) = v60;
              }
              else
              {
                v21 = (__int64 *)ptr;
              }
              v51 = &v21[2 * v50];
              *v51 = v28;
              *((_DWORD *)v51 + 2) = 0;
              v46 = (unsigned int)v100;
              v47 = v100 + 1;
              goto LABEL_64;
            }
            if ( v32 > 2u )
            {
              sub_1872CE0("");
              sub_1873130(114, 73);
            }
            if ( v32 )
              sub_161DF4();
            if ( *(_DWORD *)(v28 + 24) )
            {
              v80 = (unsigned int)v100;
              if ( (unsigned int)v100 >= HIDWORD(v100) )
              {
                v87 = (unsigned int)(2 * HIDWORD(v100));
                v21 = (__int64 *)sub_186B270(16 * v87);
                v88 = (char *)ptr;
                v89 = 0;
                v80 = (unsigned int)v100;
                v90 = 16LL * (unsigned int)v100;
                if ( (_DWORD)v100 )
                {
                  do
                  {
                    *(__m128i *)&v21[v89 / 8] = _mm_loadu_si128((const __m128i *)&v88[v89]);
                    v89 += 16LL;
                  }
                  while ( v90 != v89 );
                }
                if ( v88 != (char *)&v101 && v88 )
                {
                  sub_186B220(v88);
                  v80 = (unsigned int)v100;
                }
                ptr = v21;
                HIDWORD(v100) = v87;
              }
              else
              {
                v21 = (__int64 *)ptr;
              }
              v81 = &v21[2 * v80];
              *((_DWORD *)v81 + 2) = 0;
              v46 = (unsigned int)v100;
              *v81 = v28;
              v47 = v46 + 1;
              goto LABEL_64;
            }
            if ( !(unsigned __int8)sub_15D2CB0(*a2, v28) )
            {
              if ( *((_BYTE *)a2 + 24) )
              {
                v68 = *(_DWORD **)(sub_15D1F10(v28) + 24);
                if ( v68 )
                {
                  if ( *v68 == 5 && v68[1] == 1 )
                  {
                    v34 = *(int **)(*(_QWORD *)(v28 + 16) + 24LL);
                    if ( !v34 )
                    {
LABEL_124:
                      if ( *(_WORD *)(v28 + 4) || *(_DWORD *)(v28 + 24) )
                      {
LABEL_222:
                        exception = __cxa_allocate_exception(8u);
                        *exception = &off_1C74AB0;
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                          (void (*)(void *))sub_C984E0);
                      }
LABEL_42:
                      v26 = *((_DWORD *)v24 + 2);
                      goto LABEL_43;
                    }
LABEL_36:
                    v35 = *v34;
                    if ( *v34 )
                    {
                      if ( v35 == 5 )
                      {
                        v36 = v34[1];
                        if ( v36 == 9 )
                        {
                          if ( *(_DWORD *)(v28 + 24) != 2 )
                          {
                            v4 = __cxa_allocate_exception(8u);
                            *v4 = &off_1C74AB0;
                            __cxa_throw(
                              v4,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                              (void (*)(void *))sub_C984E0);
                          }
                          v73 = *(_QWORD *)(v28 + 32);
                          if ( *(_WORD *)(v73 + 4)
                            || (v74 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL)) == nullptr
                            || *v74 != 5
                            || v74[1] )
                          {
                            v6 = __cxa_allocate_exception(8u);
                            *v6 = &off_1C74AB0;
                            __cxa_throw(
                              v6,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                              (void (*)(void *))sub_C984E0);
                          }
                        }
                        else if ( v36 > 9 )
                        {
                          if ( v36 != 18 )
                            goto LABEL_212;
                          if ( !*((_BYTE *)a2 + 25) )
                          {
                            v8 = __cxa_allocate_exception(8u);
                            *v8 = &off_1C74AB0;
                            __cxa_throw(
                              v8,
                              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                              (void (*)(void *))sub_C984E0);
                          }
                        }
                        else if ( v36 && (unsigned int)(v36 - 2) > 4 )
                        {
LABEL_212:
                          v2 = __cxa_allocate_exception(8u);
                          *v2 = &off_1C74AB0;
                          __cxa_throw(
                            v2,
                            (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                            (void (*)(void *))sub_C984E0);
                        }
                      }
                      else if ( *(_WORD *)(v28 + 4) || *(_DWORD *)(v28 + 24) || v35 != -1 )
                      {
                        goto LABEL_222;
                      }
                    }
                    goto LABEL_42;
                  }
                }
              }
              if ( !*((_BYTE *)a2 + 25) || (v33 = *(_DWORD **)(sub_15D1F10(v28) + 24)) == nullptr || *v33 != 5 || v33[1] )
                sub_161D18();
            }
            v34 = *(int **)(*(_QWORD *)(v28 + 16) + 24LL);
            if ( !v34 )
              goto LABEL_124;
            goto LABEL_36;
          }
LABEL_45:
          v37 = *a2;
          LODWORD(v100) = v22;
          if ( !(unsigned __int8)sub_15D2CB0(v37, v17)
            && (!*((_BYTE *)a2 + 24)
             || (v69 = *(_DWORD **)(sub_15D1F10(v17) + 24)) == nullptr
             || *v69 != 5
             || v69[1] != 1)
            && (!*((_BYTE *)a2 + 25) || (v84 = *(_DWORD **)(sub_15D1F10(v17) + 24)) == nullptr || *v84 != 5 || v84[1]) )
          {
            sub_161D18();
          }
          v70 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
          if ( v70 )
          {
            v71 = *v70;
            if ( *v70 )
            {
              if ( v71 == 5 )
              {
                v72 = v70[1];
                if ( v72 == 9 )
                {
                  if ( *(_DWORD *)(v17 + 24) != 2 )
                  {
                    v5 = __cxa_allocate_exception(8u);
                    *v5 = &off_1C74AB0;
                    __cxa_throw(
                      v5,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                      (void (*)(void *))sub_C984E0);
                  }
                  v85 = *(_QWORD *)(v17 + 32);
                  if ( *(_WORD *)(v85 + 4)
                    || (v86 = *(_DWORD **)(*(_QWORD *)(v85 + 16) + 24LL)) == nullptr
                    || *v86 != 5
                    || v86[1] )
                  {
                    v11 = __cxa_allocate_exception(8u);
                    *v11 = &off_1C74AB0;
                    __cxa_throw(
                      v11,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                      (void (*)(void *))sub_C984E0);
                  }
                }
                else if ( v72 > 9 )
                {
                  if ( v72 != 18 )
                    goto LABEL_213;
                  if ( !*((_BYTE *)a2 + 25) )
                  {
                    v10 = __cxa_allocate_exception(8u);
                    *v10 = &off_1C74AB0;
                    __cxa_throw(
                      v10,
                      (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                      (void (*)(void *))sub_C984E0);
                  }
                }
                else if ( v72 && (unsigned int)(v72 - 2) > 4 )
                {
LABEL_213:
                  v3 = __cxa_allocate_exception(8u);
                  *v3 = &off_1C74AB0;
                  __cxa_throw(
                    v3,
                    (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
                    (void (*)(void *))sub_C984E0);
                }
              }
              else if ( *(_WORD *)(v17 + 4) || *(_DWORD *)(v17 + 24) || v71 != -1 )
              {
                goto LABEL_221;
              }
            }
          }
          else if ( *(_WORD *)(v17 + 4) || *(_DWORD *)(v17 + 24) )
          {
LABEL_221:
            v7 = __cxa_allocate_exception(8u);
            *v7 = &off_1C74AB0;
            __cxa_throw(
              v7,
              (struct type_info *)&`typeinfo for'`anonymous namespace'::is_non_qflira_functor::found,
              (void (*)(void *))sub_C984E0);
          }
          v21 = (__int64 *)ptr;
          if ( !(_DWORD)v100 )
          {
            if ( ptr && ptr != &v101 )
              sub_186B220(ptr);
            goto LABEL_113;
          }
          v22 = (unsigned int)(v100 - 1);
          v17 = *((_QWORD *)ptr + 2 * v22);
        }
        v38 = *(_DWORD *)(v17 + 72);
        v39 = *((_DWORD *)v24 + 2);
        v40 = v38 + *(_DWORD *)(v17 + 76) + 1;
        if ( v39 >= v40 )
          goto LABEL_220;
        if ( v39 )
          goto LABEL_58;
        v41 = *(_QWORD *)(v17 + 24);
        v39 = 1;
        *((_DWORD *)v24 + 2) = 1;
        if ( *(_DWORD *)(v41 + 8) > 1u )
          break;
LABEL_61:
        v44 = (unsigned int)v100;
        if ( (unsigned int)v100 >= HIDWORD(v100) )
        {
          v54 = (unsigned int)(2 * HIDWORD(v100));
          v21 = (__int64 *)sub_186B270(16 * v54);
          v55 = (char *)ptr;
          v56 = 0;
          v44 = (unsigned int)v100;
          v57 = 16LL * (unsigned int)v100;
          if ( (_DWORD)v100 )
          {
            do
            {
              *(__m128i *)&v21[v56 / 8] = _mm_loadu_si128((const __m128i *)&v55[v56]);
              v56 += 16LL;
            }
            while ( v56 != v57 );
          }
          if ( v55 && v55 != (char *)&v101 )
          {
            sub_186B220(v55);
            v44 = (unsigned int)v100;
          }
          ptr = v21;
          HIDWORD(v100) = v54;
        }
        else
        {
          v21 = (__int64 *)ptr;
        }
        v45 = &v21[2 * v44];
        *v45 = v41;
        *((_DWORD *)v45 + 2) = 0;
        v46 = (unsigned int)v100;
        v47 = v100 + 1;
LABEL_64:
        LODWORD(v100) = v47;
        LODWORD(v22) = v47 - 1;
        v17 = v21[2 * v46];
      }
      while ( 1 )
      {
        v42 = *(_BYTE *)(v41 + 6);
        if ( (v42 & 1) == 0 )
        {
          *(_BYTE *)(v41 + 6) = v42 | 1;
          v48 = v97;
          if ( (unsigned int)v97 >= HIDWORD(v97) )
          {
            v58 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v97)));
            v48 = v97;
            v49 = (__int64 *)v58;
            if ( (_DWORD)v97 )
            {
              if ( (unsigned int)(v97 - 1) <= 2 || (__int64 *)v58 == v96 + 1 )
              {
                v79 = 0;
                do
                {
                  v49[v79] = v96[v79];
                  ++v79;
                }
                while ( (unsigned int)v97 != v79 );
              }
              else
              {
                v59 = 0;
                do
                {
                  *(__m128i *)&v49[v59] = _mm_loadu_si128((const __m128i *)&v96[v59]);
                  v59 += 2;
                }
                while ( 2LL * ((unsigned int)v97 >> 1) != v59 );
                if ( (v97 & 1) != 0 )
                  v49[(unsigned int)v97 & 0xFFFFFFFE] = v96[(unsigned int)v97 & 0xFFFFFFFE];
              }
            }
            if ( v96 != (__int64 *)v98 && v96 )
            {
              sub_186B220(v96);
              v48 = v97;
            }
            v96 = v49;
            HIDWORD(v97) *= 2;
          }
          else
          {
            v49 = v96;
          }
          v49[v48] = v41;
          LODWORD(v97) = v48 + 1;
          goto LABEL_61;
        }
        if ( v39 >= v40 )
        {
LABEL_220:
          LODWORD(v100) = v100 - 1;
          sub_161DF4();
        }
        v38 = *(_DWORD *)(v17 + 72);
LABEL_58:
        v43 = v39 - 1;
        if ( v38 < v39 )
          v43 = (unsigned int)v43 - v38;
        ++v39;
        v41 = *(_QWORD *)(16LL * *(unsigned int *)(v17 + 20) + v17 + 8 * v43 + 80);
        *((_DWORD *)v24 + 2) = v39;
        if ( *(_DWORD *)(v41 + 8) <= 1u )
          goto LABEL_61;
      }
    }
    v18 = *(_BYTE *)(v17 + 6);
    if ( (v18 & 1) == 0 )
    {
      *(_BYTE *)(v17 + 6) = v18 | 1;
      v19 = v97;
      if ( (unsigned int)v97 >= HIDWORD(v97) )
      {
        v82 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v97)));
        v19 = v97;
        v20 = (__int64 *)v82;
        if ( (_DWORD)v97 )
        {
          if ( (unsigned int)(v97 - 1) <= 2 || (__int64 *)v82 == v96 + 1 )
          {
            v91 = 0;
            do
            {
              v20[v91] = v96[v91];
              ++v91;
            }
            while ( v91 != (unsigned int)v97 );
          }
          else
          {
            v83 = 0;
            do
            {
              *(__m128i *)&v20[v83] = _mm_loadu_si128((const __m128i *)&v96[v83]);
              v83 += 2;
            }
            while ( 2LL * ((unsigned int)v97 >> 1) != v83 );
            if ( (v97 & 1) != 0 )
              v20[(unsigned int)v97 & 0xFFFFFFFE] = v96[(unsigned int)v97 & 0xFFFFFFFE];
          }
        }
        if ( v96 != (__int64 *)v98 && v96 )
        {
          sub_186B220(v96);
          v19 = v97;
        }
        v96 = v20;
        HIDWORD(v97) *= 2;
      }
      else
      {
        v20 = v96;
      }
      v20[v19] = v17;
      LODWORD(v97) = v19 + 1;
      goto LABEL_15;
    }
LABEL_113:
    ;
  }
  v64 = &v96[(unsigned int)v97];
  if ( v96 != v64 )
  {
    v65 = v96;
    do
    {
      v66 = *v65++;
      *(_BYTE *)(v66 + 6) &= ~1u;
    }
    while ( v64 != v65 );
  }
  if ( v96 != (__int64 *)v98 && v96 != nullptr )
    sub_186B220(v96);
  return 0;
}

