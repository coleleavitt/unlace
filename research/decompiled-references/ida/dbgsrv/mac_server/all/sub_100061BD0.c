/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061BD0
// Address: 0x0000000100061BD0

//----- (0000000100061BD0) ----------------------------------------------------
__int64 __fastcall sub_100061BD0(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 *a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned int a10)
{
  __int64 **v12; // rax
  __int64 **v13; // r12
  __int64 **v14; // r14
  char *v15; // r15
  __int64 v16; // rax
  __int64 *v17; // rsi
  int v18; // r13d
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned __int64 v26; // rsi
  size_t v27; // rdx
  size_t v28; // rdi
  unsigned __int64 v29; // r12
  size_t v30; // r14
  char *v31; // rax
  size_t v32; // rdx
  const void *v33; // r13
  size_t v34; // rdi
  unsigned __int64 v35; // r12
  size_t v36; // r14
  char *v37; // rax
  size_t v38; // r14
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  char *v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rsi
  int v46; // eax
  __int64 *v47; // rax
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // r15
  signed int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // r14
  unsigned int v54; // ecx
  int v55; // edx
  _BYTE *v56; // r15
  void *v57; // rdi
  size_t v58; // rdx
  __int64 *v59; // rax
  __int64 **v60; // r14
  __int64 **v61; // r13
  int v62; // eax
  char *v63; // r15
  __int64 *v64; // rsi
  char *v65; // rax
  char *v66; // rax
  __int64 *v67; // r14
  __int64 *v68; // r15
  int v69; // r12d
  int v70; // r14d
  __int64 *v71; // rcx
  __int64 *v72; // rax
  bool v73; // zf
  __int64 *v74; // rcx
  int v75; // eax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned __int64 v79; // r15
  __int64 v80; // r12
  __int64 v81; // rax
  _QWORD *v82; // rsi
  __int64 *v83; // rsi
  const char *v84; // r15
  size_t v85; // rax
  size_t v86; // r12
  unsigned __int64 v87; // r13
  _QWORD *v88; // rdi
  void *v89; // rax
  _QWORD *v92; // [rsp+8h] [rbp-138h]
  unsigned __int64 v93; // [rsp+10h] [rbp-130h]
  __int64 v94; // [rsp+10h] [rbp-130h]
  _QWORD *__src; // [rsp+18h] [rbp-128h]
  __int64 v97; // [rsp+20h] [rbp-120h]
  __int64 v98; // [rsp+28h] [rbp-118h]
  __int64 v100; // [rsp+30h] [rbp-110h]
  size_t __n; // [rsp+38h] [rbp-108h]
  size_t __na; // [rsp+38h] [rbp-108h]
  size_t __nb; // [rsp+38h] [rbp-108h]
  char *v104; // [rsp+40h] [rbp-100h]
  __int64 *v105; // [rsp+40h] [rbp-100h]
  __int128 v107; // [rsp+50h] [rbp-F0h] BYREF
  __int64 v108; // [rsp+60h] [rbp-E0h]
  __int128 v109; // [rsp+70h] [rbp-D0h] BYREF
  unsigned __int64 v110; // [rsp+80h] [rbp-C0h]
  __int64 **v111; // [rsp+90h] [rbp-B0h] BYREF
  __int128 v112; // [rsp+98h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-90h]
  _BYTE v115[56]; // [rsp+B8h] [rbp-88h] BYREF
  int v116; // [rsp+F0h] [rbp-50h] BYREF
  void *__dst[3]; // [rsp+F8h] [rbp-48h] BYREF

  v116 = -2;
  *(_OWORD *)&__dst[1] = 0;
  __dst[0] = (void *)-1LL;
  v12 = *(__int64 ***)(a1 + 312);
  if ( v12 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v12;
        if ( *((_DWORD *)v12 + 8) <= (signed int)a3 )
          break;
        v12 = (__int64 **)*v12;
        v13 = v14;
        if ( !*v14 )
          goto LABEL_8;
      }
      if ( *((_DWORD *)v12 + 8) >= (signed int)a3 )
        break;
      v12 = (__int64 **)v12[1];
      if ( !v12 )
      {
        v13 = v14 + 1;
        goto LABEL_8;
      }
    }
    v15 = (char *)v12;
  }
  else
  {
    v13 = (__int64 **)(a1 + 312);
    v14 = (__int64 **)(a1 + 312);
LABEL_8:
    v15 = (char *)operator new(0x40u);
    *((_DWORD *)v15 + 8) = a3;
    *(_OWORD *)(v15 + 40) = 0;
    *((_QWORD *)v15 + 7) = 0;
    *(_OWORD *)v15 = 0;
    *((_QWORD *)v15 + 2) = v14;
    *v13 = (__int64 *)v15;
    v16 = **(_QWORD **)(a1 + 304);
    v17 = (__int64 *)v15;
    if ( v16 )
    {
      *(_QWORD *)(a1 + 304) = v16;
      v17 = *v13;
    }
    sub_10000C830(*(__int64 **)(a1 + 312), v17);
    ++*(_QWORD *)(a1 + 320);
  }
  v104 = sub_100062B30((_QWORD *)v15 + 5);
  v92 = a6;
  v112 = 0;
  v111 = (__int64 **)&v112;
  v18 = 11;
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 7 )
    goto LABEL_152;
  v19 = *(_QWORD *)(a1 + 552);
  if ( !v19 )
    LODWORD(v19) = *(_DWORD *)(a1 + 648);
  v20 = (int)v19;
  v21 = v104;
  if ( *((_QWORD *)v104 + 1) != v20 )
  {
    LODWORD(v113) = -2;
    *(_OWORD *)v115 = 0;
    v114 = -1;
    sub_10005F910((__int64)v104, v20, (unsigned __int64)&v113);
    v21 = v104;
    if ( (int)v113 >= -1 )
    {
      if ( v114 )
      {
        *(_QWORD *)v115 = 0;
        qfree((void *)v114);
        v21 = v104;
      }
    }
  }
  v18 = 1;
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *(_QWORD *)v21,
         0) != 1 )
    goto LABEL_152;
  v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 456LL))(a1, v104);
  if ( v22 == -1 )
  {
    v18 = 2;
    goto LABEL_152;
  }
  v109 = 0;
  v110 = 0;
  v23 = v22;
  v24 = *(int *)(a1 + 244);
  v25 = (v92[1] + (int)v24 - 1) & -*(_DWORD *)(a1 + 244);
  v93 = v23;
  v26 = (v23 - (v25 + v24)) & 0xFFFFFFFFFFFFFFF0LL;
  *((_QWORD *)v104 + 4) = v26 + v25;
  v98 = v26;
  v18 = 4;
  if ( (unsigned __int8)relocate_relobj(v92, v26, 0) )
  {
    __src = v104 + 32;
    v27 = *(int *)(a1 + 244);
    if ( !*(_DWORD *)(a1 + 244) )
      goto LABEL_34;
    v28 = *((_QWORD *)&v109 + 1);
    v29 = v27 + *((_QWORD *)&v109 + 1);
    if ( __CFADD__(v27, *((_QWORD *)&v109 + 1)) )
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    if ( *((_QWORD *)&v109 + 1) >= v29 )
    {
      if ( *((_QWORD *)&v109 + 1) == v29 )
      {
LABEL_33:
        memcpy((void *)(v109 + v28), __src, v27);
LABEL_34:
        v32 = v92[1];
        if ( v32 )
        {
          v33 = (const void *)*v92;
          v34 = *((_QWORD *)&v109 + 1);
          v35 = v32 + *((_QWORD *)&v109 + 1);
          if ( __CFADD__(v32, *((_QWORD *)&v109 + 1)) )
            v35 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v109 + 1) >= v35 )
          {
            if ( *((_QWORD *)&v109 + 1) != v35 )
            {
              __nb = *((_QWORD *)&v109 + 1);
              v38 = v92[1];
              LOBYTE(v113) = 0;
              sub_10001CE90((__int64)&v109, v35, (unsigned __int8 *)&v113);
              v32 = v38;
              v34 = __nb;
            }
          }
          else
          {
            v36 = *((_QWORD *)&v109 + 1);
            __na = v92[1];
            v37 = (char *)v109;
            if ( v110 < v35 )
            {
              v37 = (char *)qvector_reserve((__int64)&v109, (void *)v109, v35, 1u);
              *(_QWORD *)&v109 = v37;
            }
            __bzero(&v37[*((_QWORD *)&v109 + 1)], v35 - *((_QWORD *)&v109 + 1));
            *((_QWORD *)&v109 + 1) = v35;
            v32 = __na;
            v34 = v36;
          }
          memcpy((void *)(v109 + v34), v33, v32);
        }
        v39 = *(int *)(a1 + 244) + v25;
        v40 = *((_QWORD *)&v109 + 1);
        if ( *((_QWORD *)&v109 + 1) >= v39 )
        {
          if ( *((_QWORD *)&v109 + 1) != v39 )
          {
            LOBYTE(v113) = 0;
            sub_10001CE90((__int64)&v109, v39, (unsigned __int8 *)&v113);
          }
        }
        else
        {
          v41 = (char *)v109;
          if ( v110 < v39 )
          {
            v41 = (char *)qvector_reserve((__int64)&v109, (void *)v109, v39, 1u);
            *(_QWORD *)&v109 = v41;
            v40 = *((_QWORD *)&v109 + 1);
          }
          __bzero(&v41[v40], v39 - v40);
          *((_QWORD *)&v109 + 1) = v39;
        }
        v42 = v26 - *(int *)(a1 + 244);
        *((_QWORD *)v104 + 3) = v42;
        v18 = 2;
        if ( v42 < v93 )
        {
          v43 = (*(__int64 (__fastcall **)(__int64, char *, __int64 ***, __int128 *))(*(_QWORD *)a1 + 448LL))(
                  a1,
                  v104,
                  &v111,
                  &v109);
          v44 = v43;
          v45 = v43 + *((_QWORD *)v104 + 3);
          *((_QWORD *)v104 + 3) = v45;
          v46 = DWORD2(v109) - v43;
          if ( v46 <= 0
            || (v18 = 5,
                (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
                  a1,
                  v45,
                  v109 + v44,
                  (unsigned int)v46,
                  0) == v46) )
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 312LL))(
              a1,
              0,
              4,
              *__src,
              0xFFFFFFFFLL);
            v47 = a5;
            if ( a5[1] )
            {
              v48 = 0;
              while ( 1 )
              {
                v49 = *v47;
                v94 = v48;
                v50 = 32 * v48;
                v51 = *(_DWORD *)(*v47 + v50);
                v18 = 3;
                if ( v51 == *(_DWORD *)(a1 + 652) || v51 == *(_DWORD *)(a1 + 656) )
                  goto LABEL_148;
                v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, (unsigned int)v51);
                v53 = v50 + v49;
                v54 = *(unsigned __int8 *)(v52 + 13);
                if ( v54 <= 0x12 )
                {
                  v55 = 294968;
                  if ( _bittest(&v55, v54) )
                    break;
                }
                if ( *(_QWORD *)(v53 + 16) > 8u || (*(_BYTE *)(v52 + 9) & 1) != 0 )
                {
                  if ( v116 >= -1 && __dst[0] )
                  {
                    __dst[1] = nullptr;
                    qfree(__dst[0]);
                  }
                  memset(__dst, 0, sizeof(__dst));
                  v116 = 0;
                  v56 = *(_BYTE **)(v53 + 16);
                  if ( !v56 )
                  {
LABEL_72:
                    v58 = 0;
                    v57 = nullptr;
                    goto LABEL_73;
                  }
LABEL_63:
                  __dst[0] = qvector_reserve((__int64)__dst, nullptr, *(_QWORD *)(v53 + 16), 1u);
                  __bzero((char *)__dst[1] + (unsigned __int64)__dst[0], v56 - (char *)__dst[1]);
                  __dst[1] = v56;
                  v57 = __dst[0];
                  v58 = *(_QWORD *)(v53 + 16);
LABEL_73:
                  memcpy(v57, *(const void **)(v53 + 8), v58);
                  goto LABEL_74;
                }
                sub_100062C60((__int64)&v116);
                memcpy(__dst, *(const void **)(v53 + 8), *(_QWORD *)(v53 + 16));
                if ( *(_DWORD *)(v53 + 4) )
                  __dst[0] = (char *)__dst[0] + v98;
LABEL_74:
                v59 = (__int64 *)v112;
                v60 = (__int64 **)&v112;
LABEL_76:
                v61 = v60;
                if ( v59 )
                {
                  while ( 1 )
                  {
                    v60 = (__int64 **)v59;
                    v62 = *((_DWORD *)v59 + 8);
                    if ( v51 < v62 )
                    {
                      v59 = *v60;
                      goto LABEL_76;
                    }
                    if ( v51 <= v62 )
                      break;
                    v59 = v60[1];
                    if ( !v59 )
                    {
                      v61 = v60 + 1;
                      goto LABEL_81;
                    }
                  }
                  v63 = (char *)v60;
                }
                else
                {
LABEL_81:
                  v63 = (char *)operator new(0x48u);
                  *((_DWORD *)v63 + 8) = v51;
                  *((_DWORD *)v63 + 10) = -2;
                  *(_OWORD *)(v63 + 56) = 0;
                  *((_QWORD *)v63 + 6) = -1;
                  *(_OWORD *)v63 = 0;
                  *((_QWORD *)v63 + 2) = v60;
                  *v61 = (__int64 *)v63;
                  v64 = (__int64 *)v63;
                  if ( *v111 )
                  {
                    v111 = (__int64 **)*v111;
                    v64 = *v61;
                  }
                  sub_10000C830((__int64 *)v112, v64);
                  ++*((_QWORD *)&v112 + 1);
                }
                sub_10005FB50((__int64)(v63 + 40), (__int64)&v116);
                v48 = v94 + 1;
                v47 = a5;
                if ( v94 + 1 >= (unsigned __int64)a5[1] )
                  goto LABEL_86;
              }
              if ( v116 >= -1 && __dst[0] )
              {
                __dst[1] = nullptr;
                qfree(__dst[0]);
              }
              memset(__dst, 0, sizeof(__dst));
              v116 = -1;
              v56 = *(_BYTE **)(v53 + 16);
              if ( !v56 )
                goto LABEL_72;
              goto LABEL_63;
            }
