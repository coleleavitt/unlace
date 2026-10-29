void __fastcall sub_1C79330(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 *v12; // r15
  bool v13; // zf
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  signed __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 *i; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned int v35; // edx
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rdx
  char v40; // dl
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  _QWORD *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  __int64 v61; // rbp
  __int64 v62; // r15
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r14
  __int64 v70; // rax
  _QWORD *v71; // rax
  unsigned __int64 *v72; // rax
  unsigned __int64 v73; // rax
  unsigned int v74; // r14d
  __int64 v75; // r15
  __int64 *v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r14
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r14
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r14
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r15
  __int64 v112; // rcx
  __int64 v113; // rsi
  char v114; // al
  char v115; // dl
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r14
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r14
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // r15
  __int64 v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // [rsp+8h] [rbp-100h]
  __int64 v140; // [rsp+20h] [rbp-E8h]
  __int64 v141; // [rsp+20h] [rbp-E8h]
  __int64 v142; // [rsp+20h] [rbp-E8h]
  __int64 v143; // [rsp+20h] [rbp-E8h]
  __int64 v144; // [rsp+20h] [rbp-E8h]
  __int64 v145; // [rsp+20h] [rbp-E8h]
  __int64 v146; // [rsp+28h] [rbp-E0h]
  __int64 v147; // [rsp+28h] [rbp-E0h]
  __int64 v148; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v149; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v150[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v151; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v152[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v153; // [rsp+B8h] [rbp-50h]
  unsigned int v154; // [rsp+C0h] [rbp-48h]
  char v155; // [rsp+C4h] [rbp-44h]

  v7 = 0;
  v139 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v8 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v10 = *((unsigned int *)v8 + 2);
  v11 = *v8 + 8 * v10;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    v12 = (__int64 *)*sub_B8C3D0(a2, a2, v10, v9, a5, a6);
  else
    v12 = nullptr;
  v7 = 0;
  v13 = v12 == (__int64 *)v11;
  if ( (unsigned __int64)v12 >= v11 )
    goto LABEL_39;
LABEL_5:
  v14 = v12;
  while ( *(_WORD *)(*v14 + 36) != 353 )
  {
    if ( (__int64 *)v11 == ++v14 )
      goto LABEL_8;
  }
  do
  {
LABEL_29:
    v31 = *v12;
    for ( i = v12 + 1; *(_WORD *)(v31 + 36) != 353; ++i )
    {
      v31 = *i;
      v12 = i;
    }
    if ( v7 )
    {
      sub_168B6C0((__int64)a1);
      v33 = *(_QWORD *)&byte_8[**(_QWORD **)(v7 + 40) & 0xFFFFFFFFFFFFFFF0LL];
      v34 = *(_QWORD *)&byte_8[**(_QWORD **)(v31 + 40) & 0xFFFFFFFFFFFFFFF0LL];
      v35 = *(_DWORD *)(v31 + 24);
      if ( (v34 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v34 | (unsigned __int8)**(_QWORD **)(v31 + 40)) & 7) != (v33 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v33 | (unsigned __int8)**(_QWORD **)(v7 + 40)) & 7) )
      {
        sub_168B9F0((__int64)v150, a1, v35, 0x13C7u, 0);
        v36 = *(__int64 **)(v31 + 40);
        if ( v153 )
        {
          sub_AE9DF0(v152, *v36, 8u);
          v40 = v153;
        }
        else
        {
          if ( !v155 )
          {
            v37 = **(_QWORD **)(v7 + 40);
            goto LABEL_36;
          }
          v140 = *v36;
          v42 = sub_168B9E0(v150);
          v45 = v140;
          v46 = v42;
          v47 = v151;
          if ( v151 )
          {
            v146 = v140;
            v141 = v46;
            v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
            v45 = v146;
            v46 = v141;
          }
          v142 = v45;
          v149 = v47;
          v48 = sub_1587BC0(v46, &v149, v46, v45, v43, v44);
          sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v154 + 8), v142, 8u);
          v40 = v153;
        }
        v41 = *(__int64 **)(v7 + 40);
        v37 = *v41;
        if ( v40 )
        {
          sub_AE9DF0(v152, *v41, 8u);
LABEL_37:
          sub_15F7200(v150);
          a2 = (__int64)a1;
          sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x1889u, 0);
          sub_15F7200(v150);
          *(_BYTE *)(v31 + 48) = 1;
          goto LABEL_38;
        }
LABEL_36:
        if ( v155 )
        {
          v143 = v37;
          v49 = sub_168B9E0(v150);
          v52 = v143;
          v53 = v49;
          v54 = v151;
          if ( v151 )
          {
            v147 = v143;
            v144 = v53;
            v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
            v52 = v147;
            v53 = v144;
          }
          v145 = v52;
          v149 = v54;
          v55 = sub_1587BC0(v53, &v149, v53, v52, v50, v51);
          sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v154 + 8), v145, 8u);
        }
        goto LABEL_37;
      }
      sub_168B9F0((__int64)v150, a1, v35, 0x1CEFu, 0);
      sub_15F7200(v150);
      a2 = (__int64)a1;
      sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x1889u, 0);
      sub_15F7200(v150);
    }
    else
    {
      v7 = v31;
    }
