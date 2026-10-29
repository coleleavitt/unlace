__int64 __fastcall sub_11C3BD0(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // r14
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r14
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // r15d
  __int64 v18; // rbx
  __int64 *v19; // r13
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // r12
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // al
  void **v32; // r12
  void **v33; // rbp
  void **v34; // r12
  void **v35; // rbp
  void **v36; // r12
  void **v37; // rbp
  void **v38; // r12
  void **v39; // rbp
  void **v40; // r12
  void **v41; // rbp
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  size_t v46; // rax
  int v47; // eax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  void **v51; // rax
  size_t v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  size_t v55; // rax
  size_t v56; // rax
  size_t v57; // rax
  size_t v58; // rax
  __int64 v59; // rax
  unsigned __int8 **v60; // r15
  unsigned __int8 *v61; // r9
  unsigned __int8 *v62; // r8
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  size_t v66; // rax
  size_t v67; // rax
  char v68; // ah
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  __int64 v75; // r14
  size_t v76; // rax
  size_t v77; // rax
  size_t v78; // rax
  size_t v79; // rax
  size_t v80; // rax
  size_t v81; // rax
  size_t v82; // rax
  size_t v83; // rax
  size_t v84; // rax
  size_t v85; // rax
  size_t v86; // rax
  size_t v87; // rax
  size_t v88; // rax
  size_t v89; // rax
  size_t v90; // rax
  size_t v91; // rax
  size_t v92; // rax
  size_t v93; // rax
  size_t v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  size_t v98; // rax
  size_t v99; // rax
  __int64 *v100; // [rsp+0h] [rbp-4F8h]
  __int64 v101; // [rsp+0h] [rbp-4F8h]
  __int64 v102; // [rsp+0h] [rbp-4F8h]
  unsigned __int8 **v103; // [rsp+0h] [rbp-4F8h]
  __int64 *v104; // [rsp+8h] [rbp-4F0h]
  __int64 *v105; // [rsp+8h] [rbp-4F0h]
  __int64 v106; // [rsp+8h] [rbp-4F0h]
  __int64 v107; // [rsp+40h] [rbp-4B8h]
  __int64 v108; // [rsp+40h] [rbp-4B8h]
  __int64 v109; // [rsp+40h] [rbp-4B8h]
  unsigned __int8 *v110; // [rsp+40h] [rbp-4B8h]
  __int64 v111; // [rsp+48h] [rbp-4B0h]
  __int64 v112; // [rsp+48h] [rbp-4B0h]
  unsigned __int8 *v113; // [rsp+48h] [rbp-4B0h]
  void *v114[2]; // [rsp+50h] [rbp-4A8h] BYREF
  __int64 v115; // [rsp+60h] [rbp-498h] BYREF
  void *v116; // [rsp+70h] [rbp-488h] BYREF
  __int64 v117; // [rsp+78h] [rbp-480h]
  _BYTE v118[64]; // [rsp+80h] [rbp-478h] BYREF
  void *v119; // [rsp+C0h] [rbp-438h] BYREF
  __int64 v120; // [rsp+C8h] [rbp-430h]
  _BYTE v121[64]; // [rsp+D0h] [rbp-428h] BYREF
  void *v122; // [rsp+110h] [rbp-3E8h] BYREF
  __int64 v123; // [rsp+118h] [rbp-3E0h]
  _BYTE v124[64]; // [rsp+120h] [rbp-3D8h] BYREF
  void *v125; // [rsp+160h] [rbp-398h] BYREF
  __int64 v126; // [rsp+168h] [rbp-390h]
  _BYTE v127[64]; // [rsp+170h] [rbp-388h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-348h] BYREF
  __int64 v129; // [rsp+1B8h] [rbp-340h]
  _BYTE v130[64]; // [rsp+1C0h] [rbp-338h] BYREF
  char v131[64]; // [rsp+200h] [rbp-2F8h] BYREF
  void *v132; // [rsp+240h] [rbp-2B8h]
  void *v133; // [rsp+268h] [rbp-290h]
  void **v134; // [rsp+270h] [rbp-288h]
  void *v135; // [rsp+280h] [rbp-278h]
  void **v136; // [rsp+288h] [rbp-270h]
  void *v137; // [rsp+298h] [rbp-260h]
  void **v138; // [rsp+2A0h] [rbp-258h]
  void *v139; // [rsp+2B0h] [rbp-248h]
  void **v140; // [rsp+2B8h] [rbp-240h]
  void *v141; // [rsp+2C8h] [rbp-230h]
  void **v142; // [rsp+2D0h] [rbp-228h]
  char v143; // [rsp+2F6h] [rbp-202h]
  void *v144; // [rsp+310h] [rbp-1E8h]
  __int64 v145; // [rsp+320h] [rbp-1D8h] BYREF
  char v146; // [rsp+330h] [rbp-1C8h]
  void *v147; // [rsp+340h] [rbp-1B8h] BYREF
  __int64 v148; // [rsp+350h] [rbp-1A8h] BYREF
  void **v149; // [rsp+360h] [rbp-198h] BYREF
  unsigned __int8 *v150; // [rsp+368h] [rbp-190h]
  __int16 v151; // [rsp+380h] [rbp-178h]
  char v152; // [rsp+460h] [rbp-98h]
  char v153; // [rsp+490h] [rbp-68h]
  char v154; // [rsp+491h] [rbp-67h]
  char v155; // [rsp+493h] [rbp-65h]
  char v156; // [rsp+494h] [rbp-64h]
  char v157; // [rsp+498h] [rbp-60h]
  char v158; // [rsp+49Ah] [rbp-5Eh]
  char v159; // [rsp+49Bh] [rbp-5Dh]

  v4 = a2;
  sub_112C5F0((__int64)v131, (__int64)a1, a2);
  v119 = v121;
  v122 = v124;
  v116 = v118;
  v125 = v127;
  v117 = 0x400000000LL;
  v120 = 0x400000000LL;
  v123 = 0x400000000LL;
  v126 = 0x400000000LL;
  ptr = v130;
  v129 = 0x400000000LL;
  if ( !v146 )
    goto LABEL_2;
  sub_112C5F0((__int64)&v149, (__int64)a1, a2);
  if ( v152 )
  {
    if ( ((unsigned __int8)v149 & 1) != 0 )
    {
      v43 = j__strlen("asan");
      sub_111E070((__int64)&v116, (__int64)"asan", v43);
      if ( !sub_10DCD30(a2, 0xCC0u) && *((_DWORD *)a1 + 16) != 17 )
      {
        v94 = j__strlen("asan-preinit");
        sub_111E070((__int64)&v125, (__int64)"asan-preinit", v94);
      }
    }
    if ( v158 )
    {
      v79 = j__strlen("memprof");
      sub_111E070((__int64)&v116, (__int64)"memprof", v79);
      if ( !sub_10DCD30(a2, 0xCC0u) && *((_DWORD *)a1 + 16) != 17 )
      {
        v80 = j__strlen("memprof-preinit");
        sub_111E070((__int64)&v125, (__int64)"memprof-preinit", v80);
      }
    }
    if ( (BYTE2(v149) & 1) != 0 )
    {
      v44 = j__strlen("nsan");
      sub_111E070((__int64)&v116, (__int64)"nsan", v44);
    }
    if ( sub_1120F50((__int64)&v149) )
    {
      if ( v157 )
      {
        v45 = j__strlen("ubsan_minimal");
        sub_111E070((__int64)&v116, (__int64)"ubsan_minimal", v45);
      }
      else
      {
        v84 = j__strlen("ubsan_standalone");
        sub_111E070((__int64)&v116, (__int64)"ubsan_standalone", v84);
      }
    }
    if ( (BYTE1(v150) & 2) != 0 )
    {
      v46 = j__strlen("scudo_standalone");
      sub_111E070((__int64)&v116, (__int64)"scudo_standalone", v46);
    }
    v47 = (int)v149;
    if ( SBYTE1(v149) < 0 )
    {
      v48 = j__strlen("tsan");
      sub_111E070((__int64)&v116, (__int64)"tsan", v48);
      v47 = (int)v149;
    }
    if ( (v47 & 0x4000) != 0 )
    {
      v49 = j__strlen("tysan");
      sub_111E070((__int64)&v116, (__int64)"tysan", v49);
      v47 = (int)v149;
    }
    if ( (v47 & 0x10) != 0 )
    {
      if ( v159 )
      {
        v83 = j__strlen("hwasan_aliases");
        sub_111E070((__int64)&v116, (__int64)"hwasan_aliases", v83);
      }
      else
      {
        v50 = j__strlen("hwasan");
        sub_111E070((__int64)&v116, (__int64)"hwasan", v50);
      }
      if ( !sub_10DCD30(a2, 0xCC0u) )
      {
        v96 = j__strlen("hwasan-preinit");
        sub_111E070((__int64)&v125, (__int64)"hwasan-preinit", v96);
      }
      v47 = (int)v149;
    }
    if ( (v47 & 0x20000) != 0 && v153 )
    {
      v86 = j__strlen("rtsan");
      sub_111E070((__int64)&v116, (__int64)"rtsan", v86);
    }
  }
  if ( v156 )
  {
    v76 = j__strlen("stats_client");
    sub_111E070((__int64)&v119, (__int64)"stats_client", v76);
  }
  if ( ((unsigned __int8)v149 & 1) != 0 )
  {
    v67 = j__strlen("asan_static");
    sub_111E070((__int64)&v125, (__int64)"asan_static", v67);
  }
  if ( !sub_10DCD30(a2, 0xCC0u) )
  {
    v51 = v149;
    if ( !v152 )
    {
      if ( ((unsigned __int8)v149 & 1) == 0 )
        goto LABEL_220;
      v52 = j__strlen("asan");
      sub_111E070((__int64)&v119, (__int64)"asan", v52);
      if ( v154 )
      {
        v90 = j__strlen("asan_cxx");
        sub_111E070((__int64)&v119, (__int64)"asan_cxx", v90);
      }
      v51 = v149;
      if ( !v152 )
      {
LABEL_220:
        if ( ((unsigned int)v51 & 0x20000) != 0 )
        {
          if ( v153 )
          {
            v92 = j__strlen("rtsan");
            sub_111E070((__int64)&v119, (__int64)"rtsan", v92);
            if ( v152 )
            {
LABEL_207:
              v51 = v149;
              goto LABEL_136;
            }
          }
        }
        v51 = v149;
        if ( !v158 )
          goto LABEL_132;
        v93 = j__strlen("memprof");
        sub_111E070((__int64)&v119, (__int64)"memprof", v93);
        if ( v154 )
        {
          v97 = j__strlen("memprof_cxx");
          sub_111E070((__int64)&v119, (__int64)"memprof_cxx", v97);
        }
        v51 = v149;
        if ( !v152 )
        {
LABEL_132:
          if ( ((unsigned __int8)v51 & 0x10) != 0 )
          {
            if ( v159 )
            {
              v53 = j__strlen("hwasan_aliases");
              sub_111E070((__int64)&v119, (__int64)"hwasan_aliases", v53);
              if ( v154 )
              {
                v54 = j__strlen("hwasan_aliases_cxx");
                sub_111E070((__int64)&v119, (__int64)"hwasan_aliases_cxx", v54);
                v51 = v149;
                goto LABEL_136;
              }
            }
            else
            {
              v87 = j__strlen("hwasan");
              sub_111E070((__int64)&v119, (__int64)"hwasan", v87);
              if ( v154 )
              {
                v99 = j__strlen("hwasan_cxx");
                sub_111E070((__int64)&v119, (__int64)"hwasan_cxx", v99);
              }
            }
            goto LABEL_207;
          }
        }
      }
    }
LABEL_136:
    if ( ((unsigned __int64)v51 & 0x800000000000LL) != 0 )
    {
      v55 = j__strlen("dfsan");
      sub_111E070((__int64)&v119, (__int64)"dfsan", v55);
      LODWORD(v51) = (_DWORD)v149;
    }
    if ( ((unsigned int)v51 & 0x40000) != 0 && ((unsigned __int8)v51 & 0x11) == 0 )
    {
      v88 = j__strlen("lsan");
      sub_111E070((__int64)&v119, (__int64)"lsan", v88);
      BYTE1(v51) = BYTE1(v149);
    }
    if ( (BYTE1(v51) & 4) != 0 )
    {
      v56 = j__strlen("msan");
      sub_111E070((__int64)&v119, (__int64)"msan", v56);
      if ( v154 )
      {
        v85 = j__strlen("msan_cxx");
        sub_111E070((__int64)&v119, (__int64)"msan_cxx", v85);
      }
    }
    if ( !v152 )
    {
      v68 = BYTE1(v149);
      if ( ((unsigned int)v149 & 0x10000) != 0 )
      {
        v69 = j__strlen("nsan");
        sub_111E070((__int64)&v119, (__int64)"nsan", v69);
        if ( v152 )
          goto LABEL_145;
        v68 = BYTE1(v149);
      }
      if ( v68 < 0 )
      {
        v70 = j__strlen("tsan");
        sub_111E070((__int64)&v119, (__int64)"tsan", v70);
        if ( v154 )
        {
          v89 = j__strlen("tsan_cxx");
          sub_111E070((__int64)&v119, (__int64)"tsan_cxx", v89);
        }
        if ( v152 )
          goto LABEL_145;
        v68 = BYTE1(v149);
      }
      if ( (v68 & 0x40) == 0 || (v71 = j__strlen("tysan"), sub_111E070((__int64)&v119, (__int64)"tysan", v71), !v152) )
      {
        if ( sub_1120F50((__int64)&v149) )
        {
          if ( v157 )
          {
            v72 = j__strlen("ubsan_minimal");
            sub_111E070((__int64)&v119, (__int64)"ubsan_minimal", v72);
          }
          else
          {
            v95 = j__strlen("ubsan_standalone");
            sub_111E070((__int64)&v119, (__int64)"ubsan_standalone", v95);
          }
        }
        if ( !v155 )
        {
LABEL_193:
          if ( !v152 )
            goto LABEL_147;
          goto LABEL_146;
        }
LABEL_195:
        v73 = j__strlen("safestack");
        sub_111E070((__int64)&v122, (__int64)"safestack", v73);
        v74 = j__strlen("__safestack_init");
        sub_111E070((__int64)&ptr, (__int64)"__safestack_init", v74);
        goto LABEL_193;
      }
    }
LABEL_145:
    if ( !v155 )
    {
LABEL_146:
      if ( sub_1120F50((__int64)&v149) )
      {
LABEL_151:
        if ( v154 && !v157 && (!v152 && sub_1120FE0(&v149) || (unsigned __int8)sub_1121040((__int64)&v149)) )
        {
          v57 = j__strlen("ubsan_standalone_cxx");
          sub_111E070((__int64)&v119, (__int64)"ubsan_standalone_cxx", v57);
        }
        if ( v156 )
        {
          v77 = j__strlen("stats");
          sub_111E070((__int64)&v122, (__int64)"stats", v77);
          v78 = j__strlen("__sanitizer_stats_register");
          sub_111E070((__int64)&ptr, (__int64)"__sanitizer_stats_register", v78);
        }
        if ( !v152 && (BYTE1(v150) & 2) != 0 )
        {
          v58 = j__strlen("scudo_standalone");
          sub_111E070((__int64)&v119, (__int64)"scudo_standalone", v58);
          if ( v154 )
          {
            v91 = j__strlen("scudo_standalone_cxx");
            sub_111E070((__int64)&v119, (__int64)"scudo_standalone_cxx", v91);
          }
        }
        goto LABEL_162;
      }
LABEL_147:
      if ( (unsigned __int8)sub_1121000((__int64)&v149) )
      {
        v82 = j__strlen("cfi");
        sub_111E070((__int64)&v119, (__int64)"cfi", v82);
      }
      if ( (unsigned __int8)sub_1121040((__int64)&v149) )
      {
        v81 = j__strlen("cfi_diag");
        sub_111E070((__int64)&v119, (__int64)"cfi_diag", v81);
      }
      goto LABEL_151;
    }
    goto LABEL_195;
  }
LABEL_162:
  sub_116D110(&v149);
  v103 = (unsigned __int8 **)((char *)ptr + 16 * (unsigned int)v129);
  if ( v103 != ptr )
  {
    v59 = *(unsigned int *)(a3 + 8);
    v60 = (unsigned __int8 **)ptr;
    v106 = a3 + 16;
    do
    {
      v61 = *v60;
      v62 = v60[1];
      if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v113 = *v60;
        v110 = v60[1];
        sub_2237220(a3, v106, v59 + 1, 8);
        v59 = *(unsigned int *)(a3 + 8);
        v61 = v113;
        v62 = v110;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v59) = "-u";
      ++*(_DWORD *)(a3 + 8);
      v151 = 261;
      v149 = (void **)v61;
      v150 = v62;
      v63 = sub_10DA6C0(a2, (__int64)&v149);
      v64 = *(unsigned int *)(a3 + 8);
      if ( v64 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v109 = v63;
        sub_2237220(a3, v106, v64 + 1, 8);
        v64 = *(unsigned int *)(a3 + 8);
        v65 = *(_QWORD *)a3;
        v63 = v109;
      }
      else
      {
        v65 = *(_QWORD *)a3;
      }
      *(_QWORD *)(v65 + 8 * v64) = v63;
      v60 += 2;
      v59 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v59;
    }
    while ( v103 != v60 );
  }
  if ( (v131[1] & 0x10) != 0 && v146 && !sub_10DCD30(a2, 0xCC0u) )
  {
    v66 = j__strlen("fuzzer");
    sub_11C3AB0((__int64)a1, a2, a3, (__int64)"fuzzer", v66, 1);
    if ( sub_1120F30(v131) )
    {
      v98 = j__strlen("fuzzer_interceptors");
      sub_11C3AB0((__int64)a1, a2, a3, (__int64)"fuzzer_interceptors", v98, 1);
    }
    if ( !sub_10DCD30(a2, 0xBEEu) )
    {
      if ( sub_10DCD30(a2, 0xCE0u) && !sub_10DCD30(a2, 0xCE3u) )
      {
        sub_10DC5D0(a3, (__int64)"-Bstatic");
        ((void (__fastcall *)(__int64 **, __int64, __int64))(*a1)[80])(a1, a2, a3);
        sub_10DC5D0(a3, (__int64)"-Bdynamic");
      }
      else
      {
        ((void (__fastcall *)(__int64 **, __int64, __int64))(*a1)[80])(a1, a2, a3);
      }
    }
  }
