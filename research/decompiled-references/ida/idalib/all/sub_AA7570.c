__int64 __fastcall sub_AA7570(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // r14d
  size_t v4; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  char *v11; // rsi
  __int64 v12; // rcx
  size_t v13; // rax
  size_t v14; // rdx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbp
  size_t v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  size_t v29; // rax
  void *v30; // rdi
  int v31; // r14d
  size_t v32; // rax
  __int64 v33; // r13
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r12
  char *v38; // rsi
  __int64 v39; // rcx
  size_t v40; // rax
  size_t v41; // rdx
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  size_t v49; // rax
  __int64 v50; // rbp
  int v51; // eax
  __int64 v52; // r12
  int v53; // r13d
  size_t v54; // rax
  int v55; // eax
  int v56; // esi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rbp
  size_t v65; // rax
  int v66; // r14d
  size_t v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // r12
  char *v72; // rsi
  __int64 v73; // rcx
  size_t v74; // rax
  size_t v75; // rdx
  int v76; // r8d
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // r14d
  size_t v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // r12
  char *v86; // rsi
  __int64 v87; // rcx
  size_t v88; // rax
  size_t v89; // rdx
  int v90; // r8d
  __int64 v91; // rax
  __int64 v92; // rax
  size_t v93; // rbp
  unsigned __int64 v94; // rax
  int v95; // r14d
  size_t v96; // rax
  __int64 v97; // r13
  unsigned __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // r12
  char *v101; // rsi
  __int64 v102; // rcx
  size_t v103; // rax
  size_t v104; // rdx
  int v105; // r8d
  __int64 v106; // rax
  __int64 v107; // rax
  size_t v108; // rax
  int v109; // r14d
  unsigned __int64 v110; // rax
  __int64 v111; // rsi
  unsigned __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // r12
  unsigned __int64 v115; // rax
  char *v116; // rsi
  __int64 v117; // rcx
  size_t v118; // rax
  size_t v119; // rdx
  int v120; // r8d
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned __int64 v124; // rbp
  size_t v125; // rax
  __int64 v126; // r12
  size_t v127; // rax
  int v128; // r12d
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rbp
  size_t v136; // rax
  int v137; // ebp
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  _QWORD *v142; // rax
  __int64 v143; // rax
  __int64 v144; // [rsp+0h] [rbp-B8h]
  __int64 v145; // [rsp+8h] [rbp-B0h]
  __int64 v146; // [rsp+8h] [rbp-B0h]
  __int64 v147; // [rsp+8h] [rbp-B0h]
  __int64 v148; // [rsp+8h] [rbp-B0h]
  __int64 v149; // [rsp+8h] [rbp-B0h]
  __int64 v150; // [rsp+8h] [rbp-B0h]
  void *v151; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v152; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v153; // [rsp+20h] [rbp-98h]
  unsigned __int64 v154; // [rsp+28h] [rbp-90h]
  unsigned __int64 v155; // [rsp+30h] [rbp-88h]
  unsigned __int64 v156; // [rsp+38h] [rbp-80h]
  unsigned __int64 v157; // [rsp+40h] [rbp-78h]
  char *v158; // [rsp+50h] [rbp-68h] BYREF
  char *v159; // [rsp+58h] [rbp-60h]
  char *v160; // [rsp+60h] [rbp-58h]
  char *v161; // [rsp+68h] [rbp-50h]
  char *v162; // [rsp+70h] [rbp-48h]

  result = a1[183];
  if ( !result )
  {
    switch ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)a1[2181] + 296LL))(a1[2181]) )
    {
      case 0u:
        v93 = j__strlen("__builtin_va_list");
        v94 = sub_A701F0((__int64)a1, a1[2331]);
        result = sub_A8A070(a1, v94, "__builtin_va_list", v93);
        break;
      case 1u:
        v63 = sub_A701F0((__int64)a1, a1[2329]);
        goto LABEL_29;
      case 2u:
        v108 = j__strlen("__va_list");
        v97 = sub_A871C0(a1, "__va_list", v108, 0);
        if ( (*(_BYTE *)(a1[290] + 1LL) & 8) != 0 )
        {
          v135 = a1[2188];
          v136 = j__strlen("std");
          v137 = sub_6F3470(v135, "std", v136);
          v142 = sub_704780(
                   (__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL),
                   *(_QWORD *)(a1[283] + 80LL),
                   v138,
                   v139,
                   v140,
                   v141);
          if ( v142 )
            LODWORD(v142) = (_DWORD)v142 + 40;
          v143 = sub_BA4BE0((_DWORD)a1, (_DWORD)v142, 0, 0, 0, v137, 0, 0);
          *(_BYTE *)(v143 + 29) |= 2u;
          sub_B8C080(v97, v143 + 48);
        }
        v109 = 0;
        sub_B809C0(v97);
        v110 = sub_A701F0((__int64)a1, a1[2329]);
        v111 = a1[2329];
        v153 = v110;
        v158 = "__stack";
        v112 = sub_A701F0((__int64)a1, v111);
        v113 = a1[2329];
        v154 = v112;
        v159 = "__gr_top";
        v155 = sub_A701F0((__int64)a1, v113);
        if ( v97 )
          v109 = v97 + 64;
        v114 = 0;
        v160 = "__vr_top";
        v115 = a1[2340];
        v161 = "__gr_offs";
        v156 = v115;
        v157 = v115;
        v162 = "__vr_offs";
        do
        {
          v116 = (&v158)[v114];
          v117 = a1[2188];
          if ( v116 )
          {
            v150 = a1[2188];
            v118 = j__strlen((&v158)[v114]);
            v117 = v150;
            v119 = v118;
          }
          else
          {
            v116 = nullptr;
            v119 = 0;
          }
          v120 = sub_6F3470(v117, v116, v119);
          v121 = (unsigned int)v114++;
          v122 = sub_B7BC50((_DWORD)a1, v109, 0, 0, v120, *(&v153 + v121), 0, 0, 0, 0);
          *(_BYTE *)(v122 + 29) &= 0x9Fu;
          sub_B94AD0(v97 + 64, v122);
        }
        while ( v114 != 5 );
        goto LABEL_51;
      case 3u:
        v123 = sub_A63B40(a1, *(_DWORD *)(a1[2181] + 136LL));
        LODWORD(v159) = sub_A97D20((__int64)a1, *(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL));
        if ( (unsigned int)v159 > 0x40 )
          sub_2205470(&v158, 4, 0);
        else
          v158 = &byte_4;
        v124 = sub_A70F70((__int64)a1, a1[2340], (__int64)&v158, nullptr, 0, 0);
        v125 = j__strlen("__builtin_va_list");
        result = sub_A8A070(a1, v124, "__builtin_va_list", v125);
        if ( (unsigned int)v159 <= 0x40 )
          break;
        v30 = v158;
        if ( !v158 )
          break;
        goto LABEL_14;
      case 4u:
        v3 = 0;
        v4 = j__strlen("__va_list_tag");
        v5 = sub_A871C0(a1, "__va_list_tag", v4, 0);
        sub_B809C0(v5);
        v6 = a1[2329];
        v153 = a1[2344];
        v154 = v153;
        v159 = "fpr";
        v7 = a1[2345];
        v158 = "gpr";
        v155 = v7;
        v160 = "reserved";
        v8 = sub_A701F0((__int64)a1, v6);
        v9 = a1[2329];
        v156 = v8;
        v161 = "overflow_arg_area";
        v157 = sub_A701F0((__int64)a1, v9);
        if ( v5 )
          v3 = v5 + 64;
        v10 = 0;
        v162 = "reg_save_area";
        do
        {
          v11 = (&v158)[v10];
          v12 = a1[2188];
          if ( v11 )
          {
            v145 = a1[2188];
            v13 = j__strlen((&v158)[v10]);
            v12 = v145;
            v14 = v13;
          }
          else
          {
            v11 = nullptr;
            v14 = 0;
          }
          v15 = sub_6F3470(v12, v11, v14);
          v16 = (unsigned int)v10++;
          v17 = sub_B7BC50((_DWORD)a1, v3, 0, 0, v15, *(&v153 + v16), 0, 0, 0, 0);
          *(_BYTE *)(v17 + 29) &= 0x9Fu;
          sub_B94AD0(v5 + 64, v17);
        }
        while ( v10 != 5 );
        goto LABEL_9;
      case 5u:
        v31 = 0;
        v32 = j__strlen("__va_list_tag");
        v33 = sub_A871C0(a1, "__va_list_tag", v32, 0);
        sub_B809C0(v33);
        v34 = a1[2329];
        v153 = a1[2346];
        v154 = v153;
        v158 = "gp_offset";
        v159 = "fp_offset";
        v35 = sub_A701F0((__int64)a1, v34);
        v36 = a1[2329];
        v155 = v35;
        v160 = "overflow_arg_area";
        v156 = sub_A701F0((__int64)a1, v36);
        if ( v33 )
          v31 = v33 + 64;
        v37 = 0;
        v161 = "reg_save_area";
        do
        {
          v38 = (&v158)[v37];
          v39 = a1[2188];
          if ( v38 )
          {
            v146 = a1[2188];
            v40 = j__strlen((&v158)[v37]);
            v39 = v146;
            v41 = v40;
          }
          else
          {
            v38 = nullptr;
            v41 = 0;
          }
          v42 = sub_6F3470(v39, v38, v41);
          v43 = (unsigned int)v37++;
          v44 = sub_B7BC50((_DWORD)a1, v31, 0, 0, v42, *(&v153 + v43), 0, 0, 0, 0);
          *(_BYTE *)(v44 + 29) &= 0x9Fu;
          sub_B94AD0(v33 + 64, v44);
        }
        while ( v37 != 4 );
        goto LABEL_23;
      case 6u:
        v49 = j__strlen("__va_list");
        v50 = sub_A871C0(a1, "__va_list", v49, 0);
        if ( (*(_BYTE *)(a1[290] + 1LL) & 8) != 0 )
        {
          v126 = a1[2188];
          v127 = j__strlen("std");
          v128 = sub_6F3470(v126, "std", v127);
          v133 = sub_704780(
                   (__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL),
                   *(_QWORD *)(a1[283] + 80LL),
                   v129,
                   v130,
                   v131,
                   v132);
          if ( v133 )
            LODWORD(v133) = (_DWORD)v133 + 40;
          v134 = sub_BA4BE0((_DWORD)a1, (_DWORD)v133, 0, 0, 0, v128, 0, 0);
          *(_BYTE *)(v134 + 29) |= 2u;
          sub_B8C080(v50, v134 + 48);
        }
        sub_B809C0(v50);
        v51 = sub_A701F0((__int64)a1, a1[2329]);
        v52 = a1[2188];
        v53 = v51;
        v54 = j__strlen("__ap");
        v55 = sub_6F3470(v52, "__ap", v54);
        v56 = 0;
        if ( v50 )
          v56 = v50 + 64;
        v57 = sub_B7BC50((_DWORD)a1, v56, 0, 0, v55, v53, 0, 0, 0, 0);
        *(_BYTE *)(v57 + 29) &= 0x9Fu;
        sub_B94AD0(v50 + 64, v57);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 104LL))(v50);
        a1[2842] = v50;
        v62 = v50;
        goto LABEL_28;
      case 7u:
        v66 = 0;
        v67 = j__strlen("__va_list_tag");
        v33 = sub_A871C0(a1, "__va_list_tag", v67, 0);
        sub_B809C0(v33);
        v68 = a1[2329];
        v153 = a1[2341];
        v154 = v153;
        v158 = "__gpr";
        v159 = "__fpr";
        v69 = sub_A701F0((__int64)a1, v68);
        v70 = a1[2329];
        v155 = v69;
        v160 = "__overflow_arg_area";
        v156 = sub_A701F0((__int64)a1, v70);
        if ( v33 )
          v66 = v33 + 64;
        v71 = 0;
        v161 = "__reg_save_area";
        do
        {
          v72 = (&v158)[v71];
          v73 = a1[2188];
          if ( v72 )
          {
            v147 = a1[2188];
            v74 = j__strlen((&v158)[v71]);
            v73 = v147;
            v75 = v74;
          }
          else
          {
            v72 = nullptr;
            v75 = 0;
          }
          v76 = sub_6F3470(v73, v72, v75);
          v77 = (unsigned int)v71++;
          v78 = sub_B7BC50((_DWORD)a1, v66, 0, 0, v76, *(&v153 + v77), 0, 0, 0, 0);
          *(_BYTE *)(v78 + 29) &= 0x9Fu;
          sub_B94AD0(v33 + 64, v78);
        }
        while ( v71 != 4 );
