void __fastcall sub_17C7910(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // dl
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  char v12; // di
  unsigned __int8 v13; // al
  int v14; // ecx
  unsigned int v15; // edx
  __int64 v16; // r15
  unsigned __int8 v17; // al
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r15
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r13
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // [rsp+0h] [rbp-108h]
  unsigned int v69; // [rsp+18h] [rbp-F0h]
  unsigned int v70; // [rsp+18h] [rbp-F0h]
  unsigned int v71; // [rsp+18h] [rbp-F0h]
  unsigned int v72; // [rsp+18h] [rbp-F0h]
  __int64 v73; // [rsp+18h] [rbp-F0h]
  __int64 v74; // [rsp+18h] [rbp-F0h]
  __int64 v75; // [rsp+18h] [rbp-F0h]
  __int64 v76; // [rsp+18h] [rbp-F0h]
  __int64 v77; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+28h] [rbp-E0h]
  __int64 v80; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v81; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v82[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v83; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v84[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v85; // [rsp+B8h] [rbp-50h]
  unsigned int v86; // [rsp+C0h] [rbp-48h]
  char v87; // [rsp+C4h] [rbp-44h]

  v2 = *(_QWORD **)(a2 + 1824);
  v68 = &v2[2 * *(unsigned int *)(a2 + 1832)];
  if ( v68 != v2 )
  {
    v3 = (__int64 *)(a1 + 8);
    do
    {
      v4 = v2[1];
      v5 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v5 = *(_QWORD *)v5;
      v6 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (unsigned int)(v6 - 40) > 6 )
      {
        if ( (unsigned int)(v6 - 49) > 2 )
          goto LABEL_23;
        sub_168B9F0((__int64)v82, v3, *(_DWORD *)(*v2 + 24LL), (*(_DWORD *)(a2 + 1312) == 0) + 6802, 0);
        v80 = *(_QWORD *)(*v2 + 40LL);
        v16 = sub_15894B0((__int64)v82, &v80);
        v17 = *(_BYTE *)(v4 + 28) & 0x7F;
        switch ( v17 )
        {
          case 'A':
            v19 = 5;
            break;
          case '@':
            v19 = 4;
            break;
          case '4':
            v19 = 6;
            break;
          default:
            v18 = *(_BYTE *)(v5 + 8) & 0x7F;
            if ( (unsigned int)(v18 - 58) > 3 )
            {
              v19 = v18 == 0 || v18 == 24;
              break;
            }
            v19 = ((unsigned int)v17 - 49 < 3) + 2;
            if ( *(_BYTE *)(v16 + 120) )
            {
LABEL_62:
              sub_AE9DF0((unsigned __int8 **)(v16 + 32), v19, 2u);
              if ( !*(_BYTE *)(v16 + 120) )
              {
LABEL_63:
                if ( *(_BYTE *)(v16 + 132) )
                {
                  v48 = sub_168B9E0((_QWORD *)v16);
                  v52 = *(_QWORD *)(v16 + 16);
                  if ( v52 )
                  {
                    v76 = v48;
                    v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
                    v48 = v76;
                  }
                  v81 = (_QWORD *)v52;
                  v53 = sub_1587BC0(v48, (__int64 *)&v81, v48, v49, v50, v51);
                  sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * *(unsigned int *)(v16 + 128) + 8), v5, 0xCu);
                }
                goto LABEL_43;
              }
LABEL_37:
              sub_AE9DF0((unsigned __int8 **)(v16 + 32), v5, 0xCu);
              goto LABEL_43;
            }
LABEL_33:
            if ( *(_BYTE *)(v16 + 132) )
            {
              v69 = v19;
              v20 = sub_168B9E0((_QWORD *)v16);
              v23 = v69;
              v24 = v20;
              v25 = *(_QWORD **)(v16 + 16);
              if ( v25 )
              {
                v77 = v24;
                v25 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v25 + 32LL))(v25, *v25, v69);
                v24 = v77;
                v23 = v69;
              }
              v70 = v23;
              v81 = v25;
              v26 = sub_1587BC0(v24, (__int64 *)&v81, v23, v24, v21, v22);
              sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v16 + 128) + 8), v70, 2u);
              if ( !*(_BYTE *)(v16 + 120) )
                goto LABEL_63;
              goto LABEL_37;
            }
