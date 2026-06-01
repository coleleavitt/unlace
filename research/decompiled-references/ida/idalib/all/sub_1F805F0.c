__int64 __fastcall sub_1F805F0(__int64 *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char *v5; // r12
  __int64 v6; // r13
  __int64 *v7; // rax
  __int64 v8; // r14
  unsigned int *v9; // rdi
  unsigned int *v10; // rcx
  size_t v11; // rbp
  const void *v12; // r10
  size_t v13; // r15
  size_t v14; // rdx
  void *v15; // rcx
  int v16; // eax
  __int64 v17; // r10
  unsigned int *v18; // rsi
  size_t v19; // rbp
  size_t v20; // rdx
  int v21; // eax
  char v22; // al
  __int64 v23; // rdx
  unsigned int *v24; // rax
  char *v25; // r15
  unsigned __int64 v26; // r14
  size_t v27; // r13
  const void *v28; // rbp
  __int64 v29; // rax
  unsigned int *v30; // rdi
  size_t v31; // r10
  size_t v32; // rdx
  int v33; // eax
  __int64 v34; // r11
  unsigned int *v35; // rsi
  void *v36; // r10
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  unsigned int *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 *v43; // r13
  __int64 v44; // r12
  __int64 v45; // rbp
  __int64 v46; // r14
  unsigned int *v47; // rsi
  unsigned int *v48; // rdi
  size_t v49; // r9
  size_t v50; // r15
  size_t v51; // rdx
  int v52; // eax
  __int64 v53; // r12
  unsigned int *v54; // r13
  void *v55; // rax
  size_t v56; // r14
  __int64 v57; // r13
  __int64 v58; // r9
  unsigned int *v59; // rdi
  size_t v60; // rcx
  size_t v61; // rdx
  int v62; // eax
  __int64 *v63; // r13
  __int64 v64; // rcx
  unsigned int *v65; // rsi
  size_t v66; // r15
  size_t v67; // rdx
  int v68; // eax
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 *v74; // rbp
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // [rsp+0h] [rbp-78h]
  size_t v80; // [rsp+0h] [rbp-78h]
  __int64 v81; // [rsp+0h] [rbp-78h]
  __int64 v82; // [rsp+8h] [rbp-70h] BYREF
  __int64 v83; // [rsp+10h] [rbp-68h]
  void *s2; // [rsp+18h] [rbp-60h]
  __int64 *v85; // [rsp+20h] [rbp-58h]
  __int64 *v86; // [rsp+28h] [rbp-50h]
  __int64 v87; // [rsp+30h] [rbp-48h]
  bool v88; // [rsp+3Fh] [rbp-39h]

  result = a2 - (char *)a1;
  v79 = a3;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  v5 = a2;
  if ( !a3 )
  {
    v86 = (__int64 *)a2;
    goto LABEL_38;
  }
  v85 = a1 + 1;
  do
  {
    v6 = a1[1];
    --v79;
    v7 = &a1[result >> 4];
    v8 = *v7;
    v9 = *(unsigned int **)(v6 + 16);
    v82 = (__int64)v7;
    v10 = *(unsigned int **)(v8 + 16);
    v11 = *v9;
    v12 = v9 + 4;
    v13 = *v10;
    v14 = v11;
    v15 = v10 + 4;
    if ( v13 <= v11 )
      v14 = v13;
    if ( v14
      && (s2 = v15, v83 = (__int64)(v9 + 4), v16 = memcmp(v9 + 4, v15, v14), v12 = (const void *)v83, v15 = s2, v16) )
    {
      if ( v16 >= 0 )
        goto LABEL_69;
    }
    else if ( v13 == v11 || v13 <= v11 )
    {
LABEL_69:
      v64 = *((_QWORD *)v5 - 1);
      v65 = *(unsigned int **)(v64 + 16);
      v66 = *v65;
      v67 = v66;
      if ( v11 <= v66 )
        v67 = v11;
      if ( v67 && (v83 = *((_QWORD *)v5 - 1), v68 = memcmp(v12, v65 + 4, v67), v64 = v83, v68) )
      {
        if ( v68 >= 0 )
          goto LABEL_75;
      }
      else if ( v11 == v66 || v11 >= v66 )
      {
LABEL_75:
        v83 = v64;
        v69 = sub_1F6DD80(v8, v64);
        v70 = *a1;
        if ( v69 )
        {
          *a1 = v83;
          *((_QWORD *)v5 - 1) = v70;
        }
        else
        {
          v78 = (_QWORD *)v82;
          *a1 = v8;
          *v78 = v70;
        }
        v6 = *a1;
        goto LABEL_18;
      }
      v71 = *a1;
      *a1 = v6;
      a1[1] = v71;
      goto LABEL_18;
    }
    v17 = *((_QWORD *)v5 - 1);
    v18 = *(unsigned int **)(v17 + 16);
    v19 = *v18;
    v20 = v19;
    if ( v13 <= v19 )
      v20 = v13;
    if ( v20 && (v83 = *((_QWORD *)v5 - 1), v21 = memcmp(v15, v18 + 4, v20), v17 = v83, v21) )
    {
      if ( v21 >= 0 )
        goto LABEL_16;
    }
    else if ( v13 == v19 || v13 >= v19 )
    {
LABEL_16:
      v82 = v17;
      v22 = sub_1F6DD80(v6, v17);
      v23 = *a1;
      if ( v22 )
      {
        *a1 = v82;
        *((_QWORD *)v5 - 1) = v23;
        v6 = *a1;
      }
      else
      {
        v82 = *a1;
        *(__m128 *)a1 = _mm_loadh_ps((const double *)&v82);
      }
      goto LABEL_18;
    }
    v72 = *a1;
    v73 = (_QWORD *)v82;
    *a1 = v8;
    *v73 = v72;
    v6 = *a1;
LABEL_18:
    v24 = *(unsigned int **)(v6 + 16);
    v25 = (char *)v85;
    v26 = (unsigned __int64)v5;
    v27 = *v24;
    v28 = v24 + 4;
    while ( 1 )
    {
      v29 = *(_QWORD *)v25;
      v86 = (__int64 *)v25;
      v30 = *(unsigned int **)(v29 + 16);
      v82 = v29;
      v31 = *v30;
      v32 = v31;
      if ( v27 <= v31 )
        v32 = v27;
      if ( !v32 )
        break;
      v83 = *v30;
      v33 = memcmp(v30 + 4, v28, v32);
      v31 = v83;
      if ( !v33 )
        break;
      if ( v33 >= 0 )
        goto LABEL_26;
LABEL_19:
      v25 += 8;
    }
    if ( v27 != v31 && v27 > v31 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
LABEL_26:
        v26 -= 8LL;
        v34 = *(_QWORD *)v26;
        v35 = *(unsigned int **)(*(_QWORD *)v26 + 16LL);
        v36 = (void *)*v35;
        v37 = (size_t)v36;
        if ( v27 <= (unsigned __int64)v36 )
          v37 = v27;
        if ( v37 )
        {
          s2 = (void *)*v35;
          v83 = v34;
          v38 = memcmp(v28, v35 + 4, v37);
          v34 = v83;
          v36 = s2;
          if ( v38 )
            break;
        }
        if ( (void *)v27 == v36 || v27 >= (unsigned __int64)v36 )
        {
          if ( (unsigned __int64)v25 >= v26 )
            goto LABEL_36;
LABEL_33:
          v39 = v82;
          *(_QWORD *)v25 = v34;
          *(_QWORD *)v26 = v39;
          v40 = *(unsigned int **)(*a1 + 16);
          v27 = *v40;
          v28 = v40 + 4;
          goto LABEL_19;
        }
      }
    }
    while ( v38 < 0 );
    if ( (unsigned __int64)v25 < v26 )
      goto LABEL_33;
LABEL_36:
    sub_1F805F0(v25, v5, v79);
    result = v25 - (char *)a1;
    if ( v25 - (char *)a1 <= 128 )
      return result;
    v5 = v25;
  }
  while ( v79 );
