void __fastcall sub_1CB6E70(__int64 a1, __int64 a2, unsigned __int64 a3, _WORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rax
  _WORD **v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _DWORD *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _DWORD *v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // r14
  unsigned __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r15
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // r15
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  __int64 *v57; // rax
  _WORD **v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdi

  v7 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_13;
  v8 = sub_B8C3D0(a2, a2, a3, (__int64)a4, a5, a6);
  a3 = *v8;
  v9 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( a3 < v9 )
  {
    a4 = (_WORD *)a3;
    a2 = *(_QWORD *)a3;
    if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 197 )
    {
      while ( 1 )
      {
        a4 += 4;
        if ( (_WORD *)v9 == a4 )
          break;
        a2 = *(_QWORD *)a4;
        if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
          goto LABEL_67;
      }
LABEL_8:
      if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
      {
        v11 = sub_B8C3D0(v7, a2, a3, (__int64)a4, a5, a6);
        a3 = *v11;
        v12 = *v11 + 8LL * *((unsigned int *)v11 + 2);
        if ( a3 >= v12 )
        {
          if ( a3 != v12 )
          {
            a4 = *(_WORD **)v12;
            if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 195 )
            {
LABEL_83:
              v13 = *(_QWORD *)a3;
              if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 195 )
              {
                v57 = (__int64 *)(a3 + 8);
                do
                  v13 = *v57++;
                while ( *(_WORD *)(v13 + 36) != 195 );
              }
              goto LABEL_14;
            }
            v58 = (_WORD **)(v12 + 8);
            while ( 1 )
            {
              a4 = v58;
              if ( (_WORD **)a3 == v58 )
                break;
              a4 = *v58++;
              if ( a4[18] == 195 )
                goto LABEL_83;
            }
          }
        }
        else
        {
          a4 = (_WORD *)a3;
          while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 195 )
          {
            a4 += 4;
            if ( (_WORD *)v12 == a4 )
              goto LABEL_13;
          }
          if ( (_WORD *)v12 != a4 )
            goto LABEL_83;
        }
      }
LABEL_13:
      v13 = 0;
      goto LABEL_14;
    }
LABEL_67:
    if ( (_WORD *)v9 == a4 )
      goto LABEL_8;
  }
  else
  {
    if ( a3 == v9 )
      goto LABEL_8;
    a4 = *(_WORD **)v9;
    if ( *(_WORD *)(*(_QWORD *)v9 + 36LL) != 197 )
    {
      v10 = (_WORD **)(v9 + 8);
      do
      {
        a4 = v10;
        if ( (_WORD **)a3 == v10 )
          goto LABEL_8;
        a4 = *v10++;
      }
      while ( a4[18] != 197 );
    }
  }
  v13 = *(_QWORD *)a3;
  if ( *(_WORD *)(*(_QWORD *)a3 + 36LL) != 197 )
  {
    v51 = (__int64 *)(a3 + 8);
    do
      v13 = *v51++;
    while ( *(_WORD *)(v13 + 36) != 197 );
  }
LABEL_14:
  v14 = (_QWORD *)v7;
  sub_1861810(a1, v7, a3, (__int64)a4, a5, a6);
  v17 = *(_QWORD *)(v7 + 104);
  v18 = *(_QWORD *)(v17 + 96);
  if ( (v18 & 1) != 0 )
  {
    v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v45 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v18 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v18 & 2) == 0 )
      goto LABEL_21;
    v46 = v45[2295];
    v47 = v17 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v46 )
    {
      v48 = v45[294];
      v45[304] += 24LL;
      v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = (_QWORD *)(v49 + 24);
      if ( v45[295] >= v49 + 24 && v48 )
      {
        v45[294] = v14;
        v50 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v14 = &qword_18;
        v50 = sub_986170((__int64)(v45 + 294), 24, 24, 3, v15, v16);
        v49 = v50 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v50 = v46;
      v47 = v49 | 4;
      *(_DWORD *)(v50 + 8) = 0;
      *(_QWORD *)(v50 + 16) = v17;
    }
    v19 = v47 & 0xFFFFFFFFFFFFFFFELL;
    v18 = v19 | 1;
    *(_QWORD *)(v17 + 96) = v19 | 1;
  }
  if ( v19 )
  {
    if ( (v19 & 4) != 0 )
    {
      v20 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 )
      {
        v21 = *(_QWORD *)v20;
        v22 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
        if ( v20[2] != v22 )
        {
          v20[2] = v22;
          v14 = (_QWORD *)v17;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 152LL))(v21, v17);
        }
      }
    }
  }
