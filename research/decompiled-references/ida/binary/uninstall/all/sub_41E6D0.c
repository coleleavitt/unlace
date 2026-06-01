__int64 __fastcall sub_41E6D0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r8d
  int v7; // r15d
  int v8; // r14d
  int v11; // ebp
  _BYTE *v12; // rax
  __int64 v13; // rdi
  const char *v14; // rcx
  __int64 v15; // rdx
  int v16; // esi
  _BOOL4 v17; // ecx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int8 *v23; // rdx
  int v24; // eax
  int v25; // r8d
  int v26; // ebp
  __int64 v27; // rdi
  _BYTE *v28; // r14
  int v30; // eax
  unsigned int v31; // edx
  const char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rax
  bool v37; // zf
  const char *v38; // rdi
  __int64 v39; // rcx
  _BYTE *v40; // rsi
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rsi
  _QWORD *v49; // rax
  int v50; // r9d
  unsigned __int8 *v51; // rdx
  _DWORD *v52; // rcx
  int v53; // eax
  int v54; // ebx
  __int64 v55; // rax
  int v56; // edx
  int v57; // r8d
  signed int j; // r15d
  __int64 v59; // rdi
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  int v65; // ebp
  __int64 v66; // rdi
  _BYTE *v67; // rax
  __int64 v68; // rdi
  const char *v69; // rdx
  char *v70; // rcx
  const char *v71; // rsi
  __int64 *v72; // rax
  __int64 *v73; // rax
  int i; // r15d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rdi
  __int64 v80; // rsi
  unsigned int v81; // r8d
  unsigned int v82; // ebx
  int v83; // r9d
  char *v84; // rcx
  int v85; // edi
  __int64 v86; // rax
  __int64 v87; // rdx
  int v88; // ecx
  int v89; // r8d
  int v90; // r9d
  int *v91; // rdi
  int v92; // eax
  __int64 v93; // rax
  __int64 *v94; // rax
  __int64 v95; // [rsp+18h] [rbp-E0h]
  __int64 v96; // [rsp+20h] [rbp-D8h]
  int (**v97)(const char *, const char *); // [rsp+28h] [rbp-D0h]
  _QWORD *v98; // [rsp+30h] [rbp-C8h]
  __int64 v99; // [rsp+38h] [rbp-C0h]
  int v100; // [rsp+40h] [rbp-B8h]
  int v101; // [rsp+44h] [rbp-B4h]
  __int64 v103; // [rsp+50h] [rbp-A8h]
  _BYTE *v104; // [rsp+58h] [rbp-A0h]
  __int64 v105; // [rsp+60h] [rbp-98h]
  unsigned int v106; // [rsp+6Ch] [rbp-8Ch]
  unsigned int v107; // [rsp+70h] [rbp-88h]
  int v108; // [rsp+74h] [rbp-84h]
  int v109; // [rsp+78h] [rbp-80h] BYREF
  int v110; // [rsp+7Ch] [rbp-7Ch] BYREF
  __int64 v111; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v112; // [rsp+8Ch] [rbp-6Ch] BYREF
  __int64 v113; // [rsp+90h] [rbp-68h] BYREF
  __int64 v114; // [rsp+98h] [rbp-60h]
  int v115; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v116; // [rsp+A8h] [rbp-50h]

  v6 = a3;
  v7 = 0;
  v8 = 0;
  v11 = 1;
  v110 = a3;
  v101 = 0;
  v99 = 0;
  v97 = &strcmp;
  LODWORD(v12) = a3 - 2;
  v104 = nullptr;
  v103 = 0;
  v107 = 0;
  v106 = 0;
  if ( a3 - 2 <= 1 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a4 + 8LL * v11);
    v12 = *(_BYTE **)(v13 + 8);
    if ( !v12 )
      v12 = (_BYTE *)sub_47B3B0(v13);
    if ( *v12 != 45 )
      goto LABEL_35;
    if ( (unsigned int)sub_4584C0(
                         a2,
                         *(_QWORD *)(a4 + 8LL * v11),
                         (unsigned int)off_654320,
                         8,
                         (unsigned int)"option",
                         0,
                         (__int64)&v112) )
      return 1;
    LODWORD(v12) = v112;
    if ( v112 == 3 )
    {
      v6 = v110;
      if ( v110 - 2 <= ++v11 )
      {
        v70 = " option";
        v69 = "-matchvar";
        goto LABEL_133;
      }
      v103 = *(_QWORD *)(a4 + 8LL * v11);
      goto LABEL_38;
    }
    if ( v112 <= 3 )
    {
      if ( v112 != 2 )
      {
LABEL_9:
        if ( v8 )
        {
          v79 = *(_QWORD *)(a4 + 8LL * v11);
          v80 = *(_QWORD *)(v79 + 8);
          if ( !v80 )
            LODWORD(v80) = sub_47B3B0(v79);
          sub_48B710(
            a2,
            (unsigned int)"bad option \"",
            v80,
            (unsigned int)"\": ",
            (unsigned int)off_654320[v7],
            (unsigned int)" option already found");
          return 1;
        }
        v8 = 1;
        v7 = v112;
        goto LABEL_11;
      }
      v6 = v110;
      if ( v110 - 2 <= ++v11 )
      {
        v70 = " option";
        v69 = "-indexvar";
LABEL_133:
        v71 = "missing variable name argument to ";
LABEL_112:
        sub_48B710(a2, (_DWORD)v71, (_DWORD)v69, (_DWORD)v70, 0, a6);
        return 1;
      }
      v104 = *(_BYTE **)(a4 + 8LL * v11);
LABEL_38:
      v107 = -1;
      goto LABEL_12;
    }
    if ( v112 != 4 )
      break;
    v106 = 1;
    v97 = (int (**)(const char *, const char *))sub_49C640;
