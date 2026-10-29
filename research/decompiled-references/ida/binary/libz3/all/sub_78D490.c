__int64 __fastcall sub_78D490(__int64 a1, __int64 a2, char a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // r10d
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, int *, __int64 *); // rax
  __int64 result; // rax
  bool v16; // zf
  const void *v17; // rdi
  char *v18; // rax
  __int64 v19; // rax
  int v20; // esi
  _QWORD *v21; // rcx
  unsigned int v22; // edx
  _QWORD *v23; // r8
  __int64 v24; // rdx
  _QWORD *v25; // r9
  _QWORD *i; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edx
  char *v31; // rdi
  __int64 v32; // rdx
  char *j; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64, unsigned __int8); // rax
  unsigned int v37; // eax
  unsigned int v38; // r13d
  __int64 v39; // rax
  unsigned int v40; // r13d
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rdx
  unsigned int v44; // r10d
  __int64 v45; // rax
  __int64 v46; // rcx
  _DWORD *v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // r12
  char v50; // dl
  int v51; // eax
  char *v52; // rax
  __int64 v53; // rdi
  void (__fastcall *v54)(__int64, __int64, int *, __int64 *); // rax
  const void *v55; // rdi
  void *v56; // rax
  int v57; // ebp
  int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  void *v63; // rax
  unsigned int v64; // r12d
  __int64 v65; // rax
  unsigned int *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned int v72; // r10d
  _QWORD *v73; // rdx
  int *v74; // rbp
  int *v75; // r14
  int v76; // eax
  __int64 v77; // rax
  _DWORD *v78; // rcx
  unsigned int v79; // ebx
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rax
  unsigned int v83; // ebp
  _QWORD *v84; // rax
  _QWORD *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned int v90; // ebx
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned int v95; // ebx
  unsigned int v96; // ecx
  unsigned int *v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  void *v100; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rdi
  __int64 v106; // rax
  unsigned int **v107; // rax
  unsigned int **v108; // rdx
  unsigned int *v109; // rax
  __int64 v110; // rcx
  unsigned int *v111; // rbp
  unsigned int v112; // r14d
  unsigned int v113; // r12d
  unsigned int **v114; // rbx
  unsigned int *v115; // rdx
  unsigned int v116; // ecx
  size_t v117; // rsi
  unsigned int v118; // ebp
  unsigned int *v119; // rax
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rax
  _QWORD *v123; // rax
  unsigned int **v124; // rdx
  char **exception; // rbx
  void *v126; // [rsp+0h] [rbp-A8h]
  void *v127; // [rsp+8h] [rbp-A0h]
  unsigned int v128; // [rsp+8h] [rbp-A0h]
  unsigned int v129; // [rsp+8h] [rbp-A0h]
  int *v130; // [rsp+8h] [rbp-A0h]
  unsigned int v131; // [rsp+8h] [rbp-A0h]
  unsigned int v132; // [rsp+8h] [rbp-A0h]
  unsigned int v133; // [rsp+8h] [rbp-A0h]
  unsigned int v134; // [rsp+8h] [rbp-A0h]
  unsigned int v135; // [rsp+8h] [rbp-A0h]
  unsigned int v136; // [rsp+8h] [rbp-A0h]
  unsigned int v137; // [rsp+8h] [rbp-A0h]
  unsigned int **v138; // [rsp+8h] [rbp-A0h]
  __int64 v139; // [rsp+10h] [rbp-98h]
  __int64 v140; // [rsp+18h] [rbp-90h]
  _DWORD *v141; // [rsp+18h] [rbp-90h]
  __int64 v142; // [rsp+18h] [rbp-90h]
  __int64 v143; // [rsp+18h] [rbp-90h]
  unsigned int v144; // [rsp+18h] [rbp-90h]
  unsigned int **v145; // [rsp+18h] [rbp-90h]
  __int64 v146; // [rsp+20h] [rbp-88h]
  unsigned int v147; // [rsp+28h] [rbp-80h]
  _QWORD *v148; // [rsp+28h] [rbp-80h]
  int v149; // [rsp+34h] [rbp-74h] BYREF
  int v150; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v151; // [rsp+3Ch] [rbp-6Ch]
  __int64 v152; // [rsp+40h] [rbp-68h] BYREF
  __int64 v153; // [rsp+48h] [rbp-60h]
  unsigned __int64 v154; // [rsp+50h] [rbp-58h] BYREF
  __int64 v155; // [rsp+58h] [rbp-50h]

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a2 + 24);
  LODWORD(v126) = a4;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 - 4);
    HIDWORD(v139) = v10 - v9;
    if ( a3 )
    {
      if ( (_BYTE)a4 )
      {
        if ( v9 )
          goto LABEL_5;
LABEL_21:
        result = HIDWORD(v139);
        *(_DWORD *)(v8 - 4) = HIDWORD(v139);
        return result;
      }
LABEL_19:
      result = (__int64)sub_7872D0(a1, v10, v8, a4, (__int64)a5, a6);
      v8 = *(_QWORD *)(a1 + 88);
LABEL_20:
      if ( !v8 )
        return result;
      goto LABEL_21;
    }
  }
  else
  {
    result = -v9;
    HIDWORD(v139) = -v9;
    if ( a3 )
    {
      if ( (_BYTE)a4 )
      {
        if ( !v9 )
          return result;
LABEL_5:
        v11 = 0;
        v12 = 4LL * v9;
        while ( 1 )
        {
          v16 = *(_BYTE *)(a1 + 273) == 0;
          v150 = *(_DWORD *)(v8 + v11) ^ 1;
          if ( !v16 )
          {
            v17 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
            if ( v17 )
            {
              a5 = __dynamic_cast(
                     v17,
                     (const struct __class_type_info *)&`typeinfo for'sat::extension,
                     (const struct __class_type_info *)&`typeinfo for'euf::solver,
                     0);
              if ( !a5 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0((__int64 *)&v154, "cannot convert to euf");
                goto LABEL_147;
              }
            }
            else
            {
              v60 = sub_186B270(0x20E0u);
              v61 = *(_QWORD *)(a1 + 8);
              v154 = 0;
              v127 = (void *)v60;
              sub_7D2250(v60, v61, a1, &v154);
              sub_18572D0(&v154);
              v126 = v127;
              (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 192) + 96LL))(*(_QWORD *)(a1 + 192), v127);
              a5 = v127;
            }
            if ( a5[168] )
            {
              v18 = (char *)sub_789F10(a1);
              sub_7F1790(v18 + 160, 1, &v150);
            }
          }
          v13 = *(_QWORD *)(a1 + 192);
          v14 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)v13 + 16LL);
          v152 = 0xFFFFFFFF00000000LL;
          v153 = 0;
          if ( (char *)v14 == (char *)sub_788610 )
          {
            v154 = 0xFFFFFFFF00000000LL;
            v155 = 0;
            result = sub_11C4C20(v13, 1, &v150, &v154, a5, a6, v126, v127, v139, v140);
          }
          else
          {
            result = v14(v13, 1, &v150, &v152);
          }
          if ( *(_BYTE *)(a1 + 274) )
          {
            result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
            if ( result )
            {
              result = (__int64)__dynamic_cast(
                                  (const void *)result,
                                  (const struct __class_type_info *)&`typeinfo for'sat::extension,
                                  (const struct __class_type_info *)&`typeinfo for'euf::solver,
                                  0);
              if ( result )
                result = sub_79B170(result, 1, &v150);
            }
          }
          v11 += 4;
          v8 = *(_QWORD *)(a1 + 88);
          if ( v11 == v12 )
            goto LABEL_20;
        }
      }
      v10 = 0;
      goto LABEL_19;
    }
  }
  v19 = *(unsigned int *)(a1 + 104);
  v20 = *(_DWORD *)(v7 + 12);
  v21 = *(_QWORD **)(a1 + 96);
  v22 = v19 - 1;
  v19 *= 16;
  v23 = (_QWORD *)((char *)v21 + v19);
  v24 = 16LL * (v20 & v22);
  v25 = &v21[(unsigned __int64)v24 / 8];
  if ( v24 != v19 )
  {
    for ( i = &v21[(unsigned __int64)v24 / 8]; v23 != i; i += 2 )
    {
      v27 = *i;
      if ( *i > 1u )
      {
        if ( *(_DWORD *)(v27 + 12) == v20 && v7 == v27 )
          goto LABEL_61;
      }
      else if ( !v27 )
      {
        goto LABEL_31;
      }
    }
  }
  if ( v21 != v25 )
  {
    v62 = *v21;
    if ( *v21 <= 1u )
      goto LABEL_72;
LABEL_68:
    if ( *(_DWORD *)(v62 + 12) == v20 && v7 == v62 )
    {
      i = v21;
LABEL_61:
      v58 = *((_DWORD *)i + 2) ^ (unsigned __int8)v126;
      if ( v8 )
      {
        v59 = *(unsigned int *)(v8 - 4);
        if ( (_DWORD)v59 == *(_DWORD *)(v8 - 8) )
        {
          v90 = (unsigned int)(3 * v59 + 1) >> 1;
          v91 = 4 * v90 + 8;
          if ( 4 * (int)v59 + 8 >= (unsigned int)v91 || (unsigned int)v59 >= v90 )
          {
LABEL_149:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v154, "Overflow encountered when expanding vector");
LABEL_147:
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v154);
            sub_233E40((__int64)&v154);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v92 = (unsigned int *)sub_186B300((void *)(v8 - 8), v91);
          v8 = (__int64)(v92 + 2);
          *v92 = v90;
          v93 = v92[1];
          *(_QWORD *)(a1 + 88) = v8;
          result = v8 + 4 * v93;
        }
        else
        {
          result = v8 + 4 * v59;
        }
      }
      else
      {
        v99 = (_QWORD *)sub_186B270(0x10u);
        *v99 = 2;
        v8 = (__int64)(v99 + 1);
        *(_QWORD *)(a1 + 88) = v99 + 1;
        result = (__int64)(v99 + 1);
      }
      *(_DWORD *)result = v58;
      ++*(_DWORD *)(v8 - 4);
      return result;
    }
    do
    {
      v21 += 2;
      if ( v25 == v21 )
        break;
      v62 = *v21;
      if ( *v21 > 1u )
        goto LABEL_68;
LABEL_72:
      ;
    }
    while ( v62 );
  }
