__int64 __fastcall sub_1163C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  __int64 v7; // r14
  unsigned __int64 v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // rcx
  __int64 v12; // r10
  int v13; // edi
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // r8
  _DWORD *v19; // r12
  char v20; // al
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r10
  char v24; // al
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r12
  char v32; // cl
  bool v33; // al
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rax
  _DWORD *v37; // rbx
  char v38; // al
  _DWORD *v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // rax
  _BYTE *v43; // r12
  _BYTE *v44; // rax
  int v45; // r13d
  _DWORD *v46; // rax
  char v47; // al
  _DWORD *v48; // rcx
  char v49; // al
  __int64 v50; // r10
  char v51; // al
  char v52; // al
  __int64 v53; // rcx
  _DWORD *v54; // rcx
  char v55; // al
  int v56; // [rsp+1Ch] [rbp-F4h]
  _DWORD *v57; // [rsp+28h] [rbp-E8h]
  __int64 v58; // [rsp+38h] [rbp-D8h]
  __int64 v59; // [rsp+40h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-D0h]
  bool v61; // [rsp+48h] [rbp-C8h]
  __int64 v62; // [rsp+48h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+50h] [rbp-C0h]
  __int64 v64; // [rsp+58h] [rbp-B8h]
  __int64 v65; // [rsp+58h] [rbp-B8h]
  __int64 v66; // [rsp+58h] [rbp-B8h]
  int v67; // [rsp+58h] [rbp-B8h]
  __int64 v68; // [rsp+58h] [rbp-B8h]
  __int64 v69; // [rsp+60h] [rbp-B0h]
  _DWORD *v70; // [rsp+60h] [rbp-B0h]
  __int64 v71; // [rsp+60h] [rbp-B0h]
  __int64 v72; // [rsp+60h] [rbp-B0h]
  __int64 v73; // [rsp+60h] [rbp-B0h]
  __int64 v74; // [rsp+68h] [rbp-A8h]
  __int64 v75; // [rsp+68h] [rbp-A8h]
  __int64 v76; // [rsp+68h] [rbp-A8h]
  __int64 v78; // [rsp+70h] [rbp-A0h]
  __int64 v79; // [rsp+70h] [rbp-A0h]
  __int64 v80; // [rsp+70h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-A0h]
  __int64 v82; // [rsp+78h] [rbp-98h]
  _BYTE *v83; // [rsp+78h] [rbp-98h]
  __int64 v84; // [rsp+78h] [rbp-98h]
  unsigned __int64 v85; // [rsp+88h] [rbp-88h] BYREF
  __int64 v86; // [rsp+90h] [rbp-80h] BYREF
  __int64 v87; // [rsp+98h] [rbp-78h] BYREF
  unsigned __int64 v88; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-68h]
  unsigned __int64 v90; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v91; // [rsp+B8h] [rbp-58h]
  _QWORD v92[10]; // [rsp+C0h] [rbp-50h]

  v82 = a2;
  v92[3] = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = a4;
  if ( *(_DWORD *)a4 != 17 )
    return 0;
  if ( *(_BYTE *)(a4 + 32) != 4 )
    return 0;
  if ( **(_DWORD **)(a4 + 40) != 12 )
    return 0;
  v7 = a4 + 48;
  v5 = sub_11B8C0(a4 + 48, &v85, 0);
  if ( !(_BYTE)v5 )
    return 0;
  v9 = v85;
  if ( v85 <= 1 )
    return 0;
  v10 = 1;
  v11 = 2;
  if ( (v85 & 1) == 0 )
    return 0;
  v12 = a3;
  while ( v11 % v85 != 1 )
  {
    ++v10;
    v11 = 2 * v11 % v85;
    if ( v10 == 65 )
      goto LABEL_15;
  }
  if ( 30 % v10 )
    goto LABEL_15;
  if ( *(_BYTE *)(v4 + 32) != 4 )
    goto LABEL_15;
  v28 = *(_DWORD **)(v4 + 40);
  if ( *v28 != 12 )
    goto LABEL_15;
  v29 = sub_118420(v28, &v86, 12);
  v12 = a3;
  if ( !v29 )
    goto LABEL_47;
  v92[1] = v29 + 48;
  v31 = v4;
  v30 = 0;
  v92[0] = v29 + 32;
  v92[2] = v86;
  v63 = 0;
  v67 = -1;
  do
  {
    v32 = sub_114990(v92[v30], &v90);
    v33 = v67 == -1;
    if ( v32 && *(_DWORD *)(v90 + 4) == 4 && v67 == -1 )
    {
      v67 = v30;
      v33 = 0;
      v63 = v90;
    }
    ++v30;
  }
  while ( v30 != 3 );
  v34 = v31;
  v12 = a3;
  v61 = v33;
  v35 = 0;
  v76 = v34;
  while ( 1 )
  {
    v36 = v92[v35];
    if ( *(_BYTE *)v36 == 4 )
    {
      v37 = *(_DWORD **)(v36 + 8);
      if ( *v37 == 23 )
      {
        v59 = v12;
        v38 = sub_11B8C0(v37 + 12, &v90, 0);
        v12 = v59;
        if ( v38 )
        {
          if ( v90 == 28 )
            break;
        }
      }
    }
    if ( ++v35 == 3 )
    {
      v4 = v76;
      goto LABEL_47;
    }
  }
  v39 = v37 + 8;
  v4 = v76;
  v57 = v39;
  if ( v61 )
    goto LABEL_47;
  v56 = v35;
  v62 = a1;
  v60 = v82;
  v58 = v12;
  v40 = 0;
  while ( 1 )
  {
    if ( v67 == (_DWORD)v40 )
      goto LABEL_61;
    if ( v56 == (_DWORD)v40 )
      goto LABEL_61;
    if ( !(unsigned __int8)sub_114990(v92[v40], &v87) )
      goto LABEL_61;
    v41 = v87;
    if ( *(_BYTE *)v87 != 4 )
      goto LABEL_61;
    v42 = *(_QWORD *)(v87 + 8);
    if ( *(_DWORD *)v42 != 10 )
      goto LABEL_65;
    if ( *(_BYTE *)(v42 + 32) != 4 )
      goto LABEL_61;
    v54 = *(_DWORD **)(v42 + 40);
    if ( (unsigned int)(*v54 - 23) > 1 )
      goto LABEL_61;
    v84 = *(_QWORD *)(v42 + 40);
    if ( (unsigned __int8)sub_11B8C0(v54 + 12, &v90, 0) )
    {
      if ( v90 == 30 && *(_DWORD *)(v84 + 36) == 8 )
        break;
    }
    if ( *(_BYTE *)v41 != 4 )
      goto LABEL_61;
    v42 = *(_QWORD *)(v41 + 8);
LABEL_65:
    if ( *(_DWORD *)v42 == 19 )
    {
      v43 = (_BYTE *)(v42 + 48);
      v83 = (_BYTE *)(v42 + 32);
      if ( *(_BYTE *)(v42 + 32) == 4 )
      {
        v45 = 0;
LABEL_68:
        v46 = *((_DWORD **)v83 + 1);
        if ( *v46 == 22 )
        {
          if ( (unsigned __int8)sub_11B8C0(v46 + 12, &v88, 0) )
          {
            if ( v88 == 2 && *v43 == 4 )
            {
              v48 = *((_DWORD **)v43 + 1);
              if ( *v48 == 23 && (unsigned __int8)sub_11B8C0(v48 + 12, &v90, 0) && v90 == 30 )
              {
                v89 = 0;
                v82 = v60;
                v91 = 0;
                v88 = 0xFFFFFFFF00000000LL;
                a1 = v62;
                v71 = v58;
                v4 = v76;
                v90 = 0xFFFFFFFF00000000LL;
                sub_120CC0(&v88);
                sub_120CC0(&v90);
                v49 = sub_1216A0(v63, &v88, 1);
                v50 = v58;
                if ( !v49 )
                  goto LABEL_91;
                v51 = sub_1216A0(v57, &v90, 1);
LABEL_83:
                v50 = v71;
                if ( !v51 )
                  goto LABEL_91;
                goto LABEL_84;
              }
            }
          }
        }
        if ( v45 == 1 )
          goto LABEL_61;
      }
      v44 = v43;
      v43 = v83;
      v45 = 1;
      v83 = v44;
      if ( *v44 == 4 )
        goto LABEL_68;
    }
LABEL_61:
    if ( ++v40 == 3 )
    {
      a1 = v62;
      v12 = v58;
      v4 = v76;
      v82 = v60;
      goto LABEL_47;
    }
  }
  v68 = v84;
  v89 = 0;
  v82 = v60;
  a1 = v62;
  v4 = v76;
  v88 = 0xFFFFFFFF00000000LL;
  v90 = 0xFFFFFFFF00000000LL;
  v91 = 0;
  sub_120CC0(&v88);
  sub_120CC0(&v90);
  v50 = v58;
  if ( *(_BYTE *)(v68 + 32) != 14 )
  {
    if ( (*(_QWORD *)(v68 + 32) & 0xFFFFFFFF000000FFLL) != 0x800000001LL )
      goto LABEL_91;
LABEL_84:
    v72 = v50;
    v52 = sub_12C700(v82, v50, &v88, v50, &v90, 0);
    v50 = v72;
    if ( !v52 )
      goto LABEL_91;
    sub_AD060(v82, v72, v4 + 32, v72, (__int64)&v88, v72, (__int64)&v90, 0);
    if ( (unsigned __int8)sub_126690(v7, a1, (unsigned int)(2 * *(_DWORD *)(v4 + 52)), 1) )
    {
      v53 = *(unsigned int *)(v4 + 68);
      *(_DWORD *)(v4 + 68) = *(_DWORD *)(v4 + 52);
      if ( (unsigned __int8)sub_127230(v4, a1, 10, v53, 1) )
      {
        sub_9E060(v82, (__int64)"UMOD-30BIT");
        sub_1188E0(&v90);
        sub_1188E0(&v88);
        return v5;
      }
      if ( !under_debugger )
        sub_37DDE0(0);
    }
    else if ( !under_debugger )
    {
      sub_37DDE0(0);
    }
LABEL_105:
    BUG();
  }
  v71 = v58;
  v55 = sub_1216A0(*(_QWORD *)(v68 + 40), &v88, 1);
  v50 = v58;
  if ( v55 )
  {
    v51 = sub_1216A0(*(_QWORD *)(v68 + 40) + 16LL, &v90, 1);
    goto LABEL_83;
  }