LABEL_43:
            sub_15F7200(v82);
            goto LABEL_22;
        }
        if ( *(_BYTE *)(v16 + 120) )
          goto LABEL_62;
        goto LABEL_33;
      }
      v7 = *(_QWORD *)(a2 + 1320);
      v8 = v7 + 32LL * *(unsigned int *)(a2 + 1328);
      if ( v7 == v8 )
      {
LABEL_11:
        v10 = 0;
        v11 = 6803;
      }
      else
      {
        while ( 1 )
        {
          v9 = *(_BYTE *)(v7 + 24);
          if ( (v9 & 8) == 0 && (v9 & 3) != 3 && v4 == *(_QWORD *)v7 )
            break;
          v7 += 32;
          if ( v8 == v7 )
            goto LABEL_11;
        }
        v10 = *(_DWORD *)(v7 + 8);
        v11 = 6803 - (v10 != 0);
      }
      sub_168B9F0((__int64)v82, v3, *(_DWORD *)(*v2 + 24LL), v11, 0);
      if ( v85 )
      {
        sub_AE9DF0(v84, *(_QWORD *)(*v2 + 40LL), 9u);
      }
      else
      {
        v12 = v87;
        if ( !v87 )
        {
          v13 = *(_BYTE *)(v4 + 28) & 0x7F;
          switch ( v13 )
          {
            case 'A':
              goto LABEL_21;
            case '@':
              v15 = 4;
              goto LABEL_20;
            case '4':
              v15 = 6;
              goto LABEL_20;
          }
          goto LABEL_17;
        }
        v74 = *(_QWORD *)(*v2 + 40LL);
        v41 = sub_168B9E0(v82);
        v44 = v74;
        v45 = v41;
        v46 = (__int64)v83;
        if ( v83 )
        {
          v79 = v45;
          v46 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v83 + 32LL))(v83, *v83, v45, v74);
          v45 = v79;
          v44 = v74;
        }
        v75 = v44;
        v81 = (_QWORD *)v46;
        v47 = sub_1587BC0(v45, (__int64 *)&v81, v45, v44, v42, v43);
        sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v86 + 8), v75, 9u);
      }
      v12 = v85;
      v13 = *(_BYTE *)(v4 + 28) & 0x7F;
      switch ( v13 )
      {
        case 'A':
          v15 = 5;
          goto LABEL_19;
        case '@':
          v15 = 4;
LABEL_19:
          if ( v12 )
            goto LABEL_39;
          goto LABEL_20;
        case '4':
          v15 = 6;
          goto LABEL_19;
      }
LABEL_17:
      v14 = *(_BYTE *)(v5 + 8) & 0x7F;
      if ( (unsigned int)(v14 - 58) <= 3 )
      {
        v15 = ((unsigned int)v13 - 49 < 3) + 2;
        goto LABEL_19;
      }
      v15 = v14 == 24 || v14 == 0;
      if ( v12 )
      {
LABEL_39:
        sub_AE9DF0(v84, v15, 2u);
        if ( !v85 )
          goto LABEL_52;
        goto LABEL_40;
      }
LABEL_20:
      if ( !v87 )
        goto LABEL_21;
      v71 = v15;
      v28 = sub_168B9E0(v82);
      v31 = v71;
      v32 = v28;
      v33 = (__int64)v83;
      if ( v83 )
      {
        v78 = v32;
        v33 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v83 + 32LL))(v83, *v83, v71);
        v32 = v78;
        v31 = v71;
      }
      v72 = v31;
      v81 = (_QWORD *)v33;
      v34 = sub_1587BC0(v32, (__int64 *)&v81, v31, v32, v29, v30);
      sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v86 + 8), v72, 2u);
      if ( !v85 )
      {
LABEL_52:
        if ( v87 )
        {
          v35 = sub_168B9E0(v82);
          v39 = (__int64)v83;
          if ( v83 )
          {
            v73 = v35;
            v39 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
            v35 = v73;
          }
          v81 = (_QWORD *)v39;
          v40 = sub_1587BC0(v35, (__int64 *)&v81, v35, v36, v37, v38);
          sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v86 + 8), v5, 0xCu);
        }
LABEL_21:
        sub_15F7200(v82);
        if ( v10 )
          goto LABEL_41;
        goto LABEL_22;
      }
LABEL_40:
      sub_AE9DF0(v84, v5, 0xCu);
      sub_15F7200(v82);
      if ( v10 )
      {
LABEL_41:
        sub_168B9F0((__int64)v82, v3, v10, 0x193Fu, 0);
        v27 = *(_QWORD *)(*v2 + 40LL);
        if ( v85 )
        {
          sub_AE9DF0(v84, *(_QWORD *)(*v2 + 40LL), 9u);
          if ( !v85 )
            goto LABEL_70;
        }
        else
        {
          if ( !v87 )
            goto LABEL_43;
          v58 = sub_168B9E0(v82);
          v59 = (__int64)v83;
          if ( v83 )
            v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
          v81 = (_QWORD *)v59;
          v60 = sub_1587BC0(v58, (__int64 *)&v81, v54, v55, v56, v57);
          sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v86 + 8), v27, 9u);
          if ( !v85 )
          {
LABEL_70:
            if ( v87 )
            {
              v65 = sub_168B9E0(v82);
              v66 = (__int64)v83;
              if ( v83 )
                v66 = (*(__int64 (__fastcall **)(_QWORD *))(*v83 + 32LL))(v83);
              v81 = (_QWORD *)v66;
              v67 = sub_1587BC0(v65, (__int64 *)&v81, v61, v62, v63, v64);
              sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v86 + 8), 0, 2u);
            }
            goto LABEL_43;
          }
        }
        sub_AE9DF0(v84, 0, 2u);
        goto LABEL_43;
      }
LABEL_22:
      sub_168B9F0((__int64)v82, v3, *(_DWORD *)(v4 + 24), 0x70u, 0);
      sub_15F7200(v82);
LABEL_23:
      v2 += 2;
    }
    while ( v68 != v2 );
  }
}