LABEL_38:
    v13 = ++v12 == (__int64 *)v11;
    if ( (unsigned __int64)v12 < v11 )
      goto LABEL_5;
LABEL_39:
    if ( v13 )
      goto LABEL_8;
    v38 = (__int64 *)(v11 + 8);
  }
  while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 353 );
  while ( v12 != v38 )
  {
    v39 = *v38++;
    if ( *(_WORD *)(v39 + 36) == 353 )
      goto LABEL_29;
  }
LABEL_8:
  v15 = **(_QWORD **)(v7 + 40) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)v15;
  if ( (*(_BYTE *)(*(_QWORD *)v15 + 17LL) & 4) == 0 )
  {
    v74 = *(_DWORD *)(v7 + 24);
    v75 = *a1;
    v149 = **(_QWORD **)(v7 + 40);
    if ( !(unsigned __int8)sub_F613D0(*(_QWORD *)v15, a2, v15, v16, a5, a6) )
    {
      v76 = (__int64 *)(v75 + 8);
      sub_168B9F0((__int64)v150, v76, v74, 0x1CF1u, 0);
      sub_1605D30((__int64)v150, &v149);
      sub_15F7200(v150);
      v79 = sub_F63050(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), &v149, v77, v78);
      v15 = *(unsigned __int8 *)(v79 + 16);
      if ( (unsigned int)(v15 - 47) > 1 )
      {
        if ( (_BYTE)v15 == 36 )
        {
          v15 = *(unsigned int *)(sub_F62610(v79, (__int64)&v149, v15, v16, a5, a6) + 24);
          goto LABEL_90;
        }
      }
      else
      {
        v15 = *((unsigned int *)sub_F60F10(v79, (__int64)&v149, v15, v16, a5, a6) + 6);
LABEL_90:
        if ( (_DWORD)v15 )
        {
          sub_168B9F0((__int64)v150, v76, v15, 0x172Eu, 0);
          sub_1605D30((__int64)v150, &v149);
          sub_15F7200(v150);
        }
      }
      *(_BYTE *)(v7 + 48) = 1;
    }
  }
  v17 = *(_QWORD *)(v139 + 104);
  if ( (((unsigned __int8)v17 | (unsigned __int8)(v17 >> 1)) & 1) == 0 )
  {
    v17 &= 0xFFFFFFFFFFFFFFFCLL;
    v18 = v17;
    if ( v17 )
    {
      if ( *(char *)(v17 + 28) >= 0 && (*(_BYTE *)(v17 + 29) & 1) != 0 )
      {
        v72 = sub_B8C3D0(v17, v17, v15, v16, a5, a6);
        v15 = *v72;
        v73 = *v72 + 8LL * *((unsigned int *)v72 + 2);
        if ( v15 >= v73 )
        {
          if ( v15 == v73 )
            goto LABEL_12;
          while ( 1 )
          {
            v16 = *(_QWORD *)v73;
            if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) == 353 )
              break;
            v73 += 8LL;
            if ( v15 == v73 )
              goto LABEL_12;
          }
        }
        else
        {
          v16 = v15;
          while ( 1 )
          {
            v17 = *(_QWORD *)v16;
            if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 353 )
              break;
            v16 += 8;
            if ( v73 == v16 )
              goto LABEL_12;
          }
          if ( v16 == v73 )
            goto LABEL_12;
        }
        while ( 1 )
        {
          v111 = *(_QWORD *)v15;
          if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 353 )
            break;
          v15 += 8LL;
        }
        if ( !*(_BYTE *)(v111 + 48) )
        {
          sub_168B6C0((__int64)a1);
          v112 = *(_QWORD *)&byte_8[**(_QWORD **)(v111 + 40) & 0xFFFFFFFFFFFFFFF0LL];
          v113 = *(_QWORD *)&byte_8[**(_QWORD **)(v7 + 40) & 0xFFFFFFFFFFFFFFF0LL];
          v114 = v112 | **(_QWORD **)(v111 + 40);
          v115 = v113 | **(_QWORD **)(v7 + 40);
          v16 = v112 & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v113 & 0xFFFFFFFFFFFFFFF8LL;
          v15 = v17 | v115 & 7;
          if ( v15 != (v16 | v114 & 7) )
          {
            sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C7u, 0);
            v148 = **(_QWORD **)(v7 + 40);
            v116 = sub_162B6D0((__int64)v150, &v148);
            v149 = **(_QWORD **)(v111 + 40);
            sub_162B6D0(v116, &v149);
            sub_15F7200(v150);
            v17 = (signed __int64)a1;
            sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v111 + 24), 0x188Bu, 0);
            if ( v153 )
            {
              v17 = v18;
              sub_AE9DF0(v152, v18, 0xAu);
            }
            else if ( v155 )
            {
              v136 = sub_168B9E0(v150);
              v137 = v151;
              if ( v151 )
                v137 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
              v149 = v137;
              v138 = sub_1587BC0(v136, &v149, v132, v133, v134, v135);
              v17 = v18;
              sub_AE9DF0((unsigned __int8 **)(*v138 + 32LL * v154 + 8), v18, 0xAu);
            }
            sub_15F7200(v150);
            *(_BYTE *)(v7 + 48) = 1;
          }
        }
      }
    }
  }
