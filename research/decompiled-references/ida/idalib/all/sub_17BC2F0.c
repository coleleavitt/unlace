void __fastcall sub_17BC2F0(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  __int64 i; // r15
  char v19; // r15
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 *v24; // rax
  _WORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rdi
  __int64 v32; // r12
  _DWORD *v33; // rdi
  unsigned int (*v34)(void); // rax
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int8 v39; // si
  int v40; // eax
  bool v41; // al
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  const __m128i *v52; // rax
  __m128i *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // rax
  __int64 **v59; // rax
  __int64 *v60; // rdx
  unsigned __int64 v61; // rax
  __int64 *v62; // rcx
  __int64 *v63; // rax
  __int64 *v64; // rax
  char v65; // di
  _WORD **v66; // rax
  __int64 *v67; // rax
  __int64 v68; // rcx
  _WORD **v69; // rax
  unsigned int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  unsigned int v75; // ecx
  __int64 v76; // rax
  unsigned int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r15
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // r15
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  _QWORD *v111; // rax
  bool v112; // [rsp+0h] [rbp-118h]
  __int64 v113; // [rsp+0h] [rbp-118h]
  __int64 v114; // [rsp+0h] [rbp-118h]
  char v115; // [rsp+0h] [rbp-118h]
  __int64 *v116; // [rsp+0h] [rbp-118h]
  char v117; // [rsp+8h] [rbp-110h]
  __int64 v118; // [rsp+8h] [rbp-110h]
  char v119; // [rsp+17h] [rbp-101h]
  char v120; // [rsp+17h] [rbp-101h]
  bool v121; // [rsp+18h] [rbp-100h]
  __int64 v122; // [rsp+20h] [rbp-F8h]
  __int64 v123; // [rsp+20h] [rbp-F8h]
  __int64 v124; // [rsp+28h] [rbp-F0h]
  __int64 v125; // [rsp+28h] [rbp-F0h]
  __int64 v126; // [rsp+30h] [rbp-E8h]
  __int64 v127[2]; // [rsp+38h] [rbp-E0h] BYREF
  _QWORD *v128; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v129[200]; // [rsp+50h] [rbp-C8h] BYREF

  v6 = *(char *)(a2 + 28) < 0;
  v127[0] = a3;
  v117 = (char)a4;
  v112 = a5;
  if ( v6 )
    return;
  v8 = a3;
  if ( *(char *)(a3 + 28) < 0 )
    return;
  v9 = *(_BYTE *)(a3 + 28);
  v10 = a2;
  v11 = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 68;
  v12 = (v9 & 0x7F) - 68;
  if ( (unsigned int)v11 <= 6 )
  {
    v11 = 0;
    v10 = *(_QWORD *)(a2 + 48);
    if ( !(_BYTE)a4 )
      a5 = 0;
    v112 = a5;
    if ( v12 > 6 )
    {
      if ( !v10 )
        return;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 48);
      v127[0] = v8;
      if ( !v10 || !v8 )
        return;
    }
    goto LABEL_9;
  }
  if ( v12 <= 6 )
  {
    v8 = *(_QWORD *)(v8 + 48);
    v127[0] = v8;
    if ( !v8 )
      return;
LABEL_9:
    v119 = 1;
    goto LABEL_10;
  }
  v119 = 0;
LABEL_10:
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
  {
    v15 = 0;
    i = 0;
    goto LABEL_38;
  }
  v13 = sub_B8C3D0(v10, a2, v11, (__int64)a4, a5, a6);
  v11 = *v13;
  v14 = *v13 + 8LL * *((unsigned int *)v13 + 2);
  if ( v11 >= v14 )
  {
    for ( ; v11 != v14; v14 += 8LL )
    {
      a4 = *(_WORD **)v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) == 197 )
        goto LABEL_91;
    }
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  a4 = (_WORD *)v11;
  while ( 1 )
  {
    a2 = *(_QWORD *)a4;
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
      break;
    a4 += 4;
    if ( (_WORD *)v14 == a4 )
      goto LABEL_15;
  }
  if ( (_WORD *)v14 == a4 )
    goto LABEL_15;
LABEL_91:
  v15 = *(_QWORD *)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 197 )
  {
    v63 = (__int64 *)(v11 + 8);
    do
      v15 = *v63++;
    while ( *(_WORD *)(v15 + 36) != 197 );
  }
