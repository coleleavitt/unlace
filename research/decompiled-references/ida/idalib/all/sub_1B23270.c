__int64 __fastcall sub_1B23270(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  _QWORD *v8; // r12
  unsigned __int64 v9; // rbp
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  char v19; // al
  char v20; // dl
  _WORD *v21; // rdi
  int v22; // eax
  bool v23; // r9
  bool v24; // r9
  __int64 *v25; // r13
  unsigned int v26; // eax
  __int64 *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // r9d
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // ecx
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  __int64 *v44; // rsi
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // eax
  __int64 *v50; // rsi
  bool v51; // r9
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // edx
  unsigned int v58; // ecx
  __int64 *v59; // rsi
  __int64 v60; // rbp
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbp
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbp
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // [rsp+8h] [rbp-100h]
  bool v83; // [rsp+8h] [rbp-100h]
  bool v84; // [rsp+8h] [rbp-100h]
  unsigned __int8 v85; // [rsp+8h] [rbp-100h]
  char v86; // [rsp+8h] [rbp-100h]
  unsigned __int64 v87; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v88; // [rsp+18h] [rbp-F0h]
  __int64 v89; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v90; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+34h] [rbp-D4h] BYREF
  char v92; // [rsp+3Ch] [rbp-CCh]
  _QWORD v93[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v94; // [rsp+50h] [rbp-B8h]
  __int64 v95[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v96; // [rsp+B8h] [rbp-50h]
  unsigned int v97; // [rsp+C0h] [rbp-48h]
  char v98; // [rsp+C4h] [rbp-44h]

  v88 = a2;
  if ( *(_DWORD *)(a1 + 40) == (_DWORD)a4 )
  {
    v32 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 64LL) > 0x31u )
      return v32;
  }
  v6 = 16 * a3;
  v7 = a2;
  v8 = *(_QWORD **)(a1 + 56);
  v9 = a2 + v6;
  v82 = a2 + v6;
  v11 = &v8[2 * *(_QWORD *)(a1 + 64)];
  v87 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v11 == v8 )
  {
    if ( v9 != a2 )
      goto LABEL_37;
    goto LABEL_42;
  }
  if ( v9 == a2 )
  {
LABEL_93:
    v9 = v7;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    while ( 1 )
    {
      v21 = (_WORD *)(*(v11 - 2) & 0xFFFFFFFFFFFFFFFCLL);
      v6 = *(unsigned __int16 *)(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL);
      v22 = *v21 & 0x1FF;
      LOWORD(v6) = v6 & 0x1FF;
      a2 = (unsigned int)(v22 + 389);
      LOWORD(a2) = (v22 + 389) & 0x1FF;
      if ( (unsigned __int16)a2 <= 1u || (_WORD)v22 == 44 )
      {
        a2 = (unsigned int)(v6 + 389);
        LOWORD(a2) = (v6 + 389) & 0x1FF;
        v23 = (unsigned __int16)a2 <= 1u;
        LOBYTE(a2) = (_WORD)v6 == 44;
        v24 = (_WORD)v6 == 44 || v23;
        if ( v24 )
        {
          v83 = v24;
          v25 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
          v26 = sub_C00A40((unsigned __int64)v21, a2, v6, a4, a5);
          sub_168B9F0((__int64)v93, v25, v26, 0x11C9u, 0);
          v91 = sub_EEC8C0(*(v11 - 2) & 0xFFFFFFFFFFFFFFFCLL, (__int64)v25, a6);
          sub_1587DB0((__int64)v93, &v91);
          sub_15F7200(v93);
          v27 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
          v31 = sub_C00A40(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL, (__int64)&v91, v28, v29, v30);
          sub_168B9F0((__int64)v93, v27, v31, 0x1934u, 0);
          v91 = sub_EEC8C0(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL, (__int64)v27, a6);
          sub_1587DB0((__int64)v93, &v91);
          sub_15F7200(v93);
          return v83;
        }
      }
      if ( (_WORD)v22 != (_WORD)v6 || *(v11 - 1) != *(_QWORD *)(v9 - 8) )
        goto LABEL_10;
      v11 -= 2;
      v9 -= 16LL;
      if ( v8 == v11 )
        break;
      if ( v9 == v7 )
        goto LABEL_93;
    }
    if ( v9 != v7 )
      goto LABEL_37;
LABEL_43:
    v37 = 4550;
    if ( *(_DWORD *)(a1 + 40) != 55 )
      v37 = 4566;
    sub_168B9F0((__int64)v93, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(a1 + 28), v37, 0);
    sub_15884C0((__int64)v93, (__int64 *)(a1 + 32));
    sub_15F7200(v93);
    v38 = *(_QWORD *)(a1 + 8);
    v42 = sub_C00A40(v87, a1 + 32, v39, v40, v41);
    sub_168B9F0((__int64)v93, (__int64 *)(v38 + 8), v42, 0x1934u, 0);
    v91 = sub_EEC8C0(v87, v38 + 8, a6);
    goto LABEL_67;
  }
  while ( 1 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL);
    LOWORD(v6) = v6 & 0x1FF;
    if ( (_WORD)v6 != (*(_WORD *)(*(v11 - 2) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) || *(_QWORD *)(v9 - 8) != *(v11 - 1) )
      break;
    v11 -= 2;
    v9 -= 16LL;
    if ( v8 == v11 )
    {
      if ( a2 == v9 )
        goto LABEL_73;
      while ( 1 )
      {
LABEL_37:
        v6 = *(unsigned __int16 *)(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL);
        LOWORD(v6) = v6 & 0x1FF;
LABEL_11:
        v12 = *(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL;
        switch ( (_WORD)v6 )
        {
          case '{':
            v13 = sub_9ECBA0(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL, a2, v6, a4, a5)
                ? *(_QWORD *)(v12 + 16)
                : *(_QWORD *)(v12 + 24);
            v6 = *(_QWORD *)(sub_BFBAE0(v13) + 8);
            break;
          case '|':
            v34 = sub_BFBAE0(*(_QWORD *)(v12 + 24));
            v35 = sub_C03930(v34, a2);
            v36 = *(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL];
            LOBYTE(v35) = v36 | v35;
            a2 = v36 & 0xFFFFFFFFFFFFFFF8LL;
            v6 = a2 | v35 & 7;
            break;
          case ',':
            v6 = sub_F68450(
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8LL * *(unsigned int *)(v12 + 24) + 32) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL),
                   a2,
                   v6,
                   a4,
                   a5);
            break;
          default:
            goto LABEL_17;
        }
        if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL)
            & 0xF7) == 0x22 )
          break;
        a2 = *(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL;
        if ( sub_1AEAC70(*(_QWORD *)(a1 + 8), a2, v6, a4, a5, v14) )
          break;
        v9 -= 16LL;
        if ( v9 == v7 )
          goto LABEL_94;
      }
