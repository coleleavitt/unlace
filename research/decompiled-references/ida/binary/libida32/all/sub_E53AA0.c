__int64 __fastcall sub_E53AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r12
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _DWORD *v28; // rdx
  __int64 v29; // rdi
  int v30; // eax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // edx
  unsigned __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rdi
  int v39; // edx
  unsigned __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rdi
  int v43; // edx
  __int64 v44; // r12
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  _DWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  _DWORD *v54; // rdx
  __int64 v55; // rdi
  int v56; // eax
  __int64 v57; // r12
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  _QWORD *v62; // rdi
  _QWORD *v63; // rdi
  __int64 v64; // r13
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rbp
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // rdi
  int v76; // edx
  __int64 v77; // r12
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  __int64 v82; // r12
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // r12
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rdx
  __int64 v92; // r12
  unsigned __int64 v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  _DWORD *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rdx

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = *(_QWORD *)(v7 + 96);
  v10 = v9;
  v11 = v9 & 1;
  v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v8 )
  {
    if ( (v9 & 1) == 0 )
    {
      v8 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v9 & 2) == 0 )
          return 3;
        v92 = *(_QWORD *)(v8 + 18360);
        v93 = v7 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v92 )
        {
          v94 = *(_QWORD *)(v8 + 2352);
          *(_QWORD *)(v8 + 2432) += 24LL;
          v95 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v8 + 2360) >= v95 + 24 && v94 )
          {
            *(_QWORD *)(v8 + 2352) = v95 + 24;
            v96 = (v94 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v96 = sub_962430(v8 + 2352, 24, 24, 3, v10, a6);
            v95 = v96 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v96 = v92;
          v93 = v95 | 4;
          *(_DWORD *)(v96 + 8) = 0;
          *(_QWORD *)(v96 + 16) = v7;
        }
        v12 = v93 & 0xFFFFFFFFFFFFFFFELL;
        v9 = v12 | 1;
        *(_QWORD *)(v7 + 96) = v12 | 1;
      }
    }
    if ( v12 )
    {
      if ( (v12 & 4) != 0 )
      {
        v97 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v97 )
        {
          v98 = *(_QWORD *)v97;
          v99 = *(unsigned int *)(*(_QWORD *)v97 + 12LL);
          if ( v97[2] != (_DWORD)v99 )
          {
            v97[2] = v99;
            (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v98 + 152LL))(
              v98,
              v7,
              v99,
              v8,
              v10);
          }
        }
      }
    }
    v8 = *(_QWORD *)(v6 + 128);
    if ( !v8 )
      return 3;
    v7 = *(_QWORD *)(v6 + 104);
    v9 = *(_QWORD *)(v7 + 96);
    v10 = v9;
    v11 = v9 & 1;
    v12 = v9 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( v11 )
    goto LABEL_56;
  v13 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_56;
  if ( (v9 & 2) != 0 )
  {
    v44 = v13[2295];
    v45 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v44 )
    {
      v46 = v13[294];
      v13[304] += 24LL;
      v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v47 + 24;
      if ( v13[295] >= v47 + 24 && v46 )
      {
        v13[294] = v8;
        v48 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v48 = sub_962430((__int64)(v13 + 294), 24, 24, 3, v10, a6);
        v47 = v48 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v48 = v44;
      v45 = v47 | 4;
      *(_DWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = v7;
    }
    v12 = v45 & 0xFFFFFFFFFFFFFFFELL;
    v9 = v12 | 1;
    *(_QWORD *)(v7 + 96) = v12 | 1;
LABEL_56:
    if ( v12 )
    {
      if ( (v12 & 4) != 0 )
      {
        v49 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v49 )
        {
          v50 = *(_QWORD *)v49;
          v51 = *(unsigned int *)(*(_QWORD *)v49 + 12LL);
          if ( v49[2] != (_DWORD)v51 )
          {
            v49[2] = v51;
            (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64, __int64))(*(_QWORD *)v50 + 152LL))(
              v50,
              v7,
              v51,
              v8,
              v10);
          }
        }
      }
    }
    v8 = *(_QWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v8 + 10) & 0x40) == 0 )
    {
      v7 = *(_QWORD *)(v6 + 104);
      v52 = *(_QWORD *)(v7 + 96);
      v10 = v52;
      v53 = v52 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v52 & 1) != 0 )
        goto LABEL_63;
      v13 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v52 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_63;
      goto LABEL_6;
    }
    return 3;
  }
  if ( (*(_BYTE *)(v8 + 10) & 0x40) != 0 )
    return 3;
