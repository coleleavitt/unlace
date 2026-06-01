/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140006960
// Address: 0x0000000140006960

//----- (0000000140006960) ----------------------------------------------------
__int64 __fastcall sub_140006960(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v7; // di
  unsigned __int64 v8; // r8
  char v9; // r12
  unsigned __int64 v10; // r8
  void **v11; // rbx
  char v12; // r15
  unsigned __int64 v13; // r8
  void **v14; // rbx
  char v15; // r15
  unsigned __int64 v16; // r8
  void **v17; // rbx
  char v18; // r15
  unsigned __int64 v19; // r8
  void **v20; // rbx
  char v21; // r15
  unsigned __int64 v22; // r8
  void **v23; // rbx
  char v24; // r15
  unsigned __int64 v25; // r8
  void **v26; // rbx
  char v27; // r15
  unsigned __int64 v28; // r8
  void **v29; // rbx
  char v30; // r15
  unsigned __int64 v31; // r8
  size_t v32; // r15
  size_t v33; // rbx
  unsigned __int64 v34; // rdx
  size_t v35; // r15
  size_t v36; // rbx
  unsigned __int64 v37; // rdx
  size_t v38; // r15
  size_t v39; // rbx
  unsigned __int64 v40; // rdx
  size_t v41; // r15
  size_t v42; // rbx
  unsigned __int64 v43; // rdx
  size_t v44; // r15
  size_t v45; // rbx
  unsigned __int64 v46; // rdx
  size_t v47; // r15
  size_t v48; // rbx
  unsigned __int64 v49; // rdx
  size_t v50; // r15
  size_t v51; // rbx
  unsigned __int64 v52; // rdx
  size_t v53; // r15
  size_t v54; // rbx
  unsigned __int64 v55; // rdx
  size_t v56; // r15
  size_t v57; // rbx
  unsigned __int64 v58; // rdx
  size_t v59; // r15
  size_t v60; // rbx
  unsigned __int64 v61; // rdx
  size_t v62; // r15
  size_t v63; // rbx
  unsigned __int64 v64; // rdx
  size_t v65; // r15
  size_t v66; // rbx
  unsigned __int64 v67; // rdx
  size_t v68; // r15
  size_t v69; // rbx
  unsigned __int64 v70; // rdx
  size_t v71; // r15
  size_t v72; // rbx
  unsigned __int64 v73; // rdx
  size_t v74; // r15
  size_t v75; // rbx
  unsigned __int64 v76; // rdx
  size_t v77; // r15
  size_t v78; // rbx
  unsigned __int64 v79; // rdx
  size_t v80; // r15
  size_t v81; // rbx
  unsigned __int64 v82; // rdx
  void *v83; // rbx
  const char *v84; // r15
  size_t v85; // rax
  size_t v86; // r12
  size_t v87; // rbx
  unsigned __int64 v88; // rdx
  size_t v89; // r15
  size_t v90; // rbx
  unsigned __int64 v91; // rdx
  size_t v92; // r15
  size_t v93; // rbx
  unsigned __int64 v94; // rdx
  size_t v95; // r15
  size_t v96; // rax
  size_t v97; // rsi
  unsigned __int64 v98; // rbx
  char *v99; // rcx
  size_t v100; // r13
  size_t v101; // r15
  size_t v102; // r12
  size_t v103; // rax
  size_t v104; // rsi
  unsigned __int64 v105; // rbx
  char *v106; // rcx
  size_t v107; // rax
  size_t v108; // rsi
  unsigned __int64 v109; // rbx
  char *v110; // rcx
  BYTE bVal; // bl
  size_t v112; // rsi
  _QWORD *v113; // rdi
  const void *v114; // r14
  size_t v115; // rbx
  unsigned __int64 v116; // rdx
  unsigned int v117; // [rsp+20h] [rbp-E0h] BYREF
  void *Block; // [rsp+28h] [rbp-D8h] BYREF
  size_t v119; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v120; // [rsp+38h] [rbp-C8h]
  BSTR bstrString; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v122[3]; // [rsp+48h] [rbp-B8h] BYREF
  char v123; // [rsp+4Bh] [rbp-B5h] BYREF
  unsigned int v124; // [rsp+4Ch] [rbp-B4h] BYREF
  VARIANTARG pvarg; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v126[4]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE Src[5]; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE v128[3]; // [rsp+71h] [rbp-8Fh] BYREF
  _BYTE v129[5]; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v130[3]; // [rsp+79h] [rbp-87h] BYREF
  _BYTE v131[5]; // [rsp+7Ch] [rbp-84h] BYREF
  _BYTE v132[3]; // [rsp+81h] [rbp-7Fh] BYREF
  _BYTE v133[5]; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v134[3]; // [rsp+89h] [rbp-77h] BYREF
  _BYTE v135[5]; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v136[3]; // [rsp+91h] [rbp-6Fh] BYREF
  _BYTE v137[5]; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v138[3]; // [rsp+99h] [rbp-67h] BYREF
  _BYTE v139[5]; // [rsp+9Ch] [rbp-64h] BYREF
  _BYTE v140[3]; // [rsp+A1h] [rbp-5Fh] BYREF
  _BYTE v141[5]; // [rsp+A4h] [rbp-5Ch] BYREF
  _BYTE v142[3]; // [rsp+A9h] [rbp-57h] BYREF
  _BYTE v143[5]; // [rsp+ACh] [rbp-54h] BYREF
  _BYTE v144[3]; // [rsp+B1h] [rbp-4Fh] BYREF
  _BYTE v145[5]; // [rsp+B4h] [rbp-4Ch] BYREF
  _BYTE v146[3]; // [rsp+B9h] [rbp-47h] BYREF
  _BYTE v147[5]; // [rsp+BCh] [rbp-44h] BYREF
  _BYTE v148[3]; // [rsp+C1h] [rbp-3Fh] BYREF
  _BYTE v149[5]; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v150[3]; // [rsp+C9h] [rbp-37h] BYREF
  _BYTE v151[5]; // [rsp+CCh] [rbp-34h] BYREF
  _BYTE v152[3]; // [rsp+D1h] [rbp-2Fh] BYREF
  _BYTE v153[5]; // [rsp+D4h] [rbp-2Ch] BYREF
  _BYTE v154[3]; // [rsp+D9h] [rbp-27h] BYREF
  _BYTE v155[5]; // [rsp+DCh] [rbp-24h] BYREF
  _BYTE v156[3]; // [rsp+E1h] [rbp-1Fh] BYREF
  _BYTE v157[5]; // [rsp+E4h] [rbp-1Ch] BYREF
  _BYTE v158[3]; // [rsp+E9h] [rbp-17h] BYREF
  _BYTE v159[5]; // [rsp+ECh] [rbp-14h] BYREF
  _BYTE v160[3]; // [rsp+F1h] [rbp-Fh] BYREF
  _BYTE v161[5]; // [rsp+F4h] [rbp-Ch] BYREF
  _BYTE v162[7]; // [rsp+F9h] [rbp-7h] BYREF
  _BYTE v163[10]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v164[6]; // [rsp+10Ah] [rbp+Ah] BYREF
  _BYTE v165[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v166[6]; // [rsp+11Ah] [rbp+1Ah] BYREF

  v4 = (__int64)(a1 + 37);
  v5 = 0;
  a1[38] = 0;
  v124 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v124) )
    return 2147500037LL;
  sub_140002D20(a1 + 33, v124);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v126);
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 160LL))(a2, &v117) )
  {
    v7 = v117;
    v8 = *(_QWORD *)(v4 + 8) + 1LL;
    if ( v8 > *(_QWORD *)(v4 + 16) )
      *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v8, 1u);
    *(_BYTE *)(*(_QWORD *)v4 + a1[38]++) = v7;
    v5 = 1;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 872LL))(a2, &v117) )
  {
    v9 = v117;
    v10 = *(_QWORD *)(v4 + 8) + 1LL;
    if ( v10 > *(_QWORD *)(v4 + 16) )
      *(_QWORD *)v4 = sub_14005ABE0(v4, *(void **)v4, v10, 1u);
    *(_BYTE *)(*(_QWORD *)(v4 + 8) + *(_QWORD *)v4) = v9;
    ++*(_QWORD *)(v4 + 8);
    v5 |= 2uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 304LL))(a2, &v117) )
  {
    v11 = (void **)(a1 + 37);
    v12 = v117;
    v13 = a1[38] + 1LL;
    if ( v13 > a1[39] )
      *v11 = sub_14005ABE0((__int64)(a1 + 37), *v11, v13, 1u);
    *((_BYTE *)*v11 + a1[38]++) = v12;
    v5 |= 4uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 152LL))(a2, &v117) )
  {
    v14 = (void **)(a1 + 37);
    v15 = v117;
    v16 = a1[38] + 1LL;
    if ( v16 > a1[39] )
      *v14 = sub_14005ABE0((__int64)(a1 + 37), *v14, v16, 1u);
    *((_BYTE *)*v14 + a1[38]++) = v15;
    v5 |= 8uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 552LL))(a2, &v117) )
  {
    v17 = (void **)(a1 + 37);
    v18 = v117;
    v19 = a1[38] + 1LL;
    if ( v19 > a1[39] )
      *v17 = sub_14005ABE0((__int64)(a1 + 37), *v17, v19, 1u);
    *((_BYTE *)*v17 + a1[38]++) = v18;
    v5 |= 0x10uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 456LL))(a2, &v117) )
  {
    v20 = (void **)(a1 + 37);
    v21 = v117;
    v22 = a1[38] + 1LL;
    if ( v22 > a1[39] )
      *v20 = sub_14005ABE0((__int64)(a1 + 37), *v20, v22, 1u);
    *((_BYTE *)*v20 + a1[38]++) = v21;
    v5 |= 0x20uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 464LL))(a2, &v117) )
  {
    v23 = (void **)(a1 + 37);
    v24 = v117;
    v25 = a1[38] + 1LL;
    if ( v25 > a1[39] )
      *v23 = sub_14005ABE0((__int64)(a1 + 37), *v23, v25, 1u);
    *((_BYTE *)*v23 + a1[38]++) = v24;
    v5 |= 0x40uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 560LL))(a2, &v117) )
  {
    v26 = (void **)(a1 + 37);
    v27 = v117;
    v28 = a1[38] + 1LL;
    if ( v28 > a1[39] )
      *v26 = sub_14005ABE0((__int64)(a1 + 37), *v26, v28, 1u);
    *((_BYTE *)*v26 + a1[38]++) = v27;
    v5 |= 0x80uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 424LL))(a2, &v117) )
  {
    v29 = (void **)(a1 + 37);
    v30 = v117;
    v31 = a1[38] + 1LL;
    if ( v31 > a1[39] )
      *v29 = sub_14005ABE0((__int64)(a1 + 37), *v29, v31, 1u);
    *((_BYTE *)*v29 + a1[38]++) = v30;
    v5 |= 0x100uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 240LL))(a2, &v117) )
  {
    v32 = sub_14005B4D0(Src, (unsigned __int64)v128, v117) - Src;
    if ( v32 )
    {
      v33 = a1[38];
      v34 = v32 + v33;
      if ( v32 + v33 < v33 )
        v34 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v34);
      memcpy((void *)(v33 + a1[37]), Src, v32);
    }
    v5 |= 0x400uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 344LL))(a2, &v117) )
  {
    v35 = sub_14005B4D0(v129, (unsigned __int64)v130, v117) - v129;
    if ( v35 )
    {
      v36 = a1[38];
      v37 = v35 + v36;
      if ( v35 + v36 < v36 )
        v37 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v37);
      memcpy((void *)(v36 + a1[37]), v129, v35);
    }
    v5 |= 0x800uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 400LL))(a2, &v117) )
  {
    v38 = sub_14005B4D0(v131, (unsigned __int64)v132, v117) - v131;
    if ( v38 )
    {
      v39 = a1[38];
      v40 = v38 + v39;
      if ( v38 + v39 < v39 )
        v40 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v40);
      memcpy((void *)(v39 + a1[37]), v131, v38);
    }
    v5 |= 0x1000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 328LL))(a2, &v117) )
  {
    v41 = sub_14005B4D0(v133, (unsigned __int64)v134, v117) - v133;
    if ( v41 )
    {
      v42 = a1[38];
      v43 = v41 + v42;
      if ( v41 + v42 < v42 )
        v43 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v43);
      memcpy((void *)(v42 + a1[37]), v133, v41);
    }
    v5 |= 0x2000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 392LL))(a2, &v117) )
  {
    v44 = sub_14005B4D0(v135, (unsigned __int64)v136, v117) - v135;
    if ( v44 )
    {
      v45 = a1[38];
      v46 = v44 + v45;
      if ( v44 + v45 < v45 )
        v46 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v46);
      memcpy((void *)(v45 + a1[37]), v135, v44);
    }
    v5 |= 0x4000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 72LL))(a2, &v117) )
  {
    v47 = sub_14005B4D0(v137, (unsigned __int64)v138, v117) - v137;
    if ( v47 )
    {
      v48 = a1[38];
      v49 = v47 + v48;
      if ( v47 + v48 < v48 )
        v49 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v49);
      memcpy((void *)(v48 + a1[37]), v137, v47);
    }
    v5 |= 0x8000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 80LL))(a2, &v117) )
  {
    v50 = sub_14005B4D0(v139, (unsigned __int64)v140, v117) - v139;
    if ( v50 )
    {
      v51 = a1[38];
      v52 = v50 + v51;
      if ( v50 + v51 < v51 )
        v52 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v52);
      memcpy((void *)(v51 + a1[37]), v139, v50);
    }
    v5 |= 0x10000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 120LL))(a2, &v117) )
  {
    v53 = sub_14005B4D0(v141, (unsigned __int64)v142, v117) - v141;
    if ( v53 )
    {
      v54 = a1[38];
      v55 = v53 + v54;
      if ( v53 + v54 < v54 )
        v55 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v55);
      memcpy((void *)(v54 + a1[37]), v141, v53);
    }
    v5 |= 0x20000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 104LL))(a2, &v117) )
  {
    v56 = sub_14005B4D0(v143, (unsigned __int64)v144, v117) - v143;
    if ( v56 )
    {
      v57 = a1[38];
      v58 = v56 + v57;
      if ( v56 + v57 < v57 )
        v58 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v58);
      memcpy((void *)(v57 + a1[37]), v143, v56);
    }
    v5 |= 0x40000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v117) )
  {
    v59 = sub_14005B4D0(v145, (unsigned __int64)v146, v117) - v145;
    if ( v59 )
    {
      v60 = a1[38];
      v61 = v59 + v60;
      if ( v59 + v60 < v60 )
        v61 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v61);
      memcpy((void *)(v60 + a1[37]), v145, v59);
    }
    v5 |= 0x80000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 32LL))(a2, &v117) )
  {
    v62 = sub_14005B4D0(v147, (unsigned __int64)v148, v117) - v147;
    if ( v62 )
    {
      v63 = a1[38];
      v64 = v63 + v62;
      if ( v63 + v62 < v63 )
        v64 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v64);
      memcpy((void *)(v63 + a1[37]), v147, v62);
    }
    v5 |= 0x100000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 800LL))(a2, &v117) )
  {
    v65 = sub_14005B4D0(v149, (unsigned __int64)v150, v117) - v149;
    if ( v65 )
    {
      v66 = a1[38];
      v67 = v65 + v66;
      if ( v65 + v66 < v66 )
        v67 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v67);
      memcpy((void *)(v66 + a1[37]), v149, v65);
    }
    v5 |= 0x200000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 296LL))(a2, &v117) )
  {
    v68 = sub_14005B4D0(v151, (unsigned __int64)v152, v117) - v151;
    if ( v68 )
    {
      v69 = a1[38];
      v70 = v68 + v69;
      if ( v68 + v69 < v69 )
        v70 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v70);
      memcpy((void *)(v69 + a1[37]), v151, v68);
    }
    v5 |= 0x400000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 56LL))(a2, &bstrString) )
  {
    if ( !(*(unsigned int (__fastcall **)(BSTR, unsigned int *))(*(_QWORD *)bstrString + 24LL))(bstrString, &v117) )
    {
      v71 = sub_14005B4D0(v153, (unsigned __int64)v154, v117) - v153;
      if ( v71 )
      {
        v72 = a1[38];
        v73 = v71 + v72;
        if ( v71 + v72 < v72 )
          v73 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)(a1 + 37), v73);
        memcpy((void *)(v72 + a1[37]), v153, v71);
      }
      v5 |= 0x1000000uLL;
    }
    (*(void (__fastcall **)(BSTR))(*(_QWORD *)bstrString + 16LL))(bstrString);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 64LL))(a2, &bstrString) )
  {
    if ( !(*(unsigned int (__fastcall **)(BSTR, unsigned int *))(*(_QWORD *)bstrString + 24LL))(bstrString, &v117) )
    {
      v74 = sub_14005B4D0(v155, (unsigned __int64)v156, v117) - v155;
      if ( v74 )
      {
        v75 = a1[38];
        v76 = v74 + v75;
        if ( v74 + v75 < v75 )
          v76 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)(a1 + 37), v76);
        memcpy((void *)(v75 + a1[37]), v155, v74);
      }
      v5 |= 0x2000000uLL;
    }
    (*(void (__fastcall **)(BSTR))(*(_QWORD *)bstrString + 16LL))(bstrString);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 48LL))(a2, &bstrString) )
  {
    if ( !(*(unsigned int (__fastcall **)(BSTR, unsigned int *))(*(_QWORD *)bstrString + 24LL))(bstrString, &v117) )
    {
      v77 = sub_14005B4D0(v157, (unsigned __int64)v158, v117) - v157;
      if ( v77 )
      {
        v78 = a1[38];
        v79 = v78 + v77;
        if ( v78 + v77 < v78 )
          v79 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)(a1 + 37), v79);
        memcpy((void *)(v78 + a1[37]), v157, v77);
      }
      v5 |= 0x4000000uLL;
    }
    (*(void (__fastcall **)(BSTR))(*(_QWORD *)bstrString + 16LL))(bstrString);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 136LL))(a2, &bstrString) )
  {
    v80 = sub_14005B5A0(v163, (unsigned __int64)v164, (__int64)bstrString) - v163;
    if ( v80 )
    {
      v81 = a1[38];
      v82 = v80 + v81;
      if ( v80 + v81 < v81 )
        v82 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v82);
      memcpy((void *)(v81 + a1[37]), v163, v80);
    }
    v5 |= 0x8000000uLL;
  }
  Block = nullptr;
  v119 = 0;
  v120 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 40LL))(a2, &bstrString) )
  {
    v83 = Block;
  }
  else
  {
    sub_140061D80((__int64)&Block, bstrString, -1);
    SysFreeString(bstrString);
    v83 = Block;
    if ( v119 )
    {
      v84 = pNodeName;
      if ( Block )
        v84 = (const char *)Block;
    }
    else
    {
      v84 = Str1;
    }
    v85 = strlen(v84);
    v86 = v85 + 1;
    if ( v85 != -1 )
    {
      v87 = a1[38];
      v88 = v86 + v87;
      if ( v86 + v87 < v87 )
        v88 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v88);
      memcpy((void *)(v87 + a1[37]), v84, v86);
      v83 = Block;
    }
    v5 |= 0x10000000uLL;
  }
  if ( v83 )
  {
    v119 = 0;
    j_free(v83);
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 128LL))(a2, &v117) )
  {
    v89 = sub_14005B4D0(v159, (unsigned __int64)v160, v117) - v159;
    if ( v89 )
    {
      v90 = a1[38];
      v91 = v90 + v89;
      if ( v90 + v89 < v90 )
        v91 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v91);
      memcpy((void *)(v90 + a1[37]), v159, v89);
    }
    v5 |= 0x20000000uLL;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *))(*(_QWORD *)a2 + 112LL))(a2, &bstrString) )
  {
    v92 = sub_14005B5A0(v165, (unsigned __int64)v166, (int)bstrString) - v165;
    if ( v92 )
    {
      v93 = a1[38];
      v94 = v93 + v92;
      if ( v93 + v92 < v93 )
        v94 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)(a1 + 37), v94);
      memcpy((void *)(v93 + a1[37]), v165, v92);
    }
    v5 |= 0x40000000uLL;
  }
  VariantInit(&pvarg);
  if ( !(*(unsigned int (__fastcall **)(__int64, VARIANTARG *))(*(_QWORD *)a2 + 336LL))(a2, &pvarg) )
  {
    Block = nullptr;
    v119 = 0;
    v120 = 0;
    v95 = sub_14005B5E0(v122, (unsigned __int64)&v123, pvarg.vt) - v122;
    if ( v95 )
    {
      v96 = v119;
      v97 = v119;
      v98 = v95 + v119;
      if ( v95 + v119 < v119 )
        v98 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v98 <= v119 )
      {
        if ( v98 != v119 )
        {
          if ( v98 < v119 )
            v96 = v98;
          v119 = v96;
        }
      }
      else
      {
        if ( v98 <= v120 )
        {
          v99 = (char *)Block;
        }
        else
        {
          v99 = (char *)sub_14005ABE0((__int64)&Block, Block, v98, 1u);
          Block = v99;
          v96 = v119;
        }
        memset(&v99[v96], 0, v98 - v96);
        v119 = v98;
      }
      memcpy((char *)Block + v97, v122, v95);
    }
    if ( (pvarg.vt & 0x6000) == 0 )
    {
      v100 = v119;
      switch ( pvarg.vt )
      {
        case 2u:
        case 0x12u:
          sub_140006840(&Block, pvarg.uiVal);
          break;
        case 3u:
        case 4u:
        case 0x13u:
        case 0x16u:
        case 0x17u:
        case 0x19u:
          sub_140002D20(&Block, pvarg.cyVal.Lo);
          break;
        case 5u:
        case 0x14u:
        case 0x15u:
          sub_140002DC0(&Block, pvarg.llVal);
          break;
        case 8u:
          bstrString = pvarg.bstrVal;
          v101 = *(unsigned int *)(pvarg.llVal - 4);
          v102 = sub_14005B4D0(v161, (unsigned __int64)v162, *(_DWORD *)(pvarg.llVal - 4)) - v161;
          if ( v102 )
          {
            v103 = v119;
            v104 = v119;
            v105 = v102 + v119;
            if ( v102 + v119 < v119 )
              v105 = 0x7FFFFFFFFFFFFFFFLL;
            if ( v105 <= v119 )
            {
              if ( v105 != v119 )
              {
                if ( v105 < v119 )
                  v103 = v105;
                v119 = v103;
              }
            }
            else
            {
              if ( v105 <= v120 )
              {
                v106 = (char *)Block;
              }
              else
              {
                v106 = (char *)sub_14005ABE0((__int64)&Block, Block, v105, 1u);
                Block = v106;
                v103 = v119;
              }
              memset(&v106[v103], 0, v105 - v103);
              v119 = v105;
            }
            memcpy((char *)Block + v104, v161, v102);
          }
          if ( v101 )
          {
            v107 = v119;
            v108 = v119;
            v109 = v101 + v119;
            if ( v101 + v119 < v119 )
              v109 = 0x7FFFFFFFFFFFFFFFLL;
            if ( v109 <= v119 )
            {
              if ( v109 != v119 )
              {
                if ( v109 < v119 )
                  v107 = v109;
                v119 = v107;
              }
            }
            else
            {
              if ( v109 <= v120 )
              {
                v110 = (char *)Block;
              }
              else
              {
                v110 = (char *)sub_14005ABE0((__int64)&Block, Block, v109, 1u);
                Block = v110;
                v107 = v119;
              }
              memset(&v110[v107], 0, v109 - v107);
              v119 = v109;
            }
            memcpy((char *)Block + v108, bstrString, v101);
          }
          break;
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0x10u:
        case 0x11u:
          bVal = pvarg.bVal;
          if ( v119 + 1 > v120 )
            Block = sub_14005ABE0((__int64)&Block, Block, v119 + 1, 1u);
          *((_BYTE *)Block + v119++) = bVal;
          break;
        default:
          break;
      }
      if ( v119 > v100 )
      {
        sub_1400017A0(a1 + 37, Block, v119);
        v5 |= 0x80000000uLL;
      }
    }
    if ( Block )
    {
      v119 = 0;
      j_free(Block);
    }
  }
  v112 = a1[38];
  sub_140002DC0(a1 + 33, v5);
  sub_140002D20(a1 + 33, v112);
  v113 = a1 + 33;
  v114 = (const void *)a1[37];
  if ( v112 )
  {
    v115 = v113[1];
    v116 = v112 + v115;
    if ( v112 + v115 < v115 )
      v116 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)v113, v116);
    memcpy((void *)(v115 + *v113), v114, v112);
  }
  return 0;
}
