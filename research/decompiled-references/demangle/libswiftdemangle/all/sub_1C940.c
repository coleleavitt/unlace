char *__fastcall sub_1C940(_QWORD *a1, unsigned int a2, _DWORD a3, _DWORD a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int8 *v7; // rdx
  _QWORD *v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  _QWORD *v16; // rdi
  const char *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rax
  char v20; // bl
  _BYTE *v21; // rcx
  unsigned __int8 v22; // bl
  __int64 v23; // r14
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  char v26; // dl
  _QWORD *v27; // rbp
  std::string *v28; // rax
  std::string *v29; // rax
  const void **v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // r12d
  __int64 v35; // rsi
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  unsigned __int64 v40; // r13
  __int64 v41; // r12
  unsigned __int64 v42; // r14
  __int64 v43; // r13
  unsigned __int64 v44; // r14
  char *v45; // rax
  _QWORD *v46; // rdx
  _BYTE *v47; // rsi
  __int64 v48; // r12
  unsigned __int64 i; // r13
  _QWORD *v50; // rdi
  __int16 v51; // si
  void *v52; // r8
  _QWORD *v53; // rbp
  size_t v54; // r12
  char *v55; // rdi
  int v56; // edx
  __int64 v57; // rdx
  __int16 v58; // r14
  __int64 v59; // r13
  unsigned __int64 v60; // r12
  char *v61; // rax
  _QWORD *v62; // rdx
  __int64 v63; // rbx
  _QWORD *v64; // rdi
  __int16 v65; // si
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rsi
  char *v71; // rdi
  unsigned __int64 v72; // rax
  _QWORD *v73; // r15
  unsigned __int64 v74; // rax
  _QWORD *v75; // r15
  unsigned __int64 v76; // rax
  volatile signed __int32 *v77; // rdi
  int v78; // edx
  __int64 v79; // r13
  unsigned __int64 v80; // r12
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  unsigned __int64 v85; // r14
  __int64 v86; // r12
  unsigned __int64 v87; // r13
  _QWORD *v88; // rdi
  __int16 v89; // si
  __int64 v90; // rax
  _BYTE *v91; // rdx
  _QWORD *v92; // rdi
  unsigned __int8 *v93; // rdx
  __int64 v94; // r12
  _QWORD *v95; // rbp
  const void **v96; // rax
  const void *v97; // r14
  void *v98; // r8
  size_t v99; // r12
  const void **v100; // rax
  __int64 v101; // r12
  int v102; // r8d
  int v103; // r9d
  __int64 v104; // rax
  unsigned __int8 *v105; // rdx
  int v106; // ecx
  _BYTE *v107; // rdx
  int v108; // ecx
  int v109; // r8d
  int v110; // r9d
  unsigned __int64 j; // r15
  __int64 v112; // rax
  _QWORD *v113; // rdi
  __int64 v114; // rax
  unsigned __int8 *v115; // rdx
  __int16 v116; // r12
  __int64 v117; // r15
  unsigned __int64 v118; // r14
  unsigned __int64 v119; // r12
  unsigned __int64 v120; // r12
  char *v121; // r8
  char *v122; // rax
  unsigned __int64 v123; // r13
  size_t v124; // r13
  _QWORD *v125; // rax
  unsigned int v126; // esi
  unsigned __int8 *v127; // rdx
  __int64 v128; // r12
  unsigned __int8 v129; // cl
  char *v130; // r8
  unsigned __int64 v131; // r15
  size_t v132; // r15
  _QWORD *v133; // rax
  unsigned __int64 v134; // r15
  size_t v135; // r15
  _QWORD *v136; // rax
  unsigned __int64 v137; // rax
  _QWORD *v138; // r13
  unsigned __int64 v139; // rax
  _QWORD *v140; // r12
  std::string *v141; // rax
  std::string *v142; // rbp
  const void **v143; // rax
  _QWORD *v144; // r12
  std::string *v145; // rax
  std::string *v146; // rbp
  const void **v147; // rax
  int v148; // edx
  __int64 v149; // [rsp+0h] [rbp-68h]
  __int64 v150; // [rsp+8h] [rbp-60h]
  char v151; // [rsp+17h] [rbp-51h] BYREF
  volatile signed __int32 *v152; // [rsp+18h] [rbp-50h] BYREF
  char *v153[9]; // [rsp+20h] [rbp-48h] BYREF

  v153[1] = (char *)__readfsqword(0x28u);
  if ( a2 > 0x400 )
    return nullptr;
  v5 = a1[4];
  if ( !v5 )
    return nullptr;
  v7 = (unsigned __int8 *)a1[3];
  v9 = a1 + 3;
  v10 = *v7;
  a1[4] = v5 - 1;
  a1[3] = v7 + 1;
  if ( (_BYTE)v10 == 66 )
  {
    if ( v5 == 1 )
      return nullptr;
    v14 = v7[1];
    v15 = v5 - 2;
    a1[3] = v7 + 2;
    a1[4] = v15;
    switch ( v14 )
    {
      case 'b':
        v16 = (_QWORD *)a1[5];
        v17 = "Builtin.BridgeObject";
        return (char *)sub_C650(v16, 19, v17);
      case 'B':
        v16 = (_QWORD *)a1[5];
        v17 = "Builtin.UnsafeValueBuffer";
        return (char *)sub_C650(v16, 19, v17);
      case 'f':
        if ( !(unsigned __int8)sub_1ADF0((__int64)a1, &v152) )
          return nullptr;
        v95 = (_QWORD *)a1[5];
        v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
        std::string::append((std::string *)v153, "Builtin.FPIEEE", 0xEu);
        v96 = (const void **)sub_23B50((std::string *)v153);
        v97 = *v96;
        v98 = nullptr;
        v99 = *((_QWORD *)*v96 - 3);
        if ( !v99 )
          goto LABEL_123;
        v130 = (char *)v95[1];
        if ( !v130 || v95[2] < (unsigned __int64)&v130[v99] )
        {
          v131 = 2LL * v95[4];
          if ( v131 < v99 + 1 )
            v131 = v99 + 1;
          v95[4] = v131;
          v132 = v131 + 8;
          v133 = malloc(v132);
          v130 = (char *)(v133 + 1);
          *v133 = v95[3];
          v95[3] = v133;
          v95[1] = v133 + 1;
          v95[2] = (char *)v133 + v132;
        }
        break;
      case 'i':
        if ( !(unsigned __int8)sub_1ADF0((__int64)a1, &v152) )
          return nullptr;
        v95 = (_QWORD *)a1[5];
        v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
        std::string::append((std::string *)v153, "Builtin.Int", 0xBu);
        v100 = (const void **)sub_23B50((std::string *)v153);
        v97 = *v100;
        v98 = nullptr;
        v99 = *((_QWORD *)*v100 - 3);
        if ( !v99 )
        {
LABEL_123:
          v12 = sub_C510(v95, 19, (__int64)v98, v99);
          if ( (_QWORD *)v153[0] - 3 != &std::string::_Rep::_S_empty_rep_storage )
            sub_1AA80((__int64)(v153[0] - 24), (__int64)&v151);
          return (char *)v12;
        }
        v130 = (char *)v95[1];
        if ( !v130 || v95[2] < (unsigned __int64)&v130[v99] )
        {
          v134 = 2LL * v95[4];
          if ( v134 < v99 + 1 )
            v134 = v99 + 1;
          v95[4] = v134;
          v135 = v134 + 8;
          v136 = malloc(v135);
          v130 = (char *)(v136 + 1);
          *v136 = v95[3];
          v95[3] = v136;
          v95[1] = v136 + 1;
          v95[2] = (char *)v136 + v135;
        }
        break;
      case 'v':
        if ( !v15 )
          return nullptr;
        v18 = (char *)a1[3];
        v19 = v15 - 1;
        v20 = *v18;
        v21 = v18 + 1;
        a1[4] = v19;
        a1[3] = v21;
        v22 = v20 - 48;
        if ( v22 > 9u )
          return nullptr;
        v23 = (char)v22;
        if ( !v19 )
          return nullptr;
        while ( 1 )
        {
          v24 = *v21 - 48;
          if ( v24 > 9u )
            break;
          --v19;
          a1[3] = ++v21;
          v23 = (char)v24 + 10 * v23;
          a1[4] = v19;
          if ( !v19 )
            return nullptr;
        }
        v25 = a1[4];
        if ( !v25 || *v21 != 66 )
          return nullptr;
        a1[3] = v21 + 1;
        a1[4] = v25 - 1;
        if ( v25 == 1 )
          goto LABEL_37;
        v26 = v21[1];
        if ( v26 == 105 )
        {
          a1[3] = v21 + 2;
          v12 = 0;
          a1[4] = v25 - 2;
          if ( !(unsigned __int8)sub_1ADF0((__int64)a1, &v152) )
            return (char *)v12;
          v140 = (_QWORD *)a1[5];
          v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
          v141 = sub_1C540((std::string *)v153, "Builtin.Vec");
          v142 = (std::string *)sub_23B50(v141);
          std::string::append(v142, "xInt", 4u);
          v143 = (const void **)sub_23B50(v142);
          v31 = sub_BAC0(v140, 19, *v143, *((_QWORD *)*v143 - 3));
          goto LABEL_39;
        }
        if ( v26 == 102 )
        {
          a1[3] = v21 + 2;
          v12 = 0;
          a1[4] = v25 - 2;
          if ( !(unsigned __int8)sub_1ADF0((__int64)a1, &v152) )
            return (char *)v12;
          v144 = (_QWORD *)a1[5];
          v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
          v145 = sub_1C540((std::string *)v153, "Builtin.Vec");
          v146 = (std::string *)sub_23B50(v145);
          std::string::append(v146, "xFPIEEE", 7u);
          v147 = (const void **)sub_23B50(v146);
          v31 = sub_BAC0(v144, 19, *v147, *((_QWORD *)*v147 - 3));
        }
        else
        {
LABEL_37:
          if ( !(unsigned __int8)sub_1AB00(v9, 112) )
            return nullptr;
          v27 = (_QWORD *)a1[5];
          v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
          v28 = sub_1C540((std::string *)v153, "Builtin.Vec");
          v29 = (std::string *)sub_23B50(v28);
          v30 = (const void **)sub_1C540(v29, "xRawPointer");
          v31 = sub_BAC0(v27, 19, *v30, *((_QWORD *)*v30 - 3));
        }
LABEL_39:
        v12 = v31;
        std::string::~string((std::string *)v153);
        return (char *)v12;
      default:
        switch ( v14 )
        {
          case 'O':
            v16 = (_QWORD *)a1[5];
            v17 = "Builtin.UnknownObject";
            break;
          case 'o':
            v16 = (_QWORD *)a1[5];
            v17 = "Builtin.NativeObject";
            break;
          case 'p':
            v16 = (_QWORD *)a1[5];
            v17 = "Builtin.RawPointer";
            break;
          case 't':
            v16 = (_QWORD *)a1[5];
            v17 = "Builtin.SILToken";
            break;
          case 'w':
            v16 = (_QWORD *)a1[5];
            v17 = "Builtin.Word";
            break;
          default:
            return nullptr;
        }
        return (char *)sub_C650(v16, 19, v17);
    }
    v95[1] = &v130[v99];
    v98 = memmove(v130, v97, v99);
    goto LABEL_123;
  }
  switch ( (char)v10 )
  {
    case 'D':
      v48 = sub_1C940((_DWORD)a1, a2 + 1, (_DWORD)v7, v10, a5, (_DWORD)v9);
      if ( !v48 )
        return nullptr;
      i = sub_C400((_QWORD *)a1[5], 221);
      sub_C080(i, v48, (_QWORD *)a1[5]);
      if ( !i )
        return nullptr;
      v50 = (_QWORD *)a1[5];
      v51 = 54;
      goto LABEL_62;
    case 'E':
      if ( v5 == 1 )
        return nullptr;
      if ( v7[1] != 82 )
        return nullptr;
      a1[3] = v7 + 2;
      a1[4] = v5 - 2;
      if ( v5 == 2 || v7[2] != 82 )
        return nullptr;
      v52 = nullptr;
      a1[4] = v5 - 3;
      a1[3] = v7 + 3;
      v53 = (_QWORD *)a1[5];
      v153[0] = (char *)(&std::string::_Rep::_S_empty_rep_storage + 3);
      v54 = std::string::_Rep::_S_empty_rep_storage;
      if ( std::string::_Rep::_S_empty_rep_storage )
      {
        v121 = (char *)v53[1];
        if ( !v121
          || (v122 = &v121[std::string::_Rep::_S_empty_rep_storage],
              (unsigned __int64)&v121[std::string::_Rep::_S_empty_rep_storage] > v53[2]) )
        {
          v123 = 2LL * v53[4];
          if ( v123 < std::string::_Rep::_S_empty_rep_storage + 1LL )
            v123 = std::string::_Rep::_S_empty_rep_storage + 1LL;
          v53[4] = v123;
          v124 = v123 + 8;
          v125 = malloc(v124);
          v121 = (char *)(v125 + 1);
          *v125 = v53[3];
          v53[3] = v125;
          v53[2] = (char *)v125 + v124;
          v122 = (char *)v125 + v54 + 8;
        }
        v53[1] = v122;
        v52 = memmove(v121, &std::string::_Rep::_S_empty_rep_storage + 3, v54);
      }
      v12 = sub_C510(v53, 60, (__int64)v52, v54);
      v55 = v153[0] - 24;
      if ( (_QWORD *)v153[0] - 3 != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v56 = _InterlockedExchangeAdd((volatile signed __int32 *)v153[0] - 2, 0xFFFFFFFF);
        }
        else
        {
          v56 = *((_DWORD *)v153[0] - 2);
          *((_DWORD *)v153[0] - 2) = v56 - 1;
        }
        if ( v56 <= 0 )
          std::string::_Rep::_M_destroy(v55, &v152);
      }
      return (char *)v12;
    case 'F':
      v32 = a2 + 1;
      v33 = 79;
      return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
    case 'G':
      v34 = a2 + 2;
      v35 = sub_1FBC0((int)a1);
      if ( !v35 )
        return nullptr;
      return (char *)sub_1E130(a1, v35, v34);
    case 'X':
      if ( v5 == 1 )
        goto LABEL_113;
      v10 = v7[1];
      if ( (_BYTE)v10 == 98 )
      {
        v93 = v7 + 2;
        a1[3] = v93;
        a1[4] = v5 - 2;
        v94 = sub_1C940((_DWORD)a1, a2 + 1, (_DWORD)v93, v10, a5, (_DWORD)v9);
        if ( v94 )
        {
          i = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(i, v94, (_QWORD *)a1[5]);
          if ( i )
          {
            v50 = (_QWORD *)a1[5];
            v51 = 199;
            goto LABEL_62;
          }
        }
        return nullptr;
      }
      if ( (_BYTE)v10 == 66 )
      {
        a1[3] = v7 + 2;
        a1[4] = v5 - 2;
        if ( v5 == 2 || v7[2] != 71 )
        {
          v149 = 0;
        }
        else
        {
          a1[3] = v7 + 3;
          a1[4] = v5 - 3;
          v149 = sub_1E7C0((int)a1);
          if ( !v149 )
            return nullptr;
        }
        for ( i = sub_C400((_QWORD *)a1[5], 201); ; sub_C080(i, v119, (_QWORD *)a1[5]) )
        {
          v104 = a1[4];
          if ( !v104 )
            return nullptr;
          v105 = (unsigned __int8 *)a1[3];
          v106 = *v105;
          if ( (_BYTE)v106 == 95 )
            break;
          if ( (_BYTE)v106 == 109 )
          {
            v114 = v104 - 1;
            v115 = v105 + 1;
            v116 = 202;
          }
          else
          {
            if ( (_BYTE)v106 != 105 )
              return nullptr;
            v114 = v104 - 1;
            v115 = v105 + 1;
            v116 = 203;
          }
          a1[3] = v115;
          a1[4] = v114;
          v117 = sub_1C940((_DWORD)a1, a2 + 1, (_DWORD)v115, v106, v102, v103);
          if ( !v117 )
            return nullptr;
          v118 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v118, v117, (_QWORD *)a1[5]);
          if ( !v118 )
            return nullptr;
          v119 = sub_C400((_QWORD *)a1[5], v116);
          sub_C080(v119, v118, (_QWORD *)a1[5]);
        }
        v50 = (_QWORD *)a1[5];
        a1[3] = v105 + 1;
        a1[4] = v104 - 1;
        if ( !v149 )
        {
          v51 = 200;
          goto LABEL_62;
        }
        for ( j = sub_C400(v50, 224); ; sub_C080(j, v120, (_QWORD *)a1[5]) )
        {
          v112 = a1[4];
          if ( v112 )
          {
            v107 = (_BYTE *)a1[3];
            if ( *v107 == 95 )
            {
              v113 = (_QWORD *)a1[5];
              a1[3] = v107 + 1;
              a1[4] = v112 - 1;
              v12 = sub_C400(v113, 200);
              sub_C080(v12, i, (_QWORD *)a1[5]);
              sub_C080(v12, v149, (_QWORD *)a1[5]);
              sub_C080(v12, j, (_QWORD *)a1[5]);
              return (char *)v12;
            }
          }
          v150 = sub_1C940((_DWORD)a1, a2 + 1, (_DWORD)v107, v108, v109, v110);
          if ( !v150 )
            break;
          v120 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v120, v150, (_QWORD *)a1[5]);
          if ( !v120 )
            break;
        }
        return nullptr;
      }
      if ( v7[1] == 77 )
      {
        a1[3] = v7 + 2;
        a1[4] = v5 - 2;
        v40 = sub_1AD50((__int64)a1);
        if ( v40 )
        {
          v41 = sub_1C940((_DWORD)a1, a2 + 1, v36, v37, v38, v39);
          if ( v41 )
          {
            v42 = sub_C400((_QWORD *)a1[5], 221);
            sub_C080(v42, v41, (_QWORD *)a1[5]);
            if ( v42 )
            {
              v12 = sub_C400((_QWORD *)a1[5], 135);
              sub_C080(v12, v40, (_QWORD *)a1[5]);
              sub_C080(v12, v42, (_QWORD *)a1[5]);
              return (char *)v12;
            }
          }
        }
        return nullptr;
      }
      if ( v7[1] == 80 )
      {
        a1[3] = v7 + 2;
        a1[4] = v5 - 2;
        if ( v5 == 2 || v7[2] != 77 )
          return (char *)sub_1F370((int)a1);
        a1[3] = v7 + 3;
        a1[4] = v5 - 3;
        v85 = sub_1AD50((__int64)a1);
        if ( !v85 )
          return nullptr;
        v87 = sub_1DF70(a1, a2 + 1);
        if ( !v87 )
          return nullptr;
        v88 = (_QWORD *)a1[5];
        v89 = 66;
LABEL_100:
        v12 = sub_C400(v88, v89);
        sub_C080(v12, v85, (_QWORD *)a1[5]);
        sub_C080(v12, v87, (_QWORD *)a1[5]);
        return (char *)v12;
      }
