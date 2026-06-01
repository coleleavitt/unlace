void __fastcall sub_FDF380(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  __int64 v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rax
  _QWORD *v127; // rax

  if ( (a1 & 1) != 0 )
  {
    v4 = *(unsigned int *)(a3 + 8);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v4 + 1, 16);
      v4 = *(unsigned int *)(a3 + 8);
    }
    v5 = (_QWORD *)(*(_QWORD *)a3 + 16 * v4);
    *v5 = "address";
    v5[1] = 7;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 2) != 0 )
  {
    v6 = *(unsigned int *)(a3 + 8);
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v6 + 1, 16);
      v6 = *(unsigned int *)(a3 + 8);
    }
    v7 = (_QWORD *)(*(_QWORD *)a3 + 16 * v6);
    *v7 = "pointer-compare";
    v7[1] = 15;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 4) != 0 )
  {
    v8 = *(unsigned int *)(a3 + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v8 + 1, 16);
      v8 = *(unsigned int *)(a3 + 8);
    }
    v9 = (_QWORD *)(*(_QWORD *)a3 + 16 * v8);
    *v9 = "pointer-subtract";
    v9[1] = 16;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 8) != 0 )
  {
    v10 = *(unsigned int *)(a3 + 8);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v10 + 1, 16);
      v10 = *(unsigned int *)(a3 + 8);
    }
    v11 = (_QWORD *)(*(_QWORD *)a3 + 16 * v10);
    *v11 = "kernel-address";
    v11[1] = 14;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x10) != 0 )
  {
    v12 = *(unsigned int *)(a3 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v12 + 1, 16);
      v12 = *(unsigned int *)(a3 + 8);
    }
    v13 = (_QWORD *)(*(_QWORD *)a3 + 16 * v12);
    *v13 = "hwaddress";
    v13[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x20) != 0 )
  {
    v14 = *(unsigned int *)(a3 + 8);
    if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v14 + 1, 16);
      v14 = *(unsigned int *)(a3 + 8);
    }
    v15 = (_QWORD *)(*(_QWORD *)a3 + 16 * v14);
    *v15 = "kernel-hwaddress";
    v15[1] = 16;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x40) != 0 )
  {
    v16 = *(unsigned int *)(a3 + 8);
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v16 + 1, 16);
      v16 = *(unsigned int *)(a3 + 8);
    }
    v17 = (_QWORD *)(*(_QWORD *)a3 + 16 * v16);
    *v17 = "memtag-stack";
    v17[1] = 12;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x80u) != 0LL )
  {
    v18 = *(unsigned int *)(a3 + 8);
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v18 + 1, 16);
      v18 = *(unsigned int *)(a3 + 8);
    }
    v19 = (_QWORD *)(*(_QWORD *)a3 + 16 * v18);
    *v19 = "memtag-heap";
    v19[1] = 11;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x100) != 0 )
  {
    v20 = *(unsigned int *)(a3 + 8);
    if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v20 + 1, 16);
      v20 = *(unsigned int *)(a3 + 8);
    }
    v21 = (_QWORD *)(*(_QWORD *)a3 + 16 * v20);
    *v21 = "memtag-globals";
    v21[1] = 14;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x400) != 0 )
  {
    v22 = *(unsigned int *)(a3 + 8);
    if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v22 + 1, 16);
      v22 = *(unsigned int *)(a3 + 8);
    }
    v23 = (_QWORD *)(*(_QWORD *)a3 + 16 * v22);
    *v23 = "memory";
    v23[1] = 6;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x800) != 0 )
  {
    v24 = *(unsigned int *)(a3 + 8);
    if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v24 + 1, 16);
      v24 = *(unsigned int *)(a3 + 8);
    }
    v25 = (_QWORD *)(*(_QWORD *)a3 + 16 * v24);
    *v25 = "kernel-memory";
    v25[1] = 13;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x1000) != 0 )
  {
    v26 = *(unsigned int *)(a3 + 8);
    if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v26 + 1, 16);
      v26 = *(unsigned int *)(a3 + 8);
    }
    v27 = (_QWORD *)(*(_QWORD *)a3 + 16 * v26);
    *v27 = "fuzzer";
    v27[1] = 6;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x2000) != 0 )
  {
    v28 = *(unsigned int *)(a3 + 8);
    if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v28 + 1, 16);
      v28 = *(unsigned int *)(a3 + 8);
    }
    v29 = (_QWORD *)(*(_QWORD *)a3 + 16 * v28);
    *v29 = "fuzzer-no-link";
    v29[1] = 14;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x4000) != 0 )
  {
    v30 = *(unsigned int *)(a3 + 8);
    if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v30 + 1, 16);
      v30 = *(unsigned int *)(a3 + 8);
    }
    v31 = (_QWORD *)(*(_QWORD *)a3 + 16 * v30);
    *v31 = "type";
    v31[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x8000) != 0 )
  {
    v32 = *(unsigned int *)(a3 + 8);
    if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v32 + 1, 16);
      v32 = *(unsigned int *)(a3 + 8);
    }
    v33 = (_QWORD *)(*(_QWORD *)a3 + 16 * v32);
    *v33 = "thread";
    v33[1] = 6;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x10000) != 0 )
  {
    v34 = *(unsigned int *)(a3 + 8);
    if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v34 + 1, 16);
      v34 = *(unsigned int *)(a3 + 8);
    }
    v35 = (_QWORD *)(*(_QWORD *)a3 + 16 * v34);
    *v35 = "numerical";
    v35[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x20000) != 0 )
  {
    v36 = *(unsigned int *)(a3 + 8);
    if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v36 + 1, 16);
      v36 = *(unsigned int *)(a3 + 8);
    }
    v37 = (_QWORD *)(*(_QWORD *)a3 + 16 * v36);
    *v37 = "realtime";
    v37[1] = 8;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x40000) != 0 )
  {
    v38 = *(unsigned int *)(a3 + 8);
    if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v38 + 1, 16);
      v38 = *(unsigned int *)(a3 + 8);
    }
    v39 = (_QWORD *)(*(_QWORD *)a3 + 16 * v38);
    *v39 = "leak";
    v39[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x80000) != 0 )
  {
    v40 = *(unsigned int *)(a3 + 8);
    if ( v40 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v40 + 1, 16);
      v40 = *(unsigned int *)(a3 + 8);
    }
    v41 = (_QWORD *)(*(_QWORD *)a3 + 16 * v40);
    *v41 = "alignment";
    v41[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v42 = *(unsigned int *)(a3 + 8);
    if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v42 + 1, 16);
      v42 = *(unsigned int *)(a3 + 8);
    }
    v43 = (_QWORD *)(*(_QWORD *)a3 + 16 * v42);
    *v43 = "array-bounds";
    v43[1] = 12;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v44 = *(unsigned int *)(a3 + 8);
    if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v44 + 1, 16);
      v44 = *(unsigned int *)(a3 + 8);
    }
    v45 = (_QWORD *)(*(_QWORD *)a3 + 16 * v44);
    *v45 = "bool";
    v45[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x400000) != 0 )
  {
    v46 = *(unsigned int *)(a3 + 8);
    if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v46 + 1, 16);
      v46 = *(unsigned int *)(a3 + 8);
    }
    v47 = (_QWORD *)(*(_QWORD *)a3 + 16 * v46);
    *v47 = "builtin";
    v47[1] = 7;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x800000) != 0 )
  {
    v48 = *(unsigned int *)(a3 + 8);
    if ( v48 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v48 + 1, 16);
      v48 = *(unsigned int *)(a3 + 8);
    }
    v49 = (_QWORD *)(*(_QWORD *)a3 + 16 * v48);
    *v49 = "enum";
    v49[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x1000000) != 0 )
  {
    v50 = *(unsigned int *)(a3 + 8);
    if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v50 + 1, 16);
      v50 = *(unsigned int *)(a3 + 8);
    }
    v51 = (_QWORD *)(*(_QWORD *)a3 + 16 * v50);
    *v51 = "float-cast-overflow";
    v51[1] = 19;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x2000000) != 0 )
  {
    v52 = *(unsigned int *)(a3 + 8);
    if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v52 + 1, 16);
      v52 = *(unsigned int *)(a3 + 8);
    }
    v53 = (_QWORD *)(*(_QWORD *)a3 + 16 * v52);
    *v53 = "float-divide-by-zero";
    v53[1] = 20;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x4000000) != 0 )
  {
    v54 = *(unsigned int *)(a3 + 8);
    if ( v54 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v54 + 1, 16);
      v54 = *(unsigned int *)(a3 + 8);
    }
    v55 = (_QWORD *)(*(_QWORD *)a3 + 16 * v54);
    *v55 = "function";
    v55[1] = 8;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x8000000) != 0 )
  {
    v56 = *(unsigned int *)(a3 + 8);
    if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v56 + 1, 16);
      v56 = *(unsigned int *)(a3 + 8);
    }
    v57 = (_QWORD *)(*(_QWORD *)a3 + 16 * v56);
    *v57 = "integer-divide-by-zero";
    v57[1] = 22;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x10000000) != 0 )
  {
    v58 = *(unsigned int *)(a3 + 8);
    if ( v58 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v58 + 1, 16);
      v58 = *(unsigned int *)(a3 + 8);
    }
    v59 = (_QWORD *)(*(_QWORD *)a3 + 16 * v58);
    *v59 = "nonnull-attribute";
    v59[1] = 17;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x20000000) != 0 )
  {
    v60 = *(unsigned int *)(a3 + 8);
    if ( v60 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v60 + 1, 16);
      v60 = *(unsigned int *)(a3 + 8);
    }
    v61 = (_QWORD *)(*(_QWORD *)a3 + 16 * v60);
    *v61 = "null";
    v61[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x40000000) != 0 )
  {
    v62 = *(unsigned int *)(a3 + 8);
    if ( v62 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v62 + 1, 16);
      v62 = *(unsigned int *)(a3 + 8);
    }
    v63 = (_QWORD *)(*(_QWORD *)a3 + 16 * v62);
    *v63 = "nullability-arg";
    v63[1] = 15;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (int)a1 < 0 )
  {
    v64 = *(unsigned int *)(a3 + 8);
    if ( v64 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v64 + 1, 16);
      v64 = *(unsigned int *)(a3 + 8);
    }
    v65 = (_QWORD *)(*(_QWORD *)a3 + 16 * v64);
    *v65 = "nullability-assign";
    v65[1] = 18;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x100000000LL) != 0 )
  {
    v66 = *(unsigned int *)(a3 + 8);
    if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v66 + 1, 16);
      v66 = *(unsigned int *)(a3 + 8);
    }
    v67 = (_QWORD *)(*(_QWORD *)a3 + 16 * v66);
    *v67 = "nullability-return";
    v67[1] = 18;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x400000000LL) != 0 )
  {
    v68 = *(unsigned int *)(a3 + 8);
    if ( v68 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v68 + 1, 16);
      v68 = *(unsigned int *)(a3 + 8);
    }
    v69 = (_QWORD *)(*(_QWORD *)a3 + 16 * v68);
    *v69 = "object-size";
    v69[1] = 11;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x800000000LL) != 0 )
  {
    v70 = *(unsigned int *)(a3 + 8);
    if ( v70 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v70 + 1, 16);
      v70 = *(unsigned int *)(a3 + 8);
    }
    v71 = (_QWORD *)(*(_QWORD *)a3 + 16 * v70);
    *v71 = "pointer-overflow";
    v71[1] = 16;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x1000000000LL) != 0 )
  {
    v72 = *(unsigned int *)(a3 + 8);
    if ( v72 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v72 + 1, 16);
      v72 = *(unsigned int *)(a3 + 8);
    }
    v73 = (_QWORD *)(*(_QWORD *)a3 + 16 * v72);
    *v73 = "return";
    v73[1] = 6;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x2000000000LL) != 0 )
  {
    v74 = *(unsigned int *)(a3 + 8);
    if ( v74 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v74 + 1, 16);
      v74 = *(unsigned int *)(a3 + 8);
    }
    v75 = (_QWORD *)(*(_QWORD *)a3 + 16 * v74);
    *v75 = "returns-nonnull-attribute";
    v75[1] = 25;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x4000000000LL) != 0 )
  {
    v76 = *(unsigned int *)(a3 + 8);
    if ( v76 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v76 + 1, 16);
      v76 = *(unsigned int *)(a3 + 8);
    }
    v77 = (_QWORD *)(*(_QWORD *)a3 + 16 * v76);
    *v77 = "shift-base";
    v77[1] = 10;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x8000000000LL) != 0 )
  {
    v78 = *(unsigned int *)(a3 + 8);
    if ( v78 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v78 + 1, 16);
      v78 = *(unsigned int *)(a3 + 8);
    }
    v79 = (_QWORD *)(*(_QWORD *)a3 + 16 * v78);
    *v79 = "shift-exponent";
    v79[1] = 14;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x20000000000LL) != 0 )
  {
    v80 = *(unsigned int *)(a3 + 8);
    if ( v80 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v80 + 1, 16);
      v80 = *(unsigned int *)(a3 + 8);
    }
    v81 = (_QWORD *)(*(_QWORD *)a3 + 16 * v80);
    *v81 = "signed-integer-overflow";
    v81[1] = 23;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x40000000000LL) != 0 )
  {
    v82 = *(unsigned int *)(a3 + 8);
    if ( v82 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v82 + 1, 16);
      v82 = *(unsigned int *)(a3 + 8);
    }
    v83 = (_QWORD *)(*(_QWORD *)a3 + 16 * v82);
    *v83 = "unreachable";
    v83[1] = 11;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x80000000000LL) != 0 )
  {
    v84 = *(unsigned int *)(a3 + 8);
    if ( v84 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v84 + 1, 16);
      v84 = *(unsigned int *)(a3 + 8);
    }
    v85 = (_QWORD *)(*(_QWORD *)a3 + 16 * v84);
    *v85 = "vla-bound";
    v85[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x100000000000LL) != 0 )
  {
    v86 = *(unsigned int *)(a3 + 8);
    if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v86 + 1, 16);
      v86 = *(unsigned int *)(a3 + 8);
    }
    v87 = (_QWORD *)(*(_QWORD *)a3 + 16 * v86);
    *v87 = "vptr";
    v87[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x200000000000LL) != 0 )
  {
    v88 = *(unsigned int *)(a3 + 8);
    if ( v88 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v88 + 1, 16);
      v88 = *(unsigned int *)(a3 + 8);
    }
    v89 = (_QWORD *)(*(_QWORD *)a3 + 16 * v88);
    *v89 = "unsigned-integer-overflow";
    v89[1] = 25;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x400000000000LL) != 0 )
  {
    v90 = *(unsigned int *)(a3 + 8);
    if ( v90 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v90 + 1, 16);
      v90 = *(unsigned int *)(a3 + 8);
    }
    v91 = (_QWORD *)(*(_QWORD *)a3 + 16 * v90);
    *v91 = "unsigned-shift-base";
    v91[1] = 19;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x800000000000LL) != 0 )
  {
    v92 = *(unsigned int *)(a3 + 8);
    if ( v92 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v92 + 1, 16);
      v92 = *(unsigned int *)(a3 + 8);
    }
    v93 = (_QWORD *)(*(_QWORD *)a3 + 16 * v92);
    *v93 = "dataflow";
    v93[1] = 8;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x1000000000000LL) != 0 )
  {
    v94 = *(unsigned int *)(a3 + 8);
    if ( v94 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v94 + 1, 16);
      v94 = *(unsigned int *)(a3 + 8);
    }
    v95 = (_QWORD *)(*(_QWORD *)a3 + 16 * v94);
    *v95 = "cfi-cast-strict";
    v95[1] = 15;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x2000000000000LL) != 0 )
  {
    v96 = *(unsigned int *)(a3 + 8);
    if ( v96 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v96 + 1, 16);
      v96 = *(unsigned int *)(a3 + 8);
    }
    v97 = (_QWORD *)(*(_QWORD *)a3 + 16 * v96);
    *v97 = "cfi-derived-cast";
    v97[1] = 16;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x4000000000000LL) != 0 )
  {
    v98 = *(unsigned int *)(a3 + 8);
    if ( v98 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v98 + 1, 16);
      v98 = *(unsigned int *)(a3 + 8);
    }
    v99 = (_QWORD *)(*(_QWORD *)a3 + 16 * v98);
    *v99 = "cfi-icall";
    v99[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x8000000000000LL) != 0 )
  {
    v100 = *(unsigned int *)(a3 + 8);
    if ( v100 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v100 + 1, 16);
      v100 = *(unsigned int *)(a3 + 8);
    }
    v101 = (_QWORD *)(*(_QWORD *)a3 + 16 * v100);
    *v101 = "cfi-mfcall";
    v101[1] = 10;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x10000000000000LL) != 0 )
  {
    v102 = *(unsigned int *)(a3 + 8);
    if ( v102 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v102 + 1, 16);
      v102 = *(unsigned int *)(a3 + 8);
    }
    v103 = (_QWORD *)(*(_QWORD *)a3 + 16 * v102);
    *v103 = "cfi-unrelated-cast";
    v103[1] = 18;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x20000000000000LL) != 0 )
  {
    v104 = *(unsigned int *)(a3 + 8);
    if ( v104 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v104 + 1, 16);
      v104 = *(unsigned int *)(a3 + 8);
    }
    v105 = (_QWORD *)(*(_QWORD *)a3 + 16 * v104);
    *v105 = "cfi-nvcall";
    v105[1] = 10;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x40000000000000LL) != 0 )
  {
    v106 = *(unsigned int *)(a3 + 8);
    if ( v106 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v106 + 1, 16);
      v106 = *(unsigned int *)(a3 + 8);
    }
    v107 = (_QWORD *)(*(_QWORD *)a3 + 16 * v106);
    *v107 = "cfi-vcall";
    v107[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x100000000000000LL) != 0 )
  {
    v108 = *(unsigned int *)(a3 + 8);
    if ( v108 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v108 + 1, 16);
      v108 = *(unsigned int *)(a3 + 8);
    }
    v109 = (_QWORD *)(*(_QWORD *)a3 + 16 * v108);
    *v109 = "kcfi";
    v109[1] = 4;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x200000000000000LL) != 0 )
  {
    v110 = *(unsigned int *)(a3 + 8);
    if ( v110 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v110 + 1, 16);
      v110 = *(unsigned int *)(a3 + 8);
    }
    v111 = (_QWORD *)(*(_QWORD *)a3 + 16 * v110);
    *v111 = "safe-stack";
    v111[1] = 10;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x400000000000000LL) != 0 )
  {
    v112 = *(unsigned int *)(a3 + 8);
    if ( v112 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v112 + 1, 16);
      v112 = *(unsigned int *)(a3 + 8);
    }
    v113 = (_QWORD *)(*(_QWORD *)a3 + 16 * v112);
    *v113 = "shadow-call-stack";
    v113[1] = 17;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x2000000000000000LL) != 0 )
  {
    v114 = *(unsigned int *)(a3 + 8);
    if ( v114 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v114 + 1, 16);
      v114 = *(unsigned int *)(a3 + 8);
    }
    v115 = (_QWORD *)(*(_QWORD *)a3 + 16 * v114);
    *v115 = "implicit-unsigned-integer-truncation";
    v115[1] = 36;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a1 & 0x4000000000000000LL) != 0 )
  {
    v116 = *(unsigned int *)(a3 + 8);
    if ( v116 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v116 + 1, 16);
      v116 = *(unsigned int *)(a3 + 8);
    }
    v117 = (_QWORD *)(*(_QWORD *)a3 + 16 * v116);
    *v117 = "implicit-signed-integer-truncation";
    v117[1] = 34;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a2 & 1) != 0 )
  {
    v118 = *(unsigned int *)(a3 + 8);
    if ( v118 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v118 + 1, 16);
      v118 = *(unsigned int *)(a3 + 8);
    }
    v119 = (_QWORD *)(*(_QWORD *)a3 + 16 * v118);
    *v119 = "implicit-integer-sign-change";
    v119[1] = 28;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a2 & 8) != 0 )
  {
    v120 = *(unsigned int *)(a3 + 8);
    if ( v120 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v120 + 1, 16);
      v120 = *(unsigned int *)(a3 + 8);
    }
    v121 = (_QWORD *)(*(_QWORD *)a3 + 16 * v120);
    *v121 = "implicit-bitfield-conversion";
    v121[1] = 28;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a2 & 0x40) != 0 )
  {
    v122 = *(unsigned int *)(a3 + 8);
    if ( v122 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v122 + 1, 16);
      v122 = *(unsigned int *)(a3 + 8);
    }
    v123 = (_QWORD *)(*(_QWORD *)a3 + 16 * v122);
    *v123 = "objc-cast";
    v123[1] = 9;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a2 & 0x80u) != 0 )
  {
    v124 = *(unsigned int *)(a3 + 8);
    if ( v124 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v124 + 1, 16);
      v124 = *(unsigned int *)(a3 + 8);
    }
    v125 = (_QWORD *)(*(_QWORD *)a3 + 16 * v124);
    *v125 = "local-bounds";
    v125[1] = 12;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (a2 & 0x200) != 0 )
  {
    v126 = *(unsigned int *)(a3 + 8);
    if ( v126 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_22134E0(a3, a3 + 16, v126 + 1, 16);
      v126 = *(unsigned int *)(a3 + 8);
    }
    v127 = (_QWORD *)(*(_QWORD *)a3 + 16 * v126);
    *v127 = "scudo";
    v127[1] = 5;
    ++*(_DWORD *)(a3 + 8);
  }
}

