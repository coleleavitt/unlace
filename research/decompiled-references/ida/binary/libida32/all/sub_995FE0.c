__int64 __fastcall sub_995FE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // al
  int v5; // r12d
  __int64 v6; // r9
  __int64 v7; // r13
  _QWORD *v8; // r14
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // r12d
  __int64 v13; // r14
  int v14; // ecx
  void *v15; // r9
  __int64 v16; // r8
  __int64 *v17; // rax
  int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r14
  bool v23; // r13
  bool v24; // al
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  bool v27; // r13
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  int v30; // eax
  int v31; // esi
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rbp
  __int64 v35; // r8
  int v36; // r12d
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // r9
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // r14
  int v46; // eax
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // r14
  __int64 v50; // r9
  int v51; // edx
  __int64 v52; // r12
  int v53; // eax
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // r14
  __int64 v57; // r10
  int v58; // ecx
  int v59; // eax
  __int64 v60; // r10
  __int64 v61; // r9
  int v62; // eax
  __int64 v63; // r14
  __int64 v64; // r10
  int v65; // r9d
  int v66; // eax
  __int64 v67; // r10
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // r14
  __int64 v71; // r10
  int v72; // r9d
  int v73; // eax
  __int64 v74; // r10
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rsi
  __int64 v78; // rdi
  int *v79; // rdx
  int v80; // eax
  int v81; // eax
  __int64 v82; // rsi
  __int64 v83; // rdi
  int *v84; // rdx
  int v85; // eax
  __int64 v86; // rsi
  __int64 v87; // rdi
  int *v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdi
  int *v91; // rdx
  int v92; // eax
  __int64 v93; // [rsp+8h] [rbp-620h]
  __int64 v94; // [rsp+8h] [rbp-620h]
  __int64 v95; // [rsp+8h] [rbp-620h]
  __int64 v96; // [rsp+8h] [rbp-620h]
  __int64 v97; // [rsp+8h] [rbp-620h]
  __int64 v98; // [rsp+8h] [rbp-620h]
  __int64 v99; // [rsp+8h] [rbp-620h]
  __int64 v100; // [rsp+8h] [rbp-620h]
  __int64 v101; // [rsp+8h] [rbp-620h]
  __int64 v102; // [rsp+8h] [rbp-620h]
  __int64 v103; // [rsp+10h] [rbp-618h]
  __int64 v104; // [rsp+10h] [rbp-618h]
  int v105; // [rsp+10h] [rbp-618h]
  __int64 v106; // [rsp+10h] [rbp-618h]
  __int64 v107; // [rsp+10h] [rbp-618h]
  __int64 v108; // [rsp+10h] [rbp-618h]
  __int64 v109; // [rsp+10h] [rbp-618h]
  __int64 v110; // [rsp+10h] [rbp-618h]
  __int64 v111; // [rsp+10h] [rbp-618h]
  __int64 v112; // [rsp+10h] [rbp-618h]
  int v113; // [rsp+10h] [rbp-618h]
  __int64 v114; // [rsp+10h] [rbp-618h]
  __int64 v115; // [rsp+10h] [rbp-618h]
  __int64 v116; // [rsp+10h] [rbp-618h]
  __int64 v117; // [rsp+10h] [rbp-618h]
  int v118; // [rsp+10h] [rbp-618h]
  __int64 v119; // [rsp+10h] [rbp-618h]
  __int64 v120; // [rsp+10h] [rbp-618h]
  __int64 v121; // [rsp+10h] [rbp-618h]
  __int64 v122; // [rsp+10h] [rbp-618h]
  int v123; // [rsp+18h] [rbp-610h]
  __int64 v124; // [rsp+18h] [rbp-610h]
  __int64 v125; // [rsp+18h] [rbp-610h]
  __int64 v126; // [rsp+18h] [rbp-610h]
  __int64 v127; // [rsp+18h] [rbp-610h]
  __int64 v128; // [rsp+18h] [rbp-610h]
  __int64 v129; // [rsp+18h] [rbp-610h]
  int v130; // [rsp+18h] [rbp-610h]
  __int64 v131; // [rsp+18h] [rbp-610h]
  __int64 v132; // [rsp+18h] [rbp-610h]
  __int64 v133; // [rsp+18h] [rbp-610h]
  int v134; // [rsp+18h] [rbp-610h]
  __int64 v135; // [rsp+18h] [rbp-610h]
  __int64 v136; // [rsp+18h] [rbp-610h]
  __int64 v137; // [rsp+18h] [rbp-610h]
  __int64 v138; // [rsp+18h] [rbp-610h]
  int v139; // [rsp+20h] [rbp-608h]
  __int64 v140; // [rsp+20h] [rbp-608h]
  int v141; // [rsp+20h] [rbp-608h]
  int v142; // [rsp+20h] [rbp-608h]
  int v143; // [rsp+20h] [rbp-608h]
  __int64 v144; // [rsp+20h] [rbp-608h]
  int v145; // [rsp+20h] [rbp-608h]
  __int64 v146; // [rsp+20h] [rbp-608h]
  __int64 v147; // [rsp+20h] [rbp-608h]
  __int64 v148; // [rsp+20h] [rbp-608h]
  __int64 v149; // [rsp+20h] [rbp-608h]
  __int64 v150; // [rsp+28h] [rbp-600h]
  __int64 v151; // [rsp+28h] [rbp-600h]
  __int64 v152; // [rsp+28h] [rbp-600h]
  int v153; // [rsp+28h] [rbp-600h]
  int v154; // [rsp+28h] [rbp-600h]
  int v155; // [rsp+28h] [rbp-600h]
  int v156; // [rsp+30h] [rbp-5F8h]
  int v157; // [rsp+30h] [rbp-5F8h]
  __int64 v158; // [rsp+38h] [rbp-5F0h]
  void *v159; // [rsp+40h] [rbp-5E8h]
  size_t v160; // [rsp+48h] [rbp-5E0h]
  __int64 *v161; // [rsp+60h] [rbp-5C8h]
  _QWORD *v162; // [rsp+68h] [rbp-5C0h]
  void *s1; // [rsp+70h] [rbp-5B8h] BYREF
  __int64 v164; // [rsp+78h] [rbp-5B0h]
  _BYTE v165[160]; // [rsp+80h] [rbp-5A8h] BYREF
  void *v166; // [rsp+120h] [rbp-508h] BYREF
  __int64 v167; // [rsp+128h] [rbp-500h]
  _BYTE v168[160]; // [rsp+130h] [rbp-4F8h] BYREF
  void *ptr; // [rsp+1D0h] [rbp-458h] BYREF
  __int64 v170; // [rsp+1D8h] [rbp-450h]
  _BYTE v171[160]; // [rsp+1E0h] [rbp-448h] BYREF
  void *s2; // [rsp+280h] [rbp-3A8h]
  __int64 v173; // [rsp+288h] [rbp-3A0h]
  __int64 v174; // [rsp+290h] [rbp-398h] BYREF
  void *v175; // [rsp+330h] [rbp-2F8h] BYREF
  __int64 v176; // [rsp+338h] [rbp-2F0h]
  _BYTE v177[160]; // [rsp+340h] [rbp-2E8h] BYREF
  void *v178; // [rsp+3E0h] [rbp-248h] BYREF
  __int64 v179; // [rsp+3E8h] [rbp-240h]
  _DWORD v180[40]; // [rsp+3F0h] [rbp-238h] BYREF
  void *v181; // [rsp+490h] [rbp-198h] BYREF
  __int64 v182; // [rsp+498h] [rbp-190h]
  _BYTE v183[160]; // [rsp+4A0h] [rbp-188h] BYREF
  void *v184; // [rsp+540h] [rbp-E8h] BYREF
  __int64 v185; // [rsp+548h] [rbp-E0h]
  _BYTE v186[216]; // [rsp+550h] [rbp-D8h] BYREF

  v2 = a2;
  if ( !a2 )
    return v2;
  v3 = *(_BYTE *)(a2 + 43);
  if ( (v3 & 0x40) != 0 )
    return v2;
  if ( (v3 & 0x20) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 64);
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = *(_QWORD *)(a2 + 16);
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 43) & 0x20) != 0 )
      {
        v12 = *(_DWORD *)(v10 + 64);
      }
      else
      {
        v34 = *(_QWORD *)(v10 + 8);
        v35 = *(_QWORD *)(v10 + 16);
        v36 = 0;
        if ( v34 )
        {
          if ( (*(_BYTE *)(v34 + 43) & 0x20) != 0 )
          {
            v36 = *(_DWORD *)(v34 + 64);
          }
          else
          {
            v49 = *(_QWORD *)(v34 + 8);
            v50 = *(_QWORD *)(v34 + 16);
            v51 = 0;
            if ( v49 )
            {
              if ( (*(_BYTE *)(v49 + 43) & 0x20) != 0 )
              {
                v51 = *(_DWORD *)(v49 + 64);
              }
              else
              {
                v135 = *(_QWORD *)(v34 + 16);
                v120 = *(_QWORD *)(v10 + 16);
                v101 = *(_QWORD *)(a2 + 8);
                v85 = sub_9934C0(*(_QWORD *)(v49 + 8), *(_QWORD *)(v49 + 16), (int *)(v49 + 48));
                *(_BYTE *)(v49 + 43) |= 0x20u;
                v50 = v135;
                v51 = v85;
                v35 = v120;
                v10 = v101;
                *(_DWORD *)(v49 + 64) = v85;
              }
            }
            v139 = v51;
            v124 = v50;
            v184 = v186;
            v185 = 0x2000000000LL;
            v106 = v35;
            v95 = v10;
            sub_993300((__int64)&v184, *(_DWORD *)(v34 + 48));
            v52 = *(_QWORD *)(v34 + 56);
            sub_993300((__int64)&v184, v52);
            sub_993300((__int64)&v184, SHIDWORD(v52));
            v53 = sub_961DD0(v184, (__int64)v184 + 4 * (unsigned int)v185);
            v54 = v124;
            v10 = v95;
            v35 = v106;
            v36 = v139 + v53;
            if ( v124 )
            {
              if ( (*(_BYTE *)(v124 + 43) & 0x20) != 0 )
              {
                v55 = *(_DWORD *)(v124 + 64);
              }
              else
              {
                v86 = *(_QWORD *)(v124 + 16);
                v87 = *(_QWORD *)(v124 + 8);
                v88 = (int *)(v124 + 48);
                v136 = v106;
                v121 = v95;
                v102 = v54;
                v55 = sub_9934C0(v87, v86, v88);
                *(_BYTE *)(v102 + 43) |= 0x20u;
                v35 = v136;
                *(_DWORD *)(v102 + 64) = v55;
                v10 = v121;
              }
              v36 += v55;
            }
            if ( v184 != v186 )
            {
              v107 = v35;
              v96 = v10;
              free(v184);
              v35 = v107;
              v10 = v96;
            }
            *(_DWORD *)(v34 + 64) = v36;
            *(_BYTE *)(v34 + 43) |= 0x20u;
          }
        }
        v103 = v35;
        v93 = v10;
        v181 = v183;
        v182 = 0x2000000000LL;
        sub_993300((__int64)&v181, *(_DWORD *)(v10 + 48));
        v37 = *(_QWORD *)(v93 + 56);
        sub_993300((__int64)&v181, v37);
        sub_993300((__int64)&v181, SHIDWORD(v37));
        v38 = sub_961DD0(v181, (__int64)v181 + 4 * (unsigned int)v182);
        v39 = v103;
        v40 = v93;
        v12 = v38 + v36;
        if ( v103 )
        {
          if ( (*(_BYTE *)(v103 + 43) & 0x20) != 0 )
          {
            v41 = *(_DWORD *)(v103 + 64);
          }
          else
          {
            v70 = *(_QWORD *)(v103 + 8);
            v71 = *(_QWORD *)(v103 + 16);
            v72 = 0;
            if ( v70 )
            {
              if ( (*(_BYTE *)(v70 + 43) & 0x20) != 0 )
              {
                v72 = *(_DWORD *)(v70 + 64);
              }
              else
              {
                v138 = *(_QWORD *)(v103 + 16);
                v92 = sub_9934C0(*(_QWORD *)(v70 + 8), *(_QWORD *)(v70 + 16), (int *)(v70 + 48));
                *(_BYTE *)(v70 + 43) |= 0x20u;
                v71 = v138;
                v72 = v92;
                *(_DWORD *)(v70 + 64) = v92;
                v39 = v103;
                v40 = v93;
              }
            }
            v153 = v72;
            v144 = v71;
            v184 = v186;
            v185 = 0x2000000000LL;
            v129 = v40;
            v97 = v39;
            sub_993300((__int64)&v184, *(_DWORD *)(v39 + 48));
            v114 = v97;
            v98 = *(_QWORD *)(v97 + 56);
            sub_993300((__int64)&v184, v98);
            sub_993300((__int64)&v184, SHIDWORD(v98));
            v73 = sub_961DD0(v184, (__int64)v184 + 4 * (unsigned int)v185);
            v74 = v144;
            v75 = v114;
            v40 = v129;
            v41 = v73 + v153;
            if ( v144 )
            {
              if ( (*(_BYTE *)(v144 + 43) & 0x20) != 0 )
              {
                v76 = *(_DWORD *)(v144 + 64);
              }
              else
              {
                v77 = *(_QWORD *)(v144 + 16);
                v78 = *(_QWORD *)(v144 + 8);
                v79 = (int *)(v144 + 48);
                v145 = v73 + v153;
                v131 = v114;
                v116 = v40;
                v100 = v74;
                v76 = sub_9934C0(v78, v77, v79);
                *(_BYTE *)(v100 + 43) |= 0x20u;
                v41 = v145;
                v75 = v131;
                v40 = v116;
                *(_DWORD *)(v100 + 64) = v76;
              }
              v41 += v76;
            }
            if ( v184 != v186 )
            {
              v130 = v41;
              v115 = v75;
              v99 = v40;
              free(v184);
              v41 = v130;
              v75 = v115;
              v40 = v99;
            }
            *(_DWORD *)(v75 + 64) = v41;
            *(_BYTE *)(v75 + 43) |= 0x20u;
          }
          v12 += v41;
        }
        if ( v181 != v183 )
        {
          v94 = v40;
          free(v181);
          v40 = v94;
        }
        *(_DWORD *)(v40 + 64) = v12;
        *(_BYTE *)(v40 + 43) |= 0x20u;
      }
    }
    else
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)(v2 + 56);
    v178 = v180;
    v180[0] = *(_DWORD *)(v2 + 48);
    v179 = 0x2000000001LL;
    sub_993300((__int64)&v178, v13);
    sub_993300((__int64)&v178, SHIDWORD(v13));
    v5 = sub_961DD0(v178, (__int64)v178 + 4 * (unsigned int)v179) + v12;
    if ( v11 )
    {
      if ( (*(_BYTE *)(v11 + 43) & 0x20) != 0 )
      {
        v14 = *(_DWORD *)(v11 + 64);
      }
      else
      {
        v42 = *(_QWORD *)(v11 + 8);
        v43 = *(_QWORD *)(v11 + 16);
        v44 = 0;
        if ( v42 )
        {
          if ( (*(_BYTE *)(v42 + 43) & 0x20) != 0 )
          {
            v44 = *(_DWORD *)(v42 + 64);
          }
          else
          {
            v56 = *(_QWORD *)(v42 + 8);
            v57 = *(_QWORD *)(v42 + 16);
            v58 = 0;
            if ( v56 )
            {
              if ( (*(_BYTE *)(v56 + 43) & 0x20) != 0 )
              {
                v58 = *(_DWORD *)(v56 + 64);
              }
              else
              {
                v146 = *(_QWORD *)(v42 + 16);
                v132 = *(_QWORD *)(v11 + 8);
                v117 = *(_QWORD *)(v11 + 16);
                v80 = sub_9934C0(*(_QWORD *)(v56 + 8), *(_QWORD *)(v56 + 16), (int *)(v56 + 48));
                *(_BYTE *)(v56 + 43) |= 0x20u;
                v57 = v146;
                v58 = v80;
                v42 = v132;
                v43 = v117;
                *(_DWORD *)(v56 + 64) = v80;
              }
            }
            v156 = v58;
            v151 = v57;
            v184 = v186;
            v185 = 0x2000000000LL;
            v140 = v43;
            v108 = v42;
            sub_993300((__int64)&v184, *(_DWORD *)(v42 + 48));
            v125 = v108;
            v109 = *(_QWORD *)(v108 + 56);
            sub_993300((__int64)&v184, v109);
            sub_993300((__int64)&v184, SHIDWORD(v109));
            v59 = sub_961DD0(v184, (__int64)v184 + 4 * (unsigned int)v185);
            v60 = v151;
            v61 = v125;
            v43 = v140;
            v44 = v59 + v156;
            if ( v151 )
            {
              if ( (*(_BYTE *)(v151 + 43) & 0x20) != 0 )
              {
                v62 = *(_DWORD *)(v151 + 64);
              }
              else
              {
                v89 = *(_QWORD *)(v151 + 16);
                v90 = *(_QWORD *)(v151 + 8);
                v91 = (int *)(v151 + 48);
                v155 = v59 + v156;
                v149 = v125;
                v137 = v43;
                v122 = v60;
                v62 = sub_9934C0(v90, v89, v91);
                *(_BYTE *)(v122 + 43) |= 0x20u;
                v44 = v155;
                v61 = v149;
                v43 = v137;
                *(_DWORD *)(v122 + 64) = v62;
              }
              v44 += v62;
            }
            if ( v184 != v186 )
            {
              v141 = v44;
              v126 = v61;
              v110 = v43;
              free(v184);
              v44 = v141;
              v61 = v126;
              v43 = v110;
            }
            *(_DWORD *)(v61 + 64) = v44;
            *(_BYTE *)(v61 + 43) |= 0x20u;
          }
        }
        v123 = v44;
        v181 = v183;
        v182 = 0x2000000000LL;
        v104 = v43;
        sub_993300((__int64)&v181, *(_DWORD *)(v11 + 48));
        v45 = *(_QWORD *)(v11 + 56);
        sub_993300((__int64)&v181, v45);
        sub_993300((__int64)&v181, SHIDWORD(v45));
        v46 = sub_961DD0(v181, (__int64)v181 + 4 * (unsigned int)v182);
        v47 = v104;
        v14 = v46 + v123;
        if ( v104 )
        {
          if ( (*(_BYTE *)(v104 + 43) & 0x20) != 0 )
          {
            v48 = *(_DWORD *)(v104 + 64);
          }
          else
          {
            v63 = *(_QWORD *)(v104 + 8);
            v64 = *(_QWORD *)(v104 + 16);
            v65 = 0;
            if ( v63 )
            {
              if ( (*(_BYTE *)(v63 + 43) & 0x20) != 0 )
              {
                v65 = *(_DWORD *)(v63 + 64);
              }
              else
              {
                v118 = v46 + v123;
                v147 = v64;
                v133 = v47;
                v81 = sub_9934C0(*(_QWORD *)(v63 + 8), *(_QWORD *)(v63 + 16), (int *)(v63 + 48));
                *(_BYTE *)(v63 + 43) |= 0x20u;
                v64 = v147;
                v65 = v81;
                v47 = v133;
                v14 = v118;
                *(_DWORD *)(v63 + 64) = v81;
              }
            }
            v157 = v65;
            v152 = v64;
            v184 = v186;
            v185 = 0x2000000000LL;
            v142 = v14;
            v111 = v47;
            sub_993300((__int64)&v184, *(_DWORD *)(v47 + 48));
            v127 = v111;
            v112 = *(_QWORD *)(v111 + 56);
            sub_993300((__int64)&v184, v112);
            sub_993300((__int64)&v184, SHIDWORD(v112));
            v66 = sub_961DD0(v184, (__int64)v184 + 4 * (unsigned int)v185);
            v67 = v152;
            v68 = v127;
            v14 = v142;
            v48 = v66 + v157;
            if ( v152 )
            {
              if ( (*(_BYTE *)(v152 + 43) & 0x20) != 0 )
              {
                v69 = *(_DWORD *)(v152 + 64);
              }
              else
              {
                v82 = *(_QWORD *)(v152 + 16);
                v83 = *(_QWORD *)(v152 + 8);
                v84 = (int *)(v152 + 48);
                v134 = v142;
                v154 = v66 + v157;
                v148 = v68;
                v119 = v67;
                v69 = sub_9934C0(v83, v82, v84);
                *(_BYTE *)(v119 + 43) |= 0x20u;
                v48 = v154;
                v68 = v148;
                v14 = v134;
                *(_DWORD *)(v119 + 64) = v69;
              }
              v48 += v69;
            }
            if ( v184 != v186 )
            {
              v143 = v48;
              v128 = v68;
              v113 = v14;
              free(v184);
              v48 = v143;
              v68 = v128;
              v14 = v113;
            }
            *(_DWORD *)(v68 + 64) = v48;
            *(_BYTE *)(v68 + 43) |= 0x20u;
          }
          v14 += v48;
        }
        if ( v181 != v183 )
        {
          v105 = v14;
          free(v181);
          v14 = v105;
        }
        *(_DWORD *)(v11 + 64) = v14;
        *(_BYTE *)(v11 + 43) |= 0x20u;
      }
      v5 += v14;
    }
    if ( v178 != v180 )
      free(v178);
    *(_DWORD *)(v2 + 64) = v5;
    *(_BYTE *)(v2 + 43) |= 0x20u;
  }
  LODWORD(v178) = v5 & 0xFFFFFFFD;
  if ( !(unsigned __int8)sub_991A90((__int64 *)a1, (int *)&v178, &v181) )
  {
    v28 = *(unsigned int *)(a1 + 16);
    v29 = v181;
    v30 = *(_DWORD *)(a1 + 8) + 1;
    v31 = 2 * v28;
    v32 = (unsigned int)(4 * v30);
    v184 = v181;
    if ( (unsigned int)v32 < 3 * (int)v28 )
    {
      if ( (int)v28 - *(_DWORD *)(a1 + 12) - v30 > (unsigned int)v28 >> 3 )
      {
LABEL_65:
        *(_DWORD *)(a1 + 8) = v30;
        if ( *(_DWORD *)v29 != -1 )
          --*(_DWORD *)(a1 + 12);
        v33 = (int)v178;
        v29[1] = 0;
        *(_DWORD *)v29 = v33;
        v17 = v29 + 1;
        goto LABEL_68;
      }
      v31 = v28;
    }
    sub_9921B0(a1, v31, (__int64)v181, v28, v32, v6);
    sub_991A90((__int64 *)a1, (int *)&v178, &v184);
    v29 = v184;
    v30 = *(_DWORD *)(a1 + 8) + 1;
    goto LABEL_65;
  }
  v162 = v181;
  v161 = (__int64 *)((char *)v181 + 8);
  v150 = *((_QWORD *)v181 + 1);
  if ( !v150 )
  {
    v17 = (__int64 *)((char *)v181 + 8);
LABEL_68:
    *v17 = v2;
    *(_BYTE *)(v2 + 43) |= 0x40u;
    return v2;
  }