LABEL_31:
  v28 = *(_QWORD *)(a1 + 216);
  if ( v28 )
  {
    v21 = *(_QWORD **)v28;
    v29 = *(unsigned int *)(v28 + 8);
    v30 = v29 - 1;
    v29 *= 16;
    v31 = (char *)v21 + v29;
    v32 = 16LL * (v20 & v30);
    v23 = &v21[(unsigned __int64)v32 / 8];
    if ( v32 != v29 )
    {
      for ( j = (char *)&v21[(unsigned __int64)v32 / 8]; v31 != j; j += 16 )
      {
        v34 = *(_QWORD *)j;
        if ( *(_QWORD *)j > 1u )
        {
          if ( *(_DWORD *)(v34 + 12) == v20 && v7 == v34 )
          {
LABEL_106:
            v38 = *((_DWORD *)j + 2);
            goto LABEL_42;
          }
        }
        else if ( !v34 )
        {
          goto LABEL_39;
        }
      }
    }
    for ( ; v23 != v21; v21 += 2 )
    {
      v94 = *v21;
      if ( *v21 > 1u )
      {
        if ( *(_DWORD *)(v94 + 12) == v20 && v7 == v94 )
        {
          j = (char *)v21;
          goto LABEL_106;
        }
      }
      else if ( !v94 )
      {
        break;
      }
    }
  }
