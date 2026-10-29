unsigned __int64 __fastcall sub_17D0460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r15
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // eax
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // eax
  __int64 v61; // rbp
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 *v73; // rax
  __int64 *v74; // rax
  __int64 **v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rax
  _QWORD *v92; // rax
  char v93; // [rsp+0h] [rbp-128h]
  __int64 v94; // [rsp+0h] [rbp-128h]
  unsigned int v95; // [rsp+8h] [rbp-120h]
  __int64 v96; // [rsp+10h] [rbp-118h]
  __int64 v97; // [rsp+18h] [rbp-110h]
  __int64 v98; // [rsp+18h] [rbp-110h]
  int v99; // [rsp+24h] [rbp-104h] BYREF
  __int64 v100; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 v101; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v102; // [rsp+38h] [rbp-F0h] BYREF
  unsigned __int64 v103; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v104; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v105[2]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v106[25]; // [rsp+60h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v93 = a3;
  v12 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( *((_BYTE *)v12 + 73) >> 5 == 2 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v81 = *(_QWORD *)a1;
      LOBYTE(v103) = 0;
      v82 = sub_F63240(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, v10, v11);
      if ( v82 )
        LOBYTE(v103) = *((_BYTE *)v82 + 73) >> 5 == 2;
      sub_168B9F0((__int64)v106, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a1 + 8), 0x10D6u, 0);
      LODWORD(v104) = 2;
      v83 = sub_1587D10((__int64)v106, (int *)&v104);
      v84 = sub_1605D30(v83, (__int64 *)a1);
      v85 = sub_15890D0(v84, (unsigned __int8 *)&v103);
      if ( *(_BYTE *)(v85 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v85 + 32), *(int *)(a1 + 12), 2u);
      }
      else if ( *(_BYTE *)(v85 + 132) )
      {
        v97 = v85;
        v86 = sub_168B9E0((_QWORD *)v85);
        v90 = v97;
        v96 = v86;
        v91 = *(_QWORD *)(v97 + 16);
        if ( v91 )
        {
          v91 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v91 + 32LL))(*(_QWORD *)(v97 + 16));
          v90 = v97;
        }
        v98 = v90;
        v105[0] = v91;
        v92 = sub_1587BC0(v96, v105, v90, v87, v88, v89);
        sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * *(unsigned int *)(v98 + 128) + 8), *(int *)(a1 + 12), 2u);
      }
      sub_15F7200(v106);
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v95 = 0;
    if ( !v6 )
      goto LABEL_3;
  }
  sub_168B9F0((__int64)v106, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *((_DWORD *)v12 + 6), 0x17EDu, 0);
  LODWORD(v104) = 0;
  v76 = sub_1587D10((__int64)v106, (int *)&v104);
  LODWORD(v103) = 2;
  v77 = sub_1587D10(v76, (int *)&v103);
  v78 = *(_QWORD *)v7;
  v79 = *(_QWORD *)(*(_QWORD *)v7 + 8LL) & 7LL;
  if ( v79 | (*(__int64 *)(*(_QWORD *)v7 + 8LL) >> 3) & 1 )
  {
    v94 = v77;
    v78 = sub_F64F00(a2, (__int64)&v103, v79, v79 | (*(__int64 *)(*(_QWORD *)v7 + 8LL) >> 3) & 1, v77);
    v77 = v94;
  }
  a2 = (__int64)v105;
  v105[0] = v78 & 0xFFFFFFFFFFFFFFF0LL;
  v80 = sub_162B6D0(v77, v105);
  if ( *(_BYTE *)(v80 + 120) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_AE9DF0((unsigned __int8 **)(v80 + 32), (__int64)&byte_22F0C30, 1u);
  }
  else if ( *(_BYTE *)(v80 + 132) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_17B29E0(v80, (__int64)&byte_22F0C30);
  }
  sub_15F7200(v106);
  v95 = 1;
  v93 = 1;
LABEL_3:
  result = sub_B7E900((__int64)v12, a2, v8, v9, v10, v11);
  v18 = result;
  if ( !result )
    return result;
