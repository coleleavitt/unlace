__int64 __fastcall sub_AB2370(__int64 a1, double a2)
{
  char **exception; // rbp
  const char *v4; // rsi
  _BYTE *v5; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const char *v10; // rbp
  const char *v11; // r13
  void *v12; // rbx
  __int64 result; // rax
  __int64 *v14; // rbx
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rsi
  const char *v27; // rbp
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 *v49; // rbp
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  _QWORD *v54; // rbp
  int v55; // edx
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  _QWORD *v59; // rbp
  void *v60; // [rsp+0h] [rbp-468h] BYREF
  char *v61; // [rsp+8h] [rbp-460h]
  __int64 v62; // [rsp+10h] [rbp-458h] BYREF
  __int64 v63; // [rsp+18h] [rbp-450h]
  void *v64; // [rsp+20h] [rbp-448h] BYREF
  __int64 v65; // [rsp+28h] [rbp-440h]
  __int64 v66; // [rsp+30h] [rbp-438h] BYREF
  int v67; // [rsp+38h] [rbp-430h]
  void *v68; // [rsp+40h] [rbp-428h] BYREF
  __int64 v69; // [rsp+48h] [rbp-420h]
  __int64 v70; // [rsp+50h] [rbp-418h] BYREF
  int v71; // [rsp+58h] [rbp-410h]
  void *v72; // [rsp+60h] [rbp-408h] BYREF
  __int64 v73; // [rsp+68h] [rbp-400h]
  __int64 v74; // [rsp+70h] [rbp-3F8h] BYREF
  int v75; // [rsp+78h] [rbp-3F0h]
  void *v76; // [rsp+80h] [rbp-3E8h] BYREF
  __int64 v77; // [rsp+88h] [rbp-3E0h]
  __int64 v78; // [rsp+90h] [rbp-3D8h] BYREF
  int v79; // [rsp+98h] [rbp-3D0h]
  void *s1; // [rsp+A0h] [rbp-3C8h] BYREF
  char *v81; // [rsp+A8h] [rbp-3C0h]
  __int64 v82; // [rsp+B0h] [rbp-3B8h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-3B0h]
  void *v84[2]; // [rsp+C0h] [rbp-3A8h] BYREF
  _QWORD v85[2]; // [rsp+D0h] [rbp-398h] BYREF
  void *v86[2]; // [rsp+E0h] [rbp-388h] BYREF
  _QWORD v87[2]; // [rsp+F0h] [rbp-378h] BYREF
  void *v88[2]; // [rsp+100h] [rbp-368h] BYREF
  _QWORD v89[2]; // [rsp+110h] [rbp-358h] BYREF
  _BYTE v90[208]; // [rsp+120h] [rbp-348h] BYREF
  __int64 v91; // [rsp+1F0h] [rbp-278h]
  __int64 v92; // [rsp+1F8h] [rbp-270h]
  __int64 *v93; // [rsp+200h] [rbp-268h]
  __int64 (__fastcall **v94)(); // [rsp+240h] [rbp-228h]
  void *v95; // [rsp+258h] [rbp-210h]
  void *v96; // [rsp+270h] [rbp-1F8h]
  __int64 (__fastcall **v97)(); // [rsp+278h] [rbp-1F0h]
  void *v98; // [rsp+290h] [rbp-1D8h]
  void *v99; // [rsp+2A8h] [rbp-1C0h]
  _BYTE v100[16]; // [rsp+330h] [rbp-138h] BYREF
  _BYTE v101[16]; // [rsp+340h] [rbp-128h] BYREF
  __int64 v102; // [rsp+350h] [rbp-118h]
  int v103; // [rsp+358h] [rbp-110h]
  __int64 v104; // [rsp+378h] [rbp-F0h]
  __int64 v105; // [rsp+380h] [rbp-E8h]
  __int64 v106; // [rsp+388h] [rbp-E0h]
  __int64 v107; // [rsp+390h] [rbp-D8h]
  __int64 v108; // [rsp+398h] [rbp-D0h]
  __int64 v109; // [rsp+3A8h] [rbp-C0h]
  __int64 v110; // [rsp+3B0h] [rbp-B8h]
  void *v111; // [rsp+3C0h] [rbp-A8h]
  void *v112; // [rsp+3D8h] [rbp-90h]
  void *ptr; // [rsp+3F0h] [rbp-78h]
  __int64 v114; // [rsp+410h] [rbp-58h]
  __int64 v115; // [rsp+430h] [rbp-38h]

  v4 = *(const char **)(a1 + 8);
  v5 = v90;
  sub_15BAB00(v90, v4);
  if ( (unsigned int)sub_180B130(v90) <= 0x63 )
  {
LABEL_4:
    v10 = *(const char **)(a1 + 24);
    v11 = (const char *)(a1 + 24);
    if ( !v10 )
      goto LABEL_53;
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_186A530(a2) )
  {
    sub_186A4C0(a2);
    v5 = (_BYTE *)sub_180B150(v90, v4);
    v4 = "(smt.configuring)\n";
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v5, "(smt.configuring)\n");
    goto LABEL_4;
  }
  v5 = (_BYTE *)sub_180B150(v90, v4);
  v4 = "(smt.configuring)\n";
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = *(const char **)(a1 + 24);
  v11 = (const char *)(a1 + 24);
  if ( !v10 )
    goto LABEL_53;