LABEL_23:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 104LL))(v33);
        a1[2842] = v33;
        v25 = sub_A7A9D0((__int64)a1, v33, v45, v46, v47, v48);
        goto LABEL_10;
      case 8u:
        v79 = 0;
        v80 = j__strlen("__va_list_tag");
        v5 = sub_A871C0(a1, "__va_list_tag", v80, 0);
        sub_B809C0(v5);
        v81 = sub_A701F0((__int64)a1, a1[2329]);
        v82 = a1[2329];
        v153 = v81;
        v158 = "__current_saved_reg_area_pointer";
        v83 = sub_A701F0((__int64)a1, v82);
        v84 = a1[2329];
        v154 = v83;
        v159 = "__saved_reg_area_end_pointer";
        v155 = sub_A701F0((__int64)a1, v84);
        if ( v5 )
          v79 = v5 + 64;
        v85 = 0;
        v160 = "__overflow_area_pointer";
        do
        {
          v86 = (&v158)[v85];
          v87 = a1[2188];
          if ( v86 )
          {
            v148 = a1[2188];
            v88 = j__strlen((&v158)[v85]);
            v87 = v148;
            v89 = v88;
          }
          else
          {
            v86 = nullptr;
            v89 = 0;
          }
          v90 = sub_6F3470(v87, v86, v89);
          v91 = (unsigned int)v85++;
          v92 = sub_B7BC50((_DWORD)a1, v79, 0, 0, v90, *(&v153 + v91), 0, 0, 0, 0);
          *(_BYTE *)(v92 + 29) &= 0x9Fu;
          sub_B94AD0(v5 + 64, v92);
        }
        while ( v85 != 3 );