LABEL_2:
  v5 = (__int64 *)v116;
  v6 = (__int64 *)((char *)v116 + 16 * (unsigned int)v117);
  if ( v116 != v6 )
  {
    do
    {
      v7 = sub_112D2D0((__int64)a1, a2, *v5, v5[1], 2u, 0);
      v8 = *(unsigned int *)(a3 + 8);
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v102 = v7;
        sub_2237220(a3, a3 + 16, v8 + 1, 8);
        v8 = *(unsigned int *)(a3 + 8);
        v7 = v102;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v7;
      ++*(_DWORD *)(a3 + 8);
      if ( (unsigned __int8)sub_21B7850(a2, 1706, 1345, 0) && *((_DWORD *)a1 + 15) != 20 )
        sub_11C32C0((__int64)a1, a2, a3);
      v5 += 2;
    }
    while ( v6 != v5 );
  }
  v9 = (__int64 *)v125;
  v10 = 16LL * (unsigned int)v126;
  v100 = (__int64 *)((char *)v125 + v10);
  if ( v125 != (char *)v125 + v10 )
  {
    do
    {
      v11 = v9[1];
      v12 = *v9;
      sub_10DC5D0(a3, (__int64)"--whole-archive");
      v13 = sub_112D2D0((__int64)a1, a2, v12, v11, 1u, 0);
      v14 = *(unsigned int *)(a3 + 8);
      if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v108 = v13;
        sub_2237220(a3, a3 + 16, v14 + 1, 8);
        v14 = *(unsigned int *)(a3 + 8);
        v15 = *(_QWORD *)a3;
        v13 = v108;
      }
      else
      {
        v15 = *(_QWORD *)a3;
      }
      *(_QWORD *)(v15 + 8 * v14) = v13;
      v9 += 2;
      ++*(_DWORD *)(a3 + 8);
      sub_10DC5D0(a3, (__int64)"--no-whole-archive");
    }
    while ( v100 != v9 );
  }
  v16 = 16LL * (unsigned int)v120;
  v104 = (__int64 *)((char *)v119 + v16);
  if ( v119 == (char *)v119 + v16 )
  {
    v24 = (__int64 *)v122;
    v75 = 16LL * (unsigned int)v123;
    v105 = (__int64 *)((char *)v122 + v75);
    if ( (char *)v122 + v75 == v122 )
      goto LABEL_25;
    v17 = 0;
    goto LABEL_19;
  }
  v17 = 0;
  v18 = a3;
  v107 = a3 + 16;
  v19 = (__int64 *)v119;
  do
  {
    v20 = *v19;
    v21 = v19[1];
    sub_10DC5D0(v18, (__int64)"--whole-archive");
    v22 = sub_112D2D0((__int64)a1, a2, v20, v21, 1u, 0);
    v23 = *(unsigned int *)(v18 + 8);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
    {
      v112 = v22;
      sub_2237220(v18, v107, v23 + 1, 8);
      v23 = *(unsigned int *)(v18 + 8);
      v22 = v112;
    }
    v19 += 2;
    *(_QWORD *)(*(_QWORD *)v18 + 8 * v23) = v22;
    ++*(_DWORD *)(v18 + 8);
    sub_10DC5D0(v18, (__int64)"--no-whole-archive");
    v17 |= sub_11C0020(a1, a2, v18, v20, v21) ^ 1;
  }
  while ( v104 != v19 );
  v24 = (__int64 *)v122;
  a3 = v18;
  v4 = a2;
  v25 = 16LL * (unsigned int)v123;
  v105 = (__int64 *)((char *)v122 + v25);
  if ( v122 != (char *)v122 + v25 )
  {
LABEL_19:
    v101 = v4;
    do
    {
      v26 = *v24;
      v27 = v24[1];
      v28 = sub_112D2D0((__int64)a1, v101, *v24, v27, 1u, 0);
      v29 = *(unsigned int *)(a3 + 8);
      if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v111 = v28;
        sub_2237220(a3, a3 + 16, v29 + 1, 8);
        v29 = *(unsigned int *)(a3 + 8);
        v28 = v111;
      }
      v24 += 2;
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v29) = v28;
      ++*(_DWORD *)(a3 + 8);
      v17 |= sub_11C0020(a1, v101, a3, v26, v27) ^ 1;
    }
    while ( v105 != v24 );
    v4 = v101;
  }
  if ( (_BYTE)v17 )
  {
    sub_10DC5D0(a3, (__int64)"--export-dynamic");
    goto LABEL_27;
  }
