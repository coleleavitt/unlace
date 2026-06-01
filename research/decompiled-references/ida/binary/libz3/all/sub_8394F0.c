__int64 __fastcall sub_8394F0(__m128i *a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  void *v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  char *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  char *v17; // r12
  void *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r13
  void *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // r13
  void *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // r13
  void *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r13
  void *v38; // r14
  __int64 v39; // rsi
  void *v40; // rdi
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r13
  void *v44; // r14
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rax
  void *v48; // r12
  __int64 v49; // rax
  char *v50; // r15
  char *v51; // r12
  void *v52; // r14
  char *v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r13
  void *v62; // r14
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  void *v66; // rdi
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // r13
  void *v70; // r14
  __int64 v71; // rsi
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // r13
  void *v75; // r14
  __int64 v76; // rsi
  char *v77; // r13
  __int64 v78; // rax
  __int64 v79; // r14
  char *v80; // r12
  void *v81; // r15
  __int64 v82; // rsi
  char *v83; // r13
  __int64 v84; // rax
  __int64 v85; // r14
  char *v86; // r12
  void *v87; // r15
  __int64 v88; // rsi
  char *v89; // r13
  __int64 v90; // rax
  __int64 v91; // r14
  char *v92; // r12
  void *v93; // r15
  __int64 v94; // rsi
  void *v95; // rdi
  void *v96; // rdi
  __int64 v97; // rax
  _QWORD *v98; // r13
  _QWORD *v99; // r12
  void (__fastcall *v100)(_QWORD *, _QWORD *, __int64); // rax
  void *v101; // r14
  _QWORD *v102; // rsi
  __int64 v103; // rax
  void (__fastcall ***v104)(__int64); // rbx
  void *v105; // rbx
  void *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rbx
  __int64 v114; // rax
  _QWORD *v115; // r12
  void *v116; // rdi
  void *v117; // rdi
  _QWORD *v118; // rbx
  __int64 v119; // rax
  _QWORD *v120; // r12
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // rax
  __int64 v133; // r13
  void *v134; // r14
  __int64 v135; // rsi
  __int64 v136; // r12
  __int64 v137; // rax
  __int64 v138; // r13
  void *v139; // r14
  __int64 v140; // rsi
  __int64 **v141; // r13
  __int64 *v142; // r12
  __int64 v143; // rdi
  __int64 v144; // rdi
  __int64 v145; // rdi
  unsigned int *v146; // r15
  __int64 v147; // rdx
  void *v148; // r14
  char *v149; // rsi
  __int64 *v150; // rbx
  __int64 *v151; // r14
  __int64 v152; // rsi
  __int64 v153; // rdi
  void *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 result; // rax
  char *ptr; // [rsp+0h] [rbp-68h]
  unsigned int *ptra; // [rsp+0h] [rbp-68h]
  __int64 v161; // [rsp+8h] [rbp-60h]
  __int64 **v162; // [rsp+8h] [rbp-60h]
  __m128i v163; // [rsp+10h] [rbp-58h] BYREF
  __m128i v164[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)off_1C552B0);
  v163 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  a1->m128i_i64[0] = (__int64)&off_1C6D358;
  v164[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  a1[3].m128i_i64[0] = (__int64)off_1C6D648;
  a1[2] = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_1C6D620);
  sub_839200((__int64)a1, 0);
  v3 = a1[60].m128i_i64[1];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[60].m128i_i64[0];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 40 * v5;
      do
      {
        v7 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4);
        v8 = v4 + 16;
        v4 += 40;
        sub_182CBA0(v7, v8);
      }
      while ( v4 != v6 );
      v4 = a1[60].m128i_i64[0];
    }
    sub_186B220((void *)(v4 - 8));
  }
  sub_828D60(a1[58].m128i_i64[1], a1[59].m128i_i64[0]);
  v9 = (__int64 *)a1[58].m128i_i64[0];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_17;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[57].m128i_i64[1];
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_16;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_16:
    v9 = (__int64 *)a1[58].m128i_i64[0];
    if ( v9 )