LABEL_16:
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
  {
LABEL_21:
    v8 = v127[0];
    i = 0;
    goto LABEL_38;
  }
  v16 = sub_B8C3D0(v10, a2, v11, (__int64)a4, a5, a6);
  v11 = *v16;
  v17 = *v16 + 8LL * *((unsigned int *)v16 + 2);
  if ( v11 < v17 )
  {
    a4 = (_WORD *)v11;
    while ( 1 )
    {
      a2 = *(_QWORD *)a4;
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 195 )
        break;
      a4 += 4;
      if ( (_WORD *)v17 == a4 )
        goto LABEL_21;
    }
    v8 = v127[0];
    if ( (_WORD *)v17 != a4 )
      goto LABEL_87;
LABEL_137:
    i = 0;
    goto LABEL_38;
  }
  v8 = v127[0];
  if ( v11 == v17 )
    goto LABEL_137;
  a4 = *(_WORD **)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 195 )
  {
    v69 = (_WORD **)(v17 + 8);
    do
    {
      a4 = v69;
      if ( (_WORD **)v11 == v69 )
        goto LABEL_137;
      a4 = *v69++;
    }
    while ( a4[18] != 195 );
  }
LABEL_87:
  for ( i = *(_QWORD *)v11; *(_WORD *)(*(_QWORD *)v11 + 36LL) != 195; i = *(_QWORD *)v11 )
    v11 += 8LL;
LABEL_38:
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
    goto LABEL_44;
  v24 = sub_B8C3D0(v8, a2, v11, (__int64)a4, a5, a6);
  v28 = *v24;
  v29 = *v24 + 8LL * *((unsigned int *)v24 + 2);
  if ( v28 >= v29 )
  {
    if ( v28 != v29 )
    {
      v25 = *(_WORD **)v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) == 197 )
        goto LABEL_74;
      v66 = (_WORD **)(v29 + 8);
      while ( 1 )
      {
        v25 = v66;
        if ( (_WORD **)v28 == v66 )
          break;
        v25 = *v66++;
        if ( v25[18] == 197 )
          goto LABEL_74;
      }
    }
LABEL_43:
    v30 = 0;
    v31 = v127[0];
    if ( (*(_BYTE *)(v127[0] + 29) & 1) == 0 )
      goto LABEL_44;
    goto LABEL_78;
  }
  v25 = (_WORD *)v28;
  while ( 1 )
  {
    a2 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 197 )
      break;
    v25 += 4;
    if ( (_WORD *)v29 == v25 )
      goto LABEL_43;
  }
  if ( (_WORD *)v29 == v25 )
    goto LABEL_43;
LABEL_74:
  v30 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 197 )
  {
    v58 = (__int64 *)(v28 + 8);
    do
      v30 = *v58++;
    while ( *(_WORD *)(v30 + 36) != 197 );
  }
  v31 = v127[0];
  if ( (*(_BYTE *)(v127[0] + 29) & 1) == 0 )
    goto LABEL_83;
LABEL_78:
  v59 = (__int64 **)sub_B8C3D0(v31, a2, v28, (__int64)v25, v26, v27);
  v60 = *v59;
  v61 = (unsigned __int64)&(*v59)[*((unsigned int *)v59 + 2)];
  if ( (unsigned __int64)v60 >= v61 )
  {
    if ( v60 == (__int64 *)v61 )
      goto LABEL_187;
    if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) == 195 )
      goto LABEL_96;
    v67 = (__int64 *)(v61 + 8);
    while ( v60 != v67 )
    {
      v68 = *v67++;
      if ( *(_WORD *)(v68 + 36) == 195 )
        goto LABEL_96;
    }
LABEL_82:
    if ( !v30 )
      goto LABEL_44;
LABEL_83:
    v32 = 0;
    if ( (*(_BYTE *)(v30 + 38) & 1) == 0 )
      goto LABEL_84;
    goto LABEL_102;
  }
  v62 = v60;
  while ( *(_WORD *)(*v62 + 36) != 195 )
  {
    if ( (__int64 *)v61 == ++v62 )
      goto LABEL_82;
  }
  if ( (__int64 *)v61 == v62 )
  {
LABEL_187:
    if ( v30 )
    {
      v32 = 0;
      if ( (*(_BYTE *)(v30 + 38) & 1) == 0 )
        goto LABEL_84;
LABEL_102:
      v19 = 0;
      goto LABEL_45;
    }
LABEL_44:
    v30 = 0;
    v32 = 0;
    v19 = 0;
    goto LABEL_45;
  }