LABEL_7:
  v7 = 0;
  s1 = v165;
  v164 = 0x1400000000LL;
  sub_995F50((__int64)&s1, v150);
  sub_992C00((__int64 *)&s1);
  v167 = 0x1400000000LL;
  v170 = 0x1400000000LL;
  v166 = v168;
  ptr = v171;
  sub_995F50((__int64)&ptr, v2);
  sub_992C00((__int64 *)&ptr);
  v173 = 0x1400000000LL;
  s2 = &v174;
  while ( 1 )
  {
    v8 = ptr;
    v158 = (unsigned int)v170;
    if ( (unsigned int)v170 == v7 && (!(8 * v7) || !memcmp(ptr, s2, 8 * v7)) )
      break;
    v15 = s1;
    v16 = 8LL * (unsigned int)v164;
    if ( (unsigned int)v164 == (unsigned __int64)(unsigned int)v167 )
    {
      if ( !v16 )
        goto LABEL_34;
      v160 = 8LL * (unsigned int)v164;
      v159 = s1;
      v18 = memcmp(s1, v166, v160);
      v15 = v159;
      v16 = v160;
      if ( !v18 )
        goto LABEL_34;
    }
    v19 = v8[v158 - 1] & 0xFFFFFFFFFFFFFFFCLL;
    v20 = *(_QWORD *)((_BYTE *)v15 + v16 - 8) & 0xFFFFFFFFFFFFFFFCLL;
    if ( *(_DWORD *)(v19 + 48) != *(_DWORD *)(v20 + 48) )
      goto LABEL_34;
    v21 = *(_QWORD *)(v19 + 56);
    v22 = *(_QWORD *)(v20 + 56);
    if ( v21 && v22 )
    {
      if ( v22 == v21 )
        goto LABEL_56;
      v176 = 0x1400000000LL;
      v175 = v177;
      sub_995F50((__int64)&v175, v21);
      sub_992AC0((__int64 *)&v175);
      v179 = 0x1400000000LL;
      v182 = 0x1400000000LL;
      v178 = v180;
      v181 = v183;
      sub_995F50((__int64)&v181, v22);
      sub_992AC0((__int64 *)&v181);
      v185 = 0x1400000000LL;
      v184 = v186;
      while ( 1 )
      {
        v23 = sub_995FA0((__int64)&v175, (__int64)&v178);
        v24 = sub_995FA0((__int64)&v181, (__int64)&v184);
        if ( v23 )
        {
LABEL_58:
          v27 = v24;
          goto LABEL_59;
        }
        if ( v24 )
          break;
        v25 = *((_QWORD *)v175 + (unsigned int)v176 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        v26 = *((_QWORD *)v181 + (unsigned int)v182 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        if ( v25 == v26 )
        {
          sub_992D40((__int64 *)&v175);
          sub_992D40((__int64 *)&v181);
        }
        else
        {
          if ( *(_DWORD *)(v25 + 44) != *(_DWORD *)(v26 + 44) )
            goto LABEL_58;
          sub_992AC0((__int64 *)&v175);
          sub_992AC0((__int64 *)&v181);
        }
      }
      v27 = 0;
LABEL_59:
      if ( v181 != v183 )
        free(v181);
      if ( v175 != v177 )
        free(v175);
    }
    else
    {
      v27 = v22 == v21;
    }
    if ( !v27 )
    {
      v8 = ptr;
LABEL_34:
      if ( v8 != (_QWORD *)v171 )
        free(v8);
LABEL_36:
      if ( v166 != v168 )
        free(v166);
      if ( s1 != v165 )
        free(s1);
      v150 = *(_QWORD *)(v150 + 32);
      if ( !v150 )
      {
        *(_QWORD *)(v162[1] + 24LL) = v2;
        *(_QWORD *)(v2 + 32) = v162[1];
        v17 = v161;
        goto LABEL_68;
      }
      goto LABEL_7;
    }
    v7 = (unsigned int)v173;
LABEL_56:
    sub_992C00((__int64 *)&ptr);
    sub_992C00((__int64 *)&s1);
  }
  if ( v8 != (_QWORD *)v171 )
    free(v8);
  if ( !sub_995FA0((__int64)&s1, (__int64)&v166) )
    goto LABEL_36;
  if ( !*(_DWORD *)(v2 + 68) )
    sub_994040((void *)v2);
  if ( v166 != v168 )
    free(v166);
  if ( s1 != v165 )
    free(s1);
  return v150;
}

