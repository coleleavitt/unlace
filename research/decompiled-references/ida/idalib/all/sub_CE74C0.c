__int64 __fastcall sub_CE74C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // r13
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rdi
  int v35; // edx
  _DWORD *v36; // rax
  __int64 v37; // rdi
  int v38; // edx
  __int64 v39; // r15
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  _DWORD *v44; // rcx
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  _DWORD *v49; // rdx
  __int64 v50; // rdi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r13
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r15
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  _DWORD *v65; // rax
  __int64 v66; // rdi
  int v67; // edx
  __int64 v68; // r13
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax

LABEL_1:
  while ( 1 )
  {
    result = sub_B97A50(a4, a2, 0);
    if ( result )
      return result;
    v10 = *(_QWORD *)(a2 + 104);
    v11 = *(_QWORD *)(v10 + 96);
    v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v11 & 1) != 0 )
      goto LABEL_30;
    v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_30;
    if ( (v11 & 2) != 0 )
    {
      v28 = v13[2295];
      v29 = v10 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v28 )
      {
        v30 = v13[294];
        v13[304] += 24LL;
        v31 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13[295] >= v31 + 24 && v30 )
        {
          v13[294] = v31 + 24;
          v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v32 = sub_986170((__int64)(v13 + 294), 24, 24, 3, v8, v9);
          v31 = v32 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v32 = v28;
        v29 = v31 | 4;
        *(_DWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 16) = v10;
      }
      v12 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v11 = v12 | 1;
      *(_QWORD *)(v10 + 96) = v12 | 1;
LABEL_30:
      if ( v12 )
      {
        if ( (v12 & 4) != 0 )
        {
          v33 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v33 )
          {
            v34 = *(_QWORD *)v33;
            v35 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
            if ( v33[2] != v35 )
            {
              v33[2] = v35;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 152LL))(v34, v10);
            }
          }
        }
      }
      v10 = *(_QWORD *)(a2 + 104);
      v14 = *(_QWORD *)(a2 + 128);
      v11 = *(_QWORD *)(v10 + 96);
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(v14 + 16) != 1 )
      {
        if ( (v11 & 1) != 0 )
          goto LABEL_37;
        goto LABEL_6;
      }
      if ( (v11 & 1) != 0 )
        goto LABEL_83;
      v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_83;
      goto LABEL_64;
    }
    v14 = *(_QWORD *)(a2 + 128);
    if ( *(_DWORD *)(v14 + 16) == 1 )
    {
LABEL_64:
      if ( (v11 & 2) == 0 )
      {
        if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
          goto LABEL_66;
        goto LABEL_89;
      }
      v68 = v13[2295];
      v69 = v10 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v68 )
      {
        v70 = v13[294];
        v13[304] += 24LL;
        v71 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13[295] >= v71 + 24 && v70 )
        {
          v13[294] = v71 + 24;
          v72 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v72 = sub_986170((__int64)(v13 + 294), 24, 24, 3, v8, v9);
          v71 = v72 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v72 = v68;
        v69 = v71 | 4;
        *(_DWORD *)(v72 + 8) = 0;
        *(_QWORD *)(v72 + 16) = v10;
      }
      v12 = v69 & 0xFFFFFFFFFFFFFFFELL;
      v11 = v12 | 1;
      *(_QWORD *)(v10 + 96) = v12 | 1;
LABEL_83:
      if ( v12 )
      {
        if ( (v12 & 4) != 0 )
        {
          v65 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v65 )
          {
            v66 = *(_QWORD *)v65;
            v67 = *(_DWORD *)(*(_QWORD *)v65 + 12LL);
            if ( v65[2] != v67 )
            {
              v65[2] = v67;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 152LL))(v66, v10);
            }
          }
        }
      }
      v14 = *(_QWORD *)(a2 + 128);
      if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
      {
LABEL_66:
        v52 = *(_QWORD *)(v14 + 24);
        goto LABEL_67;
      }
LABEL_89:
      v52 = sub_B96980(v14);
LABEL_67:
      v53 = **(_QWORD **)(v52 + 16);
      v54 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v54 + 8) & 0xF) != 0 )
        v54 = sub_F64F00(v53);
      a2 = sub_F63270(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
LABEL_6:
      v15 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v11 & 2) == 0 )
        {
          if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
            goto LABEL_43;
          goto LABEL_9;
        }
        v55 = v15[2295];
        v56 = v10 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v55 )
        {
          v57 = v15[294];
          v15[304] += 24LL;
          v58 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v15[295] >= v58 + 24 && v57 )
          {
            v15[294] = v58 + 24;
            v59 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v59 = sub_986170((__int64)(v15 + 294), 24, 24, 3, v8, v9);
            v58 = v59 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v59 = v55;
          v56 = v58 | 4;
          *(_DWORD *)(v59 + 8) = 0;
          *(_QWORD *)(v59 + 16) = v10;
        }
        v12 = v56 & 0xFFFFFFFFFFFFFFFELL;
        v11 = v12 | 1;
        *(_QWORD *)(v10 + 96) = v12 | 1;
      }
