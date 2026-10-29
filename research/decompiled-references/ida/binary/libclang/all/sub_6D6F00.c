char **__fastcall sub_6D6F00(char **a1, __int64 a2, __int64 a3)
{
  char *v4; // r13
  char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 i; // rdi
  __int64 (*v10)(); // r15
  __int64 v11; // rax
  _BOOL8 v12; // rdx
  _BOOL8 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 (*v16)(); // r8
  __int64 v17; // rax
  _BOOL8 v18; // rdx
  _BOOL8 v19; // rsi
  __int64 v20; // rdx
  __int64 (*v22)(); // r8
  __int64 v23; // rax
  _BOOL8 v24; // rdx
  _BOOL8 v25; // rsi
  __int64 v26; // rdx
  __int64 (*v27)(); // r8
  __int64 v28; // rax
  _BOOL8 v29; // rdx
  _BOOL8 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 (*v33)(); // r8
  __int64 v34; // rax
  _BOOL8 v35; // rdx
  _BOOL8 v36; // rsi
  __int64 v37; // rdx
  _QWORD *j; // rbx
  _BYTE *v39; // rax
  _BYTE *v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdi
  _BYTE *v43; // rsi
  __int64 (*v44)(); // r8
  __int64 v45; // rax
  _BOOL8 v46; // rdx
  _BYTE *v47; // r9
  __int64 v48; // rdx
  char *v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rdi
  _QWORD *v52; // rax
  char *v53; // rdx
  __int64 v54; // r9
  _BYTE *v55; // rsi
  _QWORD *v56; // r8
  _DWORD *v57; // r10
  char *v58; // rbp
  char *v59; // rbx
  __int64 v60; // r9
  __int64 v61; // r11
  unsigned __int64 v62; // r8
  signed __int64 v63; // rbx
  unsigned int v64; // esi
  unsigned int v65; // r9d
  __int64 v66; // r10
  __int64 v67; // rdi
  __int64 v68; // r8
  __int64 v69; // rax
  _BOOL8 v70; // rdx
  _BOOL8 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // r9
  _BYTE *v74; // rsi
  __int64 v75; // rax
  _BOOL8 v76; // rdx
  _BOOL8 v77; // rsi
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // edi
  unsigned int v82; // edx
  __int64 v83; // r8

  (*(void (__fastcall **)(char **, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a2 + 17288) + 496LL))(
    a1,
    *(_QWORD *)(a2 + 17288),
    *(_QWORD *)(a3 + 40),
    *(unsigned int *)(a3 + 36));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - *a1;
  v7 = v6 >> 7;
  v8 = v6 >> 5;
  if ( v7 > 0 )
  {
    for ( i = *(_QWORD *)(a2 + 17288); ; i = *(_QWORD *)(a2 + 17288) )
    {
      while ( 1 )
      {
        v10 = *(__int64 (**)())(*(_QWORD *)i + 544LL);
        v11 = *((_QWORD *)v5 + 1);
        v12 = v11 != 0;
        v13 = v12 + *(_QWORD *)v5;
        v14 = v11 - v12;
        if ( v10 != sub_6A6810 )
        {
          if ( !((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v10)(i, v13, v14) )
            goto LABEL_24;
          i = *(_QWORD *)(a2 + 17288);
          v22 = *(__int64 (**)())(*(_QWORD *)i + 544LL);
          v23 = *((_QWORD *)v5 + 5);
          v24 = v23 != 0;
          v25 = v24 + *((_QWORD *)v5 + 4);
          v26 = v23 - v24;
          if ( v22 != sub_6A6810 )
          {
            if ( !((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v22)(i, v25, v26) )
            {
              v5 += 32;
              goto LABEL_24;
            }
            i = *(_QWORD *)(a2 + 17288);
            v27 = *(__int64 (**)())(*(_QWORD *)i + 544LL);
            v28 = *((_QWORD *)v5 + 9);
            v29 = v28 != 0;
            v30 = v29 + *((_QWORD *)v5 + 8);
            v31 = v28 - v29;
            if ( v27 != sub_6A6810 )
              break;
          }
        }
        v5 += 128;
        if ( !--v7 )
          goto LABEL_7;
        if ( v10 == sub_6A6810 )
        {
          v5 += 128 * v7;
LABEL_7:
          v8 = (v4 - v5) >> 5;
          goto LABEL_8;
        }
      }
      if ( !((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v27)(i, v30, v31) )
      {
        v5 += 64;
        goto LABEL_24;
      }
      v32 = *(_QWORD *)(a2 + 17288);
      v33 = *(__int64 (**)())(*(_QWORD *)v32 + 544LL);
      v34 = *((_QWORD *)v5 + 13);
      v35 = v34 != 0;
      v36 = v35 + *((_QWORD *)v5 + 12);
      v37 = v34 - v35;
      if ( v33 != sub_6A6810 && !((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v33)(v32, v36, v37) )
        break;
      v5 += 128;
      if ( !--v7 )
        goto LABEL_7;
    }
    v5 += 96;
    goto LABEL_24;
  }
LABEL_8:
  switch ( v8 )
  {
    case 2LL:
      v15 = *(_QWORD *)(a2 + 17288);
      v16 = *(__int64 (**)())(*(_QWORD *)v15 + 544LL);
      break;
    case 3LL:
      v15 = *(_QWORD *)(a2 + 17288);
      v16 = *(__int64 (**)())(*(_QWORD *)v15 + 544LL);
      v75 = *((_QWORD *)v5 + 1);
      v76 = v75 != 0;
      v77 = v76 + *(_QWORD *)v5;
      v78 = v75 - v76;
      if ( v16 != sub_6A6810 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v16)(v15, v77, v78) )
          goto LABEL_24;
        v15 = *(_QWORD *)(a2 + 17288);
        v16 = *(__int64 (**)())(*(_QWORD *)v15 + 544LL);
      }
      v5 += 32;
      break;
    case 1LL:
      v15 = *(_QWORD *)(a2 + 17288);
      v16 = *(__int64 (**)())(*(_QWORD *)v15 + 544LL);
LABEL_12:
      v17 = *((_QWORD *)v5 + 1);
      v18 = v17 != 0;
      v19 = v18 + *(_QWORD *)v5;
      v20 = v17 - v18;
      if ( v16 == sub_6A6810 || ((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v16)(v15, v19, v20) )
        return a1;
      goto LABEL_24;
    default:
      return a1;
  }
  v69 = *((_QWORD *)v5 + 1);
  v70 = v69 != 0;
  v71 = v70 + *(_QWORD *)v5;
  v72 = v69 - v70;
  if ( v16 == sub_6A6810 )
  {
LABEL_86:
    v5 += 32;
    goto LABEL_12;
  }
  if ( ((unsigned __int8 (__fastcall *)(__int64, _BOOL8, __int64))v16)(v15, v71, v72) )
  {
    v15 = *(_QWORD *)(a2 + 17288);
    v16 = *(__int64 (**)())(*(_QWORD *)v15 + 544LL);
    goto LABEL_86;
  }
LABEL_24:
  if ( v4 == v5 )
    return a1;
  if ( v4 != v5 + 32 )
  {
    for ( j = v5 + 48; ; j += 4 )
    {
      v42 = *(_QWORD *)(a2 + 17288);
      v43 = (_BYTE *)*(j - 2);
      v44 = *(__int64 (**)())(*(_QWORD *)v42 + 544LL);
      v45 = *(j - 1);
      v46 = v45 != 0;
      v47 = &v43[v46];
      v48 = v45 - v46;
      if ( v44 == sub_6A6810 )
      {
        v39 = *(_BYTE **)v5;
        v40 = *(_BYTE **)v5;
        if ( *(char **)v5 != v5 + 16 )
          goto LABEL_28;
        goto LABEL_67;
      }
      if ( ((unsigned __int8 (__fastcall *)(__int64, _BYTE *, __int64))v44)(v42, v47, v48) )
        break;
LABEL_32:
      if ( v4 == (char *)(j + 2) )
      {
        if ( v4 == v5 )
          return a1;
        goto LABEL_39;
      }
    }
    v39 = *(_BYTE **)v5;
    v40 = v5 + 16;
    v43 = (_BYTE *)*(j - 2);
    if ( *(char **)v5 != v5 + 16 )
    {
      v40 = *(_BYTE **)v5;
LABEL_28:
      if ( j != (_QWORD *)v43 )
      {
        *(_QWORD *)v5 = v43;
        v41 = *((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 1) = *(j - 1);
        *((_QWORD *)v5 + 2) = *j;
        if ( v39 )
        {
          *(j - 2) = v39;
          *j = v41;
LABEL_31:
          *(j - 1) = 0;
          v5 += 32;
          *v40 = 0;
          goto LABEL_32;
        }
LABEL_69:
        *(j - 2) = j;
        v40 = j;
        goto LABEL_31;
      }
      goto LABEL_70;
    }
LABEL_67:
    if ( j != (_QWORD *)v43 )
    {
      *(_QWORD *)v5 = v43;
      *((_QWORD *)v5 + 1) = *(j - 1);
      *((_QWORD *)v5 + 2) = *j;
      goto LABEL_69;
    }
LABEL_70:
    v67 = *(j - 1);
    v68 = v67;
    if ( v5 == (char *)(j - 2) )
    {
      v40 = v43;
      goto LABEL_31;
    }
    if ( !v67 )
    {
LABEL_79:
      *((_QWORD *)v5 + 1) = v67;
      v39[v67] = 0;
      v40 = (_BYTE *)*(j - 2);
      goto LABEL_31;
    }
    if ( v67 == 1 )
    {
      *v40 = *v43;
      v67 = *(j - 1);
      v39 = *(_BYTE **)v5;
      goto LABEL_79;
    }
    if ( (unsigned int)v67 >= 8 )
    {
      *(_QWORD *)v40 = *(_QWORD *)v43;
      *(_QWORD *)&v40[(unsigned int)v67 - 8] = *(_QWORD *)&v43[(unsigned int)v67 - 8];
      v79 = (unsigned __int64)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v80 = v43 - &v40[-v79];
      if ( (((_DWORD)v67 + (_DWORD)v40 - (_DWORD)v79) & 0xFFFFFFF8) >= 8 )
      {
        v81 = (v67 + (_DWORD)v40 - v79) & 0xFFFFFFF8;
        v82 = 0;
        do
        {
          v83 = v82;
          v82 += 8;
          *(_QWORD *)(v79 + v83) = *(_QWORD *)(v80 + v83);
        }
        while ( v82 < v81 );
      }
    }
    else
    {
      if ( (v67 & 4) != 0 )
      {
        *(_DWORD *)v40 = *(_DWORD *)v43;
        *(_DWORD *)&v40[(unsigned int)v67 - 4] = *(_DWORD *)&v43[(unsigned int)v67 - 4];
        v39 = *(_BYTE **)v5;
        v68 = *(j - 1);
        goto LABEL_78;
      }
      if ( !(_DWORD)v67 )
      {
LABEL_78:
        v67 = v68;
        goto LABEL_79;
      }
      *v40 = *v43;
      if ( (v67 & 2) != 0 )
      {
        *(_WORD *)&v40[(unsigned int)v67 - 2] = *(_WORD *)&v43[(unsigned int)v67 - 2];
        v39 = *(_BYTE **)v5;
        v68 = *(j - 1);
        goto LABEL_78;
      }
    }
    v39 = *(_BYTE **)v5;
    v68 = *(j - 1);
    goto LABEL_78;
  }
LABEL_39:
  v49 = a1[1];
  v50 = v49 - v4;
  if ( v4 == v49 )
    goto LABEL_51;
  v51 = v50 >> 5;
  if ( v50 <= 0 )
    goto LABEL_51;
  v52 = v4 + 16;
  v53 = v5;
  do
  {
    v55 = *(_BYTE **)v53;
    v56 = (_QWORD *)*(v52 - 2);
    v57 = *(_DWORD **)v53;
    if ( *(char **)v53 == v53 + 16 )
    {
      if ( v52 != v56 )
      {
        *(_QWORD *)v53 = v56;
        *((_QWORD *)v53 + 1) = *(v52 - 1);
        *((_QWORD *)v53 + 2) = *v52;
LABEL_49:
        *(v52 - 2) = v52;
        v55 = v52;
        goto LABEL_45;
      }
    }
    else if ( v52 != v56 )
    {
      *(_QWORD *)v53 = v56;
      v54 = *((_QWORD *)v53 + 2);
      *((_QWORD *)v53 + 1) = *(v52 - 1);
      *((_QWORD *)v53 + 2) = *v52;
      if ( v55 )
      {
        *(v52 - 2) = v55;
        *v52 = v54;
        goto LABEL_45;
      }
      goto LABEL_49;
    }
    v60 = *(v52 - 1);
    v61 = v60;
    if ( v53 == (char *)(v52 - 2) )
    {
      v55 = (_BYTE *)*(v52 - 2);
    }
    else
    {
      if ( !v60 )
        goto LABEL_66;
      if ( v60 != 1 )
      {
        if ( (unsigned int)v60 < 8 )
        {
          if ( (v60 & 4) != 0 )
          {
            *v57 = *(_DWORD *)v52;
            *(_DWORD *)((char *)v57 + (unsigned int)v60 - 4) = *(_DWORD *)((char *)v52 + (unsigned int)v60 - 4);
            v57 = *(_DWORD **)v53;
            v61 = *(v52 - 1);
          }
          else if ( (_DWORD)v60 )
          {
            *(_BYTE *)v57 = *(_BYTE *)v52;
            if ( (v60 & 2) == 0 )
              goto LABEL_64;
            *(_WORD *)((char *)v57 + (unsigned int)v60 - 2) = *(_WORD *)((char *)v52 + (unsigned int)v60 - 2);
            v57 = *(_DWORD **)v53;
            v61 = *(v52 - 1);
          }
        }
        else
        {
          *(_QWORD *)v57 = *v52;
          *(_QWORD *)((char *)v57 + (unsigned int)v60 - 8) = *(_QWORD *)((char *)v52 + (unsigned int)v60 - 8);
          v62 = (unsigned __int64)(v57 + 2) & 0xFFFFFFFFFFFFFFF8LL;
          v63 = (char *)v52 - ((char *)v57 - v62);
          if ( (((_DWORD)v60 + (_DWORD)v57 - (_DWORD)v62) & 0xFFFFFFF8) >= 8 )
          {
            v64 = (v60 + (_DWORD)v57 - v62) & 0xFFFFFFF8;
            v65 = 0;
            do
            {
              v66 = v65;
              v65 += 8;
              *(_QWORD *)(v62 + v66) = *(_QWORD *)(v63 + v66);
            }
            while ( v65 < v64 );
          }
LABEL_64:
          v57 = *(_DWORD **)v53;
          v61 = *(v52 - 1);
        }
        v60 = v61;
        v55 = v57;
LABEL_66:
        *((_QWORD *)v53 + 1) = v60;
        v55[v60] = 0;
        v55 = (_BYTE *)*(v52 - 2);
        goto LABEL_45;
      }
      *(_BYTE *)v57 = *(_BYTE *)v52;
      v73 = *(v52 - 1);
      v74 = *(_BYTE **)v53;
      *((_QWORD *)v53 + 1) = v73;
      v74[v73] = 0;
      v55 = (_BYTE *)*(v52 - 2);
    }
LABEL_45:
    *(v52 - 1) = 0;
    v53 += 32;
    v52 += 4;
    *v55 = 0;
    --v51;
  }
  while ( v51 );
  v49 = a1[1];
  v50 = v49 - v4;
LABEL_51:
  v58 = &v5[v50];
  if ( v58 != v49 )
  {
    v59 = v58;
    do
    {
      if ( *(char **)v59 != v59 + 16 )
        operator delete(*(void **)v59, *((_QWORD *)v59 + 2) + 1LL);
      v59 += 32;
    }
    while ( v59 != v49 );
    a1[1] = v58;
  }
  return a1;
}

