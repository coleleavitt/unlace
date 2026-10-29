__int64 __fastcall sub_6CE100(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        unsigned int a8,
        int *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rdi
  _DWORD *v18; // rax
  __int64 v19; // rdx
  char v20; // r8
  bool v21; // zf
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // r12
  __int64 v25; // r12
  void *v26; // r14
  int v27; // eax
  unsigned int v28; // eax
  _DWORD *v29; // rax
  __int64 *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdi
  _DWORD *v34; // rdx
  __int16 v35; // dx
  _DWORD *v36; // rsi
  __int64 v37; // rax
  _DWORD *v38; // rax
  __int64 v39; // r12
  __int64 v40; // r9
  void (__fastcall *v41)(__int64, __int64, __int64, _QWORD, _QWORD); // r10
  void *v42; // r12
  __int64 v44; // r12
  __int64 v45; // r9
  void (__fastcall *v46)(__int64, __int64, __int64, _QWORD, _QWORD); // r10
  void *v47; // r12
  __int64 v48; // rbp
  __int64 v49; // r12
  __int64 v50; // r12
  void *v51; // r14
  int v52; // eax
  _DWORD *v53; // rax
  __int64 *v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rax
  __int16 v57; // dx
  __int64 v58; // rdi
  __int64 v59; // r8
  _DWORD *v60; // rax
  _DWORD *v61; // rcx
  __int64 v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // r9
  __int64 v65; // r11
  __int64 v66; // r15
  void (__fastcall *v67)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD); // r10
  _DWORD *v68; // rax
  __int64 v69; // rax
  _Unwind_Exception_Class v70; // r12
  void *v71; // r12
  __int64 v72; // r9
  __int64 v73; // r11
  __int64 v74; // r15
  void (__fastcall *v75)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD); // r10
  _DWORD *v76; // rax
  __int64 v77; // rax
  _Unwind_Exception_Class exception_class; // r12
  void *v79; // r12
  __int64 v80; // r15
  _DWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // r14
  __int64 v84; // r15
  _DWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // r14
  _DWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  _DWORD *v91; // rax
  __int64 v93; // [rsp+18h] [rbp-C0h]
  __int64 v94; // [rsp+18h] [rbp-C0h]
  struct _Unwind_Exception *v95; // [rsp+20h] [rbp-B8h]
  struct _Unwind_Exception *v96; // [rsp+20h] [rbp-B8h]
  __int64 v97; // [rsp+28h] [rbp-B0h]
  __int64 v98; // [rsp+28h] [rbp-B0h]
  __int64 v99; // [rsp+28h] [rbp-B0h]
  __int64 v101; // [rsp+38h] [rbp-A0h]
  __int64 v102; // [rsp+40h] [rbp-98h]
  int v103; // [rsp+48h] [rbp-90h]
  int v104; // [rsp+48h] [rbp-90h]
  __int64 v105; // [rsp+48h] [rbp-90h]
  __int64 v106; // [rsp+48h] [rbp-90h]
  void (__fastcall *v107)(__int64, __int64, __int64, _QWORD, _QWORD); // [rsp+48h] [rbp-90h]
  void (__fastcall *v108)(__int64, __int64, __int64, _QWORD, _QWORD); // [rsp+48h] [rbp-90h]
  void (__fastcall *v109)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD); // [rsp+50h] [rbp-88h]
  void (__fastcall *v110)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD); // [rsp+50h] [rbp-88h]
  __int64 v111; // [rsp+58h] [rbp-80h]
  __int64 v112; // [rsp+58h] [rbp-80h]
  __int64 v113; // [rsp+60h] [rbp-78h]
  bool v114; // [rsp+6Ch] [rbp-6Ch]
  char v115; // [rsp+6Dh] [rbp-6Bh]
  char v116; // [rsp+6Eh] [rbp-6Ah]
  int v118[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v119; // [rsp+78h] [rbp-60h]
  __int64 v120; // [rsp+80h] [rbp-58h] BYREF
  __int64 v121; // [rsp+88h] [rbp-50h]
  __int64 v122; // [rsp+90h] [rbp-48h] BYREF
  __int64 v123; // [rsp+98h] [rbp-40h]

  v115 = a6;
  if ( !a4 )
  {
    if ( a7 )
    {
      v15 = a2[9];
      if ( !v15 )
        goto LABEL_4;
    }
    else
    {
      v15 = a2[11];
      if ( !v15 )
        goto LABEL_4;
    }
LABEL_7:
    v16 = *(_DWORD *)(v15 - 4);
    v17 = a3;
    goto LABEL_8;
  }
  if ( !a7 )
  {
    v15 = a2[15];
    if ( !v15 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v15 = a2[13];
  if ( v15 )
    goto LABEL_7;
LABEL_4:
  v16 = 0;
  v17 = a3;
LABEL_8:
  *(_QWORD *)v118 = 0;
  v114 = a4 == a6;
  v113 = a1[1];
  v119 = v113;
  v18 = *(_DWORD **)(sub_15D1F10(v17) + 24);
  if ( !v18 || *v18 != 5 || v18[1] )
  {
    if ( !a6 )
      goto LABEL_156;
LABEL_11:
    v115 = 0;
    if ( a7 )
      v19 = a2[25];
    else
      v19 = a2[27];
    goto LABEL_13;
  }
  if ( a6 )
    goto LABEL_11;
  v115 = 1;
LABEL_156:
  if ( a7 )
    v19 = a2[21];
  else
    v19 = a2[23];
LABEL_13:
  v101 = *(_QWORD *)(v19 + 8LL * a8);
  if ( !v16 )
  {
    sub_6BFE30(0, v113);
    return sub_6BFE30(*(__int64 *)v118, v119);
  }
  v97 = 0;
  v102 = v16;
  v20 = v115 & a4 & a5;
  v21 = a4 == 0;
  v22 = 0;
  v116 = v20;
  if ( v21 )
  {
    while ( 1 )
    {
      v93 = a1[1];
      if ( a7 )
      {
        v95 = *(struct _Unwind_Exception **)(a2[21] + 8 * v22);
        v23 = *(_QWORD *)(a2[9] + 8 * v22);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v24 = a2[16];
      }
      else
      {
        v95 = *(struct _Unwind_Exception **)(a2[23] + 8 * v22);
        v23 = *(_QWORD *)(a2[11] + 8 * v22);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v24 = a2[17];
      }
      v120 = 0;
      v121 = 0;
      v122 = 1;
      v25 = 32 * v22 + v24;
      v123 = 0;
      v26 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v25 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v120, v25);
      else
        LODWORD(v120) = *(_DWORD *)v25;
      if ( (*(_BYTE *)(v25 + 20) & 1) != 0 )
      {
        sub_182C690(v26, &v122, v25 + 16);
        v28 = v22;
        if ( a8 == (_DWORD)v22 && v114 )
        {
LABEL_24:
          if ( v115 )
          {
            v29 = *(_DWORD **)(sub_15D1F10(a3) + 24);
            if ( v29 && *v29 == 5 && v29[1] == 1 )
              v30 = a1 + 31;
            else
              v30 = a1 + 37;
            v31 = *v30;
            sub_6C19A0((__int64)(a1 + 4), (__int64)a9, a3);
            v32 = sub_15E1B70(a1[6]);
            v33 = a1[6];
            if ( *(_WORD *)(v32 + 4)
              || (v34 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
              || *v34 != 5
              || v34[1] )
            {
              v35 = *(_WORD *)(v31 + 4);
              if ( (v35 || (v36 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL)) == nullptr || *v36 != 5 || v36[1])
                && *(_DWORD *)v31 < *(_DWORD *)v32 )
              {
                v35 = *(_WORD *)(v32 + 4);
                v37 = v32;
                v32 = v31;
                v31 = v37;
              }
            }
            else
            {
              v89 = v32;
              v35 = 0;
              v32 = v31;
              v31 = v89;
            }
            if ( v32 == v31 )
            {
              v39 = *(_QWORD *)(v33 + 856);
            }
            else if ( *(_WORD *)(v32 + 4)
                   || (v38 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL)) == nullptr
                   || *v38 != 5
                   || v38[1]
                   || v35
                   || (v88 = *(_DWORD **)(*(_QWORD *)(v31 + 16) + 24LL)) == nullptr
                   || *v88 != 5
                   || v88[1] )
            {
              v39 = sub_15E1B70(v33);
            }
            else
            {
              v39 = *(_QWORD *)(v33 + 864);
            }
            if ( v39 )
              ++*(_DWORD *)(v39 + 8);
            if ( v97 )
            {
              v103 = *(_DWORD *)(v97 + 8);
              *(_DWORD *)(v97 + 8) = v103 - 1;
              if ( v103 == 1 )
                sub_15D7BC0(v113, v97);
            }
            v40 = a1[3];
            v41 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 96LL);
            if ( a5 )
            {
              v41(a1[3], 1, v39, 0, 0);
              goto LABEL_48;
            }
            v80 = a1[1];
            if ( !*(_WORD *)(v39 + 4)
              && (v81 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL)) != nullptr
              && !*v81
              && v81[1] == 8
              && *(_DWORD *)(v39 + 24) == 1 )
            {
              v83 = *(_QWORD *)(v39 + 32);
              if ( !v83 )
                goto LABEL_167;
LABEL_166:
              ++*(_DWORD *)(v83 + 8);
            }
            else
            {
              v107 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v40 + 96LL);
              v98 = a1[3];
              v82 = sub_15E1A70(a1[1]);
              v40 = v98;
              v41 = v107;
              v83 = v82;
              if ( v82 )
                goto LABEL_166;
            }
LABEL_167:
            v41(v40, 1, v83, 0, 0);
            sub_6BFE30(v83, v80);
            (*(void (__fastcall **)(__int64, __int64, struct _Unwind_Exception *, _QWORD, _QWORD))(*(_QWORD *)a1[3]
                                                                                                 + 96LL))(
              a1[3],
              1,
              v95,
              0,
              0);
LABEL_48:
            v97 = v39;
          }
          else
          {
            (*(void (__fastcall **)(__int64, __int64, struct _Unwind_Exception *, _QWORD, _QWORD))(*(_QWORD *)a1[3]
                                                                                                 + 96LL))(
              a1[3],
              1,
              v95,
              0,
              0);
          }
          sub_14EC390(a1 + 43, v101, *(_QWORD *)(a1[1] + 856), a11);
          v42 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v120);
          sub_182CBA0(v42, &v122);
          if ( !v23 )
            goto LABEL_52;
          v21 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( !v21 )
            goto LABEL_52;
          goto LABEL_51;
        }
        if ( v116 )
          goto LABEL_134;
      }
      else
      {
        v27 = *(_DWORD *)(v25 + 16);
        BYTE4(v122) &= ~1u;
        LODWORD(v122) = v27;
        v28 = v22;
        if ( a8 == (_DWORD)v22 && v114 )
          goto LABEL_24;
      }
      if ( v28 >= a8 || !v114 )
      {
        if ( a7 )
          sub_6CD9A0(a1 + 4, (int *)&v120, v23, a9, a10, (__int64 *)v118);
        else
          sub_6CD9A0(a1 + 4, a9, a10, (int *)&v120, v23, (__int64 *)v118);
        goto LABEL_120;
      }