LABEL_86:
            sub_100062C60((__int64)&v116);
            __dst[0] = *((void **)v104 + 3);
            v65 = sub_100062CB0((__int64 **)&v111, (int *)(a1 + 652));
            sub_10005FB50((__int64)v65, (__int64)&v116);
            __dst[0] = a2;
            v66 = sub_100062CB0((__int64 **)&v111, (int *)(a1 + 656));
            sub_10005FB50((__int64)v66, (__int64)&v116);
            v67 = (__int64 *)v111;
            if ( v111 == (__int64 **)&v112 )
            {
LABEL_87:
              v18 = 0;
              if ( (a10 & 1) == 0 )
              {
                *(_BYTE *)(a1 + 184) = 1;
                v18 = 9;
                if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a1 + 168) == 1 )
                {
                  v97 = a1 + 168;
                  v68 = a9;
                  v113 = 0xFFFFFFFFLL;
                  v114 = -1;
                  v115[0] = 0;
                  memset(&v115[4], 0, 52);
                  if ( !a9 )
                    v68 = &v113;
                  v18 = 0;
                  if ( (a10 & 4) != 0 )
                  {
                    v69 = HIWORD(a10);
                    v70 = 1;
                    if ( a10 >= 0x10000 )
                      v100 = 1000000LL * (unsigned int)v69 + get_nsec_stamp();
                    else
                      LODWORD(v100) = 0;
                  }
                  else
                  {
                    v69 = 40;
                    LODWORD(v100) = 0;
                    v70 = 0;
                  }
                  v74 = a9;
                  if ( !a9 )
                    v74 = &v113;
                  v105 = v74;
                  while ( 1 )
                  {
                    do
                    {
                      if ( v70 )
                      {
                        if ( v70 == 2 )
                        {
                          if ( v69 <= 0 || (v69 = (int)(v100 - get_nsec_stamp()) / 1000000, v70 = 2, v69 <= 0) )
                          {
                            v70 = 2;
                            v18 = 12;
                            if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0) <= 0 )
                              goto LABEL_147;
                          }
                        }
                        else
                        {
                          v70 = 2;
                        }
                      }
                      v75 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 136LL))(
                              a1,
                              v68,
                              (unsigned int)v69);
                    }
                    while ( !v75 );
                    if ( v75 == -1 )
                    {
                      v18 = 8;
                      goto LABEL_147;
                    }
                    v76 = *((_DWORD *)v105 + 5) & 0xFFFFFFF;
                    if ( v76 == 4 )
                    {
                      if ( *((_DWORD *)v105 + 1) == a3 )
                      {
LABEL_126:
                        v98 = -1;
                        sub_10005B380(a1, (__int64)v68, 8u);
                        goto LABEL_147;
                      }
                    }
                    else if ( v76 == 2 )
                    {
                      goto LABEL_126;
                    }
                    if ( v18 == 12 )
                    {
                      sub_10005B380(a1, (__int64)v68, 0xAu);
                      set_debug_event_code((__int64)v68, 0);
                      v18 = 12;
                      set_debug_event_code(v97, 0);
                      goto LABEL_147;
                    }
                    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)a1 + 464LL))(
                           a1,
                           a3,
                           v68,
                           *__src) )
                    {
                      break;
                    }
                    if ( (*((_DWORD *)v105 + 5) & 0xFFFFFFF) == 7 )
                    {
                      if ( (a10 & 2) == 0 )
                      {
                        v83 = &v113;
                        if ( a9 )
                          v83 = a9;
                        sub_10001B130((__int64)a8, (__int64)(v83 + 5));
                      }
                      set_debug_event_code(v97, 0);
                      *(_BYTE *)(a1 + 184) = 1;
                      v18 = 10;
                      goto LABEL_147;
                    }
                    if ( (unsigned int)sub_10005B380(a1, (__int64)v68, 0xAu) )
                    {
                      v18 = 7;
                      goto LABEL_147;
                    }
                    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 168LL))(a1, v68);
                    set_debug_event_code((__int64)v68, 0);
                  }
                  set_debug_event_code(v97, 0);
                  if ( a4 <= 0
                    || (v18 = 5, v92[1] >= (unsigned __int64)(unsigned int)a4)
                    && (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
                         a1,
                         v98,
                         *v92,
                         (unsigned int)a4,
                         0) == a4 )
                  {
                    v18 = 0;
                    if ( a7 )
                    {
                      if ( a7[1] )
                      {
                        v107 = 0;
                        v108 = 0;
                        v77 = *(_QWORD *)(a1 + 552);
                        if ( !v77 )
                          LODWORD(v77) = *(_DWORD *)(a1 + 648);
                        sub_10005AB70((__int64)&v107, (int)v77);
                        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
                               a1,
                               a3,
                               0xFFFFFFFFLL,
                               v107,
                               0) <= 0 )
                        {
                          v18 = 1;
                        }
                        else
                        {
                          if ( a7[1] )
                          {
                            v78 = 16;
                            v79 = 0;
                            do
                            {
                              v80 = *a7;
                              v81 = 32LL * *(int *)(*a7 + v78 - 16);
                              v82 = (_QWORD *)(v107 + v81 + 8);
                              if ( *(int *)(v107 + v81) >= -1 )
                                v82 = (_QWORD *)*v82;
                              memcpy(*(void **)(v80 + v78 - 8), v82, *(_QWORD *)(v80 + v78));
                              *(_DWORD *)(v80 + v78 - 12) = 0;
                              ++v79;
                              v78 += 32;
                            }
                            while ( v79 < a7[1] );
                          }
                          v18 = 0;
                        }
                        sub_10000A1B0((char **)&v107);
                      }
                    }
                  }