LABEL_38:
  v41 = result >> 3;
  v87 = (v41 - 2) >> 1;
  v42 = v87;
  v83 = (v41 - 1) >> 1;
  v88 = (v41 & 1) == 0;
  while ( 2 )
  {
    v43 = &a1[v42];
    v85 = (__int64 *)*v43;
    if ( v42 >= v83 )
    {
      v45 = v42;
      goto LABEL_52;
    }
    v82 = v42;
    v44 = v42;
    while ( 2 )
    {
      while ( 2 )
      {
        v45 = 2 * (v44 + 1);
        v43 = &a1[2 * v44 + 2];
        v46 = *v43;
        v47 = *(unsigned int **)(*(v43 - 1) + 16);
        v48 = *(unsigned int **)(*v43 + 16);
        v49 = *v47;
        v50 = *v48;
        v51 = v50;
        if ( v49 <= v50 )
          v51 = *v47;
        if ( !v51 || (v80 = *v47, v52 = memcmp(v48 + 4, v47 + 4, v51), v49 = v80, !v52) )
        {
          if ( v49 == v50 || v49 <= v50 )
          {
LABEL_44:
            a1[v44] = v46;
            v44 = v45;
            if ( v45 >= v83 )
              goto LABEL_51;
            continue;
          }
LABEL_43:
          v43 = &a1[--v45];
          v46 = *v43;
          goto LABEL_44;
        }
        break;
      }
      if ( v52 < 0 )
        goto LABEL_43;
      a1[v44] = v46;
      v44 = 2 * (v44 + 1);
      if ( v45 < v83 )
        continue;
      break;
    }
LABEL_51:
    v42 = v82;
LABEL_52:
    if ( v87 == v45 && v88 )
    {
      v76 = 2 * v45 + 2;
      v77 = a1[v76 - 1];
      v45 = v76 - 1;
      *v43 = v77;
      v43 = &a1[v45];
    }
    v53 = (v45 - 1) >> 1;
    if ( v42 >= v45 )
    {
      *v43 = (__int64)v85;
LABEL_65:
      --v42;
      continue;
    }
    break;
  }
  v54 = (unsigned int *)v85[2];
  v55 = v54 + 4;
  v56 = *v54;
  v57 = v45;
  s2 = v55;
  while ( 1 )
  {
    v58 = a1[v53];
    v59 = *(unsigned int **)(v58 + 16);
    v60 = *v59;
    v61 = v60;
    if ( v56 <= v60 )
      v61 = v56;
    if ( v61 && (v82 = *v59, v81 = v58, v62 = memcmp(v59 + 4, s2, v61), v58 = v81, v60 = v82, v62) )
    {
      if ( v62 >= 0 )
        goto LABEL_63;
    }
    else if ( v56 == v60 || v56 <= v60 )
    {
LABEL_63:
      v63 = &a1[v57];
      goto LABEL_64;
    }
    a1[v57] = v58;
    v57 = v53;
    if ( v42 >= v53 )
      break;
    v53 = (v53 - 1) / 2;
  }
  v63 = &a1[v53];
LABEL_64:
  *v63 = (__int64)v85;
  if ( v42 )
    goto LABEL_65;
  v74 = v86;
  do
  {
    v75 = *--v74;
    *v74 = *a1;
    result = sub_1F6D6D0(a1, v74 - a1, v75);
  }
  while ( (char *)v74 - (char *)a1 > 8 );
  return result;
}
