char __fastcall sub_18A29A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 *v13; // rbx
  char result; // al
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 *v22; // rax
  char v23; // al
  __int64 *v24; // rax
  __int64 **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  char v32; // bp
  unsigned __int64 *v33; // rax
  __int64 *v34; // rax
  char v35; // al
  __int64 v36; // rax
  char v37; // bp
  unsigned __int64 *v38; // rax
  __int64 *v39; // rax
  char v40; // al
  __int64 v41; // rax
  unsigned __int64 *v42; // rax
  __int64 **v43; // rax
  unsigned __int64 *v44; // rax
  unsigned __int64 *v45; // rax
  unsigned __int64 *v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rsi
  unsigned __int8 v51; // al
  __int64 v52; // r13
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // eax
  unsigned int v63; // edx
  int v64; // r13d
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 *v67; // rax
  __int64 *v68; // rax
  __int64 **v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r15
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 *v90; // [rsp+8h] [rbp-110h]
  __int64 v91; // [rsp+8h] [rbp-110h]
  __int64 *v92; // [rsp+10h] [rbp-108h]
  char v93; // [rsp+18h] [rbp-100h]
  __int64 v94; // [rsp+18h] [rbp-100h]
  int v95; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v96; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v97; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v99[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v101[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v102; // [rsp+C8h] [rbp-50h]
  unsigned int v103; // [rsp+D0h] [rbp-48h]
  char v104; // [rsp+D4h] [rbp-44h]

  v4 = a2;
  v6 = sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(a3 + 60) & 2) == 0 || (*(_BYTE *)(a2 + 60) & 2) != 0 )
    goto LABEL_3;
  v47 = v6;
  v96 = *(_QWORD *)(a2 + 80);
  v48 = sub_BA8620(a2);
  v49 = *(_QWORD *)(a2 + 16);
  v98 = v48;
  if ( (v49 & 4) != 0 )
    v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
  v51 = *(_BYTE *)(v50 + 8) & 0x7F;
  if ( v51 != 20 )
  {
    if ( (v51 == 23 || (unsigned int)v51 - 21 <= 1 || v51 == 22) && v50 != 48 )
    {
      v52 = *(_QWORD *)(v50 + 40);
      if ( v52 )
        goto LABEL_90;
    }
LABEL_132:
    sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v4 + 24), 0x1CA1u, 0);
    v56 = v99;
    goto LABEL_91;
  }
  v52 = v50 - 48;
  if ( v50 == 48 )
    goto LABEL_132;
LABEL_90:
  sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v4 + 24), 0x1CA0u, 0);
  v97 = sub_A82070(v47, v52, 0, v53, v54, v55);
  v56 = (_QWORD *)sub_162B6D0((__int64)v99, (__int64 *)&v97);
LABEL_91:
  v57 = sub_1605D30((__int64)v56, &v96);
  sub_15884C0(v57, &v98);
  sub_15F7200(v99);
  v62 = sub_BA8080(a3, (__int64)&v98, v58, v59, v60, v61);
  v63 = *(_DWORD *)(a3 + 24);
  v64 = v62;
  if ( v62 )
  {
    sub_168B9F0((__int64)v99, a1, v63, 0x18CBu, 0);
    a2 = (__int64)&v95;
    v95 = 0;
    v65 = sub_1587D10((__int64)v99, &v95);
    v66 = v65;
    if ( *(_BYTE *)(v65 + 120) )
    {
      a2 = v64;
      sub_AE9DF0((unsigned __int8 **)(v65 + 32), v64, 2u);
    }
    else if ( *(_BYTE *)(v65 + 132) )
    {
      v84 = sub_168B9E0((_QWORD *)v65);
      v88 = *(_QWORD *)(v66 + 16);
      if ( v88 )
      {
        v91 = v84;
        v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
        v84 = v91;
      }
      v97 = v88;
      v89 = sub_1587BC0(v84, (__int64 *)&v97, v84, v85, v86, v87);
      a2 = v64;
      sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v66 + 128) + 8), v64, 2u);
    }
  }
  else
  {
    a2 = (__int64)a1;
    sub_168B9F0((__int64)v99, a1, v63, 0x18CDu, 0);
  }
  sub_15F7200(v99);