LABEL_147:
                  free_debug_event((__int64)&v113);
                }
              }
            }
            else
            {
              while ( (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)a1 + 232LL))(
                        a1,
                        a3,
                        *((unsigned int *)v67 + 8),
                        v67 + 5,
                        0) == 1 )
              {
                v104[40] = 1;
                v71 = (__int64 *)v67[1];
                if ( v71 )
                {
                  do
                  {
                    v72 = v71;
                    v71 = (__int64 *)*v71;
                  }
                  while ( v71 );
                }
                else
                {
                  do
                  {
                    v72 = (__int64 *)v67[2];
                    v73 = *v72 == (_QWORD)v67;
                    v67 = v72;
                  }
                  while ( !v73 );
                }
                v67 = v72;
                if ( v72 == (__int64 *)&v112 )
                  goto LABEL_87;
              }
              v18 = 6;
            }
          }
        }
        goto LABEL_148;
      }
      __n = *((_QWORD *)&v109 + 1);
      v30 = *(int *)(a1 + 244);
      LOBYTE(v113) = 0;
      sub_10001CE90((__int64)&v109, v29, (unsigned __int8 *)&v113);
    }
    else
    {
      __n = *((_QWORD *)&v109 + 1);
      v30 = *(int *)(a1 + 244);
      v31 = (char *)v109;
      if ( v110 < v29 )
      {
        v31 = (char *)qvector_reserve((__int64)&v109, (void *)v109, v29, 1u);
        *(_QWORD *)&v109 = v31;
      }
      __bzero(&v31[*((_QWORD *)&v109 + 1)], v29 - *((_QWORD *)&v109 + 1));
      *((_QWORD *)&v109 + 1) = v29;
    }
    v27 = v30;
    v28 = __n;
    goto LABEL_33;
  }
