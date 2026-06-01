int __fastcall sub_22432B0(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // r12
  const char ***v4; // r14
  __int64 v5; // r13
  __int64 v6; // r15
  const char ***v7; // rax
  const char ***v8; // rax
  _WORD *v9; // rdx
  __int64 *v10; // rbp
  __int64 *v11; // r13
  const char *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // r12
  size_t v15; // rax
  _BYTE *v16; // rdi
  const char ***v17; // rsi
  size_t v18; // rcx
  unsigned __int64 v19; // rax
  size_t v20; // rax
  _BYTE *v21; // rdi
  const char ***v22; // rsi
  size_t v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  size_t v27; // rax
  __int64 v28; // rdx
  _WORD *v29; // rcx
  _WORD *v30; // rsi
  unsigned __int64 v31; // rdi
  char *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  const char ***v43; // r15
  __int64 v44; // rax
  __int64 v45; // r13
  _BYTE *v46; // rax
  __int64 v47; // r9
  const char ***v48; // r13
  _BYTE *v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  const char ***v55; // r13
  __int64 v56; // rdx
  const char ***v57; // r13
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r9
  const char ***v65; // r13
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  const char ***v70; // r13
  __int64 v71; // rdx
  const char ***v72; // r13
  __int64 v73; // rax
  const char ***v74; // r15
  __int64 v75; // r13
  void *v76; // rax
  void *v77; // rax
  __int64 v78; // r9
  void *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  const char ***v84; // r13
  __int64 v85; // rdx
  const char ***v86; // r13
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r9
  const char ***v92; // r13
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // rcx
  const char ***v97; // r13
  __int64 v98; // rdx
  const char ***v99; // r13
  const char ***src; // [rsp+0h] [rbp-A8h]
  const char ***v102; // [rsp+8h] [rbp-A0h]
  const char ***v103; // [rsp+8h] [rbp-A0h]
  pthread_mutex_t *mutex; // [rsp+10h] [rbp-98h]
  const char ***v105; // [rsp+18h] [rbp-90h]
  const char ***v106; // [rsp+18h] [rbp-90h]
  const char ***v107; // [rsp+18h] [rbp-90h]
  const char ***v108; // [rsp+18h] [rbp-90h]
  __int64 v109; // [rsp+20h] [rbp-88h]
  const char ***v110; // [rsp+28h] [rbp-80h]
  const char ***v111; // [rsp+28h] [rbp-80h]
  const char ***v112; // [rsp+28h] [rbp-80h]
  const char ***v113; // [rsp+28h] [rbp-80h]
  _BYTE *v114; // [rsp+28h] [rbp-80h]
  _BYTE *v115; // [rsp+30h] [rbp-78h]
  void *v116; // [rsp+30h] [rbp-78h]
  const char ***v117; // [rsp+30h] [rbp-78h]
  const char ***v118; // [rsp+30h] [rbp-78h]
  const char ***v119; // [rsp+30h] [rbp-78h]
  const char ***v120; // [rsp+30h] [rbp-78h]
  void *v121; // [rsp+30h] [rbp-78h]
  __int64 v122; // [rsp+38h] [rbp-70h]
  __int64 v123; // [rsp+38h] [rbp-70h]
  __int64 v124; // [rsp+40h] [rbp-68h]
  __int64 v125; // [rsp+40h] [rbp-68h]
  __int64 v126; // [rsp+40h] [rbp-68h]
  __int64 v127; // [rsp+48h] [rbp-60h]
  __int64 v128; // [rsp+48h] [rbp-60h]
  __int64 v129; // [rsp+48h] [rbp-60h]
  __int64 v130; // [rsp+48h] [rbp-60h]
  __int64 v131; // [rsp+48h] [rbp-60h]
  __int64 v132; // [rsp+50h] [rbp-58h]
  __int64 v133; // [rsp+50h] [rbp-58h]
  const char ***v134; // [rsp+50h] [rbp-58h]
  __int64 v135; // [rsp+50h] [rbp-58h]
  __int64 v136; // [rsp+50h] [rbp-58h]
  const char ***v137; // [rsp+50h] [rbp-58h]
  void *v138; // [rsp+50h] [rbp-58h]
  __int64 v139; // [rsp+50h] [rbp-58h]
  __int64 v140; // [rsp+50h] [rbp-58h]
  void *v141; // [rsp+50h] [rbp-58h]
  void *v142; // [rsp+50h] [rbp-58h]
  __int64 v143; // [rsp+50h] [rbp-58h]
  void *v144; // [rsp+50h] [rbp-58h]
  const char ***v145; // [rsp+58h] [rbp-50h]
  __int64 v146; // [rsp+58h] [rbp-50h]
  _BYTE *v147; // [rsp+58h] [rbp-50h]
  __int64 v148; // [rsp+58h] [rbp-50h]
  __int64 v149; // [rsp+58h] [rbp-50h]
  __int64 v150; // [rsp+58h] [rbp-50h]
  __int64 v151; // [rsp+58h] [rbp-50h]
  const char ***v152; // [rsp+58h] [rbp-50h]
  __int64 v153; // [rsp+58h] [rbp-50h]
  __int64 v154; // [rsp+58h] [rbp-50h]
  _BYTE *v155; // [rsp+58h] [rbp-50h]
  _BYTE *v156; // [rsp+58h] [rbp-50h]
  __int64 v157; // [rsp+58h] [rbp-50h]
  void *v158; // [rsp+58h] [rbp-50h]
  __int64 v159; // [rsp+60h] [rbp-48h]
  __int64 v160; // [rsp+60h] [rbp-48h]
  __int64 v161; // [rsp+60h] [rbp-48h]
  __int64 v162; // [rsp+60h] [rbp-48h]
  __int64 v163; // [rsp+60h] [rbp-48h]
  __int64 v164; // [rsp+60h] [rbp-48h]
  __int64 v165; // [rsp+68h] [rbp-40h]
  _BYTE *v166; // [rsp+68h] [rbp-40h]
  __int64 v167; // [rsp+68h] [rbp-40h]
  __int64 v168; // [rsp+68h] [rbp-40h]
  void *v169; // [rsp+68h] [rbp-40h]
  __int64 v170; // [rsp+68h] [rbp-40h]
  __int64 v171; // [rsp+68h] [rbp-40h]

  if ( !qword_2D0AB70 )
    sub_2230020((__int64 *)&qword_2D0AB70, (__int64 (*)(void))sub_20C09B0, (__int64)sub_20C0990);
  mutex = qword_2D0AB70;
  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock(qword_2D0AB70);
    if ( v2 )
      std::__throw_system_error(v2);
  }
  if ( !qword_2D0AB90 )
    sub_2230020(&qword_2D0AB90, sub_2240340, (__int64)sub_22411F0);
  v3 = qword_2D0AB90;
  v4 = *(const char ****)qword_2D0AB90;
  src = *(const char ****)(qword_2D0AB90 + 8);
  v5 = (__int64)src - *(_QWORD *)qword_2D0AB90;
  v6 = v5 >> 3;
  if ( v5 > 0x7FFFFFFFFFFFFFF8LL )
  {
    v6 = 0xFFFFFFFFFFFFFFFLL;
    goto LABEL_11;
  }
  if ( v5 <= 0 )
  {
LABEL_54:
    if ( v5 <= 112 )
    {
      sub_2240A50(v4, src);
      v8 = nullptr;
    }
    else
    {
      v41 = 8 * ((v5 >> 3) / 2);
      v124 = v41;
      v103 = &v4[(unsigned __int64)v41 / 8];
      v109 = v41 >> 3;
      if ( v41 <= 112 )
      {
        sub_2240A50(v4, v103);
      }
      else
      {
        v42 = (v41 >> 3) / 2;
        v115 = (_BYTE *)(v42 * 8);
        v43 = &v4[v42];
        v122 = (v42 * 8) >> 3;
        if ( v42 <= 14 )
        {
          sub_2240A50(v4, &v4[v42]);
        }
        else
        {
          v44 = 8 * (((v42 * 8) >> 3) / 2);
          v105 = &v4[(unsigned __int64)v44 / 8];
          v127 = v44 >> 3;
          if ( v44 <= 112 )
          {
            v114 = (_BYTE *)v44;
            sub_2240A50(v4, v105);
            v50 = v114;
          }
          else
          {
            v45 = 8 * ((v44 >> 3) / 2);
            v110 = &v4[(unsigned __int64)v45 / 8];
            v132 = v45 >> 3;
            if ( v45 <= 112 )
            {
              v155 = (_BYTE *)v44;
              sub_2240A50(v4, &v4[(unsigned __int64)v45 / 8]);
              v46 = v155;
            }
            else
            {
              v165 = v44;
              v145 = &v4[v132 / 2];
              sub_2240B70(v4, v145);
              sub_2240B70(v145, &v4[(unsigned __int64)v45 / 8]);
              sub_22408B0(
                v4,
                v145,
                (__int64)&v4[(unsigned __int64)v45 / 8],
                (8 * (v132 / 2)) >> 3,
                (v45 - 8 * (v132 / 2)) >> 3);
              v46 = (_BYTE *)v165;
            }
            v47 = (__int64)&v46[-v45] >> 3;
            if ( (__int64)&v46[-v45] <= 112 )
            {
              v159 = (__int64)&v46[-v45] >> 3;
              v156 = v46;
              sub_2240A50(v110, v105);
              v49 = v156;
            }
            else
            {
              v166 = v46;
              v159 = (__int64)&v46[-v45] >> 3;
              v48 = &v110[v47 / 2];
              v146 = 8 * (v47 / 2);
              sub_2240B70(v110, v48);
              sub_2240B70(v48, v105);
              sub_22408B0(v110, v48, (__int64)v105, v146 >> 3, v105 - v48);
              v49 = v166;
            }
            v147 = v49;
            sub_22408B0(v4, v110, (__int64)v105, v132, v159);
            v50 = v147;
          }
          v51 = v115 - v50;
          v52 = v51 >> 3;
          v133 = v51 >> 3;
          if ( v51 <= 112 )
          {
            sub_2240A50(v105, v43);
          }
          else
          {
            v53 = v52 / 2;
            v111 = &v105[v53];
            v148 = (v53 * 8) >> 3;
            if ( v53 <= 14 )
            {
              sub_2240A50(v105, v111);
            }
            else
            {
              v167 = 8 * (v52 / 2);
              v54 = (v167 >> 3) / 2;
              v55 = &v105[v54];
              sub_2240B70(v105, &v105[v54]);
              sub_2240B70(v55, v111);
              sub_22408B0(v105, v55, (__int64)v111, (8 * ((v167 >> 3) / 2)) >> 3, (v167 - 8 * ((v167 >> 3) / 2)) >> 3);
            }
            if ( (char *)v43 - (char *)v111 <= 112 )
            {
              sub_2240A50(v111, v43);
            }
            else
            {
              v56 = (v43 - v111) / 2;
              v57 = &v111[v56];
              sub_2240B70(v111, &v111[v56]);
              sub_2240B70(v57, v43);
              sub_22408B0(v111, v57, (__int64)v43, (8 * ((v43 - v111) / 2)) >> 3, v43 - v57);
            }
            sub_22408B0(v105, v111, (__int64)v43, v148, v43 - v111);
          }
          sub_22408B0(v4, v105, (__int64)v43, v127, v133);
        }
        v58 = v124 - (_QWORD)v115;
        v59 = (v124 - (__int64)v115) >> 3;
        v116 = (void *)v59;
        if ( v58 <= 112 )
        {
          sub_2240A50(v43, v103);
        }
        else
        {
          v60 = 8 * (v59 / 2);
          v106 = &v43[(unsigned __int64)v60 / 8];
          v125 = v60 >> 3;
          if ( v60 <= 112 )
          {
            sub_2240A50(v43, v106);
          }
          else
          {
            v61 = (v60 >> 3) / 2;
            v112 = &v43[v61];
            v128 = (v61 * 8) >> 3;
            if ( v61 <= 14 )
            {
              v144 = (void *)v60;
              sub_2240A50(v43, &v43[v61]);
              v62 = (__int64)v144;
            }
            else
            {
              v160 = v60;
              v134 = &v43[v128 / 2];
              sub_2240B70(v43, v134);
              sub_2240B70(v134, &v43[v61]);
              sub_22408B0(v43, v134, (__int64)&v43[v61], (8 * (v128 / 2)) >> 3, (v61 * 8 - 8 * (v128 / 2)) >> 3);
              v62 = v160;
            }
            v63 = v62 - v61 * 8;
            v64 = v63 >> 3;
            if ( v63 <= 112 )
            {
              v143 = v63 >> 3;
              sub_2240A50(v112, v106);
              v66 = v143;
            }
            else
            {
              v149 = v63 >> 3;
              v65 = &v112[v64 / 2];
              v135 = 8 * (v64 / 2);
              sub_2240B70(v112, v65);
              sub_2240B70(v65, v106);
              sub_22408B0(v112, v65, (__int64)v106, v135 >> 3, v106 - v65);
              v66 = v149;
            }
            sub_22408B0(v43, v112, (__int64)v106, v128, v66);
          }
          v67 = v103 - v106;
          if ( (char *)v103 - (char *)v106 <= 112 )
          {
            sub_2240A50(v106, v103);
          }
          else
          {
            v68 = v67 / 2;
            v113 = &v106[v68];
            v136 = (v68 * 8) >> 3;
            if ( v68 <= 14 )
            {
              sub_2240A50(v106, v113);
            }
            else
            {
              v161 = 8 * (v67 / 2);
              v69 = (v161 >> 3) / 2;
              v70 = &v106[v69];
              sub_2240B70(v106, &v106[v69]);
              sub_2240B70(v70, v113);
              sub_22408B0(v106, v70, (__int64)v113, (8 * ((v161 >> 3) / 2)) >> 3, (v161 - 8 * ((v161 >> 3) / 2)) >> 3);
            }
            if ( (char *)v103 - (char *)v113 <= 112 )
            {
              sub_2240A50(v113, v103);
            }
            else
            {
              v71 = (v103 - v113) / 2;
              v72 = &v113[v71];
              sub_2240B70(v113, &v113[v71]);
              sub_2240B70(v72, v103);
              sub_22408B0(v113, v72, (__int64)v103, (8 * ((v103 - v113) / 2)) >> 3, v103 - v72);
            }
            sub_22408B0(v106, v113, (__int64)v103, v136, v103 - v113);
          }
          sub_22408B0(v43, v106, (__int64)v103, v125, v103 - v106);
        }
        sub_22408B0(v4, v43, (__int64)v103, v122, (__int64)v116);
      }
      if ( (char *)src - (char *)v103 <= 112 )
      {
        sub_2240A50(v103, src);
      }
      else
      {
        v73 = 8 * ((src - v103) / 2);
        v74 = &v103[(unsigned __int64)v73 / 8];
        v123 = v73 >> 3;
        if ( v73 <= 112 )
        {
          sub_2240A50(v103, &v103[(unsigned __int64)v73 / 8]);
        }
        else
        {
          v75 = 8 * ((v73 >> 3) / 2);
          v107 = &v103[(unsigned __int64)v75 / 8];
          v126 = v75 >> 3;
          if ( v75 <= 112 )
          {
            v121 = (void *)v73;
            sub_2240A50(v103, v107);
            v79 = v121;
          }
          else
          {
            v150 = 8 * ((v75 >> 3) / 2);
            v117 = &v103[(unsigned __int64)v150 / 8];
            v129 = v150 >> 3;
            if ( v150 <= 112 )
            {
              v141 = (void *)v73;
              sub_2240A50(v103, v117);
              v76 = v141;
            }
            else
            {
              v168 = v73;
              v137 = &v103[v129 / 2];
              sub_2240B70(v103, v137);
              sub_2240B70(v137, v117);
              sub_22408B0(v103, v137, (__int64)v117, (8 * (v129 / 2)) >> 3, (v150 - 8 * (v129 / 2)) >> 3);
              v76 = (void *)v168;
            }
            if ( v75 - v150 <= 112 )
            {
              v142 = v76;
              sub_2240A50(v117, v107);
              v77 = v142;
              v78 = (v75 - v150) >> 3;
            }
            else
            {
              v169 = v76;
              v162 = (v75 - v150) >> 3;
              v151 = v162 / 2;
              sub_2240B70(v117, &v117[v151]);
              sub_2240B70(&v117[v151], v107);
              sub_22408B0(v117, &v117[v151], (__int64)v107, (v151 * 8) >> 3, v107 - &v117[v151]);
              v77 = v169;
              v78 = v162;
            }
            v138 = v77;
            sub_22408B0(v103, v117, (__int64)v107, v129, v78);
            v79 = v138;
          }
          v80 = (__int64)v79 - v75;
          v81 = v80 >> 3;
          v130 = v80 >> 3;
          if ( v80 <= 112 )
          {
            sub_2240A50(v107, v74);
          }
          else
          {
            v82 = v81 / 2;
            v118 = &v107[v82];
            v139 = (v82 * 8) >> 3;
            if ( v82 <= 14 )
            {
              sub_2240A50(v107, v118);
            }
            else
            {
              v163 = 8 * (v81 / 2);
              v83 = (v163 >> 3) / 2;
              v84 = &v107[v83];
              sub_2240B70(v107, &v107[v83]);
              sub_2240B70(v84, v118);
              sub_22408B0(v107, v84, (__int64)v118, (8 * ((v163 >> 3) / 2)) >> 3, (v163 - 8 * ((v163 >> 3) / 2)) >> 3);
            }
            if ( (char *)v74 - (char *)v118 <= 112 )
            {
              sub_2240A50(v118, v74);
            }
            else
            {
              v85 = (v74 - v118) / 2;
              v86 = &v118[v85];
              sub_2240B70(v118, &v118[v85]);
              sub_2240B70(v86, v74);
              sub_22408B0(v118, v86, (__int64)v74, (8 * ((v74 - v118) / 2)) >> 3, v74 - v86);
            }
            sub_22408B0(v107, v118, (__int64)v74, v139, v74 - v118);
          }
          sub_22408B0(v103, v107, (__int64)v74, v126, v130);
        }
        if ( (char *)src - (char *)v74 <= 112 )
        {
          sub_2240A50(v74, src);
        }
        else
        {
          v87 = 8 * ((src - v74) / 2);
          v108 = &v74[(unsigned __int64)v87 / 8];
          v131 = v87 >> 3;
          if ( v87 <= 112 )
          {
            sub_2240A50(v74, v108);
          }
          else
          {
            v88 = (v87 >> 3) / 2;
            v119 = &v74[v88];
            v140 = (v88 * 8) >> 3;
            if ( v88 <= 14 )
            {
              v158 = (void *)v87;
              sub_2240A50(v74, &v74[v88]);
              v89 = (__int64)v158;
            }
            else
            {
              v170 = v87;
              v152 = &v74[v140 / 2];
              sub_2240B70(v74, v152);
              sub_2240B70(v152, &v74[v88]);
              sub_22408B0(v74, v152, (__int64)&v74[v88], (8 * (v140 / 2)) >> 3, (v88 * 8 - 8 * (v140 / 2)) >> 3);
              v89 = v170;
            }
            v90 = v89 - v88 * 8;
            v91 = v90 >> 3;
            if ( v90 <= 112 )
            {
              v157 = v90 >> 3;
              sub_2240A50(v119, v108);
              v93 = v157;
            }
            else
            {
              v164 = v90 >> 3;
              v92 = &v119[v91 / 2];
              v153 = 8 * (v91 / 2);
              sub_2240B70(v119, v92);
              sub_2240B70(v92, v108);
              sub_22408B0(v119, v92, (__int64)v108, v153 >> 3, v108 - v92);
              v93 = v164;
            }
            sub_22408B0(v74, v119, (__int64)v108, v140, v93);
          }
          v94 = src - v108;
          if ( (char *)src - (char *)v108 <= 112 )
          {
            sub_2240A50(v108, src);
          }
          else
          {
            v95 = v94 / 2;
            v120 = &v108[v95];
            v154 = (v95 * 8) >> 3;
            if ( v95 <= 14 )
            {
              sub_2240A50(v108, v120);
            }
            else
            {
              v171 = 8 * (v94 / 2);
              v96 = (v171 >> 3) / 2;
              v97 = &v108[v96];
              sub_2240B70(v108, &v108[v96]);
              sub_2240B70(v97, v120);
              sub_22408B0(v108, v97, (__int64)v120, (8 * ((v171 >> 3) / 2)) >> 3, (v171 - 8 * ((v171 >> 3) / 2)) >> 3);
            }
            if ( (char *)src - (char *)v120 <= 112 )
            {
              sub_2240A50(v120, src);
            }
            else
            {
              v98 = (src - v120) / 2;
              v99 = &v120[v98];
              sub_2240B70(v120, &v120[v98]);
              sub_2240B70(v99, src);
              sub_22408B0(v120, v99, (__int64)src, (8 * ((src - v120) / 2)) >> 3, src - v99);
            }
            sub_22408B0(v108, v120, (__int64)src, v154, src - v120);
          }
          sub_22408B0(v74, v108, (__int64)src, v131, src - v108);
        }
        sub_22408B0(v103, v74, (__int64)src, v123, src - v74);
      }
      sub_22408B0(v4, v103, (__int64)src, v109, src - v103);
      v8 = nullptr;
    }
  }
  else
  {
LABEL_11:
    while ( 1 )
    {
      v7 = (const char ***)operator new(8 * v6, (const std::nothrow_t *)&std::nothrow);
      if ( v7 )
        break;
      v6 >>= 1;
      if ( !v6 )
        goto LABEL_54;
    }
    v102 = v7;
    sub_2241A10(v4, src, v7, v6);
    v8 = v102;
  }
  operator delete(v8, (const std::nothrow_t *)&std::nothrow);
  v9 = (_WORD *)a1[4];
  if ( a1[3] - (_QWORD)v9 > 1u )
  {
    *v9 = 2683;
    v10 = *(__int64 **)v3;
    v11 = *(__int64 **)(v3 + 8);
    a1[4] += 2LL;
    if ( v10 != v11 )
      goto LABEL_15;
  }
  else
  {
    sub_227BF10(a1, "{\n", 2);
    v10 = *(__int64 **)v3;
    v11 = *(__int64 **)(v3 + 8);
    if ( *(__int64 **)v3 != v11 )
    {
LABEL_15:
      v12 = &byte_22F0C30;
      v13 = v11;
      while ( 1 )
      {
        v26 = *v10;
        v27 = strlen(v12);
        v28 = a1[3];
        v29 = (_WORD *)a1[4];
        v30 = v29;
        v31 = v28 - (_QWORD)v29;
        if ( v27 <= v28 - (__int64)v29 )
        {
          if ( v27 )
          {
            if ( (_DWORD)v27 )
            {
              v38 = 0;
              do
              {
                v39 = v38++;
                *((_BYTE *)v30 + v39) = v12[v39];
              }
              while ( v38 < (unsigned int)v27 );
              v30 = (_WORD *)a1[4];
              v28 = a1[3];
            }
            v29 = (_WORD *)((char *)v30 + v27);
            a1[4] = (char *)v30 + v27;
            v31 = v28 - ((_QWORD)v30 + v27);
          }
        }
        else
        {
          sub_227BF10(a1, v12, v27);
          v29 = (_WORD *)a1[4];
          v31 = a1[3] - (_QWORD)v29;
        }
        if ( v31 <= 1 )
        {
          v14 = sub_227BF10(a1, "\t\"", 2);
        }
        else
        {
          v14 = (__int64)a1;
          *v29 = 8713;
          a1[4] += 2LL;
        }
        if ( !*(_QWORD *)v26 )
          goto LABEL_20;
        src = *(const char ****)v26;
        v15 = strlen(*(const char **)v26);
        v16 = *(_BYTE **)(v14 + 32);
        v17 = src;
        v18 = v15;
        v19 = *(_QWORD *)(v14 + 24);
        if ( v18 > v19 - (unsigned __int64)v16 )
          break;
        if ( v18 )
        {
          src = (const char ***)v18;
          memcpy(v16, v17, v18);
          v16 = (char *)src + *(_QWORD *)(v14 + 32);
          *(_QWORD *)(v14 + 32) = v16;
          v19 = *(_QWORD *)(v14 + 24);
        }
LABEL_21:
        if ( (unsigned __int64)v16 >= v19 )
        {
          v14 = sub_227BA10(v14, 46);
        }
        else
        {
          *(_QWORD *)(v14 + 32) = v16 + 1;
          *v16 = 46;
        }
        if ( !*(_QWORD *)(v26 + 8) )
          goto LABEL_26;
        src = *(const char ****)(v26 + 8);
        v20 = strlen((const char *)src);
        v21 = *(_BYTE **)(v14 + 32);
        v22 = src;
        v23 = v20;
        v24 = *(_QWORD *)(v14 + 24) - (_QWORD)v21;
        if ( v23 > v24 )
        {
          v14 = sub_227BF10(v14, src, v23);
LABEL_26:
          v21 = *(_BYTE **)(v14 + 32);
          v24 = *(_QWORD *)(v14 + 24) - (_QWORD)v21;
          goto LABEL_27;
        }
        if ( v23 )
        {
          src = (const char ***)v23;
          memcpy(v21, v22, v23);
          v40 = *(_QWORD *)(v14 + 24);
          v21 = (char *)src + *(_QWORD *)(v14 + 32);
          *(_QWORD *)(v14 + 32) = v21;
          v24 = v40 - (_QWORD)v21;
        }
LABEL_27:
        if ( v24 > 2 )
        {
          v21[2] = 32;
          ++v10;
          *(_WORD *)v21 = 14882;
          *(_QWORD *)(v14 + 32) += 3LL;
          sub_227B910(v14, *(_QWORD *)(v26 + 24));
          if ( v13 == v10 )
          {
LABEL_36:
            v32 = ",\n";
            goto LABEL_37;
          }
        }
        else
        {
          ++v10;
          v25 = sub_227BF10(v14, "\": ", 3);
          sub_227B910(v25, *(_QWORD *)(v26 + 24));
          if ( v13 == v10 )
            goto LABEL_36;
        }
        v12 = ",\n";
      }
      v14 = sub_227BF10(v14, src, v18);
LABEL_20:
      v16 = *(_BYTE **)(v14 + 32);
      v19 = *(_QWORD *)(v14 + 24);
      goto LABEL_21;
    }
  }
  v32 = (char *)&byte_22F0C30;
LABEL_37:
  sub_224F3E0(a1, v32);
  v36 = a1[4];
  if ( (unsigned __int64)(a1[3] - v36) > 2 )
  {
    *(_BYTE *)(v36 + 2) = 10;
    *(_WORD *)v36 = 32010;
    v37 = a1[4] + 3LL;
    a1[4] = v37;
  }
  else
  {
    v32 = "\n}\n";
    sub_227BF10(a1, "\n}\n", 3);
    v37 = a1[4];
  }
  if ( a1[2] != v37 )
    LODWORD(v37) = sub_227B9F0(a1, v32, v36, v33, v34, v35, src);
  if ( &_pthread_key_create )
    LODWORD(v37) = pthread_mutex_unlock(mutex);
  return v37;
}
