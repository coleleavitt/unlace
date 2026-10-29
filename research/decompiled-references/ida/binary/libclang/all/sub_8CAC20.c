__int64 __fastcall sub_8CAC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // cl
  _DWORD *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r15
  __int64 v21; // rcx
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD *v33; // rdx
  __int64 v34; // r13
  __int64 v35; // rcx
  _QWORD *v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _DWORD *v45; // rdx
  _QWORD *v46; // rdx
  __int64 v47; // r15
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  int v51; // eax
  _QWORD *v52; // rdx
  __int64 v53; // r13
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // eax
  __int64 v58; // rdi
  int v59; // eax
  __int64 v60; // rdi
  int v61; // eax
  __int64 v62; // rdi
  int v63; // eax

LABEL_1:
  while ( 1 )
  {
    v7 = a2;
    result = sub_7A4F50(a4, a2, 0);
    if ( result )
      return result;
    v9 = *(_QWORD *)(a2 + 104);
    v10 = *(_QWORD *)(v9 + 96);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v12 = (v10 & 1) == 0;
    if ( (v10 & 1) != 0 )
    {
      if ( !v11 )
      {
        v7 = *(_QWORD *)(a2 + 128);
        v12 = 0;
        v14 = v7;
        if ( *(_DWORD *)(v7 + 16) != 1 )
          goto LABEL_8;
        goto LABEL_64;
      }
      goto LABEL_4;
    }
    if ( v11 <= 3 )
    {
      if ( !v11 )
      {
        v7 = *(_QWORD *)(a2 + 128);
        v14 = v7;
        if ( *(_DWORD *)(v7 + 16) != 1 )
          goto LABEL_8;
LABEL_64:
        v14 = v7;
        goto LABEL_65;
      }
    }
    else
    {
      if ( (v10 & 2) == 0 )
      {
        v14 = *(_QWORD *)(a2 + 128);
        if ( *(_DWORD *)(v14 + 16) != 1 )
          goto LABEL_53;
LABEL_65:
        if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
          goto LABEL_80;
        goto LABEL_66;
      }
      v33 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v34 = v33[2275];
      if ( v34 )
      {
        v35 = v33[274];
        v33[284] += 24LL;
        v11 = (v35 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v33[275] >= v11 + 24 && v35 )
          v33[274] = v11 + 24;
        else
          v11 = sub_8C9370((__int64)(v33 + 274), 24, 3);
        *(_QWORD *)v11 = v34;
        *(_DWORD *)(v11 + 8) = 0;
        v10 = v11 | 5;
        *(_QWORD *)(v11 + 16) = v9;
        *(_QWORD *)(v9 + 96) = v11 | 5;
        LOBYTE(v11) = v11 & 0xFA | 4;
LABEL_4:
        if ( (v11 & 4) != 0 )
        {
          v13 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v13 )
          {
            v50 = *(_QWORD *)v13;
            v51 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
            if ( v13[2] != v51 )
            {
              v13[2] = v51;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v50 + 144LL))(v50, v9);
            }
          }
        }
        v9 = *(_QWORD *)(a2 + 104);
        goto LABEL_7;
      }
      *(_QWORD *)(v9 + 96) = v9 & 0xFFFFFFFFFFFFFFFALL | 1;
      v9 = *(_QWORD *)(a2 + 104);
    }