LABEL_37:
      if ( v12 )
      {
        if ( (v12 & 4) != 0 )
        {
          v36 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v36 )
          {
            v37 = *(_QWORD *)v36;
            v38 = *(_DWORD *)(*(_QWORD *)v36 + 12LL);
            if ( v36[2] != v38 )
            {
              v36[2] = v38;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 152LL))(v37, v10);
            }
          }
        }
      }
      v14 = *(_QWORD *)(a2 + 128);
      if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
      {
LABEL_43:
        v16 = sub_B96980(v14);
        goto LABEL_10;
      }
LABEL_9:
      v16 = *(_QWORD *)(v14 + 24);
LABEL_10:
      v17 = *(_QWORD *)(a2 + 104);
      v18 = *(_QWORD *)(v17 + 96);
      v19 = v18;
      v20 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v18 & 1) != 0 )
        goto LABEL_50;
      v21 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_50;
      if ( (v18 & 2) != 0 )
      {
        v39 = v21[2295];
        v40 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v39 )
        {
          v41 = v21[294];
          v21[304] += 24LL;
          v42 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v21[295] >= v42 + 24 && v41 )
          {
            v21[294] = v42 + 24;
            v43 = (v41 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v43 = sub_986170((__int64)(v21 + 294), 24, 24, 3, v8, v9);
            v42 = v43 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v43 = v39;
          v40 = v42 | 4;
          *(_DWORD *)(v43 + 8) = 0;
          *(_QWORD *)(v43 + 16) = v17;
        }
        v20 = v40 & 0xFFFFFFFFFFFFFFFELL;
        v19 = v20 | 1;
        *(_QWORD *)(v17 + 96) = v20 | 1;
LABEL_50:
        if ( v20 )
        {
          if ( (v20 & 4) != 0 )
          {
            v44 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v44 )
            {
              v45 = *(_QWORD *)v44;
              v46 = *(_DWORD *)(*(_QWORD *)v44 + 12LL);
              if ( v44[2] != v46 )
              {
                v44[2] = v46;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 152LL))(v45, v17);
              }
            }
          }
        }
        v22 = *(_QWORD *)(a2 + 128);
        v17 = *(_QWORD *)(a2 + 104);
        v47 = *(_QWORD *)(v17 + 96);
        v23 = v16 + 24LL * *(unsigned int *)(v22 + 16);
        v48 = v47 & 0xFFFFFFFFFFFFFFFELL;
        LOBYTE(v18) = v47;
        if ( (v47 & 1) != 0 )
          goto LABEL_56;
        v21 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v47 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          goto LABEL_56;
        goto LABEL_14;
      }
      v22 = *(_QWORD *)(a2 + 128);
      v23 = v16 + 24LL * *(unsigned int *)(v22 + 16);
LABEL_14:
      if ( (v18 & 2) == 0 )
      {
        if ( (*(_BYTE *)(v22 + 24) & 1) == 0 )
          goto LABEL_16;
        goto LABEL_62;
      }
      v60 = v21[2295];
      v61 = v17 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v60 )
      {
        v62 = v21[294];
        v21[304] += 24LL;
        v63 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v21[295] >= v63 + 24 && v62 )
        {
          v21[294] = v63 + 24;
          v64 = (v62 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v64 = sub_986170((__int64)(v21 + 294), 24, 24, 3, v8, v9);
          v63 = v64 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v64 = v60;
        v61 = v63 | 4;
        *(_DWORD *)(v64 + 8) = 0;
        *(_QWORD *)(v64 + 16) = v17;
      }
      v48 = v61 & 0xFFFFFFFFFFFFFFFELL;
      v47 = v48 | 1;
      *(_QWORD *)(v17 + 96) = v48 | 1;
LABEL_56:
      if ( v48 )
      {
        if ( (v48 & 4) != 0 )
        {
          v49 = (_DWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v49 )
          {
            v50 = *(_QWORD *)v49;
            v51 = *(_DWORD *)(*(_QWORD *)v49 + 12LL);
            if ( v49[2] != v51 )
            {
              v49[2] = v51;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 152LL))(v50, v17);
            }
          }
        }
      }
      v22 = *(_QWORD *)(a2 + 128);
      if ( (*(_BYTE *)(v22 + 24) & 1) == 0 )
      {
LABEL_16:
        v24 = *(_QWORD *)(v22 + 24);
        goto LABEL_19;
      }
LABEL_62:
      v24 = sub_B96980(v22);
LABEL_19:
      while ( v24 != v23 )
      {
        v25 = *(_QWORD *)(**(_QWORD **)(v24 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v25 + 8) & 0xF) != 0 )
          v25 = sub_F64F00(**(_QWORD **)(v24 + 16));
        v26 = sub_F63270(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL));
        v27 = v26;
        if ( v26 == a3 )
        {
          a2 = a3;
          goto LABEL_1;
        }
        if ( (unsigned __int8)sub_B70650(v26, a3) )
        {
          a2 = v27;
          goto LABEL_1;
        }
        v24 += 24;
      }
    }
  }
}