LABEL_5:
  if ( ((unsigned __int8)v10 & 7) == 1 )
  {
    v4 = v11;
    sub_180CE20(
      (int)&v60,
      (int)v11,
      v6,
      v7,
      v8,
      v9,
      (int)v60,
      v61,
      v62,
      v63,
      (int)v64,
      v65,
      v66,
      v67,
      (int)v68,
      v69,
      v70,
      v71,
      (int)v72,
      v73,
      v74,
      v75,
      (int)v76,
      v77,
      v78,
      v79,
      (int)s1,
      v81,
      v82,
      v83);
    v5 = v60;
    if ( v61 == &byte_5 && *(_DWORD *)v60 == 1113540177 && *((_BYTE *)v60 + 4) == 86 )
    {
      if ( v60 != &v62 )
        operator delete(v60, v62 + 1);
      goto LABEL_7;
    }
    if ( v60 != &v62 )
    {
      v4 = (const char *)(v62 + 1);
      operator delete(v60, v62 + 1);
    }
    v10 = *(const char **)(a1 + 24);
    if ( !v10 )
      goto LABEL_53;
    if ( (*(_QWORD *)(a1 + 24) & 7LL) != 1 )
      goto LABEL_69;
    v4 = v11;
    sub_180CE20(
      (int)&v64,
      (int)v11,
      v28,
      v29,
      v30,
      v31,
      (int)v60,
      v61,
      v62,
      v63,
      (int)v64,
      v65,
      v66,
      v67,
      (int)v68,
      v69,
      v70,
      v71,
      (int)v72,
      v73,
      v74,
      v75,
      (int)v76,
      v77,
      v78,
      v79,
      (int)s1,
      v81,
      v82,
      v83);
    v5 = v64;
    if ( v65 == 8 )
    {
      if ( *(_QWORD *)v64 == 0x56424655415F4651LL )
      {
        if ( v64 != &v66 )
          operator delete(v64, v66 + 1);
        goto LABEL_70;
      }
      if ( v64 == &v66 )
      {
LABEL_79:
        v10 = *(const char **)(a1 + 24);
        if ( !v10 )
          goto LABEL_53;
        if ( (*(_QWORD *)(a1 + 24) & 7LL) == 1 )
        {
          v4 = v11;
          sub_180CE20(
            (int)&v68,
            (int)v11,
            v32,
            v33,
            v34,
            v35,
            (int)v60,
            v61,
            v62,
            v63,
            (int)v64,
            v65,
            v66,
            v67,
            (int)v68,
            v69,
            v70,
            v71,
            (int)v72,
            v73,
            v74,
            v75,
            (int)v76,
            v77,
            v78,
            v79,
            (int)s1,
            v81,
            v82,
            v83);
          v5 = v68;
          if ( v69 == 6 && *(_DWORD *)v68 == 1096762961 && *((_WORD *)v68 + 2) == 22082 )
          {
            if ( v68 != &v70 )
              operator delete(v68, v70 + 1);
            goto LABEL_70;
          }
          if ( v68 != &v70 )
          {
            v4 = (const char *)(v70 + 1);
            operator delete(v68, v70 + 1);
          }
          v10 = *(const char **)(a1 + 24);
          if ( !v10 )
            goto LABEL_53;
          if ( (*(_QWORD *)(a1 + 24) & 7LL) == 1 )
          {
            v4 = v11;
            sub_180CE20(
              (int)&v72,
              (int)v11,
              v36,
              v37,
              v38,
              v39,
              (int)v60,
              v61,
              v62,
              v63,
              (int)v64,
              v65,
              v66,
              v67,
              (int)v68,
              v69,
              v70,
              v71,
              (int)v72,
              v73,
              v74,
              v75,
              (int)v76,
              v77,
              v78,
              v79,
              (int)s1,
              v81,
              v82,
              v83);
            v5 = v72;
            if ( v73 == 7 && *(_DWORD *)v72 == 1432307281 && *(_DWORD *)((char *)v72 + 3) == 1447183957 )
            {
              if ( v72 != &v74 )
                operator delete(v72, v74 + 1);
              goto LABEL_70;
            }
            if ( v72 != &v74 )
            {
              v4 = (const char *)(v74 + 1);
              operator delete(v72, v74 + 1);
            }
            goto LABEL_53;
          }
LABEL_82:
          v4 = "QF_UFBV";
          v5 = v10;
          if ( !strcmp(v10, "QF_UFBV") )
            goto LABEL_70;
LABEL_53:
          if ( (unsigned int)sub_180B130(v5) > 0x63 )
          {
            if ( (unsigned __int8)sub_186A530(a2) )
            {
              sub_186A4C0(a2);
              v19 = sub_180B150(v5, v4);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v19, "(smt.collecting-features)\n");
            }
            else
            {
              sub_180B150(v5, v4);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          v20 = *(_QWORD *)a1;
          v72 = nullptr;
          sub_C0FF90(v20 + 216, &v72);
          if ( v72 )
            v21 = *((unsigned int *)v72 - 1);
          else
            v21 = 0;
          sub_15C0810(v90, v21);
          if ( (unsigned int)sub_180B130(v90) > 0x3E7 )
          {
            if ( (unsigned __int8)sub_186A530(a2) )
            {
              sub_186A4C0(a2);
              v26 = sub_180B150(v90, v21);
              sub_15BC430(v90, v26);
              sub_186A500(v90, v26);
            }
            else
            {
              v40 = sub_180B150(v90, v21);
              sub_15BC430(v90, v40);
            }
          }
          v27 = *(const char **)(a1 + 24);
          if ( !v27 )
            goto LABEL_138;
          if ( (*(_QWORD *)(a1 + 24) & 7LL) != 1 )
          {
            if ( !strcmp(*(const char **)(a1 + 24), "QF_UF") )
            {
LABEL_64:
              if ( v103 || v102 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)v88, "Benchmark constrains arithmetic, but specified logic does not support it.");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v88);
                sub_233E40((__int64)v88);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              sub_15B5820(*(_QWORD *)(a1 + 16));
              goto LABEL_67;
            }
LABEL_105:
            if ( !strcmp(v27, "QF_RDL") )
            {
LABEL_106:
              sub_AB1780((__int64 *)a1, (__int64)v90);
              goto LABEL_67;
            }
LABEL_124:
            if ( !strcmp(v27, "QF_IDL") )
            {
LABEL_125:
              sub_AB12F0((__int64 *)a1, (__int64)v90);
              goto LABEL_67;
            }
            if ( !strcmp(v27, "QF_UFIDL") )
              goto LABEL_131;
            goto LABEL_144;
          }
          sub_180CE20(
            (int)&v76,
            (int)v11,
            v22,
            v23,
            v24,
            v25,
            (int)v60,
            v61,
            v62,
            v63,
            (int)v64,
            v65,
            v66,
            v67,
            (int)v68,
            v69,
            v70,
            v71,
            (int)v72,
            v73,
            v74,
            v75,
            (int)v76,
            v77,
            v78,
            v79,
            (int)s1,
            v81,
            v82,
            v83);
          if ( v77 == 5 && *(_DWORD *)v76 == 1432307281 && *((_BYTE *)v76 + 4) == 70 )
          {
            if ( v76 != &v78 )
              operator delete(v76, v78 + 1);
            goto LABEL_64;
          }
          if ( v76 != &v78 )
            operator delete(v76, v78 + 1);
          v27 = *(const char **)(a1 + 24);
          if ( !v27 )
            goto LABEL_138;
          if ( (*(_QWORD *)(a1 + 24) & 7LL) != 1 )
            goto LABEL_105;
          sub_180CE20(
            (int)&s1,
            (int)v11,
            v41,
            v42,
            v43,
            v44,
            (int)v60,
            v61,
            v62,
            v63,
            (int)v64,
            v65,
            v66,
            v67,
            (int)v68,
            v69,
            v70,
            v71,
            (int)v72,
            v73,
            v74,
            v75,
            (int)v76,
            v77,
            v78,
            v79,
            (int)s1,
            v81,
            v82,
            v83);
          v49 = (__int64 *)s1;
          if ( v81 == &byte_6 )
          {
            if ( !memcmp(s1, "QF_RDL", 6u) )
            {
              if ( v49 != &v82 )
                operator delete(v49, v82 + 1);
              goto LABEL_106;
            }
            if ( v49 == &v82 )
            {
LABEL_122:
              v27 = *(const char **)(a1 + 24);
              if ( !v27 )
                goto LABEL_138;
              if ( (*(_QWORD *)(a1 + 24) & 7LL) != 1 )
                goto LABEL_124;
              sub_180CE20(
                (int)v84,
                (int)v11,
                v45,
                v46,
                v47,
                v48,
                (int)v60,
                v61,
                v62,
                v63,
                (int)v64,
                v65,
                v66,
                v67,
                (int)v68,
                v69,
                v70,
                v71,
                (int)v72,
                v73,
                v74,
                v75,
                (int)v76,
                v77,
                v78,
                v79,
                (int)s1,
                v81,
                v82,
                v83);
              v59 = v84[0];
              if ( v84[1] == &byte_6 )
              {
                if ( !memcmp(v84[0], "QF_IDL", 6u) )
                {
                  if ( v59 != v85 )
                    operator delete(v59, v85[0] + 1LL);
                  goto LABEL_125;
                }
                if ( v59 == v85 )
                {
LABEL_154:
                  v27 = *(const char **)(a1 + 24);
                  if ( !v27 )
                    goto LABEL_138;
                  if ( (*(_QWORD *)(a1 + 24) & 7LL) == 1 )
                  {
                    sub_180CE20(
                      (int)v86,
                      (int)v11,
                      v55,
                      v56,
                      v57,
                      v58,
                      (int)v60,
                      v61,
                      v62,
                      v63,
                      (int)v64,
                      v65,
                      v66,
                      v67,
                      (int)v68,
                      v69,
                      v70,
                      v71,
                      (int)v72,
                      v73,
                      v74,
                      v75,
                      (int)v76,
                      v77,
                      v78,
                      v79,
                      (int)s1,
                      v81,
                      v82,
                      v83);
                    if ( v86[1] != &byte_8 || *(_QWORD *)v86[0] != 0x4C444946555F4651LL )
                    {
                      if ( v86[0] != v87 )
                        operator delete(v86[0], v87[0] + 1LL);
                      v27 = *(const char **)(a1 + 24);
                      if ( !v27 )
                        goto LABEL_138;
LABEL_144:
                      if ( ((unsigned __int8)v27 & 7) == 1 )
                      {
                        sub_180CE20(
                          (int)v88,
                          (int)v11,
                          v50,
                          v51,
                          v52,
                          v53,
                          (int)v60,
                          v61,
                          v62,
                          v63,
                          (int)v64,
                          v65,
                          v66,
                          v67,
                          (int)v68,
                          v69,
                          v70,
                          v71,
                          (int)v72,
                          v73,
                          v74,
                          v75,
                          (int)v76,
                          v77,
                          v78,
                          v79,
                          (int)s1,
                          v81,
                          v82,
                          v83);
                        v54 = v88[0];
                        if ( v88[1] == &byte_6 && !memcmp(v88[0], "QF_LRA", 6u) )
                        {
                          if ( v54 != v89 )
                            operator delete(v54, v89[0] + 1LL);
                          goto LABEL_146;
                        }
                        if ( v54 != v89 )
                          operator delete(v54, v89[0] + 1LL);
LABEL_138:
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_LIA") )
                        {
                          sub_AB1700((__int64 *)a1, (__int64)v90);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_UFLIA") )
                        {
                          sub_AAF290((__int64 *)a1, (__int64)v90);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_UFLRA") )
                        {
                          sub_15B6090(*(_QWORD *)(a1 + 16));
                          sub_AADEA0((__int64 *)a1);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_AX") )
                        {
                          sub_15B6120(*(_QWORD *)(a1 + 16), v90);
                          sub_AAF350((__int64 *)a1);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_BVRE") )
                        {
                          sub_AAE950(a1);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"QF_AUFLIA") )
                        {
                          sub_AAF650((__int64 *)a1);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, "QF_S")
                          || (unsigned __int8)sub_2DD1C0((int)v11, "QF_SLIA") )
                        {
                          sub_AB0440(a1);
                          goto LABEL_67;
                        }
                        if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"AUFLIA") )
                        {
                          sub_AAFA00((__int64 *)a1, (__int64)v90);
                          goto LABEL_67;
                        }
                        if ( !(unsigned __int8)sub_2DD1C0((int)v11, (void *)"AUFLIRA")
                          && !(unsigned __int8)sub_2DD1C0((int)v11, (void *)"AUFNIRA") )
                        {
                          if ( (unsigned __int8)sub_2DD1C0((int)v11, "AUFLIA+")
                            || (unsigned __int8)sub_2DD1C0((int)v11, "AUFLIA-") )
                          {
                            goto LABEL_196;
                          }
                          if ( !(unsigned __int8)sub_2DD1C0((int)v11, "AUFLIRA+")
                            && !(unsigned __int8)sub_2DD1C0((int)v11, "AUFLIRA-")
                            && !(unsigned __int8)sub_2DD1C0((int)v11, "AUFNIRA+")
                            && !(unsigned __int8)sub_2DD1C0((int)v11, "AUFNIRA-") )
                          {
                            if ( !(unsigned __int8)sub_2DD1C0((int)v11, "UFNIA") )
                            {
                              if ( (unsigned __int8)sub_2DD1C0((int)v11, "QF_DT") )
                              {
                                sub_AAD750((__int64 *)a1);
                              }
                              else if ( (unsigned __int8)sub_2DD1C0((int)v11, (void *)"LRA") )
                              {
                                sub_15B62C0(*(_QWORD *)(a1 + 16));
                                sub_AADF10((__int64 *)a1);
                              }
                              else
                              {
                                sub_AB1A00(a1, v90);
                              }
LABEL_67:
                              if ( v72 )
                                sub_186B220((char *)v72 - 8);
                              goto LABEL_8;
                            }
LABEL_196:
                            sub_AAF6D0((__int64 *)a1, 1u);
                            goto LABEL_67;
                          }
                        }
                        sub_AAF720((__int64 *)a1, 1u);
                        goto LABEL_67;
                      }
LABEL_145:
                      if ( !strcmp(v27, "QF_LRA") )
                      {
LABEL_146:
                        sub_AB1680(a1, v90);
                        goto LABEL_67;
                      }
                      goto LABEL_138;
                    }
                    if ( v86[0] != v87 )
                      operator delete(v86[0], v87[0] + 1LL);
                  }
                  else if ( strcmp(*(const char **)(a1 + 24), "QF_UFIDL") )
                  {
                    goto LABEL_145;
                  }
LABEL_131:
                  sub_AAF030((__int64 *)a1, (__int64)v90);
                  goto LABEL_67;
                }
              }
              else if ( v84[0] == v85 )
              {
                goto LABEL_154;
              }
              operator delete(v59, v85[0] + 1LL);
              goto LABEL_154;
            }
          }
          else if ( s1 == &v82 )
          {
            goto LABEL_122;
          }
          operator delete(v49, v82 + 1);
          goto LABEL_122;
        }
LABEL_81:
        if ( !strcmp(v10, "QF_ABV") )
          goto LABEL_70;
        goto LABEL_82;
      }
    }
    else if ( v64 == &v66 )
    {
      goto LABEL_79;
    }
    v4 = (const char *)(v66 + 1);
    operator delete(v64, v66 + 1);
    goto LABEL_79;
  }
  if ( strcmp(v10, "QF_BV") )
  {
LABEL_69:
    if ( !strcmp(v10, "QF_AUFBV") )
    {
LABEL_70:
      sub_15B60E0(*(_QWORD *)(a1 + 16));
      sub_AAE7F0((__int64 *)a1);
      sub_AAF350((__int64 *)a1);
      goto LABEL_8;
    }
    goto LABEL_81;
  }
