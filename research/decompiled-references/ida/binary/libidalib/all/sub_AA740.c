__int64 __fastcall sub_AA740(_QWORD *a1, __int64 *a2, bool a3)
{
  bool v3; // r8
  char *v6; // r14
  char *v7; // r13
  void *v8; // r9
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  int v19; // r12d
  int v20; // r9d
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // r13
  size_t v27; // r10
  size_t v28; // r11
  __int64 v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rsi
  unsigned __int64 v34; // r13
  size_t v35; // r9
  size_t v36; // r10
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v43; // rax
  int v44; // edi
  __int64 v45; // rcx
  __int64 v46; // rdi
  int v47; // r10d
  __int64 v48; // rdi
  __int64 v49; // r10
  int *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  bool v56; // al
  int v57; // edi
  unsigned __int64 v58; // rdx
  int v59; // esi
  _QWORD *v60; // r10
  void *v61; // r9
  unsigned int v62; // r11d
  __int64 v63; // rax
  unsigned __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // r11d
  void *v68; // r9
  bool v69; // r8
  __int64 v70; // rax
  __int64 v71; // rax
  void *v72; // r9
  unsigned int v73; // r11d
  bool v74; // r8
  _QWORD *v75; // r10
  int v76; // [rsp+8h] [rbp-160h]
  int *v77; // [rsp+8h] [rbp-160h]
  void *v78; // [rsp+8h] [rbp-160h]
  bool v79; // [rsp+8h] [rbp-160h]
  bool v80; // [rsp+8h] [rbp-160h]
  char *v81; // [rsp+8h] [rbp-160h]
  void *v82; // [rsp+10h] [rbp-158h]
  __int64 v83; // [rsp+10h] [rbp-158h]
  bool v84; // [rsp+10h] [rbp-158h]
  bool v85; // [rsp+10h] [rbp-158h]
  unsigned __int64 v86; // [rsp+10h] [rbp-158h]
  unsigned __int64 v87; // [rsp+10h] [rbp-158h]
  void *v88; // [rsp+10h] [rbp-158h]
  bool v89; // [rsp+10h] [rbp-158h]
  __int64 v90; // [rsp+10h] [rbp-158h]
  __int64 v91; // [rsp+18h] [rbp-150h]
  bool v92; // [rsp+18h] [rbp-150h]
  _QWORD *v93; // [rsp+18h] [rbp-150h]
  _QWORD *v94; // [rsp+18h] [rbp-150h]
  int v95; // [rsp+18h] [rbp-150h]
  size_t v96; // [rsp+18h] [rbp-150h]
  int v97; // [rsp+18h] [rbp-150h]
  unsigned int v98; // [rsp+18h] [rbp-150h]
  _QWORD *v99; // [rsp+18h] [rbp-150h]
  int v101; // [rsp+20h] [rbp-148h]
  int *v102; // [rsp+20h] [rbp-148h]
  __int64 *v103; // [rsp+20h] [rbp-148h]
  unsigned __int64 v104; // [rsp+20h] [rbp-148h]
  size_t v105; // [rsp+20h] [rbp-148h]
  size_t v106; // [rsp+20h] [rbp-148h]
  bool v107; // [rsp+28h] [rbp-140h]
  int v108; // [rsp+28h] [rbp-140h]
  void *v109; // [rsp+28h] [rbp-140h]
  unsigned __int64 v110; // [rsp+28h] [rbp-140h]
  bool v111; // [rsp+28h] [rbp-140h]
  void *v112; // [rsp+28h] [rbp-140h]
  __int64 v113; // [rsp+28h] [rbp-140h]
  void *v114; // [rsp+28h] [rbp-140h]
  void *v115; // [rsp+28h] [rbp-140h]
  bool v116; // [rsp+30h] [rbp-138h]
  size_t v117; // [rsp+30h] [rbp-138h]
  unsigned int v118; // [rsp+30h] [rbp-138h]
  void *v119; // [rsp+30h] [rbp-138h]
  unsigned int v120; // [rsp+30h] [rbp-138h]
  unsigned int v121; // [rsp+30h] [rbp-138h]
  unsigned int v122; // [rsp+38h] [rbp-130h]
  bool v123; // [rsp+38h] [rbp-130h]
  unsigned int v124; // [rsp+38h] [rbp-130h]
  bool v125; // [rsp+38h] [rbp-130h]
  bool v126; // [rsp+38h] [rbp-130h]
  bool v127; // [rsp+40h] [rbp-128h]
  _QWORD *v128; // [rsp+40h] [rbp-128h]
  bool v129; // [rsp+40h] [rbp-128h]
  _QWORD *v130; // [rsp+40h] [rbp-128h]
  _QWORD *v131; // [rsp+40h] [rbp-128h]
  _QWORD *v132; // [rsp+58h] [rbp-110h]
  __int64 v133; // [rsp+60h] [rbp-108h]
  __int64 v134; // [rsp+68h] [rbp-100h]
  _QWORD *v135; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v136; // [rsp+88h] [rbp-E0h]
  int v137; // [rsp+90h] [rbp-D8h]
  __int64 v138; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v139; // [rsp+A8h] [rbp-C0h]
  int v140; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v141; // [rsp+C8h] [rbp-A0h]
  __int128 v142; // [rsp+D0h] [rbp-98h]
  int v143; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v144; // [rsp+E8h] [rbp-80h]
  __int64 v145; // [rsp+F0h] [rbp-78h]
  int v146; // [rsp+100h] [rbp-68h] BYREF
  __int64 v147; // [rsp+108h] [rbp-60h]
  unsigned __int64 v148; // [rsp+128h] [rbp-40h]

  v3 = a3;
  v148 = __readfsqword(0x28u);
  v6 = *(char **)(dbg + 40LL);
  if ( *(_QWORD *)v6 )
  {
    v7 = *(char **)(dbg + 40LL);
    do
      v7 += 8;
    while ( *(_QWORD *)v7 );
    v133 = 0;
    v8 = (void *)(v7 - v6);
    v134 = 0;
    v9 = (v7 - v6) >> 3;
    if ( v9 && v7 != v6 )
    {
      v10 = qvector_reserve();
      v11 = (v7 - v6) >> 3;
      v133 = v10;
      v8 = (void *)(v7 - v6);
      v3 = a3;
      if ( v11 )
      {
        v12 = 1;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        if ( v11 > 1 )
        {
          v13 = 24;
          do
          {
            ++v12;
            v14 = v13 + v133;
            v13 += 24;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
          }
          while ( v11 != v12 );
        }
      }
      v134 = (v7 - v6) >> 3;
    }
  }
  else
  {
    v7 = *(char **)(dbg + 40LL);
    v8 = nullptr;
    v9 = 0;
    v133 = 0;
    v134 = 0;
  }
  v135 = a1;
  v15 = 0;
  v136 = 0;
  v137 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v16 = *(int *)(dbg + 64LL);
      if ( (int)v16 <= v15 )
        goto LABEL_13;
      v44 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)v15 >> 3));
      if ( _bittest(&v44, v15 & 7) )
        break;
      if ( !v3 )
        goto LABEL_90;
      v60 = &v135;
      if ( (int)v16 == a1[4] )
        break;
