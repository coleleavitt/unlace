__int64 __fastcall sub_20E4130(__int64 a1, unsigned int *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // r10d
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r11
  unsigned int v12; // esi
  __int64 v13; // r12
  _QWORD *v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // r11d
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r12
  _QWORD *v20; // rbp
  unsigned int v21; // ebp
  __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // r12
  _QWORD *v25; // r11
  unsigned int v26; // r11d
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // r12
  _QWORD *v30; // rbp
  unsigned int v31; // ebp
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // r12
  _QWORD *v35; // r11
  unsigned int v36; // r11d
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // r12
  _QWORD *v40; // rbp
  unsigned int v41; // ebp
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r12
  _QWORD *v45; // r11
  unsigned int v46; // r11d
  __int64 v47; // r12
  __int64 v48; // r14
  __int64 v49; // r12
  _QWORD *v50; // rbp
  unsigned int v51; // ebp
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // r12
  _QWORD *v55; // r11
  unsigned int v56; // r11d
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // r12
  _QWORD *v60; // rbp
  unsigned int v61; // ebp
  __int64 v62; // r12
  __int64 v63; // r14
  __int64 v64; // r12
  _QWORD *v65; // r11
  unsigned int v66; // r11d
  __int64 v67; // r12
  __int64 v68; // r14
  __int64 v69; // r12
  _QWORD *v70; // rbp
  unsigned int v71; // ebp
  __int64 v72; // r12
  __int64 v73; // r14
  __int64 v74; // r12
  _QWORD *v75; // r11
  unsigned int v76; // r11d
  __int64 v77; // r12
  __int64 v78; // r14
  __int64 v79; // r12
  _QWORD *v80; // rbp
  unsigned int v81; // ebp
  __int64 v82; // r12
  unsigned int v83; // eax
  __int64 v84; // r14
  __int64 v85; // r12
  _QWORD *v86; // r11
  __int64 v87; // r10
  __int64 v88; // rax
  __int64 v89; // rsi
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 *v94; // r8
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 *v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  __int64 *v103; // rsi
  __int64 v104; // r8
  __int64 v105; // rax
  __int64 *v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 *v109; // rsi
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 *v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 *v115; // rsi
  __int64 v116; // r8
  __int64 v117; // rax
  __int64 *v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  __int64 *v121; // rsi
  __int64 v122; // r8
  __int64 v123; // rax
  __int64 *v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 *v127; // rsi
  __int64 v128; // r8
  __int64 v129; // rax
  __int64 *v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rax
  __int64 *v133; // rsi
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 *v136; // rcx
  __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rax

  v6 = *a2;
  if ( *a2 )
  {
    v7 = v6 - 1;
    v8 = a1 + 8 * v7;
    if ( *(_QWORD *)(v8 + 128) == a6 && *(_DWORD *)(v8 + 4) + 1 == a4 )
    {
      *a2 = v7;
      if ( v6 != a3 && (v91 = a1 + 8LL * v6, *(_QWORD *)(v91 + 128) == a6) && a5 + 1 == *(_DWORD *)v91 )
      {
        *(_DWORD *)(v8 + 4) = *(_DWORD *)(v91 + 4);
        v93 = v6 + 1;
        if ( a3 != (_DWORD)v93 )
        {
          v94 = (__int64 *)(a1 + 8 * v93);
          v95 = *v94;
          *(_QWORD *)(v91 + 128) = v94[16];
          v96 = v6 + 2;
          *(_QWORD *)v91 = v95;
          if ( a3 != (_DWORD)v96 )
          {
            v97 = (__int64 *)(a1 + 8 * v96);
            v98 = *v97;
            v94[16] = v97[16];
            v99 = v6 + 3;
            *v94 = v98;
            if ( a3 != (_DWORD)v99 )
            {
              v100 = (__int64 *)(a1 + 8 * v99);
              v101 = *v100;
              v97[16] = v100[16];
              v102 = v6 + 4;
              *v97 = v101;
              if ( a3 != (_DWORD)v102 )
              {
                v103 = (__int64 *)(a1 + 8 * v102);
                v104 = *v103;
                v100[16] = v103[16];
                v105 = v6 + 5;
                *v100 = v104;
                if ( a3 != (_DWORD)v105 )
                {
                  v106 = (__int64 *)(a1 + 8 * v105);
                  v107 = *v106;
                  v103[16] = v106[16];
                  v108 = v6 + 6;
                  *v103 = v107;
                  if ( a3 != (_DWORD)v108 )
                  {
                    v109 = (__int64 *)(a1 + 8 * v108);
                    v110 = *v109;
                    v106[16] = v109[16];
                    v111 = v6 + 7;
                    *v106 = v110;
                    if ( a3 != (_DWORD)v111 )
                    {
                      v112 = (__int64 *)(a1 + 8 * v111);
                      v113 = *v112;
                      v109[16] = v112[16];
                      v114 = v6 + 8;
                      *v109 = v113;
                      if ( a3 != (_DWORD)v114 )
                      {
                        v115 = (__int64 *)(a1 + 8 * v114);
                        v116 = *v115;
                        v112[16] = v115[16];
                        v117 = v6 + 9;
                        *v112 = v116;
                        if ( a3 != (_DWORD)v117 )
                        {
                          v118 = (__int64 *)(a1 + 8 * v117);
                          v119 = *v118;
                          v115[16] = v118[16];
                          v120 = v6 + 10;
                          *v115 = v119;
                          if ( a3 != (_DWORD)v120 )
                          {
                            v121 = (__int64 *)(a1 + 8 * v120);
                            v122 = *v121;
                            v118[16] = v121[16];
                            v123 = v6 + 11;
                            *v118 = v122;
                            if ( a3 != (_DWORD)v123 )
                            {
                              v124 = (__int64 *)(a1 + 8 * v123);
                              v125 = *v124;
                              v121[16] = v124[16];
                              v126 = v6 + 12;
                              *v121 = v125;
                              if ( a3 != (_DWORD)v126 )
                              {
                                v127 = (__int64 *)(a1 + 8 * v126);
                                v128 = *v127;
                                v124[16] = v127[16];
                                v129 = v6 + 13;
                                *v124 = v128;
                                if ( a3 != (_DWORD)v129 )
                                {
                                  v130 = (__int64 *)(a1 + 8 * v129);
                                  v131 = *v130;
                                  v127[16] = v130[16];
                                  v132 = v6 + 14;
                                  *v127 = v131;
                                  if ( a3 != (_DWORD)v132 )
                                  {
                                    v133 = (__int64 *)(a1 + 8 * v132);
                                    v134 = *v133;
                                    v130[16] = v133[16];
                                    v135 = v6 + 15;
                                    *v130 = v134;
                                    if ( a3 != (_DWORD)v135 )
                                    {
                                      v136 = (__int64 *)(a1 + 8 * v135);
                                      v137 = *v136;
                                      v133[16] = v136[16];
                                      v138 = v6 + 16;
                                      *v133 = v137;
                                      if ( a3 != (_DWORD)v138 )
                                      {
                                        v139 = *(_QWORD *)(a1 + 8 * v138);
                                        v140 = *(_QWORD *)(a1 + 8 * v138 + 128);
                                        *v136 = v139;
                                        v136[16] = v140;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return a3 - 1;
      }
      else
      {
        *(_DWORD *)(v8 + 4) = a5;
        return a3;
      }
    }
    result = 17;
    if ( v6 == 16 )
      return result;
  }
  if ( v6 == a3 )
  {
    v92 = a1 + 8LL * v6;
    *(_DWORD *)v92 = a4;
    *(_DWORD *)(v92 + 4) = a5;
    *(_QWORD *)(v92 + 128) = a6;
    return v6 + 1;
  }
  else
  {
    v10 = a1 + 8LL * v6;
    if ( *(_QWORD *)(v10 + 128) == a6 && *(_DWORD *)v10 == a5 + 1 )
    {
      *(_DWORD *)v10 = a4;
      return a3;
    }
    else if ( a3 == 16 )
    {
      return 17;
    }
    else
    {
      v11 = a3 - 1;
      v12 = v6 + 1;
      v13 = *(_QWORD *)(a1 + 8 * v11);
      v14 = (_QWORD *)(a1 + 8LL * a3);
      v15 = a3 - 1 - v6;
      v14[16] = *(_QWORD *)(a1 + 8 * v11 + 128);
      v16 = v15 - 1;
      *v14 = v13;
      if ( a3 - 1 != v6 )
      {
        v17 = v6 + v16;
        v18 = *(_QWORD *)(a1 + 8 * v17);
        v19 = *(_QWORD *)(a1 + 8 * v17 + 128);
        v20 = (_QWORD *)(a1 + 8LL * (v12 + v16));
        *v20 = v18;
        v20[16] = v19;
        v21 = v15 - 2;
        if ( v15 != 1 )
        {
          v22 = v6 + v21;
          v23 = *(_QWORD *)(a1 + 8 * v22);
          v24 = *(_QWORD *)(a1 + 8 * v22 + 128);
          v25 = (_QWORD *)(a1 + 8LL * (v12 + v21));
          *v25 = v23;
          v25[16] = v24;
          v26 = v15 - 3;
          if ( v15 != 2 )
          {
            v27 = v6 + v26;
            v28 = *(_QWORD *)(a1 + 8 * v27);
            v29 = *(_QWORD *)(a1 + 8 * v27 + 128);
            v30 = (_QWORD *)(a1 + 8LL * (v12 + v26));
            *v30 = v28;
            v30[16] = v29;
            v31 = v15 - 4;
            if ( v15 != 3 )
            {
              v32 = v6 + v31;
              v33 = *(_QWORD *)(a1 + 8 * v32);
              v34 = *(_QWORD *)(a1 + 8 * v32 + 128);
              v35 = (_QWORD *)(a1 + 8LL * (v12 + v31));
              *v35 = v33;
              v35[16] = v34;
              v36 = v15 - 5;
              if ( v15 != 4 )
              {
                v37 = v6 + v36;
                v38 = *(_QWORD *)(a1 + 8 * v37);
                v39 = *(_QWORD *)(a1 + 8 * v37 + 128);
                v40 = (_QWORD *)(a1 + 8LL * (v12 + v36));
                *v40 = v38;
                v40[16] = v39;
                v41 = v15 - 6;
                if ( v15 != 5 )
                {
                  v42 = v6 + v41;
                  v43 = *(_QWORD *)(a1 + 8 * v42);
                  v44 = *(_QWORD *)(a1 + 8 * v42 + 128);
                  v45 = (_QWORD *)(a1 + 8LL * (v12 + v41));
                  *v45 = v43;
                  v45[16] = v44;
                  v46 = v15 - 7;
                  if ( v15 != 6 )
                  {
                    v47 = v6 + v46;
                    v48 = *(_QWORD *)(a1 + 8 * v47);
                    v49 = *(_QWORD *)(a1 + 8 * v47 + 128);
                    v50 = (_QWORD *)(a1 + 8LL * (v12 + v46));
                    *v50 = v48;
                    v50[16] = v49;
                    v51 = v15 - 8;
                    if ( v15 != 7 )
                    {
                      v52 = v6 + v51;
                      v53 = *(_QWORD *)(a1 + 8 * v52);
                      v54 = *(_QWORD *)(a1 + 8 * v52 + 128);
                      v55 = (_QWORD *)(a1 + 8LL * (v12 + v51));
                      *v55 = v53;
                      v55[16] = v54;
                      v56 = v15 - 9;
                      if ( v15 != 8 )
                      {
                        v57 = v6 + v56;
                        v58 = *(_QWORD *)(a1 + 8 * v57);
                        v59 = *(_QWORD *)(a1 + 8 * v57 + 128);
                        v60 = (_QWORD *)(a1 + 8LL * (v12 + v56));
                        *v60 = v58;
                        v60[16] = v59;
                        v61 = v15 - 10;
                        if ( v15 != 9 )
                        {
                          v62 = v6 + v61;
                          v63 = *(_QWORD *)(a1 + 8 * v62);
                          v64 = *(_QWORD *)(a1 + 8 * v62 + 128);
                          v65 = (_QWORD *)(a1 + 8LL * (v12 + v61));
                          *v65 = v63;
                          v65[16] = v64;
                          v66 = v15 - 11;
                          if ( v15 != 10 )
                          {
                            v67 = v6 + v66;
                            v68 = *(_QWORD *)(a1 + 8 * v67);
                            v69 = *(_QWORD *)(a1 + 8 * v67 + 128);
                            v70 = (_QWORD *)(a1 + 8LL * (v12 + v66));
                            *v70 = v68;
                            v70[16] = v69;
                            v71 = v15 - 12;
                            if ( v15 != 11 )
                            {
                              v72 = v6 + v71;
                              v73 = *(_QWORD *)(a1 + 8 * v72);
                              v74 = *(_QWORD *)(a1 + 8 * v72 + 128);
                              v75 = (_QWORD *)(a1 + 8LL * (v12 + v71));
                              *v75 = v73;
                              v75[16] = v74;
                              v76 = v15 - 13;
                              if ( v15 != 12 )
                              {
                                v77 = v6 + v76;
                                v78 = *(_QWORD *)(a1 + 8 * v77);
                                v79 = *(_QWORD *)(a1 + 8 * v77 + 128);
                                v80 = (_QWORD *)(a1 + 8LL * (v12 + v76));
                                *v80 = v78;
                                v80[16] = v79;
                                v81 = v15 - 14;
                                if ( v15 != 13 )
                                {
                                  v82 = v6 + v81;
                                  v83 = v15 - 15;
                                  v84 = *(_QWORD *)(a1 + 8 * v82);
                                  v85 = *(_QWORD *)(a1 + 8 * v82 + 128);
                                  v86 = (_QWORD *)(a1 + 8LL * (v12 + v81));
                                  *v86 = v84;
                                  v86[16] = v85;
                                  if ( v81 )
                                  {
                                    v87 = v83 + v6;
                                    v88 = v12 + v83;
                                    v89 = *(_QWORD *)(a1 + 8 * v87 + 128);
                                    v90 = (_QWORD *)(a1 + 8 * v88);
                                    *v90 = *(_QWORD *)(a1 + 8 * v87);
                                    v90[16] = v89;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(_DWORD *)v10 = a4;
      result = a3 + 1;
      *(_DWORD *)(v10 + 4) = a5;
      *(_QWORD *)(v10 + 128) = a6;
    }
  }
  return result;
}