LABEL_134:
      if ( a7 )
        sub_6CDD00(a1 + 4, (int *)&v120, v23, a9, a10, (__int64 *)v118);
      else
        sub_6CDD00(a1 + 4, a9, a10, (int *)&v120, v23, (__int64 *)v118);
LABEL_120:
      sub_14B9B80(a1 + 8, v118);
      sub_14EC390(a1 + 43, v95, *(_QWORD *)v118, a11);
      v72 = a1[3];
      v73 = *(_QWORD *)v118;
      v74 = a1[1];
      v75 = *(void (__fastcall **)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD))(*(_QWORD *)v72 + 96LL);
      if ( !WORD2(v95->exception_class) )
      {
        v76 = *(_DWORD **)(v95->private_1 + 24);
        if ( v76 )
        {
          if ( !*v76 && v76[1] == 8 && LODWORD(v95->private_2) == 1 )
          {
            exception_class = v95[1].exception_class;
            if ( !exception_class )
              goto LABEL_125;
LABEL_124:
            ++*(_DWORD *)(exception_class + 8);
            goto LABEL_125;
          }
        }
      }
      v112 = *(_QWORD *)v118;
      v110 = *(void (__fastcall **)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD))(*(_QWORD *)v72 + 96LL);
      v106 = a1[3];
      v77 = sub_15E1A70(a1[1]);
      v72 = v106;
      v75 = v110;
      exception_class = v77;
      v73 = v112;
      if ( v77 )
        goto LABEL_124;
