void __fastcall sub_8EFC90(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rsi
  __int64 v28; // rdi
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  char *v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rax
  _QWORD *v35; // r13
  void *v36; // rdi
  _QWORD *v37; // rbx
  __int64 v38; // rax
  _QWORD *v39; // r12
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rax
  void (__fastcall ***v45)(void *); // rbx
  void (__fastcall ***v46)(void *); // rbx
  void *v47; // rdi
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  void (__fastcall ***v52)(_QWORD); // rbx
  void *v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 *v59; // rbx
  __int64 v60; // rax
  __int64 *v61; // r12
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rbx
  __int64 v65; // rax
  _QWORD *v66; // r12
  void *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rbx
  __int64 v86; // rax
  _QWORD *v87; // r12
  void *v88; // rdi
  __int64 v89; // rax
  _QWORD *v90; // rbx
  _QWORD *v91; // r14
  void *v92; // r12
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 *v97; // rbx
  __int64 *v98; // r12
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  void *v104; // rdi
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdi
  void (__fastcall ***v113)(_QWORD); // rbx
  void (__fastcall *v114)(__int64, __int64, __int64); // rax
  _QWORD *v115; // r14
  __int64 v116; // rax
  _QWORD *v117; // r12
  __int64 v118; // rdi
  __int64 *v119; // rbx
  __int64 *v120; // r15
  __int64 v121; // rdi
  void (__fastcall ***v122)(_QWORD); // rbx
  void *v123; // rbx
  void *v124; // rbx
  int v125; // edx
  int v126; // ecx
  int v127; // r8d
  int v128; // r9d
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  _Unwind_Exception *v132; // [rsp+0h] [rbp-48h]
  int v133; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &off_1C55B90;
  sub_8EFA80(a1);
  v133 = a1 + 216;
  sub_C0F150(a1 + 216);
  v2 = *(void **)(a1 + 10520);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(void **)(a1 + 10496);
  if ( v3 )
    sub_186B220(v3);
  v4 = *(void **)(a1 + 10472);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(char **)(a1 + 10448);
  if ( v5 )
  {
    v6 = *(unsigned int *)(a1 + 10456);
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(a1 + 10448);
      v8 = &v5[40 * v6];
      do
      {
        while ( 1 )
        {
          v9 = *(void **)(v7 + 16);
          if ( !v9 )
            break;
          sub_186B220(v9);
          v7 += 40;
          if ( (char *)v7 == v8 )
            goto LABEL_12;
        }
        v7 += 40;
      }
      while ( (char *)v7 != v8 );
    }
LABEL_12:
    sub_186B220(v5);
  }
  v10 = *(void **)(a1 + 10432);
  *(_QWORD *)(a1 + 10384) = &off_1C62200;
  if ( v10 )
    sub_186B220(v10);
  v11 = *(void **)(a1 + 10408);
  if ( v11 )
    sub_186B220(v11);
  v12 = *(_QWORD *)(a1 + 10376);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 10312);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  sub_2B2E00((_QWORD *)(a1 + 9600));
  v14 = *(void **)(a1 + 9528);
  if ( v14 )
    sub_186B220(v14);
  v15 = *(_QWORD *)(a1 + 9520);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 9512);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 9504);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 9488);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 9480);
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 9456);
  if ( v20 )
    sub_186B220((void *)(v20 - 8));
  v21 = *(__int64 **)(a1 + 9440);
  if ( v21 )
  {
    v22 = *((unsigned int *)v21 - 1);
    if ( (_DWORD)v22 )
    {
      v23 = &v21[4 * v22];
      do
      {
        v27 = v21[2];
        if ( v27 )
        {
          v28 = v21[3];
          v26 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v28, v27);
        }
        v24 = *v21;
        if ( *v21 )
        {
          v25 = v21[1];
          v26 = (*(_DWORD *)(v24 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v25, v24);
        }
        v21 += 4;
      }
      while ( v21 != v23 );
      v21 = *(__int64 **)(a1 + 9440);
    }
    sub_186B220(v21 - 1);
  }
  v29 = *(char **)(a1 + 9416);
  if ( v29 )
  {
    v30 = *(unsigned int *)(a1 + 9424);
    if ( (_DWORD)v30 )
    {
      v31 = *(_QWORD *)(a1 + 9416);
      v32 = &v29[24 * v30];
      do
      {
        v33 = *(_QWORD **)(v31 + 16);
        if ( v33 )
        {
          v34 = *((unsigned int *)v33 - 1);
          if ( (_DWORD)v34 )
          {
            v35 = &v33[v34];
            do
            {
              while ( *v33 )
              {
                v36 = (void *)(*v33++ - 8LL);
                sub_186B220(v36);
                if ( v33 == v35 )
                  goto LABEL_55;
              }
              ++v33;
            }
            while ( v33 != v35 );
LABEL_55:
            v33 = *(_QWORD **)(v31 + 16);
          }
          sub_186B220(v33 - 1);
        }
        v31 += 24;
      }
      while ( (char *)v31 != v32 );
    }
    sub_186B220(v29);
  }
  v37 = *(_QWORD **)(a1 + 9408);
  if ( v37 )
  {
    v38 = *((unsigned int *)v37 - 1);
    if ( (_DWORD)v38 )
    {
      v39 = &v37[v38];
      do
      {
        while ( *v37 )
        {
          v40 = (void *)(*v37++ - 8LL);
          sub_186B220(v40);
          if ( v39 == v37 )
          {
            v37 = *(_QWORD **)(a1 + 9408);
            goto LABEL_65;
          }
        }
        ++v37;
      }
      while ( v37 != v39 );
      v37 = *(_QWORD **)(a1 + 9408);
    }
LABEL_65:
    sub_186B220(v37 - 1);
  }
  v41 = *(_QWORD *)(a1 + 9400);
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  v42 = *(_QWORD *)(a1 + 9392);
  if ( v42 )
    sub_186B220((void *)(v42 - 8));
  sub_2334C0((__int64 *)(a1 + 9368));
  v43 = *(void **)(a1 + 9344);
  if ( v43 )
    sub_186B220(v43);
  v44 = *(_QWORD *)(a1 + 9336);
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = *(void (__fastcall ****)(void *))(a1 + 9320);
  if ( v45 )
  {
    v26 = (*((_DWORD *)v45 + 4))-- == 1;
    if ( v26 )
    {
      (**v45)(v45);
      sub_186B220(v45);
    }
  }
  v46 = *(void (__fastcall ****)(void *))(a1 + 9312);
  if ( v46 )
  {
    v26 = (*((_DWORD *)v46 + 4))-- == 1;
    if ( v26 )
    {
      (**v46)(v46);
      sub_186B220(v46);
    }
  }
  sub_958B60(a1 + 9080);
  v47 = *(void **)(a1 + 9056);
  if ( v47 )
    sub_186B220(v47);
  v48 = *(void **)(a1 + 9032);
  if ( v48 )
    sub_186B220(v48);
  v49 = *(_QWORD *)(a1 + 9024);
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = *(_QWORD *)(a1 + 9008);
  if ( v50 )
  {
    v51 = *(_QWORD *)(a1 + 9016);
    v26 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v51, v50);
  }
  v52 = *(void (__fastcall ****)(_QWORD))(a1 + 9000);
  if ( v52 )
  {
    (**v52)(*(_QWORD *)(a1 + 9000));
    sub_186B220(v52);
  }
  v53 = *(void **)(a1 + 8952);
  if ( v53 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 120LL))(*(_QWORD *)(a1 + 8952));
    sub_186B220(v53);
  }
  v54 = *(_QWORD *)(a1 + 8928);
  if ( v54 )
  {
    v55 = *(unsigned int *)(v54 - 4);
    if ( (_DWORD)v55 )
    {
      v56 = v54 + 16 * v55;
      do
      {
        while ( 1 )
        {
          v57 = *(_QWORD *)(v54 + 8);
          if ( !v57 )
            break;
          v54 += 16;
          sub_186B220((void *)(v57 - 8));
          if ( v56 == v54 )
          {
            v54 = *(_QWORD *)(a1 + 8928);
            goto LABEL_99;
          }
        }
        v54 += 16;
      }
      while ( v54 != v56 );
      v54 = *(_QWORD *)(a1 + 8928);
    }
LABEL_99:
    sub_186B220((void *)(v54 - 8));
  }
  v58 = *(_QWORD *)(a1 + 8920);
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = *(__int64 **)(a1 + 8912);
  if ( v59 )
  {
    v60 = *((unsigned int *)v59 - 1);
    if ( (_DWORD)v60 )
    {
      v61 = &v59[3 * v60];
      do
      {
        while ( 1 )
        {
          v62 = *v59;
          if ( *v59 )
          {
            v63 = v59[1];
            v26 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v26 )
              break;
          }
          v59 += 3;
          if ( v59 == v61 )
            goto LABEL_109;
        }
        sub_15D7BC0(v63, v62);
        v59 += 3;
      }
      while ( v59 != v61 );
LABEL_109:
      v59 = *(__int64 **)(a1 + 8912);
    }
    sub_186B220(v59 - 1);
  }
  v64 = *(_QWORD **)(a1 + 8904);
  if ( v64 )
  {
    v65 = *((unsigned int *)v64 - 1);
    if ( (_DWORD)v65 )
    {
      v66 = &v64[v65];
      do
      {
        while ( *v64 )
        {
          v67 = (void *)(*v64++ - 8LL);
          sub_186B220(v67);
          if ( v66 == v64 )
          {
            v64 = *(_QWORD **)(a1 + 8904);
            goto LABEL_117;
          }
        }
        ++v64;
      }
      while ( v64 != v66 );
      v64 = *(_QWORD **)(a1 + 8904);
    }
LABEL_117:
    sub_186B220(v64 - 1);
  }
  v68 = *(_QWORD *)(a1 + 8896);
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  v69 = *(_QWORD *)(a1 + 8888);
  if ( v69 )
    sub_186B220((void *)(v69 - 8));
  v70 = *(_QWORD *)(a1 + 8880);
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  v71 = *(_QWORD *)(a1 + 8872);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  v72 = *(_QWORD *)(a1 + 8864);
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  v73 = *(_QWORD *)(a1 + 8856);
  if ( v73 )
  {
    v74 = *(unsigned int *)(v73 - 4);
    if ( (_DWORD)v74 )
    {
      v75 = v73 + 8 * v74;
      do
      {
        v76 = v73;
        v73 += 8;
        sub_9676C0(v76);
      }
      while ( v73 != v75 );
      v73 = *(_QWORD *)(a1 + 8856);
    }
    sub_186B220((void *)(v73 - 8));
  }
  v77 = *(_QWORD *)(a1 + 8848);
  if ( v77 )
    sub_186B220((void *)(v77 - 8));
  v78 = *(_QWORD *)(a1 + 8840);
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  v79 = *(_QWORD *)(a1 + 8832);
  if ( v79 )
    sub_186B220((void *)(v79 - 8));
  v80 = *(_QWORD *)(a1 + 8824);
  if ( v80 )
    sub_186B220((void *)(v80 - 8));
  sub_B398F0(a1 + 8792);
  v81 = *(_QWORD *)(a1 + 8776);
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  v82 = *(_QWORD *)(a1 + 8768);
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  v83 = *(_QWORD *)(a1 + 8760);
  if ( v83 )
    sub_186B220((void *)(v83 - 8));
  sub_979A10(a1 + 8712);
  v84 = *(_QWORD *)(a1 + 8704);
  if ( v84 )
    sub_186B220((void *)(v84 - 8));
  v85 = *(_QWORD **)(a1 + 8696);
  if ( v85 )
  {
    v86 = *((unsigned int *)v85 - 1);
    if ( (_DWORD)v86 )
    {
      v87 = &v85[v86];
      do
      {
        while ( *v85 )
        {
          v88 = (void *)(*v85++ - 8LL);
          sub_186B220(v88);
          if ( v87 == v85 )
          {
            v85 = *(_QWORD **)(a1 + 8696);
            goto LABEL_156;
          }
        }
        ++v85;
      }
      while ( v85 != v87 );
      v85 = *(_QWORD **)(a1 + 8696);
    }
LABEL_156:
    sub_186B220(v85 - 1);
  }
  v89 = *(_QWORD *)(a1 + 8688);
  if ( v89 )
    sub_186B220((void *)(v89 - 8));
  v90 = *(_QWORD **)(a1 + 8680);
  if ( v90 )
  {
    v91 = &v90[*((unsigned int *)v90 - 1)];
    if ( v90 == v91 )
    {
      v131 = *(_QWORD *)(a1 + 8672);
      if ( v131 )
        *(_DWORD *)(v131 - 4) = 0;
    }
    else
    {
      do
      {
        v92 = (void *)*v90;
        if ( *v90 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v92 + 232LL))(*v90);
          sub_186B220(v92);
        }
        ++v90;
      }
      while ( v91 != v90 );
      v93 = *(_QWORD *)(a1 + 8672);
      v90 = *(_QWORD **)(a1 + 8680);
      if ( v93 )
        *(_DWORD *)(v93 - 4) = 0;
      if ( !v90 )
        goto LABEL_168;
    }
    *((_DWORD *)v90 - 1) = 0;
    sub_186B220(v90 - 1);
    v93 = *(_QWORD *)(a1 + 8672);
