void __fastcall sub_1B06490(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // r14d
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  _BYTE *v24; // rbp
  unsigned __int64 v25; // rax
  int v26; // r15d
  unsigned __int64 v27; // r14
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rbp
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rdi
  size_t v45; // rax
  __int64 v46; // rax
  unsigned int v47; // eax
  char *v48; // rdi
  size_t v49; // rax
  __int64 *v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 *v54; // rcx
  __int64 *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  unsigned __int64 v61; // r14
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rsi
  _BYTE *v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r15
  __int64 v75; // rdi
  int v76; // eax
  unsigned __int64 v77; // rax
  __int64 **v78; // rax
  int v79; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v80; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+8h] [rbp-F0h]
  int v83; // [rsp+1Ch] [rbp-DCh] BYREF
  char *v84; // [rsp+20h] [rbp-D8h] BYREF
  size_t v85; // [rsp+28h] [rbp-D0h]
  _BYTE v86[200]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)(a2 + 112);
  v10 = *(_QWORD *)(v9 + 104);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v13 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 2) == 0 )
        goto LABEL_4;
      v28 = *(_QWORD *)(v12 + 18360);
      v29 = v9 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v28 )
      {
        a2 = 24;
        v30 = sub_1AF8330((__int64 *)(v12 + 2352), 24, 3u, v12, a5, a6);
        *(_QWORD *)v30 = v28;
        *(_DWORD *)(v30 + 8) = 0;
        *(_QWORD *)(v30 + 16) = v9;
        v29 = v30 | 4;
      }
      v11 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 104) = v11 | 1;
    }
  }
  v31 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = (_BYTE *)v31;
  if ( v11 )
  {
    if ( (v11 & 4) != 0 )
    {
      v13 = nullptr;
      if ( v31 )
      {
        v32 = *(_QWORD *)v31;
        v33 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
        if ( *(_DWORD *)(v31 + 8) != v33 )
        {
          *(_DWORD *)(v31 + 8) = v33;
          a2 = v9;
          v80 = v31;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 152LL))(v32, v9);
          v31 = v80;
        }
        v13 = *(_BYTE **)(v31 + 16);
      }
    }
  }