LABEL_12:
  if ( (*(_BYTE *)(v139 + 28) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)v139) )
  {
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 0;
      sub_AE9DF0(v152, 0, 2u);
    }
    else if ( v155 )
    {
      v128 = sub_168B9E0(v150);
      v129 = v151;
      if ( v151 )
        v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v129;
      v130 = sub_1587BC0(v128, &v149, v124, v125, v126, v127);
      v17 = 0;
      sub_AE9DF0((unsigned __int8 **)(*v130 + 32LL * v154 + 8), 0, 2u);
    }
    sub_15F7200(v150);
    *(_BYTE *)(v7 + 48) = 1;
    if ( sub_B748A0(v139, v17, v63, v64) )
      goto LABEL_69;
LABEL_15:
    v19 = v139;
    if ( (*(_BYTE *)(v139 + 83) & 2) == 0 )
      goto LABEL_16;
LABEL_73:
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 3;
      sub_AE9DF0(v152, 3, 2u);
      sub_15F7200(v150);
      *(_BYTE *)(v7 + 48) = 1;
      goto LABEL_17;
    }
    if ( v155 )
    {
      v98 = sub_168B9E0(v150);
      v99 = v151;
      if ( v151 )
        v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v99;
      v100 = sub_1587BC0(v98, &v149, v94, v95, v96, v97);
      v17 = 3;
      sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v154 + 8), 3, 2u);
    }
LABEL_75:
    sub_15F7200(v150);
    *(_BYTE *)(v7 + 48) = 1;
    goto LABEL_17;
  }
  if ( !sub_B748A0(v139, v17, v15, v16) )
    goto LABEL_15;
LABEL_69:
  v17 = (signed __int64)a1;
  sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
  if ( v153 )
  {
    v17 = 1;
    sub_AE9DF0(v152, 1, 2u);
    sub_15F7200(v150);
    *(_BYTE *)(v7 + 48) = 1;
  }
  else
  {
    if ( v155 )
    {
      v91 = sub_168B9E0(v150);
      v92 = v151;
      if ( v151 )
        v92 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v92;
      v93 = sub_1587BC0(v91, &v149, v87, v88, v89, v90);
      v17 = 1;
      sub_AE9DF0((unsigned __int8 **)(*v93 + 32LL * v154 + 8), 1, 2u);
    }
    sub_15F7200(v150);
    *(_BYTE *)(v7 + 48) = 1;
  }
  v19 = v139;
  if ( (*(_BYTE *)(v139 + 83) & 2) != 0 )
    goto LABEL_73;
LABEL_16:
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19) + 82) & 0x40) != 0 )
  {
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 2;
      sub_AE9DF0(v152, 2, 2u);
    }
    else if ( v155 )
    {
      v69 = sub_168B9E0(v150);
      v70 = v151;
      if ( v151 )
        v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v70;
      v71 = sub_1587BC0(v69, &v149, v65, v66, v67, v68);
      v17 = 2;
      sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v154 + 8), 2, 2u);
    }
    goto LABEL_75;
  }
