__int64 __fastcall sub_D406A0(__int64 a1, __int64 **a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // edx
  int v11; // edx
  __int64 v12; // r13
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rax
  _QWORD *v16; // rbp
  unsigned int v17; // r12d
  void *v18; // r15
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  _QWORD *v22; // rax
  char v23; // cl
  char v24; // dl
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rdx
  void *v28; // r14
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // r14
  __int64 *v34; // rdi
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdx
  void *v39; // r15
  unsigned int v40; // r15d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rdx
  void *v44; // r12
  void *v45; // r12
  void *v46; // r12
  void *v47; // r12
  void *v48; // r12
  void *v49; // r12
  void *v50; // r12
  __int64 v51; // rsi
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r13
  void *v55; // r14
  void *v56; // r12
  __int64 *v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rax
  int v60; // edx
  __int64 *v61; // r14
  __int64 v62; // rcx
  __int64 v63; // rdx
  char i; // al
  unsigned int v65; // eax
  int v66; // eax
  __int64 v67; // rax
  _QWORD *v68; // r14
  _QWORD *v69; // r12
  void *v70; // r15
  _QWORD *v71; // rsi
  __int64 *v72; // rbp
  unsigned __int64 v73; // r12
  __int64 v74; // rsi
  void *v76; // rbp
  void *v77; // rbp
  unsigned int v78; // r15d
  size_t v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rsi
  _DWORD *v83; // r8
  __int64 v84; // rdx
  _QWORD *v85; // rax
  _QWORD *v86; // rdi
  int v87; // ecx
  char v88; // r9
  __int64 v89; // rcx
  char v90; // r9
  __int64 v91; // rcx
  __int64 v92; // r14
  __int64 v93; // r15
  _QWORD *v94; // r14
  _QWORD *v95; // rbx
  void *v96; // rbp
  _QWORD *v97; // rsi
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  char **v100; // r12
  __int64 v101; // rdx
  char **exception; // r12
  __int64 v103; // rdx
  int v104; // [rsp+0h] [rbp-178h]
  int v105; // [rsp+0h] [rbp-178h]
  int v106; // [rsp+8h] [rbp-170h]
  __int64 *v107; // [rsp+8h] [rbp-170h]
  int v108; // [rsp+8h] [rbp-170h]
  __int64 **v109; // [rsp+10h] [rbp-168h]
  int v110; // [rsp+10h] [rbp-168h]
  void *v111; // [rsp+18h] [rbp-160h]
  __int64 *v112; // [rsp+18h] [rbp-160h]
  __int64 v113; // [rsp+20h] [rbp-158h]
  int v114; // [rsp+20h] [rbp-158h]
  int v115; // [rsp+20h] [rbp-158h]
  int *v116; // [rsp+28h] [rbp-150h]
  int v117; // [rsp+28h] [rbp-150h]
  __int64 v118; // [rsp+30h] [rbp-148h]
  int v119; // [rsp+30h] [rbp-148h]
  __int64 v120; // [rsp+38h] [rbp-140h]
  char v121; // [rsp+38h] [rbp-140h]
  void *v122; // [rsp+48h] [rbp-130h]
  unsigned int v123; // [rsp+54h] [rbp-124h]
  _QWORD *v124; // [rsp+58h] [rbp-120h]
  unsigned int *v125; // [rsp+58h] [rbp-120h]
  unsigned int v126; // [rsp+60h] [rbp-118h]
  _DWORD *v127; // [rsp+68h] [rbp-110h]
  __int64 v128; // [rsp+78h] [rbp-100h]
  __int64 v129; // [rsp+88h] [rbp-F0h]
  _BYTE v130[16]; // [rsp+A0h] [rbp-D8h] BYREF
  int v131; // [rsp+B0h] [rbp-C8h] BYREF
  char v132; // [rsp+B4h] [rbp-C4h]
  _QWORD v133[2]; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD v134[2]; // [rsp+D0h] [rbp-A8h] BYREF
  int v135; // [rsp+E0h] [rbp-98h] BYREF
  char v136; // [rsp+E4h] [rbp-94h]
  __int64 v137; // [rsp+E8h] [rbp-90h]
  int v138; // [rsp+F0h] [rbp-88h] BYREF
  char v139; // [rsp+F4h] [rbp-84h]
  __int64 v140; // [rsp+F8h] [rbp-80h]
  int v141; // [rsp+100h] [rbp-78h] BYREF
  char v142; // [rsp+104h] [rbp-74h]
  __int64 v143; // [rsp+108h] [rbp-70h]
  int v144; // [rsp+110h] [rbp-68h] BYREF
  char v145; // [rsp+114h] [rbp-64h]
  __int64 v146; // [rsp+118h] [rbp-60h]
  __int64 v147; // [rsp+120h] [rbp-58h] BYREF
  __int64 v148; // [rsp+128h] [rbp-50h]
  __int64 v149; // [rsp+130h] [rbp-48h] BYREF
  __int64 v150; // [rsp+138h] [rbp-40h]

  v2 = 0;
  v3 = *a2;
  v118 = a1;
  v128 = *(_QWORD *)(a1 + 16);
  result = (__int64)&v141;
  v109 = a2;
  v120 = 0;
  v116 = &v141;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
    return result;
  do
  {
    result = v3[9];
    if ( !result )
      break;
    v8 = v3[9];
    v9 = *(_BYTE *)(result + 3) >> 6;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_12;
    }
    else
    {
      do
      {
        v8 = *(_QWORD *)(v8 + 16);
        v9 = *(_BYTE *)(v8 + 3) >> 6;
      }
      while ( !v9 );
      if ( v9 != 1 )
      {
LABEL_12:
        if ( v9 == 2 )
          v10 = *(_DWORD *)(v8 + 4) - 1;
        else
          v10 = *(_DWORD *)(v8 + 4);
        if ( v2 >= v10 )
          break;
        goto LABEL_15;
      }
    }
    if ( v2 >= *(_DWORD *)(v8 + 4) + 1 )
      break;
LABEL_15:
    v11 = 17;
    while ( 1 )
    {
      if ( *(char *)(result + 3) < 0 )
      {
        if ( *(_BYTE *)(result + 3) >> 6 != 2 )
        {
          v5 = (__int64 *)(*(_QWORD *)(result + 16) + 8LL * v2);
          goto LABEL_5;
        }
        goto LABEL_18;
      }
      if ( v2 == *(_DWORD *)(result + 4) )
        break;
LABEL_18:
      result = *(_QWORD *)(result + 16);
      if ( !--v11 )
      {
        sub_233F80((__int64 *)(*v3 + 616), (_DWORD *)v3 + 18);
        v5 = (__int64 *)(*(_QWORD *)(v3[9] + 16) + 8LL * v2);
        goto LABEL_5;
      }
    }
    v5 = (__int64 *)(result + 8);
LABEL_5:
    v6 = *v5;
    if ( !*(_WORD *)(v6 + 4) )
    {
      v7 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      if ( v7 )
      {
        if ( !*v7 && v7[1] == 8 && *(_DWORD *)(v6 + 24) == 1 )
        {
          v12 = *(_QWORD *)(v6 + 32);
          if ( !*(_WORD *)(v12 + 4) )
          {
            v113 = v118 + 40;
            if ( (unsigned __int8)sub_168DB10(v118 + 40, *(_QWORD *)(v12 + 16)) )
            {
              sub_168DDF0(v130, v118 + 40, *(_QWORD *)(v12 + 16));
              v133[0] = 0;
              v133[1] = 0;
              v134[0] = 1;
              v134[1] = 0;
              sub_182CBA0(qword_1C7F2C0, v134);
              v14 = *(_DWORD *)(v12 + 24);
              v15 = *(_QWORD *)(v118 + 16);
              v16 = nullptr;
              LODWORD(v134[0]) = 1;
              BYTE4(v134[0]) &= ~1u;
              v129 = v15;
              v107 = nullptr;
              if ( v14 )
              {
                v17 = 0;
                sub_168DB50(
                  (unsigned int)&v147,
                  v113,
                  *(_QWORD *)(v12 + 16),
                  0,
                  v14,
                  v13,
                  v104,
                  0,
                  (_DWORD)v109,
                  (unsigned int)&v147,
                  v113,
                  (_DWORD)v116,
                  v118,
                  v120);
                while ( 1 )
                {
                  v39 = qword_1C7F2C0;
                  if ( (_DWORD)v147 )
                  {
                    if ( LODWORD(v133[0]) )
                    {
                      if ( (v134[0] & 0x100000000LL) != 0
                        || LODWORD(v134[0]) != 1
                        || (v149 & 0x100000000LL) != 0
                        || (_DWORD)v149 != 1 )
                      {
                        sub_1851D20(qword_1C7F2C0, v133, v111, v133);
                      }
                      else
                      {
                        sub_1831A80(qword_1C7F2C0, v133, v111, v133);
                        sub_182CBA0(v39, v134);
                        BYTE4(v134[0]) &= ~1u;
                        LODWORD(v134[0]) = 1;
                      }
                    }
                    else
                    {
                      if ( (v147 & 0x100000000LL) != 0 )
                      {
                        sub_182C690(qword_1C7F2C0, v133, v111);
                      }
                      else
                      {
                        BYTE4(v133[0]) &= ~1u;
                        LODWORD(v133[0]) = v147;
                      }
                      if ( (v149 & 0x100000000LL) != 0 )
                      {
                        sub_182C690(v39, v134, &v149);
                      }
                      else
                      {
                        BYTE4(v134[0]) &= ~1u;
                        LODWORD(v134[0]) = v149;
                      }
                    }
                  }
                  else
                  {
                    if ( (v133[0] & 0x100000000LL) != 0 )
                      sub_182C690(qword_1C7F2C0, v133, v133);
                    else
                      BYTE4(v133[0]) &= ~1u;
                    if ( (v134[0] & 0x100000000LL) != 0 )
                      sub_182C690(v39, v134, v134);
                    else
                      BYTE4(v134[0]) &= ~1u;
                  }
                  v18 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v111);
                  sub_182CBA0(v18, &v149);
                  sub_168DB50(
                    v117,
                    v114,
                    *(_QWORD *)(v12 + 16),
                    v17,
                    v19,
                    v20,
                    v105,
                    v108,
                    v110,
                    (_DWORD)v111,
                    v114,
                    v117,
                    v119,
                    v121);
                  if ( v16 )
                  {
                    v21 = *((unsigned int *)v16 - 1);
                    if ( (_DWORD)v21 == *((_DWORD *)v16 - 2) )
                    {
                      v78 = (unsigned int)(3 * v21 + 1) >> 1;
                      v123 = v78;
                      v79 = 32 * v78 + 8;
                      if ( 32 * (int)v21 + 8 >= (unsigned int)v79 || (unsigned int)v21 >= v78 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_167E90(v112, "Overflow encountered when expanding vector", v103);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v112);
                        sub_233E40((__int64)v112);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v80 = sub_186B270(v79);
                      v81 = *((unsigned int *)v16 - 1);
                      v82 = v80 + 8;
                      v83 = (_DWORD *)v80;
                      v84 = v80 + 8;
                      *(_DWORD *)(v80 + 4) = v81;
                      v85 = v16;
                      v86 = &v16[4 * v81];
                      if ( v16 != v86 )
                      {
                        do
                        {
                          v87 = *(_DWORD *)v85;
                          v88 = *((_BYTE *)v85 + 4);
                          v85 += 4;
                          v84 += 32;
                          *(_DWORD *)(v84 - 32) = v87;
                          *(_BYTE *)(v84 - 28) = v88 & 3 | *(_BYTE *)(v84 - 28) & 0xFC;
                          v89 = *(v85 - 3);
                          *(v85 - 3) = 0;
                          *(_QWORD *)(v84 - 24) = v89;
                          v90 = *((_BYTE *)v85 - 12);
                          *(_DWORD *)(v84 - 16) = *((_DWORD *)v85 - 4);
                          *(_BYTE *)(v84 - 12) = v90 & 3 | *(_BYTE *)(v84 - 12) & 0xFC;
                          v91 = *(v85 - 1);
                          *(v85 - 1) = 0;
                          *(_QWORD *)(v84 - 8) = v91;
                        }
                        while ( v86 != v85 );
                      }
                      v92 = *((unsigned int *)v16 - 1);
                      if ( (_DWORD)v92 )
                      {
                        v124 = v16;
                        v93 = v82;
                        v127 = v83;
                        v94 = &v16[4 * v92];
                        v126 = v2;
                        v95 = v16;
                        do
                        {
                          v96 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v95);
                          v97 = v95 + 2;
                          v95 += 4;
                          sub_182CBA0(v96, v97);
                        }
                        while ( v94 != v95 );
                        v16 = v124;
                        v2 = v126;
                        v82 = v93;
                        v83 = v127;
                      }
                      v125 = v83;
                      sub_186B220(v16 - 1);
                      *v125 = v123;
                      v16 = (_QWORD *)v82;
                      v22 = (_QWORD *)(v82 + 32LL * v125[1]);
                    }
                    else
                    {
                      v22 = &v16[4 * v21];
                    }
                  }
                  else
                  {
                    v98 = (_QWORD *)sub_186B270(0x48u);
                    v16 = v98 + 1;
                    *v98 = 2;
                    v22 = v98 + 1;
                  }
                  v23 = v142;
                  *(_DWORD *)v22 = v141;
                  v24 = v23 & 3 | *((_BYTE *)v22 + 4) & 0xFC;
                  v25 = v145;
                  *((_BYTE *)v22 + 4) = v24;
                  v26 = v143;
                  v143 = 0;
                  v22[1] = v26;
                  *((_DWORD *)v22 + 4) = v144;
                  *((_BYTE *)v22 + 20) = v25 & 3 | *((_BYTE *)v22 + 20) & 0xFC;
                  v27 = v146;
                  v146 = 0;
                  v22[3] = v27;
                  ++*((_DWORD *)v16 - 1);
                  v28 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v116);
                  sub_182CBA0(v28, &v144);
                  v31 = *(_QWORD *)(v12 + 8LL * v17 + 32);
                  if ( !*(_WORD *)(v31 + 4)
                    && (v32 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL)) != nullptr
                    && !*v32
                    && v32[1] == 8
                    && *(_DWORD *)(v31 + 24) == 1 )
                  {
                    v33 = *(_QWORD *)(v31 + 32);
                  }
                  else
                  {
                    v33 = sub_15E1A70(*(_QWORD *)(v118 + 16));
                  }
                  if ( v33 )
                    ++*(_DWORD *)(v33 + 8);
                  v34 = v107;
                  if ( !v107 )
                    break;
                  v35 = *((_DWORD *)v107 - 1);
                  if ( v35 != *((_DWORD *)v107 - 2) )
                  {
                    v36 = v35;
                    v37 = v35 + 1;
                    v38 = &v107[v36];
                    goto LABEL_49;
                  }
                  v40 = (3 * v35 + 1) >> 1;
                  v41 = 8 * v40 + 8;
                  if ( 8 * v35 + 8 >= (unsigned int)v41 || v35 >= v40 )
                  {
                    v100 = (char **)__cxa_allocate_exception(0x28u);
                    sub_167E90(v112, "Overflow encountered when expanding vector", v101);
                    *v100 = (char *)off_1C63128;
                    sub_2333C0(v100 + 1, v112);
                    sub_233E40((__int64)v112);
                    __cxa_throw(
                      v100,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v42 = (unsigned int *)sub_186B300(v107 - 1, v41);
                  v43 = v42[1];
                  *v42 = v40;
                  ++v17;
                  v107 = (__int64 *)(v42 + 2);
                  *(_QWORD *)&v42[2 * v43 + 2] = v33;
                  v42[1] = v43 + 1;
                  if ( v17 >= *(_DWORD *)(v12 + 24) )
                    goto LABEL_60;
LABEL_50:
                  sub_168DB50(
                    (_DWORD)v112,
                    v113,
                    *(_QWORD *)(v12 + 16),
                    v17,
                    v29,
                    v30,
                    v104,
                    (_DWORD)v107,
                    (_DWORD)v109,
                    (_DWORD)v112,
                    v113,
                    (_DWORD)v116,
                    v118,
                    v120);
                }
                v99 = (_QWORD *)sub_186B270(0x18u);
                *v99 = 2;
                v38 = v99 + 1;
                v107 = v38;
                v37 = 1;
                v34 = v38;
LABEL_49:
                *v38 = v33;
                ++v17;
                *((_DWORD *)v34 - 1) = v37;
                if ( v17 >= *(_DWORD *)(v12 + 24) )
                  goto LABEL_60;
                goto LABEL_50;
              }
              v112 = &v147;
LABEL_60:
              v147 = 0;
              v148 = 0;
              v149 = 1;
              v44 = qword_1C7F2C0;
              v150 = 0;
              if ( (v133[0] & 0x100000000LL) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v112, v133);
                if ( (v134[0] & 0x100000000LL) != 0 )
                  goto LABEL_160;
LABEL_62:
                BYTE4(v149) &= ~1u;
                LODWORD(v149) = v134[0];
              }
              else
              {
                LODWORD(v147) = v133[0];
                if ( (v134[0] & 0x100000000LL) == 0 )
                  goto LABEL_62;
LABEL_160:
                sub_182C690(v44, &v149, v134);
              }
              if ( (v149 & 0x100000000LL) != 0 || (_DWORD)v149 != 1 || (v132 & 1) != 0 || v131 != 1 )
              {
                sub_1852000(qword_1C7F2C0, v112, v130);
              }
              else
              {
                v122 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, v112, v130);
                sub_182CBA0(v122, &v149);
                BYTE4(v149) &= ~1u;
                LODWORD(v149) = 1;
              }
              v136 &= 0xFCu;
              v139 &= 0xFCu;
              v135 = 0;
              v45 = qword_1C7F2C0;
              v137 = 0;
              v138 = 1;
              v140 = 0;
              if ( (v147 & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v135, v112);
              else
                v135 = v147;
              if ( (v149 & 0x100000000LL) != 0 )
              {
                sub_182C690(v45, &v138, &v149);
              }
              else
              {
                v139 &= ~1u;
                v138 = v149;
              }
              v46 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v112);
              sub_182CBA0(v46, &v149);
              v147 = 0;
              v148 = 0;
              v149 = 1;
              v47 = qword_1C7F2C0;
              v150 = 0;
              if ( (v136 & 1) != 0 )
                sub_182C690(qword_1C7F2C0, v112, &v135);
              else
                LODWORD(v147) = v135;
              if ( (v139 & 1) != 0 )
              {
                sub_182C690(v47, &v149, &v138);
              }
              else
              {
                BYTE4(v149) &= ~1u;
                LODWORD(v149) = v138;
              }
              v48 = qword_1C7F2C0;
              if ( qword_1C7F280 )
              {
                if ( (_DWORD)v147 )
                {
                  if ( (v149 & 0x100000000LL) != 0
                    || (_DWORD)v149 != 1
                    || (qword_1C7F290 & 0x100000000LL) != 0
                    || (_DWORD)qword_1C7F290 != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, v112, &qword_1C7F280, v112);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, v112, &qword_1C7F280, v112);
                    sub_182CBA0(v48, &v149);
                    BYTE4(v149) &= ~1u;
                    LODWORD(v149) = 1;
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, v112, &qword_1C7F280);
                  }
                  else
                  {
                    BYTE4(v147) &= ~1u;
                    LODWORD(v147) = qword_1C7F280;
                  }
                  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
                  {
                    sub_182C690(v48, &v149, &qword_1C7F290);
                  }
                  else
                  {
                    BYTE4(v149) &= ~1u;
                    LODWORD(v149) = qword_1C7F290;
                  }
                }
              }
              else
              {
                if ( (v147 & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, v112, v112);
                else
                  BYTE4(v147) &= ~1u;
                if ( (v149 & 0x100000000LL) != 0 )
                  sub_182C690(v48, &v149, &v149);
                else
                  BYTE4(v149) &= ~1u;
              }
              v142 &= 0xFCu;
              v145 &= 0xFCu;
              v141 = 0;
              v49 = qword_1C7F2C0;
              v143 = 0;
              v144 = 1;
              v146 = 0;
              if ( (v147 & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v141, v112);
              else
                v141 = v147;
              if ( (v149 & 0x100000000LL) != 0 )
              {
                sub_182C690(v49, &v144, &v149);
              }
              else
              {
                v145 &= ~1u;
                v144 = v149;
              }
              v50 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v112);
              sub_182CBA0(v50, &v149);
              if ( v107 )
              {
                v51 = *((unsigned int *)v107 - 1);
                v52 = v107;
              }
              else
              {
                v52 = nullptr;
                v51 = 0;
              }
              v53 = sub_1690D20(v113, v51, v16, v52, &v141);
              v54 = v53;
              if ( v53 )
                ++*(_DWORD *)(v53 + 8);
              if ( v120 )
              {
                v115 = *(_DWORD *)(v120 + 8);
                *(_DWORD *)(v120 + 8) = v115 - 1;
                if ( v115 == 1 )
                  sub_15D7BC0(v128, v120);
              }
              v55 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v141);
              sub_182CBA0(v55, &v144);
              v56 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v135);
              sub_182CBA0(v56, &v138);
              v57 = *v109;
              v58 = **v109;
              if ( (*((_BYTE *)*v109 + 123) & 0x10) != 0 )
              {
                v59 = v57[13];
                v60 = 18;
                while ( --v60 )
                {
                  if ( *(char *)(v59 + 3) >= 0 )
                  {
                    if ( v2 == *(_DWORD *)(v59 + 4) )
                    {
                      v61 = *v109;
                      goto LABEL_95;
                    }
                  }
                  else if ( *(_BYTE *)(v59 + 3) >> 6 != 2 )
                  {
                    v61 = *v109;
                    goto LABEL_95;
                  }
                  v59 = *(_QWORD *)(v59 + 16);
                }
                sub_236900((_QWORD *)(v58 + 672), v57 + 13);
                v61 = *v109;
                v58 = **v109;
              }
              else
              {
                v61 = *v109;
              }