LABEL_7:
  sub_15B60B0(*(_QWORD *)(a1 + 16));
  sub_AAE7F0((__int64 *)a1);
LABEL_8:
  if ( v115 )
    sub_186B220((void *)(v115 - 8));
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v112 )
    sub_186B220(v112);
  if ( v111 )
    sub_186B220(v111);
  if ( v110 )
    sub_186B220((void *)(v110 - 8));
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  if ( v106 )
    sub_186B220((void *)(v106 - 8));
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  if ( v104 )
    sub_186B220((void *)(v104 - 8));
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v100);
  sub_182CBA0(v12, v101);
  v97 = &off_1C62200;
  if ( v99 )
    sub_186B220(v99);
  if ( v98 )
    sub_186B220(v98);
  result = (__int64)&off_1C62200;
  v94 = &off_1C62200;
  if ( v96 )
    result = sub_186B220(v96);
  if ( v95 )
    result = sub_186B220(v95);
  v14 = v93;
  if ( v93 )
  {
    result = *((unsigned int *)v93 - 1);
    v15 = (unsigned __int64)&v93[result];
    if ( (unsigned __int64)v93 >= v15 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = v92;
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_47;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_47:
    v14 = v93;
    if ( v93 )
LABEL_48:
      result = sub_186B220(v14 - 1);
  }
  if ( v91 )
    return sub_186B220((void *)(v91 - 8));
  return result;
}

