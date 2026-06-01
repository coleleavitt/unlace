void *__fastcall sub_DEDDD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v4; // rax
  char *v5; // rbx
  char **v6; // rbp
  __int64 v7; // rdx
  char **v8; // rax
  char *v9; // rbx
  char **v10; // rbp
  __int64 v11; // rdx
  char **v12; // rax
  char *v13; // rbx
  char **v14; // rbp
  __int64 v15; // rdx
  char **v16; // rax
  char *v17; // rbx
  char **v18; // rbp
  __int64 v19; // rdx
  void *v20; // rbp
  _QWORD *v21; // rbp
  char **exception; // rax
  char *v23; // r12
  char **v24; // rbp
  __int64 v25; // rdx
  char **v26; // rax
  char *v27; // r12
  char **v28; // rbp
  __int64 v29; // rdx
  char **v30; // rax
  char *v31; // r12
  char **v32; // rbp
  __int64 v33; // rdx
  unsigned int v35; // eax
  unsigned int v36; // r13d
  unsigned int v37; // ebp
  _DWORD *v38; // rax
  _DWORD *v39; // r12
  unsigned int v40; // ebx
  __int64 v41; // rbx
  __int64 v43; // rax
  double v44; // xmm0_8
  __int64 v45; // rax
  __int64 v46; // rax
  const char *v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  char **v63; // rax
  char *v64; // rbx
  char **v65; // rbp
  __int64 v66; // rdx
  int v67; // [rsp+0h] [rbp-D8h]
  __int64 *v68; // [rsp+8h] [rbp-D0h]
  void *v69; // [rsp+10h] [rbp-C8h]
  void **v70; // [rsp+18h] [rbp-C0h]
  int v71[2]; // [rsp+20h] [rbp-B8h]
  __int64 v72; // [rsp+28h] [rbp-B0h]
  int v73; // [rsp+30h] [rbp-A8h] BYREF
  int v74[2]; // [rsp+38h] [rbp-A0h] BYREF
  void *v75; // [rsp+40h] [rbp-98h] BYREF
  __int64 v76; // [rsp+48h] [rbp-90h]
  __int64 v77; // [rsp+50h] [rbp-88h] BYREF
  int v78; // [rsp+58h] [rbp-80h]
  void *v79; // [rsp+60h] [rbp-78h] BYREF
  __int64 v80; // [rsp+68h] [rbp-70h]
  __int64 v81; // [rsp+70h] [rbp-68h] BYREF
  int v82; // [rsp+78h] [rbp-60h]
  void *v83; // [rsp+80h] [rbp-58h] BYREF
  __int64 v84; // [rsp+88h] [rbp-50h]
  __int64 v85; // [rsp+90h] [rbp-48h] BYREF
  int v86; // [rsp+98h] [rbp-40h]
  int v87; // [rsp+A0h] [rbp-38h]
  void *v88; // [rsp+A8h] [rbp-30h]
  int v89; // [rsp+B0h] [rbp-28h]
  __int64 v90; // [rsp+B8h] [rbp-20h]

  v69 = a1;
  *(_QWORD *)v71 = a4;
  v35 = sub_17F7190(a3);
  if ( v35 <= 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x30u);
    v23 = *(char **)(a3 + 8);
    v24 = exception;
    sub_17BA1E((__int64 *)&v83, "invalid using-params combinator, at least one argument expected", v25);
    *v24 = (char *)off_1C63128;
    sub_2333C0(v24 + 1, &v83);
    v24[5] = v23;
    *v24 = (char *)off_1C64218;
    sub_233E40((__int64)&v83);
    __cxa_throw(v24, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v36 = v35;
  v37 = 2;
  *a1 = 0;
  v68 = (__int64 *)&v83;
  v70 = &v79;
  if ( v35 != 2 )
  {
    while ( 2 )
    {
      v38 = (_DWORD *)sub_17F71A0(a3, v37);
      v39 = v38;
      v40 = v37 + 1;
      if ( *v38 != 4 )
      {
        v26 = (char **)__cxa_allocate_exception(0x30u);
        v27 = *((char **)v39 + 1);
        v28 = v26;
        sub_17BA1E((__int64 *)&v83, "invalid using-params combinator, keyword expected", v29);
        *v28 = (char *)off_1C63128;
        sub_2333C0(v28 + 1, &v83);
        v28[5] = v27;
        *v28 = (char *)off_1C64218;
        sub_233E40((__int64)&v83);
        __cxa_throw(v28, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      if ( v36 == v40 )
      {
        v30 = (char **)__cxa_allocate_exception(0x30u);
        v31 = *((char **)v39 + 1);
        v32 = v30;
        sub_17BA1E((__int64 *)&v83, "invalid using-params combinator, parameter value expected", v33);
        *v32 = (char *)off_1C63128;
        sub_2333C0(v32 + 1, &v83);
        v32[5] = v31;
        *v32 = (char *)off_1C64218;
        sub_233E40((__int64)&v83);
        __cxa_throw(v32, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      v79 = (void *)sub_17F7170(v38);
      sub_185B3A0(v68, v70);
      sub_180C5A0(&v73, v83);
      if ( v83 != &v85 )
        operator delete(v83, v85 + 1);
      v41 = sub_17F71A0(a3, v40);
      v37 += 2;
      switch ( sub_1857FB0(*(_QWORD *)v71, &v73) )
      {
        case 0LL:
          if ( *(_DWORD *)v41 != 1
            || (v45 = sub_17F7150(v41), (*(_BYTE *)(v45 + 20) & 1) != 0)
            || *(_DWORD *)(v45 + 16) != 1
            || (v72 = v45, !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, v45))
            || (unsigned __int64)sub_182D020(qword_1C7F2C0, v72) >> 32 )
          {
            v4 = (char **)__cxa_allocate_exception(0x30u);
            v5 = *(char **)(v41 + 8);
            v6 = v4;
            sub_17BA1E(v68, "invalid parameter value, unsigned integer expected", v7);
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v68);
            v6[5] = v5;
            *v6 = (char *)off_1C64218;
            sub_233E40((__int64)v68);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v46 = sub_17F7150(v41);
          sub_182D020(qword_1C7F2C0, v46);
          sub_1862850(v69, &v73);
          goto LABEL_10;
        case 1LL:
          if ( *(_DWORD *)v41 != 5 )
            goto LABEL_50;
          v47 = (const char *)sub_17F7170(v41);
          *(_QWORD *)v74 = v47;
          if ( !v47 )
            goto LABEL_33;
          if ( ((unsigned __int8)v47 & 7) == 1 )
          {
            sub_180CE20(
              (int)&v75,
              (int)v74,
              v48,
              v49,
              v50,
              v51,
              v67,
              v68,
              (int)v69,
              (__int64)v70,
              v71[0],
              v72,
              v73,
              v74[0],
              (int)v75,
              v76,
              v77,
              v78,
              (int)v79,
              v80,
              v81,
              v82,
              (int)v83,
              v84,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90);
            if ( v76 == 4 && *(_DWORD *)v75 == 1702195828 )
            {
              if ( v75 != &v77 )
                operator delete(v75, v77 + 1);
              goto LABEL_26;
            }
            if ( v75 != &v77 )
              operator delete(v75, v77 + 1);
          }
          else if ( !strcmp(v47, "true") )
          {
            goto LABEL_26;
          }
LABEL_33:
          v58 = sub_17F7170(v41);
          v83 = (void *)v58;
          if ( !v58 )
            goto LABEL_50;
          if ( (v58 & 7) == 1 )
          {
            sub_180CE20(
              (int)v70,
              (int)v68,
              v59,
              v60,
              v61,
              v62,
              v67,
              v68,
              (int)v69,
              (__int64)v70,
              v71[0],
              v72,
              v73,
              v74[0],
              (int)v75,
              v76,
              v77,
              v78,
              (int)v79,
              v80,
              v81,
              v82,
              (int)v83,
              v84,
              v85,
              v86,
              v87,
              v88,
              v89,
              v90);
            if ( v80 != 5 || *(_DWORD *)v79 != 1936482662 || *((_BYTE *)v79 + 4) != 101 )
            {
              if ( v79 != &v81 )
                operator delete(v79, v81 + 1);
LABEL_50:
              v63 = (char **)__cxa_allocate_exception(0x30u);
              v64 = *(char **)(v41 + 8);
              v65 = v63;
              sub_17BA1E(v68, "invalid parameter value, true or false expected", v66);
              *v65 = (char *)off_1C63128;
              sub_2333C0(v65 + 1, v68);
              v65[5] = v64;
              *v65 = (char *)off_1C64218;
              sub_233E40((__int64)v68);
              __cxa_throw(v65, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
            }
            if ( v79 != &v81 )
              operator delete(v79, v81 + 1);
          }
          else if ( strcmp((const char *)v58, "false") )
          {
            goto LABEL_50;
          }
LABEL_26:
          v52 = sub_17F7170(v41);
          v79 = (void *)v52;
          if ( !v52 )
          {
            v57 = 0;
            goto LABEL_29;
          }
          if ( (v52 & 7) != 1 )
          {
            v57 = strcmp((const char *)v52, "true") == 0;
            goto LABEL_29;
          }
          sub_180CE20(
            (int)v68,
            (int)v70,
            v53,
            v54,
            v55,
            v56,
            v67,
            v68,
            (int)v69,
            (__int64)v70,
            v71[0],
            v72,
            v73,
            v74[0],
            (int)v75,
            v76,
            v77,
            v78,
            (int)v79,
            v80,
            v81,
            v82,
            (int)v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90);
          if ( v84 != 4 || *(_DWORD *)v83 != 1702195828 )
          {
            v57 = 0;
            if ( v83 == &v85 )
              goto LABEL_29;
LABEL_40:
            LODWORD(v72) = v57;
            operator delete(v83, v85 + 1);
            v57 = (unsigned int)v72;
            goto LABEL_29;
          }
          v57 = 1;
          if ( v83 != &v85 )
            goto LABEL_40;
LABEL_29:
          sub_1862620(v69, &v73, v57);
LABEL_10:
          if ( v37 >= v36 )
            return v69;
          continue;
        case 2LL:
          if ( *(_DWORD *)v41 != 1 )
          {
            v16 = (char **)__cxa_allocate_exception(0x30u);
            v17 = *(char **)(v41 + 8);
            v18 = v16;
            sub_17BA1E(v68, "invalid parameter value, numeral expected", v19);
            *v18 = (char *)off_1C63128;
            sub_2333C0(v18 + 1, v68);
            v18[5] = v17;
            *v18 = (char *)off_1C64218;
            sub_233E40((__int64)v68);
            __cxa_throw(v18, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v43 = sub_17F7150(v41);
          v44 = sub_184BE10(qword_1C7F2C0, v43);
          sub_1862A90(v69, &v73, v44);
          goto LABEL_10;
        case 3LL:
          if ( *(_DWORD *)v41 != 1 )
          {
            v8 = (char **)__cxa_allocate_exception(0x30u);
            v9 = *(char **)(v41 + 8);
            v10 = v8;
            sub_17BA1E(v68, "invalid parameter value, numeral expected", v11);
            *v10 = (char *)off_1C63128;
            sub_2333C0(v10 + 1, v68);
            v10[5] = v9;
            *v10 = (char *)off_1C64218;
            sub_233E40((__int64)v68);
            __cxa_throw(v10, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          sub_17F7150(v41);
          sub_18624D0(v69, &v73);
          goto LABEL_10;
        case 8LL:
          if ( *(_DWORD *)v41 != 5 )
          {
            v12 = (char **)__cxa_allocate_exception(0x30u);
            v13 = *(char **)(v41 + 8);
            v14 = v12;
            sub_17BA1E(v68, "invalid parameter value, symbol expected", v15);
            *v14 = (char *)off_1C63128;
            sub_2333C0(v14 + 1, v68);
            v14[5] = v13;
            *v14 = (char *)off_1C64218;
            sub_233E40((__int64)v68);
            __cxa_throw(v14, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
          }
          v83 = (void *)sub_17F7170(v41);
          sub_1862F10(v69, &v73, v68);
          goto LABEL_10;
        case 19LL:
          v20 = __cxa_allocate_exception(0x30u);
          sub_DF2170(
            v20,
            "invalid using-params combinator, unknown parameter ",
            &v73,
            *(unsigned int *)(v41 + 8),
            *(unsigned int *)(v41 + 12));
          __cxa_throw(v20, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        default:
          v21 = __cxa_allocate_exception(0x30u);
          sub_305660(v21, "invalid using-params combinator, unsupported parameter kind");
          __cxa_throw(v21, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
    }
  }
  return v69;
}