LABEL_6:
  v10 &= 2u;
  if ( !(_DWORD)v10 )
    goto LABEL_7;
  v87 = v13[2295];
  v88 = v7 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v87 )
  {
    v89 = v13[294];
    v13[304] += 24LL;
    v90 = (v89 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v90 + 24;
    if ( v13[295] >= v90 + 24 && v89 )
    {
      v13[294] = v8;
      v91 = (v89 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v91 = sub_962430((__int64)(v13 + 294), 24, 24, 3, v10, a6);
      v90 = v91 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v91 = v87;
    v88 = v90 | 4;
    *(_DWORD *)(v91 + 8) = 0;
    *(_QWORD *)(v91 + 16) = v7;
  }
  v53 = v88 & 0xFFFFFFFFFFFFFFFELL;
  v52 = v53 | 1;
  *(_QWORD *)(v7 + 96) = v53 | 1;
LABEL_63:
  if ( v53 )
  {
    if ( (v53 & 4) != 0 )
    {
      v54 = (_DWORD *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v54 )
      {
        v55 = *(_QWORD *)v54;
        v56 = *(_DWORD *)(*(_QWORD *)v54 + 12LL);
        if ( v54[2] != v56 )
        {
          v54[2] = v56;
          (*(void (__fastcall **)(__int64, __int64, _DWORD *, unsigned __int64, __int64))(*(_QWORD *)v55 + 152LL))(
            v55,
            v7,
            v54,
            v8,
            v10);
        }
      }
    }
  }
  v8 = *(_QWORD *)(v6 + 128);
LABEL_7:
  result = 2;
  if ( !*(_DWORD *)(v8 + 20) )
  {
    v15 = *(_QWORD *)(v6 + 104);
    v16 = *(_QWORD *)(v15 + 96);
    while ( 1 )
    {
      v32 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v16 & 1) == 0 )
      {
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v16 & 2) == 0 )
          {
            v18 = *(_QWORD *)(v6 + 128);
            v19 = *(_DWORD *)(v18 + 16);
            if ( !v19 )
              return 0;
            goto LABEL_12;
          }
          v57 = v17[2295];
          v58 = v15 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v57 )
          {
            v59 = v17[294];
            v17[304] += 24LL;
            v60 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v17[295] >= v60 + 24 && v59 )
            {
              v17[294] = v60 + 24;
              v61 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v61 = sub_962430((__int64)(v17 + 294), 24, 24, 3, v10, a6);
              v60 = v61 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v61 = v57;
            v58 = v60 | 4;
            *(_DWORD *)(v61 + 8) = 0;
            *(_QWORD *)(v61 + 16) = v15;
          }
          v32 = v58 & 0xFFFFFFFFFFFFFFFELL;
          v16 = v32 | 1;
          *(_QWORD *)(v15 + 96) = v32 | 1;
        }
      }
      if ( v32 )
      {
        if ( (v32 & 4) != 0 )
        {
          v33 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)v33;
            v35 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
            if ( v33[2] != v35 )
            {
              v33[2] = v35;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v15);
            }
          }
        }
      }
      v18 = *(_QWORD *)(v6 + 128);
      v19 = *(_DWORD *)(v18 + 16);
      if ( !v19 )
        return 0;
      v15 = *(_QWORD *)(v6 + 104);
      v16 = *(_QWORD *)(v15 + 96);
      v36 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v16 & 1) != 0 )
        goto LABEL_36;
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_36;
LABEL_12:
      if ( (v16 & 2) != 0 )
      {
        v82 = v17[2295];
        v83 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v82 )
        {
          v84 = v17[294];
          v17[304] += 24LL;
          v85 = (v84 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v17[295] >= v85 + 24 && v84 )
          {
            v17[294] = v85 + 24;
            v86 = (v84 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v86 = sub_962430((__int64)(v17 + 294), 24, 24, 3, v10, a6);
            v85 = v86 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v86 = v82;
          v83 = v85 | 4;
          *(_DWORD *)(v86 + 8) = 0;
          *(_QWORD *)(v86 + 16) = v15;
        }
        v36 = v83 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v36 | 1;
        *(_QWORD *)(v15 + 96) = v36 | 1;
LABEL_36:
        if ( v36 )
        {
          if ( (v36 & 4) != 0 )
          {
            v37 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v37 )
            {
              v38 = *(_QWORD *)v37;
              v39 = *(_DWORD *)(*(_QWORD *)v37 + 12LL);
              if ( v37[2] != v39 )
              {
                v37[2] = v39;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 152LL))(v38, v15);
              }
            }
          }
        }
        v18 = *(_QWORD *)(v6 + 128);
        if ( *(_DWORD *)(v18 + 16) > 1u )
          return 1;
        v15 = *(_QWORD *)(v6 + 104);
        v16 = *(_QWORD *)(v15 + 96);
        v40 = v16 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v16 & 1) != 0 )
          goto LABEL_43;
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_43;
        goto LABEL_14;
      }
      if ( v19 > 1 )
        return 1;