LABEL_21:
  v23 = *(_QWORD *)(v7 + 128);
  if ( (*(_BYTE *)(v23 + 24) & 1) != 0 )
    v24 = sub_B96980(v23);
  else
    v24 = *(_QWORD *)(v23 + 24);
  v25 = *(_QWORD *)(v7 + 104);
  v26 = *(_QWORD *)(v25 + 96);
  v27 = v26;
  v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v26 & 1) != 0 )
    goto LABEL_24;
  v14 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v26 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_24;
  if ( (v26 & 2) != 0 )
  {
    v52 = v14[2295];
    v53 = v25 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v52 )
    {
      v54 = v14[294];
      v14[304] += 24LL;
      v55 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v14[295] >= v55 + 24 && v54 )
      {
        v14[294] = v55 + 24;
        v56 = (v54 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v59 = (__int64)(v14 + 294);
        v14 = &qword_18;
        v56 = sub_986170(v59, 24, 24, 3, v15, v16);
        v55 = v56 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v56 = v52;
      v53 = v55 | 4;
      *(_DWORD *)(v56 + 8) = 0;
      *(_QWORD *)(v56 + 16) = v25;
    }
    v28 = v53 & 0xFFFFFFFFFFFFFFFELL;
    v27 = v28 | 1;
    *(_QWORD *)(v25 + 96) = v28 | 1;
LABEL_24:
    if ( v28 )
    {
      if ( (v28 & 4) != 0 )
      {
        v29 = (_DWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v29 )
        {
          v30 = *(_QWORD *)v29;
          v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
          if ( v29[2] != v31 )
          {
            v29[2] = v31;
            v14 = (_QWORD *)v25;
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 152LL))(v30, v25);
          }
        }
      }
    }
    v32 = *(_QWORD *)(v7 + 128);
    v25 = *(_QWORD *)(v7 + 104);
    v33 = *(_QWORD *)(v25 + 96);
    v34 = v24 + 24LL * *(unsigned int *)(v32 + 16);
    v27 = v33 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v26) = v33;
    if ( (v33 & 1) != 0 )
      goto LABEL_30;
    v14 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v33 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_30;
    goto LABEL_49;
  }
  v32 = *(_QWORD *)(v7 + 128);
  v33 = 3LL * *(unsigned int *)(v32 + 16);
  v34 = v24 + 24LL * *(unsigned int *)(v32 + 16);
LABEL_49:
  if ( (v26 & 2) == 0 )
    goto LABEL_36;
  v40 = v14[2295];
  v41 = v25 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v40 )
  {
    v42 = v14[294];
    v14[304] += 24LL;
    v43 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14[295] >= v43 + 24 && v42 )
    {
      v14[294] = v43 + 24;
      v44 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v60 = (__int64)(v14 + 294);
      v14 = &qword_18;
      v44 = sub_986170(v60, 24, 24, 3, v15, v16);
      v43 = v44 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v44 = v40;
    v41 = v43 | 4;
    *(_DWORD *)(v44 + 8) = 0;
    *(_QWORD *)(v44 + 16) = v25;
  }
  v27 = v41 & 0xFFFFFFFFFFFFFFFELL;
  v33 = v27 | 1;
  *(_QWORD *)(v25 + 96) = v27 | 1;
LABEL_30:
  if ( v27 )
  {
    v27 &= 4u;
    if ( (_DWORD)v27 )
    {
      v33 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v33 )
      {
        v35 = *(_QWORD *)v33;
        v36 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
        if ( *(_DWORD *)(v33 + 8) != v36 )
        {
          *(_DWORD *)(v33 + 8) = v36;
          v14 = (_QWORD *)v25;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v35 + 152LL))(v35, v25);
        }
      }
    }
  }
  v32 = *(_QWORD *)(v7 + 128);
LABEL_36:
  if ( (*(_BYTE *)(v32 + 24) & 1) != 0 )
    v37 = sub_B96980(v32);
  else
    v37 = *(_QWORD *)(v32 + 24);
  for ( ; v34 != v37; v37 += 24 )
  {
    v38 = *(_QWORD *)(**(_QWORD **)(v37 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v38 + 8) & 0xF) != 0 )
      v38 = sub_F64F00(**(_QWORD **)(v37 + 16), (__int64)v14, v33, v27, v15);
    v39 = sub_F63270(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v14, v33, v27, v15, v16);
    if ( v39 )
    {
      v33 = (*((_BYTE *)v39 + 28) & 0x7Fu) - 60;
      if ( (unsigned int)v33 <= 1 )
      {
        v14 = (_QWORD *)v7;
        sub_1877170(a1, v7, v13, (__int64)v39, *(_DWORD *)v37);
      }
    }
  }
  sub_18854D0(a1, (__int64)v14, v33, v27, v15, v16);
}