LABEL_39:
  v35 = *(_QWORD *)(a1 + 192);
  v128 = v9;
  v36 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v35 + 24LL);
  if ( v36 == sub_788600 )
    v37 = sub_11CA540(v35, 0, 1);
  else
    v37 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8), _QWORD *, _QWORD *, _QWORD *))v36)(
            v35,
            0,
            sub_788600,
            v21,
            v23,
            v25);
  v9 = v128;
  v38 = v37;
  if ( *(_BYTE *)(a1 + 273) )
  {
    v104 = sub_789F10(a1);
    v9 = v128;
    v105 = v104;
    v106 = v104[3];
    if ( v106 )
    {
      if ( *(_BYTE *)(v106 + 352) )
      {
        sub_7A4170(v105);
        v107 = (unsigned int **)sub_789F10(a1);
        v9 = v128;
        v108 = v107;
        v109 = v107[297];
        if ( !v109 || (v110 = *(v109 - 1), (_DWORD)v110 == *(v109 - 2)) )
        {
          v144 = v128;
          v138 = v108;
          sub_2FD3F0(v108 + 297);
          v108 = v138;
          v9 = v144;
          v109 = v138[297];
          v110 = *(v109 - 1);
        }
        v111 = v108[291];
        v109[v110] = v38;
        ++*(v109 - 1);
        if ( v111 )
        {
          v112 = *(v111 - 1);
          if ( v38 >= v112 )
          {
            v113 = v38 + 1;
            if ( v112 < v38 + 1 )
            {
              v143 = v7;
              v114 = v108;
              v115 = v111;
              v137 = v9;
              goto LABEL_136;
            }
            *(v111 - 1) = v113;
          }
        }
        else
        {
          v113 = v38 + 1;
          if ( v38 != -1 )
          {
            v145 = v108;
            v112 = 0;
            v137 = v9;
            v123 = (_QWORD *)sub_186B270(0x18u);
            v124 = v145;
            v143 = v7;
            *v123 = 2;
            v114 = v124;
            v124[291] = (unsigned int *)(v123 + 1);
            v115 = (unsigned int *)(v123 + 1);
LABEL_136:
            while ( 1 )
            {
              v120 = *(v115 - 2);
              if ( v120 >= v113 )
                break;
              v116 = (3 * v120 + 1) >> 1;
              v117 = 8 * v116 + 8;
              v118 = v116;
              if ( 8 * v120 + 8 >= (unsigned int)v117 || v120 >= v116 )
                goto LABEL_149;
              v119 = (unsigned int *)sub_186B300(v115 - 2, v117);
              v115 = v119 + 2;
              v114[291] = v119 + 2;
              *v119 = v118;
            }
            *(v115 - 1) = v113;
            v9 = v137;
            v121 = 8LL * v112;
            v122 = 8LL * v113;
            v7 = v143;
            v111 = v115;
            if ( v121 != v122 )
            {
              memset(&v115[(unsigned __int64)v121 / 4], 0, v122 - v121);
              v9 = v137;
            }
          }
        }
        *(_QWORD *)&v111[2 * v38] = v7;
      }
    }
  }
