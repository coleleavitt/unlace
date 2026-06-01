unsigned __int64 __fastcall sub_17BD820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  char v7; // bp
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
  int v19; // eax
  __int64 v20; // r14
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r12
  int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 *v69; // rax
  __int64 *v70; // rax
  __int64 **v71; // rax
  __int64 v72; // rax
  int *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rax
  _QWORD *v91; // rax
  unsigned int v92; // [rsp+8h] [rbp-140h]
  __int64 v93; // [rsp+8h] [rbp-140h]
  __int64 v94; // [rsp+10h] [rbp-138h]
  __int64 v95; // [rsp+10h] [rbp-138h]
  __int64 v96; // [rsp+28h] [rbp-120h] BYREF
  int v97; // [rsp+30h] [rbp-118h] BYREF
  int v98; // [rsp+34h] [rbp-114h] BYREF
  __int64 v99; // [rsp+38h] [rbp-110h] BYREF
  unsigned __int64 v100; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v101; // [rsp+48h] [rbp-100h] BYREF
  unsigned __int64 v102; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v103; // [rsp+58h] [rbp-F0h] BYREF
  unsigned __int64 v104; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v105; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v106; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v107; // [rsp+78h] [rbp-D0h]
  _QWORD v108[25]; // [rsp+80h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = a3;
  v96 = a2;
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
      v80 = *(_QWORD *)a1;
      LOBYTE(v104) = 0;
      v81 = sub_F63240(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, v10, v11);
      if ( v81 )
        LOBYTE(v104) = *((_BYTE *)v81 + 73) >> 5 == 2;
      sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a1 + 8), 0x10D6u, 0);
      LODWORD(v105) = 0;
      v82 = sub_1587D10((__int64)v108, (int *)&v105);
      v83 = sub_1605D30(v82, (__int64 *)a1);
      v84 = sub_15890D0(v83, (unsigned __int8 *)&v104);
      if ( *(_BYTE *)(v84 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v84 + 32), *(int *)(a1 + 12), 2u);
      }
      else if ( *(_BYTE *)(v84 + 132) )
      {
        v94 = v84;
        v85 = sub_168B9E0((_QWORD *)v84);
        v89 = v94;
        v93 = v85;
        v90 = *(_QWORD *)(v94 + 16);
        if ( v90 )
        {
          v90 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v90 + 32LL))(*(_QWORD *)(v94 + 16));
          v89 = v94;
        }
        v95 = v89;
        v106 = v90;
        v91 = sub_1587BC0(v93, (__int64 *)&v106, v89, v86, v87, v88);
        sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * *(unsigned int *)(v95 + 128) + 8), *(int *)(a1 + 12), 2u);
      }
      sub_15F7200(v108);
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v92 = 0;
    if ( !v7 )
      goto LABEL_3;
  }
  sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *((_DWORD *)v12 + 6), 0x17EDu, 0);
  LODWORD(v105) = 0;
  v77 = sub_1587D10((__int64)v108, (int *)&v105);
  LODWORD(v104) = 0;
  v78 = sub_1587D10(v77, (int *)&v104);
  a2 = (__int64)&v106;
  v106 = sub_6D5440(&v96);
  v79 = sub_162B6D0(v78, (__int64 *)&v106);
  if ( *(_BYTE *)(v79 + 120) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_AE9DF0((unsigned __int8 **)(v79 + 32), (__int64)&byte_22F0C30, 1u);
  }
  else if ( *(_BYTE *)(v79 + 132) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_17B29E0(v79, (__int64)&byte_22F0C30);
  }
  v6 = 1;
  sub_15F7200(v108);
  v92 = 1;
LABEL_3:
  result = sub_B7E900((__int64)v12, a2, v8, v9, v10, v11);
  v18 = result;
  if ( !result )
    return result;