LABEL_9:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5);
        a1[2842] = v5;
        v22 = sub_A7A9D0((__int64)a1, v5, v18, v19, v20, v21);
        v23 = j__strlen("__va_list_tag");
        v24 = sub_A8A070(a1, v22, "__va_list_tag", v23);
        v25 = sub_A70A40((__int64)a1, v24, 0);
LABEL_10:
        v26 = v25;
        v27 = sub_A63B40(a1, *(_DWORD *)(a1[2181] + 136LL));
        v152 = sub_A97D20((__int64)a1, *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v152 > 0x40 )
          sub_2205470(&v151, 1, 0);
        else
          v151 = &dword_0 + 1;
        v28 = sub_A70F70((__int64)a1, v26, (__int64)&v151, nullptr, 0, 0);
        v29 = j__strlen("__builtin_va_list");
        result = sub_A8A070(a1, v28, "__builtin_va_list", v29);
        if ( v152 > 0x40 )
        {
          v30 = v151;
          if ( v151 )
          {
LABEL_14:
            v144 = result;
            operator delete[](v30);
            result = v144;
          }
        }
        break;
      case 9u:
        v95 = 0;
        v96 = j__strlen("__va_list_tag");
        v97 = sub_A871C0(a1, "__va_list_tag", v96, 0);
        sub_B809C0(v97);
        v98 = sub_A701F0((__int64)a1, a1[2340]);
        v99 = a1[2340];
        v153 = v98;
        v154 = sub_A701F0((__int64)a1, v99);
        if ( v97 )
          v95 = v97 + 64;
        v100 = 0;
        v155 = a1[2340];
        v158 = "__va_stk";
        v159 = "__va_reg";
        v160 = "__va_ndx";
        do
        {
          v101 = (&v158)[v100];
          v102 = a1[2188];
          if ( v101 )
          {
            v149 = a1[2188];
            v103 = j__strlen((&v158)[v100]);
            v102 = v149;
            v104 = v103;
          }
          else
          {
            v101 = nullptr;
            v104 = 0;
          }
          v105 = sub_6F3470(v102, v101, v104);
          v106 = (unsigned int)v100++;
          v107 = sub_B7BC50((_DWORD)a1, v95, 0, 0, v105, *(&v153 + v106), 0, 0, 0, 0);
          *(_BYTE *)(v107 + 29) &= 0x9Fu;
          sub_B94AD0(v97 + 64, v107);
        }
        while ( v100 != 3 );
LABEL_51:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 104LL))(v97);
        a1[2842] = v97;
        v62 = v97;
LABEL_28:
        v63 = sub_A7A9D0((__int64)a1, v62, v58, v59, v60, v61);
LABEL_29:
        v64 = v63;
        v65 = j__strlen("__builtin_va_list");
        result = sub_A8A070(a1, v64, "__builtin_va_list", v65);
        break;
    }
    a1[183] = result;
  }
  return result;
}