LABEL_125:
      v75(v72, 1, exception_class, v73, 0);
      if ( exception_class )
      {
        v21 = (*(_DWORD *)(exception_class + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v74, exception_class);
      }
      v79 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v120);
      sub_182CBA0(v79, &v122);
      if ( !v23 )
        goto LABEL_52;
      v21 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( !v21 )
        goto LABEL_52;
LABEL_51:
      sub_15D7BC0(v93, v23);
LABEL_52:
      if ( ++v22 == v102 )
        goto LABEL_53;
    }
  }
  do
  {
    v94 = a1[1];
    if ( a7 )
    {
      v96 = *(struct _Unwind_Exception **)(a2[25] + 8 * v22);
      v48 = *(_QWORD *)(a2[13] + 8 * v22);
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      v49 = a2[18];
    }
    else
    {
      v96 = *(struct _Unwind_Exception **)(a2[27] + 8 * v22);
      v48 = *(_QWORD *)(a2[15] + 8 * v22);
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      v49 = a2[19];
    }
    v120 = 0;
    v121 = 0;
    v122 = 1;
    v50 = 32 * v22 + v49;
    v123 = 0;
    v51 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v50 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v120, v50);
    else
      LODWORD(v120) = *(_DWORD *)v50;
    if ( (*(_BYTE *)(v50 + 20) & 1) != 0 )
    {
      sub_182C690(v51, &v122, v50 + 16);
    }
    else
    {
      v52 = *(_DWORD *)(v50 + 16);
      BYTE4(v122) &= ~1u;
      LODWORD(v122) = v52;
    }
    if ( a8 == (_DWORD)v22 && v114 )
    {
      if ( !v115 )
      {
        (*(void (__fastcall **)(__int64, __int64, struct _Unwind_Exception *, _QWORD, _QWORD))(*(_QWORD *)a1[3] + 96LL))(
          a1[3],
          1,
          v96,
          0,
          0);
        goto LABEL_65;
      }
      v53 = *(_DWORD **)(sub_15D1F10(a3) + 24);
      if ( !v53 || *v53 != 5 || (v54 = a1 + 31, v53[1] != 1) )
        v54 = a1 + 37;
      v55 = *v54;
      sub_6C19A0((__int64)(a1 + 4), (__int64)a9, a3);
      v56 = sub_15E1B70(a1[6]);
      v57 = *(_WORD *)(v56 + 4);
      v58 = a1[6];
      v59 = v56;
      if ( v57 || (v60 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL)) == nullptr || *v60 != 5 || v60[1] )
      {
        if ( *(_WORD *)(v55 + 4) || (v61 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL)) == nullptr || *v61 != 5 || v61[1] )
        {
          if ( *(_DWORD *)v55 >= *(_DWORD *)v59 )
          {
            v57 = *(_WORD *)(v55 + 4);
            v62 = v55;
            v55 = v59;
            v59 = v62;
          }
        }
        else
        {
          v90 = v55;
          v57 = 0;
          v55 = v59;
          v59 = v90;
        }
      }
      if ( v55 == v59 )
      {
        v44 = *(_QWORD *)(v58 + 856);
      }
      else if ( *(_WORD *)(v55 + 4)
             || (v63 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL)) == nullptr
             || *v63 != 5
             || v63[1]
             || v57
             || (v91 = *(_DWORD **)(*(_QWORD *)(v59 + 16) + 24LL)) == nullptr
             || *v91 != 5
             || v91[1] )
      {
        v44 = sub_15E1B70(v58);
      }
      else
      {
        v44 = *(_QWORD *)(v58 + 864);
      }
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      if ( v97 )
      {
        v104 = *(_DWORD *)(v97 + 8);
        *(_DWORD *)(v97 + 8) = v104 - 1;
        if ( v104 == 1 )
          sub_15D7BC0(v113, v97);
      }
      v45 = a1[3];
      v46 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v45 + 96LL);
      if ( v116 )
      {
        v46(a1[3], 1, v44, 0, 0);
LABEL_64:
        v97 = v44;
LABEL_65:
        sub_14EC390(a1 + 43, v101, *(_QWORD *)(a1[1] + 856), a11);
        v47 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v120);
        sub_182CBA0(v47, &v122);
        if ( v48 )
        {
          v21 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v21 )
            goto LABEL_67;
        }
        goto LABEL_68;
      }
      v84 = a1[1];
      if ( !*(_WORD *)(v44 + 4)
        && (v85 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL)) != nullptr
        && !*v85
        && v85[1] == 8
        && *(_DWORD *)(v44 + 24) == 1 )
      {
        v87 = *(_QWORD *)(v44 + 32);
        if ( !v87 )
          goto LABEL_173;
      }
      else
      {
        v108 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v45 + 96LL);
        v99 = a1[3];
        v86 = sub_15E1A70(a1[1]);
        v45 = v99;
        v46 = v108;
        v87 = v86;
        if ( !v86 )
        {
LABEL_173:
          v46(v45, 1, v87, 0, 0);
          sub_6BFE30(v87, v84);
          (*(void (__fastcall **)(__int64, __int64, struct _Unwind_Exception *, _QWORD, _QWORD))(*(_QWORD *)a1[3] + 96LL))(
            a1[3],
            1,
            v96,
            0,
            0);
          goto LABEL_64;
        }
      }
      ++*(_DWORD *)(v87 + 8);
      goto LABEL_173;
    }
    if ( v116 || (unsigned int)v22 < a8 && v114 )
    {
      if ( a7 )
        sub_6CDD00(a1 + 4, (int *)&v120, v48, a9, a10, (__int64 *)v118);
      else
        sub_6CDD00(a1 + 4, a9, a10, (int *)&v120, v48, (__int64 *)v118);
    }
    else if ( a7 )
    {
      sub_6CD9A0(a1 + 4, (int *)&v120, v48, a9, a10, (__int64 *)v118);
    }
    else
    {
      sub_6CD9A0(a1 + 4, a9, a10, (int *)&v120, v48, (__int64 *)v118);
    }
    sub_14B9B80(a1 + 8, v118);
    sub_14EC390(a1 + 43, v96, *(_QWORD *)v118, a11);
    v64 = a1[3];
    v65 = *(_QWORD *)v118;
    v66 = a1[1];
    v67 = *(void (__fastcall **)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD))(*(_QWORD *)v64 + 96LL);
    if ( !WORD2(v96->exception_class) )
    {
      v68 = *(_DWORD **)(v96->private_1 + 24);
      if ( v68 )
      {
        if ( !*v68 && v68[1] == 8 && LODWORD(v96->private_2) == 1 )
        {
          v70 = v96[1].exception_class;
          if ( !v70 )
            goto LABEL_110;
LABEL_109:
          ++*(_DWORD *)(v70 + 8);
          goto LABEL_110;
        }
      }
    }
    v111 = *(_QWORD *)v118;
    v109 = *(void (__fastcall **)(__int64, __int64, _Unwind_Exception_Class, __int64, _QWORD))(*(_QWORD *)v64 + 96LL);
    v105 = a1[3];
    v69 = sub_15E1A70(a1[1]);
    v64 = v105;
    v67 = v109;
    v70 = v69;
    v65 = v111;
    if ( v69 )
      goto LABEL_109;
LABEL_110:
    v67(v64, 1, v70, v65, 0);
    if ( v70 )
    {
      v21 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v66, v70);
    }
    v71 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v120);
    sub_182CBA0(v71, &v122);
    if ( v48 )
    {
      v21 = (*(_DWORD *)(v48 + 8))-- == 1;
      if ( v21 )
LABEL_67:
        sub_15D7BC0(v94, v48);
    }
LABEL_68:
    ++v22;
  }
  while ( v102 != v22 );
LABEL_53:
  sub_6BFE30(v97, v113);
  return sub_6BFE30(*(__int64 *)v118, v119);
}

