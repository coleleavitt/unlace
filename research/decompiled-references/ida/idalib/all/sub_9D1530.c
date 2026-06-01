void __fastcall sub_9D1530(void *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  int v10; // r13d
  _QWORD *v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // r13d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r13d
  int v21; // eax
  __int64 v22; // r9
  int v23; // r10d
  __int64 v24; // r8
  __int64 v25; // r10
  int v26; // r9d
  int v27; // eax
  __int64 v28; // r10
  __int64 v29; // rcx
  int v30; // r11d
  __int64 v31; // r11
  int v32; // edx
  int v33; // eax
  __int64 v34; // r10
  int v35; // eax
  __int64 v36; // r10
  __int64 v37; // r11
  int v38; // edx
  int v39; // eax
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // r9
  __int64 v43; // r11
  int v44; // edx
  int v45; // eax
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // r15
  __int64 v49; // r10
  int v50; // r13d
  int v51; // eax
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 *v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 *v59; // rdx
  int v60; // eax
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 *v63; // rdx
  __int64 v64; // [rsp+0h] [rbp-218h]
  __int64 v65; // [rsp+0h] [rbp-218h]
  __int64 v66; // [rsp+0h] [rbp-218h]
  __int64 v67; // [rsp+0h] [rbp-218h]
  __int64 v68; // [rsp+0h] [rbp-218h]
  __int64 v69; // [rsp+0h] [rbp-218h]
  __int64 v70; // [rsp+0h] [rbp-218h]
  __int64 v71; // [rsp+0h] [rbp-218h]
  __int64 v72; // [rsp+0h] [rbp-218h]
  __int64 v73; // [rsp+0h] [rbp-218h]
  __int64 v74; // [rsp+0h] [rbp-218h]
  __int64 v75; // [rsp+0h] [rbp-218h]
  __int64 v76; // [rsp+0h] [rbp-218h]
  __int64 v77; // [rsp+0h] [rbp-218h]
  __int64 v78; // [rsp+0h] [rbp-218h]
  __int64 v79; // [rsp+0h] [rbp-218h]
  __int64 v80; // [rsp+0h] [rbp-218h]
  __int64 v81; // [rsp+8h] [rbp-210h]
  __int64 v82; // [rsp+8h] [rbp-210h]
  __int64 v83; // [rsp+8h] [rbp-210h]
  int v84; // [rsp+8h] [rbp-210h]
  __int64 v85; // [rsp+8h] [rbp-210h]
  int v86; // [rsp+8h] [rbp-210h]
  __int64 v87; // [rsp+8h] [rbp-210h]
  __int64 v88; // [rsp+8h] [rbp-210h]
  __int64 v89; // [rsp+8h] [rbp-210h]
  __int64 v90; // [rsp+8h] [rbp-210h]
  __int64 v91; // [rsp+8h] [rbp-210h]
  __int64 v92; // [rsp+8h] [rbp-210h]
  __int64 v93; // [rsp+8h] [rbp-210h]
  __int64 v94; // [rsp+8h] [rbp-210h]
  __int64 v95; // [rsp+8h] [rbp-210h]
  __int64 v96; // [rsp+10h] [rbp-208h]
  __int64 v97; // [rsp+10h] [rbp-208h]
  __int64 v98; // [rsp+10h] [rbp-208h]
  __int64 v99; // [rsp+10h] [rbp-208h]
  __int64 v100; // [rsp+10h] [rbp-208h]
  int v101; // [rsp+10h] [rbp-208h]
  __int64 v102; // [rsp+10h] [rbp-208h]
  __int64 v103; // [rsp+10h] [rbp-208h]
  __int64 v104; // [rsp+10h] [rbp-208h]
  __int64 v105; // [rsp+10h] [rbp-208h]
  __int64 v106; // [rsp+10h] [rbp-208h]
  __int64 v107; // [rsp+10h] [rbp-208h]
  int v108; // [rsp+10h] [rbp-208h]
  __int64 v109; // [rsp+10h] [rbp-208h]
  __int64 v110; // [rsp+10h] [rbp-208h]
  int v111; // [rsp+18h] [rbp-200h]
  int v112; // [rsp+18h] [rbp-200h]
  int v113; // [rsp+18h] [rbp-200h]
  int v114; // [rsp+18h] [rbp-200h]
  __int64 v115; // [rsp+18h] [rbp-200h]
  int v116; // [rsp+18h] [rbp-200h]
  __int64 v117; // [rsp+18h] [rbp-200h]
  __int64 v118; // [rsp+18h] [rbp-200h]
  int v119; // [rsp+18h] [rbp-200h]
  __int64 v120; // [rsp+18h] [rbp-200h]
  int v121; // [rsp+18h] [rbp-200h]
  __int64 v122; // [rsp+18h] [rbp-200h]
  __int64 v123; // [rsp+18h] [rbp-200h]
  __int64 v124; // [rsp+18h] [rbp-200h]
  __int64 v125; // [rsp+18h] [rbp-200h]
  int v126; // [rsp+20h] [rbp-1F8h]
  int v127; // [rsp+20h] [rbp-1F8h]
  int v128; // [rsp+20h] [rbp-1F8h]
  __int64 v129; // [rsp+20h] [rbp-1F8h]
  int v130; // [rsp+20h] [rbp-1F8h]
  __int64 v131; // [rsp+20h] [rbp-1F8h]
  void *ptr; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v133; // [rsp+38h] [rbp-1E0h]
  _BYTE v134[128]; // [rsp+40h] [rbp-1D8h] BYREF
  void *v135; // [rsp+C0h] [rbp-158h]
  __int64 v136; // [rsp+C8h] [rbp-150h]
  __int64 v137; // [rsp+D0h] [rbp-148h] BYREF
  int v138; // [rsp+D8h] [rbp-140h]
  _BYTE v139[116]; // [rsp+DCh] [rbp-13Ch] BYREF
  void *v140; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v141; // [rsp+158h] [rbp-C0h]
  __int64 v142; // [rsp+160h] [rbp-B8h] BYREF
  int v143; // [rsp+168h] [rbp-B0h]
  _BYTE v144[172]; // [rsp+16Ch] [rbp-ACh] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 68))-- == 1;
    if ( v3 )
      sub_9D1530();
  }
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    v3 = (*(_DWORD *)(v4 + 68))-- == 1;
    if ( v3 )
      sub_9D1530();
  }
  v5 = *((_BYTE *)a1 + 43);
  v6 = *(_QWORD *)a1;
  if ( (v5 & 0x40) != 0 )
  {
    v7 = *((_QWORD *)a1 + 4);
    v8 = *((_QWORD *)a1 + 3);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = v8;
      v8 = *((_QWORD *)a1 + 3);
    }
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = v7;
    }
    else
    {
      if ( (v5 & 0x20) != 0 )
      {
        v10 = *((_DWORD *)a1 + 16);
      }
      else
      {
        v12 = *((_QWORD *)a1 + 1);
        v13 = *((_QWORD *)a1 + 2);
        if ( v12 )
        {
          if ( (*(_BYTE *)(v12 + 43) & 0x20) != 0 )
          {
            v14 = *(_DWORD *)(v12 + 64);
          }
          else
          {
            v18 = *(_QWORD *)(v12 + 8);
            v19 = *(_QWORD *)(v12 + 16);
            if ( v18 )
            {
              if ( (*(_BYTE *)(v18 + 43) & 0x20) != 0 )
              {
                v20 = *(_DWORD *)(v18 + 64);
              }
              else
              {
                v48 = *(_QWORD *)(v18 + 8);
                v49 = *(_QWORD *)(v18 + 16);
                v50 = 0;
                if ( v48 )
                {
                  if ( (*(_BYTE *)(v48 + 43) & 0x20) != 0 )
                  {
                    v50 = *(_DWORD *)(v48 + 64);
                  }
                  else
                  {
                    v79 = *((_QWORD *)a1 + 2);
                    v124 = *(_QWORD *)(v18 + 16);
                    v110 = *(_QWORD *)(v12 + 8);
                    v95 = *(_QWORD *)(v12 + 16);
                    v60 = sub_9CEC10(*(_QWORD *)(v48 + 8), *(_QWORD *)(v48 + 16), (__int64 *)(v48 + 48));
                    *(_BYTE *)(v48 + 43) |= 0x20u;
                    v49 = v124;
                    v50 = v60;
                    v18 = v110;
                    v13 = v79;
                    *(_DWORD *)(v48 + 64) = v60;
                    v19 = v95;
                  }
                }
                v117 = v49;
                v104 = v19;
                v142 = *(_QWORD *)(v18 + 48);
                v91 = v13;
                v143 = *(_DWORD *)(v18 + 56);
                v73 = v18;
                v140 = &v142;
                v141 = 0x2000000003LL;
                v51 = sub_985B10(&v142, (__int64)v144);
                v52 = v73;
                v20 = v51 + v50;
                v13 = v91;
                v19 = v104;
                if ( v117 )
                {
                  if ( (*(_BYTE *)(v117 + 43) & 0x20) != 0 )
                  {
                    v53 = *(_DWORD *)(v117 + 64);
                  }
                  else
                  {
                    v61 = *(_QWORD *)(v117 + 16);
                    v62 = *(_QWORD *)(v117 + 8);
                    v63 = (__int64 *)(v117 + 48);
                    v80 = v117;
                    v125 = v52;
                    v53 = sub_9CEC10(v62, v61, v63);
                    *(_BYTE *)(v80 + 43) |= 0x20u;
                    v52 = v125;
                    v19 = v104;
                    v13 = v91;
                    *(_DWORD *)(v80 + 64) = v53;
                  }
                  v20 += v53;
                }
                if ( v140 != &v142 )
                {
                  v105 = v52;
                  v92 = v19;
                  v74 = v13;
                  free(v140);
                  v52 = v105;
                  v19 = v92;
                  v13 = v74;
                }
                *(_DWORD *)(v52 + 64) = v20;
                *(_BYTE *)(v52 + 43) |= 0x20u;
              }
            }
            else
            {
              v20 = 0;
            }
            v96 = v19;
            v82 = v13;
            v137 = *(_QWORD *)(v12 + 48);
            v138 = *(_DWORD *)(v12 + 56);
            v135 = &v137;
            v136 = 0x2000000003LL;
            v21 = sub_985B10(&v137, (__int64)v139);
            v22 = v96;
            v14 = v21 + v20;
            v13 = v82;
            if ( v96 )
            {
              if ( (*(_BYTE *)(v96 + 43) & 0x20) != 0 )
              {
                v23 = *(_DWORD *)(v96 + 64);
              }
              else
              {
                v36 = *(_QWORD *)(v96 + 8);
                v37 = *(_QWORD *)(v96 + 16);
                v38 = 0;
                if ( v36 )
                {
                  if ( (*(_BYTE *)(v36 + 43) & 0x20) != 0 )
                  {
                    v38 = *(_DWORD *)(v36 + 64);
                  }
                  else
                  {
                    v76 = *(_QWORD *)(v96 + 8);
                    v120 = *(_QWORD *)(v96 + 16);
                    v38 = sub_9CEC10(*(_QWORD *)(v36 + 8), *(_QWORD *)(v36 + 16), (__int64 *)(v36 + 48));
                    *(_BYTE *)(v76 + 43) |= 0x20u;
                    v37 = v120;
                    v22 = v96;
                    *(_DWORD *)(v76 + 64) = v38;
                    v13 = v82;
                  }
                }
                v114 = v38;
                v142 = *(_QWORD *)(v22 + 48);
                v100 = v37;
                v143 = *(_DWORD *)(v22 + 56);
                v87 = v13;
                v69 = v22;
                v140 = &v142;
                v141 = 0x2000000003LL;
                v39 = sub_985B10(&v142, (__int64)v144);
                v40 = v69;
                v13 = v87;
                v23 = v114 + v39;
                if ( v100 )
                {
                  if ( (*(_BYTE *)(v100 + 43) & 0x20) != 0 )
                  {
                    v41 = *(_DWORD *)(v100 + 64);
                  }
                  else
                  {
                    v57 = *(_QWORD *)(v100 + 16);
                    v58 = *(_QWORD *)(v100 + 8);
                    v59 = (__int64 *)(v100 + 48);
                    v77 = v100;
                    v121 = v114 + v39;
                    v107 = v40;
                    v41 = sub_9CEC10(v58, v57, v59);
                    *(_BYTE *)(v77 + 43) |= 0x20u;
                    v23 = v121;
                    v40 = v107;
                    *(_DWORD *)(v77 + 64) = v41;
                    v13 = v87;
                  }
                  v23 += v41;
                }
                if ( v140 != &v142 )
                {
                  v101 = v23;
                  v88 = v40;
                  v70 = v13;
                  free(v140);
                  v23 = v101;
                  v40 = v88;
                  v13 = v70;
                }
                *(_DWORD *)(v40 + 64) = v23;
                *(_BYTE *)(v40 + 43) |= 0x20u;
              }
              v14 += v23;
            }
            if ( v135 != &v137 )
            {
              v65 = v13;
              free(v135);
              v13 = v65;
            }
            *(_DWORD *)(v12 + 64) = v14;
            *(_BYTE *)(v12 + 43) |= 0x20u;
          }
        }
        else
        {
          v14 = 0;
        }
        v81 = v13;
        ptr = v134;
        v133 = 0x2000000000LL;
        v64 = *((_QWORD *)a1 + 6);
        sub_9B7040((__int64)&ptr, v64);
        sub_9B7040((__int64)&ptr, SHIDWORD(v64));
        sub_9B7040((__int64)&ptr, *((_DWORD *)a1 + 14));
        v15 = sub_985B10(ptr, (__int64)ptr + 4 * (unsigned int)v133);
        v16 = v81;
        v10 = v15 + v14;
        if ( v81 )
        {
          if ( (*(_BYTE *)(v81 + 43) & 0x20) != 0 )
          {
            v17 = *(_DWORD *)(v81 + 64);
          }
          else
          {
            v24 = *(_QWORD *)(v81 + 8);
            v25 = *(_QWORD *)(v81 + 16);
            v26 = 0;
            if ( v24 )
            {
              if ( (*(_BYTE *)(v24 + 43) & 0x20) != 0 )
              {
                v26 = *(_DWORD *)(v24 + 64);
              }
              else
              {
                v42 = *(_QWORD *)(v24 + 8);
                v43 = *(_QWORD *)(v24 + 16);
                v44 = 0;
                if ( v42 )
                {
                  if ( (*(_BYTE *)(v42 + 43) & 0x20) != 0 )
                  {
                    v44 = *(_DWORD *)(v42 + 64);
                  }
                  else
                  {
                    v78 = *(_QWORD *)(v24 + 8);
                    v131 = *(_QWORD *)(v24 + 16);
                    v123 = *(_QWORD *)(v81 + 8);
                    v109 = *(_QWORD *)(v81 + 16);
                    v44 = sub_9CEC10(*(_QWORD *)(v42 + 8), *(_QWORD *)(v42 + 16), (__int64 *)(v42 + 48));
                    *(_BYTE *)(v78 + 43) |= 0x20u;
                    v43 = v131;
                    v24 = v123;
                    v25 = v109;
                    *(_DWORD *)(v78 + 64) = v44;
                    v16 = v81;
                  }
                }
                v127 = v44;
                v115 = v43;
                v142 = *(_QWORD *)(v24 + 48);
                v102 = v25;
                v143 = *(_DWORD *)(v24 + 56);
                v89 = v16;
                v71 = v24;
                v140 = &v142;
                v141 = 0x2000000003LL;
                v45 = sub_985B10(&v142, (__int64)v144);
                v46 = v71;
                v16 = v89;
                v26 = v127 + v45;
                v25 = v102;
                if ( v115 )
                {
                  if ( (*(_BYTE *)(v115 + 43) & 0x20) != 0 )
                  {
                    v47 = *(_DWORD *)(v115 + 64);
                  }
                  else
                  {
                    v54 = *(_QWORD *)(v115 + 16);
                    v55 = *(_QWORD *)(v115 + 8);
                    v56 = (__int64 *)(v115 + 48);
                    v75 = v115;
                    v128 = v127 + v45;
                    v118 = v46;
                    v47 = sub_9CEC10(v55, v54, v56);
                    *(_BYTE *)(v75 + 43) |= 0x20u;
                    v26 = v128;
                    v46 = v118;
                    v25 = v102;
                    *(_DWORD *)(v75 + 64) = v47;
                    v16 = v89;
                  }
                  v26 += v47;
                }
                if ( v140 != &v142 )
                {
                  v116 = v26;
                  v103 = v46;
                  v90 = v25;
                  v72 = v16;
                  free(v140);
                  v26 = v116;
                  v46 = v103;
                  v25 = v90;
                  v16 = v72;
                }
                *(_DWORD *)(v46 + 64) = v26;
                *(_BYTE *)(v46 + 43) |= 0x20u;
              }
            }
            v111 = v26;
            v97 = v25;
            v137 = *(_QWORD *)(v16 + 48);
            v83 = v16;
            v138 = *(_DWORD *)(v16 + 56);
            v135 = &v137;
            v136 = 0x2000000003LL;
            v27 = sub_985B10(&v137, (__int64)v139);
            v28 = v97;
            v29 = v83;
            v17 = v27 + v111;
            if ( v97 )
            {
              if ( (*(_BYTE *)(v97 + 43) & 0x20) != 0 )
              {
                v30 = *(_DWORD *)(v97 + 64);
              }
              else
              {
                v31 = *(_QWORD *)(v97 + 8);
                v32 = 0;
                v67 = *(_QWORD *)(v97 + 16);
                if ( v31 )
                {
                  if ( (*(_BYTE *)(v31 + 43) & 0x20) != 0 )
                  {
                    v32 = *(_DWORD *)(v31 + 64);
                  }
                  else
                  {
                    v129 = v97;
                    v119 = v27 + v111;
                    v106 = v83;
                    v93 = v31;
                    v32 = sub_9CEC10(*(_QWORD *)(v31 + 8), *(_QWORD *)(v31 + 16), (__int64 *)(v31 + 48));
                    *(_BYTE *)(v93 + 43) |= 0x20u;
                    v28 = v129;
                    v17 = v119;
                    *(_DWORD *)(v93 + 64) = v32;
                    v29 = v106;
                  }
                }
                v126 = v32;
                v142 = *(_QWORD *)(v28 + 48);
                v112 = v17;
                v143 = *(_DWORD *)(v28 + 56);
                v98 = v29;
                v85 = v28;
                v140 = &v142;
                v141 = 0x2000000003LL;
                v33 = sub_985B10(&v142, (__int64)v144);
                v34 = v85;
                v29 = v98;
                v17 = v112;
                v30 = v126 + v33;
                if ( v67 )
                {
                  if ( (*(_BYTE *)(v67 + 43) & 0x20) != 0 )
                  {
                    v35 = *(_DWORD *)(v67 + 64);
                  }
                  else
                  {
                    v130 = v126 + v33;
                    v122 = v85;
                    v108 = v17;
                    v94 = v29;
                    v35 = sub_9CEC10(*(_QWORD *)(v67 + 8), *(_QWORD *)(v67 + 16), (__int64 *)(v67 + 48));
                    *(_BYTE *)(v67 + 43) |= 0x20u;
                    v30 = v130;
                    v34 = v122;
                    *(_DWORD *)(v67 + 64) = v35;
                    v17 = v108;
                    v29 = v94;
                  }
                  v30 += v35;
                }
                if ( v140 != &v142 )
                {
                  v113 = v30;
                  v99 = v34;
                  v86 = v17;
                  v68 = v29;
                  free(v140);
                  v30 = v113;
                  v34 = v99;
                  v17 = v86;
                  v29 = v68;
                }
                *(_DWORD *)(v34 + 64) = v30;
                *(_BYTE *)(v34 + 43) |= 0x20u;
              }
              v17 += v30;
            }
            if ( v135 != &v137 )
            {
              v84 = v17;
              v66 = v29;
              free(v135);
              v17 = v84;
              v29 = v66;
            }
            *(_DWORD *)(v29 + 64) = v17;
            *(_BYTE *)(v29 + 43) |= 0x20u;
          }
          v10 += v17;
        }
        if ( ptr != v134 )
          free(ptr);
        *((_DWORD *)a1 + 16) = v10;
        *((_BYTE *)a1 + 43) |= 0x20u;
      }
      LODWORD(v140) = v10 & 0xFFFFFFFD;
      v11 = (_QWORD *)sub_9D1470(v6, (int *)&v140);
      v6 = *(_QWORD *)a1;
      *v11 = v7;
    }
  }
  *((_BYTE *)a1 + 43) &= ~0x10u;
  v9 = *(_QWORD **)(v6 + 64);
  v140 = a1;
  if ( v9 == *(_QWORD **)(v6 + 72) )
  {
    sub_9D1130(v6 + 56, v9, (__int64 *)&v140);
  }
  else
  {
    *v9 = a1;
    *(_QWORD *)(v6 + 64) = v9 + 1;
  }
}