LABEL_96:
  v32 = *v60;
  if ( *(_WORD *)(*v60 + 36) != 195 )
  {
    v64 = v60 + 1;
    do
      v32 = *v64++;
    while ( *(_WORD *)(v32 + 36) != 195 );
  }
  if ( (!v30 || (*(_BYTE *)(v30 + 38) & 1) != 0) && (*(_BYTE *)(v32 + 38) & 1) != 0 )
    goto LABEL_102;
LABEL_84:
  if ( v15 | i )
  {
    v19 = 1;
    goto LABEL_45;
  }
  if ( v117 )
  {
    v19 = v117;
    goto LABEL_45;
  }
  v19 = 1;
  if ( (*(_BYTE *)(v10 + 29) & 2) != 0 )
    goto LABEL_45;
  if ( sub_17A0250(v10) )
  {
    v19 = sub_B8C400(v10, 1);
    v20 = *(_DWORD *)(v127[0] + 24);
    if ( !v19 )
    {
LABEL_161:
      v75 = 3177;
      goto LABEL_156;
    }
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( v30 )
      {
        sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v20, 0xC69u, 0);
        v19 = 0;
        v21 = sub_17BA610((__int64)v129, v127);
        v22 = v30;
        v23 = v21;
        goto LABEL_29;
      }
      goto LABEL_192;
    }
LABEL_160:
    v19 = 0;
    goto LABEL_161;
  }
  v19 = 0;
  v74 = *(_BYTE *)(v10 + 28) & 0x7F;
  if ( (unsigned int)(v74 - 40) <= 6 )
  {
    v19 = sub_B73BE0(v10) == 0;
    v74 = *(_BYTE *)(v10 + 28) & 0x7F;
  }
  if ( (unsigned int)(v74 - 34) <= 5 && !(unsigned int)sub_B778D0(v10) )
  {
    v19 = sub_B8C400(v10, 1);
    v20 = *(_DWORD *)(v127[0] + 24);
    if ( !v19 )
    {
      v19 = 1;
      v75 = 6559;
      goto LABEL_156;
    }
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
      goto LABEL_160;
    if ( !v30 )
      goto LABEL_192;
    goto LABEL_170;
  }
  if ( sub_B8C400(v10, 1) )
  {
    v20 = *(_DWORD *)(v127[0] + 24);
    if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
      goto LABEL_160;
    if ( !v30 )
    {
LABEL_192:
      sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v20, 0xC69u, 0);
      v96 = sub_17BA610((__int64)v129, v127);
      v19 = 0;
      v22 = v32;
      v23 = v96;
      goto LABEL_29;
    }
    if ( !v19 )
    {
      v77 = 3177;
      goto LABEL_171;
    }
LABEL_170:
    v77 = 6559;
LABEL_171:
    sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v20, v77, 0);
    v78 = sub_17BA610((__int64)v129, v127);
    v22 = v30;
    v23 = v78;
    goto LABEL_29;
  }
  v20 = *(_DWORD *)(v127[0] + 24);
  v75 = v19 == 0 ? 3177 : 6559;
LABEL_156:
  sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v20, v75, 0);
  v76 = sub_17BA610((__int64)v129, v127);
  v22 = v30;
  v23 = v76;
  if ( !v30 )
    v22 = v32;
LABEL_29:
  if ( *(_BYTE *)(v23 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v23 + 32), v22, 0xEu);
  }
  else if ( *(_BYTE *)(v23 + 132) )
  {
    v124 = v22;
    v122 = v23;
    v79 = sub_168B9E0((_QWORD *)v23);
    v81 = v122;
    v82 = v124;
    v83 = v79;
    v84 = *(_QWORD **)(v122 + 16);
    if ( v84 )
    {
      v126 = v83;
      v84 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v84 + 32LL))(
                        v84,
                        *v84,
                        v122,
                        v124);
      v83 = v126;
      v82 = v124;
      v81 = v122;
    }
    v125 = v82;
    v123 = v81;
    v128 = v84;
    v85 = sub_1587BC0(v83, (__int64 *)&v128, v81, v82, v83, v80);
    sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * *(unsigned int *)(v123 + 128) + 8), v125, 0xEu);
  }
  sub_15F7200(v129);
  sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x70u, 0);
  sub_15F7200(v129);
  if ( !v19 )
  {
    sub_B88650(v127[0], 1);
    return;
  }
