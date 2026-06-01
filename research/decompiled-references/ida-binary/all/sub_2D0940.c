void __fastcall sub_2D0940(const char ***a1, __int64 *a2, __int64 *a3, char **a4)
{
  char *v4; // r13
  char v5; // al
  char *i; // rbp
  const char **v10; // rdx
  const char **v11; // rsi
  const char **v12; // r15
  size_t v13; // r9
  const char *v14; // r10
  const char *v15; // r8
  __int64 v16; // rsi
  const char *v17; // rdx
  char *v18; // rsi
  const char **v19; // r15
  const char *v20; // rbp
  unsigned __int64 v21; // rbp
  const char *v22; // r13
  const char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  const char **v27; // rax
  const char *v28; // rdi
  const char **v29; // rbp
  bool v30; // zf
  const char *v31; // r13
  size_t v32; // rax
  size_t v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rdi
  size_t v41; // r15
  __int64 v42; // rax
  __int64 v43; // rax
  const char *v44; // [rsp+0h] [rbp-58h]
  const char *v45; // [rsp+10h] [rbp-48h]
  size_t v46; // [rsp+18h] [rbp-40h]

  if ( !a4[1] )
    return;
  v4 = *a4;
  v5 = **a4;
  if ( !v5 )
    return;
  do
  {
    for ( i = v4; ; ++i )
    {
      if ( (unsigned __int8)(v5 - 1) > 3u )
      {
        if ( !v5 )
          goto LABEL_11;
      }
      else
      {
        i = (char *)(tag_advance(i, 1) - 1);
        v5 = *i;
        if ( !*i )
          goto LABEL_11;
      }
      if ( v5 == 13 )
        break;
      if ( v5 == 10 )
        goto LABEL_11;
      v5 = i[1];
LABEL_8:
      ;
    }
    v5 = i[1];
    if ( v5 != 10 )
      goto LABEL_8;
LABEL_11:
    v10 = a1[1];
    v11 = *a1;
    if ( a1[2] < (const char **)((char *)v10 + 1) )
    {
      v37 = qvector_reserve(a1, v11, (char *)v10 + 1, 24);
      v10 = a1[1];
      *a1 = (const char **)v37;
      v11 = (const char **)v37;
    }
    v12 = &v11[3 * (_QWORD)v10];
    v13 = i - v4;
    *(_OWORD *)(v12 + 1) = 0;
    v14 = (const char *)(i - v4);
    *v12 = nullptr;
    a1[1] = (const char **)((char *)a1[1] + 1);
    v15 = v12[1];
    if ( v15 )
    {
      --v15;
      v14 = &v15[v13];
    }
    v16 = (__int64)*v12;
    v17 = v14 + 1;
    if ( v12[2] < v14 + 1 )
    {
      v46 = (size_t)v14;
      v45 = v15;
      v44 = v14 + 1;
      v38 = qvector_reserve(v12, v16, v17, 1);
      v14 = (const char *)v46;
      v15 = v45;
      v13 = i - v4;
      v17 = v44;
      *v12 = (const char *)v38;
      v16 = v38;
    }
    v12[1] = v17;
    v14[v16] = 0;
    v18 = v4;
    v4 = i;
    memmove((void *)&(*v12)[(_QWORD)v15], v18, v13);
    v5 = *i;
    if ( *i == 13 )
    {
      v5 = i[1];
      v4 = i + 1;
    }
    if ( v5 == 10 )
      v5 = *++v4;
  }
  while ( v5 );
  if ( a1[1] )
  {
    do
    {
      v19 = *a1;
      v20 = (*a1)[1];
      if ( !v20 )
        break;
      v21 = (unsigned __int64)(v20 - 1);
      if ( v21 <= 7 )
        break;
      v22 = *v19;
      v23 = "CAPTION ";
      if ( !strncmp(*v19, "CAPTION ", 8u) )
      {
        v31 = v22 + 8;
        v32 = strlen(v31);
        v33 = v32;
        if ( v32 )
        {
          v40 = (void *)*a3;
          v41 = v32 + 1;
          if ( a3[2] < v32 + 1 )
          {
            v43 = qvector_reserve(a3, *a3, v32 + 1, 1);
            *a3 = v43;
            v40 = (void *)v43;
          }
          a3[1] = v41;
          v23 = v31;
          memmove(v40, v31, v33);
          *(_BYTE *)(*a3 + v33) = 0;
        }
        else
        {
          a3[1] = 0;
        }
      }
      else
      {
        if ( v21 <= 9 )
          return;
        if ( !strncmp(v22, "HIGHLIGHT ", 0xAu) )
        {
          v34 = a2[1];
          v35 = *a2;
          if ( a2[2] < (unsigned __int64)(v34 + 1) )
          {
            v42 = qvector_reserve(a2, v35, v34 + 1, 80);
            *a2 = v42;
            v35 = v42;
            v34 = a2[1];
          }
          v36 = v35 + 80 * v34;
          *(_QWORD *)v36 = 0;
          *(_QWORD *)(v36 + 8) = 0;
          *(_QWORD *)(v36 + 32) = 0;
          *(_DWORD *)(v36 + 72) = 0;
          *(_OWORD *)(v36 + 16) = 0;
          *(_OWORD *)(v36 + 40) = 0;
          *(_OWORD *)(v36 + 56) = 0;
          ++a2[1];
          v23 = *v19 + 10;
          sub_1E88D0(v36, v23, 1);
        }
        else
        {
          if ( v21 <= 0x11 || strncmp(v22, "HIGHLIGHT_NOIDENT ", 0x12u) )
            return;
          v24 = a2[1];
          v25 = *a2;
          if ( a2[2] < (unsigned __int64)(v24 + 1) )
          {
            v39 = qvector_reserve(a2, v25, v24 + 1, 80);
            *a2 = v39;
            v25 = v39;
            v24 = a2[1];
          }
          v26 = v25 + 80 * v24;
          *(_QWORD *)v26 = 0;
          *(_QWORD *)(v26 + 8) = 0;
          *(_QWORD *)(v26 + 32) = 0;
          *(_DWORD *)(v26 + 72) = 0;
          *(_OWORD *)(v26 + 16) = 0;
          *(_OWORD *)(v26 + 40) = 0;
          *(_OWORD *)(v26 + 56) = 0;
          ++a2[1];
          v23 = *v19 + 18;
          sub_1E88D0(v26, v23, 0);
        }
      }
      v27 = *a1;
      v28 = **a1;
      v29 = *a1;
      if ( v28 )
      {
        v27[1] = nullptr;
        qfree(v28, v23);
        v27 = *a1;
      }
      memmove(v29, v29 + 3, (char *)&v27[3 * (_QWORD)a1[1]] - (char *)v29 - 24);
      v30 = a1[1] == (const char **)((char *)&dword_0 + 1);
      a1[1] = (const char **)((char *)a1[1] - 1);
    }
    while ( !v30 );
  }
}