LABEL_7:
    v10 = *(_QWORD *)(v9 + 96);
    v7 = *(_QWORD *)(a2 + 128);
    v14 = v7;
    v12 = (v10 & 1) == 0;
    if ( *(_DWORD *)(v7 + 16) == 1 )
    {
      v44 = v10 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_QWORD *)(v9 + 96) & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_64;
        if ( (v10 & 4) == 0 )
        {
          v7 = *(_QWORD *)(a2 + 128);
          v14 = v7;
          goto LABEL_65;
        }
      }
      else
      {
        if ( v44 <= 3 )
          goto LABEL_64;
        if ( (v10 & 2) == 0 )
          goto LABEL_65;
        v52 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
        v53 = v52[2275];
        if ( !v53 )
        {
          *(_QWORD *)(v9 + 96) = v9 & 0xFFFFFFFFFFFFFFFALL | 1;
          v7 = *(_QWORD *)(a2 + 128);
          v14 = v7;
          goto LABEL_65;
        }
        v54 = v52[274];
        v52[284] += 24LL;
        v55 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v7 = v55 + 24;
        if ( v52[275] >= v55 + 24 && v54 )
        {
          v52[274] = v7;
        }
        else
        {
          v7 = 24;
          v55 = sub_8C9370((__int64)(v52 + 274), 24, 3);
        }
        *(_QWORD *)v55 = v53;
        *(_DWORD *)(v55 + 8) = 0;
        v10 = v55 | 5;
        *(_QWORD *)(v55 + 16) = v9;
        *(_QWORD *)(v9 + 96) = v55 | 5;
      }
      v45 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v45 )
      {
        v62 = *(_QWORD *)v45;
        v63 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
        if ( v45[2] != v63 )
        {
          v45[2] = v63;
          v7 = v9;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 144LL))(v62, v9);
        }
      }
      v14 = *(_QWORD *)(a2 + 128);
      if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
      {
LABEL_80:
        v40 = sub_7A2E20(v14);
        goto LABEL_67;
      }
LABEL_66:
      v40 = *(_QWORD *)(v14 + 24);
LABEL_67:
      v41 = **(_QWORD **)(v40 + 16);
      v42 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
      v43 = *(_QWORD *)(v42 + 8);
      if ( (v43 & 7) != 0 || (v43 & 8) != 0 )
        v42 = sub_B0CF30(v41, v7);
      a2 = sub_B0E910(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL));
    }
    else
    {
LABEL_8:
      v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v12 )
      {
        if ( !v11 )
          goto LABEL_10;
        goto LABEL_59;
      }
      if ( v11 <= 3 )
        goto LABEL_10;
LABEL_53:
      if ( (v11 & 2) == 0 )
        goto LABEL_11;
      v36 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v37 = v36[2275];
      if ( !v37 )
      {
        *(_QWORD *)(v9 + 96) = v9 & 0xFFFFFFFFFFFFFFFALL | 1;
        v7 = *(_QWORD *)(a2 + 128);
LABEL_10:
        v14 = v7;
LABEL_11:
        if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
          goto LABEL_12;
        goto LABEL_62;
      }
      v38 = v36[274];
      v36[284] += 24LL;
      v11 = (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v7 = v11 + 24;
      if ( v36[275] >= v11 + 24 && v38 )
      {
        v36[274] = v7;
      }
      else
      {
        v7 = 24;
        v11 = sub_8C9370((__int64)(v36 + 274), 24, 3);
      }
      *(_QWORD *)v11 = v37;
      v10 = v11 | 5;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v9 + 96) = v11 | 5;
      LOBYTE(v11) = v11 & 0xFA | 4;
LABEL_59:
      if ( (v11 & 4) == 0 )
      {
        v7 = *(_QWORD *)(a2 + 128);
        goto LABEL_10;
      }
      v39 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v39 )
      {
        v56 = *(_QWORD *)v39;
        v57 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
        if ( v39[2] != v57 )
        {
          v39[2] = v57;
          v7 = v9;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 144LL))(v56, v9);
        }
      }
      v14 = *(_QWORD *)(a2 + 128);
      if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
      {
LABEL_12:
        v15 = *(_QWORD *)(v14 + 24);
        goto LABEL_13;
      }
LABEL_62:
      v15 = sub_7A2E20(v14);