LABEL_17:
      if ( v8 != v11 || v7 != v9 )
        goto LABEL_18;
      goto LABEL_42;
    }
    if ( a2 == v9 )
      goto LABEL_93;
  }
LABEL_10:
  if ( v9 != v7 )
    goto LABEL_11;
LABEL_94:
  if ( v8 == v11 )
  {
LABEL_42:
    if ( !*(_BYTE *)(a1 + 24) )
    {
LABEL_73:
      v32 = 0;
      **(_BYTE **)a1 = 1;
      return v32;
    }
    goto LABEL_43;
  }
LABEL_18:
  v89 = *(_QWORD *)(v11[1] + 48LL);
  v15 = sub_C00A40(*v11 & 0xFFFFFFFFFFFFFFFCLL, a2, v6, a4, a5);
  v89 = sub_C1BEF0((__int64)&v89, a2, v16, v17);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
      & 0xF7) == 0x22 )
  {
    if ( v7 != v9 && v8 != v11 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 - 16) & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == (*(_WORD *)(*(v11 - 2)
                                                                                          & 0xFFFFFFFFFFFFFFFCLL)
                                                                               & 0x1FF) )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v11 - 1) + 32LL))(*(v11 - 1));
        if ( v18 != (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 8) + 32LL))(*(_QWORD *)(v9 - 8)) )
        {
          v19 = *(_BYTE *)(a1 + 24);
          if ( v19 )
          {
LABEL_23:
            v20 = 0;
LABEL_50:
            v32 = 0;
            **(_BYTE **)a1 |= v20;
            return v32;
          }
          goto LABEL_48;
        }
      }
      v44 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
      sub_168B9F0((__int64)v93, v44, v15, 0x11F9u, 0);
      if ( v96 )
      {
        LODWORD(v91) = v15;
        v44 = &v91;
        HIDWORD(v91) = v15;
        v92 = 1;
        sub_AEC610(v95, &v91);
      }
      else if ( v98 )
      {
        v76 = sub_168B9E0(v93);
        v79 = (__int64)v94;
        if ( v94 )
          v79 = (*(__int64 (__fastcall **)(_QWORD *))(*v94 + 32LL))(v94);
        v90 = v79;
        v80 = sub_1587BC0(v76, &v90, v74, v75, v77, v78);
        v44 = &v91;
        v81 = *v80 + 32LL * v97;
        LODWORD(v91) = v15;
        HIDWORD(v91) = v15;
        v92 = 1;
        sub_AEC610((__int64 *)(v81 + 8), &v91);
      }
      sub_15F7200(v93);
      v45 = *(_QWORD *)(a1 + 8);
      v49 = sub_C00A40(v87, (__int64)v44, v46, v47, v48);
      sub_168B9F0((__int64)v93, (__int64 *)(v45 + 8), v49, 0x1934u, 0);
      v91 = sub_EEC8C0(v87, v45 + 8, a6);