LABEL_11:
    v6 = v110;
LABEL_12:
    LODWORD(v12) = v6 - 2;
    if ( v6 - 2 <= ++v11 )
      goto LABEL_13;
  }
  if ( v112 != 6 )
    goto LABEL_9;
  ++v11;
LABEL_35:
  v6 = v110;
LABEL_13:
  v14 = "?switches? string pattern body ... ?default body?";
  v15 = a4;
  v16 = v6 - v11;
  if ( v6 - v11 <= 1 )
  {
LABEL_108:
    sub_458930(a2, 1, v15, v14);
    return 1;
  }
  LOBYTE(v15) = v104 != nullptr;
  v17 = v7 != 5;
  if ( (v17 & (unsigned int)v15) != 0 )
  {
    v32 = "-indexvar option requires -regexp option";
LABEL_50:
    sub_48B710(a2, (_DWORD)v32, 0, v17, v6, a6);
    return 1;
  }
  LOBYTE(v12) = v103 != 0;
  if ( (v17 & (unsigned int)v12) != 0 )
  {
    v32 = "-matchvar option requires -regexp option";
    goto LABEL_50;
  }
  v18 = v16 - 1;
  v19 = *(_QWORD *)(a4 + 8LL * v11);
  v20 = a4 + 8LL * v11;
  v100 = v11 + 1;
  v110 = v16 - 1;
  v108 = 0;
  v21 = v20 + 8;
  v105 = v19;
  if ( v16 != 2 )
    goto LABEL_17;
  v99 = *(_QWORD *)(v20 + 8);
  if ( *(_UNKNOWN ***)(v99 + 24) == &off_655E20 )
  {
    v78 = *(_QWORD *)(v99 + 32);
    v18 = *(_DWORD *)(v78 + 8);
    v111 = v78 + 16;
    v110 = v18;
  }
  else
  {
    v61 = sub_46FD90(a2, v99, &v110, &v111);
    v31 = 1;
    if ( v61 )
      return v31;
    v18 = v110;
  }
  if ( v18 <= 0 )
  {
    v15 = a4;
    v14 = "?switches? string {pattern body ... ?default body?}";
    goto LABEL_108;
  }
  v21 = v111;
  v108 = 1;