LABEL_42:
  v39 = *(_QWORD *)a1;
  v40 = 2 * v38;
  v129 = v9;
  v149 = v40;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(v39 + 64))(a1, v7, v40);
  v43 = *(_QWORD **)(a1 + 88);
  v44 = v129;
  if ( v43 )
  {
    v45 = *((unsigned int *)v43 - 1);
    v146 = v129;
    v46 = v45 - v129;
    if ( !v129 )
    {
      v146 = 0;
      v148 = (_QWORD *)(a1 + 88);
      v64 = v40 ^ 1;
      goto LABEL_82;
    }
  }
  else
  {
    v146 = v129;
    v45 = 0;
    v46 = -(__int64)v129;
    if ( !v129 )
    {
      v146 = 0;
      v148 = (_QWORD *)(a1 + 88);
      v64 = v40 ^ 1;
      goto LABEL_124;
    }
  }
  v147 = v129;
  v141 = (_DWORD *)v43 + v45;
  v47 = (_DWORD *)v43 + v46;
  v130 = &v150;
  do
  {
    v57 = *v47 ^ 1;
    if ( !*(_BYTE *)(a1 + 273) )
    {
      v150 = *v47 ^ 1;
      v49 = 0;
      v151 = v40;
      goto LABEL_51;
    }
    v48 = sub_789F10(a1);
    v49 = v48[3];
    if ( !v49 )
      goto LABEL_75;
    if ( *(_BYTE *)(v49 + 352) )
    {
      sub_7A4170(v48);
      v154 = __PAIR64__(v40, v57);
      v63 = sub_789F10(a1);
      v49 = sub_7A6620(v63, a1 + 288, 2, &v154, 0, 0);
LABEL_75:
      v50 = *(_BYTE *)(a1 + 273);
      v51 = *v47 ^ 1;
      goto LABEL_48;
    }
    v50 = *(_BYTE *)(a1 + 273);
    v49 = 0;
    v51 = *v47 ^ 1;
LABEL_48:
    v150 = v51;
    v151 = v40;
    if ( v50 && *((_BYTE *)sub_789F10(a1) + 168) )
    {
      v52 = (char *)sub_789F10(a1);
      sub_7F3170(v52 + 160, 2, v130);
    }
LABEL_51:
    v53 = *(_QWORD *)(a1 + 192);
    v54 = *(void (__fastcall **)(__int64, __int64, int *, __int64 *))(*(_QWORD *)v53 + 16LL);
    v152 = 1;
    v153 = v49;
    if ( (char *)v54 == (char *)sub_788610 )
    {
      v154 = 1;
      v155 = v49;
      sub_11C4C20(v53, 2, v130, &v154, v41, v42, v126, v130, v139, v141);
    }
    else
    {
      v54(v53, 2, v130, &v152);
    }
    if ( *(_BYTE *)(a1 + 274) )
    {
      v55 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 88LL))(*(_QWORD *)(a1 + 192));
      if ( v55 )
      {
        v56 = __dynamic_cast(
                v55,
                (const struct __class_type_info *)&`typeinfo for'sat::extension,
                (const struct __class_type_info *)&`typeinfo for'euf::solver,
                0);
        if ( v56 )
          sub_79B170(v56, 2, v130);
      }
    }
    ++v47;
  }
  while ( v141 != v47 );
  v43 = *(_QWORD **)(a1 + 88);
  v44 = v147;
  v64 = v40 ^ 1;
  v148 = (_QWORD *)(a1 + 88);
  if ( !v43 )
  {
LABEL_124:
    v136 = v44;
    v103 = (_QWORD *)sub_186B270(0x10u);
    v44 = v136;
    *v103 = 2;
    v43 = v103 + 1;
    *(_QWORD *)(a1 + 88) = v103 + 1;
    v66 = (unsigned int *)(v103 + 1);
    goto LABEL_84;
  }
