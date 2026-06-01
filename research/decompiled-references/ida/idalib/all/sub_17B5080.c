unsigned __int64 __fastcall sub_17B5080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  unsigned __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rsi
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rdx
  unsigned __int64 *v60; // rax
  unsigned __int64 *v61; // rax
  unsigned __int64 **v62; // rax
  __int64 v63; // rax
  __int64 v64; // r13
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rax
  char v78; // [rsp+8h] [rbp-100h]
  __int64 v79; // [rsp+8h] [rbp-100h]
  unsigned int v80; // [rsp+10h] [rbp-F8h]
  __int64 v81; // [rsp+10h] [rbp-F8h]
  __int64 v82; // [rsp+10h] [rbp-F8h]
  __int64 v83; // [rsp+18h] [rbp-F0h] BYREF
  int v84; // [rsp+20h] [rbp-E8h] BYREF
  int v85; // [rsp+24h] [rbp-E4h] BYREF
  unsigned __int64 v86; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v87[2]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v88[200]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = a3;
  v83 = a2;
  v78 = a3;
  v11 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( *((_BYTE *)v11 + 73) >> 5 == 2 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v66 = *(_QWORD *)a1;
      LOBYTE(v85) = 0;
      v67 = sub_F63240(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9, v10);
      if ( v67 )
        LOBYTE(v85) = *((_BYTE *)v67 + 73) >> 5 == 2;
      sub_168B9F0((__int64)v88, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(a1 + 8), 0x10D6u, 0);
      LODWORD(v86) = 1;
      v68 = sub_1587D10((__int64)v88, (int *)&v86);
      v69 = sub_1605D30(v68, (__int64 *)a1);
      v70 = sub_15890D0(v69, (unsigned __int8 *)&v85);
      if ( *(_BYTE *)(v70 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v70 + 32), *(int *)(a1 + 12), 2u);
      }
      else if ( *(_BYTE *)(v70 + 132) )
      {
        v81 = v70;
        v71 = sub_168B9E0((_QWORD *)v70);
        v75 = v81;
        v79 = v71;
        v76 = *(_QWORD *)(v81 + 16);
        if ( v76 )
        {
          v76 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 32LL))(*(_QWORD *)(v81 + 16));
          v75 = v81;
        }
        v82 = v75;
        v87[0] = v76;
        v77 = sub_1587BC0(v79, v87, v75, v72, v73, v74);
        sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * *(unsigned int *)(v82 + 128) + 8), *(int *)(a1 + 12), 2u);
      }
      sub_15F7200(v88);
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v80 = 0;
    if ( !v6 )
      goto LABEL_3;
  }
  sub_168B9F0((__int64)v88, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *((_DWORD *)v11 + 6), 0x17EDu, 0);
  LODWORD(v86) = 0;
  v63 = sub_1587D10((__int64)v88, (int *)&v86);
  v85 = 1;
  v64 = sub_1587D10(v63, &v85);
  a2 = (__int64)v87;
  v87[0] = sub_6D5440(&v83);
  v65 = sub_162B6D0(v64, v87);
  if ( *(_BYTE *)(v65 + 120) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_AE9DF0((unsigned __int8 **)(v65 + 32), (__int64)&byte_22F0C30, 1u);
  }
  else if ( *(_BYTE *)(v65 + 132) )
  {
    a2 = (__int64)&byte_22F0C30;
    sub_17B29E0(v65, (__int64)&byte_22F0C30);
  }
  sub_15F7200(v88);
  v80 = 1;
  v78 = 1;
LABEL_3:
  result = sub_B7E900((__int64)v11, a2, v7, v8, v9, v10);
  v17 = result;
  if ( result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v17 + 29) & 1) != 0 )
    {
      v60 = sub_B8C3D0(v17, a2, v13, (__int64)v14, v15, v16);
      v13 = *v60;
      v14 = (unsigned __int64 *)(*v60 + 8LL * *((unsigned int *)v60 + 2));
      if ( *v60 >= (unsigned __int64)v14 )
      {
        if ( (unsigned __int64 *)v13 != v14 )
        {
          if ( *(_WORD *)(*v14 + 36) == 386 )
            goto LABEL_13;
          v62 = (unsigned __int64 **)(v14 + 1);
          while ( 1 )
          {
            v14 = (unsigned __int64 *)v62;
            if ( (unsigned __int64 **)v13 == v62 )
              break;
            v14 = *v62++;
            if ( *((_WORD *)v14 + 18) == 386 )
              goto LABEL_13;
          }
        }
      }
      else
      {
        v61 = (unsigned __int64 *)*v60;
        while ( 1 )
        {
          v13 = *v61;
          if ( *(_WORD *)(*v61 + 36) == 386 )
            break;
          if ( v14 == ++v61 )
            goto LABEL_5;
        }
        if ( v14 != v61 )
          goto LABEL_13;
      }
    }
