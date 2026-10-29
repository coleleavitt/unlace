__int64 __fastcall CoinSimpFactorization::allocateSomeArrays(CoinSimpFactorization *this)
{
  void *v2; // rdi
  unsigned __int64 v3; // rdi
  void *v4; // rax
  unsigned __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 v12; // rdi
  void *v13; // rax
  unsigned __int64 v14; // rbp
  void *v15; // rdi
  __int64 v16; // rax
  void *v17; // rdi
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  void *v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  void *v23; // rdi
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rdi
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  void *v29; // rdi
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  void *v32; // rdi
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // edi
  int v36; // kr00_4
  void *v37; // rdi
  int v38; // eax
  __int64 v39; // rax
  void *v40; // rdi
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  void *v43; // rdi
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  void *v46; // rdi
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  void *v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  void *v52; // rdi
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  void *v55; // rdi
  unsigned __int64 v56; // rdi
  __int64 v57; // rax
  void *v58; // rdi
  unsigned __int64 v59; // rdi
  __int64 v60; // rax
  int v61; // edi
  int v62; // eax
  void *v63; // rdi
  __int64 v64; // rax
  void *v65; // rdi
  unsigned __int64 v66; // rdi
  __int64 v67; // rax
  void *v68; // rdi
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  void *v71; // rdi
  unsigned __int64 v72; // rdi
  __int64 v73; // rax
  void *v74; // rdi
  unsigned __int64 v75; // rdi
  __int64 v76; // rax
  void *v77; // rdi
  unsigned __int64 v78; // rdi
  __int64 v79; // rax
  void *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  void *v83; // rdi
  unsigned __int64 v84; // rdi
  __int64 v85; // rax
  void *v86; // rdi
  unsigned __int64 v87; // rdi
  __int64 v88; // rax
  void *v89; // rdi
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  void *v92; // rdi
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  void *v95; // rdi
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  void *v98; // rdi
  unsigned __int64 v99; // rdi
  __int64 v100; // rax
  void *v101; // rdi
  unsigned __int64 v102; // rdi
  __int64 v103; // rax
  void *v104; // rdi
  unsigned __int64 v105; // rdi
  __int64 v106; // rax
  void *v107; // rdi
  unsigned __int64 v108; // rdi
  __int64 v109; // rax
  void *v110; // rdi
  unsigned __int64 v111; // rdi
  __int64 v112; // rax
  void *v113; // rdi
  unsigned __int64 v114; // rdi
  __int64 v115; // rax
  void *v116; // rdi
  unsigned __int64 v117; // rdi
  __int64 v118; // rax
  void *v119; // rdi
  unsigned __int64 v120; // rdi
  __int64 v121; // rax
  void *v122; // rdi
  unsigned __int64 v123; // rdi
  int v124; // eax
  void *v125; // rdi
  int v126; // eax
  __int64 v127; // rax
  void *v128; // rdi
  unsigned __int64 v129; // rdi
  __int64 result; // rax

  v2 = *((void **)this + 13);
  if ( v2 )
    operator delete[](v2);
  v3 = *((int *)this + 9);
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v4 = (void *)operator new[](8 * v3);
  v5 = *((int *)this + 9);
  *((_QWORD *)this + 13) = v4;
  memset(v4, 0, 8 * v5);
  v6 = *((void **)this + 14);
  if ( v6 )
  {
    operator delete[](v6);
    v5 = *((int *)this + 9);
  }
  if ( v5 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v7 = operator new[](8 * v5);
  v8 = *((void **)this + 15);
  *((_QWORD *)this + 14) = v7;
  if ( v8 )
    operator delete[](v8);
  v9 = *((int *)this + 9);
  if ( v9 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v10 = operator new[](8 * v9);
  v11 = *((void **)this + 16);
  *((_QWORD *)this + 15) = v10;
  if ( v11 )
    operator delete[](v11);
  v12 = *((int *)this + 9);
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v13 = (void *)operator new[](4 * v12);
  v14 = *((int *)this + 9);
  *((_QWORD *)this + 16) = v13;
  memset(v13, 0, 4 * v14);
  v15 = *((void **)this + 17);
  if ( v15 )
  {
    operator delete[](v15);
    v14 = *((int *)this + 9);
  }
  if ( v14 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v16 = operator new[](4 * v14);
  v17 = *((void **)this + 18);
  *((_QWORD *)this + 17) = v16;
  if ( v17 )
    operator delete[](v17);
  v18 = *((int *)this + 9);
  if ( v18 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v19 = operator new[](8 * v18);
  v20 = *((void **)this + 19);
  *((_QWORD *)this + 18) = v19;
  if ( v20 )
    operator delete[](v20);
  v21 = *((int *)this + 9);
  if ( v21 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v22 = operator new[](4 * v21);
  v23 = *((void **)this + 20);
  *((_QWORD *)this + 19) = v22;
  if ( v23 )
    operator delete[](v23);
  v24 = *((int *)this + 9);
  if ( v24 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v25 = operator new[](8 * v24);
  v26 = *((void **)this + 21);
  *((_QWORD *)this + 20) = v25;
  if ( v26 )
    operator delete[](v26);
  v27 = *((int *)this + 9);
  if ( v27 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v28 = operator new[](4 * v27);
  v29 = *((void **)this + 23);
  *((_QWORD *)this + 21) = v28;
  if ( v29 )
    operator delete[](v29);
  v30 = *((int *)this + 9);
  if ( v30 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v31 = operator new[](4 * v30);
  v32 = *((void **)this + 24);
  *((_QWORD *)this + 23) = v31;
  if ( v32 )
    operator delete[](v32);
  v33 = *((int *)this + 9);
  if ( v33 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v34 = operator new[](4 * v33);
  v35 = *((_DWORD *)this + 9);
  *((_QWORD *)this + 24) = v34;
  v36 = (v35 - 1) * v35;
  v37 = *((void **)this + 25);
  v38 = v36 / 2;
  *((_DWORD *)this + 55) = v36 / 2;
  if ( v37 )
  {
    operator delete[](v37);
    v38 = *((_DWORD *)this + 55);
  }
  if ( (unsigned __int64)v38 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v39 = operator new[](8LL * v38);
  v40 = *((void **)this + 26);
  *((_QWORD *)this + 25) = v39;
  if ( v40 )
    operator delete[](v40);
  v41 = *((int *)this + 55);
  if ( v41 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v42 = operator new[](4 * v41);
  v43 = *((void **)this + 28);
  *((_QWORD *)this + 26) = v42;
  if ( v43 )
    operator delete[](v43);
  v44 = *((int *)this + 9);
  if ( v44 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v45 = operator new[](4 * v44);
  v46 = *((void **)this + 29);
  *((_QWORD *)this + 28) = v45;
  if ( v46 )
    operator delete[](v46);
  v47 = *((int *)this + 9);
  if ( v47 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v48 = operator new[](4 * v47);
  v49 = *((void **)this + 30);
  *((_QWORD *)this + 29) = v48;
  v50 = *((int *)this + 55);
  *((_DWORD *)this + 65) = v50;
  if ( v49 )
  {
    operator delete[](v49);
    v50 = *((int *)this + 65);
  }
  if ( v50 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v51 = operator new[](8 * v50);
  v52 = *((void **)this + 31);
  *((_QWORD *)this + 30) = v51;
  if ( v52 )
    operator delete[](v52);
  v53 = *((int *)this + 65);
  if ( v53 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v54 = operator new[](4 * v53);
  v55 = *((void **)this + 33);
  *((_QWORD *)this + 31) = v54;
  if ( v55 )
    operator delete[](v55);
  v56 = *((int *)this + 9);
  if ( v56 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v57 = operator new[](4 * v56);
  v58 = *((void **)this + 34);
  *((_QWORD *)this + 33) = v57;
  if ( v58 )
    operator delete[](v58);
  v59 = *((int *)this + 9);
  if ( v59 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v60 = operator new[](4 * v59);
  v61 = *((_DWORD *)this + 9);
  *((_QWORD *)this + 34) = v60;
  *((_DWORD *)this + 128) = 10;
  v62 = v61 * (v61 + 10);
  v63 = *((void **)this + 35);
  *((_DWORD *)this + 74) = v62;
  if ( v63 )
  {
    operator delete[](v63);
    v62 = *((_DWORD *)this + 74);
  }
  if ( (unsigned __int64)v62 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v64 = operator new[](8LL * v62);
  v65 = *((void **)this + 36);
  *((_QWORD *)this + 35) = v64;
  if ( v65 )
    operator delete[](v65);
  v66 = *((int *)this + 74);
  if ( v66 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v67 = operator new[](4 * v66);
  v68 = *((void **)this + 39);
  *((_QWORD *)this + 36) = v67;
  if ( v68 )
    operator delete[](v68);
  v69 = *((int *)this + 9);
  if ( v69 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v70 = operator new[](4 * v69);
  v71 = *((void **)this + 40);
  *((_QWORD *)this + 39) = v70;
  if ( v71 )
    operator delete[](v71);
  v72 = *((int *)this + 9);
  if ( v72 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v73 = operator new[](4 * v72);
  v74 = *((void **)this + 41);
  *((_QWORD *)this + 40) = v73;
  if ( v74 )
    operator delete[](v74);
  v75 = *((int *)this + 9);
  if ( v75 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v76 = operator new[](4 * v75);
  v77 = *((void **)this + 42);
  *((_QWORD *)this + 41) = v76;
  if ( v77 )
    operator delete[](v77);
  v78 = *((int *)this + 9);
  if ( v78 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v79 = operator new[](4 * v78);
  v80 = *((void **)this + 43);
  *((_QWORD *)this + 42) = v79;
  v81 = *((int *)this + 74);
  *((_DWORD *)this + 96) = v81;
  if ( v80 )
  {
    operator delete[](v80);
    v81 = *((int *)this + 96);
  }
  if ( v81 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v82 = operator new[](8 * v81);
  v83 = *((void **)this + 44);
  *((_QWORD *)this + 43) = v82;
  if ( v83 )
    operator delete[](v83);
  v84 = *((int *)this + 96);
  if ( v84 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v85 = operator new[](4 * v84);
  v86 = *((void **)this + 45);
  *((_QWORD *)this + 44) = v85;
  if ( v86 )
    operator delete[](v86);
  v87 = *((int *)this + 9);
  if ( v87 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v88 = operator new[](4 * v87);
  v89 = *((void **)this + 46);
  *((_QWORD *)this + 45) = v88;
  if ( v89 )
    operator delete[](v89);
  v90 = *((int *)this + 9);
  if ( v90 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v91 = operator new[](4 * v90);
  v92 = *((void **)this + 49);
  *((_QWORD *)this + 46) = v91;
  if ( v92 )
    operator delete[](v92);
  v93 = *((int *)this + 9);
  if ( v93 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v94 = operator new[](4 * v93);
  v95 = *((void **)this + 50);
  *((_QWORD *)this + 49) = v94;
  if ( v95 )
    operator delete[](v95);
  v96 = *((int *)this + 9);
  if ( v96 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_128;
  v97 = operator new[](8 * v96);
  v98 = *((void **)this + 51);
  *((_QWORD *)this + 50) = v97;
  if ( v98 )
    operator delete[](v98);
  v99 = *((int *)this + 9);
  if ( v99 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v100 = operator new[](4 * v99);
  v101 = *((void **)this + 52);
  *((_QWORD *)this + 51) = v100;
  if ( v101 )
    operator delete[](v101);
  v102 = *((int *)this + 9);
  if ( v102 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v103 = operator new[](4 * v102);
  v104 = *((void **)this + 53);
  *((_QWORD *)this + 52) = v103;
  if ( v104 )
    operator delete[](v104);
  v105 = *((int *)this + 9);
  if ( v105 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v106 = operator new[](4 * v105);
  v107 = *((void **)this + 54);
  *((_QWORD *)this + 53) = v106;
  if ( v107 )
    operator delete[](v107);
  v108 = *((int *)this + 9);
  if ( v108 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v109 = operator new[](4 * v108);
  v110 = *((void **)this + 55);
  *((_QWORD *)this + 54) = v109;
  if ( v110 )
    operator delete[](v110);
  v111 = *((int *)this + 9);
  if ( v111 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v112 = operator new[](4 * v111);
  v113 = *((void **)this + 56);
  *((_QWORD *)this + 55) = v112;
  if ( v113 )
    operator delete[](v113);
  v114 = *((int *)this + 9);
  if ( v114 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v115 = operator new[](4 * v114);
  v116 = *((void **)this + 57);
  *((_QWORD *)this + 56) = v115;
  if ( v116 )
    operator delete[](v116);
  v117 = *((int *)this + 12);
  if ( v117 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v118 = operator new[](4 * v117);
  v119 = *((void **)this + 58);
  *((_QWORD *)this + 57) = v118;
  if ( v119 )
    operator delete[](v119);
  v120 = *((int *)this + 12);
  if ( v120 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v121 = operator new[](4 * v120);
  v122 = *((void **)this + 59);
  *((_QWORD *)this + 58) = v121;
  if ( v122 )
    operator delete[](v122);
  v123 = *((int *)this + 12);
  if ( v123 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  *((_QWORD *)this + 59) = operator new[](4 * v123);
  v124 = *((_DWORD *)this + 12);
  v125 = *((void **)this + 60);
  *((_DWORD *)this + 126) = v124;
  v126 = *((_DWORD *)this + 128) * v124;
  *((_DWORD *)this + 127) = v126;
  if ( v125 )
  {
    operator delete[](v125);
    v126 = *((_DWORD *)this + 127);
  }
  if ( (unsigned __int64)v126 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_128;
  v127 = operator new[](4LL * v126);
  v128 = *((void **)this + 61);
  *((_QWORD *)this + 60) = v127;
  if ( v128 )
    operator delete[](v128);
  v129 = *((int *)this + 127);
  if ( v129 > 0xFFFFFFFFFFFFFFFLL )
LABEL_128:
    __cxa_throw_bad_array_new_length();
  result = operator new[](8 * v129);
  *((_QWORD *)this + 61) = result;
  return result;
}

