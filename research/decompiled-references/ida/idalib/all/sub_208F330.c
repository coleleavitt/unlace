__int64 __fastcall sub_208F330(_BYTE *a1, size_t a2)
{
  __int64 v2; // rax
  size_t v3; // rdx
  unsigned __int64 v4; // rax
  void *v5; // rcx
  size_t v6; // r12
  char **v7; // r15
  __int64 i; // rbp
  __int64 v9; // rbx
  size_t v10; // rdx
  char **v11; // r13
  size_t v12; // r14
  int v13; // eax
  unsigned __int64 v14; // r14
  char *v15; // rax
  __int64 v16; // rbx
  const char *v17; // rsi
  size_t v18; // rbp
  __int64 v19; // rdx
  size_t v20; // rax
  unsigned int v21; // ebx
  const char *v22; // rdi
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rax
  char *v26; // rbp
  __int64 v27; // rbx
  unsigned int *v28; // r12
  __int64 v29; // r15
  __int64 v30; // rbp
  const char *v31; // r13
  char *v32; // rbp
  __int64 v33; // r13
  __int64 v34; // rbx
  __int64 v35; // r15
  bool v36; // zf
  char *v37; // r13
  unsigned int *v38; // rcx
  char *v39; // r12
  __int64 v40; // rbp
  __int64 v41; // rbx
  int v42; // eax
  unsigned int *v43; // r15
  __int64 v44; // rax
  __int64 v45; // r12
  char *v46; // rcx
  char *v47; // r13
  unsigned __int64 v48; // rbp
  __int64 v49; // rbx
  unsigned int *v50; // r14
  int v51; // eax
  const char *v52; // r13
  __int64 v53; // r14
  const char *v54; // rbp
  const char *v55; // rax
  char *v56; // rax
  void *v58; // [rsp+10h] [rbp-A8h]
  char *v59; // [rsp+10h] [rbp-A8h]
  size_t v61; // [rsp+20h] [rbp-98h]
  unsigned int *v62; // [rsp+30h] [rbp-88h]
  char *v63; // [rsp+30h] [rbp-88h]
  char *v64; // [rsp+38h] [rbp-80h]
  char *v65; // [rsp+40h] [rbp-78h]
  char *v66; // [rsp+40h] [rbp-78h]
  char *v67; // [rsp+40h] [rbp-78h]
  char *v68; // [rsp+48h] [rbp-70h]
  char *v69; // [rsp+50h] [rbp-68h]
  char *v70; // [rsp+58h] [rbp-60h]
  unsigned int *v71; // [rsp+58h] [rbp-60h]
  char v72; // [rsp+6Fh] [rbp-49h] BYREF
  void *s2; // [rsp+70h] [rbp-48h] BYREF
  size_t n; // [rsp+78h] [rbp-40h]

  v2 = a2;
  v3 = 0;
  if ( a2 > 4 )
  {
    v3 = a2 - 5;
    v2 = 5;
  }
  n = v3;
  s2 = &a1[v2];
  v72 = 46;
  v4 = sub_2246AB0(&s2, &v72, 1, 0);
  v5 = s2;
  v6 = n;
  if ( v4 != -1 )
  {
    if ( n <= v4 )
      v4 = n;
    v6 = v4;
  }
  v7 = off_2BE5F60;
  for ( i = 19; ; i = v9 )
  {
    v10 = v6;
    v9 = i >> 1;
    v11 = &v7[4 * (i >> 1)];
    v12 = (size_t)v11[1];
    if ( v12 <= v6 )
      v10 = (size_t)v11[1];
    if ( v10 )
    {
      v58 = v5;
      v13 = memcmp(*v11, v5, v10);
      v5 = v58;
      if ( v13 )
        break;
    }
    if ( v12 != v6 && v12 < v6 )
      goto LABEL_10;
LABEL_11:
    if ( v9 <= 0 )
      goto LABEL_19;
LABEL_12:
    ;
  }
  if ( v13 < 0 )
  {
LABEL_10:
    v7 = v11 + 4;
    v9 = i - v9 - 1;
    goto LABEL_11;
  }
  if ( v9 > 0 )
    goto LABEL_12;
LABEL_19:
  if ( v7 == (char **)&unk_2BE61C0 || v7[1] != (char *)v6 )
    goto LABEL_38;
  if ( v6 )
  {
    if ( !memcmp(*v7, v5, v6) )
    {
      v14 = v6 + 5;
      v15 = (char *)&unk_2674464 + 4 * (_QWORD)v7[2];
      v16 = 4LL * (_QWORD)v7[3];
      v59 = v15;
      goto LABEL_24;
    }
LABEL_38:
    if ( a2 > 4 )
    {
      v69 = (char *)&unk_2674464;
      v16 = 2024;
      v14 = 4;
      v68 = (char *)&unk_2674C4C;
      v59 = (char *)&unk_2674464;
      goto LABEL_40;
    }
    v59 = (char *)&unk_2674464;
    v68 = (char *)&unk_2674C4C;
LABEL_91:
    v56 = v59;
    v69 = v59;
    v16 = v68 - v59;
LABEL_87:
    if ( v16 > 0 )
      v56 = v59;
    v59 = v56;
    goto LABEL_26;
  }
  v14 = 4;
  v15 = (char *)&unk_2674464 + 4 * (_QWORD)v7[2];
  v16 = 4LL * (_QWORD)v7[3];
  v59 = v15;
LABEL_24:
  v68 = &v15[v16];
  if ( v14 >= a2 )
    goto LABEL_91;
  v69 = v15;
  if ( v16 <= 0 )
    goto LABEL_26;
LABEL_40:
  v24 = v14 + 1;
  if ( v14 + 1 >= a2 )
    goto LABEL_65;
  while ( 2 )
  {
    v25 = memchr(&a1[v24], 46, a2 - v24);
    if ( !v25 )
    {
LABEL_65:
      v26 = (char *)a2;
      goto LABEL_44;
    }
    v26 = (char *)(v25 - a1);
    if ( v25 - a1 == -1 )
      v26 = (char *)a2;
LABEL_44:
    v27 = v16 >> 2;
    v28 = (unsigned int *)v59;
    v61 = (size_t)&v26[-v14];
    if ( a1 )
    {
      v29 = v27;
      v70 = v26;
      v65 = &a1[v14];
      while ( 1 )
      {
        v30 = v29 >> 1;
        v64 = &a1[v14];
        v62 = &v28[v29 >> 1];
        v31 = &byte_2683120[v14 + *v62];
        if ( strncmp(v31, v65, v61) < 0 )
        {
          v28 = v62 + 1;
          v30 = v29 - v30 - 1;
        }
        else if ( strncmp(v65, v31, v61) >= 0 )
        {
          v32 = v70;
          v33 = 4 * (v29 >> 1);
          v34 = v29;
          goto LABEL_52;
        }
        if ( v30 <= 0 )
          goto LABEL_26;
        v29 = v30;
      }
    }
    v52 = (const char *)v14;
    v67 = v26;
    v53 = v27;
    while ( 2 )
    {
      v64 = (char *)v52;
      v62 = &v28[v53 >> 1];
      v54 = &byte_2683120[(_QWORD)&v52[*v62]];
      if ( strncmp(v54, v52, v61) < 0 )
      {
        v53 = v53 - (v53 >> 1) - 1;
        v28 = v62 + 1;
        goto LABEL_74;
      }
      if ( strncmp(v52, v54, v61) < 0 )
      {
        v53 >>= 1;
LABEL_74:
        if ( v53 <= 0 )
          goto LABEL_26;
        continue;
      }
      break;
    }
    v55 = v52;
    v32 = v67;
    v33 = 4 * (v53 >> 1);
    v34 = v53;
    v14 = (unsigned __int64)v55;
LABEL_52:
    v35 = v33 >> 2;
    v36 = v33 == 0;
    v37 = (char *)v28;
    if ( !v36 )
    {
      v38 = v28;
      v39 = v32;
      v40 = v34;
      do
      {
        while ( 1 )
        {
          v71 = v38;
          v41 = v35 >> 1;
          v66 = &v37[4 * (v35 >> 1)];
          v42 = strncmp(&byte_2683120[v14 + *(unsigned int *)v66], v64, v61);
          v38 = v71;
          if ( v42 >= 0 )
            break;
          v35 = v35 - v41 - 1;
          v37 = v66 + 4;
          if ( v35 <= 0 )
            goto LABEL_56;
        }
        v35 >>= 1;
      }
      while ( v41 );
LABEL_56:
      v34 = v40;
      v32 = v39;
      v28 = v71;
    }
    v43 = v62 + 1;
    v44 = (char *)&v28[v34] - (char *)(v62 + 1);
    v45 = v44 >> 2;
    if ( v44 > 0 )
    {
      v46 = v37;
      v47 = v32;
      v48 = v14;
      do
      {
        while ( 1 )
        {
          v63 = v46;
          v49 = v45 >> 1;
          v50 = &v43[v45 >> 1];
          v51 = strncmp(v64, &byte_2683120[v48 + *v50], v61);
          v46 = v63;
          if ( v51 < 0 )
            break;
          v43 = v50 + 1;
          v45 = v45 - v49 - 1;
          if ( v45 <= 0 )
            goto LABEL_61;
        }
        v45 >>= 1;
      }
      while ( v49 );
LABEL_61:
      v32 = v47;
      v37 = v63;
    }
    v16 = (char *)v43 - v37;
    if ( (unsigned __int64)v32 >= a2 )
    {
      v56 = v59;
      v59 = v37;
      goto LABEL_87;
    }
    v14 = (unsigned __int64)v32;
    if ( v16 > 0 )
    {
      v59 = v37;
      v24 = (unsigned __int64)(v32 + 1);
      if ( (unsigned __int64)(v32 + 1) < a2 )
        continue;
      goto LABEL_65;
    }
    break;
  }
LABEL_26:
  if ( v59 == v68 )
    return 0;
  v17 = &byte_2683120[*(unsigned int *)v59];
  if ( v17 )
  {
    v18 = strlen(v17);
    if ( v18 == a2 )
    {
      if ( !a2 || !memcmp(a1, v17, a2) )
      {
LABEL_31:
        v19 = (v59 - v69) >> 2;
        if ( (_DWORD)v19 != -1 )
        {
          v20 = 0;
          v21 = v19 + ((v69 - (char *)&unk_2674460) >> 2);
          v22 = &byte_2683120[*(unsigned int *)&v69[4 * (int)v19]];
          if ( v22 )
            v20 = strlen(v22);
          if ( v20 != a2 && (((int)byte_2673CE0[v21 >> 3] >> (v21 & 7)) & 1) == 0 )
            return 0;
          return v21;
        }
      }
      return 0;
    }
    if ( v18 > a2 )
      return 0;
    if ( v18 )
    {
      if ( memcmp(a1, v17, v18) )
        return 0;
      goto LABEL_81;
    }
  }
  else if ( !a2 )
  {
    goto LABEL_31;
  }
  v18 = 0;
LABEL_81:
  if ( a1[v18] == 46 )
    goto LABEL_31;
  return 0;
}