LABEL_17:
      sub_186B220(v9 - 1);
  }
  v14 = (char *)a1[55].m128i_i64[1];
  if ( v14 )
  {
    v15 = a1[56].m128i_u32[0];
    if ( (_DWORD)v15 )
    {
      v16 = a1[55].m128i_i64[1];
      v17 = &v14[48 * v15];
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16 + 8);
        v19 = v16 + 24;
        v16 += 48;
        sub_182CBA0(v18, v19);
      }
      while ( (char *)v16 != v17 );
    }
    sub_186B220(v14);
  }
  v20 = a1[55].m128i_i64[0];
  if ( v20 )
  {
    v21 = *(unsigned int *)(v20 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = v20 + 32 * v21;
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        v24 = v20 + 16;
        v20 += 32;
        sub_182CBA0(v23, v24);
      }
      while ( v20 != v22 );
      v20 = a1[55].m128i_i64[0];
    }
    sub_186B220((void *)(v20 - 8));
  }
  v25 = a1[54].m128i_i64[1];
  if ( v25 )
  {
    v26 = *(unsigned int *)(v25 - 4);
    if ( (_DWORD)v26 )
    {
      v27 = v25 + 40 * v26;
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25 + 8);
        v29 = v25 + 24;
        v25 += 40;
        sub_182CBA0(v28, v29);
      }
      while ( v25 != v27 );
      v25 = a1[54].m128i_i64[1];
    }
    sub_186B220((void *)(v25 - 8));
  }
  v30 = a1[54].m128i_i64[0];
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    if ( (_DWORD)v31 )
    {
      v32 = v30 + 40 * v31;
      do
      {
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v30 + 8);
        v34 = v30 + 24;
        v30 += 40;
        sub_182CBA0(v33, v34);
      }
      while ( v30 != v32 );
      v30 = a1[54].m128i_i64[0];
    }
    sub_186B220((void *)(v30 - 8));
  }
  v35 = a1[53].m128i_i64[1];
  if ( v35 )
  {
    v36 = *(unsigned int *)(v35 - 4);
    if ( (_DWORD)v36 )
    {
      v37 = v35 + 40 * v36;
      do
      {
        v38 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v35 + 8);
        v39 = v35 + 24;
        v35 += 40;
        sub_182CBA0(v38, v39);
      }
      while ( v35 != v37 );
      v35 = a1[53].m128i_i64[1];
    }
    sub_186B220((void *)(v35 - 8));
  }
  v40 = (void *)a1[50].m128i_i64[1];
  if ( v40 )
    sub_186B220(v40);
  v41 = a1[50].m128i_i64[0];
  if ( v41 )
  {
    v42 = *(unsigned int *)(v41 - 4);
    if ( (_DWORD)v42 )
    {
      v43 = v41 + 40 * v42;
      do
      {
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v41 + 8);
        v45 = v41 + 24;
        v41 += 40;
        sub_182CBA0(v44, v45);
      }
      while ( v43 != v41 );
      v41 = a1[50].m128i_i64[0];
    }
    sub_186B220((void *)(v41 - 8));
  }
  v46 = a1[49].m128i_i64[1];
  if ( v46 )
  {
    v47 = *(unsigned int *)(v46 - 4);
    if ( (_DWORD)v47 )
    {
      v161 = v46 + 72 * v47;
      do
      {
        v48 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v46 + 40);
        sub_182CBA0(v48, v46 + 56);
        ptr = *(char **)(v46 + 8);
        if ( ptr )
        {
          v49 = *(unsigned int *)(v46 + 16);
          if ( (_DWORD)v49 )
          {
            v50 = *(char **)(v46 + 8);
            v51 = &ptr[48 * v49];
            do
            {
              v52 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v50 + 16);
              v53 = v50 + 32;
              v50 += 48;
              sub_182CBA0(v52, v53);
            }
            while ( v51 != v50 );
          }
          sub_186B220(ptr);
        }
        v46 += 72;
      }
      while ( v161 != v46 );
      v46 = a1[49].m128i_i64[1];
    }
    sub_186B220((void *)(v46 - 8));
  }
  v54 = a1[49].m128i_i64[0];
  if ( v54 )
  {
    v55 = *(unsigned int *)(v54 - 4);
    if ( (_DWORD)v55 )
    {
      v56 = v54 + 16 * v55;
      do
      {
        v57 = v54;
        v54 += 16;
        sub_15D0DF0(v57);
      }
      while ( v56 != v54 );
      v54 = a1[49].m128i_i64[0];
    }
    sub_186B220((void *)(v54 - 8));
  }
  v58 = a1[48].m128i_i64[1];
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = a1[48].m128i_i64[0];
  if ( v59 )
  {
    v60 = *(unsigned int *)(v59 - 4);
    if ( (_DWORD)v60 )
    {
      v61 = v59 + 32 * v60;
      do
      {
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v59);
        v63 = v59 + 16;
        v59 += 32;
        sub_182CBA0(v62, v63);
      }
      while ( v61 != v59 );
      v59 = a1[48].m128i_i64[0];
    }
    sub_186B220((void *)(v59 - 8));
  }
  v64 = a1[47].m128i_i64[1];
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  v65 = a1[47].m128i_i64[0];
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = (void *)a1[45].m128i_i64[1];
  if ( v66 )
    sub_186B220(v66);
  v67 = a1[45].m128i_i64[0];
  if ( v67 )
  {
    v68 = *(unsigned int *)(v67 - 4);
    if ( (_DWORD)v68 )
    {
      v69 = v67 + 40 * v68;
      do
      {
        v70 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v67 + 8);
        v71 = v67 + 24;
        v67 += 40;
        sub_182CBA0(v70, v71);
      }
      while ( v69 != v67 );
      v67 = a1[45].m128i_i64[0];
    }
    sub_186B220((void *)(v67 - 8));
  }
  v72 = a1[44].m128i_i64[1];
  if ( v72 )
  {
    v73 = *(unsigned int *)(v72 - 4);
    if ( (_DWORD)v73 )
    {
      v74 = v72 + 40 * v73;
      do
      {
        v75 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v72 + 8);
        v76 = v72 + 24;
        v72 += 40;
        sub_182CBA0(v75, v76);
      }
      while ( v74 != v72 );
      v72 = a1[44].m128i_i64[1];
    }
    sub_186B220((void *)(v72 - 8));
  }
  v77 = (char *)a1[42].m128i_i64[1];
  if ( v77 )
  {
    v78 = a1[43].m128i_u32[0];
    if ( (_DWORD)v78 )
    {
      v79 = a1[42].m128i_i64[1];
      v80 = &v77[48 * v78];
      do
      {
        v81 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v79 + 8);
        v82 = v79 + 24;
        v79 += 48;
        sub_182CBA0(v81, v82);
      }
      while ( v80 != (char *)v79 );
    }
    sub_186B220(v77);
  }
  v83 = (char *)a1[41].m128i_i64[0];
  if ( v83 )
  {
    v84 = a1[41].m128i_u32[2];
    if ( (_DWORD)v84 )
    {
      v85 = a1[41].m128i_i64[0];
      v86 = &v83[48 * v84];
      do
      {
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v85 + 8);
        v88 = v85 + 24;
        v85 += 48;
        sub_182CBA0(v87, v88);
      }
      while ( (char *)v85 != v86 );
    }
    sub_186B220(v83);
  }
  v89 = (char *)a1[39].m128i_i64[1];
  if ( v89 )
  {
    v90 = a1[40].m128i_u32[0];
    if ( (_DWORD)v90 )
    {
      v91 = a1[39].m128i_i64[1];
      v92 = &v89[48 * v90];
      do
      {
        v93 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v91 + 8);
        v94 = v91 + 24;
        v91 += 48;
        sub_182CBA0(v93, v94);
      }
      while ( (char *)v91 != v92 );
    }
    sub_186B220(v89);
  }
  v95 = (void *)a1[37].m128i_i64[0];
  if ( v95 )
    sub_186B220(v95);
  v96 = (void *)a1[35].m128i_i64[1];
  if ( v96 )
    sub_186B220(v96);
  v97 = a1[35].m128i_i64[0];
  if ( v97 )
    sub_186B220((void *)(v97 - 8));
  v98 = (_QWORD *)a1[34].m128i_i64[0];
  v99 = (_QWORD *)a1[33].m128i_i64[1];
  if ( v98 != v99 )
  {
    do
    {
      v100 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v99[7];
      if ( v100 )
        v100(v99 + 5, v99 + 5, 3);
      v101 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v99);
      v102 = v99 + 2;
      v99 += 9;
      sub_182CBA0(v101, v102);
    }
    while ( v98 != v99 );
    v99 = (_QWORD *)a1[33].m128i_i64[1];
  }
  if ( v99 )
    sub_186B220(v99);
  v103 = a1[32].m128i_i64[1];
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  v104 = (void (__fastcall ***)(__int64))a1[31].m128i_i64[0];
  if ( v104 )
  {
    (**v104)(a1[31].m128i_i64[0]);
    sub_186B220(v104);
  }
  v105 = (void *)a1[30].m128i_i64[1];
  if ( v105 )
  {
    sub_FE7900(a1[30].m128i_i64[1]);
    sub_186B220(v105);
  }
  v106 = (void *)a1[29].m128i_i64[1];
  if ( v106 )
  {
    sub_1021E20(a1[29].m128i_i64[1]);
    sub_186B220(v106);
  }
  v107 = a1[29].m128i_i64[0];
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  v108 = a1[24].m128i_i64[0];
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v109 = a1[23].m128i_i64[1];
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  v110 = a1[22].m128i_i64[0];
  if ( v110 )
    sub_186B220((void *)(v110 - 8));
  v111 = a1[21].m128i_i64[0];
  if ( v111 )
    sub_186B220((void *)(v111 - 8));
  v112 = a1[20].m128i_i64[1];
  if ( v112 )
    sub_186B220((void *)(v112 - 8));
  v113 = (_QWORD *)a1[20].m128i_i64[0];
  if ( v113 )
  {
    v114 = *((unsigned int *)v113 - 1);
    if ( (_DWORD)v114 )
    {
      v115 = &v113[v114];
      do
      {
        while ( *v113 )
        {
          v116 = (void *)(*v113++ - 8LL);
          sub_186B220(v116);
          if ( v115 == v113 )
          {
            v113 = (_QWORD *)a1[20].m128i_i64[0];
            goto LABEL_152;
          }
        }
        ++v113;
      }
      while ( v113 != v115 );
      v113 = (_QWORD *)a1[20].m128i_i64[0];
    }
LABEL_152:
    sub_186B220(v113 - 1);
  }
  v117 = (void *)a1[18].m128i_i64[1];
  if ( v117 )
    sub_186B220(v117);
  v118 = (_QWORD *)a1[18].m128i_i64[0];
  if ( v118 )
  {
    v119 = *((unsigned int *)v118 - 1);
    if ( (_DWORD)v119 )
    {
      v120 = &v118[v119];
      do
      {
        while ( *v118 )
        {
          v121 = (void *)(*v118++ - 8LL);
          sub_186B220(v121);
          if ( v120 == v118 )
          {
            v118 = (_QWORD *)a1[18].m128i_i64[0];
            goto LABEL_161;
          }
        }
        ++v118;
      }
      while ( v118 != v120 );
      v118 = (_QWORD *)a1[18].m128i_i64[0];
    }
LABEL_161:
    sub_186B220(v118 - 1);
  }
  v122 = a1[17].m128i_i64[1];
  if ( v122 )
    sub_186B220((void *)(v122 - 8));
  v123 = a1[17].m128i_i64[0];
  if ( v123 )
    sub_186B220((void *)(v123 - 8));
  v124 = a1[16].m128i_i64[1];
  if ( v124 )
    sub_186B220((void *)(v124 - 8));
  v125 = a1[15].m128i_i64[1];
  if ( v125 )
    sub_186B220((void *)(v125 - 8));
  v126 = a1[15].m128i_i64[0];
  if ( v126 )
    sub_186B220((void *)(v126 - 8));
  v127 = a1[14].m128i_i64[1];
  if ( v127 )
    sub_186B220((void *)(v127 - 8));
  v128 = a1[14].m128i_i64[0];
  if ( v128 )
    sub_186B220((void *)(v128 - 8));
  v129 = a1[13].m128i_i64[1];
  if ( v129 )
    sub_186B220((void *)(v129 - 8));
  v130 = a1[13].m128i_i64[0];
  if ( v130 )
    sub_186B220((void *)(v130 - 8));
  v131 = a1[11].m128i_i64[1];
  if ( v131 )
  {
    v132 = *(unsigned int *)(v131 - 4);
    if ( (_DWORD)v132 )
    {
      v133 = v131 + 40 * v132;
      do
      {
        v134 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v131);
        v135 = v131 + 16;
        v131 += 40;
        sub_182CBA0(v134, v135);
      }
      while ( v131 != v133 );
      v131 = a1[11].m128i_i64[1];
    }
    sub_186B220((void *)(v131 - 8));
  }
  v136 = a1[11].m128i_i64[0];
  if ( v136 )
  {
    v137 = *(unsigned int *)(v136 - 4);
    if ( (_DWORD)v137 )
    {
      v138 = v136 + 32 * v137;
      do
      {
        v139 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v136);
        v140 = v136 + 16;
        v136 += 32;
        sub_182CBA0(v139, v140);
      }
      while ( v136 != v138 );
      v136 = a1[11].m128i_i64[0];
    }
    sub_186B220((void *)(v136 - 8));
  }
  v141 = (__int64 **)a1[10].m128i_i64[0];
  if ( v141 )
  {
    v162 = &v141[*((unsigned int *)v141 - 1)];
    if ( v141 == v162 )
      goto LABEL_219;
    do
    {
      v142 = *v141;
      if ( *v141 )
      {
        v143 = v142[5];
        if ( v143 )
          sub_186B220((void *)(v143 - 8));
        v144 = v142[4];
        if ( v144 )
          sub_186B220((void *)(v144 - 8));
        v145 = v142[3];
        if ( v145 )
          sub_186B220((void *)(v145 - 8));
        v146 = (unsigned int *)v142[2];
        if ( v146 )
        {
          v147 = *(v146 - 1);
          if ( (_DWORD)v147 )
          {
            ptra = &v146[8 * v147];
            do
            {
              v148 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v146);
              v149 = (char *)(v146 + 4);
              v146 += 8;
              sub_182CBA0(v148, v149);
            }
            while ( ptra != v146 );
            v146 = (unsigned int *)v142[2];
          }
          sub_186B220(v146 - 2);
        }
        v150 = (__int64 *)v142[1];
        if ( v150 )
        {
          v151 = &v150[*((unsigned int *)v150 - 1)];
          if ( v150 >= v151 )
            goto LABEL_215;
          do
          {
            while ( 1 )
            {
              v152 = *v150;
              if ( *v150 )
              {
                v153 = *v142;
                v13 = (*(_DWORD *)(v152 + 8))-- == 1;
                if ( v13 )
                  break;
              }
              if ( ++v150 >= v151 )
                goto LABEL_214;
            }
            sub_15D7BC0(v153, v152);
            ++v150;
          }
          while ( v150 < v151 );
LABEL_214:
          v150 = (__int64 *)v142[1];
          if ( v150 )
LABEL_215:
            sub_186B220(v150 - 1);
        }
        sub_186B220(v142);
      }
      ++v141;
    }
    while ( v162 != v141 );
    v162 = (__int64 **)a1[10].m128i_i64[0];
    if ( v162 )
    {
LABEL_219:
      *((_DWORD *)v162 - 1) = 0;
      sub_186B220(v162 - 1);
    }
  }
  v154 = (void *)a1[8].m128i_i64[0];
  if ( v154 )
    sub_186B220(v154);
  a1[2] = _mm_load_si128(v164);
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  v155 = a1[6].m128i_i64[0];
  if ( v155 )
    sub_186B220((void *)(v155 - 8));
  v156 = a1[5].m128i_i64[1];
  if ( v156 )
    sub_186B220((void *)(v156 - 8));
  a1[2] = _mm_load_si128(&v163);
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  v157 = a1[4].m128i_i64[0];
  if ( v157 )
    sub_186B220((void *)(v157 - 8));
  result = a1[3].m128i_i64[1];
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

