void __fastcall sub_74720(__int64 *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  _QWORD *v9; // r15
  unsigned __int64 v10; // r14
  _QWORD *v11; // rbp
  _QWORD *v12; // r13
  __int64 v13; // rbx
  __int64 *v14; // r15
  _QWORD *v15; // rbp
  __int64 v16; // r13
  __int64 *v17; // rbp
  __int64 *v18; // r15
  __int64 *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rbp
  size_t v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r9
  size_t v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r11
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // r9
  size_t v43; // rax
  __int64 v44; // rsi
  __int64 v45; // r11
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  size_t v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r10
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // r15
  size_t v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rbp
  size_t v70; // rax
  __int64 v71; // rsi
  __int64 v72; // r9
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbp
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // r14
  size_t v79; // rax
  __int64 v80; // rsi
  __int64 v81; // r13
  unsigned __int64 v82; // rdx
  char *v83; // r13
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-78h]
  char *v93; // [rsp+0h] [rbp-78h]
  char *v94; // [rsp+0h] [rbp-78h]
  char *v95; // [rsp+0h] [rbp-78h]
  char *v96; // [rsp+0h] [rbp-78h]
  char *v97; // [rsp+0h] [rbp-78h]
  __int64 *v98; // [rsp+0h] [rbp-78h]
  __int64 v99; // [rsp+0h] [rbp-78h]
  __int64 v100; // [rsp+0h] [rbp-78h]
  __int64 v101; // [rsp+0h] [rbp-78h]
  __int64 *v102; // [rsp+0h] [rbp-78h]
  __int64 *v103; // [rsp+0h] [rbp-78h]
  __int64 *v104; // [rsp+0h] [rbp-78h]
  __int64 v105; // [rsp+8h] [rbp-70h]
  __int64 v106; // [rsp+8h] [rbp-70h]
  __int64 v107; // [rsp+8h] [rbp-70h]
  __int64 v108; // [rsp+8h] [rbp-70h]
  __int64 v109; // [rsp+8h] [rbp-70h]
  unsigned __int64 v110; // [rsp+8h] [rbp-70h]
  __int64 v111; // [rsp+8h] [rbp-70h]
  __int64 v112; // [rsp+8h] [rbp-70h]
  __int64 v113; // [rsp+8h] [rbp-70h]
  __int64 v114; // [rsp+8h] [rbp-70h]
  unsigned __int64 v115; // [rsp+8h] [rbp-70h]
  _QWORD *v116; // [rsp+10h] [rbp-68h]
  __int64 v117; // [rsp+10h] [rbp-68h]
  __int64 v118; // [rsp+10h] [rbp-68h]
  __int64 *v119; // [rsp+10h] [rbp-68h]
  __int64 *v120; // [rsp+10h] [rbp-68h]
  __int64 v121; // [rsp+10h] [rbp-68h]
  _QWORD *v122; // [rsp+18h] [rbp-60h]
  _QWORD *v123; // [rsp+20h] [rbp-58h]
  __int64 v124; // [rsp+28h] [rbp-50h]
  char *v125; // [rsp+30h] [rbp-48h]
  __int64 v126; // [rsp+30h] [rbp-48h]
  __int64 v127; // [rsp+30h] [rbp-48h]
  __int64 v128; // [rsp+30h] [rbp-48h]
  __int64 v129; // [rsp+38h] [rbp-40h]

  do
  {
    if ( a2[2] < a4 && a3 < a2[3] )
    {
      v75 = 4LL * a2[6];
      v76 = v75 >> 2;
      if ( v75 >> 2 )
      {
        v77 = a1[1];
        v78 = a2[5];
        v79 = 0;
        v80 = *a1;
        v81 = 4 * v77;
        v82 = v76 + v77;
        if ( a1[2] < v82 )
        {
          v115 = a4;
          v104 = a1;
          v91 = qvector_reserve(a1, v80, v82, 4);
          a1 = v104;
          a4 = v115;
          v80 = v91;
          *v104 = v91;
          v79 = 4 * v104[1] - v81;
        }
        v83 = (char *)(v80 + v81);
        v110 = a4;
        v98 = a1;
        memmove(&v83[v75], v83, v79);
        v84 = 0;
        a1 = v98;
        a4 = v110;
        if ( v75 )
        {
          do
          {
            *(_DWORD *)&v83[v84] = *(_DWORD *)(v78 + v84);
            v84 += 4;
          }
          while ( v75 != v84 );
        }
        v98[1] += v76;
      }
    }
    v8 = *a2;
    if ( *a2 && a3 < *(_QWORD *)(v8 + 32) )
    {
      v9 = a2;
      v10 = a4;
      do
      {
        if ( *(_QWORD *)(v8 + 16) < v10 && a3 < *(_QWORD *)(v8 + 24) )
        {
          v66 = 4LL * *(_QWORD *)(v8 + 48);
          v67 = v66 >> 2;
          if ( v66 >> 2 )
          {
            v68 = a1[1];
            v69 = *(_QWORD *)(v8 + 40);
            v70 = 0;
            v71 = *a1;
            v72 = 4 * v68;
            v73 = v67 + v68;
            if ( a1[2] < v73 )
            {
              v114 = v72;
              v103 = a1;
              v90 = qvector_reserve(a1, v71, v73, 4);
              a1 = v103;
              v72 = v114;
              v71 = v90;
              v67 = v66 >> 2;
              *v103 = v90;
              v70 = 4 * v103[1] - v114;
            }
            v120 = a1;
            v109 = v67;
            v97 = (char *)(v72 + v71);
            memmove(&v97[v66], v97, v70);
            v74 = 0;
            a1 = v120;
            if ( v66 )
            {
              do
              {
                *(_DWORD *)&v97[v74] = *(_DWORD *)(v69 + v74);
                v74 += 4;
              }
              while ( v66 != v74 );
            }
            v120[1] += v109;
          }
        }
        v11 = *(_QWORD **)v8;
        if ( *(_QWORD *)v8 && a3 < v11[4] )
        {
          v124 = v8;
          v12 = v9;
          do
          {
            if ( v11[2] < v10 && a3 < v11[3] )
            {
              v57 = 4LL * v11[6];
              v58 = v57 >> 2;
              if ( v57 >> 2 )
              {
                v59 = a1[1];
                v60 = v11[5];
                v61 = 0;
                v62 = *a1;
                v63 = 4 * v59;
                v64 = v58 + v59;
                if ( a1[2] < v64 )
                {
                  v113 = v63;
                  v102 = a1;
                  v89 = qvector_reserve(a1, v62, v64, 4);
                  a1 = v102;
                  v63 = v113;
                  v62 = v89;
                  v58 = v57 >> 2;
                  *v102 = v89;
                  v61 = 4 * v102[1] - v113;
                }
                v119 = a1;
                v108 = v58;
                v96 = (char *)(v63 + v62);
                memmove(&v96[v57], v96, v61);
                v65 = 0;
                a1 = v119;
                if ( v57 )
                {
                  do
                  {
                    *(_DWORD *)&v96[v65] = *(_DWORD *)(v60 + v65);
                    v65 += 4;
                  }
                  while ( v57 != v65 );
                }
                v119[1] += v108;
              }
            }
            v13 = *v11;
            if ( *v11 && a3 < *(_QWORD *)(v13 + 32) )
            {
              v123 = v11;
              v14 = a1;
              do
              {
                if ( *(_QWORD *)(v13 + 16) < v10 && a3 < *(_QWORD *)(v13 + 24) )
                {
                  v48 = 4LL * *(_QWORD *)(v13 + 48);
                  v49 = v48 >> 2;
                  if ( v48 >> 2 )
                  {
                    v50 = v14[1];
                    v51 = *(_QWORD *)(v13 + 40);
                    v52 = 0;
                    v53 = *v14;
                    v54 = 4 * v50;
                    v55 = v49 + v50;
                    if ( v14[2] < v55 )
                    {
                      v112 = v54;
                      v101 = *(_QWORD *)(v13 + 40);
                      v88 = qvector_reserve(v14, v53, v55, 4);
                      v54 = v112;
                      v49 = v48 >> 2;
                      *v14 = v88;
                      v53 = v88;
                      v51 = v101;
                      v52 = 4 * v14[1] - v112;
                    }
                    v118 = v49;
                    v107 = v51;
                    v95 = (char *)(v54 + v53);
                    memmove(&v95[v48], v95, v52);
                    v56 = 0;
                    if ( v48 )
                    {
                      do
                      {
                        *(_DWORD *)&v95[v56] = *(_DWORD *)(v107 + v56);
                        v56 += 4;
                      }
                      while ( v56 != v48 );
                    }
                    v14[1] += v118;
                  }
                }
                v15 = *(_QWORD **)v13;
                if ( *(_QWORD *)v13 && a3 < v15[4] )
                {
                  v122 = v12;
                  do
                  {
                    if ( v15[2] < v10 && a3 < v15[3] )
                    {
                      v39 = 4LL * v15[6];
                      v40 = v39 >> 2;
                      if ( v39 >> 2 )
                      {
                        v41 = v14[1];
                        v42 = v15[5];
                        v43 = 0;
                        v44 = *v14;
                        v45 = 4 * v41;
                        v46 = v40 + v41;
                        if ( v14[2] < v46 )
                        {
                          v121 = v45;
                          v111 = 4LL * v15[6];
                          v100 = v15[5];
                          v87 = qvector_reserve(v14, v44, v46, 4);
                          v45 = v121;
                          v39 = v111;
                          *v14 = v87;
                          v44 = v87;
                          v42 = v100;
                          v43 = 4 * v14[1] - v121;
                        }
                        v117 = v42;
                        v106 = v39;
                        v94 = (char *)(v45 + v44);
                        memmove(&v94[v39], v94, v43);
                        v47 = 0;
                        if ( v106 )
                        {
                          do
                          {
                            *(_DWORD *)&v94[v47] = *(_DWORD *)(v117 + v47);
                            v47 += 4;
                          }
                          while ( v47 != v106 );
                        }
                        v14[1] += v40;
                      }
                    }
                    v16 = *v15;
                    if ( *v15 && a3 < *(_QWORD *)(v16 + 32) )
                    {
                      v105 = v13;
                      v116 = v15;
                      v17 = v14;
                      do
                      {
                        if ( *(_QWORD *)(v16 + 16) < v10 && a3 < *(_QWORD *)(v16 + 24) )
                        {
                          v30 = 4LL * *(_QWORD *)(v16 + 48);
                          v31 = v30 >> 2;
                          if ( v30 >> 2 )
                          {
                            v32 = v17[1];
                            v33 = *(_QWORD *)(v16 + 40);
                            v34 = 0;
                            v35 = *v17;
                            v36 = 4 * v32;
                            v37 = v31 + v32;
                            if ( v17[2] < v37 )
                            {
                              v128 = v36;
                              v99 = *(_QWORD *)(v16 + 40);
                              v86 = qvector_reserve(v17, v35, v37, 4);
                              v36 = v128;
                              v33 = v99;
                              *v17 = v86;
                              v35 = v86;
                              v34 = 4 * v17[1] - v128;
                            }
                            v126 = v33;
                            v93 = (char *)(v36 + v35);
                            memmove(&v93[v30], v93, v34);
                            v38 = 0;
                            if ( v30 )
                            {
                              do
                              {
                                *(_DWORD *)&v93[v38] = *(_DWORD *)(v126 + v38);
                                v38 += 4;
                              }
                              while ( v38 != v30 );
                            }
                            v17[1] += v31;
                          }
                        }
                        v18 = *(__int64 **)v16;
                        if ( *(_QWORD *)v16 && a3 < v18[4] )
                        {
                          v92 = v16;
                          v19 = v17;
                          do
                          {
                            if ( v18[2] < v10 && a3 < v18[3] )
                            {
                              v21 = 4 * v18[6];
                              v22 = v21 >> 2;
                              if ( v21 >> 2 )
                              {
                                v23 = v19[1];
                                v24 = v18[5];
                                v25 = 0;
                                v26 = *v19;
                                v27 = 4 * v23;
                                v28 = v22 + v23;
                                if ( v19[2] < v28 )
                                {
                                  v127 = v27;
                                  v85 = qvector_reserve(v19, v26, v28, 4);
                                  v27 = v127;
                                  v22 = v21 >> 2;
                                  *v19 = v85;
                                  v26 = v85;
                                  v25 = 4 * v19[1] - v127;
                                }
                                v129 = v22;
                                v125 = (char *)(v27 + v26);
                                memmove(&v125[v21], v125, v25);
                                v29 = 0;
                                if ( v21 )
                                {
                                  do
                                  {
                                    *(_DWORD *)&v125[v29] = *(_DWORD *)(v24 + v29);
                                    v29 += 4;
                                  }
                                  while ( v29 != v21 );
                                }
                                v19[1] += v129;
                              }
                            }
                            v20 = *v18;
                            if ( *v18 )
                            {
                              if ( a3 < *(_QWORD *)(v20 + 32) )
                                sub_74720(v19, v20, a3, v10);
                            }
                            v18 = (__int64 *)v18[1];
                          }
                          while ( v18 );
                          v17 = v19;
                          v16 = v92;
                        }
                        v16 = *(_QWORD *)(v16 + 8);
                      }
                      while ( v16 );
                      v14 = v17;
                      v13 = v105;
                      v15 = v116;
                    }
                    v15 = (_QWORD *)v15[1];
                  }
                  while ( v15 );
                  v12 = v122;
                }
                v13 = *(_QWORD *)(v13 + 8);
              }
              while ( v13 );
              v11 = v123;
              a1 = v14;
            }
            v11 = (_QWORD *)v11[1];
          }
          while ( v11 );
          v9 = v12;
          v8 = v124;
        }
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v8 );
      a2 = v9;
      a4 = v10;
    }
    a2 = (_QWORD *)a2[1];
  }
  while ( a2 );
}
