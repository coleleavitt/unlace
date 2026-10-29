__int64 __fastcall sub_DA7360(double *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  double *v4; // r8
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  double v9; // r9
  double *v10; // rsi
  char *v11; // rbp
  double v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned int v16; // edi
  double v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  unsigned int *v20; // rsi
  bool v21; // zf
  __int64 v22; // rdi
  unsigned int v23; // esi
  unsigned int *v24; // rsi
  __int64 v25; // r13
  double *v26; // r11
  __int64 v27; // r9
  __int64 v28; // r10
  bool v29; // bp
  __int64 v30; // r12
  double *v31; // rdi
  __int64 i; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  double v35; // rcx
  unsigned int *v36; // r14
  unsigned int v37; // r15d
  double v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edi
  double *v41; // rcx
  double v42; // rsi
  unsigned int *v43; // r14
  unsigned int v44; // edi
  double v45; // rax
  unsigned int v46; // r9d
  double *v47; // rdi
  double v48; // rcx
  unsigned int *v49; // rsi
  __int64 v50; // r12
  __int64 v51; // r11
  __int64 j; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  double v55; // rcx
  unsigned int *v56; // r14
  unsigned int v57; // r15d
  __int64 v58; // rax
  __int64 v59; // rdx
  double v60; // rax

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v4 = (double *)a2;
  v5 = a3;
  v6 = result >> 4;
  v7 = (a2 - (char *)a1) >> 3;
  while ( v5 )
  {
    v9 = a1[1];
    v10 = &a1[v6];
    --v5;
    v11 = (char *)(a1 + 1);
    v12 = *v10;
    v13 = *(_DWORD *)(*(_QWORD *)&v9 & 0xFFFFFFFFFFFFFFFELL);
    v14 = *(_DWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( v13 < v14 || v13 == v14 && (LOBYTE(v9) & 1) != 0 && (LOBYTE(v12) & 1) == 0 )
    {
      v15 = *((_QWORD *)v4 - 1);
      v44 = *(_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
      if ( v14 < v44 || v14 == v44 && (LOBYTE(v12) & 1) != 0 && (v15 & 1) == 0 )
      {
LABEL_9:
        v17 = *a1;
        *a1 = v12;
        *v10 = v17;
        v9 = *a1;
        v13 = *(_DWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_10;
      }
      if ( v13 < v44 || v13 == v44 && (LOBYTE(v9) & 1) != 0 && (v15 & 1) == 0 )
        goto LABEL_57;
    }
    else
    {
      v15 = *((_QWORD *)v4 - 1);
      v16 = *(_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFELL);
      if ( v13 >= v16 )
      {
        if ( v13 != v16 )
        {
          if ( v14 >= v16 )
          {
            if ( v14 != v16 )
              goto LABEL_9;
            goto LABEL_55;
          }
          goto LABEL_57;
        }
        if ( (LOBYTE(v9) & 1) == 0 || (v15 & 1) != 0 )
        {
          if ( v14 >= v16 )
          {
LABEL_55:
            if ( (LOBYTE(v12) & 1) == 0 || (v15 & 1) != 0 )
              goto LABEL_9;
          }
LABEL_57:
          v45 = *a1;
          *(_QWORD *)a1 = v15;
          *(v4 - 1) = v45;
          v9 = *a1;
          v13 = *(_DWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL);
          goto LABEL_10;
        }
      }
    }
    *(__m128 *)a1 = _mm_loadh_ps(a1);
LABEL_10:
    v18 = (char *)v4;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)v11;
        v20 = (unsigned int *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFELL);
        v21 = *v20 == v13;
        if ( *v20 >= v13 )
          break;
LABEL_17:
        v11 += 8;
      }
LABEL_12:
      if ( !v21 || (v19 & 1) == 0 || (LOBYTE(v9) & 1) != 0 )
        break;
      v11 += 8;
    }
    do
    {
      do
      {
        v22 = *((_QWORD *)v18 - 1);
        v18 -= 8;
        v23 = *(_DWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
      }
      while ( v13 < v23 );
      if ( v23 != v13 || (LOBYTE(v9) & 1) == 0 )
      {
        if ( v11 >= v18 )
          goto LABEL_21;
LABEL_16:
        *(_QWORD *)v11 = v22;
        v11 += 8;
        *(_QWORD *)v18 = v19;
        v9 = *a1;
        v19 = *(_QWORD *)v11;
        v24 = (unsigned int *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFELL);
        v13 = *(_DWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFELL);
        v21 = *v24 == v13;
        if ( *v24 >= v13 )
          goto LABEL_12;
        goto LABEL_17;
      }
    }
    while ( (v22 & 1) == 0 );
    if ( v11 < v18 )
      goto LABEL_16;
LABEL_21:
    sub_DA7360(v11, v4, v5);
    result = v11 - (char *)a1;
    if ( v11 - (char *)a1 <= 128 )
      return result;
    v4 = (double *)v11;
    v6 = result >> 4;
    v7 = (v11 - (char *)a1) >> 3;
  }
  v25 = v6 - 1;
  v26 = &a1[v6 - 1];
  v27 = (v7 - 1) >> 1;
  v28 = v6 - 1;
  v29 = (v7 & 1) == 0;
  v30 = *(_QWORD *)v26;
  v31 = v26;
  if ( v6 - 1 >= v27 )
    goto LABEL_40;
LABEL_24:
  for ( i = v28; ; i = v33 )
  {
    v33 = 2 * (i + 1);
    v31 = &a1[2 * i + 2];
    v34 = *((_QWORD *)v31 - 1);
    v35 = *v31;
    v36 = (unsigned int *)(*(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFELL);
    v37 = *(_DWORD *)(v34 & 0xFFFFFFFFFFFFFFFELL);
    if ( *v36 < v37 )
    {
      v31 = &a1[--v33];
      v38 = *v31;
      goto LABEL_30;
    }
    if ( *v36 == v37 && (LOBYTE(v35) & 1) != 0 && (v34 & 1) == 0 )
      break;
    a1[i] = v35;
    if ( v33 >= v27 )
      goto LABEL_31;
LABEL_27:
    ;
  }
  v31 = &a1[--v33];
  v38 = *v31;
LABEL_30:
  a1[i] = v38;
  if ( v33 < v27 )
    goto LABEL_27;
LABEL_31:
  if ( v25 == v33 && v29 )
  {
LABEL_99:
    v59 = 2 * v33 + 2;
    v60 = a1[v59 - 1];
    v33 = v59 - 1;
    *v31 = v60;
    v31 = &a1[v33];
  }
  v39 = (v33 - 1) >> 1;
  if ( v28 >= v33 )
  {
    while ( 1 )
    {
      *(_QWORD *)v31 = v30;
LABEL_39:
      --v26;
      --v28;
      v30 = *(_QWORD *)v26;
      v31 = v26;
      if ( v28 < v27 )
        goto LABEL_24;
LABEL_40:
      if ( v25 == v28 && v29 )
      {
        v33 = v28;
        goto LABEL_99;
      }
    }
  }
  v40 = *(_DWORD *)(v30 & 0xFFFFFFFFFFFFFFFELL);
  while ( 1 )
  {
    v41 = &a1[v39];
    v42 = *v41;
    v43 = (unsigned int *)(*(_QWORD *)v41 & 0xFFFFFFFFFFFFFFFELL);
    if ( *v43 >= v40 && (*v43 != v40 || (LOBYTE(v42) & 1) == 0 || (v30 & 1) != 0) )
      break;
    a1[v33] = v42;
    v33 = v39;
    if ( v28 >= v39 )
      goto LABEL_38;
    v39 = (v39 - 1) / 2;
  }
  v41 = &a1[v33];
LABEL_38:
  *(_QWORD *)v41 = v30;
  if ( v28 )
    goto LABEL_39;
  result = (char *)v4 - (char *)a1;
  if ( (char *)v4 - (char *)a1 > 8 )
  {
    while ( 2 )
    {
      v50 = *(_QWORD *)--v4;
      *v4 = *a1;
      v51 = v4 - a1;
      result = v51 - 1;
      if ( (char *)v4 - (char *)a1 <= 16 )
      {
        v47 = a1;
        if ( (v51 & 1) != 0 || (unsigned __int64)result > 2 )
          goto LABEL_65;
        v53 = 0;
      }
      else
      {
        for ( j = 0; ; j = v53 )
        {
          v53 = 2 * (j + 1);
          v47 = &a1[2 * j + 2];
          v54 = *((_QWORD *)v47 - 1);
          v55 = *v47;
          v56 = (unsigned int *)(*(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFELL);
          v57 = *(_DWORD *)(v54 & 0xFFFFFFFFFFFFFFFELL);
          if ( *v56 >= v57 )
          {
            if ( *v56 == v57 && (LOBYTE(v55) & 1) != 0 && (v54 & 1) == 0 )
            {
              v47 = &a1[--v53];
              v55 = *v47;
            }
          }
          else
          {
            v47 = &a1[--v53];
            v55 = *v47;
          }
          a1[j] = v55;
          if ( (v51 - 1) / 2 <= v53 )
            break;
        }
        if ( (v51 & 1) != 0 || v53 != (v51 - 2) >> 1 )
        {
          result = (v53 - 1) / 2;
          if ( !v53 )
          {
            *(_QWORD *)v47 = v50;
            continue;
          }
LABEL_61:
          v46 = *(_DWORD *)(v50 & 0xFFFFFFFFFFFFFFFELL);
          while ( 1 )
          {
            v47 = &a1[result];
            v48 = *v47;
            v49 = (unsigned int *)(*(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFELL);
            if ( *v49 >= v46 && (*v49 != v46 || (LOBYTE(v48) & 1) == 0 || (v50 & 1) != 0) )
              break;
            a1[v53] = v48;
            v53 = result;
            if ( !result )
              goto LABEL_65;
            result = (result - 1) / 2;
          }
          v47 = &a1[v53];
LABEL_65:
          *(_QWORD *)v47 = v50;
          if ( (char *)v4 - (char *)a1 <= 8 )
            return result;
          continue;
        }
      }
      break;
    }
    v58 = 2 * v53 + 2;
    *v47 = a1[v58 - 1];
    v53 = 2 * v53 + 1;
    result = (v58 >> 1) - 1;
    goto LABEL_61;
  }
  return result;
}

