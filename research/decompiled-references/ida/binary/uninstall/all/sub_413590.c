__int64 __fastcall sub_413590(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  const char *v15; // rdx
  int v16; // r8d
  const char *v17; // rcx
  const char *v18; // rsi
  char *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  int *v29; // rbx
  int *v30; // rdi
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // r13d
  __int64 v36; // r14
  int v37; // eax
  int *v38; // r13
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rax
  void *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  _DWORD *v47; // rax
  _DWORD *v48; // rbx
  void *v49; // rax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdi
  int v53; // ebx
  __int64 v54; // rax
  const char *v55; // rsi
  int v56; // r8d
  int v57; // edx
  char *v58; // rdi
  int v59; // eax
  char *v60; // rax
  int v61; // r9d
  __int64 v62; // rdi
  __int64 v63; // rax
  const char *v64; // rcx
  const char *v65; // rsi
  int v66; // edx
  __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rsi
  __int64 (__fastcall *v70)(__int64, __int64, __int64); // rdx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // rdi
  int v76; // ebx
  __int64 v77; // rax
  _DWORD *v78; // rax
  _QWORD *v79; // rax
  _DWORD *v80; // rax
  _QWORD *v81; // rax
  int v82; // eax
  int v83; // eax
  __int64 v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  _DWORD *v91; // rbx
  int v92; // r13d
  int v93; // eax
  __int64 v94; // rdi
  __int64 v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rdi
  __int64 v98; // rax
  unsigned int v99; // [rsp+1Ch] [rbp-1BCh] BYREF
  __int64 v100; // [rsp+20h] [rbp-1B8h] BYREF
  int v101; // [rsp+2Ch] [rbp-1ACh] BYREF
  _BYTE v102[8]; // [rsp+30h] [rbp-1A8h] BYREF
  size_t n; // [rsp+38h] [rbp-1A0h]
  __int64 v104; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+118h] [rbp-C0h]
  __int64 v106[3]; // [rsp+120h] [rbp-B8h] BYREF
  int v107; // [rsp+138h] [rbp-A0h]
  int v108; // [rsp+13Ch] [rbp-9Ch]
  __int64 v109; // [rsp+150h] [rbp-88h]
  __int64 v110; // [rsp+168h] [rbp-70h]
  __int64 v111; // [rsp+178h] [rbp-60h]

  v4 = a3;
  if ( a3 > 1 )
  {
    v7 = a4[1];
    v8 = sub_4584C0(a2, v7, (unsigned int)&off_653EE0, 8, (unsigned int)"option", 0, (__int64)&v101);
    v9 = 1;
    if ( v8 )
      return (unsigned int)v9;
    switch ( v101 )
    {
      case 0:
      case 14:
        v20 = "name ?time?";
        if ( (unsigned int)(v4 - 3) > 1 )
          goto LABEL_20;
        v40 = sub_412950(a2, a4[2], (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat, (__int64)v106);
        LODWORD(v9) = 1;
        if ( v40 )
          return (unsigned int)v9;
        if ( v4 != 4 )
          goto LABEL_68;
        v10 = a4[3];
        if ( *(_UNKNOWN ***)(v10 + 24) == &off_6560E0 )
        {
          v12 = *(_QWORD *)(v10 + 32);
          v100 = v12;
        }
        else
        {
          v11 = sub_47BF00(a2, v10, &v100);
          LODWORD(v9) = 1;
          if ( v11 )
            return (unsigned int)v9;
          v12 = v100;
        }
        if ( v101 )
        {
          v105 = v12;
          v104 = v110;
        }
        else
        {
          v104 = v12;
          v105 = v111;
        }
        if ( (unsigned int)sub_46CCD0(a4[2], &v104) )
        {
          sub_46BB60(a2);
          v13 = a4[2];
          v14 = *(_QWORD *)(v13 + 8);
          if ( !v14 )
            LODWORD(v14) = sub_47B3B0(v13);
          v15 = "access";
          v16 = v14;
          v17 = " time for file \"";
          v18 = "could not set ";
          if ( v101 )
            v15 = "modification";
          goto LABEL_14;
        }
        v82 = sub_412950(a2, a4[2], (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat, (__int64)v106);
        LODWORD(v9) = 1;
        if ( !v82 )
        {
LABEL_68:
          v41 = v111;
          if ( !v101 )
            v41 = v110;
          v33 = sub_47BE30(v41);
          goto LABEL_48;
        }
        return (unsigned int)v9;
      case 1:
        LODWORD(v9) = sub_4545D0(a2, (unsigned int)v4, a4);
        return (unsigned int)v9;
      case 2:
        v20 = "?pattern?";
        if ( (unsigned int)(v4 - 2) > 1 )
          goto LABEL_20;
        v25 = 0;
        if ( v4 != 2 )
        {
          v26 = a4[2];
          v25 = *(_QWORD *)(v26 + 8);
          if ( !v25 )
            v25 = sub_47B3B0(v26);
        }
        LODWORD(v9) = sub_45FBC0(a2, v25, v9, v20);
        return (unsigned int)v9;
      case 3:
        LODWORD(v9) = sub_4545B0(a2, (unsigned int)v4, a4);
        return (unsigned int)v9;
      case 4:
        LODWORD(v9) = sub_453E80(a2, (unsigned int)v4, a4);
        return (unsigned int)v9;
      case 5:
        if ( v4 != 3 )
          goto LABEL_19;
        v27 = a4[2];
        v28 = 0;
        goto LABEL_34;
      case 6:
        if ( v4 != 3 )
          goto LABEL_19;
        v23 = a4[2];
        v24 = 1;
        goto LABEL_23;
      case 7:
        if ( v4 != 3 )
          goto LABEL_19;
        v23 = a4[2];
        v24 = 0;
        goto LABEL_23;
      case 8:
        if ( v4 != 3 )
          goto LABEL_19;
        v27 = a4[2];
        v28 = 2;
        goto LABEL_34;
      case 9:
        if ( v4 != 3 )
          goto LABEL_19;
        LOBYTE(v4) = 0;
        if ( (unsigned int)sub_412950(
                             0,
                             a4[2],
                             (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat,
                             (__int64)v106) )
          goto LABEL_47;
        v32 = (v107 & 0xF000) == 0x4000;
        goto LABEL_46;
      case 10:
        if ( v4 != 3 )
          goto LABEL_19;
        LOBYTE(v4) = 0;
        if ( (unsigned int)sub_412950(
                             0,
                             a4[2],
                             (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat,
                             (__int64)v106) )
          goto LABEL_47;
        v32 = (v107 & 0xF000) == 0x8000;
        goto LABEL_46;
      case 11:
        if ( v4 <= 2 )
          goto LABEL_74;
        v33 = sub_4556C0(0, (unsigned int)(v4 - 2), a4 + 2);
        goto LABEL_48;
      case 12:
        v20 = "?-linktype? linkname ?target?";
        if ( (unsigned int)(v4 - 3) > 2 )
          goto LABEL_20;
        v35 = 3;
        if ( v4 == 5 )
        {
          v72 = sub_4584C0(a2, a4[2], (unsigned int)off_653FF0, 8, (unsigned int)"switch", 0, (__int64)&v99);
          LODWORD(v9) = 1;
          if ( v72 )
            return (unsigned int)v9;
          v99 = 2 - (v99 == 0);
        }
        else
        {
          LOBYTE(v35) = 2;
          if ( v4 <= 3 )
          {
            v73 = sub_4806F0(a2, a4[2]);
            v9 = 1;
            if ( v73 )
              return (unsigned int)v9;
            LOBYTE(v9) = 0;
            v38 = (int *)sub_46C490(a4[2], 0, v9);
            if ( !v38 )
            {
              v74 = sub_46BB60(a2);
              v75 = a4[2];
              v76 = v74;
              v77 = *(_QWORD *)(v75 + 8);
              if ( !v77 )
                LODWORD(v77) = sub_47B3B0(v75);
              v55 = "could not read link \"";
              v56 = v76;
              v57 = v77;
LABEL_100:
              sub_48B710(a2, (_DWORD)v55, v57, (unsigned int)"\": ", v56, 0);
              LODWORD(v9) = 1;
              return (unsigned int)v9;
            }
            goto LABEL_61;
          }
          v99 = 3;
        }
        v36 = v35;
        v37 = sub_4806F0(a2, a4[v35]);
        LODWORD(v9) = 1;
        if ( v37 )
          return (unsigned int)v9;
        v38 = (int *)sub_46C490(a4[v35], a4[v35 + 1], v99);
        if ( !v38 )
        {
          v83 = *__errno_location();
          if ( v83 == 17 )
          {
            v88 = a4[v36];
            v89 = *(_QWORD *)(v88 + 8);
            if ( !v89 )
              LODWORD(v89) = sub_47B3B0(v88);
            v64 = "\": that path already exists";
          }
          else
          {
            if ( v83 != 2 )
            {
              sub_46BB60(a2);
              v84 = a4[v36 + 1];
              v85 = *(_QWORD *)(v84 + 8);
              if ( !v85 )
                LODWORD(v85) = sub_47B3B0(v84);
              v86 = a4[v36];
              v87 = *(_QWORD *)(v86 + 8);
              if ( !v87 )
                LODWORD(v87) = sub_47B3B0(v86);
              v17 = "\" pointing to \"";
              v18 = "could not create new link \"";
              v16 = v85;
              LODWORD(v15) = v87;
LABEL_14:
              sub_48B710(a2, (_DWORD)v18, (_DWORD)v15, (_DWORD)v17, v16, (unsigned int)"\": ");
LABEL_15:
              LODWORD(v9) = 1;
              return (unsigned int)v9;
            }
            v90 = sub_482580(a2, a4[v36], 0);
            v91 = (_DWORD *)v90;
            LODWORD(v9) = 1;
            if ( !v90 )
              return (unsigned int)v9;
            v92 = sub_46CF40(v90, 0, 1);
            v93 = *v91 - 1;
            v32 = *v91 == 1;
            *v91 = v93;
            if ( v93 < 0 || v32 )
              sub_47B120(v91);
            if ( !v92 )
            {
              v95 = a4[v36 + 1];
              v96 = *(_QWORD *)(v95 + 8);
              if ( !v96 )
                LODWORD(v96) = sub_47B3B0(v95);
              v97 = a4[v36];
              v98 = *(_QWORD *)(v97 + 8);
              if ( !v98 )
                LODWORD(v98) = sub_47B3B0(v97);
              sub_48B710(
                a2,
                (unsigned int)"could not create new link \"",
                v98,
                (unsigned int)"\": target \"",
                v96,
                (unsigned int)"\" doesn't exist");
              LODWORD(v9) = 1;
              return (unsigned int)v9;
            }
            v94 = a4[v36];
            v89 = *(_QWORD *)(v94 + 8);
            if ( !v89 )
              LODWORD(v89) = sub_47B3B0(v94);
            v64 = "\": no such file or directory";
          }
          v65 = "could not create new link \"";
          v66 = v89;
LABEL_126:
          sub_48B710(a2, (_DWORD)v65, v66, (_DWORD)v64, 0, v61);
          LODWORD(v9) = 1;
          return (unsigned int)v9;
        }
LABEL_61:
        sub_48AFD0(a2, v38);
        if ( v4 != 3 )
          goto LABEL_36;
        v39 = *v38 - 1;
        v32 = *v38 == 1;
        *v38 = v39;
        if ( v39 >= 0 && !v32 )
          goto LABEL_36;
        v30 = v38;
LABEL_64:
        sub_47B120(v30);
        LODWORD(v9) = 0;
        return (unsigned int)v9;
      case 13:
        if ( v4 != 4 )
          goto LABEL_72;
        v69 = a4[2];
        v70 = (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSLstat;
        goto LABEL_132;
      case 15:
        if ( v4 <= 2 )
        {
LABEL_74:
          v20 = "name ?name ...?";
          goto LABEL_20;
        }
        LODWORD(v9) = sub_453290(a2, (unsigned int)v4, a4);
        return (unsigned int)v9;
      case 16:
        if ( v4 != 3 )
          goto LABEL_19;
        v42 = a4[2];
        v43 = *(_QWORD *)(v42 + 8);
        if ( !v43 )
          v43 = sub_47B3B0(v42);
        v44 = (void *)sub_455AB0(a2, v43, v102);
        LODWORD(v9) = 1;
        if ( v44 )
        {
          v45 = sub_48DF10(v44, (unsigned int)n);
          sub_48AFD0(a2, v45);
          sub_49F100(v102);
          LODWORD(v9) = 0;
        }
        return (unsigned int)v9;
      case 17:
        v20 = "filename";
        if ( v4 != 3 )
          goto LABEL_20;
        v33 = sub_481EB0(a2);
        LODWORD(v9) = 1;
        if ( !v33 )
          return (unsigned int)v9;
        goto LABEL_48;
      case 18:
        if ( v4 != 3 )
          goto LABEL_19;
        LOBYTE(v4) = 0;
        if ( (unsigned int)sub_412950(
                             0,
                             a4[2],
                             (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat,
                             (__int64)v106) )
          goto LABEL_47;
        v32 = geteuid() == v108;
LABEL_46:
        v4 = v32;
LABEL_47:
        v33 = sub_47BD00(v4 != 0);
        goto LABEL_48;
      case 19:
        if ( v4 != 3 )
          goto LABEL_19;
        v46 = sub_4807E0(a4[2], v7, 1);
        if ( v46 == 1 )
        {
          v80 = (_DWORD *)sub_496740();
          *v80 = 0;
          v48 = v80;
          v81 = (_QWORD *)sub_40FB00(9);
          *((_QWORD *)v48 + 1) = v81;
          *v81 = 0x65766974616C6572LL;
        }
        else
        {
          if ( v46 )
          {
            if ( v46 != 2 )
            {
LABEL_36:
              LODWORD(v9) = 0;
              return (unsigned int)v9;
            }
            v47 = (_DWORD *)sub_496740();
            *v47 = 0;
            v48 = v47;
            v49 = (void *)sub_40FB00(15);
            *((_QWORD *)v48 + 1) = v49;
            qmemcpy(v49, "volumerelative", 14);
            *(_BYTE *)(*((_QWORD *)v48 + 1) + 14LL) = 0;
            v48[4] = 14;
LABEL_91:
            v34 = (__int64)v48;
            *((_QWORD *)v48 + 3) = 0;
LABEL_49:
            sub_48AFD0(a2, v34);
            LODWORD(v9) = 0;
            return (unsigned int)v9;
          }
          v78 = (_DWORD *)sub_496740();
          *v78 = 0;
          v48 = v78;
          v79 = (_QWORD *)sub_40FB00(9);
          *((_QWORD *)v48 + 1) = v79;
          *v79 = 0x6574756C6F736261LL;
        }
        *(_BYTE *)(*((_QWORD *)v48 + 1) + 8LL) = 0;
        v48[4] = 8;
        goto LABEL_91;
      case 20:
        if ( v4 != 3 )
          goto LABEL_19;
        v23 = a4[2];
        v24 = 4;
        goto LABEL_23;
      case 21:
        if ( v4 != 3 )
          goto LABEL_19;
        v50 = sub_4806F0(a2, a4[2]);
        v9 = 1;
        if ( v50 )
          return (unsigned int)v9;
        LOBYTE(v9) = 0;
        v29 = (int *)sub_46C490(a4[2], 0, v9);
        if ( v29 )
          goto LABEL_35;
        v51 = sub_46BB60(a2);
        v52 = a4[2];
        v53 = v51;
        v54 = *(_QWORD *)(v52 + 8);
        if ( !v54 )
          LODWORD(v54) = sub_47B3B0(v52);
        v55 = "could not readlink \"";
        v56 = v53;
        v57 = v54;
        goto LABEL_100;
      case 22:
        LODWORD(v9) = sub_4545C0(a2, (unsigned int)v4, a4);
        return (unsigned int)v9;
      case 23:
        if ( v4 != 3 )
          goto LABEL_19;
        v27 = a4[2];
        v28 = 3;
        goto LABEL_34;
      case 24:
        v20 = "?name?";
        if ( (unsigned int)(v4 - 2) > 1 )
          goto LABEL_20;
        if ( v4 == 2 )
        {
          v58 = nullptr;
          if ( dword_65A848 )
          {
            if ( dword_65A848 == 2 )
              v58 = "\\";
          }
          else
          {
            v58 = "/";
          }
          v33 = sub_48DF10(v58, 1u);
        }
        else
        {
          v33 = sub_46E1D0(a4[2], v7, 1, "?name?");
          if ( !v33 )
          {
LABEL_112:
            sub_48B860(a2, "Unrecognised path", 0);
            LODWORD(v9) = 1;
            return (unsigned int)v9;
          }
        }
        goto LABEL_48;
      case 25:
        if ( v4 != 3 )
          goto LABEL_19;
        v67 = a4[2];
        v68 = sub_412950(a2, v67, (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat, (__int64)v106);
        LODWORD(v9) = 1;
        if ( v68 )
          return (unsigned int)v9;
        v33 = sub_47CDC0(v109, v67, 1);
        goto LABEL_48;
      case 26:
        if ( v4 != 3 )
          goto LABEL_19;
        v33 = sub_46BD60(a4[2], 0, 1);
        if ( v33 )
          goto LABEL_48;
        if ( !a2 )
          goto LABEL_15;
        v62 = a4[2];
        v63 = *(_QWORD *)(v62 + 8);
        if ( !v63 )
          LODWORD(v63) = sub_47B3B0(v62);
        v64 = "\": no such file or directory";
        v65 = "could not read \"";
        v66 = v63;
        goto LABEL_126;
      case 27:
        if ( v4 != 4 )
        {
LABEL_72:
          v20 = "name varName";
          goto LABEL_20;
        }
        v69 = a4[2];
        v70 = (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSStat;
LABEL_132:
        v71 = sub_412950(a2, v69, v70, (__int64)v106);
        LODWORD(v9) = 1;
        if ( !v71 )
          LODWORD(v9) = sub_412AF0(a2, a4[3], v106);
        return (unsigned int)v9;
      case 28:
        if ( v4 != 3 )
          goto LABEL_19;
        v34 = sub_46E140(a4[2], v7, 1);
        if ( !v34 )
          goto LABEL_112;
        goto LABEL_49;
      case 29:
        if ( v4 != 3 )
          goto LABEL_19;
        v27 = a4[2];
        v28 = 1;
LABEL_34:
        v29 = (int *)sub_482580(a2, v27, v28);
        LODWORD(v9) = 1;
        if ( !v29 )
          return (unsigned int)v9;
LABEL_35:
        sub_48AFD0(a2, v29);
        v30 = v29;
        v31 = *v29 - 1;
        v32 = *v29 == 1;
        *v29 = v31;
        if ( v31 >= 0 && !v32 )
          goto LABEL_36;
        goto LABEL_64;
      case 30:
        if ( v4 != 3 )
          goto LABEL_19;
        v59 = sub_412950(a2, a4[2], (__int64 (__fastcall *)(__int64, __int64, __int64))Tcl_FSLstat, (__int64)v106);
        LODWORD(v9) = 1;
        if ( v59 )
          return (unsigned int)v9;
        v60 = sub_412A70(v107);
        v33 = sub_48DF10(v60, 0xFFFFFFFF);
        goto LABEL_48;
      case 31:
        if ( v4 == 2 )
        {
          v33 = sub_46BCE0(a2, v7, 1);
LABEL_48:
          v34 = v33;
          goto LABEL_49;
        }
        v20 = nullptr;
LABEL_20:
        v21 = a4;
        v22 = 2;
        goto LABEL_18;
      case 32:
        if ( v4 != 3 )
          goto LABEL_19;
        v23 = a4[2];
        v24 = 2;
LABEL_23:
        LODWORD(v9) = sub_412A00(a2, v23, v24);
        return (unsigned int)v9;
      default:
LABEL_19:
        v20 = "name";
        goto LABEL_20;
    }
  }
  v20 = "option ?arg ...?";
  v21 = a4;
  v22 = 1;
LABEL_18:
  sub_458930(a2, v22, v21, v20);
  LODWORD(v9) = 1;
  return (unsigned int)v9;
}

