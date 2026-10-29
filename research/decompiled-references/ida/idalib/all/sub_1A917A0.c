void __fastcall sub_1A917A0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v5; // r12
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // r13
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  char v29; // al
  __int64 v30; // rdi
  __int64 v31; // rax
  __int16 v32; // dx
  __int64 v33; // r13
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rbp
  size_t v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // r12
  size_t v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r12
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r14
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbp
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r12
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r12
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v93[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v94; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v95[11]; // [rsp+28h] [rbp-98h] BYREF
  char v96; // [rsp+80h] [rbp-40h]
  unsigned int v97; // [rsp+88h] [rbp-38h]
  char v98; // [rsp+8Ch] [rbp-34h]

  if ( (*(_BYTE *)(a2 + 26) & 0xFD) != 1 )
    return;
  v5 = a1[11];
  v6 = (__int64 *)sub_C9AC70(a2, a2);
  if ( (unsigned __int8)sub_E937F0(v5, v6, 3, v7, v8, v9) )
  {
    v6 = (__int64 *)sub_C9AC10(a2);
    v26 = sub_E96370(a1[11], (__int64)v6);
    if ( BYTE4(v26) )
    {
      if ( (_DWORD)v26 == 8 )
        goto LABEL_51;
      if ( (unsigned int)v26 >= 8 && (unsigned int)v26 <= 0xB )
      {
LABEL_12:
        v27 = 0;
        goto LABEL_13;
      }
    }
  }
  v10 = a1[11];
  v6 = (__int64 *)sub_C9AC70(a2, (__int64)v6);
  if ( (unsigned __int8)sub_E937F0(v10, v6, 5, v11, v12, v13) )
  {
    v6 = (__int64 *)sub_C9AC10(a2);
    v46 = sub_E97A40(a1[11], (__int64)v6);
    if ( BYTE4(v46) )
    {
      if ( (unsigned int)(v46 - 10) <= 2 )
        goto LABEL_12;
    }
  }
  v14 = a1[11];
  v15 = (__int64 *)sub_C9AC70(a2, (__int64)v6);
  v19 = sub_E937F0(v14, v15, 7, v16, v17, v18);
  v20 = a1[11];
  LOBYTE(v14) = v19;
  v21 = (__int64 *)sub_C9AC70(a2, (__int64)v15);
  v25 = sub_E937F0(v20, v21, 8, v22, v23, v24);
  if ( !(_BYTE)v14 && !v25 )
    return;
  v6 = (__int64 *)sub_C9AC10(a2);
  v47 = sub_E924C0(a1[11], (__int64)v6);
  if ( !BYTE4(v47) )
    return;
  if ( (unsigned int)v47 <= 3 )
    goto LABEL_12;
  if ( (_DWORD)v47 != 4 )
    return;
LABEL_51:
  v27 = 8;
LABEL_13:
  v28 = sub_BFB840(*(_QWORD *)(a2 + v27 + 48));
  if ( (*(_WORD *)v28 & 0x1FF) == 0x1A )
    v28 = sub_BFB840(*(_QWORD *)(v28 + 16));
  v29 = *(_BYTE *)(a2 + 26);
  if ( v29 == 3 )
  {
    if ( (*(_WORD *)v28 & 0x1FF) != 0x47 || !sub_BFEF10(v28) )
      return;
    v35 = sub_EEC8C0(a2, (__int64)v6, a3);
    sub_168B9F0((__int64)v93, a1, v35, 0x1C08u, 0);
    v36 = *(_QWORD *)(v28 + 16);
    if ( v96 )
    {
      sub_AE9DF0(v95, *(_QWORD *)(v28 + 16), 0xAu);
      v48 = v96;
    }
    else
    {
      if ( !v98 )
      {
        v37 = j__strlen("'super'");
        goto LABEL_32;
      }
      v54 = sub_168B9E0(v93);
      v55 = v94;
      if ( v94 )
        v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
      v92 = v55;
      v56 = sub_1587BC0(v54, &v92, v50, v51, v52, v53);
      sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * v97 + 8), v36, 0xAu);
      v48 = v96;
    }
    v49 = j__strlen("'super'");
    v37 = v49;
    if ( v48 )
    {
      sub_AEC220(v95, "'super'", v49);
LABEL_44:
      sub_15F7200(v93);
      return;
    }