LABEL_148:
  if ( (_QWORD)v109 )
  {
    *((_QWORD *)&v109 + 1) = 0;
    qfree((void *)v109);
  }
  if ( v18 )
  {
    if ( v18 == 10 )
    {
LABEL_157:
      v98 = -1;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, a3);
      goto LABEL_158;
    }
LABEL_152:
    v84 = off_1000A9CD0[v18];
    v85 = strlen(v84);
    if ( v85 )
    {
      v86 = v85;
      v87 = v85 + 1;
      v88 = a8;
      v89 = (void *)*a8;
      if ( a8[2] < v87 )
      {
        v89 = qvector_reserve((__int64)a8, (void *)*a8, v87, 1u);
        v88 = a8;
        *a8 = v89;
      }
      v88[1] = v87;
      memmove(v89, v84, v86);
      *(_BYTE *)(*v88 + v86) = 0;
    }
    else
    {
      a8[1] = 0;
    }
    goto LABEL_157;
  }
LABEL_158:
  sub_1000646D0((__int64)&v111, (int *)v112);
  if ( v116 >= -1 && __dst[0] )
  {
    __dst[1] = nullptr;
    qfree(__dst[0]);
  }
  return v98;
}
// 1000627B7: conditional instruction was optimized away because r13d.4==0
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A9CD0: using guessed type char *off_1000A9CD0[13];