LABEL_81:
      v80 = v3;
      sub_9E610((__int64)v60);
      v15 = v136;
      v3 = v80;
      if ( (int)v136 < 0 )
        goto LABEL_13;
    }
    if ( dword_245174 != v15 && v15 < (unsigned __int64)xmmword_2524F8 )
    {
      v45 = qword_2524F0 + 56LL * v15;
      if ( v45 )
      {
        v46 = *(int *)(v45 + 44);
        v140 = -2;
        v141 = -1;
        v47 = v46;
        v142 = 0;
        v48 = *(_QWORD *)(dbg + 56LL) + 32 * v46;
        if ( (int)v16 <= v47 || (*(_BYTE *)(v48 + 9) & 1) != 0 || !*(_QWORD *)(v48 + 16) )
        {
          v79 = 0;
          v56 = 1;
        }
        else if ( v3 && a1[4] == v16 )
        {
          v79 = 0;
          v56 = v3;
        }
        else
        {
          v107 = v3;
          v101 = v15;
          v91 = v15;
          v82 = v8;
          v77 = (int *)(qword_2524F0 + 56LL * v15);
          v49 = sub_C73A0(v77);
          v50 = v77;
          v8 = v82;
          v51 = v91;
          v15 = v101;
          v3 = v107;
          if ( (int)v136 < 0 || (int)v136 >= (unsigned __int64)xmmword_2524F8 )
          {
            v54 = *(_QWORD *)(dbg + 56LL);
            v52 = 0;
          }
          else
          {
            v52 = qword_2524F0 + 56LL * (int)v136;
            if ( v52 )
            {
              v53 = *(int *)(v52 + 44);
              if ( (int)v53 < *(_DWORD *)(dbg + 64LL)
                && (v54 = *(_QWORD *)(dbg + 56LL), v55 = v54 + 32 * v53, (*(_BYTE *)(v55 + 9) & 1) == 0)
                && *(_QWORD *)(v55 + 16)
                && v135[7] )
              {
                v52 = *(_QWORD *)(v135[6] + 8LL * v137);
              }
              else
              {
                v116 = v107;
                v108 = v101;
                v102 = v77;
                v83 = v49;
                v78 = v8;
                v52 = sub_C73A0(v52);
                v3 = v116;
                v15 = v108;
                v50 = v102;
                v54 = *(_QWORD *)(dbg + 56LL);
                v51 = v91;
                v49 = v83;
                v8 = v78;
              }
            }
            else
            {
              v54 = *(_QWORD *)(dbg + 56LL);
            }
          }
          v141 = v52;
          v56 = (v52 & ~*(_QWORD *)(v54 + 32 * v51 + 24)) != 0;
          v79 = v49 != v52;
          v48 = 32LL * v50[11] + v54;
        }
        v57 = *(unsigned __int8 *)(v48 + 12);
        if ( v8 )
        {
          v58 = 0;
          v59 = 1;
          while ( (v59 & v57) == 0 )
          {
            ++v58;
            v59 *= 2;
            if ( v58 >= v9 )
              goto LABEL_93;
          }
        }
        else
        {
LABEL_93:
          v58 = v9 - 1;
        }
        v92 = v56;
        v127 = v3;
        v122 = v15;
        v109 = v8;
        v103 = (__int64 *)(v133 + 24 * v58);
        sub_9E530((__int64)&v143, (int *)&v135);
        v60 = &v135;
        v138 = 0;
        v61 = v109;
        v139 = 0;
        v62 = v122;
        v3 = v127;
        if ( v92 )
        {
          sub_DCE10(&v138, &v143, v122);
          v67 = v122;
          v68 = v109;
          v69 = v127;
          if ( (unsigned __int64)v103[1] > 1 )
          {
            sub_9C080(v103, 32);
            v69 = v127;
            v67 = v122;
            v68 = v109;
          }
          v111 = v69;
          v98 = v67;
          v88 = v68;
          sub_96630(v103);
          v61 = v88;
          v62 = v98;
          v3 = v111;
          v60 = &v135;
          if ( v79 )
          {
            v70 = xmmword_2524F8;
            v81 = (char *)(xmmword_2524F8 - 1);
            if ( (__int64)xmmword_2524F8 - 1 >= (unsigned __int64)*(int *)(dbg + 64LL) )
            {
LABEL_102:
              v90 = 56 * v70 - 56;
              do
              {
                if ( *(_DWORD *)(qword_2524F0 + v90 + 44) == v62 )
                {
                  v128 = v60;
                  v123 = v3;
                  v118 = v62;
                  v112 = v61;
                  sub_C7420(&v146, qword_2524F0 + v90, &v140);
                  v71 = v147;
                  v61 = v112;
                  v62 = v118;
                  v3 = v123;
                  v60 = v128;
                  if ( v146 >= -1 )
                  {
                    v132 = v128;
                    v129 = v123;
                    v124 = v118;
                    v119 = v112;
                    v113 = v147;
                    sub_9BB30((__int64)&v146);
                    v60 = v132;
                    v3 = v129;
                    v62 = v124;
                    v61 = v119;
                    v71 = v113;
                  }
                  if ( v71 )
                  {
                    v130 = v60;
                    v125 = v3;
                    v120 = v62;
                    v114 = v61;
                    sub_C7420(&v146, qword_2524F0 + v90, &v143);
                    sub_DCE10(&v138, &v146, (unsigned int)v81);
                    v72 = v114;
                    v73 = v120;
                    v74 = v125;
                    v75 = v130;
                    if ( (unsigned __int64)v103[1] > 1 )
                    {
                      sub_9C080(v103, 32);
                      v75 = v130;
                      v74 = v125;
                      v73 = v120;
                      v72 = v114;
                    }
                    v131 = v75;
                    v126 = v74;
                    v121 = v73;
                    v115 = v72;
                    sub_96630(v103);
                    v61 = v115;
                    v62 = v121;
                    v3 = v126;
                    v60 = v131;
                    if ( v146 >= -1 )
                    {
                      sub_9BB30((__int64)&v146);
                      v60 = v131;
                      v3 = v126;
                      v62 = v121;
                      v61 = v115;
                    }
                  }
                }
                --v81;
                v90 -= 56;
              }
              while ( (unsigned __int64)v81 >= *(int *)(dbg + 64LL) );
            }
          }
          if ( v138 )
          {
            v99 = v60;
            v89 = v3;
            *(_QWORD *)&v139 = 0;
            qfree();
            v60 = v99;
            v3 = v89;
          }
        }
        else if ( v79 )
        {
          v70 = xmmword_2524F8;
          v81 = (char *)(xmmword_2524F8 - 1);
          if ( (__int64)xmmword_2524F8 - 1 >= (unsigned __int64)*(int *)(dbg + 64LL) )
            goto LABEL_102;
        }
        if ( v143 >= -1 && v144 )
        {
          v93 = v60;
          v84 = v3;
          v145 = 0;
          qfree();
          v60 = v93;
          v3 = v84;
        }
        if ( v140 >= -1 )
        {
          v94 = v60;
          v85 = v3;
          sub_9BB30((__int64)&v140);
          v60 = v94;
          v3 = v85;
        }
        goto LABEL_81;
      }
    }