LABEL_45:
  v33 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  v34 = *(unsigned int (**)(void))(*(_QWORD *)v33 + 416LL);
  if ( (char *)v34 == (char *)sub_102B960 )
  {
    LOBYTE(v35) = sub_102B960(v33);
    v37 = v35;
  }
  else
  {
    v37 = v34();
  }
  v38 = v127[0];
  v39 = *(_BYTE *)(v127[0] + 28) & 0x7F;
  v40 = v39;
  if ( (unsigned int)v39 - 40 <= 6 )
  {
    if ( v39 == 43 )
    {
      v42 = *(_QWORD *)(a1 + 248);
      v115 = v37;
      v43 = sub_B74100(v127[0], v42);
      if ( v15 )
      {
        LOBYTE(v37) = v115;
        if ( !v19 )
        {
          v38 = v127[0];
LABEL_141:
          v112 = v43 != 0;
          v65 = 0;
          goto LABEL_142;
        }
      }
    }
    else
    {
      v113 = v127[0];
      v120 = v37;
      v41 = sub_179A810(v127[0]);
      v42 = *(_QWORD *)(a1 + 248);
      v121 = v41;
      v43 = sub_B74100(v113, v42);
      if ( v15 )
      {
        LOBYTE(v37) = v120;
        if ( !v19 )
        {
          v38 = v127[0];
          if ( v121 )
            goto LABEL_63;
          goto LABEL_141;
        }
      }
    }
LABEL_62:
    v38 = v127[0];
LABEL_63:
    v40 = *(_BYTE *)(v38 + 28) & 0x7F;
    goto LABEL_64;
  }
  v42 = (unsigned int)v39 - 34;
  if ( (unsigned int)v42 > 5 )
  {
    v65 = v19 | (v15 == 0);
    if ( v65 )
      goto LABEL_64;
    goto LABEL_142;
  }
  v44 = *(_QWORD *)(v127[0] + 56);
  v65 = 0;
  v42 = *(_QWORD *)(v127[0] + 80) >> 16;
  if ( (v44 & 4) != 0 )
  {
    v44 &= 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)v44 )
    {
      v44 = *(unsigned __int16 *)(v127[0] + 30);
      if ( (v44 & 0x180) != 0 )
      {
        v44 &= 0x22u;
        v65 = (_DWORD)v44 != 0;
      }
    }
  }
  if ( !v15 )
    goto LABEL_64;
  v42 = (*(_QWORD *)(v127[0] + 80) >> 16) & 1LL;
  if ( v19 )
  {
    if ( !(_BYTE)v42 )
      goto LABEL_64;
    goto LABEL_54;
  }
  if ( !(_BYTE)v42 )
  {
LABEL_142:
    if ( (*(_BYTE *)(v38 + 31) & 8) != 0 || v65 )
      goto LABEL_63;
LABEL_144:
    if ( (_BYTE)v37 && v112 )
    {
      v70 = *(_DWORD *)(v38 + 24);
      if ( !v117 )
      {
        sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v70, 0x1C97u, 0);
        sub_17BA610((__int64)v129, v127);
        sub_15F7200(v129);
        sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0x70u, 0);
        sub_15F7200(v129);
        v101 = v127[0];
        if ( (*(_BYTE *)(v127[0] + 29) & 1) != 0 )
        {
          sub_179C8D0(v127[0], a1 + 8, v97, v98, v99, v100);
          v101 = v127[0];
        }
        v42 = sub_B325D0(*(_QWORD *)(a1 + 248), *(_QWORD *)(v30 + 24), 0);
        sub_B8CC60(v101, v42, v102, v103, v104, v105);
        v38 = v127[0];
        v40 = *(_BYTE *)(v127[0] + 28) & 0x7F;
        goto LABEL_64;
      }
      sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), v70, 0xC6Du, 0);
      sub_15F7200(v129);
      v42 = a1 + 8;
      sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v15 + 24), 0x16A6u, 0);
      sub_15F7200(v129);
      v38 = v127[0];
      if ( (*(_BYTE *)(v127[0] + 29) & 1) == 0 )
        goto LABEL_63;
    }
    else
    {
      if ( v117 && (_BYTE)v37 )
        goto LABEL_63;
      v116 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v38 + 24), 0x1C96u, 0);
      v93 = sub_17BA610((__int64)v129, v127);
      v94 = v93;
      if ( *(_BYTE *)(v93 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v93 + 32), v15, 0xEu);
      }
      else if ( *(_BYTE *)(v93 + 132) )
      {
        v118 = sub_168B9E0((_QWORD *)v93);
        v110 = *(_QWORD *)(v94 + 16);
        if ( v110 )
          v110 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v110 + 32LL))(*(_QWORD *)(v94 + 16));
        v128 = (_QWORD *)v110;
        v111 = sub_1587BC0(v118, (__int64 *)&v128, v106, v107, v108, v109);
        sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * *(unsigned int *)(v94 + 128) + 8), v15, 0xEu);
      }
      sub_15F7200(v129);
      sub_168B9F0((__int64)v129, v116, *(_DWORD *)(v10 + 24), 0x70u, 0);
      sub_15F7200(v129);
      v42 = a1 + 8;
      sub_168B9F0((__int64)v129, v116, *(_DWORD *)(v15 + 24), 0x1889u, 0);
      sub_15F7200(v129);
      if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
        sub_179C8D0(v10, (__int64)v116, v95, v71, v72, v73);
      v38 = v127[0];
      if ( (*(_BYTE *)(v127[0] + 29) & 1) == 0 )
        goto LABEL_63;
    }
    sub_179C8D0(v38, v42, v38, v71, v72, v73);
    v38 = v127[0];
    v40 = *(_BYTE *)(v127[0] + 28) & 0x7F;
    goto LABEL_64;
  }
  if ( !(_BYTE)v37 )
    goto LABEL_55;
  if ( !v119 )
  {
LABEL_54:
    if ( (_BYTE)v37 )
      goto LABEL_64;
LABEL_55:
    if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
    {
      sub_179C8D0(v10, v42, v127[0], v37, v44, v36);
      v38 = v127[0];
    }
    if ( (*(_BYTE *)(v38 + 29) & 1) != 0 )
    {
      sub_179C8D0(v38, v42, v38, v37, v44, v36);
      v38 = v127[0];
    }
    sub_168B9F0((__int64)v129, (__int64 *)(a1 + 8), *(_DWORD *)(v38 + 24), 0x1AC8u, 0);
    v42 = (__int64)v127;
    v45 = sub_17BA610((__int64)v129, v127);
    v46 = v45;
    if ( *(_BYTE *)(v45 + 120) )
    {
      v42 = v15;
      sub_AE9DF0((unsigned __int8 **)(v45 + 32), v15, 0xEu);
    }
    else if ( *(_BYTE *)(v45 + 132) )
    {
      v90 = sub_168B9E0((_QWORD *)v45);
      v91 = *(_QWORD *)(v46 + 16);
      if ( v91 )
        v91 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v91 + 32LL))(*(_QWORD *)(v46 + 16));
      v128 = (_QWORD *)v91;
      v92 = sub_1587BC0(v90, (__int64 *)&v128, v86, v87, v88, v89);
      v42 = v15;
      sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * *(unsigned int *)(v46 + 128) + 8), v15, 0xEu);
    }
    sub_15F7200(v129);
    goto LABEL_62;
  }
  if ( (*(_BYTE *)(v127[0] + 31) & 8) == 0 && !v65 )
    goto LABEL_144;
LABEL_64:
  if ( (unsigned int)(v40 - 35) <= 3 )
  {
    v114 = v38;
    if ( (unsigned int)sub_B778D0(v38) == 2 && !(v30 | v32) )
    {
      v47 = sub_B72690(v114 + 72);
      v51 = v47 - 64;
      if ( v47 )
        v47 -= 64LL;
      v52 = (const __m128i *)sub_17A7420(v47, v42, v51, v48, v49, v50);
      if ( v52 )
      {
        v53 = sub_B24FF0(v52, *(_QWORD *)(a1 + 248));
        v53[2].m128i_i8[6] |= 1u;
        sub_B8CC60(v127[0], (__int64)v53, v54, v55, v56, v57);
      }
    }
  }
}