LABEL_4:
  v14 = sub_B062C0(v13);
  v15 = v14;
  v16 = HIDWORD(v14);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) != 0 && ((_BYTE)v16 != 1 || !v15)
    || (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) == 0 && v15 == 1 && (_BYTE)v16 )
  {
    return;
  }
  v20 = *(_QWORD *)(a3 + 112);
  v21 = *(_QWORD *)(v20 + 104);
  v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v21 & 1) != 0 )
    goto LABEL_30;
  v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_30;
  v24 = (_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v21 & 2) != 0 )
  {
    v34 = *(_QWORD *)(v23 + 18360);
    v35 = v20 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v34 )
    {
      a2 = 24;
      v36 = sub_1AF8330((__int64 *)(v23 + 2352), 24, 3u, v17, v18, v19);
      *(_QWORD *)v36 = v34;
      *(_DWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = v20;
      v35 = v36 | 4;
    }
    v22 = v35 & 0xFFFFFFFFFFFFFFFELL;
    v21 = v22 | 1;
    *(_QWORD *)(v20 + 104) = v22 | 1;
LABEL_30:
    v37 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v24 = (_BYTE *)v37;
    if ( v22 )
    {
      if ( (v22 & 4) != 0 )
      {
        v24 = nullptr;
        if ( v37 )
        {
          v38 = *(_QWORD *)v37;
          v39 = *(_DWORD *)(*(_QWORD *)v37 + 12LL);
          if ( *(_DWORD *)(v37 + 8) != v39 )
          {
            *(_DWORD *)(v37 + 8) = v39;
            a2 = v20;
            v81 = v37;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 152LL))(v38, v20);
            v37 = v81;
          }
          v24 = *(_BYTE **)(v37 + 16);
        }
      }
    }
  }
  v25 = sub_B062C0(v24);
  v26 = v25;
  v79 = v25;
  v27 = HIDWORD(v25);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) != 0 && !v26 && (_BYTE)v27 )
  {
    v48 = sub_FFDD70(27, 0);
    v84 = v48;
    v49 = 0;
    if ( v48 )
      v49 = j__strlen(v48);
    v85 = v49;
    sub_168B9F0((__int64)v86, a1, a4, 0x1228u, 0);
    v46 = sub_1682BA0((__int64)v86, (__int64)&v84);
    v83 = 0;
LABEL_44:
    sub_1587D10(v46, &v83);
    sub_15F7200(v86);
    v47 = sub_B062F0(v24);
    sub_168B9F0((__int64)v86, a1, v47, 0x1822u, 0);
    sub_1682BA0((__int64)v86, (__int64)&v84);
    sub_15F7200(v86);
    return;
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) == 0
    && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 88) & 0x20) == 0
    && v79 == 1
    && (_BYTE)v27 )
  {
    if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x33u || (*(_BYTE *)(a3 + 29) & 1) == 0 )
      goto LABEL_41;
    v50 = sub_B8C3D0(a3, a2, v40, v41, v42, v43);
    v53 = *v50;
    v54 = (__int64 *)(*v50 + 8LL * *((unsigned int *)v50 + 2));
    if ( *v50 >= (unsigned __int64)v54 )
    {
      if ( (__int64 *)v53 == v54 )
        goto LABEL_41;
      if ( *(_WORD *)(*v54 + 36) != 296 )
      {
        v78 = (__int64 **)(v54 + 1);
        do
        {
          if ( (__int64 **)v53 == v78 )
            goto LABEL_41;
          v54 = *v78++;
        }
        while ( *((_WORD *)v54 + 18) != 296 );
      }
      goto LABEL_53;
    }
    v55 = (__int64 *)*v50;
    while ( 1 )
    {
      v53 = *v55;
      if ( *(_WORD *)(*v55 + 36) == 296 )
        break;
      if ( v54 == ++v55 )
        goto LABEL_41;
    }
    if ( v54 != v55 )
    {
LABEL_53:
      if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
        goto LABEL_41;
      v56 = sub_B8C3D0(a3, a2, v53, (__int64)v54, v51, v52);
      v60 = *((unsigned int *)v56 + 2);
      v61 = *v56 + 8 * v60;
      if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
        v62 = *sub_B8C3D0(a3, a2, v60, v57, v58, v59);
      else
        v62 = 0;
      while ( 1 )
      {
        if ( v62 >= v61 )
        {
          if ( v62 == v61 )
            break;
          v77 = v61;
          while ( *(_WORD *)(*(_QWORD *)v77 + 36LL) != 296 )
          {
            v77 += 8LL;
            if ( v62 == v77 )
              goto LABEL_41;
          }
        }
        else
        {
          v63 = v62;
          while ( *(_WORD *)(*(_QWORD *)v63 + 36LL) != 296 )
          {
            v63 += 8LL;
            if ( v61 == v63 )
              goto LABEL_41;
          }
        }
        while ( *(_WORD *)(*(_QWORD *)v62 + 36LL) != 296 )
          v62 += 8LL;
        v64 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v62 + 40LL) + 16LL) + 112LL);
        v65 = *(_QWORD *)(v64 + 104);
        v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v65 & 1) == 0 )
        {
          v67 = v65 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v65 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v68 = (_BYTE *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v65 & 2) == 0 )
              goto LABEL_66;
            v70 = *(_QWORD *)(v67 + 18360);
            v71 = v64 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v70 )
            {
              v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v62 + 40LL) + 16LL) + 112LL);
              v72 = sub_1AF8330((__int64 *)(v67 + 2352), 24, 3u, v64, v58, v59);
              v64 = v82;
              *(_QWORD *)v72 = v70;
              *(_DWORD *)(v72 + 8) = 0;
              *(_QWORD *)(v72 + 16) = v82;
              v71 = v72 | 4;
            }
            v66 = v71 & 0xFFFFFFFFFFFFFFFELL;
            v65 = v66 | 1;
            *(_QWORD *)(v64 + 104) = v66 | 1;
          }
        }
        v73 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        v74 = v73;
        v68 = (_BYTE *)v73;
        if ( v66 )
        {
          if ( (v66 & 4) != 0 )
          {
            v68 = nullptr;
            if ( v73 )
            {
              v75 = *(_QWORD *)v73;
              v76 = *(_DWORD *)(*(_QWORD *)v73 + 12LL);
              if ( *(_DWORD *)(v74 + 8) != v76 )
              {
                *(_DWORD *)(v74 + 8) = v76;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 152LL))(v75, v64);
              }
              v68 = *(_BYTE **)(v74 + 16);
            }
          }
        }
LABEL_66:
        v69 = sub_B062C0(v68);
        if ( !BYTE4(v69) || !(_DWORD)v69 )
          return;
        v62 += 8LL;
      }
    }
LABEL_41:
    v44 = sub_FFDD70(27, 1);
    v84 = v44;
    v45 = 0;
    if ( v44 )
      v45 = j__strlen(v44);
    v85 = v45;
    sub_168B9F0((__int64)v86, a1, a4, 0x1228u, 0);
    v46 = sub_1682BA0((__int64)v86, (__int64)&v84);
    v83 = 1;
    goto LABEL_44;
  }
}