LABEL_91:
  v73 = v50;
  sub_1188E0(&v90);
  sub_1188E0(&v88);
  v12 = v73;
LABEL_47:
  v9 = v85;
  if ( v85 <= 1 || (v85 & 1) == 0 )
    return 0;
LABEL_15:
  v13 = 1;
  v14 = 2;
  while ( v14 % v9 != 1 )
  {
    ++v13;
    v14 = 2 * v14 % v9;
    if ( v13 == 65 )
      return 0;
  }
  if ( 32 % v13 )
    return 0;
  v78 = v12;
  v15 = sub_118420(*(_QWORD *)(v4 + 40), &v87, 12);
  if ( !v15 )
    return 0;
  v16 = v87;
  if ( *(_BYTE *)v87 != 4 )
    return 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v16 + 8);
    if ( (unsigned int)(*(_DWORD *)v17 - 8) > 1 )
      break;
    v16 = v17 + 32;
    if ( *(_BYTE *)(v17 + 32) != 4 )
      return 0;
  }
  if ( *(_DWORD *)v17 != 35 )
    return 0;
  if ( *(_BYTE *)(v17 + 32) != 4 )
    return 0;
  v18 = *(_DWORD **)(v17 + 40);
  if ( *v18 != 12 )
    return 0;
  v19 = v18 + 8;
  v64 = v78;
  v69 = v15;
  v74 = *(_QWORD *)(v17 + 40);
  v79 = v17 + 48;
  v20 = sub_1216A0(v17 + 48, v18 + 8, 1);
  v21 = v79;
  v22 = v69;
  v23 = v64;
  if ( v20 )
  {
    v70 = v19;
    v19 = (_DWORD *)(v74 + 48);
    goto LABEL_27;
  }
  v81 = v69;
  v70 = (_DWORD *)(v74 + 48);
  v47 = sub_1216A0(v21, v74 + 48, 1);
  v22 = v81;
  v23 = v64;
  if ( v47 )
  {
LABEL_27:
    v75 = v22 + 48;
    v65 = v23;
    v80 = v22 + 32;
    v24 = sub_12C700(v82, v23, v22 + 32, v23, v22 + 48, 0);
    v25 = v65;
    if ( !v24 )
    {
      if ( (unsigned __int8)sub_12C700(v82, v65, v75, v65, v80, 0) )
      {
        v26 = v80;
        v25 = v65;
        v80 = v75;
        v75 = v26;
        goto LABEL_30;
      }
      return 0;
    }
LABEL_30:
    v66 = v25;
    if ( !(unsigned __int8)sub_1216A0(v70, v80, 0) || !(unsigned __int8)sub_1216A0(v19, v75, 0) )
      return 0;
    sub_AD060(v82, v66, v4 + 32, v66, v80, v66, v75, 0);
    if ( !(unsigned __int8)sub_126690(v7, a1, (unsigned int)(2 * *(_DWORD *)(v4 + 52)), 1)
      || (v27 = *(unsigned int *)(v4 + 68),
          *(_DWORD *)(v4 + 68) = *(_DWORD *)(v4 + 52),
          !(unsigned __int8)sub_127230(v4, a1, 10, v27, 1)) )
    {
      if ( !under_debugger )
        sub_37DDE0(0);
      goto LABEL_105;
    }
    sub_9E060(v82, (__int64)"UMOD");
  }
  else
  {
    return 0;
  }
  return v5;
}