LABEL_4:
  if ( (*(_BYTE *)(v18 + 29) & 1) != 0 )
  {
    v69 = sub_B8C3D0(v18, a2, v14, (__int64)v15, v16, v17);
    v14 = *v69;
    v15 = (__int64 *)(*v69 + 8LL * *((unsigned int *)v69 + 2));
    if ( *v69 >= (unsigned __int64)v15 )
    {
      if ( (__int64 *)v14 != v15 )
      {
        if ( *(_WORD *)(*v15 + 36) == 386 )
          goto LABEL_19;
        v71 = (__int64 **)(v15 + 1);
        while ( 1 )
        {
          v15 = (__int64 *)v71;
          if ( (__int64 **)v14 == v71 )
            break;
          v15 = *v71++;
          if ( *((_WORD *)v15 + 18) == 386 )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v70 = (__int64 *)*v69;
      while ( 1 )
      {
        v14 = *v70;
        if ( *(_WORD *)(*v70 + 36) == 386 )
          break;
        if ( v15 == ++v70 )
          goto LABEL_5;
      }
      if ( v15 != v70 )
        goto LABEL_19;
    }
  }
LABEL_5:
  v99 = *(_QWORD *)(v18 + 48);
  v19 = sub_F67720(&v99, a2, v14, (__int64)v15, v16, v17);
  v20 = v99;
  v21 = v19;
  a2 = v99;
  v22 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v99);
  if ( v22 )
  {
    v23 = v22;
    v100 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v22);
    v28 = sub_F67720(&v100, v23, v24, v25, v26, v27);
    v29 = v100;
    v30 = v28;
    a2 = v100;
    v31 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v100);
    if ( v31
      && (v32 = v31,
          v101 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v31),
          v37 = sub_F67720(&v101, v32, v33, v34, v35, v36),
          v29 = v101,
          v30 = v37,
          a2 = v101,
          (v38 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v101)) != 0)
      && (v39 = v38,
          v102 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v38),
          v44 = sub_F67720(&v102, v39, v40, v41, v42, v43),
          v29 = v102,
          v30 = v44,
          a2 = v102,
          (v45 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v102)) != 0) )
    {
      v46 = v45;
      v103 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v45);
      v51 = sub_F67720(&v103, v46, v47, v48, v49, v50);
      v29 = v103;
      v30 = v51;
      a2 = v103;
      v52 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v103);
      if ( v52 )
      {
        v53 = v52;
        v104 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v52);
        v58 = sub_F67720(&v104, v53, v54, v55, v56, v57);
        v29 = v104;
        v30 = v58;
        a2 = v104;
        v59 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v104);
        if ( v59 )
        {
          v60 = v59;
          v108[0] = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v59);
          a2 = (unsigned int)sub_F67720(v108, v60, v61, v62, v63, v64);
          sub_17BE000(a1, a2, v108[0], v18, v92);
          result = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v18 = result;
          if ( result )
            goto LABEL_18;
          return result;
        }
        switch ( v30 )
        {
          case 1:
            goto LABEL_54;
          case 0:
            goto LABEL_19;
          case 2:
LABEL_54:
            v105 = v29;
            if ( !v6 )
              goto LABEL_19;
            sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
            v98 = 1;
            v72 = sub_1587D10((__int64)v108, &v98);
            v97 = 0;
            v73 = &v97;
            goto LABEL_45;
        }
      }
      else
      {
        switch ( v30 )
        {
          case 1:
            goto LABEL_56;
          case 0:
            goto LABEL_19;
          case 2:
LABEL_56:
            v105 = v29;
            if ( !v6 )
              goto LABEL_19;
            sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
            LODWORD(v104) = 1;
            v72 = sub_1587D10((__int64)v108, (int *)&v104);
            v98 = 0;
            v73 = &v98;
LABEL_45:
            v74 = sub_1587D10(v72, v73);
            v75 = sub_1605D30(v74, &v105);
            a2 = (__int64)&v106;
            v106 = (unsigned __int64)sub_995750(v18);
            v107 = v76;
            sub_166BAF0(v75, (__int64)&v106);
            sub_15F7200(v108);
            goto LABEL_19;
        }
      }
    }
    else
    {
      switch ( v30 )
      {
        case 1:
          goto LABEL_16;
        case 0:
          goto LABEL_19;
        case 2:
LABEL_16:
          v105 = v29;
          if ( !v6 )
            goto LABEL_19;
          sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
          LODWORD(v104) = 1;
          v72 = sub_1587D10((__int64)v108, (int *)&v104);
          LODWORD(v103) = 0;
          v73 = (int *)&v103;
          goto LABEL_45;
      }
    }
    if ( v30 == 3 )
    {
      a2 = v29;
      sub_17BD820(a1, v29, v92);
      goto LABEL_19;
    }
    return ((__int64 (*)(void))sub_17BE000)();
  }
  if ( v21 != 1 )
  {
    if ( !v21 )
      goto LABEL_19;
    if ( v21 != 2 )
    {
      if ( v21 == 3 )
      {
        a2 = v20;
        sub_17BD820(a1, v20, v92);
        goto LABEL_19;
      }
      return ((__int64 (*)(void))sub_17BE000)();
    }
  }
  v105 = v20;
  if ( v6 )
  {
    sub_168B9F0((__int64)v108, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v18 + 24), 0x17EDu, 0);
    LODWORD(v104) = 1;
    v65 = sub_1587D10((__int64)v108, (int *)&v104);
    LODWORD(v103) = 0;
    v66 = sub_1587D10(v65, (int *)&v103);
    v67 = sub_1605D30(v66, &v105);
    a2 = (__int64)&v106;
    v106 = (unsigned __int64)sub_995750(v18);
    v107 = v68;
    sub_166BAF0(v67, (__int64)&v106);
    sub_15F7200(v108);
  }
LABEL_19:
  while ( 1 )
  {
    result = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = result;
    if ( !result )
      return result;
LABEL_18:
    if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_4;
  }
}