LABEL_168:
    if ( v93 )
      sub_186B220((void *)(v93 - 8));
    goto LABEL_170;
  }
  v93 = *(_QWORD *)(a1 + 8672);
  if ( v93 )
  {
    *(_DWORD *)(v93 - 4) = 0;
    goto LABEL_168;
  }
LABEL_170:
  v94 = *(_QWORD *)(a1 + 8664);
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  v95 = *(_QWORD *)(a1 + 8656);
  if ( v95 )
    sub_186B220((void *)(v95 - 8));
  v96 = *(_QWORD *)(a1 + 8600);
  if ( v96 )
    sub_186B220((void *)(v96 - 8));
  v97 = *(__int64 **)(a1 + 8592);
  if ( v97 )
  {
    v98 = &v97[*((unsigned int *)v97 - 1)];
    if ( v97 >= v98 )
      goto LABEL_184;
    do
    {
      while ( 1 )
      {
        v99 = *v97;
        if ( *v97 )
        {
          v100 = *(_QWORD *)(a1 + 8584);
          v26 = (*(_DWORD *)(v99 + 8))-- == 1;
          if ( v26 )
            break;
        }
        if ( ++v97 >= v98 )
          goto LABEL_183;
      }
      sub_15D7BC0(v100, v99);
      ++v97;
    }
    while ( v97 < v98 );
LABEL_183:
    v97 = *(__int64 **)(a1 + 8592);
    if ( v97 )
LABEL_184:
      sub_186B220(v97 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 8568));
  sub_2334C0((__int64 *)(a1 + 8552));
  v101 = *(_QWORD *)(a1 + 8504);
  if ( v101 )
    sub_186B220((void *)(v101 - 8));
  v102 = *(_QWORD *)(a1 + 8496);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  sub_2334C0((__int64 *)(a1 + 8480));
  v103 = *(_QWORD *)(a1 + 8472);
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  v104 = *(void **)(a1 + 8448);
  if ( v104 )
    sub_186B220(v104);
  sub_180C0E0(a1 + 8400);
  v105 = *(_QWORD *)(a1 + 8384);
  if ( v105 )
  {
    v106 = *(_QWORD *)(a1 + 8392);
    v26 = (*(_DWORD *)(v105 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v106, v105);
  }
  v107 = *(_QWORD *)(a1 + 8368);
  if ( v107 )
  {
    v108 = *(_QWORD *)(a1 + 8376);
    v26 = (*(_DWORD *)(v107 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v108, v107);
  }
  v109 = *(_QWORD *)(a1 + 8352);
  if ( v109 )
  {
    v110 = *(_QWORD *)(a1 + 8360);
    v26 = (*(_DWORD *)(v109 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v110, v109);
  }
  v111 = *(_QWORD *)(a1 + 8336);
  if ( v111 )
  {
    v112 = *(_QWORD *)(a1 + 8344);
    v26 = (*(_DWORD *)(v111 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v112, v111);
  }
  v113 = *(void (__fastcall ****)(_QWORD))(a1 + 8328);
  if ( v113 )
  {
    (**v113)(*(_QWORD *)(a1 + 8328));
    sub_186B220(v113);
  }
  sub_2B2E00((_QWORD *)(a1 + 7624));
  v114 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 7600);
  if ( v114 )
  {
    LODWORD(v111) = a1 + 7584;
    v114(a1 + 7584, a1 + 7584, 3);
  }
  v115 = *(_QWORD **)(a1 + 7568);
  if ( v115 )
  {
    v116 = *((unsigned int *)v115 - 1);
    if ( (_DWORD)v116 )
    {
      v117 = &v115[5 * v116];
      do
      {
        v111 = v115[3];
        if ( v111 )
        {
          v118 = v115[4];
          v26 = (*(_DWORD *)(v111 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v118, v111);
        }
        v119 = (__int64 *)v115[2];
        if ( v119 )
        {
          v120 = &v119[*((unsigned int *)v119 - 1)];
          if ( v119 >= v120 )
            goto LABEL_223;
          do
          {
            while ( 1 )
            {
              v111 = *v119;
              if ( *v119 )
              {
                v121 = v115[1];
                v26 = (*(_DWORD *)(v111 + 8))-- == 1;
                if ( v26 )
                  break;
              }
              if ( ++v119 >= v120 )
                goto LABEL_222;
            }
            sub_15D7BC0(v121, v111);
            ++v119;
          }
          while ( v119 < v120 );
LABEL_222:
          v119 = (__int64 *)v115[2];
          if ( v119 )
LABEL_223:
            sub_186B220(v119 - 1);
        }
        v115 += 5;
      }
      while ( v115 != v117 );
      v115 = *(_QWORD **)(a1 + 7568);
    }
    sub_186B220(v115 - 1);
  }
  sub_2334C0((__int64 *)(a1 + 7552));
  v122 = *(void (__fastcall ****)(_QWORD))(a1 + 7488);
  if ( v122 )
  {
    (**v122)(*(_QWORD *)(a1 + 7488));
    sub_186B220(v122);
  }
  v123 = *(void **)(a1 + 7480);
  if ( v123 )
  {
    sub_A6E7F0(*(_QWORD *)(a1 + 7480));
    sub_186B220(v123);
  }
  v124 = *(void **)(a1 + 7472);
  if ( v124 )
  {
    sub_952AE0(*(_QWORD *)(a1 + 7472));
    sub_186B220(v124);
  }
  sub_14B63F0(a1 + 7456);
  sub_901F40(v133, v111, v125, v126, v127, v128, v132);
  v129 = *(_QWORD *)(a1 + 136);
  if ( v129 )
    sub_186B220((void *)(v129 - 8));
  v130 = *(_QWORD *)(a1 + 128);
  if ( v130 )
    sub_186B220((void *)(v130 - 8));
  sub_18572D0((void *)(a1 + 120));
}

