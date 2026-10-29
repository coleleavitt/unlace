__int64 __fastcall sub_4BBA40(__int64 *a1, __int64 *a2, unsigned int a3, __int16 a4)
{
  __int64 v7; // rbx
  char v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  size_t v12; // r10
  char v13; // r15
  __int64 v14; // r8
  size_t v15; // r11
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  size_t v21; // r10
  int v22; // r8d
  __int64 v23; // rbp
  size_t v24; // r11
  __int64 v25; // rsi
  char *i; // rcx
  _DWORD *v27; // rax
  const char *v28; // rsi
  size_t v29; // rax
  __int64 v30; // r13
  size_t v31; // r14
  size_t v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rbp
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  unsigned __int64 v38; // r12
  __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // r15
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rsi
  __int64 v47; // rbp
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  size_t v50; // r8
  __int64 v51; // rbp
  size_t v52; // r13
  __int64 v53; // rsi
  char v54; // al
  __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rax
  char v62; // al
  __int64 v63; // rbp
  unsigned __int64 v64; // r13
  __int64 v65; // rsi
  unsigned __int64 v66; // r13
  __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rbp
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // rbp
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbp
  unsigned __int64 v86; // rdx
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // rbp
  __int64 v90; // rsi
  unsigned int *v91; // rax
  unsigned int v92; // ebp
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  size_t v100; // rax
  size_t v101; // r14
  void *v102; // rdi
  size_t v103; // rdx
  __int64 v105; // [rsp+0h] [rbp-4F8h]
  int v106; // [rsp+8h] [rbp-4F0h]
  size_t v107; // [rsp+8h] [rbp-4F0h]
  unsigned int v108; // [rsp+10h] [rbp-4E8h]
  int v109; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v110; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v111; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v112; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v113; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v114; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v115; // [rsp+10h] [rbp-4E8h]
  unsigned __int64 v116; // [rsp+10h] [rbp-4E8h]
  unsigned int v117; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v118; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v119; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v120; // [rsp+18h] [rbp-4E0h]
  int v121; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v122; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v123; // [rsp+18h] [rbp-4E0h]
  size_t v124; // [rsp+18h] [rbp-4E0h]
  unsigned __int64 v125; // [rsp+18h] [rbp-4E0h]
  size_t v126; // [rsp+18h] [rbp-4E0h]
  char v127; // [rsp+23h] [rbp-4D5h]
  __int64 v128; // [rsp+28h] [rbp-4D0h]
  __int64 v129; // [rsp+28h] [rbp-4D0h]
  size_t v130; // [rsp+28h] [rbp-4D0h]
  size_t v131; // [rsp+28h] [rbp-4D0h]
  __int64 v132; // [rsp+30h] [rbp-4C8h]
  int v133; // [rsp+30h] [rbp-4C8h]
  size_t v134; // [rsp+30h] [rbp-4C8h]
  size_t v135; // [rsp+38h] [rbp-4C0h]
  unsigned int v136; // [rsp+4Ch] [rbp-4ACh] BYREF
  void *src; // [rsp+50h] [rbp-4A8h] BYREF
  __int128 v138; // [rsp+58h] [rbp-4A0h]
  void *v139; // [rsp+70h] [rbp-488h] BYREF
  __int128 v140; // [rsp+78h] [rbp-480h]
  void *v141; // [rsp+90h] [rbp-468h] BYREF
  __int128 v142; // [rsp+98h] [rbp-460h]
  char s[1032]; // [rsp+B0h] [rbp-448h] BYREF
  unsigned __int64 v144; // [rsp+4B8h] [rbp-40h]

  v144 = __readfsqword(0x28u);
  v138 = 0;
  v140 = 0;
  v142 = 0;
  src = nullptr;
  v139 = nullptr;
  v141 = nullptr;
  v136 = -1;
  if ( a3 == -1 )
  {
    if ( (a4 & 0xC0) != 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    v10 = v142;
    if ( (unsigned __int64)v142 <= 1 )
    {
      v13 = -1;
      goto LABEL_83;
    }
    if ( (a4 & 2) == 0 )
    {
      v106 = -1;
      v127 = 0;
      goto LABEL_136;
    }
    v106 = -1;
    v50 = v142 - 1;
    v13 = -1;
    v127 = 0;
LABEL_113:
    v51 = a2[1];
    v52 = v50;
    if ( v51 )
    {
      v52 = --v51 + v50;
      v10 = v51 + v50 + 1;
    }
    v53 = *a2;
    if ( a2[2] < v10 )
    {
      v124 = v50;
      v115 = v10;
      v97 = qvector_reserve(a2, v53, v10, 1);
      v50 = v124;
      v10 = v115;
      *a2 = v97;
      v53 = v97;
    }
    a2[1] = v10;
    *(_BYTE *)(v53 + v52) = 0;
    memcpy((void *)(v51 + *a2), v141, v50);
    goto LABEL_61;
  }
  v9 = sub_3B8910((__int64)a1, a3);
  if ( v9 )
  {
    v117 = a3;
    if ( (sub_3B9AA0((__int64)a1, a3, 4) & 0x600) == 0x200 )
      v117 = sub_3BD5D0((__int64)a1, a3);
    v136 = v117;
    if ( (a4 & 8) != 0 || (v91 = (unsigned int *)sub_5AFCE0(a1)) == nullptr )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( (a4 & 4) != 0 )
        {
          if ( (a4 & 0x100) != 0 )
          {
            if ( (a4 & 0x40) != 0 || (a4 & 0x80u) != 0 )
              goto LABEL_9;
            goto LABEL_180;
          }
          v108 = -1;
          v127 = 0;
          v106 = -1;
          goto LABEL_34;
        }
        v108 = -1;
        v127 = 0;
        v106 = -1;
        goto LABEL_31;
      }
      v108 = -1;
      v127 = 0;
      v106 = -1;
    }
    else
    {
      v92 = *v91;
      v108 = *v91;
      if ( get_ea_name(&v139, *v91, 85, 0) <= 0 )
      {
        v127 = 0;
        v106 = -1;
      }
      else
      {
        v127 = v9;
        v106 = a3 - v92;
      }
      if ( (a4 & 1) != 0 || (a4 & 0x10) == 0 && v108 != -1 )
      {
LABEL_25:
        if ( (a4 & 4) != 0 )
          goto LABEL_33;
        if ( a3 == v108 )
        {
          if ( (a4 & 0x100) != 0 )
            goto LABEL_38;
          goto LABEL_34;
        }
LABEL_31:
        if ( get_ea_name(&v141, v117, 85, 0) > 0 )
        {
          v127 = v9;
          v106 = a3 - v117;
        }
LABEL_33:
        if ( (a4 & 0x100) != 0 )
        {
LABEL_36:
          if ( (a4 & 0x40) != 0 && v108 == -1 )
            goto LABEL_9;
LABEL_38:
          if ( (a4 & 0x80u) != 0 && !v127 )
            goto LABEL_9;
LABEL_40:
          v11 = v138;
          if ( (unsigned __int64)v138 <= 1 )
          {
            v20 = v140;
            if ( (unsigned __int64)v140 <= 1 )
            {
              v10 = v142;
              if ( (unsigned __int64)v142 <= 1 )
              {
                v13 = -1;
                goto LABEL_61;
              }
              v50 = v142 - 1;
              v13 = -1;
              if ( (a4 & 2) != 0 )
                goto LABEL_113;
LABEL_136:
              v62 = sub_4B3B40((__int64)a1, v136, v136);
              v63 = a2[1];
              v13 = v62;
              v64 = 2;
              if ( v63 )
                v64 = v63-- + 1;
              v65 = *a2;
              if ( a2[2] < v64 )
              {
                v78 = qvector_reserve(a2, v65, v64, 1);
                *a2 = v78;
                v65 = v78;
              }
              a2[1] = v64;
              v66 = 2;
              *(_BYTE *)(v65 + v63) = 1;
              *(_BYTE *)(*a2 + v63 + 1) = 0;
              v67 = a2[1];
              if ( v67 )
                v66 = v67-- + 1;
              v68 = *a2;
              if ( a2[2] < v66 )
              {
                v81 = qvector_reserve(a2, v68, v66, 1);
                *a2 = v81;
                v68 = v81;
              }
              a2[1] = v66;
              *(_BYTE *)(v68 + v67) = v13;
              *(_BYTE *)(*a2 + v67 + 1) = 0;
              v10 = v142;
              if ( (_QWORD)v142 )
              {
                v50 = v142 - 1;
                if ( (_QWORD)v142 != 1 )
                  goto LABEL_113;
              }
LABEL_61:
              if ( v127 )
              {
                if ( !v106 )
                  goto LABEL_66;
                goto LABEL_63;
              }
              goto LABEL_83;
            }
            if ( (a4 & 2) != 0 )
            {
              v21 = v140 - 1;
              v22 = 2;
              v13 = -1;
              goto LABEL_55;
            }
LABEL_123:
            v54 = sub_4B3B40((__int64)a1, v108, v108);
            v55 = a2[1];
            v13 = v54;
            v56 = 2;
            if ( v55 )
              v56 = v55-- + 1;
            v57 = *a2;
            if ( a2[2] < v56 )
            {
              v110 = v56;
              v79 = qvector_reserve(a2, v57, v56, 1);
              *a2 = v79;
              v56 = v110;
              v57 = v79;
            }
            a2[1] = v56;
            v58 = 2;
            *(_BYTE *)(v57 + v55) = 1;
            *(_BYTE *)(*a2 + v55 + 1) = 0;
            v59 = a2[1];
            if ( v59 )
              v58 = v59-- + 1;
            v60 = *a2;
            if ( a2[2] < v58 )
            {
              v111 = v58;
              v83 = qvector_reserve(a2, v60, v58, 1);
              *a2 = v83;
              v58 = v111;
              v60 = v83;
            }
            a2[1] = v58;
            v22 = 0;
            *(_BYTE *)(v60 + v59) = v13;
            *(_BYTE *)(*a2 + v59 + 1) = 0;
            v20 = v140;
            if ( !(_QWORD)v140 || (v21 = v140 - 1, (_QWORD)v140 == 1) )
            {
LABEL_60:
              if ( (unsigned __int64)v142 <= 1 )
                goto LABEL_61;
              v47 = a2[1];
              v48 = 2;
              if ( v47 )
                v48 = v47-- + 1;
              v49 = *a2;
              if ( a2[2] < v48 )
              {
                v121 = v22;
                v112 = v48;
                v84 = qvector_reserve(a2, v49, v48, 1);
                v22 = v121;
                v48 = v112;
                *a2 = v84;
                v49 = v84;
              }
              a2[1] = v48;
              *(_BYTE *)(v49 + v47) = 58;
              *(_BYTE *)(*a2 + v47 + 1) = 0;
              if ( v22 )
              {
                v10 = v142;
                v50 = v142 - 1;
                if ( (unsigned __int64)v142 <= 1 )
                  goto LABEL_61;
                goto LABEL_113;
              }
              v85 = a2[1];
              v86 = 2;
              if ( v85 )
                v86 = v85-- + 1;
              v87 = *a2;
              if ( a2[2] < v86 )
              {
                v114 = v86;
                v94 = qvector_reserve(a2, v87, v86, 1);
                *a2 = v94;
                v86 = v114;
                v87 = v94;
              }
              a2[1] = v86;
              v88 = 2;
              *(_BYTE *)(v87 + v85) = 2;
              *(_BYTE *)(*a2 + v85 + 1) = 0;
              v89 = a2[1];
              if ( v89 )
                v88 = v89-- + 1;
              v90 = *a2;
              if ( a2[2] < v88 )
              {
                v113 = v88;
                v93 = qvector_reserve(a2, v90, v88, 1);
                *a2 = v93;
                v88 = v113;
                v90 = v93;
              }
              a2[1] = v88;
              *(_BYTE *)(v90 + v89) = v13;
              *(_BYTE *)(*a2 + v89 + 1) = 0;
              if ( (unsigned __int64)v142 <= 1 )
                goto LABEL_61;
              goto LABEL_136;
            }
LABEL_55:
            v23 = a2[1];
            v24 = v21;
            if ( v23 )
            {
              v24 = --v23 + v21;
              v20 = v23 + v21 + 1;
            }
            v25 = *a2;
            if ( a2[2] < v20 )
            {
              v133 = v22;
              v131 = v24;
              v126 = v21;
              v116 = v20;
              v99 = qvector_reserve(a2, v25, v20, 1);
              v22 = v133;
              v24 = v131;
              *a2 = v99;
              v25 = v99;
              v21 = v126;
              v20 = v116;
            }
            a2[1] = v20;
            *(_BYTE *)(v25 + v24) = 0;
            v109 = v22;
            memcpy((void *)(v23 + *a2), v139, v21);
            v22 = v109;
            goto LABEL_60;
          }
          if ( (a4 & 2) != 0 )
          {
            v12 = v138 - 1;
            v13 = -1;
          }
          else
          {
            v41 = a2[1];
            v42 = 2;
            if ( v41 )
              v42 = v41-- + 1;
            v43 = *a2;
            if ( a2[2] < v42 )
            {
              v120 = v42;
              v82 = qvector_reserve(a2, v43, v42, 1);
              *a2 = v82;
              v42 = v120;
              v43 = v82;
            }
            a2[1] = v42;
            v44 = 2;
            *(_BYTE *)(v43 + v41) = 1;
            *(_BYTE *)(*a2 + v41 + 1) = 0;
            v45 = a2[1];
            if ( v45 )
              v44 = v45-- + 1;
            v46 = *a2;
            if ( a2[2] < v44 )
            {
              v119 = v44;
              v80 = qvector_reserve(a2, v46, v44, 1);
              *a2 = v80;
              v44 = v119;
              v46 = v80;
            }
            a2[1] = v44;
            *(_BYTE *)(v46 + v45) = 19;
            *(_BYTE *)(*a2 + v45 + 1) = 0;
            v11 = v138;
            if ( !(_QWORD)v138 )
            {
              v13 = 19;
              goto LABEL_48;
            }
            v13 = 19;
            v12 = v138 - 1;
            if ( (_QWORD)v138 == 1 )
            {
LABEL_48:
              v17 = a2[1];
              v18 = 2;
              if ( v17 )
                v18 = v17-- + 1;
              v19 = *a2;
              if ( a2[2] < v18 )
              {
                v129 = v17;
                v118 = v18;
                v61 = qvector_reserve(a2, v19, v18, 1);
                v17 = v129;
                v18 = v118;
                *a2 = v61;
                v19 = v61;
              }
              a2[1] = v18;
              *(_BYTE *)(v19 + v17) = 58;
              *(_BYTE *)(*a2 + v17 + 1) = 0;
              v20 = v140;
              if ( (unsigned __int64)v140 <= 1 )
              {
                v10 = v142;
                if ( (unsigned __int64)v142 <= 1 )
                  goto LABEL_61;
                if ( (a4 & 2) != 0 )
                {
                  v50 = v142 - 1;
                  goto LABEL_113;
                }
              }
              else if ( (a4 & 2) != 0 )
              {
                v21 = v140 - 1;
                v22 = 2;
                goto LABEL_55;
              }
              v69 = a2[1];
              v70 = 2;
              if ( v69 )
                v70 = v69-- + 1;
              v71 = *a2;
              if ( a2[2] < v70 )
              {
                v123 = v70;
                v96 = qvector_reserve(a2, v71, v70, 1);
                *a2 = v96;
                v70 = v123;
                v71 = v96;
              }
              a2[1] = v70;
              v72 = 2;
              *(_BYTE *)(v71 + v69) = 2;
              *(_BYTE *)(*a2 + v69 + 1) = 0;
              v73 = a2[1];
              if ( v73 )
                v72 = v73-- + 1;
              v74 = *a2;
              if ( a2[2] < v72 )
              {
                v122 = v72;
                v95 = qvector_reserve(a2, v74, v72, 1);
                *a2 = v95;
                v72 = v122;
                v74 = v95;
              }
              a2[1] = v72;
              *(_BYTE *)(v74 + v73) = v13;
              *(_BYTE *)(*a2 + v73 + 1) = 0;
              if ( (unsigned __int64)v140 <= 1 )
              {
                if ( (unsigned __int64)v142 <= 1 )
                {
                  if ( v127 )
                  {
                    if ( !v106 )
                      goto LABEL_88;
LABEL_63:
                    b2a32(s);
                    for ( i = s; *i == 48; ++i )
                      ;
                    sub_357520(a2);
LABEL_66:
                    if ( (a4 & 2) != 0 )
                    {
LABEL_67:
                      v7 = (a2[1] == 0) + a2[1] - 1;
                      goto LABEL_10;
                    }
LABEL_88:
                    v35 = a2[1];
                    v36 = 2;
                    if ( v35 )
                      v36 = v35-- + 1;
                    v37 = *a2;
                    if ( a2[2] < v36 )
                    {
                      v76 = qvector_reserve(a2, v37, v36, 1);
                      *a2 = v76;
                      v37 = v76;
                    }
                    a2[1] = v36;
                    v38 = 2;
                    *(_BYTE *)(v37 + v35) = 2;
                    *(_BYTE *)(*a2 + v35 + 1) = 0;
                    v39 = a2[1];
                    if ( v39 )
                      v38 = v39-- + 1;
                    v40 = *a2;
                    if ( a2[2] < v38 )
                    {
                      v75 = qvector_reserve(a2, v40, v38, 1);
                      *a2 = v75;
                      v40 = v75;
                    }
                    a2[1] = v38;
                    *(_BYTE *)(v40 + v39) = v13;
                    *(_BYTE *)(*a2 + v39 + 1) = 0;
                    goto LABEL_67;
                  }
LABEL_83:
                  b2a32(s);
                  v29 = strlen(s);
                  v30 = a2[1];
                  v31 = v29;
                  v32 = v29;
                  if ( v30 )
                  {
                    --v30;
                    v32 = v29 + v30;
                  }
                  v33 = *a2;
                  v34 = v32 + 1;
                  if ( a2[2] < v32 + 1 )
                  {
                    v107 = v32;
                    v105 = v32 + 1;
                    v77 = qvector_reserve(a2, v33, v34, 1);
                    v32 = v107;
                    v34 = v105;
                    *a2 = v77;
                    v33 = v77;
                  }
                  a2[1] = v34;
                  *(_BYTE *)(v33 + v32) = 0;
                  memmove((void *)(v30 + *a2), s, v31);
                  if ( (a4 & 2) != 0 )
                    goto LABEL_67;
                  goto LABEL_88;
                }
                goto LABEL_136;
              }
              goto LABEL_123;
            }
          }
          v14 = a2[1];
          v15 = v12;
          if ( v14 )
          {
            v15 = --v14 + v12;
            v11 = v14 + v12 + 1;
          }
          v16 = *a2;
          if ( a2[2] < v11 )
          {
            v135 = v12;
            v132 = v14;
            v130 = v15;
            v125 = v11;
            v98 = qvector_reserve(a2, v16, v11, 1);
            v12 = v135;
            v14 = v132;
            *a2 = v98;
            v16 = v98;
            v15 = v130;
            v11 = v125;
          }
          a2[1] = v11;
          *(_BYTE *)(v16 + v15) = 0;
          memcpy((void *)(v14 + *a2), src, v12);
          goto LABEL_48;
        }
LABEL_34:
        if ( ((unsigned __int64)v140 <= 1 || (a4 & 0x200) != 0)
          && (unsigned __int64)v142 <= 1
          && sub_4B8560((__int64)a1, (__int64 *)&v141, &v136, 3u) > 0 )
        {
          v27 = (_DWORD *)sub_4EE820(a1 + 194, a3);
          if ( v27 && v136 >= *v27 && v136 < v27[1] )
          {
            v28 = haystack;
            v106 = a3 - v136;
            if ( (_QWORD)v142 )
              v28 = (const char *)v141;
            if ( (int)demangle_name(&v141, v28, 0, 2) > 0 )
              sub_4B8BE0(*a1, (__int64)&v141);
            if ( v139 )
            {
              *(_QWORD *)&v140 = 0;
              qfree(v139);
              v139 = nullptr;
              *((_QWORD *)&v140 + 1) = 0;
            }
            if ( (a4 & 0x40) != 0 && v108 == -1 )
              goto LABEL_9;
            v127 = v9;
            goto LABEL_40;
          }
          if ( v141 )
          {
            *(_QWORD *)&v142 = 0;
            qfree(v141);
            v141 = nullptr;
            *((_QWORD *)&v142 + 1) = 0;
          }
        }
        goto LABEL_36;
      }
    }
    v128 = sub_4EE820(a1 + 194, a3);
    get_segm_para(v128);
    if ( v128 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        b2a32(s);
        v100 = strlen(s);
        v101 = v100;
        if ( v100 )
        {
          v102 = src;
          v103 = v100 + 1;
          if ( *((_QWORD *)&v138 + 1) < v100 + 1 )
          {
            v134 = v100 + 1;
            src = (void *)qvector_reserve(&src, src, v103, 1);
            v103 = v134;
            v102 = src;
          }
          *(_QWORD *)&v138 = v103;
          memmove(v102, s, v101);
          *((_BYTE *)src + v101) = 0;
        }
        else
        {
          *(_QWORD *)&v138 = 0;
        }
      }
      else
      {
        sub_4F9200(a1, &src, v128, 0);
      }
    }
    goto LABEL_25;
  }
  if ( (a4 & 0xC0) == 0 )
  {
LABEL_180:
    v108 = -1;
    v127 = 0;
    v106 = -1;
    goto LABEL_40;
  }
LABEL_9:
  v7 = 0;
LABEL_10:
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree(v141);
  }
  if ( v139 )
  {
    *(_QWORD *)&v140 = 0;
    qfree(v139);
  }
LABEL_4:
  if ( src )
  {
    *(_QWORD *)&v138 = 0;
    qfree(src);
  }
  return v7;
}