LABEL_17:
  v22 = *(_BYTE *)(v139 + 84) & 3;
  if ( v22 == 2 )
  {
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 5;
      sub_AE9DF0(v152, 5, 2u);
    }
    else if ( v155 )
    {
      v84 = sub_168B9E0(v150);
      v85 = v151;
      if ( v151 )
        v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v85;
      v86 = sub_1587BC0(v84, &v149, v80, v81, v82, v83);
      v17 = 5;
      sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v154 + 8), 5, 2u);
    }
  }
  else
  {
    if ( !v22 )
      goto LABEL_19;
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 4;
      sub_AE9DF0(v152, 4, 2u);
    }
    else if ( v155 )
    {
      v121 = sub_168B9E0(v150);
      v122 = v151;
      if ( v151 )
        v122 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
      v149 = v122;
      v123 = sub_1587BC0(v121, &v149, v117, v118, v119, v120);
      v17 = 4;
      sub_AE9DF0((unsigned __int8 **)(*v123 + 32LL * v154 + 8), 4, 2u);
    }
  }
  sub_15F7200(v150);
  *(_BYTE *)(v7 + 48) = 1;
LABEL_19:
  if ( (unsigned __int8)sub_B74ED0(v139, v17, v20, v21) )
  {
    v17 = (signed __int64)a1;
    sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v7 + 24), 0x13C6u, 0);
    if ( v153 )
    {
      v17 = 6;
      sub_AE9DF0(v152, 6, 2u);
      sub_15F7200(v150);
      *(_BYTE *)(v7 + 48) = 1;
    }
    else
    {
      if ( v155 )
      {
        v105 = sub_168B9E0(v150);
        v106 = v151;
        if ( v151 )
          v106 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v151 + 32LL))(v151);
        v149 = v106;
        v107 = sub_1587BC0(v105, &v149, v101, v102, v103, v104);
        v17 = 6;
        sub_AE9DF0((unsigned __int8 **)(*v107 + 32LL * v154 + 8), 6, 2u);
      }
      sub_15F7200(v150);
      *(_BYTE *)(v7 + 48) = 1;
    }
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v139 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 25;
  if ( (unsigned int)v25 > 1 )
    v24 = sub_F63050(v24, v17, v25, v23);
  v26 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v26 && (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v26 + 17) & 4) == 0 )
  {
    v56 = *(_DWORD *)(v7 + 24);
    v57 = 5061;
    goto LABEL_58;
  }
  v28 = *(_QWORD *)(*(_QWORD *)(v139 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v29 = (unsigned int)*(unsigned __int8 *)(v28 + 16) - 25;
  if ( (unsigned int)v29 > 1 )
    v28 = sub_F63050(v28, v17, v29, v27);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    goto LABEL_27;
  v108 = *(_QWORD *)(*(_QWORD *)(v139 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v109 = (unsigned int)*(unsigned __int8 *)(v108 + 16) - 25;
  if ( (unsigned int)v109 > 1 )
    v108 = sub_F63050(v108, v17, v109, v27);
  v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v108 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v110 + 16) == 13 && ((*(_WORD *)(v110 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
LABEL_27:
    v30 = v139;
    if ( *(char *)(v139 + 28) >= 0 )
      goto LABEL_59;
  }
  else
  {
    v56 = *(_DWORD *)(v7 + 24);
    v57 = 5064;
LABEL_58:
    sub_168B9F0((__int64)v150, a1, v56, v57, 0);
    sub_15F7200(v150);
    v30 = v139;
    *(_BYTE *)(v7 + 48) = 1;
    if ( *(char *)(v139 + 28) >= 0 )
    {
LABEL_59:
      if ( !(unsigned __int8)sub_B8E340(v30) && !*(_BYTE *)(v7 + 48) )
      {
        v58 = sub_168B6C0((__int64)a1);
        v59 = sub_A86A40(v58, **(_QWORD **)(v7 + 40));
        v60 = v59;
        if ( v59 )
        {
          v61 = *(_QWORD *)(v59 + 8);
          if ( !v61
            || v139 != v61
            && (v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139),
                v62 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61)) )
          {
            sub_168B9F0((__int64)v150, a1, *(_DWORD *)(v139 + 24), 0x13C9u, 0);
            sub_15F7200(v150);
            sub_168B9F0((__int64)v150, a1, *(_DWORD *)(*(_QWORD *)(v60 + 8) + 24LL), 0x70u, 0);
            sub_15F7200(v150);
            *(_BYTE *)(v7 + 48) = 1;
          }
        }
        else
        {
          v131 = sub_168B6C0((__int64)a1);
          sub_AB9E50(v131, (char *)v139);
        }
      }
    }
  }
}