LABEL_95:
              v62 = v61[11];
              if ( v62 )
              {
                v63 = v61[11];
                for ( i = *(_BYTE *)(v62 + 3) >> 6; !i; i = *(_BYTE *)(v63 + 3) >> 6 )
                  v63 = *(_QWORD *)(v63 + 16);
                if ( i == 1 )
                  v65 = *(_DWORD *)(v63 + 4) + 1;
                else
                  v65 = i == 2 ? *(_DWORD *)(v63 + 4) - 1 : *(_DWORD *)(v63 + 4);
                if ( v2 < v65 )
                {
                  v66 = 18;
                  while ( --v66 )
                  {
                    if ( *(char *)(v62 + 3) >= 0 )
                    {
                      if ( *(_DWORD *)(v62 + 4) == v2 )
                        goto LABEL_105;
                    }
                    else if ( *(_BYTE *)(v62 + 3) >> 6 != 2 )
                    {
                      goto LABEL_105;
                    }
                    v62 = *(_QWORD *)(v62 + 16);
                  }
                  sub_233F80((__int64 *)(v58 + 616), (_DWORD *)v61 + 22);
                }
              }
LABEL_105:
              sub_EDBFA0((int)v57);
              if ( v16 )
              {
                v67 = *((unsigned int *)v16 - 1);
                if ( (_DWORD)v67 )
                {
                  v68 = v16;
                  v69 = &v16[4 * v67];
                  do
                  {
                    v70 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v68);
                    v71 = v68 + 2;
                    v68 += 4;
                    sub_182CBA0(v70, v71);
                  }
                  while ( v68 != v69 );
                }
                sub_186B220(v16 - 1);
              }
              if ( v107 )
              {
                v72 = v107;
                v73 = (unsigned __int64)&v107[*((unsigned int *)v107 - 1)];
                if ( (unsigned __int64)v107 < v73 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v74 = *v72;
                      if ( *v72 )
                      {
                        if ( (*(_DWORD *)(v74 + 8))-- == 1 )
                          break;
                      }
                      if ( (unsigned __int64)++v72 >= v73 )
                        goto LABEL_117;
                    }
                    ++v72;
                    sub_15D7BC0(v129, v74);
                  }
                  while ( (unsigned __int64)v72 < v73 );
                }
LABEL_117:
                sub_186B220(v107 - 1);
              }
              v76 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v133);
              sub_182CBA0(v76, v134);
              v77 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v130);
              sub_182CBA0(v77, &v131);
              v120 = v54;
            }
          }
        }
      }
    }
    result = (__int64)v109;
    ++v2;
    v3 = *v109;
  }
  while ( (*((_BYTE *)*v109 + 123) & 0x20) == 0 );
  if ( v120 )
  {
    v106 = *(_DWORD *)(v120 + 8);
    result = (unsigned int)(v106 - 1);
    *(_DWORD *)(v120 + 8) = result;
    if ( v106 == 1 )
      return sub_15D7BC0(v128, v120);
  }
  return result;
}

