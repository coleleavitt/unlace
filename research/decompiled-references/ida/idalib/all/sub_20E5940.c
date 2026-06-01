__int64 __fastcall sub_20E5940(__int64 a1, unsigned int *a2, unsigned int a3, int a4, int a5, __int64 a6)
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
  unsigned int v63; // eax
  __int64 v64; // r14
  __int64 v65; // r12
  _QWORD *v66; // r11
  __int64 v67; // r10
  __int64 v68; // rax
  __int64 v69; // rsi
  _QWORD *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 *v74; // r8
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 *v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 *v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 *v83; // rsi
  __int64 v84; // r8
  __int64 v85; // rax
  __int64 *v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 *v89; // rsi
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 *v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 *v95; // rsi
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 *v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  __int64 *v101; // rsi
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 *v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rax

  v6 = *a2;
  if ( *a2 )
  {
    v7 = v6 - 1;
    v8 = a1 + 8 * v7;
    if ( *(_QWORD *)(v8 + 96) == a6 && *(_DWORD *)(v8 + 4) + 1 == a4 )
    {
      *a2 = v7;
      if ( v6 != a3 && (v71 = a1 + 8LL * v6, *(_QWORD *)(v71 + 96) == a6) && a5 + 1 == *(_DWORD *)v71 )
      {
        *(_DWORD *)(v8 + 4) = *(_DWORD *)(v71 + 4);
        v73 = v6 + 1;
        if ( a3 != (_DWORD)v73 )
        {
          v74 = (__int64 *)(a1 + 8 * v73);
          v75 = *v74;
          *(_QWORD *)(v71 + 96) = v74[12];
          v76 = v6 + 2;
          *(_QWORD *)v71 = v75;
          if ( a3 != (_DWORD)v76 )
          {
            v77 = (__int64 *)(a1 + 8 * v76);
            v78 = *v77;
            v74[12] = v77[12];
            v79 = v6 + 3;
            *v74 = v78;
            if ( a3 != (_DWORD)v79 )
            {
              v80 = (__int64 *)(a1 + 8 * v79);
              v81 = *v80;
              v77[12] = v80[12];
              v82 = v6 + 4;
              *v77 = v81;
              if ( a3 != (_DWORD)v82 )
              {
                v83 = (__int64 *)(a1 + 8 * v82);
                v84 = *v83;
                v80[12] = v83[12];
                v85 = v6 + 5;
                *v80 = v84;
                if ( a3 != (_DWORD)v85 )
                {
                  v86 = (__int64 *)(a1 + 8 * v85);
                  v87 = *v86;
                  v83[12] = v86[12];
                  v88 = v6 + 6;
                  *v83 = v87;
                  if ( a3 != (_DWORD)v88 )
                  {
                    v89 = (__int64 *)(a1 + 8 * v88);
                    v90 = *v89;
                    v86[12] = v89[12];
                    v91 = v6 + 7;
                    *v86 = v90;
                    if ( a3 != (_DWORD)v91 )
                    {
                      v92 = (__int64 *)(a1 + 8 * v91);
                      v93 = *v92;
                      v89[12] = v92[12];
                      v94 = v6 + 8;
                      *v89 = v93;
                      if ( a3 != (_DWORD)v94 )
                      {
                        v95 = (__int64 *)(a1 + 8 * v94);
                        v96 = *v95;
                        v92[12] = v95[12];
                        v97 = v6 + 9;
                        *v92 = v96;
                        if ( a3 != (_DWORD)v97 )
                        {
                          v98 = (__int64 *)(a1 + 8 * v97);
                          v99 = *v98;
                          v95[12] = v98[12];
                          v100 = v6 + 10;
                          *v95 = v99;
                          if ( a3 != (_DWORD)v100 )
                          {
                            v101 = (__int64 *)(a1 + 8 * v100);
                            v102 = *v101;
                            v98[12] = v101[12];
                            v103 = v6 + 11;
                            *v98 = v102;
                            if ( a3 != (_DWORD)v103 )
                            {
                              v104 = (__int64 *)(a1 + 8 * v103);
                              v105 = *v104;
                              v101[12] = v104[12];
                              v106 = v6 + 12;
                              *v101 = v105;
                              if ( a3 != (_DWORD)v106 )
                              {
                                v107 = *(_QWORD *)(a1 + 8 * v106);
                                v108 = *(_QWORD *)(a1 + 8 * v106 + 96);
                                *v104 = v107;
                                v104[12] = v108;
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
    result = 13;
    if ( v6 == 12 )
      return result;
  }
  if ( v6 == a3 )
  {
    v72 = a1 + 8LL * v6;
    *(_DWORD *)v72 = a4;
    *(_DWORD *)(v72 + 4) = a5;
    *(_QWORD *)(v72 + 96) = a6;
    return v6 + 1;
  }
  else
  {
    v10 = a1 + 8LL * v6;
    if ( *(_QWORD *)(v10 + 96) == a6 && *(_DWORD *)v10 == a5 + 1 )
    {
      *(_DWORD *)v10 = a4;
      return a3;
    }
    else if ( a3 == 12 )
    {
      return 13;
    }
    else
    {
      v11 = a3 - 1;
      v12 = v6 + 1;
      v13 = *(_QWORD *)(a1 + 8 * v11);
      v14 = (_QWORD *)(a1 + 8LL * a3);
      v15 = a3 - 1 - v6;
      v14[12] = *(_QWORD *)(a1 + 8 * v11 + 96);
      v16 = v15 - 1;
      *v14 = v13;
      if ( a3 - 1 != v6 )
      {
        v17 = v6 + v16;
        v18 = *(_QWORD *)(a1 + 8 * v17);
        v19 = *(_QWORD *)(a1 + 8 * v17 + 96);
        v20 = (_QWORD *)(a1 + 8LL * (v12 + v16));
        *v20 = v18;
        v20[12] = v19;
        v21 = v15 - 2;
        if ( v15 != 1 )
        {
          v22 = v6 + v21;
          v23 = *(_QWORD *)(a1 + 8 * v22);
          v24 = *(_QWORD *)(a1 + 8 * v22 + 96);
          v25 = (_QWORD *)(a1 + 8LL * (v12 + v21));
          *v25 = v23;
          v25[12] = v24;
          v26 = v15 - 3;
          if ( v15 != 2 )
          {
            v27 = v6 + v26;
            v28 = *(_QWORD *)(a1 + 8 * v27);
            v29 = *(_QWORD *)(a1 + 8 * v27 + 96);
            v30 = (_QWORD *)(a1 + 8LL * (v12 + v26));
            *v30 = v28;
            v30[12] = v29;
            v31 = v15 - 4;
            if ( v15 != 3 )
            {
              v32 = v6 + v31;
              v33 = *(_QWORD *)(a1 + 8 * v32);
              v34 = *(_QWORD *)(a1 + 8 * v32 + 96);
              v35 = (_QWORD *)(a1 + 8LL * (v12 + v31));
              *v35 = v33;
              v35[12] = v34;
              v36 = v15 - 5;
              if ( v15 != 4 )
              {
                v37 = v6 + v36;
                v38 = *(_QWORD *)(a1 + 8 * v37);
                v39 = *(_QWORD *)(a1 + 8 * v37 + 96);
                v40 = (_QWORD *)(a1 + 8LL * (v12 + v36));
                *v40 = v38;
                v40[12] = v39;
                v41 = v15 - 6;
                if ( v15 != 5 )
                {
                  v42 = v6 + v41;
                  v43 = *(_QWORD *)(a1 + 8 * v42);
                  v44 = *(_QWORD *)(a1 + 8 * v42 + 96);
                  v45 = (_QWORD *)(a1 + 8LL * (v12 + v41));
                  *v45 = v43;
                  v45[12] = v44;
                  v46 = v15 - 7;
                  if ( v15 != 6 )
                  {
                    v47 = v6 + v46;
                    v48 = *(_QWORD *)(a1 + 8 * v47);
                    v49 = *(_QWORD *)(a1 + 8 * v47 + 96);
                    v50 = (_QWORD *)(a1 + 8LL * (v12 + v46));
                    *v50 = v48;
                    v50[12] = v49;
                    v51 = v15 - 8;
                    if ( v15 != 7 )
                    {
                      v52 = v6 + v51;
                      v53 = *(_QWORD *)(a1 + 8 * v52);
                      v54 = *(_QWORD *)(a1 + 8 * v52 + 96);
                      v55 = (_QWORD *)(a1 + 8LL * (v12 + v51));
                      *v55 = v53;
                      v55[12] = v54;
                      v56 = v15 - 9;
                      if ( v15 != 8 )
                      {
                        v57 = v6 + v56;
                        v58 = *(_QWORD *)(a1 + 8 * v57);
                        v59 = *(_QWORD *)(a1 + 8 * v57 + 96);
                        v60 = (_QWORD *)(a1 + 8LL * (v12 + v56));
                        *v60 = v58;
                        v60[12] = v59;
                        v61 = v15 - 10;
                        if ( v15 != 9 )
                        {
                          v62 = v6 + v61;
                          v63 = v15 - 11;
                          v64 = *(_QWORD *)(a1 + 8 * v62);
                          v65 = *(_QWORD *)(a1 + 8 * v62 + 96);
                          v66 = (_QWORD *)(a1 + 8LL * (v12 + v61));
                          *v66 = v64;
                          v66[12] = v65;
                          if ( v61 )
                          {
                            v67 = v63 + v6;
                            v68 = v12 + v63;
                            v69 = *(_QWORD *)(a1 + 8 * v67 + 96);
                            v70 = (_QWORD *)(a1 + 8 * v68);
                            *v70 = *(_QWORD *)(a1 + 8 * v67);
                            v70[12] = v69;
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
      *(_QWORD *)(v10 + 96) = a6;
    }
  }
  return result;
}