LABEL_25:
  if ( v143 )
    sub_10DC5D0(a3, (__int64)"--export-dynamic-symbol=__cfi_check");
LABEL_27:
  if ( (*(_WORD *)v131 & 0x1C0) != 0 )
  {
    if ( *((_DWORD *)a1 + 16) != 17 )
    {
      sub_FC70B0((__int64)&v149, *a1[1], 0, 495);
      sub_AE9DF0((unsigned __int8 **)&v149, (__int64)"-fsanitize=memtag*", 1u);
      sub_AEC220((unsigned __int8 **)&v149, a1[2], (signed __int64)a1[3]);
      sub_AEA040((__int64)&v149);
    }
    sub_C05100((__int64)v114, "--android-memtag-mode=", (__int64)&v147);
    v149 = v114;
    v151 = 260;
    v30 = sub_10DA6C0(v4, (__int64)&v149);
    sub_10DC5D0(a3, v30);
    if ( v114[0] != &v115 )
      operator delete(v114[0]);
    v31 = v131[0];
    if ( v131[0] < 0 )
    {
      sub_10DC5D0(a3, (__int64)"--android-memtag-heap");
      v31 = v131[0];
    }
    if ( (v31 & 0x40) != 0 )
      sub_10DC5D0(a3, (__int64)"--android-memtag-stack");
  }
  LOBYTE(v4) = ((unsigned int)v123 | (unsigned int)v120) != 0;
  if ( ptr != v130 )
    free(ptr);
  if ( v125 != v127 )
    free(v125);
  if ( v122 != v124 )
    free(v122);
  if ( v119 != v121 )
    free(v119);
  if ( v116 != v118 )
    free(v116);
  if ( v147 != &v148 )
    operator delete(v147);
  if ( v144 != &v145 )
    operator delete(v144);
  v32 = v142;
  v33 = (void **)v141;
  if ( v142 != v141 )
  {
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v33 == v32 )
          goto LABEL_53;
      }
      v33 += 4;
    }
    while ( v32 != v33 );
