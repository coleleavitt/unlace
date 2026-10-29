int __fastcall sub_20F1B60(__int64 a1, char a2, __int64 a3, __int64 a4, int a5)
{
  bool v6; // zf
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rax
  int v12; // r12d
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // rax
  int v16; // r12d
  size_t v17; // rax
  size_t v18; // r13
  size_t v19; // rax
  int v20; // r12d
  size_t v21; // rax
  size_t v22; // r13
  size_t v23; // rax
  int v24; // r12d
  size_t v25; // rax
  size_t v26; // r13
  size_t v27; // rax
  int v28; // r12d
  size_t v29; // rax
  size_t v30; // r13
  size_t v31; // rax
  int v32; // r12d
  size_t v33; // rax
  size_t v34; // r13
  size_t v35; // rax
  int v36; // r12d
  size_t v37; // rax
  size_t v38; // r13
  size_t v39; // rax
  int v40; // r12d
  size_t v41; // rax
  size_t v42; // r13
  size_t v43; // rax
  int v44; // r12d
  size_t v45; // rax
  size_t v46; // r13
  size_t v47; // rax
  int v48; // r12d
  size_t v49; // rax
  int v50; // r12d
  size_t v51; // rax
  size_t v52; // r13
  size_t v53; // rax
  int v54; // r12d
  size_t v55; // rax
  size_t v56; // r13
  size_t v57; // rax
  int v58; // r12d
  size_t v59; // rax
  size_t v60; // r13
  size_t v61; // rax
  int v62; // r12d
  size_t v63; // rax
  size_t v64; // r13
  size_t v65; // rax
  int v66; // r12d
  size_t v67; // rax
  size_t v68; // r13
  size_t v69; // rax
  int v70; // r12d
  size_t v71; // rax
  size_t v72; // r13
  size_t v73; // rax
  int v74; // r12d
  size_t v75; // rax
  size_t v76; // r13
  size_t v77; // rax
  int v78; // r12d
  size_t v79; // rax
  size_t v80; // r13
  size_t v81; // rax
  int v82; // r12d
  size_t v83; // rax
  size_t v84; // r13
  size_t v85; // rax
  int v86; // r12d
  size_t v87; // rax
  size_t v88; // r13
  size_t v89; // rax
  int v90; // r12d
  size_t v91; // rax
  size_t v92; // r13
  size_t v93; // rax
  int v94; // r12d
  size_t v95; // rax
  size_t v96; // r13
  size_t v97; // rax
  int v98; // r12d
  size_t v99; // rax
  size_t v100; // r13
  size_t v101; // rax
  int v102; // r12d
  size_t v103; // rax
  size_t v104; // r13
  size_t v105; // rax
  int v106; // r12d
  size_t v107; // rax
  int v108; // r12d
  size_t v109; // rax
  size_t v110; // r13
  size_t v111; // rax
  int v112; // r12d
  size_t v113; // rax
  size_t v114; // r13
  size_t v115; // rax
  int v116; // r12d
  size_t v117; // rax
  size_t v118; // r13
  size_t v119; // rax
  int v120; // r12d
  size_t v121; // rax
  int v122; // eax
  __int64 *v123; // rbx
  __int64 v124; // r12
  size_t v125; // r13
  size_t v126; // rax
  _QWORD *v127; // rax
  unsigned int v128; // ebp
  size_t v130; // rax
  size_t v131; // rbp
  size_t v132; // rax
  int v133; // r13d
  size_t v134; // rax
  size_t v135; // rbp
  size_t v136; // rax
  int v137; // r13d
  size_t v138; // rax
  size_t v139; // rbp
  size_t v140; // rax
  int v141; // r13d
  size_t v142; // rax
  size_t v143; // r13
  size_t v144; // rax
  int v145; // ebp
  size_t v146; // rax
  size_t v147; // r13
  size_t v148; // rax
  int v149; // ebp
  size_t v150; // rax
  size_t v151; // r13
  size_t v152; // rax
  int v153; // ebp
  size_t v154; // rax
  size_t v155; // r13
  size_t v156; // rax
  int v157; // ebp
  size_t v158; // rax
  size_t v159; // r13
  size_t v160; // rax
  int v161; // ebp
  size_t v162; // rax
  size_t v163; // r13
  size_t v164; // rax
  int v165; // ebp
  size_t v166; // rax
  size_t v167; // r13
  size_t v168; // rax
  int v169; // ebp
  size_t v170; // rax
  int v171; // ebp
  size_t v172; // rax
  size_t v173; // r13
  size_t v174; // rax
  int v175; // ebp
  size_t v176; // rax
  size_t v177; // r13
  size_t v178; // rax
  int v179; // ebp
  size_t v180; // rax
  size_t v181; // r13
  size_t v182; // rax
  int v183; // ebp
  size_t v184; // rax
  size_t v185; // rbp

  *(_OWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 72) = 80;
  v6 = *(_QWORD *)(a4 + 8) == 0;
  *(_QWORD *)a1 = &off_2B4C0C0;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x600000002LL;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0x800000000LL;
  if ( v6 || a5 < 0 )
  {
    v7 = *(_DWORD *)(a3 + 32);
    v8 = (-(__int64)(a2 == 0) & 0xFFFFFFFFFFFFFFC0LL) + 128;
    *(_QWORD *)(a1 + 24) = v8 | 0x8000000;
    if ( v7 <= 0x33 )
    {
      if ( ((1LL << v7) & 0x6101EF003ELL) != 0 )
      {
        *(_QWORD *)(a1 + 24) = v8 | 0x28000100;
      }
      else if ( ((1LL << v7) & 0x8060004000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 24) = v8 | 0x48000200;
      }
    }
    v9 = j__strlen("arm");
    if ( (unsigned int)sub_22B84D0("arm", v9) == v7 )
      **(_QWORD **)(a1 + 8) |= 0x1000uLL;
    v10 = j__strlen("x86_64");
    v11 = j__strlen("arm");
    v12 = *(_DWORD *)(a3 + 32);
    if ( v11 == v10 && (!v11 || !memcmp("arm", "x86_64", v11)) && v12 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x1000uLL;
    v13 = j__strlen("armeb");
    if ( (unsigned int)sub_22B84D0("armeb", v13) == v12 )
      **(_QWORD **)(a1 + 8) |= 0x2000uLL;
    v14 = j__strlen("x86_64");
    v15 = j__strlen("armeb");
    v16 = *(_DWORD *)(a3 + 32);
    if ( v15 == v14 && (!v15 || !memcmp("armeb", "x86_64", v15)) && v16 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x2000uLL;
    v17 = j__strlen("aarch64");
    if ( (unsigned int)sub_22B84D0("aarch64", v17) == v16 )
      **(_QWORD **)(a1 + 8) |= 0x4000uLL;
    v18 = j__strlen("x86_64");
    v19 = j__strlen("aarch64");
    v20 = *(_DWORD *)(a3 + 32);
    if ( v19 == v18 && (!v19 || !memcmp("aarch64", "x86_64", v19)) && v20 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x4000uLL;
    v21 = j__strlen("aarch64_be");
    if ( (unsigned int)sub_22B84D0("aarch64_be", v21) == v20 )
      **(_QWORD **)(a1 + 8) |= 0x8000uLL;
    v22 = j__strlen("x86_64");
    v23 = j__strlen("aarch64_be");
    v24 = *(_DWORD *)(a3 + 32);
    if ( v23 == v22 && (!v23 || !memcmp("aarch64_be", "x86_64", v23)) && v24 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x8000uLL;
    v25 = j__strlen("aarch64_32");
    if ( (unsigned int)sub_22B84D0("aarch64_32", v25) == v24 )
      **(_QWORD **)(a1 + 8) |= 0x10000uLL;
    v26 = j__strlen("x86_64");
    v27 = j__strlen("aarch64_32");
    v28 = *(_DWORD *)(a3 + 32);
    if ( v27 == v26 && (!v27 || !memcmp("aarch64_32", "x86_64", v27)) && v28 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x10000uLL;
    v29 = j__strlen("ppc");
    if ( (unsigned int)sub_22B84D0("ppc", v29) == v28 )
      **(_QWORD **)(a1 + 8) |= 0x20000uLL;
    v30 = j__strlen("x86_64");
    v31 = j__strlen("ppc");
    v32 = *(_DWORD *)(a3 + 32);
    if ( v31 == v30 && (!v31 || !memcmp("ppc", "x86_64", v31)) && v32 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x20000uLL;
    v33 = j__strlen("ppcle");
    if ( (unsigned int)sub_22B84D0("ppcle", v33) == v32 )
      **(_QWORD **)(a1 + 8) |= 0x40000uLL;
    v34 = j__strlen("x86_64");
    v35 = j__strlen("ppcle");
    v36 = *(_DWORD *)(a3 + 32);
    if ( v35 == v34 && (!v35 || !memcmp("ppcle", "x86_64", v35)) && v36 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x40000uLL;
    v37 = j__strlen("ppc64");
    if ( (unsigned int)sub_22B84D0("ppc64", v37) == v36 )
      **(_QWORD **)(a1 + 8) |= 0x80000uLL;
    v38 = j__strlen("x86_64");
    v39 = j__strlen("ppc64");
    v40 = *(_DWORD *)(a3 + 32);
    if ( v39 == v38 && (!v39 || !memcmp("ppc64", "x86_64", v39)) && v40 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x80000uLL;
    v41 = j__strlen("ppc64le");
    if ( (unsigned int)sub_22B84D0("ppc64le", v41) == v40 )
      **(_QWORD **)(a1 + 8) |= 0x100000uLL;
    v42 = j__strlen("x86_64");
    v43 = j__strlen("ppc64le");
    v44 = *(_DWORD *)(a3 + 32);
    if ( v43 == v42 && (!v43 || !memcmp("ppc64le", "x86_64", v43)) && v44 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x100000uLL;
    v45 = j__strlen("x86");
    if ( (unsigned int)sub_22B84D0("x86", v45) == v44 )
      **(_QWORD **)(a1 + 8) |= 0x200000uLL;
    v46 = j__strlen("x86_64");
    v47 = j__strlen("x86");
    v48 = *(_DWORD *)(a3 + 32);
    if ( v47 == v46 && (!v47 || !memcmp("x86", "x86_64", v47)) && v48 == 38 )
      **(_QWORD **)(a1 + 8) |= 0x200000uLL;
    v49 = j__strlen("x86_64");
    if ( (unsigned int)sub_22B84D0("x86_64", v49) == v48 )
    {
      v50 = *(_DWORD *)(a3 + 32);
      **(_QWORD **)(a1 + 8) |= 0x400000uLL;
      if ( v50 != 38 )
      {
LABEL_79:
        v51 = j__strlen("amdgcn");
        if ( (unsigned int)sub_22B84D0("amdgcn", v51) == v50 )
          **(_QWORD **)(a1 + 8) |= 0x800000uLL;
        v52 = j__strlen("x86_64");
        v53 = j__strlen("amdgcn");
        v54 = *(_DWORD *)(a3 + 32);
        if ( v53 == v52 && (!v53 || !memcmp("amdgcn", "x86_64", v53)) && v54 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x800000uLL;
        v55 = j__strlen("nvptx");
        if ( (unsigned int)sub_22B84D0("nvptx", v55) == v54 )
          **(_QWORD **)(a1 + 8) |= 0x1000000uLL;
        v56 = j__strlen("x86_64");
        v57 = j__strlen("nvptx");
        v58 = *(_DWORD *)(a3 + 32);
        if ( v57 == v56 && (!v57 || !memcmp("nvptx", "x86_64", v57)) && v58 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x1000000uLL;
        v59 = j__strlen("nvptx64");
        if ( (unsigned int)sub_22B84D0("nvptx64", v59) == v58 )
          **(_QWORD **)(a1 + 8) |= 0x2000000uLL;
        v60 = j__strlen("x86_64");
        v61 = j__strlen("nvptx64");
        v62 = *(_DWORD *)(a3 + 32);
        if ( v61 == v60 && (!v61 || !memcmp("nvptx64", "x86_64", v61)) && v62 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x2000000uLL;
        v63 = j__strlen("spirv64");
        if ( (unsigned int)sub_22B84D0("spirv64", v63) == v62 )
          **(_QWORD **)(a1 + 8) |= 0x4000000uLL;
        v64 = j__strlen("x86_64");
        v65 = j__strlen("spirv64");
        v66 = *(_DWORD *)(a3 + 32);
        if ( v65 == v64 && (!v65 || !memcmp("spirv64", "x86_64", v65)) && v66 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x4000000uLL;
        v67 = j__strlen("arm");
        if ( (unsigned int)sub_22B84D0("arm", v67) == v66 )
          **(_QWORD **)(a1 + 8) |= 0x400000000uLL;
        v68 = j__strlen("x86_64");
        v69 = j__strlen("arm");
        v70 = *(_DWORD *)(a3 + 32);
        if ( v69 == v68 && (!v69 || !memcmp("arm", "x86_64", v69)) && v70 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x400000000uLL;
        v71 = j__strlen("armeb");
        if ( (unsigned int)sub_22B84D0("armeb", v71) == v70 )
          **(_QWORD **)(a1 + 8) |= 0x800000000uLL;
        v72 = j__strlen("x86_64");
        v73 = j__strlen("armeb");
        v74 = *(_DWORD *)(a3 + 32);
        if ( v73 == v72 && (!v73 || !memcmp("armeb", "x86_64", v73)) && v74 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x800000000uLL;
        v75 = j__strlen("aarch64");
        if ( (unsigned int)sub_22B84D0("aarch64", v75) == v74 )
          **(_QWORD **)(a1 + 8) |= 0x1000000000uLL;
        v76 = j__strlen("x86_64");
        v77 = j__strlen("aarch64");
        v78 = *(_DWORD *)(a3 + 32);
        if ( v77 == v76 && (!v77 || !memcmp("aarch64", "x86_64", v77)) && v78 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x1000000000uLL;
        v79 = j__strlen("aarch64_be");
        if ( (unsigned int)sub_22B84D0("aarch64_be", v79) == v78 )
          **(_QWORD **)(a1 + 8) |= 0x2000000000uLL;
        v80 = j__strlen("x86_64");
        v81 = j__strlen("aarch64_be");
        v82 = *(_DWORD *)(a3 + 32);
        if ( v81 == v80 && (!v81 || !memcmp("aarch64_be", "x86_64", v81)) && v82 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x2000000000uLL;
        v83 = j__strlen("aarch64_32");
        if ( (unsigned int)sub_22B84D0("aarch64_32", v83) == v82 )
          **(_QWORD **)(a1 + 8) |= 0x4000000000uLL;
        v84 = j__strlen("x86_64");
        v85 = j__strlen("aarch64_32");
        v86 = *(_DWORD *)(a3 + 32);
        if ( v85 == v84 && (!v85 || !memcmp("aarch64_32", "x86_64", v85)) && v86 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x4000000000uLL;
        v87 = j__strlen("ppc");
        if ( (unsigned int)sub_22B84D0("ppc", v87) == v86 )
          **(_QWORD **)(a1 + 8) |= 0x8000000000uLL;
        v88 = j__strlen("x86_64");
        v89 = j__strlen("ppc");
        v90 = *(_DWORD *)(a3 + 32);
        if ( v89 == v88 && (!v89 || !memcmp("ppc", "x86_64", v89)) && v90 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x8000000000uLL;
        v91 = j__strlen("ppcle");
        if ( (unsigned int)sub_22B84D0("ppcle", v91) == v90 )
          **(_QWORD **)(a1 + 8) |= 0x10000000000uLL;
        v92 = j__strlen("x86_64");
        v93 = j__strlen("ppcle");
        v94 = *(_DWORD *)(a3 + 32);
        if ( v93 == v92 && (!v93 || !memcmp("ppcle", "x86_64", v93)) && v94 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x10000000000uLL;
        v95 = j__strlen("ppc64");
        if ( (unsigned int)sub_22B84D0("ppc64", v95) == v94 )
          **(_QWORD **)(a1 + 8) |= 0x20000000000uLL;
        v96 = j__strlen("x86_64");
        v97 = j__strlen("ppc64");
        v98 = *(_DWORD *)(a3 + 32);
        if ( v97 == v96 && (!v97 || !memcmp("ppc64", "x86_64", v97)) && v98 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x20000000000uLL;
        v99 = j__strlen("ppc64le");
        if ( (unsigned int)sub_22B84D0("ppc64le", v99) == v98 )
          **(_QWORD **)(a1 + 8) |= 0x40000000000uLL;
        v100 = j__strlen("x86_64");
        v101 = j__strlen("ppc64le");
        v102 = *(_DWORD *)(a3 + 32);
        if ( v101 == v100 && (!v101 || !memcmp("ppc64le", "x86_64", v101)) && v102 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x40000000000uLL;
        v103 = j__strlen("x86");
        if ( (unsigned int)sub_22B84D0("x86", v103) == v102 )
          **(_QWORD **)(a1 + 8) |= 0x80000000000uLL;
        v104 = j__strlen("x86_64");
        v105 = j__strlen("x86");
        v106 = *(_DWORD *)(a3 + 32);
        if ( v105 == v104 && (!v105 || !memcmp("x86", "x86_64", v105)) && v106 == 38 )
          **(_QWORD **)(a1 + 8) |= 0x80000000000uLL;
        v107 = j__strlen("x86_64");
        if ( (unsigned int)sub_22B84D0("x86_64", v107) == v106 )
        {
          v108 = *(_DWORD *)(a3 + 32);
          **(_QWORD **)(a1 + 8) |= 0x100000000000uLL;
          if ( v108 != 38 )
            goto LABEL_179;
        }
        else
        {
          v108 = *(_DWORD *)(a3 + 32);
          if ( v108 != 38 )
          {
LABEL_179:
            v109 = j__strlen("amdgcn");
            if ( (unsigned int)sub_22B84D0("amdgcn", v109) == v108 )
              **(_QWORD **)(a1 + 8) |= 0x200000000000uLL;
            v110 = j__strlen("x86_64");
            v111 = j__strlen("amdgcn");
            v112 = *(_DWORD *)(a3 + 32);
            if ( v111 == v110 && (!v111 || !memcmp("amdgcn", "x86_64", v111)) && v112 == 38 )
              **(_QWORD **)(a1 + 8) |= 0x200000000000uLL;
            v113 = j__strlen("nvptx");
            if ( (unsigned int)sub_22B84D0("nvptx", v113) == v112 )
              **(_QWORD **)(a1 + 8) |= 0x400000000000uLL;
            v114 = j__strlen("x86_64");
            v115 = j__strlen("nvptx");
            v116 = *(_DWORD *)(a3 + 32);
            if ( v115 == v114 && (!v115 || !memcmp("nvptx", "x86_64", v115)) && v116 == 38 )
              **(_QWORD **)(a1 + 8) |= 0x400000000000uLL;
            v117 = j__strlen("nvptx64");
            if ( (unsigned int)sub_22B84D0("nvptx64", v117) == v116 )
              **(_QWORD **)(a1 + 8) |= 0x800000000000uLL;
            v118 = j__strlen("x86_64");
            v119 = j__strlen("nvptx64");
            v120 = *(_DWORD *)(a3 + 32);
            if ( v119 == v118 && (!v119 || !memcmp("nvptx64", "x86_64", v119)) && v120 == 38 )
              **(_QWORD **)(a1 + 8) |= 0x800000000000uLL;
            v121 = j__strlen("spirv64");
            v122 = sub_22B84D0("spirv64", v121);
            v123 = *(__int64 **)(a1 + 8);
            if ( v122 == v120 )
            {
              v124 = *v123 | 0x1000000000000LL;
              *v123 = v124;
            }
            else
            {
              v124 = *v123;
            }
            v125 = j__strlen("x86_64");
            v126 = j__strlen("spirv64");
            if ( v126 == v125 && (!v126 || !memcmp("spirv64", "x86_64", v126)) && *(_DWORD *)(a3 + 32) == 38 )
              v124 |= 0x1000000000000uLL;
            LODWORD(v127) = 2048;
            v123[1] |= 0x20uLL;
            *v123 = v124 | 0x200000000000800LL;
            return (int)v127;
          }
        }
        **(_QWORD **)(a1 + 8) |= 0x100000000000uLL;
        goto LABEL_179;
      }
    }
    else
    {
      v50 = *(_DWORD *)(a3 + 32);
      if ( v50 != 38 )
        goto LABEL_79;
    }
    **(_QWORD **)(a1 + 8) |= 0x400000uLL;
    goto LABEL_79;
  }
  v128 = *(_DWORD *)(a4 + 32);
  *(_QWORD *)(a1 + 24) = 0x10000000;
  if ( v128 <= 0x33 )
  {
    if ( ((1LL << v128) & 0x6101EF003ELL) != 0 )
    {
      *(_QWORD *)(a1 + 24) = 805306368;
    }
    else if ( ((1LL << v128) & 0x8060004000000LL) != 0 )
    {
      *(_QWORD *)(a1 + 24) = 1342177280;
    }
  }
  v130 = j__strlen("arm");
  if ( (unsigned int)sub_22B84D0("arm", v130) == v128 )
    **(_QWORD **)(a1 + 8) |= 0x400000000uLL;
  v131 = j__strlen("x86_64");
  v132 = j__strlen("arm");
  v133 = *(_DWORD *)(a4 + 32);
  if ( v131 == v132 && (!v131 || !memcmp("arm", "x86_64", v131)) && v133 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x400000000uLL;
  v134 = j__strlen("armeb");
  if ( (unsigned int)sub_22B84D0("armeb", v134) == v133 )
    **(_QWORD **)(a1 + 8) |= 0x800000000uLL;
  v135 = j__strlen("x86_64");
  v136 = j__strlen("armeb");
  v137 = *(_DWORD *)(a4 + 32);
  if ( v135 == v136 && (!v135 || !memcmp("armeb", "x86_64", v135)) && v137 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x800000000uLL;
  v138 = j__strlen("aarch64");
  if ( (unsigned int)sub_22B84D0("aarch64", v138) == v137 )
    **(_QWORD **)(a1 + 8) |= 0x1000000000uLL;
  v139 = j__strlen("x86_64");
  v140 = j__strlen("aarch64");
  v141 = *(_DWORD *)(a4 + 32);
  if ( v139 == v140 && (!v139 || !memcmp("aarch64", "x86_64", v139)) && v141 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x1000000000uLL;
  v142 = j__strlen("aarch64_be");
  if ( (unsigned int)sub_22B84D0("aarch64_be", v142) == v141 )
    **(_QWORD **)(a1 + 8) |= 0x2000000000uLL;
  v143 = j__strlen("x86_64");
  v144 = j__strlen("aarch64_be");
  v145 = *(_DWORD *)(a4 + 32);
  if ( v144 == v143 && (!v144 || !memcmp("aarch64_be", "x86_64", v144)) && v145 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x2000000000uLL;
  v146 = j__strlen("aarch64_32");
  if ( (unsigned int)sub_22B84D0("aarch64_32", v146) == v145 )
    **(_QWORD **)(a1 + 8) |= 0x4000000000uLL;
  v147 = j__strlen("x86_64");
  v148 = j__strlen("aarch64_32");
  v149 = *(_DWORD *)(a4 + 32);
  if ( v148 == v147 && (!v148 || !memcmp("aarch64_32", "x86_64", v148)) && v149 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x4000000000uLL;
  v150 = j__strlen("ppc");
  if ( (unsigned int)sub_22B84D0("ppc", v150) == v149 )
    **(_QWORD **)(a1 + 8) |= 0x8000000000uLL;
  v151 = j__strlen("x86_64");
  v152 = j__strlen("ppc");
  v153 = *(_DWORD *)(a4 + 32);
  if ( v152 == v151 && (!v152 || !memcmp("ppc", "x86_64", v152)) && v153 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x8000000000uLL;
  v154 = j__strlen("ppcle");
  if ( (unsigned int)sub_22B84D0("ppcle", v154) == v153 )
    **(_QWORD **)(a1 + 8) |= 0x10000000000uLL;
  v155 = j__strlen("x86_64");
  v156 = j__strlen("ppcle");
  v157 = *(_DWORD *)(a4 + 32);
  if ( v156 == v155 && (!v156 || !memcmp("ppcle", "x86_64", v156)) && v157 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x10000000000uLL;
  v158 = j__strlen("ppc64");
  if ( (unsigned int)sub_22B84D0("ppc64", v158) == v157 )
    **(_QWORD **)(a1 + 8) |= 0x20000000000uLL;
  v159 = j__strlen("x86_64");
  v160 = j__strlen("ppc64");
  v161 = *(_DWORD *)(a4 + 32);
  if ( v160 == v159 && (!v160 || !memcmp("ppc64", "x86_64", v160)) && v161 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x20000000000uLL;
  v162 = j__strlen("ppc64le");
  if ( (unsigned int)sub_22B84D0("ppc64le", v162) == v161 )
    **(_QWORD **)(a1 + 8) |= 0x40000000000uLL;
  v163 = j__strlen("x86_64");
  v164 = j__strlen("ppc64le");
  v165 = *(_DWORD *)(a4 + 32);
  if ( v164 == v163 && (!v164 || !memcmp("ppc64le", "x86_64", v164)) && v165 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x40000000000uLL;
  v166 = j__strlen("x86");
  if ( (unsigned int)sub_22B84D0("x86", v166) == v165 )
    **(_QWORD **)(a1 + 8) |= 0x80000000000uLL;
  v167 = j__strlen("x86_64");
  v168 = j__strlen("x86");
  v169 = *(_DWORD *)(a4 + 32);
  if ( v168 == v167 && (!v168 || !memcmp("x86", "x86_64", v168)) && v169 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x80000000000uLL;
  v170 = j__strlen("x86_64");
  if ( (unsigned int)sub_22B84D0("x86_64", v170) == v169 )
  {
    v171 = *(_DWORD *)(a4 + 32);
    **(_QWORD **)(a1 + 8) |= 0x100000000000uLL;
    if ( v171 != 38 )
      goto LABEL_285;
    goto LABEL_321;
  }
  v171 = *(_DWORD *)(a4 + 32);
  if ( v171 == 38 )
LABEL_321:
    **(_QWORD **)(a1 + 8) |= 0x100000000000uLL;
LABEL_285:
  v172 = j__strlen("amdgcn");
  if ( (unsigned int)sub_22B84D0("amdgcn", v172) == v171 )
    **(_QWORD **)(a1 + 8) |= 0x200000000000uLL;
  v173 = j__strlen("x86_64");
  v174 = j__strlen("amdgcn");
  v175 = *(_DWORD *)(a4 + 32);
  if ( v174 == v173 && (!v174 || !memcmp("amdgcn", "x86_64", v174)) && v175 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x200000000000uLL;
  v176 = j__strlen("nvptx");
  if ( (unsigned int)sub_22B84D0("nvptx", v176) == v175 )
    **(_QWORD **)(a1 + 8) |= 0x400000000000uLL;
  v177 = j__strlen("x86_64");
  v178 = j__strlen("nvptx");
  v179 = *(_DWORD *)(a4 + 32);
  if ( v178 == v177 && (!v178 || !memcmp("nvptx", "x86_64", v178)) && v179 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x400000000000uLL;
  v180 = j__strlen("nvptx64");
  if ( (unsigned int)sub_22B84D0("nvptx64", v180) == v179 )
    **(_QWORD **)(a1 + 8) |= 0x800000000000uLL;
  v181 = j__strlen("x86_64");
  v182 = j__strlen("nvptx64");
  v183 = *(_DWORD *)(a4 + 32);
  if ( v182 == v181 && (!v182 || !memcmp("nvptx64", "x86_64", v182)) && v183 == 38 )
    **(_QWORD **)(a1 + 8) |= 0x800000000000uLL;
  v184 = j__strlen("spirv64");
  if ( (unsigned int)sub_22B84D0("spirv64", v184) == v183 )
    **(_QWORD **)(a1 + 8) |= 0x1000000000000uLL;
  v185 = j__strlen("x86_64");
  v127 = (_QWORD *)j__strlen("spirv64");
  if ( v127 == (_QWORD *)v185 )
  {
    if ( !v127 || (LODWORD(v127) = memcmp("spirv64", "x86_64", (size_t)v127), !(_DWORD)v127) )
    {
      if ( *(_DWORD *)(a4 + 32) == 38 )
      {
        v127 = *(_QWORD **)(a1 + 8);
        *v127 |= 0x1000000000000uLL;
      }
    }
  }
  return (int)v127;
}