LABEL_3:
  if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
  {
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_5;
LABEL_46:
    v32 = 0;
    goto LABEL_47;
  }
  v42 = sub_B8C3D0(v4, a2, v7, (__int64)v8, v9, v10);
  v7 = *v42;
  v8 = (__int64 *)(*v42 + 8LL * *((unsigned int *)v42 + 2));
  if ( *v42 < (unsigned __int64)v8 )
  {
    v46 = (unsigned __int64 *)*v42;
    while ( 1 )
    {
      v7 = *v46;
      if ( *(_WORD *)(*v46 + 36) == 71 )
        break;
      if ( v8 == (__int64 *)++v46 )
        goto LABEL_75;
    }
    if ( v8 == (__int64 *)v46 )
    {
LABEL_75:
      if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      {
        if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
          goto LABEL_5;
        goto LABEL_77;
      }
      goto LABEL_46;
    }
  }
  else
  {
    if ( (__int64 *)v7 == v8 )
      goto LABEL_75;
    if ( *(_WORD *)(*v8 + 36) != 71 )
    {
      v43 = (__int64 **)(v8 + 1);
      do
      {
        v8 = (__int64 *)v43;
        if ( (__int64 **)v7 == v43 )
          goto LABEL_75;
        v8 = *v43++;
      }
      while ( *((_WORD *)v8 + 18) != 71 );
    }
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v32 = 1;
LABEL_47:
    v33 = sub_B8C3D0(a3, a2, v7, (__int64)v8, v9, v10);
    v8 = (__int64 *)*v33;
    v7 = *v33 + 8LL * *((unsigned int *)v33 + 2);
    if ( *v33 < v7 )
    {
      v67 = (__int64 *)*v33;
      while ( 1 )
      {
        a2 = *v67;
        v8 = v67;
        if ( *(_WORD *)(*v67 + 36) == 71 )
          break;
        if ( (__int64 *)v7 == ++v67 )
          goto LABEL_53;
      }
    }
    else
    {
      if ( v8 == (__int64 *)v7 )
      {
LABEL_53:
        v35 = 0;
        goto LABEL_54;
      }
      if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 71 )
      {
        v34 = (__int64 *)(v7 + 8);
        do
        {
          v7 = (unsigned __int64)v34;
          if ( v8 == v34 )
            goto LABEL_53;
          a2 = *v34++;
        }
        while ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 71 );
      }
    }
    v35 = v8 != (__int64 *)v7;
LABEL_54:
    if ( v35 == v32 )
      goto LABEL_58;
  }
  v36 = sub_168B6E0((__int64)a1);
  sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v4 + 24), (*(_BYTE *)(v36 + 107) & 4) == 0 ? 7162 : 4336, 0);
  LODWORD(v98) = 1;
  sub_1587D10((__int64)v99, (int *)&v98);
  sub_15F7200(v99);
  a2 = (__int64)a1;
  sub_168B9F0((__int64)v99, a1, *(_DWORD *)(a3 + 24), 0x188Bu, 0);
  if ( v102 )
  {
    a2 = (__int64)"method";
    sub_AE9DF0(v101, (__int64)"method", 1u);
  }
  else if ( v104 )
  {
    v74 = sub_168B9E0(v99);
    v75 = v100;
    if ( v100 )
      v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 32LL))(v100);
    v98 = v75;
    v76 = sub_1587BC0(v74, &v98, v70, v71, v72, v73);
    a2 = (__int64)"method";
    sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v103 + 8), (__int64)"method", 1u);
  }
  sub_15F7200(v99);
LABEL_58:
  if ( (*(_BYTE *)(v4 + 29) & 1) == 0 )
    goto LABEL_59;
