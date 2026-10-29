__int64 __fastcall sub_3249B0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v8; // r15d
  unsigned int v9; // r13d
  unsigned int v10; // r14d
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // edx
  int v25; // esi
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // esi
  int v29; // r8d
  int v30; // r8d
  unsigned int v31; // r9d
  unsigned int v32; // ebx
  unsigned int v33; // eax
  int v34; // r11d
  __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // edx
  unsigned int v40; // ecx
  int v41; // edx
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // edx
  unsigned int v46; // ecx
  int v47; // eax
  int v48; // esi
  __int64 v49; // rax
  int v50; // r9d
  unsigned int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // esi
  unsigned int v58; // ebp
  unsigned int v59; // r12d
  unsigned int v60; // r13d
  unsigned int v61; // r14d
  int v62; // ecx
  int v63; // r11d
  unsigned __int64 v64; // rax
  int v65; // edx
  unsigned int v66; // esi
  unsigned int v67; // r12d
  unsigned int v68; // ebp
  unsigned int v69; // r13d
  unsigned int v70; // r14d
  unsigned int v71; // r12d
  unsigned __int64 v72; // r15
  int v73; // ecx
  unsigned __int64 v74; // rdx
  int v75; // esi
  unsigned int v76; // eax
  unsigned int v77; // ebp
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  char v81; // al
  __int64 v82; // rdx
  unsigned int v83; // eax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // al
  __int64 v88; // rdx
  unsigned int v89; // eax
  int v90; // esi
  unsigned int v91; // [rsp+8h] [rbp-80h]
  int v92; // [rsp+8h] [rbp-80h]
  int v93; // [rsp+10h] [rbp-78h]
  unsigned int v94; // [rsp+10h] [rbp-78h]
  unsigned int v95; // [rsp+10h] [rbp-78h]
  int v96; // [rsp+10h] [rbp-78h]
  int v97; // [rsp+18h] [rbp-70h]
  int v98; // [rsp+18h] [rbp-70h]
  unsigned int v99; // [rsp+18h] [rbp-70h]
  int v100; // [rsp+18h] [rbp-70h]
  unsigned int v101; // [rsp+18h] [rbp-70h]
  int v102; // [rsp+20h] [rbp-68h]
  int v103; // [rsp+20h] [rbp-68h]
  int v104; // [rsp+24h] [rbp-64h]
  unsigned int v105; // [rsp+24h] [rbp-64h]
  unsigned int v106; // [rsp+24h] [rbp-64h]
  int v107; // [rsp+24h] [rbp-64h]
  int v108; // [rsp+24h] [rbp-64h]
  int v109; // [rsp+24h] [rbp-64h]
  int v110; // [rsp+24h] [rbp-64h]
  __int64 v111; // [rsp+28h] [rbp-60h]
  unsigned int v112; // [rsp+28h] [rbp-60h]
  int v113; // [rsp+28h] [rbp-60h]
  __int64 v114; // [rsp+28h] [rbp-60h]
  int v115; // [rsp+28h] [rbp-60h]
  int v116; // [rsp+30h] [rbp-58h]
  int v117; // [rsp+30h] [rbp-58h]
  unsigned int v118; // [rsp+30h] [rbp-58h]
  unsigned int v119; // [rsp+30h] [rbp-58h]
  int v120; // [rsp+30h] [rbp-58h]
  int v121; // [rsp+34h] [rbp-54h]
  int v122; // [rsp+34h] [rbp-54h]
  bool v123; // [rsp+34h] [rbp-54h]
  unsigned int v124; // [rsp+34h] [rbp-54h]
  unsigned int v125; // [rsp+38h] [rbp-50h]
  unsigned int v126; // [rsp+38h] [rbp-50h]
  unsigned int v127; // [rsp+38h] [rbp-50h]
  unsigned int v128; // [rsp+38h] [rbp-50h]
  unsigned int v129; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v130; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v131; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v132; // [rsp+3Ch] [rbp-4Ch]
  int v133; // [rsp+40h] [rbp-48h]
  int v134; // [rsp+44h] [rbp-44h]
  unsigned int v135; // [rsp+48h] [rbp-40h]
  unsigned int v136; // [rsp+4Ch] [rbp-3Ch]

  if ( a2 == 1 && a3 == 1 )
  {
    v5 = 3;
    if ( *(_DWORD *)(a1 + 16) == 2 )
      v5 = 6;
    v6 = 2;
    return v6 | (v5 << 32);
  }
  if ( !a2 || !a3 )
  {
    v6 = 0;
    v5 = 0;
    return v6 | (v5 << 32);
  }
  v8 = *(_DWORD *)(a1 + 16);
  v9 = a2 >> 1;
  v10 = a3 >> 1;
  v11 = (a2 & 1) + (a2 >> 1);
  v12 = (a2 >> 1) + (a3 >> 1);
  v91 = (a3 >> 1) + (a3 & 1);
  if ( a2 > 9 || a3 > 9 )
  {
LABEL_43:
    v30 = 6;
    if ( v8 == 2 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v13 = v11 + (a3 >> 1) + (a3 & 1) - 1;
  if ( v13 > v12 )
    v13 = (a2 >> 1) + (a3 >> 1);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      v104 = 2;
      v14 = 6;
      v116 = 1;
    }
    else
    {
      v116 = 1;
      v14 = 3;
      v104 = 2 * (v8 != 1);
    }
  }
  else
  {
    v116 = 0;
    v14 = 3;
    v104 = 2;
  }
  v6 = a2 + a3;
  v15 = v9;
  v97 = 2 * v13;
  v16 = (unsigned int)(v6 - 1) >> 1;
  v102 = v13 * v14;
  v17 = (((_BYTE)a2 + (_BYTE)a3) & 1) == 0;
  if ( (((_BYTE)a2 + (_BYTE)a3) & 1) == 0 )
    v16 = (a2 + a3) >> 1;
  v18 = v10;
  if ( (_DWORD)v16 == 1 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v15 == 1 && (_DWORD)v18 == 1 )
      {
LABEL_77:
        v41 = 1;
        if ( v8 != 1 )
          v41 = 2 - ((v8 == 0) - 1);
        v93 = v41;
        goto LABEL_27;
      }
      if ( !(_DWORD)v15 || !(_DWORD)v18 )
        goto LABEL_26;
      if ( (_DWORD)v15 != 1 )
      {
        if ( (_DWORD)v18 == 1 )
          goto LABEL_77;
        v15 = 1;
      }
      if ( (unsigned int)v18 <= 1 )
        break;
      v18 = 1;
    }