LABEL_53:
    v33 = (void **)v141;
  }
  if ( v33 )
    operator delete(v33);
  v34 = v140;
  v35 = (void **)v139;
  if ( v140 != v139 )
  {
    do
    {
      while ( *v35 != v35 + 2 )
      {
        operator delete(*v35);
        v35 += 4;
        if ( v34 == v35 )
          goto LABEL_59;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_59:
    v35 = (void **)v139;
  }
  if ( v35 )
    operator delete(v35);
  v36 = v138;
  v37 = (void **)v137;
  if ( v138 != v137 )
  {
    do
    {
      while ( *v37 != v37 + 2 )
      {
        operator delete(*v37);
        v37 += 4;
        if ( v37 == v36 )
          goto LABEL_65;
      }
      v37 += 4;
    }
    while ( v36 != v37 );
LABEL_65:
    v37 = (void **)v137;
  }
  if ( v37 )
    operator delete(v37);
  v38 = v136;
  v39 = (void **)v135;
  if ( v136 != v135 )
  {
    do
    {
      while ( *v39 != v39 + 2 )
      {
        operator delete(*v39);
        v39 += 4;
        if ( v39 == v38 )
          goto LABEL_71;
      }
      v39 += 4;
    }
    while ( v38 != v39 );
LABEL_71:
    v39 = (void **)v135;
  }
  if ( v39 )
    operator delete(v39);
  v40 = v134;
  v41 = (void **)v133;
  if ( v134 != v133 )
  {
    do
    {
      while ( *v41 != v41 + 2 )
      {
        operator delete(*v41);
        v41 += 4;
        if ( v41 == v40 )
          goto LABEL_77;
      }
      v41 += 4;
    }
    while ( v40 != v41 );
LABEL_77:
    v41 = (void **)v133;
  }
  if ( v41 )
    operator delete(v41);
  if ( v132 )
    operator delete(v132);
  return (unsigned int)v4;
}