LABEL_77:
  v44 = sub_B8C3D0(v4, a2, v7, (__int64)v8, v9, v10);
  v7 = *v44;
  v8 = (__int64 *)(*v44 + 8LL * *((unsigned int *)v44 + 2));
  if ( *v44 >= (unsigned __int64)v8 )
  {
    if ( (__int64 *)v7 != v8 )
    {
      if ( *(_WORD *)(*v8 + 36) == 266 )
        goto LABEL_115;
      v69 = (__int64 **)(v8 + 1);
      while ( 1 )
      {
        v8 = (__int64 *)v69;
        if ( (__int64 **)v7 == v69 )
          break;
        v8 = *v69++;
        if ( *((_WORD *)v8 + 18) == 266 )
          goto LABEL_115;
      }
    }
LABEL_59:
    v37 = 0;
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_5;
LABEL_60:
    v38 = sub_B8C3D0(a3, a2, v7, (__int64)v8, v9, v10);
    v8 = (__int64 *)*v38;
    v7 = *v38 + 8LL * *((unsigned int *)v38 + 2);
    if ( *v38 < v7 )
    {
      v39 = (__int64 *)*v38;
      while ( 1 )
      {
        a2 = *v39;
        v8 = v39;
        if ( *(_WORD *)(*v39 + 36) == 266 )
          goto LABEL_117;
        if ( (__int64 *)v7 == ++v39 )
          goto LABEL_64;
      }
    }
    if ( v8 != (__int64 *)v7 )
    {
      if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 266 )
      {
LABEL_117:
        v40 = v8 != (__int64 *)v7;
LABEL_65:
        if ( v40 == v37 )
          goto LABEL_5;
        goto LABEL_66;
      }
      v68 = (__int64 *)(v7 + 8);
      while ( 1 )
      {
        v7 = (unsigned __int64)v68;
        if ( v8 == v68 )
          break;
        a2 = *v68++;
        if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) == 266 )
          goto LABEL_117;
      }
    }
LABEL_64:
    v40 = 0;
    goto LABEL_65;
  }
  v45 = (unsigned __int64 *)*v44;
  while ( 1 )
  {
    v7 = *v45;
    if ( *(_WORD *)(*v45 + 36) == 266 )
      break;
    if ( v8 == (__int64 *)++v45 )
      goto LABEL_59;
  }
  if ( v8 == (__int64 *)v45 )
    goto LABEL_59;
LABEL_115:
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v37 = 1;
    goto LABEL_60;
  }
LABEL_66:
  v41 = sub_168B6E0((__int64)a1);
  sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v4 + 24), (*(_BYTE *)(v41 + 107) & 4) == 0 ? 7162 : 4336, 0);
  LODWORD(v98) = 0;
  sub_1587D10((__int64)v99, (int *)&v98);
  sub_15F7200(v99);
  a2 = (__int64)a1;
  sub_168B9F0((__int64)v99, a1, *(_DWORD *)(a3 + 24), 0x188Bu, 0);
  if ( v102 )
  {
    a2 = (__int64)"method";
    sub_AE9DF0(v101, (__int64)"method", 1u);
  }
  else if ( v104 )
  {
    v81 = sub_168B9E0(v99);
    v82 = v100;
    if ( v100 )
      v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 32LL))(v100);
    v98 = v82;
    v83 = sub_1587BC0(v81, &v98, v77, v78, v79, v80);
    a2 = (__int64)"method";
    sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * v103 + 8), (__int64)"method", 1u);
  }
  sub_15F7200(v99);