LABEL_90:
    v60 = &v135;
    goto LABEL_81;
  }
LABEL_13:
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v17 = v133;
  v18 = 0;
  v19 = 1;
  v20 = *(_DWORD *)(dbg + 48LL);
  if ( v6 != v7 )
  {
    do
    {
      if ( (v19 & v20) == 0 )
        goto LABEL_21;
      v26 = 24 * v18;
      v24 = v17 + 24 * v18;
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 <= 1 )
        goto LABEL_21;
      v64 = a2[1];
      v27 = v25 - 1;
      if ( v64 > 1 )
      {
        v21 = *a2;
        v22 = v64 - 1;
        v23 = v64 + 1;
        if ( a2[2] < v64 + 1 )
        {
          v104 = a2[1];
          v95 = v20;
          v86 = v64 + 1;
          v63 = qvector_reserve();
          v64 = v104;
          v20 = v95;
          *a2 = v63;
          v21 = v63;
          v23 = v86;
        }
        a2[1] = v23;
        *(_BYTE *)(v21 + v22) = 32;
        *(_BYTE *)(*a2 + v64) = 0;
        v17 = v133;
        v24 = v133 + v26;
        v25 = *(_QWORD *)(v133 + v26 + 8);
        if ( !v25 )
          goto LABEL_20;
        v27 = v25 - 1;
        if ( v25 == 1 )
          goto LABEL_20;
        v64 = a2[1];
      }
      v28 = v27;
      if ( v64 )
      {
        v28 = --v64 + v27;
        v25 = v64 + v27 + 1;
      }
      v29 = *a2;
      if ( a2[2] < v25 )
      {
        v117 = v27;
        v110 = v64;
        v106 = v28;
        v97 = v20;
        v87 = v25;
        v66 = qvector_reserve();
        v27 = v117;
        v64 = v110;
        *a2 = v66;
        v29 = v66;
        v28 = v106;
        v20 = v97;
        v25 = v87;
      }
      a2[1] = v25;
      *(_BYTE *)(v29 + v28) = 0;
      v76 = v20;
      memcpy((void *)(v64 + *a2), *(const void **)v24, v27);
      v17 = v133;
      v20 = v76;
      v24 = v133 + v26;
LABEL_20:
      *(_QWORD *)(v24 + 8) = 0;
LABEL_21:
      ++v18;
      v19 *= 2;
    }
    while ( v18 < v9 );
  }
  v30 = a2[1];
  v31 = v17 + 24 * v134;
  if ( v31 != v17 )
  {
    v32 = v17;
    do
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(v32 + 8);
        if ( v34 > 1 )
        {
          v35 = v34 - 1;
          if ( v30 <= 1 )
            break;
          v33 = *a2;
          if ( a2[2] < v30 + 1 )
          {
            v43 = qvector_reserve();
            *a2 = v43;
            v33 = v43;
          }
          a2[1] = v30 + 1;
          *(_BYTE *)(v33 + v30 - 1) = 32;
          *(_BYTE *)(*a2 + v30) = 0;
          v34 = *(_QWORD *)(v32 + 8);
          v30 = a2[1];
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v34 != 1 )
              break;
          }
        }
        v32 += 24;
        if ( v31 == v32 )
          goto LABEL_43;
      }
      v36 = v35;
      if ( v30 )
      {
        --v30;
        v36 = v35 + v30;
        v34 = v35 + v30 + 1;
      }
      v37 = *a2;
      if ( a2[2] < v34 )
      {
        v105 = v36;
        v96 = v35;
        v65 = qvector_reserve();
        v36 = v105;
        v35 = v96;
        *a2 = v65;
        v37 = v65;
      }
      a2[1] = v34;
      v32 += 24;
      *(_BYTE *)(v37 + v36) = 0;
      memcpy((void *)(v30 + *a2), *(const void **)(v32 - 24), v35);
      v30 = a2[1];
    }
    while ( v31 != v32 );
LABEL_43:
    v17 = v133;
  }
  v38 = (v30 == 0) + v30 - 1;
  if ( v17 )
  {
    if ( v134 )
    {
      v39 = 0;
      v40 = v17;
      do
      {
        v41 = (_QWORD *)(v40 + 24 * v39);
        if ( *v41 )
        {
          v41[1] = 0;
          qfree();
          v40 = v133;
        }
        ++v39;
      }
      while ( v134 != v39 );
    }
    qfree();
  }
  return v38;
}