LABEL_5:
    v18 = *(_QWORD *)(v17 + 48);
    v19 = sub_F65A30(v18, a2, v13, (__int64)v14);
    a2 = v18;
    v20 = v19;
    v21 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
    if ( v21 )
    {
      v22 = v21;
      v18 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v21);
      v25 = sub_F65A30(v18, v22, v23, v24);
      a2 = v18;
      v26 = v25;
      v27 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
      if ( !v27 )
      {
        switch ( v26 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_13;
          case 2LL:
          case 3LL:
            goto LABEL_16;
          case 4LL:
            goto LABEL_18;
          default:
            goto LABEL_51;
        }
      }
      v28 = v27;
      v18 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v27);
      v31 = sub_F65A30(v18, v28, v29, v30);
      a2 = v18;
      v32 = v31;
      v33 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
      if ( !v33 )
      {
        switch ( v32 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_13;
          case 2LL:
          case 3LL:
            goto LABEL_16;
          case 4LL:
            goto LABEL_18;
          default:
            goto LABEL_51;
        }
      }
      v34 = v33;
      v18 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v33);
      v37 = sub_F65A30(v18, v34, v35, v36);
      a2 = v18;
      v38 = v37;
      v39 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
      if ( !v39 )
      {
        switch ( v38 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_13;
          case 2LL:
          case 3LL:
            goto LABEL_16;
          case 4LL:
            goto LABEL_18;
          default:
            goto LABEL_51;
        }
      }
      v40 = v39;
      v18 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v39);
      v43 = sub_F65A30(v18, v40, v41, v42);
      a2 = v18;
      v44 = v43;
      v45 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
      if ( !v45 )
      {
        switch ( v44 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_13;
          case 2LL:
          case 3LL:
            goto LABEL_16;
          case 4LL:
            goto LABEL_18;
          default:
            goto LABEL_51;
        }
      }
      v46 = v45;
      v18 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v45);
      v49 = sub_F65A30(v18, v46, v47, v48);
      a2 = v18;
      v50 = v49;
      v51 = sub_A72040(*(_QWORD **)(*(_QWORD *)(a1 + 16) + 248LL), v18);
      if ( !v51 )
      {
        switch ( v50 )
        {
          case 0LL:
          case 1LL:
            goto LABEL_13;
          case 2LL:
          case 3LL:
            goto LABEL_16;
          case 4LL:
            goto LABEL_18;
        }
        goto LABEL_13;
      }
      v52 = v51;
      v53 = sub_A71600(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL), v51);
      a2 = (unsigned int)sub_F65A30(v53, v52, v54, v55);
      sub_17B56D0(a1, a2, v53, v17, v80);
      result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v17 = result;
      if ( result )
        goto LABEL_12;
    }
    else
    {
      switch ( v20 )
      {
        case 0LL:
        case 1LL:
          break;
        case 2LL:
        case 3LL:
LABEL_16:
          v86 = v18;
          if ( v78 )
          {
            sub_168B9F0((__int64)v88, (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(v17 + 24), 0x17EDu, 0);
            v85 = 1;
            v56 = sub_1587D10((__int64)v88, &v85);
            v84 = 1;
            v57 = sub_1587D10(v56, &v84);
            v58 = sub_1605D30(v57, (__int64 *)&v86);
            a2 = (__int64)v87;
            v87[0] = (__int64)sub_995750(v17);
            v87[1] = v59;
            sub_166BAF0(v58, (__int64)v87);
            sub_15F7200(v88);
          }
          break;
        case 4LL:
LABEL_18:
          a2 = v18;
          sub_17B5080(a1, v18, v80);
          break;
        default:
LABEL_51:
          BUG();
      }
LABEL_13:
      while ( 1 )
      {
        result = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = result;
        if ( !result )
          break;
LABEL_12:
        if ( (*(_BYTE *)(result + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_4;
      }
    }
  }
  return result;
}