LABEL_151:
    v96 = v15 + v18;
    if ( (unsigned int)v16 >= (int)v15 + (int)v18 )
    {
      v130 = (a2 & 1) + v9;
      v126 = v9 + v10;
      v123 = (((_BYTE)a2 + (_BYTE)a3) & 1) == 0;
      v114 = a1;
      v80 = ((__int64 (*)(void))sub_3249B0)();
LABEL_153:
      v16 = (unsigned int)v80;
      a1 = v114;
      v17 = v123;
      v12 = v126;
      v11 = v130;
      v93 = HIDWORD(v80);
      goto LABEL_27;
    }
    v131 = v16;
    v127 = v18;
    v81 = sub_326230(a1, v15, v18, (unsigned int)v16);
    v82 = v127;
    v16 = v131;
    v17 = (((_BYTE)a2 + (_BYTE)a3) & 1) == 0;
    v12 = v9 + v10;
    v11 = (a2 & 1) + v9;
    if ( !v81 )
    {
      v86 = v131;
      v130 = (a2 & 1) + v9;
      v126 = v9 + v10;
      v123 = (((_BYTE)a2 + (_BYTE)a3) & 1) == 0;
      v114 = a1;
      v80 = sub_3254A0(a1, (unsigned int)v15, v82, v86);
      goto LABEL_153;
    }
    v83 = (v127 * (unsigned int)v15) >> 1;
    if ( v8 == 1 )
    {
      v93 = 0;
    }
    else
    {
      v93 = v83 + v96;
      if ( !v8 )
        goto LABEL_27;
    }
    v93 += v83;
  }
  else
  {
LABEL_19:
    if ( (_DWORD)v18 == 1 && (_DWORD)v15 == 1 )
    {
      v15 = 1;
      goto LABEL_22;
    }
    while ( (_DWORD)v15 && (_DWORD)v18 )
    {
LABEL_22:
      if ( (unsigned int)v16 >= (unsigned int)v15 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v18 )
          goto LABEL_151;
        v18 = (unsigned int)v16;
        goto LABEL_19;
      }
      v15 = (unsigned int)v16;
    }
