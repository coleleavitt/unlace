__int64 __fastcall CoinSimpFactorization::gutsOfCopy(CoinSimpFactorization *this, const CoinSimpFactorization *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  bool v6; // zf
  __int64 v7; // xmm0_8
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  void *v12; // rax
  int v13; // ecx
  int v14; // edx
  unsigned __int64 v15; // rdi
  void *v16; // rax
  unsigned __int64 v17; // r12
  int v18; // edx
  __int64 v19; // xmm0_8
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  void *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdi
  void *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  void *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  void *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  void *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  void *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rdi
  void *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  void *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  void *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rdi
  void *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rdi
  void *v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rdi
  void *v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  void *v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  void *v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rdi
  void *v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rdi
  void *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  void *v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rdi
  void *v75; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // rdi
  void *v78; // rax
  __int64 v79; // rdx
  unsigned __int64 v80; // rdi
  void *v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // rdi
  void *v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rdi
  void *v87; // rax
  __int64 v88; // rdx
  unsigned __int64 v89; // rdi
  void *v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rdi
  void *v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rdi
  void *v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // rdi
  void *v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rdi
  void *v102; // rax
  __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  void *v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rdi
  void *v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rdi
  void *v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rdi
  void *v114; // rax
  __int64 v115; // rdx
  unsigned __int64 v116; // rdi
  void *v117; // rax
  __int64 v118; // rdx
  unsigned __int64 v119; // rdi
  void *v120; // rax
  __int64 v121; // rdx
  unsigned __int64 v122; // rdi
  void *v123; // rax
  __int64 v124; // rdx
  unsigned __int64 v125; // rdi
  void *v126; // rax
  __int64 v127; // rdx
  unsigned __int64 v128; // rdi
  void *v129; // rax
  __int64 v130; // rdx
  unsigned __int64 v131; // rdi
  void *v132; // rax
  __int64 v133; // rdx
  unsigned __int64 v134; // rdi
  void *v135; // rax
  __int64 v136; // rdx
  unsigned __int64 v137; // rdi
  void *v138; // rax
  __int64 v139; // rdx
  unsigned __int64 v140; // rdi
  void *v141; // rax
  __int64 v142; // rdx
  unsigned __int64 v143; // rdi
  void *v144; // rax
  __int64 v145; // rdx
  char v146; // al
  __int64 result; // rax
  __int64 v148; // xmm0_8

  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_DWORD *)a2 + 15);
  v5 = *((_DWORD *)a2 + 13);
  v6 = *((_QWORD *)a2 + 9) == 0;
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)((char *)a2 + 8);
  v7 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 9) = v3;
  v8 = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 15) = v4;
  *((_QWORD *)this + 3) = v7;
  *((_DWORD *)this + 10) = v8;
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  v9 = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = v5;
  v10 = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 12) = v9;
  *((_DWORD *)this + 8) = v10;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 141) = *((_DWORD *)a2 + 141);
  *((_DWORD *)this + 142) = *((_DWORD *)a2 + 142);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0;
    *((_QWORD *)this + 9) = 0;
    *((_QWORD *)this + 11) = 0;
  }
  else
  {
    v11 = v9 + 2 * v4;
    if ( (unsigned __int64)v11 > 0x1FFFFFFFFFFFFFFELL
      || (v12 = (void *)operator new[](4LL * v11),
          v13 = *((_DWORD *)this + 15),
          v14 = *((_DWORD *)this + 13),
          *((_QWORD *)this + 9) = v12,
          memcpy(v12, *((const void **)a2 + 9), 4LL * (v14 + 2 * v13)),
          v15 = *((int *)this + 16),
          v15 > 0xFFFFFFFFFFFFFFFLL)
      || (v16 = (void *)operator new[](8 * v15),
          v17 = *((int *)this + 15),
          v18 = *((_DWORD *)this + 13),
          *((_QWORD *)this + 10) = v16,
          memcpy(v16, *((const void **)a2 + 10), 8LL * (int)v17 * ((int)v17 + v18)),
          v17 > 0xFFFFFFFFFFFFFFFLL) )
    {
LABEL_138:
      __cxa_throw_bad_array_new_length();
    }
    *((_QWORD *)this + 11) = operator new[](8 * v17);
  }
  v6 = *((_QWORD *)a2 + 13) == 0;
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *(__m128i *)((char *)this + 296) = _mm_loadu_si128((const __m128i *)((char *)a2 + 296));
  *(__m128i *)((char *)this + 376) = _mm_loadu_si128((const __m128i *)((char *)a2 + 376));
  *((__m128i *)this + 31) = _mm_loadu_si128((const __m128i *)a2 + 31);
  v19 = *((_QWORD *)a2 + 65);
  *((_DWORD *)this + 128) = *((_DWORD *)a2 + 128);
  *((_QWORD *)this + 65) = v19;
  if ( v6 )
  {
    *((_QWORD *)this + 13) = 0;
  }
  else
  {
    v20 = *((int *)this + 15);
    if ( v20 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_138;
    v21 = (void *)operator new[](8 * v20);
    v22 = *((int *)this + 15);
    *((_QWORD *)this + 13) = v21;
    memcpy(v21, *((const void **)a2 + 13), 8 * v22);
  }
  if ( !*((_QWORD *)a2 + 14) )
  {
    v6 = *((_QWORD *)a2 + 15) == 0;
    *((_QWORD *)this + 14) = 0;
    if ( !v6 )
      goto LABEL_12;
LABEL_98:
    v6 = *((_QWORD *)a2 + 16) == 0;
    *((_QWORD *)this + 15) = 0;
    if ( !v6 )
      goto LABEL_14;
LABEL_99:
    v6 = *((_QWORD *)a2 + 17) == 0;
    *((_QWORD *)this + 16) = 0;
    if ( !v6 )
      goto LABEL_16;
LABEL_100:
    v6 = *((_QWORD *)a2 + 18) == 0;
    *((_QWORD *)this + 17) = 0;
    if ( !v6 )
      goto LABEL_18;
LABEL_101:
    v6 = *((_QWORD *)a2 + 19) == 0;
    *((_QWORD *)this + 18) = 0;
    if ( !v6 )
      goto LABEL_20;
LABEL_102:
    v6 = *((_QWORD *)a2 + 20) == 0;
    *((_QWORD *)this + 19) = 0;
    if ( !v6 )
      goto LABEL_22;
LABEL_103:
    v6 = *((_QWORD *)a2 + 21) == 0;
    *((_QWORD *)this + 20) = 0;
    if ( !v6 )
      goto LABEL_24;
LABEL_104:
    v6 = *((_QWORD *)a2 + 23) == 0;
    *((_QWORD *)this + 21) = 0;
    if ( !v6 )
      goto LABEL_26;
LABEL_105:
    v6 = *((_QWORD *)a2 + 24) == 0;
    *((_QWORD *)this + 23) = 0;
    if ( !v6 )
      goto LABEL_28;
LABEL_106:
    v6 = *((_QWORD *)a2 + 25) == 0;
    *((_QWORD *)this + 24) = 0;
    if ( !v6 )
      goto LABEL_30;
LABEL_107:
    v6 = *((_QWORD *)a2 + 26) == 0;
    *((_QWORD *)this + 25) = 0;
    if ( !v6 )
      goto LABEL_32;
LABEL_108:
    v6 = *((_QWORD *)a2 + 28) == 0;
    *((_QWORD *)this + 26) = 0;
    if ( !v6 )
      goto LABEL_34;
LABEL_109:
    v6 = *((_QWORD *)a2 + 29) == 0;
    *((_QWORD *)this + 28) = 0;
    if ( !v6 )
      goto LABEL_36;
LABEL_110:
    v6 = *((_QWORD *)a2 + 30) == 0;
    *((_QWORD *)this + 29) = 0;
    if ( !v6 )
      goto LABEL_38;
LABEL_111:
    v6 = *((_QWORD *)a2 + 31) == 0;
    *((_QWORD *)this + 30) = 0;
    if ( !v6 )
      goto LABEL_40;
LABEL_112:
    v6 = *((_QWORD *)a2 + 33) == 0;
    *((_QWORD *)this + 31) = 0;
    if ( !v6 )
      goto LABEL_42;
LABEL_113:
    v6 = *((_QWORD *)a2 + 34) == 0;
    *((_QWORD *)this + 33) = 0;
    if ( !v6 )
      goto LABEL_44;
LABEL_114:
    v6 = *((_QWORD *)a2 + 35) == 0;
    *((_QWORD *)this + 34) = 0;
    if ( !v6 )
      goto LABEL_46;
LABEL_115:
    v6 = *((_QWORD *)a2 + 36) == 0;
    *((_QWORD *)this + 35) = 0;
    if ( !v6 )
      goto LABEL_48;
LABEL_116:
    v6 = *((_QWORD *)a2 + 39) == 0;
    *((_QWORD *)this + 36) = 0;
    if ( !v6 )
      goto LABEL_50;
LABEL_117:
    v6 = *((_QWORD *)a2 + 40) == 0;
    *((_QWORD *)this + 39) = 0;
    if ( !v6 )
      goto LABEL_52;
LABEL_118:
    v6 = *((_QWORD *)a2 + 41) == 0;
    *((_QWORD *)this + 40) = 0;
    if ( !v6 )
      goto LABEL_54;
LABEL_119:
    v6 = *((_QWORD *)a2 + 42) == 0;
    *((_QWORD *)this + 41) = 0;
    if ( !v6 )
      goto LABEL_56;
LABEL_120:
    v6 = *((_QWORD *)a2 + 43) == 0;
    *((_QWORD *)this + 42) = 0;
    if ( !v6 )
      goto LABEL_58;
LABEL_121:
    v6 = *((_QWORD *)a2 + 44) == 0;
    *((_QWORD *)this + 43) = 0;
    if ( !v6 )
      goto LABEL_60;
LABEL_122:
    v6 = *((_QWORD *)a2 + 45) == 0;
    *((_QWORD *)this + 44) = 0;
    if ( !v6 )
      goto LABEL_62;
    goto LABEL_123;
  }
  v23 = *((int *)this + 15);
  if ( v23 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v24 = (void *)operator new[](8 * v23);
  v25 = *((int *)this + 15);
  *((_QWORD *)this + 14) = v24;
  memcpy(v24, *((const void **)a2 + 14), 8 * v25);
  if ( !*((_QWORD *)a2 + 15) )
    goto LABEL_98;
LABEL_12:
  v26 = *((int *)this + 15);
  if ( v26 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v27 = (void *)operator new[](8 * v26);
  v28 = *((int *)this + 15);
  *((_QWORD *)this + 15) = v27;
  memcpy(v27, *((const void **)a2 + 15), 8 * v28);
  if ( !*((_QWORD *)a2 + 16) )
    goto LABEL_99;
LABEL_14:
  v29 = *((int *)this + 15);
  if ( v29 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v30 = (void *)operator new[](4 * v29);
  v31 = *((int *)this + 15);
  *((_QWORD *)this + 16) = v30;
  memcpy(v30, *((const void **)a2 + 16), 4 * v31);
  if ( !*((_QWORD *)a2 + 17) )
    goto LABEL_100;
LABEL_16:
  v32 = *((int *)this + 15);
  if ( v32 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v33 = (void *)operator new[](4 * v32);
  v34 = *((int *)this + 15);
  *((_QWORD *)this + 17) = v33;
  memcpy(v33, *((const void **)a2 + 17), 4 * v34);
  if ( !*((_QWORD *)a2 + 18) )
    goto LABEL_101;
LABEL_18:
  v35 = *((int *)this + 15);
  if ( v35 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v36 = (void *)operator new[](8 * v35);
  v37 = *((int *)this + 15);
  *((_QWORD *)this + 18) = v36;
  memcpy(v36, *((const void **)a2 + 18), 8 * v37);
  if ( !*((_QWORD *)a2 + 19) )
    goto LABEL_102;
LABEL_20:
  v38 = *((int *)this + 15);
  if ( v38 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v39 = (void *)operator new[](4 * v38);
  v40 = *((int *)this + 15);
  *((_QWORD *)this + 19) = v39;
  memcpy(v39, *((const void **)a2 + 19), 4 * v40);
  if ( !*((_QWORD *)a2 + 20) )
    goto LABEL_103;
LABEL_22:
  v41 = *((int *)this + 15);
  if ( v41 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v42 = (void *)operator new[](8 * v41);
  v43 = *((int *)this + 15);
  *((_QWORD *)this + 20) = v42;
  memcpy(v42, *((const void **)a2 + 20), 8 * v43);
  if ( !*((_QWORD *)a2 + 21) )
    goto LABEL_104;
LABEL_24:
  v44 = *((int *)this + 15);
  if ( v44 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v45 = (void *)operator new[](4 * v44);
  v46 = *((int *)this + 15);
  *((_QWORD *)this + 21) = v45;
  memcpy(v45, *((const void **)a2 + 21), 4 * v46);
  if ( !*((_QWORD *)a2 + 23) )
    goto LABEL_105;
LABEL_26:
  v47 = *((int *)this + 15);
  if ( v47 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v48 = (void *)operator new[](4 * v47);
  v49 = *((int *)this + 15);
  *((_QWORD *)this + 23) = v48;
  memcpy(v48, *((const void **)a2 + 23), 4 * v49);
  if ( !*((_QWORD *)a2 + 24) )
    goto LABEL_106;
LABEL_28:
  v50 = *((int *)this + 15);
  if ( v50 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v51 = (void *)operator new[](4 * v50);
  v52 = *((int *)this + 15);
  *((_QWORD *)this + 24) = v51;
  memcpy(v51, *((const void **)a2 + 24), 4 * v52);
  if ( !*((_QWORD *)a2 + 25) )
    goto LABEL_107;
LABEL_30:
  v53 = *((int *)a2 + 55);
  if ( v53 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v54 = (void *)operator new[](8 * v53);
  v55 = *((int *)a2 + 55);
  *((_QWORD *)this + 25) = v54;
  memcpy(v54, *((const void **)a2 + 25), 8 * v55);
  if ( !*((_QWORD *)a2 + 26) )
    goto LABEL_108;
LABEL_32:
  v56 = *((int *)a2 + 55);
  if ( v56 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v57 = (void *)operator new[](4 * v56);
  v58 = *((int *)a2 + 55);
  *((_QWORD *)this + 26) = v57;
  memcpy(v57, *((const void **)a2 + 26), 4 * v58);
  if ( !*((_QWORD *)a2 + 28) )
    goto LABEL_109;
LABEL_34:
  v59 = *((int *)this + 15);
  if ( v59 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v60 = (void *)operator new[](4 * v59);
  v61 = *((int *)this + 15);
  *((_QWORD *)this + 28) = v60;
  memcpy(v60, *((const void **)a2 + 28), 4 * v61);
  if ( !*((_QWORD *)a2 + 29) )
    goto LABEL_110;
LABEL_36:
  v62 = *((int *)this + 15);
  if ( v62 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v63 = (void *)operator new[](4 * v62);
  v64 = *((int *)this + 15);
  *((_QWORD *)this + 29) = v63;
  memcpy(v63, *((const void **)a2 + 29), 4 * v64);
  if ( !*((_QWORD *)a2 + 30) )
    goto LABEL_111;
LABEL_38:
  v65 = *((int *)a2 + 65);
  if ( v65 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v66 = (void *)operator new[](8 * v65);
  v67 = *((int *)a2 + 65);
  *((_QWORD *)this + 30) = v66;
  memcpy(v66, *((const void **)a2 + 30), 8 * v67);
  if ( !*((_QWORD *)a2 + 31) )
    goto LABEL_112;
LABEL_40:
  v68 = *((int *)a2 + 65);
  if ( v68 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v69 = (void *)operator new[](4 * v68);
  v70 = *((int *)a2 + 65);
  *((_QWORD *)this + 31) = v69;
  memcpy(v69, *((const void **)a2 + 31), 4 * v70);
  if ( !*((_QWORD *)a2 + 33) )
    goto LABEL_113;
LABEL_42:
  v71 = *((int *)this + 15);
  if ( v71 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v72 = (void *)operator new[](4 * v71);
  v73 = *((int *)this + 15);
  *((_QWORD *)this + 33) = v72;
  memcpy(v72, *((const void **)a2 + 33), 4 * v73);
  if ( !*((_QWORD *)a2 + 34) )
    goto LABEL_114;
LABEL_44:
  v74 = *((int *)this + 15);
  if ( v74 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v75 = (void *)operator new[](4 * v74);
  v76 = *((int *)this + 15);
  *((_QWORD *)this + 34) = v75;
  memcpy(v75, *((const void **)a2 + 34), 4 * v76);
  if ( !*((_QWORD *)a2 + 35) )
    goto LABEL_115;
LABEL_46:
  v77 = *((int *)a2 + 74);
  if ( v77 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v78 = (void *)operator new[](8 * v77);
  v79 = *((int *)a2 + 74);
  *((_QWORD *)this + 35) = v78;
  memcpy(v78, *((const void **)a2 + 35), 8 * v79);
  if ( !*((_QWORD *)a2 + 36) )
    goto LABEL_116;
LABEL_48:
  v80 = *((int *)a2 + 74);
  if ( v80 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v81 = (void *)operator new[](4 * v80);
  v82 = *((int *)a2 + 74);
  *((_QWORD *)this + 36) = v81;
  memcpy(v81, *((const void **)a2 + 36), 4 * v82);
  if ( !*((_QWORD *)a2 + 39) )
    goto LABEL_117;
LABEL_50:
  v83 = *((int *)this + 15);
  if ( v83 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v84 = (void *)operator new[](4 * v83);
  v85 = *((int *)this + 15);
  *((_QWORD *)this + 39) = v84;
  memcpy(v84, *((const void **)a2 + 39), 4 * v85);
  if ( !*((_QWORD *)a2 + 40) )
    goto LABEL_118;
LABEL_52:
  v86 = *((int *)this + 15);
  if ( v86 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v87 = (void *)operator new[](4 * v86);
  v88 = *((int *)this + 15);
  *((_QWORD *)this + 40) = v87;
  memcpy(v87, *((const void **)a2 + 40), 4 * v88);
  if ( !*((_QWORD *)a2 + 41) )
    goto LABEL_119;
LABEL_54:
  v89 = *((int *)this + 15);
  if ( v89 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v90 = (void *)operator new[](4 * v89);
  v91 = *((int *)this + 15);
  *((_QWORD *)this + 41) = v90;
  memcpy(v90, *((const void **)a2 + 41), 4 * v91);
  if ( !*((_QWORD *)a2 + 42) )
    goto LABEL_120;
LABEL_56:
  v92 = *((int *)this + 15);
  if ( v92 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v93 = (void *)operator new[](4 * v92);
  v94 = *((int *)this + 15);
  *((_QWORD *)this + 42) = v93;
  memcpy(v93, *((const void **)a2 + 42), 4 * v94);
  if ( !*((_QWORD *)a2 + 43) )
    goto LABEL_121;
LABEL_58:
  v95 = *((int *)a2 + 96);
  if ( v95 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v96 = (void *)operator new[](8 * v95);
  v97 = *((int *)a2 + 96);
  *((_QWORD *)this + 43) = v96;
  memcpy(v96, *((const void **)a2 + 43), 8 * v97);
  if ( !*((_QWORD *)a2 + 44) )
    goto LABEL_122;
LABEL_60:
  v98 = *((int *)a2 + 96);
  if ( v98 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v99 = (void *)operator new[](4 * v98);
  v100 = *((int *)a2 + 96);
  *((_QWORD *)this + 44) = v99;
  memcpy(v99, *((const void **)a2 + 44), 4 * v100);
  if ( *((_QWORD *)a2 + 45) )
  {
LABEL_62:
    v101 = *((int *)this + 15);
    if ( v101 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_138;
    v102 = (void *)operator new[](4 * v101);
    v103 = *((int *)this + 15);
    *((_QWORD *)this + 45) = v102;
    memcpy(v102, *((const void **)a2 + 45), 4 * v103);
    if ( *((_QWORD *)a2 + 46) )
      goto LABEL_64;
LABEL_124:
    *((_QWORD *)this + 46) = 0;
    goto LABEL_66;
  }
LABEL_123:
  v6 = *((_QWORD *)a2 + 46) == 0;
  *((_QWORD *)this + 45) = 0;
  if ( v6 )
    goto LABEL_124;
LABEL_64:
  v104 = *((int *)this + 15);
  if ( v104 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v105 = (void *)operator new[](4 * v104);
  v106 = *((int *)this + 15);
  *((_QWORD *)this + 46) = v105;
  memcpy(v105, *((const void **)a2 + 46), 4 * v106);
LABEL_66:
  if ( *((_QWORD *)a2 + 49) )
  {
    v107 = *((int *)this + 15);
    if ( v107 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_138;
    v108 = (void *)operator new[](4 * v107);
    v109 = *((int *)this + 15);
    *((_QWORD *)this + 49) = v108;
    memcpy(v108, *((const void **)a2 + 49), 4 * v109);
  }
  if ( *((_QWORD *)a2 + 50) )
  {
    v110 = *((int *)this + 15);
    if ( v110 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_138;
    v111 = (void *)operator new[](8 * v110);
    v112 = *((int *)this + 15);
    *((_QWORD *)this + 50) = v111;
    memcpy(v111, *((const void **)a2 + 50), 8 * v112);
  }
  else
  {
    *((_QWORD *)this + 50) = 0;
  }
  if ( !*((_QWORD *)a2 + 51) )
  {
    v6 = *((_QWORD *)a2 + 52) == 0;
    *((_QWORD *)this + 51) = 0;
    if ( !v6 )
      goto LABEL_75;
LABEL_127:
    v6 = *((_QWORD *)a2 + 53) == 0;
    *((_QWORD *)this + 52) = 0;
    if ( !v6 )
      goto LABEL_77;
LABEL_128:
    v6 = *((_QWORD *)a2 + 54) == 0;
    *((_QWORD *)this + 53) = 0;
    if ( !v6 )
      goto LABEL_79;
LABEL_129:
    v6 = *((_QWORD *)a2 + 55) == 0;
    *((_QWORD *)this + 54) = 0;
    if ( !v6 )
      goto LABEL_81;
LABEL_130:
    v6 = *((_QWORD *)a2 + 56) == 0;
    *((_QWORD *)this + 55) = 0;
    if ( !v6 )
      goto LABEL_83;
LABEL_131:
    v6 = *((_QWORD *)a2 + 57) == 0;
    *((_QWORD *)this + 56) = 0;
    if ( !v6 )
      goto LABEL_85;
LABEL_132:
    v6 = *((_QWORD *)a2 + 58) == 0;
    *((_QWORD *)this + 57) = 0;
    if ( !v6 )
      goto LABEL_87;
LABEL_133:
    v6 = *((_QWORD *)a2 + 59) == 0;
    *((_QWORD *)this + 58) = 0;
    if ( !v6 )
      goto LABEL_89;
LABEL_134:
    v6 = *((_QWORD *)a2 + 60) == 0;
    *((_QWORD *)this + 59) = 0;
    if ( !v6 )
      goto LABEL_91;
LABEL_135:
    v6 = *((_QWORD *)a2 + 61) == 0;
    *((_QWORD *)this + 60) = 0;
    if ( !v6 )
      goto LABEL_93;
LABEL_136:
    *((_QWORD *)this + 61) = 0;
    goto LABEL_95;
  }
  v113 = *((int *)this + 15);
  if ( v113 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v114 = (void *)operator new[](4 * v113);
  v115 = *((int *)this + 15);
  *((_QWORD *)this + 51) = v114;
  memcpy(v114, *((const void **)a2 + 51), 4 * v115);
  if ( !*((_QWORD *)a2 + 52) )
    goto LABEL_127;
LABEL_75:
  v116 = *((int *)this + 15);
  if ( v116 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v117 = (void *)operator new[](4 * v116);
  v118 = *((int *)this + 15);
  *((_QWORD *)this + 52) = v117;
  memcpy(v117, *((const void **)a2 + 52), 4 * v118);
  if ( !*((_QWORD *)a2 + 53) )
    goto LABEL_128;
LABEL_77:
  v119 = *((int *)this + 15);
  if ( v119 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v120 = (void *)operator new[](4 * v119);
  v121 = *((int *)this + 15);
  *((_QWORD *)this + 53) = v120;
  memcpy(v120, *((const void **)a2 + 53), 4 * v121);
  if ( !*((_QWORD *)a2 + 54) )
    goto LABEL_129;
LABEL_79:
  v122 = *((int *)this + 15);
  if ( v122 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v123 = (void *)operator new[](4 * v122);
  v124 = *((int *)this + 15);
  *((_QWORD *)this + 54) = v123;
  memcpy(v123, *((const void **)a2 + 54), 4 * v124);
  if ( !*((_QWORD *)a2 + 55) )
    goto LABEL_130;
LABEL_81:
  v125 = *((int *)this + 15);
  if ( v125 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v126 = (void *)operator new[](4 * v125);
  v127 = *((int *)this + 15);
  *((_QWORD *)this + 55) = v126;
  memcpy(v126, *((const void **)a2 + 55), 4 * v127);
  if ( !*((_QWORD *)a2 + 56) )
    goto LABEL_131;
LABEL_83:
  v128 = *((int *)this + 15);
  if ( v128 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v129 = (void *)operator new[](4 * v128);
  v130 = *((int *)this + 15);
  *((_QWORD *)this + 56) = v129;
  memcpy(v129, *((const void **)a2 + 56), 4 * v130);
  if ( !*((_QWORD *)a2 + 57) )
    goto LABEL_132;
LABEL_85:
  v131 = *((int *)a2 + 126);
  if ( v131 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v132 = (void *)operator new[](4 * v131);
  v133 = *((int *)a2 + 126);
  *((_QWORD *)this + 57) = v132;
  memcpy(v132, *((const void **)a2 + 57), 4 * v133);
  if ( !*((_QWORD *)a2 + 58) )
    goto LABEL_133;
LABEL_87:
  v134 = *((int *)a2 + 126);
  if ( v134 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v135 = (void *)operator new[](4 * v134);
  v136 = *((int *)a2 + 126);
  *((_QWORD *)this + 58) = v135;
  memcpy(v135, *((const void **)a2 + 58), 4 * v136);
  if ( !*((_QWORD *)a2 + 59) )
    goto LABEL_134;
LABEL_89:
  v137 = *((int *)a2 + 126);
  if ( v137 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v138 = (void *)operator new[](4 * v137);
  v139 = *((int *)a2 + 126);
  *((_QWORD *)this + 59) = v138;
  memcpy(v138, *((const void **)a2 + 59), 4 * v139);
  if ( !*((_QWORD *)a2 + 60) )
    goto LABEL_135;
LABEL_91:
  v140 = *((int *)a2 + 127);
  if ( v140 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_138;
  v141 = (void *)operator new[](4 * v140);
  v142 = *((int *)a2 + 127);
  *((_QWORD *)this + 60) = v141;
  memcpy(v141, *((const void **)a2 + 60), 4 * v142);
  if ( !*((_QWORD *)a2 + 61) )
    goto LABEL_136;
LABEL_93:
  v143 = *((int *)a2 + 127);
  if ( v143 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_138;
  v144 = (void *)operator new[](8 * v143);
  v145 = *((int *)a2 + 127);
  *((_QWORD *)this + 61) = v144;
  memcpy(v144, *((const void **)a2 + 61), 8 * v145);
LABEL_95:
  v146 = *((_BYTE *)a2 + 528);
  *(_OWORD *)((char *)this + 536) = *(_OWORD *)((char *)a2 + 536);
  *((_BYTE *)this + 528) = v146;
  result = *((unsigned int *)a2 + 140);
  v148 = *((_QWORD *)a2 + 69);
  *((_DWORD *)this + 140) = result;
  *((_QWORD *)this + 69) = v148;
  return result;
}