LABEL_14:
      if ( (v16 & 2) == 0 )
      {
        if ( (*(_BYTE *)(v18 + 24) & 1) == 0 )
          goto LABEL_16;
        goto LABEL_49;
      }
      v77 = v17[2295];
      v78 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v77 )
      {
        v79 = v17[294];
        v17[304] += 24LL;
        v80 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17[295] >= v80 + 24 && v79 )
        {
          v17[294] = v80 + 24;
          v81 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v81 = sub_962430((__int64)(v17 + 294), 24, 24, 3, v10, a6);
          v80 = v81 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v81 = v77;
        v78 = v80 | 4;
        *(_DWORD *)(v81 + 8) = 0;
        *(_QWORD *)(v81 + 16) = v15;
      }
      v40 = v78 & 0xFFFFFFFFFFFFFFFELL;
      v16 = v40 | 1;
      *(_QWORD *)(v15 + 96) = v40 | 1;
LABEL_43:
      if ( v40 )
      {
        if ( (v40 & 4) != 0 )
        {
          v41 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v41 )
          {
            v42 = *(_QWORD *)v41;
            v43 = *(_DWORD *)(*(_QWORD *)v41 + 12LL);
            if ( v41[2] != v43 )
            {
              v41[2] = v43;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 152LL))(v42, v15);
            }
          }
        }
      }
      v18 = *(_QWORD *)(v6 + 128);
      if ( (*(_BYTE *)(v18 + 24) & 1) == 0 )
      {
LABEL_16:
        v20 = *(_QWORD *)(v18 + 24);
        goto LABEL_17;
      }
LABEL_49:
      v20 = sub_B72C40(v18);
LABEL_17:
      v21 = **(_QWORD **)(v20 + 16);
      v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v22 + 8) & 0xF) != 0 )
        v22 = sub_F411C0(v21);
      v23 = sub_F3F530(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL));
      v24 = *(_QWORD *)(v6 + 104);
      v25 = v23;
      v26 = *(_QWORD *)(v24 + 96);
      if ( (v26 & 1) != 0 )
      {
        v27 = v26 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v63 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v26 & 2) == 0 )
          goto LABEL_26;
        v64 = v63[2295];
        v65 = v24 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v64 )
        {
          v66 = v63[294];
          v63[304] += 24LL;
          v67 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v63[295] >= v67 + 24 && v66 )
          {
            v63[294] = v67 + 24;
            v68 = (v66 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v68 = sub_962430((__int64)(v63 + 294), 24, 24, 3, v10, a6);
            v67 = v68 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v68 = v64;
          *(_DWORD *)(v68 + 8) = 0;
          *(_QWORD *)(v68 + 16) = v24;
          v65 = v67 | 4;
        }
        v27 = v65 & 0xFFFFFFFFFFFFFFFELL;
        v26 = v27 | 1;
        *(_QWORD *)(v24 + 96) = v27 | 1;
      }
      if ( v27 )
      {
        if ( (v27 & 4) != 0 )
        {
          v28 = (_DWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v28 )
          {
            v29 = *(_QWORD *)v28;
            v30 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
            if ( v28[2] != v30 )
            {
              v28[2] = v30;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, v24);
            }
          }
        }
      }
LABEL_26:
      v15 = *(_QWORD *)(v25 + 104);
      v16 = *(_QWORD *)(v15 + 96);
      v31 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_BYTE *)(*(_QWORD *)(v6 + 128) + 1LL) & 4) == 0 )
        goto LABEL_27;
      if ( (v16 & 1) != 0 )
        goto LABEL_99;
      v62 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_99;
      if ( (v16 & 2) != 0 )
      {
        v69 = v62[2295];
        v70 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v69 )
        {
          v71 = v62[294];
          v62[304] += 24LL;
          v72 = (v71 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v62[295] >= v72 + 24 && v71 )
          {
            v62[294] = v72 + 24;
            v73 = (v71 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v73 = sub_962430((__int64)(v62 + 294), 24, 24, 3, v10, a6);
            v72 = v73 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v73 = v69;
          v70 = v72 | 4;
          *(_DWORD *)(v73 + 8) = 0;
          *(_QWORD *)(v73 + 16) = v15;
        }
        v31 = v70 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v31 | 1;
        *(_QWORD *)(v15 + 96) = v31 | 1;
LABEL_99:
        if ( v31 )
        {
          if ( (v31 & 4) != 0 )
          {
            v74 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v74 )
            {
              v75 = *(_QWORD *)v74;
              v76 = *(_DWORD *)(*(_QWORD *)v74 + 12LL);
              if ( v74[2] != v76 )
              {
                v74[2] = v76;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v75 + 152LL))(v75, v15);
              }
            }
          }
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v25 + 128) + 1LL) & 4) == 0 )
        return 1;
      v15 = *(_QWORD *)(v25 + 104);
      v16 = *(_QWORD *)(v15 + 96);
LABEL_27:
      v6 = v25;
    }
  }
  return result;
}

