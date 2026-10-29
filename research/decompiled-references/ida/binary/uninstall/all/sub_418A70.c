__int64 __fastcall sub_418A70(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int *v4; // r15
  int v8; // r12d
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rbp
  int *v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 result; // rax
  int v18; // eax
  int *v19; // rdi
  int v20; // eax
  const char *v21; // rsi
  int *v22; // rdi
  int v23; // eax
  int v24; // r12d
  __int64 v25; // rsi
  int v26; // edx
  __int64 v27; // rax
  int v28; // ebp
  bool i; // cc
  int v30; // edx
  int *v31; // rdi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdi
  unsigned int v36; // eax
  int v37; // r12d
  int v38; // ebx
  __int64 v39; // r13
  __int64 v40; // rbp
  int v41; // ebx
  __int64 v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // rax
  int *v45; // rsi
  __int64 v46; // rbp
  __int64 v47; // rdx
  int v48; // eax
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rcx
  bool v55; // zf
  bool v56; // al
  unsigned __int8 *v57; // r8
  bool v58; // zf
  int v59; // eax
  int v60; // r13d
  int v61; // r15d
  int v62; // r12d
  __int64 v63; // rbp
  __int64 v64; // rax
  __int64 v65; // r8
  int v66; // ebx
  unsigned __int8 *v67; // r8
  int v68; // eax
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  int v78; // eax
  __int64 v79; // rax
  int v80; // eax
  int v81; // eax
  __int64 v82; // [rsp+18h] [rbp-100h]
  int (**v83)(const char *, const char *); // [rsp+20h] [rbp-F8h]
  int *v84; // [rsp+28h] [rbp-F0h]
  unsigned int v85; // [rsp+30h] [rbp-E8h]
  int v86; // [rsp+34h] [rbp-E4h]
  int v87; // [rsp+38h] [rbp-E0h]
  __int64 v88; // [rsp+3Ch] [rbp-DCh]
  int v89; // [rsp+44h] [rbp-D4h]
  unsigned int v90; // [rsp+48h] [rbp-D0h]
  int v91; // [rsp+4Ch] [rbp-CCh]
  unsigned __int8 *v92; // [rsp+50h] [rbp-C8h]
  int v93; // [rsp+5Ch] [rbp-BCh] BYREF
  double v94; // [rsp+60h] [rbp-B8h] BYREF
  int v95; // [rsp+6Ch] [rbp-ACh] BYREF
  double v96; // [rsp+70h] [rbp-A8h] BYREF
  int v97; // [rsp+78h] [rbp-A0h] BYREF
  unsigned int v98; // [rsp+7Ch] [rbp-9Ch] BYREF
  int v99; // [rsp+80h] [rbp-98h] BYREF
  int v100; // [rsp+84h] [rbp-94h] BYREF
  __int64 v101; // [rsp+88h] [rbp-90h] BYREF
  __int64 v102; // [rsp+90h] [rbp-88h] BYREF
  int v103; // [rsp+9Ch] [rbp-7Ch] BYREF
  _DWORD v104[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-70h]
  char *v106; // [rsp+B0h] [rbp-68h]
  int v107; // [rsp+B8h] [rbp-60h] BYREF
  char v108; // [rsp+BCh] [rbp-5Ch] BYREF
  __int64 v109; // [rsp+C8h] [rbp-50h]
  unsigned int v110; // [rsp+D0h] [rbp-48h]

  v4 = nullptr;
  v82 = 0;
  v91 = 1;
  v90 = 0;
  v89 = 1;
  v83 = &strcmp;
  v88 = 0;
  v86 = 0;
  v87 = 0;
  v84 = nullptr;
  v99 = 0;
  v85 = 0;
  v105 = 0;
  v104[0] = 1;
  v104[1] = 0;
  v109 = a2;
  v110 = 0;
  v106 = nullptr;
  v107 = 0;
  if ( a3 <= 2 )
  {
    sub_458930(a2, 1, a4, "?options? list pattern");
    return 1;
  }
  v8 = 1;
  if ( a3 - 2 <= 1 )
  {
LABEL_5:
    v12 = a3;
    goto LABEL_6;
  }
  while ( 2 )
  {
    if ( (unsigned int)sub_4584C0(
                         a2,
                         *(_QWORD *)(a4 + 8LL * v8),
                         (unsigned int)off_6540C0,
                         8,
                         (unsigned int)"option",
                         0,
                         (__int64)&v103) )
      goto LABEL_74;
    switch ( v103 )
    {
      case 0:
        HIDWORD(v88) = 1;
        goto LABEL_26;
      case 1:
        v90 = 0;
        goto LABEL_26;
      case 2:
        v89 = 0;
        v104[0] = 0;
        goto LABEL_26;
      case 3:
        v90 = 1;
        goto LABEL_26;
      case 4:
        v91 = 0;
        goto LABEL_26;
      case 5:
        v91 = 1;
        goto LABEL_26;
      case 6:
        v89 = 1;
        v104[0] = 1;
        goto LABEL_26;
      case 7:
        if ( v107 > 1 )
          Tcl_Free((__int64)v106);
        if ( a3 - 4 < v8 )
        {
          if ( v4 )
          {
            v80 = *v4 - 1;
            v55 = *v4 == 1;
            *v4 = v80;
            if ( v80 < 0 || v55 )
              sub_47B120(v4);
          }
          v21 = "\"-index\" option must be followed by list index";
LABEL_33:
          sub_48B710(a2, (_DWORD)v21, 0, v9, v10, v11);
          return 1;
        }
        v24 = v8 + 1;
        v25 = *(_QWORD *)(a4 + 8LL * v24);
        if ( *(_UNKNOWN ***)(v25 + 24) == &off_655E20 )
        {
          v70 = *(_QWORD *)(v25 + 32);
          v71 = v70 + 16;
          LODWORD(v70) = *(_DWORD *)(v70 + 8);
          v102 = v71;
          v107 = v70;
        }
        else if ( (unsigned int)sub_46FD90(a2, v25, &v107, &v102) )
        {
          if ( v4 )
          {
            v81 = *v4 - 1;
            v55 = *v4 == 1;
            *v4 = v81;
            if ( v81 < 0 || v55 )
              sub_47B120(v4);
          }
          return 1;
        }
        v26 = v107;
        if ( v107 )
        {
          if ( v107 == 1 )
          {
            v106 = &v108;
          }
          else
          {
            v27 = sub_40FB00(4 * v107);
            v26 = v107;
            v106 = (char *)v27;
          }
        }
        else
        {
          v106 = nullptr;
        }
        v28 = 0;
        for ( i = v26 <= 0; !i; i = v107 <= v28 )
        {
          if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(v102 + 8LL * v28), 4294967294LL, &v106[4 * v28]) )
          {
            if ( v107 > 1 )
              Tcl_Free((__int64)v106);
            v73 = sub_48F930((unsigned int)"\n    (-index option item number %d)", v28, v30, v9, v10, v11);
            sub_40ABA0(a2, v73, v74, v75, v76, v77);
            return 1;
          }
          ++v28;
        }
        v8 = v24 + 1;
        if ( a3 - 2 > v8 )
          continue;
LABEL_27:
        if ( v86 && !v107 )
        {
          if ( v4 )
          {
            v20 = *v4 - 1;
            v55 = *v4 == 1;
            *v4 = v20;
            if ( v20 < 0 || v55 )
              sub_47B120(v4);
          }
          v21 = "-subindices cannot be used without -index option";
          goto LABEL_33;
        }
        if ( v91 != 2 )
          goto LABEL_5;
        v12 = a3;
        v82 = sub_48AC00(0, *(_QWORD *)(a4 + 8LL * a3 - 8), v85 == 0 ? 19 : 27);
        if ( !v82 )
        {
          v82 = sub_48AC00(a2, *(_QWORD *)(a4 + 8LL * a3 - 8), v85 == 0 ? 3 : 11);
          if ( !v82 )
          {
LABEL_74:
            if ( v4 )
            {
              v31 = v4;
              v32 = *v4 - 1;
              v55 = *v4 == 1;
              *v4 = v32;
              if ( v32 < 0 || v55 )
LABEL_189:
                sub_47B120(v31);
            }
LABEL_76:
            if ( v107 > 1 )
              Tcl_Free((__int64)v106);
            return 1;
          }
        }
LABEL_6:
        v13 = *(int **)(a4 + 8 * v12 - 16);
        if ( *((_UNKNOWN ***)v13 + 3) == &off_655E20 )
        {
          v33 = *((_QWORD *)v13 + 4);
          v14 = v33 + 16;
          LODWORD(v33) = *(_DWORD *)(v33 + 8);
          v101 = v14;
          v100 = v33;
          if ( !v4 )
            goto LABEL_79;
LABEL_9:
          v13 = v4;
          v15 = sub_49FAC0(a2, v4, (unsigned int)(v100 - 1), &v99);
          v16 = *v4 - 1;
          v55 = *v4 == 1;
          *v4 = v16;
          if ( v16 < 0 || v55 )
            sub_47B120(v4);
          if ( !v15 )
          {
            v14 = (unsigned int)v99;
            if ( v99 < 0 )
            {
              v14 = 0;
              v99 = 0;
            }
            if ( v100 - 1 >= (int)v14 )
              goto LABEL_79;
            if ( v107 > 1 )
              Tcl_Free((__int64)v106);
            if ( !v88 )
            {
              v72 = sub_47BD00(0xFFFFFFFFLL);
              sub_48AFD0(a2, v72);
              return 0;
            }
            sub_48B350(a2);
            return 0;
          }
LABEL_39:
          if ( v107 > 1 )
            Tcl_Free((__int64)v106);
          return v15;
        }
        v15 = sub_46FD90(a2, v13, &v100, &v101);
        if ( v15 )
        {
          if ( v4 )
          {
            v22 = v4;
            v23 = *v4 - 1;
            v55 = *v4 == 1;
            *v4 = v23;
            if ( v23 < 0 || v55 )
LABEL_209:
              sub_47B120(v22);
          }
          goto LABEL_39;
        }
        if ( v4 )
          goto LABEL_9;
LABEL_79:
        v34 = *(_QWORD *)(a4 + 8 * v12 - 8);
        v92 = nullptr;
        if ( v91 != 0 && v91 != 3 )
          goto LABEL_86;
        if ( v90 == 2 )
        {
          v35 = a2;
          v36 = sub_47C180(a2, v34, &v97);
LABEL_83:
          v15 = v36;
          if ( !v36 )
          {
            v13 = *(int **)(a4 + 8 * v12 - 16);
            if ( *((_UNKNOWN ***)v13 + 3) == &off_655E20 )
            {
              v79 = *((_QWORD *)v13 + 4);
              v14 = v79 + 16;
              LODWORD(v79) = *(_DWORD *)(v79 + 8);
              v101 = v14;
              v100 = v79;
            }
            else
            {
              v35 = 0;
              sub_46FD90(0, v13, &v100, &v101);
            }
            goto LABEL_88;
          }
          goto LABEL_39;
        }
        if ( v90 >= 2 )
        {
          v35 = a2;
          v36 = sub_47BA50(a2, v34, &v96);
          goto LABEL_83;
        }
LABEL_86:
        v35 = *(_QWORD *)(v34 + 8);
        if ( v35 )
        {
          v92 = *(unsigned __int8 **)(v34 + 8);
          v98 = *(_DWORD *)(v34 + 16);
        }
        else
        {
          v13 = (int *)&v98;
          v35 = *(_QWORD *)(a4 + 8 * v12 - 8);
          v92 = (unsigned __int8 *)sub_47ACD0(v34, &v98);
        }
LABEL_88:
        v103 = -1;
        LOBYTE(v14) = v91 == 3;
        if ( HIDWORD(v88) != 0 || v91 != 3 || v87 )
        {
          if ( HIDWORD(v88) )
          {
            v13 = nullptr;
            v35 = 0;
            v84 = (int *)sub_46EEB0(0, 0);
          }
          v37 = v99;
          while ( v37 < v100 )
          {
            v35 = (unsigned int)v107;
            v38 = 0;
            if ( v107 )
            {
              v39 = v37;
              v35 = *(_QWORD *)(v101 + 8LL * v37);
              v40 = sub_417E40(v35, (__int64)v104);
              if ( v110 )
              {
                if ( v84 )
                {
                  v48 = *v84 - 1;
                  v55 = *v84 == 1;
                  *v84 = v48;
                  if ( v48 < 0 || v55 )
                    sub_47B120(v84);
                }
                if ( v107 > 1 )
                  goto LABEL_177;
                return v110;
              }
            }
            else
            {
              v39 = v37;
              v40 = *(_QWORD *)(v101 + 8LL * v37);
            }
            if ( v91 == 1 )
            {
              v35 = *(_QWORD *)(v40 + 8);
              if ( !v35 )
                v35 = sub_47B3B0(v40);
              v13 = (int *)v92;
              v38 = sub_49E600(v35, v92, v85);
            }
            else if ( v91 == 2 )
            {
              v13 = (int *)v82;
              v35 = a2;
              v38 = sub_48A6C0(a2, v82, v40, 0, 0, 0);
              if ( v38 < 0 )
              {
                v68 = *(_DWORD *)v34 - 1;
                v55 = *(_DWORD *)v34 == 1;
                *(_DWORD *)v34 = v68;
                if ( v68 < 0 || v55 )
                  sub_47B120(v34);
                if ( v84 )
                {
                  v69 = *v84 - 1;
                  v55 = *v84 == 1;
                  *v84 = v69;
                  if ( v69 < 0 || v55 )
                  {
                    v31 = v84;
                    goto LABEL_189;
                  }
                }
                goto LABEL_76;
              }
            }
            else
            {
              if ( v90 == 1 )
              {
                v57 = *(unsigned __int8 **)(v40 + 8);
                if ( !v57 )
                  v57 = (unsigned __int8 *)sub_47B3B0(v40);
                v13 = (int *)v92;
                v35 = (__int64)v57;
                v58 = (unsigned int)sub_417890(v57, v92) == 0;
                goto LABEL_146;
              }
              if ( v90 )
              {
                if ( v90 == 2 )
                {
                  v13 = (int *)v40;
                  v35 = a2;
                  v15 = sub_47C180(a2, v40, &v95);
                  if ( v15 )
                  {
LABEL_206:
                    if ( v84 )
                    {
                      v78 = *v84 - 1;
                      v55 = *v84 == 1;
                      *v84 = v78;
                      if ( v78 < 0 || v55 )
                      {
                        v22 = v84;
                        goto LABEL_209;
                      }
                    }
                    goto LABEL_39;
                  }
                  v56 = v95 == v97;
                  goto LABEL_142;
                }
                v13 = (int *)v40;
                v35 = a2;
                v15 = sub_47BA50(a2, v40, &v94);
                if ( v15 )
                  goto LABEL_206;
                LOBYTE(v14) = 1;
                v38 = v94 == v96;
              }
              else
              {
                v13 = *(int **)(v40 + 8);
                if ( v13 )
                {
                  v52 = *(_DWORD *)(v40 + 16);
                  v53 = *(_QWORD *)(v40 + 8);
                  v93 = v52;
                }
                else
                {
                  v13 = &v93;
                  v35 = v40;
                  v53 = sub_47ACD0(v40, &v93);
                  v52 = v93;
                }
                v14 = v98;
                if ( v98 == v52 )
                {
                  if ( !v85 )
                  {
                    v35 = (__int64)v92;
                    v54 = (int)v98;
                    v13 = (int *)v53;
                    v55 = 1;
                    do
                    {
                      if ( !v54 )
                        break;
                      v55 = *(_BYTE *)v13 == *(_BYTE *)v35;
                      v13 = (int *)((char *)v13 + 1);
                      ++v35;
                      --v54;
                    }
                    while ( v55 );
                    v56 = v55;
                    goto LABEL_142;
                  }
                  v13 = (int *)v92;
                  v35 = v53;
                  v58 = (unsigned int)sub_49C640(v53, v92) == 0;
LABEL_146:
                  v56 = v58;
LABEL_142:
                  v38 = v56;
                }
              }
            }
            if ( v87 )
              v38 = v38 == 0;
            if ( v38 )
            {
              if ( !HIDWORD(v88) )
              {
                v103 = v37;
                goto LABEL_104;
              }
              if ( (_DWORD)v88 )
              {
                if ( v86 && v107 )
                  v46 = sub_417E40(*(_QWORD *)(v101 + 8 * v39), (__int64)v104);
                else
                  v46 = *(_QWORD *)(v101 + 8 * v39);
                goto LABEL_114;
              }
              if ( v86 )
              {
                v49 = 0;
                v46 = sub_47BD00((unsigned int)v37);
                while ( v107 > v49 )
                {
                  v50 = v49++;
                  v51 = sub_47BD00(*(unsigned int *)&v106[4 * v50]);
                  sub_46FBF0(a2, v46, v51);
                }
LABEL_114:
                v47 = v46;
              }
              else
              {
                v47 = sub_47BD00((unsigned int)v37);
              }
              v13 = v84;
              v35 = a2;
              ++v37;
              sub_46FBF0(a2, v84, v47);
              continue;
            }
            ++v37;
          }
LABEL_103:
          if ( HIDWORD(v88) )
          {
            v45 = v84;
          }
          else
          {
LABEL_104:
            if ( (_DWORD)v88 )
            {
              if ( v103 < 0 )
              {
                v64 = sub_47B0B0(v35, v13, v14);
                goto LABEL_167;
              }
              v45 = *(int **)(v101 + 8LL * v103);
            }
            else
            {
              if ( v86 )
              {
                v41 = 0;
                v42 = sub_47BD00((unsigned int)v103);
                while ( v107 > v41 )
                {
                  v43 = v41++;
                  v44 = sub_47BD00(*(unsigned int *)&v106[4 * v43]);
                  sub_46FBF0(a2, v42, v44);
                }
                v45 = (int *)v42;
                goto LABEL_150;
              }
              v64 = sub_47BD00((unsigned int)v103);
LABEL_167:
              v45 = (int *)v64;
            }
          }
LABEL_150:
          sub_48AFD0(a2, v45);
          if ( v107 > 1 )
          {
            Tcl_Free((__int64)v106);
            return 0;
          }
          return 0;
        }
        v59 = v99;
        v60 = v100;
        v61 = v99 - 1;
        while ( 2 )
        {
          if ( v59 == v60 || v110 )
            goto LABEL_103;
          v62 = (v61 + v60) / 2;
          if ( !v107 )
          {
            v63 = *(_QWORD *)(v101 + 8LL * v62);
            goto LABEL_158;
          }
          v63 = sub_417E40(*(_QWORD *)(v101 + 8LL * v62), (__int64)v104);
          result = v110;
          if ( !v110 )
          {
LABEL_158:
            if ( v90 == 1 )
            {
              v67 = *(unsigned __int8 **)(v63 + 8);
              if ( !v67 )
                v67 = (unsigned __int8 *)sub_47B3B0(v63);
              v35 = (__int64)v92;
              v13 = (int *)v67;
              v66 = sub_417890(v92, v67);
            }
            else
            {
              if ( v90 )
              {
                if ( v90 == 2 )
                {
                  v13 = (int *)v63;
                  v35 = a2;
                  v15 = sub_47C180(a2, v63, &v95);
                  if ( v15 )
                    goto LABEL_39;
                  if ( v97 != v95 )
                  {
                    if ( v97 >= v95 )
                      goto LABEL_170;
                    goto LABEL_200;
                  }
                }
                else
                {
                  v13 = (int *)v63;
                  v35 = a2;
                  v15 = sub_47BA50(a2, v63, &v94);
                  if ( v15 )
                    goto LABEL_39;
                  if ( v96 != v94 )
                  {
                    if ( v94 <= v96 )
                    {
LABEL_170:
                      if ( v89 )
                        goto LABEL_171;
                      goto LABEL_164;
                    }
LABEL_200:
                    if ( !v89 )
                    {
LABEL_171:
                      v61 = (v61 + v60) / 2;
                      v59 = v62 + 1;
                      continue;
                    }
                    v60 = (v61 + v60) / 2;
                    goto LABEL_165;
                  }
                }
LABEL_163:
                v103 = (v61 + v60) / 2;
LABEL_164:
                v60 = (v61 + v60) / 2;
LABEL_165:
                v59 = v61 + 1;
                continue;
              }
              v65 = *(_QWORD *)(v63 + 8);
              if ( !v65 )
                v65 = sub_47B3B0(v63);
              v35 = (__int64)v92;
              v13 = (int *)v65;
              v66 = ((__int64 (__fastcall *)(unsigned __int8 *, __int64))v83)(v92, v65);
            }
            if ( v66 )
            {
              if ( v66 > 0 )
                goto LABEL_170;
              goto LABEL_200;
            }
            goto LABEL_163;
          }
          break;
        }
        if ( v107 > 1 )
        {
LABEL_177:
          Tcl_Free((__int64)v106);
          return v110;
        }
        return result;
      case 8:
        LODWORD(v88) = 1;
        goto LABEL_26;
      case 9:
        v90 = 2;
        goto LABEL_26;
      case 10:
        v85 = 1;
        v83 = (int (**)(const char *, const char *))sub_49C640;
        goto LABEL_26;
      case 11:
        v87 = 1;
        goto LABEL_26;
      case 12:
        v90 = 3;
        goto LABEL_26;
      case 13:
        v91 = 2;
        goto LABEL_26;
      case 14:
        v91 = 3;
        goto LABEL_26;
      case 15:
        if ( v4 )
        {
          v18 = *v4 - 1;
          v55 = *v4 == 1;
          *v4 = v18;
          if ( v18 < 0 || v55 )
            sub_47B120(v4);
        }
        if ( a3 - 4 < v8 )
        {
          if ( v107 > 1 )
            Tcl_Free((__int64)v106);
          v21 = "missing starting index";
          goto LABEL_33;
        }
        v19 = *(int **)(a4 + 8LL * ++v8);
        if ( v19 == *(int **)(a4 + 8LL * a3 - 16) )
        {
          v4 = (int *)sub_47B2A0(v19);
        }
        else
        {
          ++*v19;
          v4 = v19;
        }
LABEL_26:
        if ( a3 - 2 <= ++v8 )
          goto LABEL_27;
        continue;
      case 16:
        v86 = 1;
        goto LABEL_26;
      default:
        goto LABEL_26;
    }
  }
}