LABEL_67:
      sub_1587DB0((__int64)v93, &v91);
      sub_15F7200(v93);
      return 1;
    }
    v84 = v7 == v9 || v8 == v11;
    v50 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    sub_168B9F0((__int64)v93, v50, v15, 0x11E2u, 0);
    v51 = v84;
    if ( v96 )
    {
      LODWORD(v91) = v15;
      v50 = &v91;
      HIDWORD(v91) = v15;
      v92 = 1;
      sub_AEC610(v95, &v91);
      v51 = v7 == v9 || v8 == v11;
    }
    else if ( v98 )
    {
      v65 = sub_168B9E0(v93);
      v69 = v84;
      v70 = v65;
      v71 = (__int64)v94;
      if ( v94 )
      {
        v71 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, bool))(*v94 + 32LL))(
                v94,
                v50,
                *v94,
                v67,
                v68,
                v84);
        v69 = v84;
      }
      v86 = v69;
      v90 = v71;
      v72 = sub_1587BC0(v70, &v90, v66, v67, v68, v69);
      v50 = &v91;
      v73 = *v72 + 32LL * v97;
      LODWORD(v91) = v15;
      HIDWORD(v91) = v15;
      v92 = 1;
      sub_AEC610((__int64 *)(v73 + 8), &v91);
      v51 = v86;
    }
    v85 = v51;
    sub_15F7200(v93);
    v52 = *(_QWORD *)(a1 + 8);
    v56 = sub_C00A40(v87, (__int64)v50, v53, v54, v55);
    sub_168B9F0((__int64)v93, (__int64 *)(v52 + 8), v56, 0x1934u, 0);
    v91 = sub_EEC8C0(v87, v52 + 8, a6);
LABEL_71:
    sub_1587DB0((__int64)v93, &v91);
    sub_15F7200(v93);
    return v85;
  }
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v19 = v7 == v9;
    if ( v7 == v9 )
    {
LABEL_49:
      v20 = v19 & (v8 != v11);
      goto LABEL_50;
    }
LABEL_48:
    **(_QWORD **)(a1 + 48) = v87;
    goto LABEL_49;
  }
  if ( v8 != v11 )
  {
    if ( v7 != v9 )
      goto LABEL_23;
    if ( *(_DWORD *)(a1 + 40) == 55 )
    {
      v88 = *(_QWORD *)(a1 + 56);
      v82 = v88 + 16LL * *(_QWORD *)(a1 + 64);
      goto LABEL_57;
    }
LABEL_77:
    v57 = *(_DWORD *)(a1 + 28);
    v85 = *(_BYTE *)(a1 + 24);
    v58 = 4566;
    v59 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
LABEL_78:
    sub_168B9F0((__int64)v93, v59, v57, v58, 0);
    sub_15884C0((__int64)v93, (__int64 *)(a1 + 32));
    sub_15F7200(v93);
    v60 = *(_QWORD *)(a1 + 8);
    v64 = sub_C00A40(v87, a1 + 32, v61, v62, v63);
    sub_168B9F0((__int64)v93, (__int64 *)(v60 + 8), v64, 0x1934u, 0);
    v91 = sub_EEC8C0(v87, v60 + 8, a6);
    goto LABEL_71;
  }
  if ( *(_DWORD *)(a1 + 40) != 55 )
    goto LABEL_77;
  if ( v7 == v9 )
  {
LABEL_80:
    v57 = *(_DWORD *)(a1 + 28);
    v85 = *(_BYTE *)(a1 + 24);
    v58 = 4550;
    v59 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
    goto LABEL_78;
  }
LABEL_57:
  v43 = v88;
  if ( v82 == v88 || *(_QWORD *)(v88 + 8) )
    goto LABEL_80;
  while ( 1 )
  {
    v43 += 16LL;
    if ( v82 == v43 )
      break;
    if ( *(_QWORD *)(v43 + 8) )
    {
      if ( v43 == v88 )
        goto LABEL_80;
      break;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v43 + 8) + 48LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL]
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL)
      & 0xF7) != 0x22 )
    goto LABEL_80;
  v32 = 0;
  **(_BYTE **)a1 = 0;
  **(_QWORD **)(a1 + 48) = 0;
  return v32;
}