LABEL_26:
    v93 = 0;
    v16 = 0;
  }
LABEL_27:
  if ( (_BYTE)v17 )
    v19 = ((unsigned int)v6 >> 1) + 1;
  else
    v19 = (unsigned int)(v6 + 1) >> 1;
  v20 = v91;
  v21 = v11;
  while ( 1 )
  {
    LOBYTE(v17) = (_DWORD)v20 == 0;
    if ( (_DWORD)v21 == 1 && (_DWORD)v20 == 1 )
    {
      v20 = 1;
LABEL_33:
      v21 = 1;
      if ( (_DWORD)v19 != 1 )
        goto LABEL_34;
      if ( v8 == 1 )
      {
        v42 = 1;
      }
      else
      {
        if ( !v8 )
        {
          v46 = v97 + v16 + 2;
          v45 = v93 + v102 + v104 + v116 + 2;
          goto LABEL_106;
        }
        v42 = 3;
      }
LABEL_90:
      v24 = v19 + v97 + v16 + 1;
      v26 = v93 + v102 + v104 + v116 + v42;
      v43 = v6;
      v44 = v6;
      if ( a3 <= (unsigned int)v6 )
        v43 = a3;
      if ( a2 <= (unsigned int)v6 )
        v44 = a2;
      v5 = (unsigned int)(v44 * v43) >> 1;
      v28 = v6 + v5;
      if ( v8 != 1 )
      {
LABEL_42:
        v29 = v5 + 5 * v6;
        v5 = v28 + (unsigned int)v5;
        if ( v28 + v29 < v26 + 5 * v24 )
          return v6 | (v5 << 32);
        goto LABEL_43;
      }
      goto LABEL_95;
    }
    if ( !(_DWORD)v21 || !(_DWORD)v20 )
    {
      LODWORD(v23) = 0;
      LODWORD(v22) = 0;
LABEL_36:
      v24 = v22 + v97 + v16 + 1;
      v25 = v6;
      v26 = v93 + v102 + v104 + v116 + v23;
      v27 = v6;
      if ( a2 <= (unsigned int)v6 )
        v27 = a2;
      if ( a3 <= (unsigned int)v6 )
        v25 = a3;
      v5 = (unsigned int)(v25 * v27) >> 1;
      if ( v8 != 1 )
      {
        v28 = v6 + v5;
        if ( v8 )
          goto LABEL_42;
        v5 = v28;
        if ( v28 + 5 * (_DWORD)v6 < v26 + 5 * v24 )
          return v6 | (v5 << 32);
LABEL_44:
        v30 = 3;
LABEL_45:
        v31 = v11 + v91;
        v32 = v11 + v91 - 1;
        if ( v32 > v12 )
          v32 = v12;
        v33 = v32;
        v6 = 2 * v32;
        v103 = v30 * v33;
        if ( v9 == 1 && v10 == 1 )
        {
          v94 = v30;
          v34 = 2;
          goto LABEL_50;
        }
        if ( !v9 || !v10 )
        {
          if ( v11 == 1 && v91 == 1 )
          {
            v34 = 0;
            v94 = 0;
LABEL_52:
            v6 = (unsigned int)(v6 + v34 + 2);
LABEL_53:
            v5 = v94 + v30 + v103 - 2;
            return v6 | (v5 << 32);
          }
          if ( !v11 || !v91 )
          {
            v94 = 0;
            v30 = 0;
            goto LABEL_53;
          }
          v34 = 0;
          v94 = 0;
LABEL_113:
          if ( v11 <= 9 && v91 <= 9 )
          {
            v122 = v34;
            v113 = v30;
            v118 = v31;
            v106 = v11;
            v49 = sub_3254A0(a1, v11, v91, v31);
            v50 = v118;
            v11 = v106;
            v51 = v91;
            v30 = v113;
            v52 = v106;
            v34 = v122;
            if ( v118 <= v106 )
              v52 = v118;
            if ( v118 <= v91 )
              v51 = v118;
            v53 = v51 * v52;
            v54 = HIDWORD(v49) + 5 * v49;
            v55 = 5 * v118;
            v56 = v53 >> 1;
            if ( v8 == 1 )
            {
              if ( v56 + v55 < v54 )
              {
                v30 = v56;
                goto LABEL_123;
              }
            }
            else
            {
              v57 = v118 + v56;
              if ( v8 )
              {
                if ( v57 + v56 + v55 < v54 )
                {
                  v30 = v57 + v56;
LABEL_123:
                  v6 = (unsigned int)(v50 + v34 + v6);
                  goto LABEL_53;
                }
              }
              else if ( v57 + v55 < v54 )
              {
                v30 = v118 + v56;
                goto LABEL_123;
              }
            }
          }
          v68 = v11 >> 1;
          v69 = (v11 >> 1) + (v11 & 1);
          v70 = v91 >> 1;
          v71 = (v91 >> 1) + (v91 & 1);
          if ( v11 >> 1 != 1 || (LODWORD(v72) = v30, v73 = 2, v70 != 1) )
          {
            if ( !v68 || !v70 )
            {
              if ( v69 == 1 && v71 == 1 )
              {
                v73 = 0;
                LODWORD(v72) = 0;
LABEL_140:
                LODWORD(v74) = v30;
                v75 = 2;
LABEL_141:
                v76 = v69 + v71 - 1;
                v77 = v70 + v68;
                if ( v76 > v77 )
                  v76 = v77;
                v50 = v75 + v73 + 2 * v76;
                v30 = v72 + v74 + v30 * v76 - 2;
                goto LABEL_123;
              }
              v73 = 0;
              LODWORD(v72) = 0;
              if ( !v69 || !v71 )
              {
                LODWORD(v74) = 0;
                v75 = 0;
                goto LABEL_141;
              }
LABEL_174:
              v109 = v73;
              v100 = v34;
              v92 = v30;
              v84 = sub_32C9F0(a1, v69, v71);
              v30 = v92;
              v34 = v100;
              v73 = v109;
              v75 = v84;
              v74 = HIDWORD(v84);
              goto LABEL_141;
            }
            v107 = v34;
            v98 = v30;
            v78 = sub_32C9F0(a1, v68, v70);
            v30 = v98;
            v34 = v107;
            v73 = v78;
            v72 = HIDWORD(v78);
          }
          if ( v71 == 1 && v69 == 1 )
            goto LABEL_140;
          goto LABEL_174;
        }
        if ( v9 <= 9 && v10 <= 9 )
        {
          v112 = v11;
          v117 = v30;
          v105 = v11 + v91;
          v95 = v12;
          v35 = sub_3254A0(a1, v9, v10, v12);
          v34 = v95;
          v31 = v105;
          v30 = v117;
          v36 = v95;
          v37 = v95;
          v11 = v112;
          if ( v9 <= v95 )
            v36 = a2 >> 1;
          if ( v10 <= v95 )
            v37 = a3 >> 1;
          v38 = 5 * v35 + HIDWORD(v35);
          v94 = (v36 * v37) >> 1;
          v39 = 5 * v34;
          if ( v8 == 1 )
          {
            if ( v94 + v39 < v38 )
              goto LABEL_50;
          }
          else
          {
            v40 = v94 + v34;
            if ( v8 )
            {
              if ( v40 + v94 + v39 < v38 )
              {
                v94 += v40;
                goto LABEL_50;
              }
            }
            else if ( v40 + v39 < v38 )
            {
              v94 += v34;
              goto LABEL_50;
            }
          }
        }
        v58 = a2 >> 2;
        v59 = a3 >> 2;
        v60 = v58 + (v9 & 1);
        v61 = v59 + (v10 & 1);
        if ( v58 != 1 || (v62 = v30, v63 = 2, v59 != 1) )
        {
          if ( !v58 || !v59 )
          {
            if ( v60 == 1 && v61 == 1 )
            {
              v63 = 0;
              v62 = 0;
LABEL_132:
              LODWORD(v64) = v30;
              v65 = 2;
LABEL_133:
              v66 = v60 + v61 - 1;
              v67 = v58 + v59;
              if ( v66 > v67 )
                v66 = v67;
              v34 = v63 + v65 + 2 * v66;
              v94 = v62 + v64 + v30 * v66 - 2;
LABEL_50:
              if ( v91 == 1 && v11 == 1 )
                goto LABEL_52;
              goto LABEL_113;
            }
            v63 = 0;
            v62 = 0;
            if ( !v60 || !v61 )
            {
              LODWORD(v64) = 0;
              v65 = 0;
              goto LABEL_133;
            }
LABEL_175:
            v124 = v11;
            v115 = v62;
            v120 = v63;
            v110 = v30;
            v101 = v31;
            v85 = sub_32C9F0(a1, v60, v61);
            v31 = v101;
            v65 = v85;
            v30 = v110;
            v63 = v120;
            v64 = HIDWORD(v85);
            v62 = v115;
            v11 = v124;
            goto LABEL_133;
          }
          v119 = v11;
          v108 = v30;
          v99 = v31;
          v79 = sub_32C9F0(a1, v58, v59);
          v31 = v99;
          v63 = v79;
          v30 = v108;
          v11 = v119;
          v62 = HIDWORD(v79);
        }
        if ( v60 == 1 && v61 == 1 )
          goto LABEL_132;
        goto LABEL_175;
      }
LABEL_95:
      v45 = 5 * v24;
      goto LABEL_96;
    }
    while ( (unsigned int)v19 < (unsigned int)v21 )
    {
      if ( (_DWORD)v19 == 1 && (_DWORD)v20 == 1 )
        goto LABEL_33;
      v21 = (unsigned int)v19;
    }
    if ( (unsigned int)v19 >= (unsigned int)v20 )
      break;
    v20 = (unsigned int)v19;
  }
  v17 = (unsigned int)(v20 + v21);
  if ( (unsigned int)v19 >= (unsigned int)v17 )
  {
LABEL_34:
    v129 = v11;
    v125 = v12;
    v121 = v16;
    v111 = a1;
    v22 = sub_3249B0(a1, v21, v20, v19, v16, v17);
LABEL_35:
    a1 = v111;
    LODWORD(v16) = v121;
    v12 = v125;
    v11 = v129;
    v23 = HIDWORD(v22);
    goto LABEL_36;
  }
  v136 = v11;
  v135 = v12;
  v133 = v16;
  v132 = v19;
  v128 = v20;
  v134 = v20 + v21;
  v87 = sub_326230(a1, v21, v20, v19);
  v88 = v128;
  v19 = v132;
  LODWORD(v16) = v133;
  v12 = v135;
  v11 = v136;
  if ( !v87 )
  {
    v129 = v136;
    v125 = v135;
    v121 = v133;
    v111 = a1;
    v22 = sub_3254A0(a1, (unsigned int)v21, v88, v19);
    goto LABEL_35;
  }
  v89 = ((unsigned int)v21 * v128) >> 1;
  if ( v8 == 1 )
  {
    v90 = 0;
    goto LABEL_188;
  }
  v90 = v134 + v89;
  if ( v8 )
  {
LABEL_188:
    v42 = v89 + v90;
    goto LABEL_90;
  }
  v46 = v97 + v133 + 1 + v132;
  v45 = v90 + v93 + v102 + v104 + v116;
LABEL_106:
  v47 = v6;
  v26 = 5 * v46;
  v48 = v6;
  if ( a3 <= (unsigned int)v6 )
    v47 = a3;
  if ( a2 <= (unsigned int)v6 )
    v48 = a2;
  v5 = (unsigned int)v6 + ((unsigned int)(v48 * v47) >> 1);
LABEL_96:
  if ( (int)v5 + 5 * (int)v6 >= (unsigned int)(v26 + v45) )
    goto LABEL_44;
  return v6 | (v5 << 32);
}