LABEL_17:
  if ( (v18 & 1) != 0 )
  {
    sub_48B350(a2);
    sub_48B710(a2, (unsigned int)"extra switch pattern with no body", 0, v62, v63, v64);
    v17 = v108;
    if ( !v108 )
      return 1;
    v65 = 0;
    if ( v110 <= 0 )
      return 1;
    while ( 1 )
    {
      v66 = *(_QWORD *)(v21 + 8LL * v65);
      v67 = *(_BYTE **)(v66 + 8);
      if ( !v67 )
        v67 = (_BYTE *)sub_47B3B0(v66);
      if ( *v67 == 35 )
        break;
      v65 += 2;
      if ( v65 >= v110 )
        return 1;
    }
    v32 = ", this may be due to a comment incorrectly placed outside of a switch body - see the \"switch\" documentation";
    goto LABEL_50;
  }
  v22 = *(_QWORD *)(v21 + 8LL * v18 - 8);
  v23 = *(unsigned __int8 **)(v22 + 8);
  if ( !v23 )
    v23 = (unsigned __int8 *)sub_47B3B0(v22);
  v24 = *v23 - 45;
  if ( *v23 == 45 )
    v24 = v23[1];
  if ( !v24 )
  {
    sub_48B350(a2);
    v68 = *(_QWORD *)(v21 + 8LL * v110 - 16);
    v69 = *(const char **)(v68 + 8);
    if ( !v69 )
      LODWORD(v69) = sub_47B3B0(v68);
    v70 = "\"";
    v71 = "no body specified for pattern \"";
    goto LABEL_112;
  }
  v25 = v110;
  v26 = 0;
  if ( v110 <= 0 )
    return 0;
  while ( 2 )
  {
    v27 = *(_QWORD *)(v21 + 8LL * v26);
    if ( !*(_QWORD *)(v27 + 8) )
    {
      v36 = sub_47ACD0(v27, &v109);
      v25 = v110;
      v28 = (_BYTE *)v36;
      if ( v110 - 2 == v26 )
        goto LABEL_57;
      goto LABEL_26;
    }
    v28 = *(_BYTE **)(v27 + 8);
    v109 = *(_DWORD *)(v27 + 16);
    if ( v25 - 2 != v26 )
      goto LABEL_26;
LABEL_57:
    v37 = *v28 == 100;
    if ( *v28 != 100 )
      goto LABEL_26;
    v38 = "default";
    v39 = 8;
    v40 = v28;
    do
    {
      if ( !v39 )
        break;
      v37 = *v40++ == *v38++;
      --v39;
    }
    while ( v37 );
    if ( !v37 )
    {
LABEL_26:
      if ( v7 == 1 )
      {
        v46 = *(_QWORD *)(v105 + 8);
        if ( !v46 )
          v46 = sub_47B3B0(v105);
        if ( (unsigned int)sub_49E600(v46, v28, v106) )
          goto LABEL_79;
        v25 = v110;
      }
      else
      {
        if ( v7 <= 1 )
        {
          if ( v7 )
            goto LABEL_29;
          v47 = *(_QWORD *)(v105 + 8);
          if ( !v47 )
            v47 = sub_47B3B0(v105);
          if ( !((unsigned int (__fastcall *)(__int64, _BYTE *))v97)(v47, v28) )
            goto LABEL_79;
        }
        else
        {
          if ( v7 != 5 )
          {
LABEL_29:
            v26 += 2;
            goto LABEL_30;
          }
          v33 = sub_48AC00(a2, *(_QWORD *)(v21 + 8LL * v26), v106 == 0 ? 3 : 11);
          v34 = v33;
          if ( !v33 )
            return 1;
          v35 = sub_48A6C0(a2, v33, v105, 0, v107, 0);
          if ( v35 < 0 )
            return 1;
          if ( v35 )
          {
            if ( v107 )
            {
              v95 = 0;
              sub_48A470(v34, &v115);
              v96 = 0;
              if ( v103 )
              {
                v96 = sub_496740(v34, &v115);
                *(_DWORD *)v96 = 0;
                v72 = off_656088;
                *(_DWORD *)(v96 + 16) = 0;
                *(_QWORD *)(v96 + 8) = v72;
                *(_QWORD *)(v96 + 24) = 0;
              }
              if ( v104 )
              {
                v95 = sub_496740(v34, &v115);
                *(_DWORD *)v95 = 0;
                v73 = off_656088;
                *(_DWORD *)(v95 + 16) = 0;
                *(_QWORD *)(v95 + 8) = v73;
                *(_QWORD *)(v95 + 24) = 0;
              }
              for ( i = 0; v115 >= i; ++i )
              {
                if ( v104 )
                {
                  v77 = 16LL * i;
                  if ( *(__int64 *)(v77 + v116 + 8) > 0 )
                  {
                    v113 = sub_47BE30(*(_QWORD *)(v77 + v116));
                    v114 = sub_47BE30(*(_QWORD *)(v77 + v116 + 8) - 1LL);
                  }
                  else
                  {
                    v114 = sub_47BD00(0xFFFFFFFFLL);
                    v113 = v114;
                  }
                  v75 = sub_46EEB0(2, &v113);
                  sub_46FBF0(0, v95, v75);
                }
                if ( v103 )
                {
                  v76 = sub_48F420(
                          v105,
                          *(_QWORD *)(16LL * i + v116),
                          (unsigned int)(*(_DWORD *)(16LL * i + v116 + 8) - 1));
                  sub_46FBF0(0, v96, v76);
                }
              }
              if ( v104 && !sub_4A4160(a2, v104, 0, v95, 512) )
              {
                if ( v96 )
                {
                  v30 = *(_DWORD *)v96 - 1;
                  v37 = *(_DWORD *)v96 == 1;
                  *(_DWORD *)v96 = v30;
                  if ( v30 < 0 || v37 )
                    sub_47B120(v96);
                }
                return 1;
              }
              if ( v103 )
              {
                v44 = v96;
                goto LABEL_68;
              }
            }
            goto LABEL_79;
          }
        }
        v25 = v110;
      }
      v26 += 2;
LABEL_30:
      if ( v26 >= v25 )
        return 0;
      continue;
    }
    break;
  }
  v41 = 0;
  if ( v104 )
  {
    v41 = sub_496740(v38, v40);
    *(_DWORD *)v41 = 0;
    v42 = off_656088;
    v40 = v104;
    *(_DWORD *)(v41 + 16) = 0;
    *(_QWORD *)(v41 + 24) = 0;
    *(_QWORD *)(v41 + 8) = v42;
    v38 = (const char *)a2;
    v43 = sub_4A4160(a2, v104, 0, v41, 512);
    v31 = 1;
    if ( !v43 )
      return v31;
  }
  if ( v103 )
  {
    if ( !v41 )
    {
      v41 = sub_496740(v38, v40);
      *(_DWORD *)v41 = 0;
      v94 = off_656088;
      *(_DWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = 0;
      *(_QWORD *)(v41 + 8) = v94;
    }
    v44 = v41;
LABEL_68:
    v45 = sub_4A4160(a2, v103, 0, v44, 512);
    v31 = 1;
    if ( !v45 )
      return v31;
  }
LABEL_79:
  LODWORD(v48) = 72;
  v49 = (_QWORD *)sub_4495F0(a2, 72);
  v51 = *(unsigned __int8 **)(a2 + 952);
  v98 = v49;
  v52 = v49;
  *v49 = *(_QWORD *)v51;
  v49[1] = *((_QWORD *)v51 + 1);
  v49[2] = *((_QWORD *)v51 + 2);
  v49[3] = *((_QWORD *)v51 + 3);
  v49[4] = *((_QWORD *)v51 + 4);
  v49[5] = *((_QWORD *)v51 + 5);
  v49[6] = *((_QWORD *)v51 + 6);
  v49[7] = *((_QWORD *)v51 + 7);
  v49[8] = *((_QWORD *)v51 + 8);
  if ( v108 )
  {
    v53 = *(_DWORD *)v49;
    if ( *v52 == 2 )
    {
      sub_449C70(v52);
      v101 = 1;
      v53 = *(_DWORD *)v98;
    }
    if ( v53 == 4 )
    {
      v54 = *(_DWORD *)(v98[1] + 4LL * v100);
      if ( v54 >= 0 )
      {
        v55 = sub_40FB00(4 * v110);
        v56 = v110;
        LODWORD(v48) = v54;
        v98[1] = v55;
        *((_DWORD *)v98 + 4) = v56;
        sub_41E590(v99, v54, v56, v55, v21);
        goto LABEL_85;
      }
    }
    v48 = sub_40FB00(4 * v110);
    v98[1] = v48;
    LODWORD(v51) = v110;
    *((_DWORD *)v98 + 4) = v110;
    v57 = (int)v51;
    LODWORD(v52) = 0;
    while ( (int)v52 < v57 )
    {
      v93 = (int)v52;
      LODWORD(v52) = (_DWORD)v52 + 1;
      *(_DWORD *)(v48 + 4 * v93) = -1;
      v57 = v110;
    }
  }
  else
  {
LABEL_85:
    v57 = v110;
  }
  for ( j = v26 + 1; ; j += 2 )
  {
    if ( j >= v57 )
      sub_47D740(
        (unsigned int)"fall-out when searching for body to match pattern",
        v48,
        (_DWORD)v51,
        (_DWORD)v52,
        v57,
        v50);
    v59 = *(_QWORD *)(v21 + 8LL * j);
    v51 = *(unsigned __int8 **)(v59 + 8);
    if ( !v51 )
      v51 = (unsigned __int8 *)sub_47B3B0(v59);
    v60 = *v51 - 45;
    if ( *v51 == 45 )
      v60 = v51[1];
    if ( v60 )
      break;
    v57 = v110;
  }
  v81 = j + v100;
  if ( v108 )
    v81 = j;
  v82 = sub_40B720(a2, *(_QWORD *)(v21 + 8LL * j), 0, v98, v81);
  if ( v108 )
  {
    Tcl_Free(v98[1]);
    if ( v101 )
    {
      if ( *(_DWORD *)v98 == 4 )
      {
        v91 = (int *)v98[5];
        v92 = *v91 - 1;
        v37 = *v91 == 1;
        *v91 = v92;
        if ( v92 < 0 || v37 )
          sub_47B120(v91);
      }
    }
  }
  if ( v82 == 1 )
  {
    v84 = "...";
    v85 = 50;
    if ( v109 <= 50 )
    {
      v84 = "";
      v85 = v109;
    }
    v86 = sub_48F930(
            (unsigned int)"\n    (\"%.*s%s\" arm line %d)",
            v85,
            (_DWORD)v28,
            (_DWORD)v84,
            *(_DWORD *)(a2 + 16),
            v83);
    sub_40ABA0(a2, v86, v87, v88, v89, v90);
  }
  sub_449510(a2, v98);
  return v82;
}

