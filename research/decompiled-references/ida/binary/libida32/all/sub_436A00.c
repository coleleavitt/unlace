__int64 __fastcall sub_436A00(__int64 *a1, const char *a2, char a3, const char *a4)
{
  const char *v4; // r12
  char v7; // al
  unsigned __int64 v8; // r15
  int v9; // eax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  const char *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  const char *v16; // r13
  char *v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r10
  signed __int64 v22; // rax
  size_t v23; // r9
  bool v24; // al
  unsigned __int64 v25; // r15
  signed __int64 v26; // r13
  size_t v27; // r14
  __int64 v28; // rsi
  size_t v29; // r14
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  size_t v33; // rbp
  size_t v34; // rax
  char *v35; // r10
  __int64 v36; // rsi
  size_t v37; // rax
  __int64 v38; // rbp
  size_t v39; // r13
  size_t v40; // r14
  __int64 v41; // rsi
  const char *v42; // rax
  unsigned __int64 v43; // r15
  size_t v44; // rax
  unsigned __int64 v45; // rax
  size_t v46; // r14
  __int64 v47; // rsi
  unsigned __int64 v48; // rbp
  size_t v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  unsigned __int64 v56; // [rsp+0h] [rbp-98h]
  unsigned __int64 v57; // [rsp+0h] [rbp-98h]
  size_t v58; // [rsp+0h] [rbp-98h]
  unsigned __int64 v59; // [rsp+0h] [rbp-98h]
  size_t v60; // [rsp+0h] [rbp-98h]
  size_t v61; // [rsp+0h] [rbp-98h]
  unsigned __int64 v62; // [rsp+0h] [rbp-98h]
  size_t v63; // [rsp+0h] [rbp-98h]
  unsigned __int64 v64; // [rsp+0h] [rbp-98h]
  unsigned __int64 v65; // [rsp+0h] [rbp-98h]
  __int64 v66; // [rsp+8h] [rbp-90h]
  size_t v67; // [rsp+8h] [rbp-90h]
  unsigned __int64 v68; // [rsp+8h] [rbp-90h]
  unsigned __int64 v69; // [rsp+8h] [rbp-90h]
  unsigned __int64 v70; // [rsp+8h] [rbp-90h]
  const char *v71; // [rsp+10h] [rbp-88h]
  signed __int64 v72; // [rsp+10h] [rbp-88h]
  unsigned __int64 v73; // [rsp+10h] [rbp-88h]
  char *v74; // [rsp+10h] [rbp-88h]
  unsigned __int64 v75; // [rsp+18h] [rbp-80h]
  const char *v76; // [rsp+18h] [rbp-80h]
  unsigned __int64 v77; // [rsp+20h] [rbp-78h]
  char *s1; // [rsp+28h] [rbp-70h]
  char needle[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+58h] [rbp-40h]

  v4 = a2;
  v80 = __readfsqword(0x28u);
  v7 = getinf_flag(3, 4);
  v8 = (-(__int64)(v7 == 0) & 0xFFFFFFFFFFFFFFF8LL) + 27;
  if ( a4 )
  {
    v9 = strncmp(a4, a2, (-(__int64)(v7 == 0) & 0xFFFFFFFFFFFFFFF8LL) + 27);
    v10 = a4;
    if ( !v9 )
      return 0;
  }
  else
  {
    v10 = a2;
  }
  LODWORD(v11) = 0;
  do
  {
    v12 = (unsigned int)v11;
    v11 = (unsigned int)(v11 + 8);
    *(_QWORD *)&needle[v12] = *(_QWORD *)&v10[v12];
  }
  while ( (unsigned int)v11 < (v8 & 0xFFFFFFF8) );
  v13 = &v10[v11];
  *(_WORD *)&needle[v11] = *(_WORD *)v13;
  needle[v11 + 2] = v13[2];
  v14 = a1[1];
  needle[v8] = 0;
  v15 = 0;
  v16 = haystack;
  v66 = v14;
  if ( v14 )
  {
    v16 = (const char *)*a1;
    v15 = v14 - 1;
  }
  v17 = strstr(v16, needle);
  if ( !v17 || (v18 = v17 - v16, v17 - v16 == -1) )
  {
    if ( !a3 )
    {
      v36 = *a1;
      if ( a1[2] < v15 + 2 )
      {
        v52 = qvector_reserve(a1, v36, v15 + 2, 1);
        *a1 = v52;
        v36 = v52;
      }
      a1[1] = v15 + 2;
      *(_BYTE *)(v36 + v15) = 10;
      *(_BYTE *)(*a1 + v15 + 1) = 0;
      if ( v4 )
      {
        v37 = strlen(v4);
        v38 = a1[1];
        v39 = v37;
        v40 = v37;
        if ( v38 )
        {
          --v38;
          v40 = v37 + v38;
        }
        v41 = *a1;
        if ( a1[2] < v40 + 1 )
        {
          v53 = qvector_reserve(a1, v41, v40 + 1, 1);
          *a1 = v53;
          v41 = v53;
        }
        a1[1] = v40 + 1;
        *(_BYTE *)(v41 + v40) = 0;
        memmove((void *)(v38 + *a1), v4, v39);
      }
      return 1;
    }
    return 0;
  }
  v19 = v8 + v18;
  if ( v66 )
  {
    if ( v15 >= v19 )
      goto LABEL_11;
    if ( a3 )
    {
LABEL_78:
      if ( v18 && *(_BYTE *)(*a1 + v18 - 1) == 10 )
        --v18;
LABEL_81:
      if ( v18 >= v15 )
        return 1;
      goto LABEL_67;
    }
    if ( !a4 )
    {
      v4 = &a2[v8];
      v59 = v8 + v18;
      v25 = v66 - 1;
      v33 = v66 - 1 - v19;
      v34 = strlen(v4);
      v19 = v59;
      v23 = v34;
      v35 = (char *)&v16[v59];
      if ( v33 != v34 )
        goto LABEL_89;
      goto LABEL_34;
    }
    v23 = v8;
    if ( v18 >= v15 )
      goto LABEL_24;
LABEL_75:
    v23 = v8;
    v26 = v17 - v16;
LABEL_20:
    v28 = *a1;
    if ( a1[2] < (unsigned __int64)(v26 + 1) )
    {
      v70 = v18;
      v63 = v23;
      v50 = qvector_reserve(a1, v28, v26 + 1, 1);
      v18 = v70;
      v23 = v63;
      *a1 = v50;
      v28 = v50;
    }
    a1[1] = v26 + 1;
    *(_BYTE *)(v28 + v26) = 0;
    v66 = a1[1];
LABEL_23:
    if ( v66 )
    {
LABEL_24:
      v25 = v66 - 1;
      goto LABEL_25;
    }
LABEL_51:
    v30 = v23 + 1;
    v29 = v23;
    v25 = 0;
    if ( a1[2] >= v23 + 1 )
    {
      v42 = (const char *)*a1;
      a1[1] = v30;
      v25 = 0;
      v42[v23] = 0;
LABEL_29:
      memmove((void *)(v25 + *a1), v4, v23);
      return 1;
    }
    goto LABEL_53;
  }
  if ( v15 < v19 )
  {
    if ( a3 )
      goto LABEL_83;
    if ( !a4 )
    {
      v4 = &a2[v8];
      goto LABEL_58;
    }
    v23 = v8;
    if ( v18 >= v15 )
      goto LABEL_51;
    goto LABEL_75;
  }
LABEL_11:
  v77 = v17 - v16;
  v75 = v8 + v18;
  s1 = (char *)&v16[v19];
  v71 = &v16[v19];
  v20 = strchr(&v16[v19], 10);
  v21 = v71;
  v19 = v75;
  v18 = v77;
  if ( !v20 )
  {
    if ( !a3 )
    {
      if ( a4 )
        goto LABEL_14;
      v4 = &a2[v8];
      goto LABEL_57;
    }
    goto LABEL_77;
  }
  v22 = v20 - v16;
  if ( a3 )
  {
    if ( v22 != -1 )
    {
      v45 = v22 + 1;
      if ( v77 >= v15 || v45 == v77 )
        return 1;
      if ( v45 < v15 )
      {
        v46 = v15 - v45;
        memmove((void *)(v77 + *a1), (const void *)(*a1 + v45), v46);
        v18 = v46 + v77;
      }
      goto LABEL_67;
    }
LABEL_77:
    if ( v66 )
      goto LABEL_78;
LABEL_83:
    if ( !v18 )
      goto LABEL_81;
    if ( v18 == 1 )
    {
      if ( byte_2CA12E1 != 10 )
        goto LABEL_81;
    }
    else if ( *(_BYTE *)(*a1 + v18 - 1) != 10 )
    {
      goto LABEL_81;
    }
    if ( v18 - 1 >= v15 )
      return 1;
    --v18;
LABEL_67:
    v47 = *a1;
    v48 = v18 + 1;
    if ( a1[2] < v18 + 1 )
    {
      v64 = v18;
      v51 = qvector_reserve(a1, v47, v18 + 1, 1);
      v18 = v64;
      *a1 = v51;
      v47 = v51;
    }
    a1[1] = v48;
    *(_BYTE *)(v47 + v18) = 0;
    return 1;
  }
  v76 = v71;
  v72 = v22;
  v56 = v19;
  if ( a4 )
  {
LABEL_14:
    v23 = v8;
    v24 = 1;
LABEL_15:
    if ( v18 >= v15 || !v24 )
      goto LABEL_23;
    goto LABEL_17;
  }
  v4 = &a2[v8];
  v49 = strlen(&a2[v8]);
  v19 = v56;
  v21 = v76;
  v23 = v49;
  if ( v72 != -1 )
  {
    v8 = v72 - v56;
    if ( v72 - v56 != v49 )
    {
      v18 = v56;
      v24 = v72 != v56;
      goto LABEL_15;
    }
    goto LABEL_35;
  }
LABEL_57:
  if ( v66 )
  {
    v74 = (char *)v21;
    v65 = v19;
    v25 = v66 - 1;
    v33 = v66 - 1 - v19;
    v54 = strlen(v4);
    v19 = v65;
    v35 = v74;
    v23 = v54;
    if ( v54 != v33 )
    {
      if ( v33 && v65 < v15 )
      {
        v18 = v65;
LABEL_18:
        v26 = v18;
        if ( v25 < v15 )
        {
          v27 = v15 - v25;
          v67 = v23;
          v57 = v18;
          memmove((void *)(v18 + *a1), (const void *)(*a1 + v25), v27);
          v18 = v57;
          v23 = v67;
          v26 = v27 + v57;
        }
        goto LABEL_20;
      }
LABEL_89:
      v18 = v19;
LABEL_25:
      v29 = v25 + v23;
      v30 = v25 + v23 + 1;
      if ( a1[2] >= v30 )
      {
        v31 = *a1;
        goto LABEL_27;
      }
LABEL_53:
      v69 = v18;
      v61 = v23;
      v31 = qvector_reserve(a1, *a1, v30, 1);
      v18 = v69;
      v23 = v61;
      *a1 = v31;
LABEL_27:
      a1[1] = v30;
      *(_BYTE *)(v31 + v29) = 0;
      if ( v18 < v25 )
      {
        v58 = v23;
        v68 = v18;
        memmove((void *)(v18 + *a1 + v23), (const void *)(v18 + *a1), v25 - v18);
        v25 = v68;
        v23 = v58;
      }
      goto LABEL_29;
    }
LABEL_34:
    s1 = v35;
    v23 = v33;
    goto LABEL_35;
  }
LABEL_58:
  v43 = v19;
  v62 = v19;
  v44 = strlen(v4);
  v8 = -(__int64)v43;
  v19 = v62;
  v23 = v44;
  if ( v44 != v8 )
  {
    if ( v62 >= v15 || (v18 = v62) == 0 )
    {
      v18 = v62;
      goto LABEL_51;
    }
LABEL_17:
    v25 = v18 + v8;
    goto LABEL_18;
  }
  s1 = (char *)&v16[v62];
LABEL_35:
  v73 = v19;
  v60 = v23;
  if ( strncmp(s1, v4, v23) )
  {
    v23 = v60;
    v18 = v73;
    v8 = v60;
    v24 = v60 != 0;
    goto LABEL_15;
  }
  return 0;
}