LABEL_5:
  v11 = *(__int64 **)(a3 + 96);
  v12 = *(unsigned int *)(a3 + 104);
  v13 = *(__int64 **)(v4 + 96);
  v92 = &v11[v12];
  v90 = &v13[*(unsigned int *)(v4 + 104)];
  result = v92 == v11;
  LOBYTE(v7) = v92 == v11 || v90 == v13;
  if ( !(_BYTE)v7 )
  {
    do
    {
      v15 = *v13;
      v16 = *v11;
      if ( (*(_BYTE *)(*v13 + 29) & 1) != 0 )
      {
        v17 = sub_B8C3D0(*v13, a2, v7, (__int64)v8, v9, v10);
        v7 = *v17;
        v8 = (__int64 *)(*v17 + 8LL * *((unsigned int *)v17 + 2));
        if ( *v17 >= (unsigned __int64)v8 )
        {
          if ( (__int64 *)v7 != v8 )
          {
            if ( *(_WORD *)(*v8 + 36) == 99 )
              goto LABEL_16;
            v25 = (__int64 **)(v8 + 1);
            while ( 1 )
            {
              v8 = (__int64 *)v25;
              if ( (__int64 **)v7 == v25 )
                break;
              v8 = *v25++;
              if ( *((_WORD *)v8 + 18) == 99 )
                goto LABEL_16;
            }
          }
        }
        else
        {
          v18 = (unsigned __int64 *)*v17;
          while ( 1 )
          {
            v7 = *v18;
            if ( *(_WORD *)(*v18 + 36) == 99 )
              break;
            if ( v8 == (__int64 *)++v18 )
              goto LABEL_7;
          }
          if ( v8 != (__int64 *)v18 )
          {
LABEL_16:
            if ( (*(_BYTE *)(v16 + 29) & 1) == 0 )
              goto LABEL_17;
            v93 = 1;
            goto LABEL_21;
          }
        }
      }
LABEL_7:
      if ( (*(_BYTE *)(v16 + 29) & 1) == 0 )
        goto LABEL_8;
      v93 = 0;
LABEL_21:
      v20 = sub_B8C3D0(v16, a2, v7, (__int64)v8, v9, v10);
      v8 = (__int64 *)*v20;
      v21 = *v20 + 8LL * *((unsigned int *)v20 + 2);
      if ( *v20 >= v21 )
      {
        if ( v8 == (__int64 *)v21 )
          goto LABEL_25;
        if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 99 )
        {
          v24 = (__int64 *)(v21 + 8);
          while ( 1 )
          {
            v21 = (unsigned __int64)v24;
            if ( v8 == v24 )
              break;
            ++v24;
            if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 99 )
              goto LABEL_28;
          }
LABEL_25:
          v23 = 0;
          goto LABEL_26;
        }
      }
      else
      {
        v22 = (__int64 *)*v20;
        while ( 1 )
        {
          v8 = v22;
          if ( *(_WORD *)(*v22 + 36) == 99 )
            break;
          if ( (__int64 *)v21 == ++v22 )
            goto LABEL_25;
        }
      }
LABEL_28:
      v23 = v8 != (__int64 *)v21;
LABEL_26:
      if ( v23 != v93 )
      {
LABEL_17:
        v19 = sub_168B6E0((__int64)a1);
        sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v15 + 24), (*(_BYTE *)(v19 + 107) & 4) == 0 ? 7159 : 4332, 0);
        sub_15F7200(v99);
        sub_168B9F0((__int64)v99, a1, *(_DWORD *)(v16 + 24), 0x188Bu, 0);
        if ( v102 )
        {
          sub_AE9DF0(v101, (__int64)"parameter", 1u);
        }
        else if ( v104 )
        {
          v26 = sub_168B9E0(v99);
          v30 = v100;
          if ( v100 )
          {
            v94 = v26;
            v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v100 + 32LL))(v100);
            v26 = v94;
          }
          v98 = v30;
          v31 = sub_1587BC0(v26, &v98, v26, v27, v28, v29);
          sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v103 + 8), (__int64)"parameter", 1u);
        }
        sub_15F7200(v99);
      }
LABEL_8:
      a2 = v16;
      ++v13;
      ++v11;
      result = sub_1894240(v15, v16, *a1, (__int64)v8, v9, v10);
    }
    while ( v13 != v90 && v11 != v92 );
  }
  return result;
}