LABEL_82:
  v65 = *((unsigned int *)v43 - 1);
  if ( (_DWORD)v65 == *((_DWORD *)v43 - 2) )
  {
    v95 = (unsigned int)(3 * v65 + 1) >> 1;
    v96 = 4 * v95 + 8;
    if ( 4 * (int)v65 + 8 >= v96 || (unsigned int)v65 >= v95 )
    {
LABEL_146:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v154, "Overflow encountered when expanding vector");
      goto LABEL_147;
    }
    v135 = v44;
    v97 = (unsigned int *)sub_186B300(v43 - 1, v96);
    v44 = v135;
    v43 = v97 + 2;
    *v97 = v95;
    v98 = v97[1];
    *(_QWORD *)(a1 + 88) = v43;
    v66 = (unsigned int *)v43 + v98;
  }
  else
  {
    v66 = (unsigned int *)v43 + v65;
  }
LABEL_84:
  v67 = *(_QWORD *)(a1 + 192);
  *v66 = v64;
  v131 = v44;
  v68 = (unsigned int)(*((_DWORD *)v43 - 1) + 1);
  *((_DWORD *)v43 - 1) = v68;
  v142 = (__int64)v43 + 4 * (v68 - v146) - 4;
  v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 104LL))(v67);
  v72 = v131;
  if ( v69 )
  {
    v73 = *(_QWORD **)(a1 + 280);
    if ( v73 )
    {
      *((_DWORD *)v73 - 1) = 0;
      if ( v131 )
      {
        v74 = (int *)v142;
        v75 = (int *)(v142 + 4 * v146);
        do
        {
          v77 = *((unsigned int *)v73 - 1);
          v78 = (_DWORD *)v73 + v77;
          if ( (_DWORD)v77 == *((_DWORD *)v73 - 2) )
          {
            v79 = (unsigned int)(3 * v77 + 1) >> 1;
            v80 = 4 * v79 + 8;
            if ( 4 * (int)v77 + 8 >= (unsigned int)v80 || (unsigned int)v77 >= v79 )
              goto LABEL_146;
            v132 = v72;
            v81 = (unsigned int *)sub_186B300(v73 - 1, v80);
            v72 = v132;
            v73 = v81 + 2;
            *v81 = v79;
            v82 = v81[1];
            *(_QWORD *)(a1 + 280) = v73;
            v78 = (_DWORD *)v73 + v82;
          }
LABEL_88:
          v76 = *v74++;
          *v78 = v76;
          ++*((_DWORD *)v73 - 1);
        }
        while ( v75 != v74 );
      }
    }
    else if ( v131 )
    {
      v74 = (int *)v142;
      v75 = (int *)(v142 + 4 * v146);
      v102 = (_QWORD *)sub_186B270(0x10u);
      v72 = v131;
      v73 = v102 + 1;
      *v102 = 2;
      *(_QWORD *)(a1 + 280) = v102 + 1;
      v78 = v102 + 1;
      goto LABEL_88;
    }
  }
  v83 = v72 + 1;
  if ( *(_BYTE *)(a1 + 273)
    && (v133 = v72, v84 = sub_789F10(a1), v72 = v133, v85 = v84, (v86 = v84[3]) != 0)
    && *(_BYTE *)(v86 + 352) )
  {
    sub_7A4170(v85);
    v100 = sub_789F10(a1);
    v101 = sub_7A6620(v100, a1 + 288, v83, v142, 0, 0);
    v72 = v133;
    v87 = v101;
  }
  else
  {
    v87 = 0;
  }
  v134 = v72;
  sub_78AC30(a1, v83, v142, v87, v70, v71);
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192)) )
  {
    v88 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 104LL))(*(_QWORD *)(a1 + 192));
    sub_1190B50(v88, (unsigned int)v149, v134, *(_QWORD *)(a1 + 280));
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 48LL))(*(_QWORD *)(a1 + 192), v64);
  v89 = *(_QWORD *)(a1 + 88);
  if ( v89 )
    *(_DWORD *)(v89 - 4) = HIDWORD(v139);
  v149 = v40 ^ (unsigned __int8)v126;
  return sub_787180(v148, (unsigned int *)&v149);
}

