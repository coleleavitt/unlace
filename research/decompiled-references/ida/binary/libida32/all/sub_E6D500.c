__int64 __fastcall sub_E6D500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // al
  char v10; // r9
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdi
  unsigned __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // r13
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _DWORD *v48; // rcx
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rdi
  int v55; // eax
  __int64 v56; // r13
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (v7 >> 1) & 3;
  if ( (_DWORD)v8 == 1 )
  {
    if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 59 > 2 )
      return 0;
    v20 = *(_QWORD *)(v6 + 104);
    v21 = *(_QWORD *)(v20 + 96);
    v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v21 & 1) == 0 )
    {
      v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v21 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v21 & 2) == 0 )
          goto LABEL_20;
        v35 = v23[2295];
        v36 = v20 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v35 )
        {
          v37 = v23[294];
          v23[304] += 24LL;
          v38 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v23[295] >= v38 + 24 && v37 )
          {
            v23[294] = v38 + 24;
            v39 = (v37 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v39 = sub_962430((__int64)(v23 + 294), 24, 24, 3, a5, a6);
            v38 = v39 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v39 = v35;
          v36 = v38 | 4;
          *(_DWORD *)(v39 + 8) = 0;
          *(_QWORD *)(v39 + 16) = v20;
        }
        v22 = v36 & 0xFFFFFFFFFFFFFFFELL;
        v21 = v22 | 1;
        *(_QWORD *)(v20 + 96) = v22 | 1;
      }
    }
    if ( v22 )
    {
      if ( (v22 & 4) != 0 )
      {
        v40 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v40 )
        {
          v41 = *(_QWORD *)v40;
          v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL);
          if ( v40[2] != v42 )
          {
            v40[2] = v42;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 152LL))(v41, v20);
          }
        }
      }
    }
LABEL_20:
    v24 = *(_QWORD *)(v6 + 128);
    if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
      v25 = sub_B72C40(v24);
    else
      v25 = *(_QWORD *)(v24 + 24);
    v26 = *(_QWORD *)(v6 + 104);
    v27 = *(_QWORD *)(v26 + 96);
    v28 = v27;
    v29 = v27 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v27 & 1) == 0 )
    {
      v30 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v27 & 2) == 0 )
        {
          v31 = *(_QWORD *)(v6 + 128);
          v32 = v25 + 24LL * *(unsigned int *)(v31 + 16);
LABEL_26:
          if ( (v27 & 2) == 0 )
            goto LABEL_27;
          v56 = v30[2295];
          v57 = v26 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v56 )
          {
            v58 = v30[294];
            v30[304] += 24LL;
            v59 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v30[295] >= v59 + 24 && v58 )
            {
              v30[294] = v59 + 24;
              v60 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v60 = sub_962430((__int64)(v30 + 294), 24, 24, 3, a5, a6);
              v59 = v60 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v60 = v56;
            v57 = v59 | 4;
            *(_DWORD *)(v60 + 8) = 0;
            *(_QWORD *)(v60 + 16) = v26;
          }
          v52 = v57 & 0xFFFFFFFFFFFFFFFELL;
          v51 = v52 | 1;
          *(_QWORD *)(v26 + 96) = v52 | 1;
LABEL_59:
          if ( v52 )
          {
            if ( (v52 & 4) != 0 )
            {
              v53 = (_DWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v53 )
              {
                v54 = *(_QWORD *)v53;
                v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
                if ( v53[2] != v55 )
                {
                  v53[2] = v55;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 152LL))(v54, v26);
                }
              }
            }
          }
          v31 = *(_QWORD *)(v6 + 128);
LABEL_27:
          if ( (*(_BYTE *)(v31 + 24) & 1) != 0 )
            v33 = sub_B72C40(v31);
          else
            v33 = *(_QWORD *)(v31 + 24);
          if ( v33 != v32 )
          {
            while ( 1 )
            {
              v34 = *(_QWORD *)(**(_QWORD **)(v33 + 16) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v34 + 8) & 0xF) != 0 )
                v34 = sub_F411C0(**(_QWORD **)(v33 + 16));
              if ( (*(_BYTE *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
                break;
              v33 += 24;
              if ( v32 == v33 )
                return 0;
            }
            return 4;
          }
          return 0;
        }
        v43 = v30[2295];
        v44 = v26 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v43 )
        {
          v45 = v30[294];
          v30[304] += 24LL;
          v46 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v30[295] >= v46 + 24 && v45 )
          {
            v30[294] = v46 + 24;
            v47 = (v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v47 = sub_962430((__int64)(v30 + 294), 24, 24, 3, a5, a6);
            v46 = v47 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v47 = v43;
          v44 = v46 | 4;
          *(_DWORD *)(v47 + 8) = 0;
          *(_QWORD *)(v47 + 16) = v26;
        }
        v29 = v44 & 0xFFFFFFFFFFFFFFFELL;
        v28 = v29 | 1;
        *(_QWORD *)(v26 + 96) = v29 | 1;
      }
    }
    if ( v29 )
    {
      if ( (v29 & 4) != 0 )
      {
        v48 = (_DWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v48 )
        {
          v49 = *(_QWORD *)v48;
          v50 = *(_DWORD *)(*(_QWORD *)v48 + 12LL);
          if ( v48[2] != v50 )
          {
            v48[2] = v50;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 152LL))(v49, v26);
          }
        }
      }
    }
    v31 = *(_QWORD *)(v6 + 128);
    v26 = *(_QWORD *)(v6 + 104);
    v51 = *(_QWORD *)(v26 + 96);
    v32 = v25 + 24LL * *(unsigned int *)(v31 + 16);
    v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v27) = v51;
    if ( (v51 & 1) != 0 )
      goto LABEL_59;
    v30 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v51 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_59;
    goto LABEL_26;
  }
  if ( (_DWORD)v8 == 2 )
  {
    v9 = *(_BYTE *)(v6 + 17);
    LOBYTE(a3) = (v9 & 8) != 0;
    LODWORD(a3) = 32 * a3;
    v10 = a3;
    LOBYTE(a3) = (v9 & 0x10) != 0;
    v11 = (unsigned int)(16 * a3);
    LOBYTE(a3) = (2 * ((v9 & 2) != 0)) | ((v9 & 4) != 0 ? 0xC : 0) | (16 * a3) | v10 | v9 & 1;
    v12 = a3 & 0x10;
    if ( (a3 & 0x10) != 0 )
      v12 = 8;
    v13 = a3 & 0xC;
    if ( (a3 & 0xC) != 0 )
      v13 = 4;
    v14 = a3 & 2;
    if ( (a3 & 2) != 0 )
      v14 = 2;
    v15 = a3 & 1;
    v16 = v14 | v13 | v15 | v12;
    v17 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 )
      v16 |= sub_E6D500(v17, 2, v15, v13, v11) & 0xB;
    return v16;
  }
  v16 = 6;
  v19 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v19 )
    return v16;
  return (unsigned int)sub_E6D500(v19, a2, a3, a4, a5) | 6;
}