LABEL_13:
      v16 = *(_QWORD *)(a2 + 104);
      v17 = *(_QWORD *)(v16 + 96);
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v17 & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_41;
LABEL_21:
        if ( (v18 & 4) != 0 )
        {
          v22 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v22 )
          {
            v58 = *(_QWORD *)v22;
            v59 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
            if ( v22[2] != v59 )
            {
              v22[2] = v59;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 144LL))(v58, v16);
            }
          }
        }
        v16 = *(_QWORD *)(a2 + 104);
        goto LABEL_24;
      }
      if ( v18 > 3 )
      {
        if ( (v17 & 2) == 0 )
        {
          v24 = *(_QWORD *)(a2 + 128);
          v25 = v15 + 24LL * *(unsigned int *)(v24 + 16);
          goto LABEL_29;
        }
        v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
        v20 = v19[2275];
        if ( !v20 )
        {
          *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
          v16 = *(_QWORD *)(a2 + 104);
          goto LABEL_24;
        }
        v21 = v19[274];
        v19[284] += 24LL;
        v18 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v19[275] >= v18 + 24 && v21 )
          v19[274] = v18 + 24;
        else
          v18 = sub_8C9370((__int64)(v19 + 274), 24, 3);
        *(_QWORD *)v18 = v20;
        v17 = v18 | 5;
        *(_DWORD *)(v18 + 8) = 0;
        *(_QWORD *)(v18 + 16) = v16;
        *(_QWORD *)(v16 + 96) = v18 | 5;
        LOBYTE(v18) = v18 & 0xFA | 4;
        goto LABEL_21;
      }
      if ( !v18 )
      {
LABEL_41:
        v7 = *(_QWORD *)(a2 + 128);
        v25 = v15 + 24LL * *(unsigned int *)(v7 + 16);
LABEL_42:
        v24 = v7;
        goto LABEL_43;
      }
LABEL_24:
      v7 = *(_QWORD *)(a2 + 128);
      v23 = *(_QWORD *)(v16 + 96);
      v24 = v7;
      v25 = v15 + 24LL * *(unsigned int *)(v7 + 16);
      v26 = v23 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v23 & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_42;
        if ( (v23 & 4) != 0 )
          goto LABEL_27;
        v7 = *(_QWORD *)(a2 + 128);
        v24 = v7;
      }
      else
      {
        if ( v26 <= 3 )
          goto LABEL_42;
        if ( (v23 & 2) == 0 )
          goto LABEL_29;
        v46 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
        v47 = v46[2275];
        if ( v47 )
        {
          v48 = v46[274];
          v46[284] += 24LL;
          v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v7 = v49 + 24;
          if ( v46[275] >= v49 + 24 && v48 )
          {
            v46[274] = v7;
          }
          else
          {
            v7 = 24;
            v49 = sub_8C9370((__int64)(v46 + 274), 24, 3);
          }
          *(_QWORD *)v49 = v47;
          *(_DWORD *)(v49 + 8) = 0;
          v23 = v49 | 5;
          *(_QWORD *)(v49 + 16) = v16;
          *(_QWORD *)(v16 + 96) = v49 | 5;
LABEL_27:
          v27 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v27 )
          {
            v60 = *(_QWORD *)v27;
            v61 = *(_DWORD *)(*(_QWORD *)v27 + 12LL);
            if ( v27[2] != v61 )
            {
              v27[2] = v61;
              v7 = v16;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 144LL))(v60, v16);
            }
          }
          v24 = *(_QWORD *)(a2 + 128);
LABEL_29:
          if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
            goto LABEL_44;
          goto LABEL_30;
        }
        *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
        v7 = *(_QWORD *)(a2 + 128);
        v24 = v7;
      }
LABEL_43:
      if ( (*(_BYTE *)(v24 + 24) & 1) != 0 )
      {
LABEL_44:
        v28 = sub_7A2E20(v24);
        goto LABEL_31;
      }
LABEL_30:
      v28 = *(_QWORD *)(v24 + 24);
LABEL_31:
      if ( v25 != v28 )
      {
        while ( 1 )
        {
          v29 = *(_QWORD *)(**(_QWORD **)(v28 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          v30 = *(_QWORD *)(v29 + 8);
          if ( (v30 & 7) != 0 || (v30 & 8) != 0 )
            v29 = sub_B0CF30(**(_QWORD **)(v28 + 16), v7);
          v31 = sub_B0E910(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL));
          v32 = v31;
          if ( v31 == a3 )
          {
            a2 = a3;
            goto LABEL_1;
          }
          v7 = a3;
          if ( (unsigned __int8)sub_777930(v31, a3) )
            break;
          v28 += 24;
          if ( v28 == v25 )
            goto LABEL_1;
        }
        a2 = v32;
      }
    }
  }
}