LABEL_4:
  if ( (*(_BYTE *)(v18 + 29) & 1) != 0 )
  {
    v73 = sub_B8C3D0(v18, a2, v14, (__int64)v15, v16, v17);
    v14 = *v73;
    v15 = (__int64 *)(*v73 + 8LL * *((unsigned int *)v73 + 2));
    if ( *v73 >= (unsigned __int64)v15 )
    {
      if ( (__int64 *)v14 != v15 )
      {
        if ( *(_WORD *)(*v15 + 36) == 386 )
          goto LABEL_13;
        v75 = (__int64 **)(v15 + 1);
        while ( 1 )
        {
          v15 = (__int64 *)v75;
          if ( (__int64 **)v14 == v75 )
            break;
          v15 = *v75++;
          if ( *((_WORD *)v15 + 18) == 386 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      v74 = (__int64 *)*v73;
      while ( 1 )
      {
        v14 = *v74;
        if ( *(_WORD *)(*v74 + 36) == 386 )
          break;
        if ( v15 == ++v74 )
          goto LABEL_5;
      }
      if ( v74 != v15 )
        goto LABEL_13;
    }
  }
LABEL_5:
  v100 = *(_QWORD *)(v18 + 48);
  v19 = sub_F67800(&v100, a2, v14, (__int64)v15, v16, v17);
  v20 = v100;
  v21 = v19;
  a2 = v100;
  v22 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v100);
  if ( !v22 )
  {
    switch ( v21 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_13;
      case 2LL:
      case 3LL:
      case 4LL:
LABEL_16:
        v104 = v20;
        if ( !v93 )
          goto LABEL_13;
        sub_168B9F0((__int64)v106, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
        LODWORD(v102) = 1;
        v68 = (int *)&v102;
        break;
      case 5LL:
LABEL_19:
        a2 = v20;
        sub_17D0460(a1, v20, v95);
        goto LABEL_13;
      default:
LABEL_57:
        BUG();
    }
    goto LABEL_18;
  }
  v23 = v22;
  v101 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v22);
  v28 = sub_F67800(&v101, v23, v24, v25, v26, v27);
  v20 = v101;
  v29 = v28;
  a2 = v101;
  v30 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v101);
  if ( !v30 )
  {
    switch ( v29 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_13;
      case 2LL:
      case 3LL:
      case 4LL:
        goto LABEL_16;
      case 5LL:
        goto LABEL_19;
      default:
        goto LABEL_57;
    }
  }
  v31 = v30;
  v102 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v30);
  v36 = sub_F67800(&v102, v31, v32, v33, v34, v35);
  v20 = v102;
  v37 = v36;
  a2 = v102;
  v38 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v102);
  if ( !v38 )
  {
    switch ( v37 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_13;
      case 2LL:
      case 3LL:
      case 4LL:
        v104 = v20;
        if ( !v93 )
          goto LABEL_13;
        sub_168B9F0((__int64)v106, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
        v99 = 1;
        v68 = &v99;
        break;
      case 5LL:
        goto LABEL_19;
      default:
        goto LABEL_57;
    }
LABEL_18:
    v69 = sub_1587D10((__int64)v106, v68);
    LODWORD(v103) = 2;
    v70 = sub_1587D10(v69, (int *)&v103);
    v71 = sub_1605D30(v70, (__int64 *)&v104);
    a2 = (__int64)v105;
    v105[0] = (__int64)sub_995750(v18);
    v105[1] = v72;
    sub_166BAF0(v71, (__int64)v105);
    sub_15F7200(v106);
    goto LABEL_13;
  }
  v39 = v38;
  v103 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v38);
  v44 = sub_F67800(&v103, v39, v40, v41, v42, v43);
  v20 = v103;
  v45 = v44;
  a2 = v103;
  v46 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v103);
  if ( !v46 )
  {
    switch ( v45 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_13;
      case 2LL:
      case 3LL:
      case 4LL:
LABEL_46:
        a2 = v20;
        sub_17D0300(a1, v20, v18, v95);
        goto LABEL_13;
      case 5LL:
        goto LABEL_19;
      default:
        goto LABEL_57;
    }
  }
  v47 = v46;
  v104 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v46);
  v52 = sub_F67800(&v104, v47, v48, v49, v50, v51);
  v20 = v104;
  v53 = v52;
  a2 = v104;
  v54 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v104);
  if ( !v54 )
  {
    switch ( v53 )
    {
      case 0LL:
      case 1LL:
        goto LABEL_13;
      case 2LL:
      case 3LL:
      case 4LL:
        goto LABEL_46;
      case 5LL:
        goto LABEL_19;
      default:
        goto LABEL_57;
    }
  }
  v55 = v54;
  v105[0] = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v54);
  v60 = sub_F67800(v105, v55, v56, v57, v58, v59);
  v20 = v105[0];
  v61 = v60;
  a2 = v105[0];
  v62 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v105[0]);
  if ( v62 )
  {
    v63 = v62;
    v106[0] = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v62);
    a2 = (unsigned int)sub_F67800(v106, v63, v64, v65, v66, v67);
    sub_17D0BA0(a1, a2, v106[0], v18, v95);
    result = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = result;
    if ( result )
      goto LABEL_12;
  }
  else
  {
    switch ( v61 )
    {
      case 0LL:
      case 1LL:
        break;
      case 2LL:
      case 3LL:
      case 4LL:
        goto LABEL_46;
      case 5LL:
        goto LABEL_19;
    }
LABEL_13:
    while ( 1 )
    {
      result = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v18 = result;
      if ( !result )
        break;
LABEL_12:
      if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_4;
    }
  }
  return result;
}