LABEL_174:
      if ( v7[1] == 102 )
      {
        v33 = 211;
        a1[3] = v7 + 2;
        v32 = a2 + 1;
        a1[4] = v5 - 2;
        return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
      }
LABEL_113:
      v92 = a1 + 3;
      if ( (unsigned __int8)sub_1AB00(v9, 111) )
      {
        i = sub_1DF70(a1, a2 + 1);
        if ( !i )
          return nullptr;
        v50 = (_QWORD *)a1[5];
        v51 = 237;
        goto LABEL_62;
      }
      if ( (unsigned __int8)sub_1AB00(v92, 117) )
      {
        i = sub_1DF70(a1, a2 + 1);
        if ( !i )
          return nullptr;
        v50 = (_QWORD *)a1[5];
        v51 = 238;
        goto LABEL_62;
      }
      if ( (unsigned __int8)sub_1AB00(v92, 119) )
      {
        i = sub_1DF70(a1, a2 + 1);
        if ( !i )
          return nullptr;
        v50 = (_QWORD *)a1[5];
        v51 = 236;
        goto LABEL_62;
      }
      if ( !(unsigned __int8)sub_1AB00(v92, 70) )
        return nullptr;
      return (char *)sub_20680((int)a1);
    case 'a':
      v43 = sub_1F0C0(a1, a2 + 2, v7, v10, a5, v9);
      if ( !v43 )
        return nullptr;
      v44 = sub_1B760((__int64)a1);
      if ( !v44 )
        return nullptr;
      v45 = (char *)sub_C400((_QWORD *)a1[5], 223);
      v46 = (_QWORD *)a1[5];
      v12 = (__int64)v45;
      v153[0] = v45;
      sub_C080((__int64)v45, v43, v46);
      sub_C080(v12, v44, (_QWORD *)a1[5]);
      v47 = (_BYTE *)a1[1];
      if ( v47 == (_BYTE *)a1[2] )
      {
LABEL_167:
        sub_18710((__int64)a1, v47, v153);
        return v153[0];
      }
      else
      {
        *(_QWORD *)v47 = v12;
        a1[1] += 8LL;
      }
      return (char *)v12;
    case 'b':
      v32 = a2 + 1;
      v33 = 155;
      return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
    case 'c':
      v32 = a2 + 1;
      v33 = 20;
      return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
    case 'f':
      v32 = a2 + 1;
      v33 = 234;
      return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
    default:
      switch ( (_BYTE)v10 )
      {
        case 'K':
          v32 = a2 + 1;
          v33 = 11;
          return (char *)sub_1E370(a1, v33, v32, v10, a5, v9);
        case 'M':
          v101 = sub_1C940((_DWORD)a1, a2 + 1, (_DWORD)v7, v10, a5, (_DWORD)v9);
          if ( v101 )
          {
            i = sub_C400((_QWORD *)a1[5], 221);
            sub_C080(i, v101, (_QWORD *)a1[5]);
            if ( i )
            {
              v50 = (_QWORD *)a1[5];
              v51 = 135;
LABEL_62:
              v12 = sub_C400(v50, v51);
              sub_C080(v12, i, (_QWORD *)a1[5]);
              return (char *)v12;
            }
          }
          return nullptr;
        case 'P':
          v126 = a2 + 1;
          if ( v5 == 1 || v7[1] != 77 )
            return (char *)sub_1F370((int)a1);
          v127 = v7 + 2;
          a1[3] = v127;
          a1[4] = v5 - 2;
          v128 = sub_1C940((_DWORD)a1, v126, (_DWORD)v127, v10, a5, (_DWORD)v9);
          if ( v128 )
          {
            i = sub_C400((_QWORD *)a1[5], 221);
            sub_C080(i, v128, (_QWORD *)a1[5]);
            if ( i )
            {
              v50 = (_QWORD *)a1[5];
              v51 = 66;
              goto LABEL_62;
            }
          }
          return nullptr;
      }
      if ( (_BYTE)v10 != 81 )
      {
        switch ( (char)v10 )
        {
          case 'R':
            v64 = (_QWORD *)a1[5];
            v65 = 117;
            goto LABEL_85;
          case 'S':
            return (char *)sub_1BFA0(a1);
          case 'T':
          case 't':
            return (char *)sub_1DFC0((int)a1);
          case 'W':
            v12 = sub_1B000((__int64)a1);
            if ( !v12 )
              return nullptr;
            break;
          case 'X':
            if ( v5 == 1 )
              goto LABEL_113;
            goto LABEL_174;
          case 'k':
            v64 = (_QWORD *)a1[5];
            v65 = 314;
LABEL_85:
            v12 = sub_C400(v64, v65);
            v70 = sub_1C940((_DWORD)a1, a2 + 1, v66, v67, v68, v69);
            if ( !v70 )
              return nullptr;
            sub_C080(v12, v70, (_QWORD *)a1[5]);
            return (char *)v12;
          case 'q':
            if ( v5 == 1 )
              return nullptr;
            if ( (unsigned __int8)(v7[1] - 48) <= 0x34u && (((__int64)0xFFEF7FFFFFFFFC00LL >> (v7[1] - 48)) & 1) == 0 )
              return (char *)sub_1B000((__int64)a1);
            if ( sub_1DF70(a1, a2 + 2) )
              return (char *)sub_1F950((int)a1);
            return nullptr;
          case 'u':
            v85 = sub_1E7C0((int)a1);
            if ( !v85 )
              return nullptr;
            v86 = sub_1C940((_DWORD)a1, a2 + 1, v81, v82, v83, v84);
            if ( !v86 )
              return nullptr;
            v87 = sub_C400((_QWORD *)a1[5], 221);
            sub_C080(v87, v86, (_QWORD *)a1[5]);
            if ( !v87 )
              return nullptr;
            v88 = (_QWORD *)a1[5];
            v89 = 41;
            goto LABEL_100;
          case 'w':
            v79 = sub_1B000((__int64)a1);
            if ( !v79 )
              return nullptr;
            v80 = sub_C400((_QWORD *)a1[5], 221);
            sub_C080(v80, v79, (_QWORD *)a1[5]);
            return (char *)sub_1F950((int)a1);
          case 'x':
            v152 = (volatile signed __int32 *)(&std::string::_Rep::_S_empty_rep_storage + 3);
            sub_237A0(v153, 0, 0);
            std::string::append((std::string *)&v152, v153[0], *((_QWORD *)v153[0] - 3));
            v71 = v153[0] - 24;
            if ( (_QWORD *)v153[0] - 3 != &std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create )
              {
                v148 = _InterlockedExchangeAdd((volatile signed __int32 *)v153[0] - 2, 0xFFFFFFFF);
              }
              else
              {
                v148 = *((_DWORD *)v153[0] - 2);
                *((_DWORD *)v153[0] - 2) = v148 - 1;
              }
              if ( v148 <= 0 )
                std::string::_Rep::_M_destroy(v71, &v151);
            }
            v72 = sub_C400((_QWORD *)a1[5], 35);
            v73 = (_QWORD *)a1[5];
            v12 = v72;
            v74 = sub_C480(v73, 99, 0);
            sub_C080(v12, v74, v73);
            v75 = (_QWORD *)a1[5];
            v76 = sub_C480(v75, 99, 0);
            sub_C080(v12, v76, v75);
            v77 = v152 - 6;
            if ( v152 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
            {
              if ( &_pthread_key_create )
              {
                v78 = _InterlockedExchangeAdd(v152 - 2, 0xFFFFFFFF);
              }
              else
              {
                v78 = *((_DWORD *)v152 - 2);
                *((_DWORD *)v152 - 2) = v78 - 1;
              }
              if ( v78 <= 0 )
                std::string::_Rep::_M_destroy(v77, v153);
            }
            return (char *)v12;
          default:
            v12 = 0;
            if ( (unsigned __int8)(v10 - 67) > 0x13u )
              return (char *)v12;
            v57 = 528385;
            if ( !_bittest64(&v57, (unsigned int)(v10 - 67)) )
              return (char *)v12;
            if ( (_BYTE)v10 == 67 )
            {
              v58 = 22;
            }
            else
            {
              v58 = 208;
              if ( (_BYTE)v10 != 86 )
                v58 = 58;
            }
            v59 = sub_1F0C0(a1, a2 + 2, 528385, v10, a5, v9);
            if ( !v59 )
              return nullptr;
            v60 = sub_1B760((__int64)a1);
            if ( !v60 )
              return nullptr;
            v61 = (char *)sub_C400((_QWORD *)a1[5], v58);
            v62 = (_QWORD *)a1[5];
            v63 = (__int64)v61;
            v153[0] = v61;
            sub_C080((__int64)v61, v59, v62);
            sub_C080(v63, v60, (_QWORD *)a1[5]);
            v47 = (_BYTE *)a1[1];
            if ( v47 == (_BYTE *)a1[2] )
              goto LABEL_167;
            *(_QWORD *)v47 = v63;
            a1[1] += 8LL;
            return v153[0];
        }
        while ( 1 )
        {
          v90 = a1[4];
          if ( v90 )
          {
            v91 = (_BYTE *)a1[3];
            if ( *v91 == 95 )
              break;
          }
          v11 = sub_C400((_QWORD *)a1[5], 221);
          sub_C080(v11, v12, (_QWORD *)a1[5]);
          v12 = sub_1F950((int)a1);
          if ( !v12 )
            return nullptr;
        }
        a1[3] = v91 + 1;
        a1[4] = v90 - 1;
        return (char *)v12;
      }
      if ( v5 == 1 )
        return (char *)sub_1C710(a1);
      v129 = v7[1];
      if ( v129 != 117 )
      {
        if ( v129 != 85 )
          return (char *)sub_1C710(a1);
        a1[3] = v7 + 2;
        v12 = 0;
        a1[4] = v5 - 2;
        if ( (unsigned __int8)sub_1AE90((__int64)a1, v153) )
        {
          v137 = sub_C400((_QWORD *)a1[5], 296);
          v138 = (_QWORD *)a1[5];
          v12 = v137;
          v139 = sub_C480(v138, 331, (__int64)v153[0]);
          sub_C080(v12, v139, v138);
        }
        return (char *)v12;
      }
      a1[3] = v7 + 2;
      a1[4] = v5 - 2;
      return (char *)sub_C400((_QWORD *)a1[5], 296);
  }
}
