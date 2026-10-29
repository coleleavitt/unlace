__int64 __fastcall sub_CD5A60(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  const char *v19; // rsi
  char *v20; // rdi
  _BYTE *v21; // rax
  __int64 v22; // rdx
  char i; // al
  unsigned int v24; // r14d
  __int64 v25; // r15
  __int64 *v26; // rdi
  __int64 v27; // rdx
  char v28; // al
  unsigned int v29; // eax
  int v30; // eax
  __int64 *v31; // rcx
  char v32; // r8
  __int64 v33; // rax
  int v34; // edx
  unsigned int *v35; // r12
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // rax
  int v41; // edx
  unsigned int **v42; // rax
  __int64 v43; // rdi
  _QWORD *v45; // rax
  _QWORD *v46; // r13
  int v47; // eax
  _QWORD *v48; // rax
  unsigned int *v49; // rdx
  _QWORD *v50; // r13
  int v51; // eax
  __int64 v52; // rdx
  _BYTE *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r8
  unsigned int v57; // edx
  __int64 v58; // r10
  unsigned int v59; // eax
  unsigned int v60; // r9d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rdx
  _WORD *v64; // r8
  _DWORD *v65; // r8
  unsigned int v66; // edx
  __int64 v67; // r10
  unsigned int v68; // eax
  unsigned int v69; // r9d
  size_t v70; // rsi
  unsigned int *v71; // rax
  unsigned int v72; // esi
  char **v73; // rbp
  __int64 v74; // rdx
  char **exception; // rbp
  __int64 v76; // rdx
  int v77; // [rsp+0h] [rbp-118h]
  int v78; // [rsp+8h] [rbp-110h]
  __int64 v79; // [rsp+8h] [rbp-110h]
  __int64 v80; // [rsp+10h] [rbp-108h]
  int v81; // [rsp+18h] [rbp-100h]
  int v82; // [rsp+20h] [rbp-F8h]
  _BYTE *v83; // [rsp+20h] [rbp-F8h]
  unsigned int v84; // [rsp+20h] [rbp-F8h]
  int v85; // [rsp+28h] [rbp-F0h]
  unsigned int *v86; // [rsp+28h] [rbp-F0h]
  unsigned int v87; // [rsp+28h] [rbp-F0h]
  int v88; // [rsp+30h] [rbp-E8h]
  int v89; // [rsp+38h] [rbp-E0h]
  _WORD *v90; // [rsp+38h] [rbp-E0h]
  _DWORD *v91; // [rsp+38h] [rbp-E0h]
  int v92; // [rsp+40h] [rbp-D8h]
  __int64 v93; // [rsp+40h] [rbp-D8h]
  unsigned int v94; // [rsp+40h] [rbp-D8h]
  unsigned int v95; // [rsp+40h] [rbp-D8h]
  void *v96; // [rsp+48h] [rbp-D0h]
  __int64 v97; // [rsp+48h] [rbp-D0h]
  __int64 v98; // [rsp+48h] [rbp-D0h]
  int v99; // [rsp+50h] [rbp-C8h]
  int v100; // [rsp+50h] [rbp-C8h]
  unsigned int v101; // [rsp+54h] [rbp-C4h]
  unsigned int v102; // [rsp+54h] [rbp-C4h]
  __int64 v103; // [rsp+58h] [rbp-C0h]
  char v104[8]; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int *v105; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE *v106; // [rsp+78h] [rbp-A0h]
  __int64 v107[4]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v108[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v109; // [rsp+B0h] [rbp-68h]
  void *v110; // [rsp+B8h] [rbp-60h]
  __int64 v111; // [rsp+C8h] [rbp-50h]
  void *ptr; // [rsp+D0h] [rbp-48h]

  if ( !*(_DWORD *)(a1 + 588) && !*(_DWORD *)(a1 + 592) )
    goto LABEL_16;
  v5 = *(_QWORD **)(a1 + 576);
  v6 = 0;
  v7 = *(unsigned int *)(a1 + 584);
  v8 = v5;
  v9 = &v5[2 * v7];
  if ( v5 != v9 )
  {
    do
    {
      while ( *v8 )
      {
        *v8 = 0;
        v8 += 2;
        if ( v9 == v8 )
          goto LABEL_8;
      }
      v8 += 2;
      ++v6;
    }
    while ( v9 != v8 );
LABEL_8:
    if ( (unsigned int)v7 > 0x10 && 3 * (int)v7 < (unsigned int)(4 * v6) )
    {
      if ( v5 )
      {
        sub_186B220(v5);
        v10 = *(_DWORD *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = 0;
        v10 >>= 1;
        v11 = v10;
        *(_DWORD *)(a1 + 584) = v10;
        v12 = sub_186B270(16LL * v10);
        if ( !v10 )
        {
LABEL_14:
          *(_QWORD *)(a1 + 576) = v12;
          goto LABEL_15;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 576) = 0;
        v72 = (unsigned int)v7 >> 1;
        v11 = v72;
        *(_DWORD *)(a1 + 584) = v72;
        v12 = sub_186B270(16LL * v72);
      }
      v13 = (_QWORD *)v12;
      do
      {
        *v13 = 0;
        v13 += 2;
        *((_DWORD *)v13 - 2) = 0;
      }
      while ( v13 != (_QWORD *)(v12 + 16 * v11) );
      goto LABEL_14;
    }
  }
LABEL_15:
  *(_QWORD *)(a1 + 588) = 0;
LABEL_16:
  v14 = *(_QWORD **)(a1 + 608);
  if ( v14 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    if ( v14 >= v15 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 600);
          v18 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_23;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_23:
    v14 = *(_QWORD **)(a1 + 608);
    if ( v14 )
LABEL_24:
      *((_DWORD *)v14 - 1) = 0;
  }
  sub_EE1A60(a1 + 560, v77, v78, v80, v81, v82, v85, v88, v89, v92, v96, v99);
  *(_DWORD *)(a1 + 556) = 0;
  v19 = "ctx-simplify";
  v20 = v104;
  sub_EE4940(v104, "ctx-simplify", a2);
  if ( (*(_BYTE *)(a2 + 123) & 8) != 0 )
  {
    v21 = *(_BYTE **)a1;
    v22 = *(_QWORD *)(a2 + 72);
    v105 = nullptr;
    v106 = v21;
    if ( v22 )
    {
      for ( i = *(_BYTE *)(v22 + 3) >> 6; !i; i = *(_BYTE *)(v22 + 3) >> 6 )
        v22 = *(_QWORD *)(v22 + 16);
      if ( i == 1 )
        v100 = *(_DWORD *)(v22 + 4) + 1;
      else
        v100 = i == 2 ? *(_DWORD *)(v22 + 4) - 1 : *(_DWORD *)(v22 + 4);
      v79 = 0;
      v24 = 0;
      if ( v100 )
      {
        v25 = *(_QWORD *)(a2 + 88);
        v26 = *(__int64 **)a2;
        if ( !v25 )
          goto LABEL_44;
        v27 = *(_QWORD *)(a2 + 88);
        v28 = *(_BYTE *)(v25 + 3) >> 6;
        if ( !v28 )
          goto LABEL_65;
LABEL_34:
        if ( v28 != 1 )
        {
LABEL_35:
          if ( v28 == 2 )
            v29 = *(_DWORD *)(v27 + 4) - 1;
          else
            v29 = *(_DWORD *)(v27 + 4);
          if ( v24 >= v29 )
            goto LABEL_68;
LABEL_38:
          v30 = 18;
          while ( 1 )
          {
            if ( !--v30 )
            {
              sub_233F80(v26 + 77, (_DWORD *)(a2 + 88));
              v26 = *(__int64 **)a2;
              v31 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) + v79);
              goto LABEL_43;
            }
            if ( *(char *)(v25 + 3) >= 0 )
            {
              if ( v24 == *(_DWORD *)(v25 + 4) )
              {
                v31 = (__int64 *)(v25 + 8);
LABEL_43:
                v25 = *v31;
LABEL_44:
                v32 = *(_BYTE *)(a2 + 123);
                if ( (v32 & 0x10) == 0 )
                  goto LABEL_69;
LABEL_45:
                v33 = *(_QWORD *)(a2 + 104);
                v34 = 18;
                while ( --v34 )
                {
                  if ( *(char *)(v33 + 3) >= 0 )
                  {
                    if ( v24 == *(_DWORD *)(v33 + 4) )
                      goto LABEL_49;
                  }
                  else if ( *(_BYTE *)(v33 + 3) >> 6 != 2 )
                  {
                    goto LABEL_49;
                  }
                  v33 = *(_QWORD *)(v33 + 16);
                }
                sub_236900(v26 + 84, (__int64 *)(a2 + 104));
                v32 = *(_BYTE *)(a2 + 123);
                v26 = *(__int64 **)a2;
LABEL_49:
                if ( (v32 & 0x20) == 0 )
                  goto LABEL_70;
                goto LABEL_50;
              }
            }
            else if ( *(_BYTE *)(v25 + 3) >> 6 != 2 )
            {
              v31 = (__int64 *)(*(_QWORD *)(v25 + 16) + v79);
              goto LABEL_43;
            }
            v25 = *(_QWORD *)(v25 + 16);
          }
        }
        while ( 1 )
        {
          if ( v24 < *(_DWORD *)(v27 + 4) + 1 )
            goto LABEL_38;
LABEL_68:
          v32 = *(_BYTE *)(a2 + 123);
          v25 = 0;
          if ( (v32 & 0x10) != 0 )
            goto LABEL_45;
LABEL_69:
          if ( (v32 & 0x20) != 0 )
          {
LABEL_50:
            v35 = (unsigned int *)v26[108];
            goto LABEL_51;
          }
LABEL_70:
          v40 = *(_QWORD *)(a2 + 72);
          v41 = 18;
          while ( --v41 )
          {
            if ( *(char *)(v40 + 3) >= 0 )
            {
              if ( v24 == *(_DWORD *)(v40 + 4) )
              {
                v42 = (unsigned int **)(v40 + 8);
                goto LABEL_75;
              }
            }
            else if ( *(_BYTE *)(v40 + 3) >> 6 != 2 )
            {
              v42 = (unsigned int **)(*(_QWORD *)(v40 + 16) + v79);
              goto LABEL_75;
            }
            v40 = *(_QWORD *)(v40 + 16);
          }
          sub_233F80(v26 + 77, (_DWORD *)(a2 + 72));
          v42 = (unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + v79);
LABEL_75:
          v35 = *v42;
LABEL_51:
          *(_DWORD *)(a1 + 552) = 0;
          sub_CD2680(a1, v35, (__int64 *)&v105);
          if ( *(_BYTE *)(a1 + 640) )
          {
            v109 = 0;
            v110 = nullptr;
            v111 = 0;
            v108[0] = &off_1C62200;
            ptr = nullptr;
            v45 = (_QWORD *)sub_186B270(0x18u);
            v45[1] = v35;
            v46 = v45 + 1;
            v84 = 0;
            *v45 = 0x100000002LL;
            while ( 1 )
            {
              v47 = *((_DWORD *)v46 - 1);
              if ( !v47 )
                break;
              v63 = (unsigned int)(v47 - 1);
              v64 = (_WORD *)v46[v63];
              *((_DWORD *)v46 - 1) = v63;
              v90 = v64;
              if ( !(unsigned __int8)sub_15D37A0(v108, v64) )
              {
                sub_15D0A90(v108, v90, 1);
                v65 = v90;
                ++v84;
                if ( !v90[2] )
                {
                  v66 = 0;
                  do
                  {
                    if ( v66 >= v65[6] )
                      break;
                    v67 = *(_QWORD *)&v65[2 * v66 + 8];
                    v68 = *((_DWORD *)v46 - 1);
                    if ( v68 == *((_DWORD *)v46 - 2) )
                    {
                      v69 = (3 * v68 + 1) >> 1;
                      v70 = 8 * v69 + 8;
                      if ( 8 * v68 + 8 >= (unsigned int)v70 || v68 >= v69 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_163D96(v107, "Overflow encountered when expanding vector", v76);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v107);
                        sub_233E40((__int64)v107);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v102 = (3 * v68 + 1) >> 1;
                      v98 = *(_QWORD *)&v65[2 * v66 + 8];
                      v95 = v66;
                      v91 = v65;
                      v71 = (unsigned int *)sub_186B300(v46 - 1, v70);
                      v46 = v71 + 2;
                      v65 = v91;
                      v66 = v95;
                      v67 = v98;
                      *v71 = v102;
                      v68 = v71[1];
                    }
                    ++v66;
                    v46[v68] = v67;
                    *((_DWORD *)v46 - 1) = v68 + 1;
                  }
                  while ( !*((_WORD *)v65 + 2) );
                }
              }
            }
            sub_186B220(v46 - 1);
            v108[0] = &off_1C62200;
            if ( ptr )
              sub_186B220(ptr);
            if ( v110 )
              sub_186B220(v110);
            v109 = 0;
            v110 = nullptr;
            v86 = v105;
            v108[0] = &off_1C62200;
            v111 = 0;
            ptr = nullptr;
            v48 = (_QWORD *)sub_186B270(0x18u);
            v49 = v86;
            v50 = v48 + 1;
            v87 = 0;
            v48[1] = v49;
            *v48 = 0x100000002LL;
            while ( 1 )
            {
              v51 = *((_DWORD *)v50 - 1);
              if ( !v51 )
                break;
              v54 = (unsigned int)(v51 - 1);
              v55 = v50[v54];
              *((_DWORD *)v50 - 1) = v54;
              v93 = v55;
              if ( !(unsigned __int8)sub_15D37A0(v108, v55) )
              {
                sub_15D0A90(v108, v93, 1);
                v56 = v93;
                ++v87;
                if ( !*(_WORD *)(v93 + 4) )
                {
                  v57 = 0;
                  do
                  {
                    if ( v57 >= *(_DWORD *)(v56 + 24) )
                      break;
                    v58 = *(_QWORD *)(v56 + 8LL * v57 + 32);
                    v59 = *((_DWORD *)v50 - 1);
                    if ( v59 == *((_DWORD *)v50 - 2) )
                    {
                      v60 = (3 * v59 + 1) >> 1;
                      v61 = 8 * v60 + 8;
                      if ( 8 * v59 + 8 >= (unsigned int)v61 || v59 >= v60 )
                      {
                        v73 = (char **)__cxa_allocate_exception(0x28u);
                        sub_163D96(v107, "Overflow encountered when expanding vector", v74);
                        *v73 = (char *)off_1C63128;
                        sub_2333C0(v73 + 1, v107);
                        sub_233E40((__int64)v107);
                        __cxa_throw(
                          v73,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v103 = v56;
                      v101 = (3 * v59 + 1) >> 1;
                      v97 = *(_QWORD *)(v56 + 8LL * v57 + 32);
                      v94 = v57;
                      v62 = (unsigned int *)sub_186B300(v50 - 1, v61);
                      v50 = v62 + 2;
                      v57 = v94;
                      v58 = v97;
                      v56 = v103;
                      *v62 = v101;
                      v59 = v62[1];
                    }
                    ++v57;
                    v50[v59] = v58;
                    *((_DWORD *)v50 - 1) = v59 + 1;
                  }
                  while ( !*(_WORD *)(v56 + 4) );
                }
              }
            }
            sub_186B220(v50 - 1);
            v108[0] = &off_1C62200;
            if ( ptr )
              sub_186B220(ptr);
            if ( v110 )
              sub_186B220(v110);
            v52 = (__int64)v105;
            if ( v84 < v87 )
            {
              if ( v35 )
                ++v35[2];
              if ( v52 )
              {
                v53 = v106;
                v18 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v18 )
                  sub_15D7BC0(v53, v52);
              }
              v105 = v35;
            }
          }
          v83 = *(_BYTE **)a1;
          v36 = sub_15DE370(*(_QWORD *)a1);
          v37 = v36;
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v38 = sub_15DE0E0(*(_QWORD *)a1, v25, v36);
          v39 = v38;
          if ( v38 )
            ++*(_DWORD *)(v38 + 8);
          if ( v37 )
          {
            v18 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v83, v37);
          }
          sub_EDBFA0(a2);
          if ( v39 )
          {
            v18 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v83, v39);
          }
          v79 += 8;
          if ( v24 + 1 == v100 )
            break;
          v25 = *(_QWORD *)(a2 + 88);
          v26 = *(__int64 **)a2;
          ++v24;
          if ( !v25 )
            goto LABEL_44;
          v27 = *(_QWORD *)(a2 + 88);
          v28 = *(_BYTE *)(v25 + 3) >> 6;
          if ( v28 )
            goto LABEL_34;
          do
          {
LABEL_65:
            v27 = *(_QWORD *)(v27 + 16);
            v28 = *(_BYTE *)(v27 + 3) >> 6;
          }
          while ( !v28 );
          if ( v28 != 1 )
            goto LABEL_35;
        }
        v19 = (const char *)v105;
        v20 = v106;
        if ( v105 )
        {
          v18 = v105[2]-- == 1;
          if ( v18 )
            sub_15D7BC0(v20, v19);
        }
      }
    }
  }
  else
  {
    v19 = (const char *)a2;
    v20 = (char *)a1;
    sub_CD4EE0(a1, (__int64 *)a2);
  }
  if ( (unsigned int)sub_180B130(v20) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(v20, v19);
      std::__ostream_insert<char,std::char_traits<char>>();
      v43 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v43, ")\n");
    }
    else
    {
      sub_180B150(v20, v19);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return sub_EE4A00(v104);
}