LABEL_32:
    if ( v98 )
    {
      v42 = sub_168B9E0(v93);
      v43 = v94;
      if ( v94 )
        v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
      v92 = v43;
      v44 = sub_1587BC0(v42, &v92, v38, v39, v40, v41);
      sub_AEC220((unsigned __int8 **)(*v44 + 32LL * v97 + 8), "'super'", v37);
    }
    goto LABEL_44;
  }
  v30 = 0;
  if ( v29 == 1 )
    v30 = *(_QWORD *)(a2 + 40);
  v31 = sub_BFB840(v30);
  v32 = *(_WORD *)v31 & 0x1FF;
  if ( v32 == 26 )
  {
    v31 = sub_BFB840(*(_QWORD *)(v31 + 16));
    v32 = *(_WORD *)v31 & 0x1FF;
  }
  if ( v32 != 71 )
  {
    if ( v32 != 34 )
      return;
    if ( (*(_WORD *)v28 & 0x1FF) != 0x22 )
      return;
    v33 = *(_QWORD *)(v31 + 16);
    if ( v33 != *(_QWORD *)(v28 + 16) )
      return;
    v45 = sub_EEC8C0(a2, (__int64)v6, a3);
    sub_168B9F0((__int64)v93, a1, v45, 0x1C08u, 0);
    if ( v96 )
    {
      sub_AE9DF0(v95, v33, 0xAu);
    }
    else
    {
      if ( !v98 )
      {
LABEL_41:
        sub_15F7200(v93);
        goto LABEL_42;
      }
      v82 = sub_168B9E0(v93);
      v83 = v94;
      if ( v94 )
        v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
      v92 = v83;
      v84 = sub_1587BC0(v82, &v92, v78, v79, v80, v81);
      sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v97 + 8), v33, 0xAu);
    }
    if ( v96 )
    {
      sub_AE9DF0(v95, v33, 0xAu);
    }
    else if ( v98 )
    {
      v89 = sub_168B9E0(v93);
      v90 = v94;
      if ( v94 )
        v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
      v92 = v90;
      v91 = sub_1587BC0(v89, &v92, v85, v86, v87, v88);
      sub_AE9DF0((unsigned __int8 **)(*v91 + 32LL * v97 + 8), v33, 0xAu);
    }
    goto LABEL_41;
  }
  if ( (*(_WORD *)v28 & 0x1FF) != 0x47 )
    return;
  v33 = *(_QWORD *)(v31 + 16);
  if ( v33 != *(_QWORD *)(v28 + 16) )
    return;
  v34 = sub_EEC8C0(a2, (__int64)v6, a3);
  sub_168B9F0((__int64)v93, a1, v34, 0x1C08u, 0);
  if ( v96 )
  {
    sub_AE9DF0(v95, v33, 0xAu);
  }
  else
  {
    if ( !v98 )
      goto LABEL_25;
    v61 = sub_168B9E0(v93);
    v62 = v94;
    if ( v94 )
      v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
    v92 = v62;
    v63 = sub_1587BC0(v61, &v92, v57, v58, v59, v60);
    sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v97 + 8), v33, 0xAu);
  }
  if ( v96 )
  {
    sub_AE9DF0(v95, v33, 0xAu);
  }
  else if ( v98 )
  {
    v68 = sub_168B9E0(v93);
    v69 = v94;
    if ( v94 )
      v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
    v92 = v69;
    v70 = sub_1587BC0(v68, &v92, v64, v65, v66, v67);
    sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v97 + 8), v33, 0xAu);
  }
LABEL_25:
  sub_15F7200(v93);
  if ( !sub_BFEF10(v28) )
  {
LABEL_42:
    sub_168B9F0((__int64)v93, a1, *(_DWORD *)(v33 + 24), 0x1806u, 0);
    if ( v96 )
    {
      sub_AE9DF0(v95, v33, 0xAu);
    }
    else if ( v98 )
    {
      v73 = sub_168B9E0(v93);
      v76 = v94;
      if ( v94 )
        v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 32LL))(v94);
      v92 = v76;
      v77 = sub_1587BC0(v73, &v92, v71, v72, v74, v75);
      sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * v97 + 8), v33, 0xAu);
    }
    goto LABEL_44;
  }
}
